#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:07:04 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:04 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Ghost" ><ProtoInterface><field name="startPosition" accessType="inputOutput" type="SFVec2f"></field>
<field name="step" accessType="inputOutput" type="SFVec2f"></field>
<field name="visibilityLimit" accessType="inputOutput" type="SFFloat" value="40"></field>
<field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1.5"></field>
<field name="freeze" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="translation_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="matrix" accessType="inputOutput" type="SFNode"></field>
<field name="proximitySensor" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startPosition" accessType="inputOutput" type="SFVec2f"></field>
<field name="step" accessType="inputOutput" type="SFVec2f"></field>
<field name="visibilityLimit" accessType="inputOutput" type="SFFloat"></field>
<field name="freeze" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="matrix" accessType="inputOutput" type="SFNode"></field>
<field name="proximitySensor" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Script DEF="_ghost_1" directOutput="true"><field name="translation_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_stopTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_freeze" accessType="inputOnly" type="SFBool"></field>
<field name="go" accessType="inputOnly" type="SFBool"></field>
<field name="position" accessType="initializeOnly" type="SFInt32"></field>
<field name="lastPosition" accessType="initializeOnly" type="SFInt32"></field>
<field name="lastDirection" accessType="initializeOnly" type="SFVec2f"></field>
<field name="rd" accessType="initializeOnly" type="SFVec2f"></field>
<field name="v" accessType="initializeOnly" type="SFVec3f"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="startPosition" protoField="startPosition"></connect>
<connect nodeField="step" protoField="step"></connect>
<connect nodeField="visibilityLimit" protoField="visibilityLimit"></connect>
<connect nodeField="freeze" protoField="freeze"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="matrix" protoField="matrix"></connect>
<connect nodeField="proximitySensor" protoField="proximitySensor"></connect>
</IS>
</ProtoInstance>
</field>
<field name="timeSensor" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="_2"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
</IS>
</TimeSensor>
</field>
<field name="translationInterpolator" accessType="initializeOnly" type="SFNode"><PositionInterpolator DEF="_3" key="0 1" keyValue="0 0 0 0 0 0"><IS><connect nodeField="value_changed" protoField="translation_changed"></connect>
</IS>
</PositionInterpolator>
</field>
<IS><connect nodeField="translation_changed" protoField="translation_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
<![CDATA[vrmlscript:
function random(value)
{
	return Math.round(Math.random() * value);
}

function getTranslation(value)
{
	y = Math.floor(value / data.matrix.size.x);
	x = value - (y * data.matrix.size.x);
	return new SFVec3f(x * data.step.x, 0, y * data.step.y);
}

function randomPosition()
{
	i = random(data.matrix.size.x * data.matrix.size.y - 1);
	while (!data.matrix.matrix[i]) {
		i = random(data.matrix.size.x * data.matrix.size.y - 1);
	}
	return i;
}

function randomDirection()
{
	d = new SFVec2f(0, 0);

	if (Math.random() > 0.5) d.x = Math.random() > 0.5 ? 1 : -1;
	else d.y = Math.random() > 0.5 ? 1 : -1;

	return d;
}

function aimDirection(value)
{
	direction = new SFVec2f(0, 0);
	v = translationInterpolator.keyValue[1].add(data.proximitySensor.position_changed.negate());
	if (data.proximitySensor.isActive && v.length() < data.visibilityLimit) {
		x = Math.abs(v.x);
		y = Math.abs(v.z);
		if (value) {
			if (x < y) direction.x = -(v.x / x);
			else direction.y = v.z / y;
		} else {
			if (x > y) direction.x = -(v.x / x);
			else direction.y = v.z / y;
		}
	} else {
			if (value) direction = new SFVec2f(-rd.y, -rd.x);
			else {
				rd = randomDirection();
				direction = rd;
			}
	}
	return direction;
}

function newPosition()
{
	ways = data.matrix.matrix[position];
	if (ways > 2) {
		direction = aimDirection(0);
		p = (position + direction.x) + direction.y * data.matrix.size.x;
		if (!data.matrix.matrix[p] || p == lastPosition) {
			d = direction;
			direction = aimDirection(1);
			p = (position + direction.x) + direction.y * data.matrix.size.x;
			if (!data.matrix.matrix[p] || p == lastPosition) {
				direction = direction.negate();
				p = (position + direction.x) + direction.y * data.matrix.size.x;
				if (!data.matrix.matrix[p]) {
					direction = d.negate();
					p = (position + direction.x) + direction.y * data.matrix.size.x;
				}
			}
		} else if (Math.random() < 0.5) {
			d = aimDirection(1);
			pr = (position + d.x) + d.y * data.matrix.size.x;
			if (data.matrix.matrix[pr] && pr != lastPosition) {
				direction = d;
				p = pr;
			}
		}
	} else if (ways > 1) {
		direction = lastDirection;
		p = (position + direction.x) + direction.y * data.matrix.size.x;
		if (!data.matrix.matrix[p]) {
			direction = aimDirection(0);
			p = (position + direction.x) + direction.y * data.matrix.size.x;
			if (!data.matrix.matrix[p]) {
				d = direction;
				direction = aimDirection(1);
				p = (position + direction.x) + direction.y * data.matrix.size.x;
				if (!data.matrix.matrix[p]) {
					direction = direction.negate();
					p = (position + direction.x) + direction.y * data.matrix.size.x;
					if (!data.matrix.matrix[p]) {
						direction = d.negate();
						p = (position + direction.x) + direction.y * data.matrix.size.x;
					}
				}
			}
		}
	} else {
		direction = lastDirection.negate();
		p = lastPosition;
	}
	lastDirection = direction;
	lastPosition = position;
	position = p;
	return p;
}

function go(value, time)
{
	if (!value) {
//		if (v.length() < data.step.length()) collideTime = time;
		if (!data.freeze) {
			translationInterpolator.keyValue[0] = translationInterpolator.keyValue[1];
			p = newPosition();
			translationInterpolator.keyValue[1] = getTranslation(p);
			timeSensor.startTime = time;
		}
	}
}

function set_freeze(value, time)
{
	if (!value && !timeSensor.isActive && isActive) go(FALSE, time);
}

function set_startTime(value, time)
{
	isActive = TRUE;
	timeSensor.enabled = TRUE;
	if(data.startPosition.length()) {
		position = data.startPosition.x + data.startPosition.y * data.matrix.size.x;
	} else {
		position = randomPosition();
	}
	translation_changed = getTranslation(position);

	v = new SFVec3f(data.step.x, 0, data.step.y);
	translationInterpolator.keyValue[1] = translation_changed;
	go(FALSE, value + 0.1);
}

function set_stopTime(value, time)
{
	timeSensor.enabled = FALSE;
	isActive = FALSE;
}]]></Script>
<ROUTE fromNode="_2" fromField="fraction_changed" toNode="_3" toField="set_fraction"></ROUTE>
<ROUTE fromNode="_1" fromField="startTime_changed" toNode="_ghost_1" toField="set_startTime"></ROUTE>
<ROUTE fromNode="_1" fromField="stopTime_changed" toNode="_ghost_1" toField="set_stopTime"></ROUTE>
<ROUTE fromNode="_1" fromField="freeze_changed" toNode="_ghost_1" toField="set_freeze"></ROUTE>
<ROUTE fromNode="_2" fromField="isActive" toNode="_ghost_1" toField="go"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Ghost";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startPosition";
field10.accessType = "inputOutput";
field10.type = "SFVec2f";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "step";
field11.accessType = "inputOutput";
field11.type = "SFVec2f";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "visibilityLimit";
field12.accessType = "inputOutput";
field12.type = "SFFloat";
field12.value = "40";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "cycleInterval";
field13.accessType = "inputOutput";
field13.type = "SFTime";
field13.value = "1.5";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "freeze";
field14.accessType = "inputOutput";
field14.type = "SFBool";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "startTime";
field15.accessType = "inputOutput";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "stopTime";
field16.accessType = "inputOutput";
field16.type = "SFTime";
ProtoInterface9.field[6] = field16;

