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
meta3.content = "Sat, 29 Aug 2015 04:33:45 GMT";
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
meta6.content = "Sat, 29 Aug 2015 04:33:45 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Rotor" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="axis" accessType="inputOutput" type="SFVec3f" value="0 0 1"></field>
<field name="angle" accessType="inputOutput" type="SFFloat"></field>
<field name="loop" accessType="inputOutput" type="SFBool"></field>
<field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="pauseTime" accessType="inputOutput" type="SFTime"></field>
<field name="resumeTime" accessType="inputOutput" type="SFTime"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="cycleTime" accessType="outputOnly" type="SFTime"></field>
<field name="rotation_changed" accessType="outputOnly" type="SFRotation"></field>
</ProtoInterface>
<ProtoBody><TimeSensor DEF="Timer"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="pauseTime" protoField="pauseTime"></connect>
<connect nodeField="resumeTime" protoField="resumeTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="cycleTime" protoField="cycleTime"></connect>
</IS>
</TimeSensor>
<OrientationInterpolator DEF="Interpolator" key="0 0.25 0.5 0.75 1" keyValue="0 0 1 0 0 0 1 1.5708 0 0 1 3.14159 0 0 1 4.71239 0 0 1 0"><IS><connect nodeField="value_changed" protoField="rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<Script DEF="Rotor"><field name="set_axis" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_angle" accessType="inputOnly" type="SFFloat"></field>
<field name="axis" accessType="inputOutput" type="SFVec3f"></field>
<field name="angle" accessType="inputOutput" type="SFFloat"></field>
<field name="interpolator" accessType="initializeOnly" type="SFNode"><OrientationInterpolator USE="Interpolator"></OrientationInterpolator>
</field>
<IS><connect nodeField="axis" protoField="axis"></connect>
<connect nodeField="angle" protoField="angle"></connect>
</IS>
<![CDATA[javascript:

function initialize ()
{
	eventsProcessed ();
}

function eventsProcessed ()
{
	var keyValue = interpolator .keyValue;

	for (var i = 0; i < 4; ++ i)
		keyValue [i] = new SFRotation (axis, angle + 2 * Math .PI / 4 * i);
	
	keyValue [4] = keyValue [0];
}]]></Script>
<ROUTE fromNode="Timer" fromField="fraction_changed" toNode="Interpolator" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Rotor";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "enabled";
field10.accessType = "inputOutput";
field10.type = "SFBool";
field10.value = "true";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "cycleInterval";
field11.accessType = "inputOutput";
field11.type = "SFTime";
field11.value = "1";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "axis";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 1";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "angle";
field13.accessType = "inputOutput";
field13.type = "SFFloat";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "loop";
field14.accessType = "inputOutput";
field14.type = "SFBool";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "startTime";
field15.accessType = "inputOutput";
field15.type = "SFTime";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "pauseTime";
field16.accessType = "inputOutput";
field16.type = "SFTime";
ProtoInterface9.field[6] = field16;

field field17 = createNode("field");
field17.name = "resumeTime";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ProtoInterface9.field[7] = field17;

field field18 = createNode("field");
field18.name = "stopTime";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ProtoInterface9.field[8] = field18;

field field19 = createNode("field");
field19.name = "isActive";
field19.accessType = "outputOnly";
field19.type = "SFBool";
ProtoInterface9.field[9] = field19;

field field20 = createNode("field");
field20.name = "cycleTime";
field20.accessType = "outputOnly";
field20.type = "SFTime";
ProtoInterface9.field[10] = field20;

field field21 = createNode("field");
field21.name = "rotation_changed";
field21.accessType = "outputOnly";
field21.type = "SFRotation";
ProtoInterface9.field[11] = field21;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody22 = createNode("ProtoBody");
TimeSensor TimeSensor23 = createNode("TimeSensor");
TimeSensor23.DEF = "Timer";
IS IS24 = createNode("IS");
connect connect25 = createNode("connect");
connect25.nodeField = "enabled";
connect25.protoField = "enabled";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

