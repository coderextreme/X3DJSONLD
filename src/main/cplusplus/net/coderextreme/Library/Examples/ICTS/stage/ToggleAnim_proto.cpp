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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("ToggleAnim"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("direction"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOnly"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("forward"));
field12.setAccessType(CString("inputOnly"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("back"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("state_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFBool"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("set_isActive"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFBool"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("forwardTimer"));
field16.setAccessType(CString("initializeOnly"));
field16.setType(CString("SFNode"));
TimeSensor& TimeSensor17 =  TimeSensor();
TimeSensor17.setDEF(CString("_1"));
field16.addChild(&TimeSensor17);

ProtoInterface9.addChild(&field16);

field& field18 =  field();
field18.setName(CString("backTimer"));
field18.setAccessType(CString("initializeOnly"));
field18.setType(CString("SFNode"));
TimeSensor& TimeSensor19 =  TimeSensor();
TimeSensor19.setDEF(CString("_2"));
field18.addChild(&TimeSensor19);

ProtoInterface9.addChild(&field18);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody20 =  ProtoBody();
ProtoDeclare& ProtoDeclare21 =  ProtoDeclare();
ProtoDeclare21.setName(CString("Data"));
ProtoInterface& ProtoInterface22 =  ProtoInterface();
field& field23 =  field();
field23.setName(CString("direction"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFBool"));
ProtoInterface22.addChild(&field23);

ProtoDeclare21.addChild(&ProtoInterface22);

ProtoBody& ProtoBody24 =  ProtoBody();
Group& Group25 =  Group();
ProtoBody24.addChild(&Group25);

ProtoDeclare21.addChild(&ProtoBody24);

ProtoBody20.addChild(&ProtoDeclare21);

Group& Group26 =  Group();
Script& Script27 =  Script();
Script27.setDEF(CString("_toggleAnimScript"));
Script27.setDirectOutput(True);
Script27.setMustEvaluate(True);
field& field28 =  field();
field28.setName(CString("state_changed"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFBool"));
Script27.addChild(&field28);

field& field29 =  field();
field29.setName(CString("startTime"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script27.addChild(&field29);

field& field30 =  field();
field30.setName(CString("forward"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFTime"));
Script27.addChild(&field30);

field& field31 =  field();
field31.setName(CString("back"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script27.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_direction"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFBool"));
Script27.addChild(&field32);

field& field33 =  field();
field33.setName(CString("set_isActive"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFBool"));
Script27.addChild(&field33);

field& field34 =  field();
field34.setName(CString("direction"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFBool"));
Script27.addChild(&field34);

field& field35 =  field();
field35.setName(CString("forwardTimer"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFNode"));
Script27.addChild(&field35);

field& field36 =  field();
field36.setName(CString("backTimer"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
Script27.addChild(&field36);

field& field37 =  field();
field37.setName(CString("isActive"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFBool"));
Script27.addChild(&field37);

field& field38 =  field();
field38.setName(CString("next"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFBool"));
Script27.addChild(&field38);

field& field39 =  field();
field39.setName(CString("data"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFNode"));
ProtoInstance& ProtoInstance40 =  ProtoInstance();
ProtoInstance40.setName(CString("Data"));
ProtoInstance40.setDEF(CString("Data_1"));
IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(CString("direction"));
connect42.setProtoField(CString("direction"));
IS41.addChild(&connect42);

ProtoInstance40.addChild(&IS41);

field39.addChild(&ProtoInstance40);

Script27.addChild(&field39);

IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("state_changed"));
connect44.setProtoField(CString("state_changed"));
IS43.addChild(&connect44);

Connect& connect45 =  Connect();
connect45.setNodeField(CString("startTime"));
connect45.setProtoField(CString("startTime"));
IS43.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("forward"));
connect46.setProtoField(CString("forward"));
IS43.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(CString("back"));
connect47.setProtoField(CString("back"));
IS43.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(CString("set_isActive"));
connect48.setProtoField(CString("set_isActive"));
IS43.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("forwardTimer"));
connect49.setProtoField(CString("forwardTimer"));
IS43.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("backTimer"));
connect50.setProtoField(CString("backTimer"));
IS43.addChild(&connect50);

Script27.addChild(&IS43);


Script27.setSourceCode(CString("vrmlscript:")+
_T("function initialize()")+
_T("{")+
_T("	forwardTimer.stopTime = 0;")+
_T("	backTimer.stopTime    = 0;")+
_T("	direction = data.direction;")+
_T("	state_changed = direction;")+
_T("}")+
_T("function set_direction(value, time)")+
_T("{")+
_T("	if (value == direction) return;")+
_T("	direction = value;")+
_T("	if (direction == state_changed) {")+
_T("		next = TRUE;")+
_T("	} else {")+
_T("		next = FALSE;")+
_T("		if (direction) {")+
_T("			forwardTimer.enabled   = TRUE;")+
_T("			forwardTimer.startTime = time;			")+
_T("		} else {")+
_T("			backTimer.enabled	= TRUE;")+
_T("			backTimer.startTime = time;")+
_T("		}")+
_T("	}")+
_T("}")+
_T("function startTime(value, time)")+
_T("{")+
_T("	if (!next) set_direction(!direction, time);")+
_T("}")+
_T("function forward(value, time)")+
_T("{")+
_T("	set_direction(TRUE, time);")+
_T("}")+
_T("function back(value, time)")+
_T("{")+
_T("	 set_direction(FALSE, time);")+
_T("}")+
_T("function set_isActive(value, time)")+
_T("{")+
_T("	isActive = value;")+
_T("	if (!isActive) {")+
_T("		if (next) {")+
_T("			direction = !direction;")+
_T("			state_changed = direction;")+
_T("			set_direction(!direction, time);")+
_T("		} else {")+
_T("			state_changed = direction;")+
_T("			forwardTimer.enabled = FALSE;")+
_T("			backTimer.enabled	 = FALSE;			")+
_T("		}")+
_T("	}")+
_T("}"));
Group26.addChild(&Script27);

ProtoBody20.addChild(&Group26);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Data_1"));
ROUTE51.setFromField(CString("direction_changed"));
ROUTE51.setToNode(CString("_toggleAnimScript"));
ROUTE51.setToField(CString("set_direction"));
ProtoBody20.addChild(&ROUTE51);

ProtoDeclare8.addChild(&ProtoBody20);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