field field17 = createNode("field");
field17.name = "isActive";
field17.accessType = "outputOnly";
field17.type = "SFBool";
ProtoInterface9.field[7] = field17;

field field18 = createNode("field");
field18.name = "translation_changed";
field18.accessType = "outputOnly";
field18.type = "SFVec3f";
ProtoInterface9.field[8] = field18;

field field19 = createNode("field");
field19.name = "matrix";
field19.accessType = "inputOutput";
field19.type = "SFNode";
ProtoInterface9.field[9] = field19;

field field20 = createNode("field");
field20.name = "proximitySensor";
field20.accessType = "inputOutput";
field20.type = "SFNode";
ProtoInterface9.field[10] = field20;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody21 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startPosition" accessType="inputOutput" type="SFVec2f"></field>
<field name="step" accessType="inputOutput" type="SFVec2f"></field>
<field name="visibilityLimit" accessType="inputOutput" type="SFFloat"></field>
<field name="freeze" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="matrix" accessType="inputOutput" type="SFNode"></field>
<field name="proximitySensor" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare22.name = "Data";
ProtoInterface ProtoInterface23 = createNode("ProtoInterface");
field field24 = createNode("field");
field24.name = "startPosition";
field24.accessType = "inputOutput";
field24.type = "SFVec2f";
ProtoInterface23.field = new MFNode();