connect connect26 = createNode("connect");
connect26.nodeField = "cycleInterval";
connect26.protoField = "cycleInterval";
IS24.connect[1] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "loop";
connect27.protoField = "loop";
IS24.connect[2] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "startTime";
connect28.protoField = "startTime";
IS24.connect[3] = connect28;

connect connect29 = createNode("connect");
connect29.nodeField = "pauseTime";
connect29.protoField = "pauseTime";
IS24.connect[4] = connect29;

connect connect30 = createNode("connect");
connect30.nodeField = "resumeTime";
connect30.protoField = "resumeTime";
IS24.connect[5] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "stopTime";
connect31.protoField = "stopTime";
IS24.connect[6] = connect31;

connect connect32 = createNode("connect");
connect32.nodeField = "isActive";
connect32.protoField = "isActive";
IS24.connect[7] = connect32;

connect connect33 = createNode("connect");
connect33.nodeField = "cycleTime";
connect33.protoField = "cycleTime";
IS24.connect[8] = connect33;

TimeSensor23.iS = IS24;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = TimeSensor23;

OrientationInterpolator OrientationInterpolator34 = createNode("OrientationInterpolator");
OrientationInterpolator34.DEF = "Interpolator";
OrientationInterpolator34.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator34.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5708,0,0,1,3.14159,0,0,1,4.71239,0,0,1,0]);
IS IS35 = createNode("IS");
connect connect36 = createNode("connect");
connect36.nodeField = "value_changed";
connect36.protoField = "rotation_changed";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

OrientationInterpolator34.iS = IS35;

ProtoBody22.children[1] = OrientationInterpolator34;

Script Script37 = createNode("Script");
Script37.DEF = "Rotor";
field field38 = createNode("field");
field38.name = "set_axis";
field38.accessType = "inputOnly";
field38.type = "SFVec3f";
Script37.field = new MFNode();

Script37.field[0] = field38;

field field39 = createNode("field");
field39.name = "set_angle";
field39.accessType = "inputOnly";
field39.type = "SFFloat";
Script37.field[1] = field39;

field field40 = createNode("field");
field40.name = "axis";
field40.accessType = "inputOutput";
field40.type = "SFVec3f";
Script37.field[2] = field40;

field field41 = createNode("field");
field41.name = "angle";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
Script37.field[3] = field41;

field field42 = createNode("field");
field42.name = "interpolator";
field42.accessType = "initializeOnly";
field42.type = "SFNode";
OrientationInterpolator OrientationInterpolator43 = createNode("OrientationInterpolator");
OrientationInterpolator43.USE = "Interpolator";
field42.children = new MFNode();

field42.children[0] = OrientationInterpolator43;

Script37.field[4] = field42;

IS IS44 = createNode("IS");
connect connect45 = createNode("connect");
connect45.nodeField = "axis";
connect45.protoField = "axis";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "angle";
connect46.protoField = "angle";
IS44.connect[1] = connect46;

Script37.iS = IS44;


Script37.setSourceCode(`javascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	eventsProcessed ();\n"+
"}\n"+
"\n"+
"function eventsProcessed ()\n"+
"{\n"+
"	var keyValue = interpolator .keyValue;\n"+
"\n"+
"	for (var i = 0; i < 4; ++ i)\n"+
"		keyValue [i] = new SFRotation (axis, angle + 2 * Math .PI / 4 * i);\n"+
"	\n"+
"	keyValue [4] = keyValue [0];\n"+
"}`)
ProtoBody22.children[2] = Script37;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "Timer";
ROUTE47.fromField = "fraction_changed";
ROUTE47.toNode = "Interpolator";
ROUTE47.toField = "set_fraction";
ProtoBody22.children[3] = ROUTE47;

ProtoDeclare8.protoBody = ProtoBody22;

children = new MFNode();

children[0] = ProtoDeclare8;

}
