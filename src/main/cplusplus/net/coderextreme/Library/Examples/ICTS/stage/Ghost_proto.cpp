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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Ghost"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startPosition"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFVec2f"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("step"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec2f"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("visibilityLimit"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFFloat"));
field12.setValue(CString("40"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("cycleInterval"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
field13.setValue(CString("1.5"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("freeze"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFBool"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("startTime"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("stopTime"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFTime"));
ProtoInterface9.addChild(&field16);

field& field17 =  field();
field17.setName(CString("isActive"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFBool"));
ProtoInterface9.addChild(&field17);

field& field18 =  field();
field18.setName(CString("translation_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field18);

field& field19 =  field();
field19.setName(CString("matrix"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFNode"));
ProtoInterface9.addChild(&field19);

field& field20 =  field();
field20.setName(CString("proximitySensor"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFNode"));
ProtoInterface9.addChild(&field20);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody21 =  ProtoBody();
ProtoDeclare& ProtoDeclare22 =  ProtoDeclare();
ProtoDeclare22.setName(CString("Data"));
ProtoInterface& ProtoInterface23 =  ProtoInterface();
field& field24 =  field();
field24.setName(CString("startPosition"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFVec2f"));
ProtoInterface23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("step"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFVec2f"));
ProtoInterface23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("visibilityLimit"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFFloat"));
ProtoInterface23.addChild(&field26);

field& field27 =  field();
field27.setName(CString("freeze"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFBool"));
ProtoInterface23.addChild(&field27);

field& field28 =  field();
field28.setName(CString("startTime"));
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("SFTime"));
ProtoInterface23.addChild(&field28);

field& field29 =  field();
field29.setName(CString("stopTime"));
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFTime"));
ProtoInterface23.addChild(&field29);

field& field30 =  field();
field30.setName(CString("matrix"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFNode"));
ProtoInterface23.addChild(&field30);

field& field31 =  field();
field31.setName(CString("proximitySensor"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFNode"));
ProtoInterface23.addChild(&field31);

ProtoDeclare22.addChild(&ProtoInterface23);

ProtoBody& ProtoBody32 =  ProtoBody();
Group& Group33 =  Group();
ProtoBody32.addChild(&Group33);

ProtoDeclare22.addChild(&ProtoBody32);

ProtoBody21.addChild(&ProtoDeclare22);

Script& Script34 =  Script();
Script34.setDEF(CString("_ghost_1"));
Script34.setDirectOutput(True);
field& field35 =  field();
field35.setName(CString("translation_changed"));
field35.setAccessType(CString("outputOnly"));
field35.setType(CString("SFVec3f"));
Script34.addChild(&field35);

field& field36 =  field();
field36.setName(CString("isActive"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("SFBool"));
Script34.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_startTime"));
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("SFTime"));
Script34.addChild(&field37);

field& field38 =  field();
field38.setName(CString("set_stopTime"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("SFTime"));
Script34.addChild(&field38);

field& field39 =  field();
field39.setName(CString("set_freeze"));
field39.setAccessType(CString("inputOnly"));
field39.setType(CString("SFBool"));
Script34.addChild(&field39);

field& field40 =  field();
field40.setName(CString("go"));
field40.setAccessType(CString("inputOnly"));
field40.setType(CString("SFBool"));
Script34.addChild(&field40);

field& field41 =  field();
field41.setName(CString("position"));
field41.setAccessType(CString("initializeOnly"));
field41.setType(CString("SFInt32"));
Script34.addChild(&field41);

field& field42 =  field();
field42.setName(CString("lastPosition"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFInt32"));
Script34.addChild(&field42);

field& field43 =  field();
field43.setName(CString("lastDirection"));
field43.setAccessType(CString("initializeOnly"));
field43.setType(CString("SFVec2f"));
Script34.addChild(&field43);

field& field44 =  field();
field44.setName(CString("rd"));
field44.setAccessType(CString("initializeOnly"));
field44.setType(CString("SFVec2f"));
Script34.addChild(&field44);

field& field45 =  field();
field45.setName(CString("v"));
field45.setAccessType(CString("initializeOnly"));
field45.setType(CString("SFVec3f"));
Script34.addChild(&field45);

field& field46 =  field();
field46.setName(CString("data"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFNode"));
ProtoInstance& ProtoInstance47 =  ProtoInstance();
ProtoInstance47.setName(CString("Data"));
ProtoInstance47.setDEF(CString("_1"));
IS& IS48 =  IS();
Connect& connect49 =  Connect();
connect49.setNodeField(CString("startPosition"));
connect49.setProtoField(CString("startPosition"));
IS48.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("step"));
connect50.setProtoField(CString("step"));
IS48.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(CString("visibilityLimit"));
connect51.setProtoField(CString("visibilityLimit"));
IS48.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(CString("freeze"));
connect52.setProtoField(CString("freeze"));
IS48.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("startTime"));
connect53.setProtoField(CString("startTime"));
IS48.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(CString("stopTime"));
connect54.setProtoField(CString("stopTime"));
IS48.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("matrix"));
connect55.setProtoField(CString("matrix"));
IS48.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("proximitySensor"));
connect56.setProtoField(CString("proximitySensor"));
IS48.addChild(&connect56);

ProtoInstance47.addChild(&IS48);

field46.addChild(&ProtoInstance47);

Script34.addChild(&field46);

field& field57 =  field();
field57.setName(CString("timeSensor"));
field57.setAccessType(CString("initializeOnly"));
field57.setType(CString("SFNode"));
TimeSensor& TimeSensor58 =  TimeSensor();
TimeSensor58.setDEF(CString("_2"));
IS& IS59 =  IS();
Connect& connect60 =  Connect();
connect60.setNodeField(CString("cycleInterval"));
connect60.setProtoField(CString("cycleInterval"));
IS59.addChild(&connect60);

TimeSensor58.addChild(&IS59);

field57.addChild(&TimeSensor58);

Script34.addChild(&field57);

field& field61 =  field();
field61.setName(CString("translationInterpolator"));
field61.setAccessType(CString("initializeOnly"));
field61.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator62 =  PositionInterpolator();
PositionInterpolator62.setDEF(CString("_3"));
PositionInterpolator62.setKey(new float[]{0,1}, 2);
PositionInterpolator62.setKeyValue(new float[]{0,0,0,0,0,0}, 6);
IS& IS63 =  IS();
Connect& connect64 =  Connect();
connect64.setNodeField(CString("value_changed"));
connect64.setProtoField(CString("translation_changed"));
IS63.addChild(&connect64);

PositionInterpolator62.addChild(&IS63);

field61.addChild(&PositionInterpolator62);

Script34.addChild(&field61);

IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(CString("translation_changed"));
connect66.setProtoField(CString("translation_changed"));
IS65.addChild(&connect66);

Connect& connect67 =  Connect();
connect67.setNodeField(CString("isActive"));
connect67.setProtoField(CString("isActive"));
IS65.addChild(&connect67);

Script34.addChild(&IS65);


Script34.setSourceCode(CString("vrmlscript:")+
_T("function random(value)")+
_T("{")+
_T("	return Math.round(Math.random() * value);")+
_T("}")+
_T("function getTranslation(value)")+
_T("{")+
_T("	y = Math.floor(value / data.matrix.size.x);")+
_T("	x = value - (y * data.matrix.size.x);")+
_T("	return new SFVec3f(x * data.step.x, 0, y * data.step.y);")+
_T("}")+
_T("function randomPosition()")+
_T("{")+
_T("	i = random(data.matrix.size.x * data.matrix.size.y - 1);")+
_T("	while (!data.matrix.matrix[i]) {")+
_T("		i = random(data.matrix.size.x * data.matrix.size.y - 1);")+
_T("	}")+
_T("	return i;")+
_T("}")+
_T("function randomDirection()")+
_T("{")+
_T("	d = new SFVec2f(0, 0);")+
_T("	if (Math.random() > 0.5) d.x = Math.random() > 0.5 ? 1 : -1;")+
_T("	else d.y = Math.random() > 0.5 ? 1 : -1;")+
_T("	return d;")+
_T("}")+
_T("function aimDirection(value)")+
_T("{")+
_T("	direction = new SFVec2f(0, 0);")+
_T("	v = translationInterpolator.keyValue[1].add(data.proximitySensor.position_changed.negate());")+
_T("	if (data.proximitySensor.isActive && v.length() < data.visibilityLimit) {")+
_T("		x = Math.abs(v.x);")+
_T("		y = Math.abs(v.z);")+
_T("		if (value) {")+
_T("			if (x < y) direction.x = -(v.x / x);")+
_T("			else direction.y = v.z / y;")+
_T("		} else {")+
_T("			if (x > y) direction.x = -(v.x / x);")+
_T("			else direction.y = v.z / y;")+
_T("		}")+
_T("	} else {")+
_T("			if (value) direction = new SFVec2f(-rd.y, -rd.x);")+
_T("			else {")+
_T("				rd = randomDirection();")+
_T("				direction = rd;")+
_T("			}")+
_T("	}")+
_T("	return direction;")+
_T("}")+
_T("function newPosition()")+
_T("{")+
_T("	ways = data.matrix.matrix[position];")+
_T("	if (ways > 2) {")+
_T("		direction = aimDirection(0);")+
_T("		p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("		if (!data.matrix.matrix[p] || p == lastPosition) {")+
_T("			d = direction;")+
_T("			direction = aimDirection(1);")+
_T("			p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("			if (!data.matrix.matrix[p] || p == lastPosition) {")+
_T("				direction = direction.negate();")+
_T("				p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("				if (!data.matrix.matrix[p]) {")+
_T("					direction = d.negate();")+
_T("					p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("				}")+
_T("			}")+
_T("		} else if (Math.random() < 0.5) {")+
_T("			d = aimDirection(1);")+
_T("			pr = (position + d.x) + d.y * data.matrix.size.x;")+
_T("			if (data.matrix.matrix[pr] && pr != lastPosition) {")+
_T("				direction = d;")+
_T("				p = pr;")+
_T("			}")+
_T("		}")+
_T("	} else if (ways > 1) {")+
_T("		direction = lastDirection;")+
_T("		p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("		if (!data.matrix.matrix[p]) {")+
_T("			direction = aimDirection(0);")+
_T("			p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("			if (!data.matrix.matrix[p]) {")+
_T("				d = direction;")+
_T("				direction = aimDirection(1);")+
_T("				p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("				if (!data.matrix.matrix[p]) {")+
_T("					direction = direction.negate();")+
_T("					p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("					if (!data.matrix.matrix[p]) {")+
_T("						direction = d.negate();")+
_T("						p = (position + direction.x) + direction.y * data.matrix.size.x;")+
_T("					}")+
_T("				}")+
_T("			}")+
_T("		}")+
_T("	} else {")+
_T("		direction = lastDirection.negate();")+
_T("		p = lastPosition;")+
_T("	}")+
_T("	lastDirection = direction;")+
_T("	lastPosition = position;")+
_T("	position = p;")+
_T("	return p;")+
_T("}")+
_T("function go(value, time)")+
_T("{")+
_T("	if (!value) {")+
_T("//		if (v.length() < data.step.length()) collideTime = time;")+
_T("		if (!data.freeze) {")+
_T("			translationInterpolator.keyValue[0] = translationInterpolator.keyValue[1];")+
_T("			p = newPosition();")+
_T("			translationInterpolator.keyValue[1] = getTranslation(p);")+
_T("			timeSensor.startTime = time;")+
_T("		}")+
_T("	}")+
_T("}")+
_T("function set_freeze(value, time)")+
_T("{")+
_T("	if (!value && !timeSensor.isActive && isActive) go(FALSE, time);")+
_T("}")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	isActive = TRUE;")+
_T("	timeSensor.enabled = TRUE;")+
_T("	if(data.startPosition.length()) {")+
_T("		position = data.startPosition.x + data.startPosition.y * data.matrix.size.x;")+
_T("	} else {")+
_T("		position = randomPosition();")+
_T("	}")+
_T("	translation_changed = getTranslation(position);")+
_T("	v = new SFVec3f(data.step.x, 0, data.step.y);")+
_T("	translationInterpolator.keyValue[1] = translation_changed;")+
_T("	go(FALSE, value + 0.1);")+
_T("}")+
_T("function set_stopTime(value, time)")+
_T("{")+
_T("	timeSensor.enabled = FALSE;")+
_T("	isActive = FALSE;")+
_T("}"));
ProtoBody21.addChild(&Script34);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("_2"));
ROUTE68.setFromField(CString("fraction_changed"));
ROUTE68.setToNode(CString("_3"));
ROUTE68.setToField(CString("set_fraction"));
ProtoBody21.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("_1"));
ROUTE69.setFromField(CString("startTime_changed"));
ROUTE69.setToNode(CString("_ghost_1"));
ROUTE69.setToField(CString("set_startTime"));
ProtoBody21.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("_1"));
ROUTE70.setFromField(CString("stopTime_changed"));
ROUTE70.setToNode(CString("_ghost_1"));
ROUTE70.setToField(CString("set_stopTime"));
ProtoBody21.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("_1"));
ROUTE71.setFromField(CString("freeze_changed"));
ROUTE71.setToNode(CString("_ghost_1"));
ROUTE71.setToField(CString("set_freeze"));
ProtoBody21.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("_2"));
ROUTE72.setFromField(CString("isActive"));
ROUTE72.setToNode(CString("_ghost_1"));
ROUTE72.setToField(CString("go"));
ProtoBody21.addChild(&ROUTE72);

ProtoDeclare8.addChild(&ProtoBody21);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