ProtoInterface23.field[0] = field24;

field field25 = createNode("field");
field25.name = "step";
field25.accessType = "inputOutput";
field25.type = "SFVec2f";
ProtoInterface23.field[1] = field25;

field field26 = createNode("field");
field26.name = "visibilityLimit";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
ProtoInterface23.field[2] = field26;

field field27 = createNode("field");
field27.name = "freeze";
field27.accessType = "inputOutput";
field27.type = "SFBool";
ProtoInterface23.field[3] = field27;

field field28 = createNode("field");
field28.name = "startTime";
field28.accessType = "inputOutput";
field28.type = "SFTime";
ProtoInterface23.field[4] = field28;

field field29 = createNode("field");
field29.name = "stopTime";
field29.accessType = "inputOutput";
field29.type = "SFTime";
ProtoInterface23.field[5] = field29;

field field30 = createNode("field");
field30.name = "matrix";
field30.accessType = "inputOutput";
field30.type = "SFNode";
ProtoInterface23.field[6] = field30;

field field31 = createNode("field");
field31.name = "proximitySensor";
field31.accessType = "inputOutput";
field31.type = "SFNode";
ProtoInterface23.field[7] = field31;

ProtoDeclare22.protoInterface = ProtoInterface23;

ProtoBody ProtoBody32 = createNode("ProtoBody");
Group Group33 = createNode("Group");
ProtoBody32.children = new MFNode();

ProtoBody32.children[0] = Group33;

ProtoDeclare22.protoBody = ProtoBody32;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = ProtoDeclare22;

Script Script34 = createNode("Script");
Script34.DEF = "_ghost_1";
Script34.directOutput = True;
field field35 = createNode("field");
field35.name = "translation_changed";
field35.accessType = "outputOnly";
field35.type = "SFVec3f";
Script34.field = new MFNode();

Script34.field[0] = field35;

field field36 = createNode("field");
field36.name = "isActive";
field36.accessType = "outputOnly";
field36.type = "SFBool";
Script34.field[1] = field36;

field field37 = createNode("field");
field37.name = "set_startTime";
field37.accessType = "inputOnly";
field37.type = "SFTime";
Script34.field[2] = field37;

field field38 = createNode("field");
field38.name = "set_stopTime";
field38.accessType = "inputOnly";
field38.type = "SFTime";
Script34.field[3] = field38;

field field39 = createNode("field");
field39.name = "set_freeze";
field39.accessType = "inputOnly";
field39.type = "SFBool";
Script34.field[4] = field39;

field field40 = createNode("field");
field40.name = "go";
field40.accessType = "inputOnly";
field40.type = "SFBool";
Script34.field[5] = field40;

field field41 = createNode("field");
field41.name = "position";
field41.accessType = "initializeOnly";
field41.type = "SFInt32";
Script34.field[6] = field41;

field field42 = createNode("field");
field42.name = "lastPosition";
field42.accessType = "initializeOnly";
field42.type = "SFInt32";
Script34.field[7] = field42;

field field43 = createNode("field");
field43.name = "lastDirection";
field43.accessType = "initializeOnly";
field43.type = "SFVec2f";
Script34.field[8] = field43;

field field44 = createNode("field");
field44.name = "rd";
field44.accessType = "initializeOnly";
field44.type = "SFVec2f";
Script34.field[9] = field44;

field field45 = createNode("field");
field45.name = "v";
field45.accessType = "initializeOnly";
field45.type = "SFVec3f";
Script34.field[10] = field45;

field field46 = createNode("field");
field46.name = "data";
field46.accessType = "initializeOnly";
field46.type = "SFNode";
ProtoInstance ProtoInstance47 = createNode("ProtoInstance");
ProtoInstance47.name = "Data";
ProtoInstance47.DEF = "_1";
IS IS48 = createNode("IS");
connect connect49 = createNode("connect");
connect49.nodeField = "startPosition";
connect49.protoField = "startPosition";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "step";
connect50.protoField = "step";
IS48.connect[1] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "visibilityLimit";
connect51.protoField = "visibilityLimit";
IS48.connect[2] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "freeze";
connect52.protoField = "freeze";
IS48.connect[3] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "startTime";
connect53.protoField = "startTime";
IS48.connect[4] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "stopTime";
connect54.protoField = "stopTime";
IS48.connect[5] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "matrix";
connect55.protoField = "matrix";
IS48.connect[6] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "proximitySensor";
connect56.protoField = "proximitySensor";
IS48.connect[7] = connect56;

ProtoInstance47.iS = IS48;

field46.children = new MFNode();

field46.children[0] = ProtoInstance47;

Script34.field[11] = field46;

field field57 = createNode("field");
field57.name = "timeSensor";
field57.accessType = "initializeOnly";
field57.type = "SFNode";
TimeSensor TimeSensor58 = createNode("TimeSensor");
TimeSensor58.DEF = "_2";
IS IS59 = createNode("IS");
connect connect60 = createNode("connect");
connect60.nodeField = "cycleInterval";
connect60.protoField = "cycleInterval";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

TimeSensor58.iS = IS59;

field57.children = new MFNode();

field57.children[0] = TimeSensor58;

Script34.field[12] = field57;

field field61 = createNode("field");
field61.name = "translationInterpolator";
field61.accessType = "initializeOnly";
field61.type = "SFNode";
PositionInterpolator PositionInterpolator62 = createNode("PositionInterpolator");
PositionInterpolator62.DEF = "_3";
PositionInterpolator62.key = new MFFloat(new float[0,1]);
PositionInterpolator62.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
IS IS63 = createNode("IS");
connect connect64 = createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "translation_changed";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

PositionInterpolator62.iS = IS63;

field61.children = new MFNode();

field61.children[0] = PositionInterpolator62;

Script34.field[13] = field61;

IS IS65 = createNode("IS");
connect connect66 = createNode("connect");
connect66.nodeField = "translation_changed";
connect66.protoField = "translation_changed";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

connect connect67 = createNode("connect");
connect67.nodeField = "isActive";
connect67.protoField = "isActive";
IS65.connect[1] = connect67;

Script34.iS = IS65;


Script34.setSourceCode(`vrmlscript:\n"+
"function random(value)\n"+
"{\n"+
"	return Math.round(Math.random() * value);\n"+
"}\n"+
"\n"+
"function getTranslation(value)\n"+
"{\n"+
"	y = Math.floor(value / data.matrix.size.x);\n"+
"	x = value - (y * data.matrix.size.x);\n"+
"	return new SFVec3f(x * data.step.x, 0, y * data.step.y);\n"+
"}\n"+
"\n"+
"function randomPosition()\n"+
"{\n"+
"	i = random(data.matrix.size.x * data.matrix.size.y - 1);\n"+
"	while (!data.matrix.matrix[i]) {\n"+
"		i = random(data.matrix.size.x * data.matrix.size.y - 1);\n"+
"	}\n"+
"	return i;\n"+
"}\n"+
"\n"+
"function randomDirection()\n"+
"{\n"+
"	d = new SFVec2f(0, 0);\n"+
"\n"+
"	if (Math.random() > 0.5) d.x = Math.random() > 0.5 ? 1 : -1;\n"+
"	else d.y = Math.random() > 0.5 ? 1 : -1;\n"+
"\n"+
"	return d;\n"+
"}\n"+
"\n"+
"function aimDirection(value)\n"+
"{\n"+
"	direction = new SFVec2f(0, 0);\n"+
"	v = translationInterpolator.keyValue[1].add(data.proximitySensor.position_changed.negate());\n"+
"	if (data.proximitySensor.isActive && v.length() < data.visibilityLimit) {\n"+
"		x = Math.abs(v.x);\n"+
"		y = Math.abs(v.z);\n"+
"		if (value) {\n"+
"			if (x < y) direction.x = -(v.x / x);\n"+
"			else direction.y = v.z / y;\n"+
"		} else {\n"+
"			if (x > y) direction.x = -(v.x / x);\n"+
"			else direction.y = v.z / y;\n"+
"		}\n"+
"	} else {\n"+
"			if (value) direction = new SFVec2f(-rd.y, -rd.x);\n"+
"			else {\n"+
"				rd = randomDirection();\n"+
"				direction = rd;\n"+
"			}\n"+
"	}\n"+
"	return direction;\n"+
"}\n"+
"\n"+
"function newPosition()\n"+
"{\n"+
"	ways = data.matrix.matrix[position];\n"+
"	if (ways > 2) {\n"+
"		direction = aimDirection(0);\n"+
"		p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"		if (!data.matrix.matrix[p] || p == lastPosition) {\n"+
"			d = direction;\n"+
"			direction = aimDirection(1);\n"+
"			p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"			if (!data.matrix.matrix[p] || p == lastPosition) {\n"+
"				direction = direction.negate();\n"+
"				p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"				if (!data.matrix.matrix[p]) {\n"+
"					direction = d.negate();\n"+
"					p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"				}\n"+
"			}\n"+
"		} else if (Math.random() < 0.5) {\n"+
"			d = aimDirection(1);\n"+
"			pr = (position + d.x) + d.y * data.matrix.size.x;\n"+
"			if (data.matrix.matrix[pr] && pr != lastPosition) {\n"+
"				direction = d;\n"+
"				p = pr;\n"+
"			}\n"+
"		}\n"+
"	} else if (ways > 1) {\n"+
"		direction = lastDirection;\n"+
"		p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"		if (!data.matrix.matrix[p]) {\n"+
"			direction = aimDirection(0);\n"+
"			p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"			if (!data.matrix.matrix[p]) {\n"+
"				d = direction;\n"+
"				direction = aimDirection(1);\n"+
"				p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"				if (!data.matrix.matrix[p]) {\n"+
"					direction = direction.negate();\n"+
"					p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"					if (!data.matrix.matrix[p]) {\n"+
"						direction = d.negate();\n"+
"						p = (position + direction.x) + direction.y * data.matrix.size.x;\n"+
"					}\n"+
"				}\n"+
"			}\n"+
"		}\n"+
"	} else {\n"+
"		direction = lastDirection.negate();\n"+
"		p = lastPosition;\n"+
"	}\n"+
"	lastDirection = direction;\n"+
"	lastPosition = position;\n"+
"	position = p;\n"+
"	return p;\n"+
"}\n"+
"\n"+
"function go(value, time)\n"+
"{\n"+
"	if (!value) {\n"+
"//		if (v.length() < data.step.length()) collideTime = time;\n"+
"		if (!data.freeze) {\n"+
"			translationInterpolator.keyValue[0] = translationInterpolator.keyValue[1];\n"+
"			p = newPosition();\n"+
"			translationInterpolator.keyValue[1] = getTranslation(p);\n"+
"			timeSensor.startTime = time;\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_freeze(value, time)\n"+
"{\n"+
"	if (!value && !timeSensor.isActive && isActive) go(FALSE, time);\n"+
"}\n"+
"\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	isActive = TRUE;\n"+
"	timeSensor.enabled = TRUE;\n"+
"	if(data.startPosition.length()) {\n"+
"		position = data.startPosition.x + data.startPosition.y * data.matrix.size.x;\n"+
"	} else {\n"+
"		position = randomPosition();\n"+
"	}\n"+
"	translation_changed = getTranslation(position);\n"+
"\n"+
"	v = new SFVec3f(data.step.x, 0, data.step.y);\n"+
"	translationInterpolator.keyValue[1] = translation_changed;\n"+
"	go(FALSE, value + 0.1);\n"+
"}\n"+
"\n"+
"function set_stopTime(value, time)\n"+
"{\n"+
"	timeSensor.enabled = FALSE;\n"+
"	isActive = FALSE;\n"+
"}`)
ProtoBody21.children[1] = Script34;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "_2";
ROUTE68.fromField = "fraction_changed";
ROUTE68.toNode = "_3";
ROUTE68.toField = "set_fraction";
ProtoBody21.children[2] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "_1";
ROUTE69.fromField = "startTime_changed";
ROUTE69.toNode = "_ghost_1";
ROUTE69.toField = "set_startTime";
ProtoBody21.children[3] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "_1";
ROUTE70.fromField = "stopTime_changed";
ROUTE70.toNode = "_ghost_1";
ROUTE70.toField = "set_stopTime";
ProtoBody21.children[4] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "_1";
ROUTE71.fromField = "freeze_changed";
ROUTE71.toNode = "_ghost_1";
ROUTE71.toField = "set_freeze";
ProtoBody21.children[5] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "_2";
ROUTE72.fromField = "isActive";
ROUTE72.toNode = "_ghost_1";
ROUTE72.toField = "go";
ProtoBody21.children[6] = ROUTE72;

ProtoDeclare8.protoBody = ProtoBody21;

children = new MFNode();

children[0] = ProtoDeclare8;

}
