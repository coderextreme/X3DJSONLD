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
meta3.content = "Thu, 23 Apr 2015 06:06:56 GMT";
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
meta6.content = "Thu, 23 Apr 2015 06:06:56 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="AutoViewpoint" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="proximitySensor" accessType="initializeOnly" type="SFNode"><ProximitySensor DEF="_1"></ProximitySensor>
</field>
<field name="timeSensor" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="_2"></TimeSensor>
</field>
<field name="positionInterpolator" accessType="initializeOnly" type="SFNode"><PositionInterpolator DEF="_3"></PositionInterpolator>
</field>
<field name="orientationInterpolator" accessType="initializeOnly" type="SFNode"><OrientationInterpolator DEF="_4"></OrientationInterpolator>
</field>
<field name="scalarInterpolator" accessType="initializeOnly" type="SFNode"><ScalarInterpolator DEF="_5"></ScalarInterpolator>
</field>
<field name="autoViewpoint" accessType="initializeOnly" type="SFNode"><Viewpoint DEF="_6"></Viewpoint>
</field>
<field name="viewpoint" accessType="initializeOnly" type="SFNode"><Viewpoint DEF="_7"></Viewpoint>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="avp" directOutput="true" mustEvaluate="true"><field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_isActive" accessType="inputOnly" type="SFBool"></field>
<field name="proximitySensor" accessType="initializeOnly" type="SFNode"></field>
<field name="timeSensor" accessType="initializeOnly" type="SFNode"></field>
<field name="positionInterpolator" accessType="initializeOnly" type="SFNode"></field>
<field name="orientationInterpolator" accessType="initializeOnly" type="SFNode"></field>
<field name="scalarInterpolator" accessType="initializeOnly" type="SFNode"></field>
<field name="autoViewpoint" accessType="initializeOnly" type="SFNode"></field>
<field name="viewpoint" accessType="initializeOnly" type="SFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="Data"><IS><connect nodeField="startTime" protoField="startTime"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="set_isActive" protoField="set_isActive"></connect>
<connect nodeField="proximitySensor" protoField="proximitySensor"></connect>
<connect nodeField="timeSensor" protoField="timeSensor"></connect>
<connect nodeField="positionInterpolator" protoField="positionInterpolator"></connect>
<connect nodeField="orientationInterpolator" protoField="orientationInterpolator"></connect>
<connect nodeField="scalarInterpolator" protoField="scalarInterpolator"></connect>
<connect nodeField="autoViewpoint" protoField="autoViewpoint"></connect>
<connect nodeField="viewpoint" protoField="viewpoint"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize()
{
	timeSensor.enabled  = FALSE;
	timeSensor.stopTime = 0;

	if (positionInterpolator) {
		positionInterpolator.key      = new MFFloat(0, 1);
		positionInterpolator.keyValue = new MFVec3f(
			new SFVec3f(0, 0, 0),
			viewpoint.position
		);
	}

	if (orientationInterpolator) {
		orientationInterpolator.key      = new MFFloat(0, 1);
		orientationInterpolator.keyValue = new MFRotation(
			new SFRotation(0, 0, 1, 0),
			viewpoint.orientation
		);
	}

	if (scalarInterpolator) {
		scalarInterpolator.key		= new MFFloat(0, 1);
		scalarInterpolator.keyValue = new MFFloat(
			autoViewpoint.fieldOfView,
			viewpoint.fieldOfView
		);
	}
	autoViewpoint.jump = FALSE;
}

function set_startTime(value, time)
{
	if (timeSensor.isActive) return;

	timeSensor.enabled = TRUE;

	autoViewpoint.position    = proximitySensor.position_changed;
	autoViewpoint.orientation = proximitySensor.orientation_changed;

	if (positionInterpolator)    positionInterpolator.keyValue[0]    = autoViewpoint.position;
	if (orientationInterpolator) orientationInterpolator.keyValue[0] = autoViewpoint.orientation;

	autoViewpoint.set_bind = TRUE;
	timeSensor.startTime   = time;
}

function set_isActive(value, time)
{
	if (!value) {
		timeSensor.enabled = FALSE;
		if (autoViewpoint.isBound) {
			//autoViewpoint.set_bind = FALSE;
			viewpoint.set_bind = TRUE;
		}
	}
}]]></Script>
</Group>
<ROUTE fromNode="Data" fromField="startTime_changed" toNode="avp" toField="set_startTime"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "AutoViewpoint";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "set_isActive";
field11.accessType = "inputOnly";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "proximitySensor";
field12.accessType = "initializeOnly";
field12.type = "SFNode";
ProximitySensor ProximitySensor13 = createNode("ProximitySensor");
ProximitySensor13.DEF = "_1";
field12.children = new MFNode();

field12.children[0] = ProximitySensor13;

ProtoInterface9.field[2] = field12;

field field14 = createNode("field");
field14.name = "timeSensor";
field14.accessType = "initializeOnly";
field14.type = "SFNode";
TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "_2";
field14.children = new MFNode();

field14.children[0] = TimeSensor15;

ProtoInterface9.field[3] = field14;

field field16 = createNode("field");
field16.name = "positionInterpolator";
field16.accessType = "initializeOnly";
field16.type = "SFNode";
PositionInterpolator PositionInterpolator17 = createNode("PositionInterpolator");
PositionInterpolator17.DEF = "_3";
field16.children = new MFNode();

field16.children[0] = PositionInterpolator17;

ProtoInterface9.field[4] = field16;

field field18 = createNode("field");
field18.name = "orientationInterpolator";
field18.accessType = "initializeOnly";
field18.type = "SFNode";
OrientationInterpolator OrientationInterpolator19 = createNode("OrientationInterpolator");
OrientationInterpolator19.DEF = "_4";
field18.children = new MFNode();

field18.children[0] = OrientationInterpolator19;

ProtoInterface9.field[5] = field18;

field field20 = createNode("field");
field20.name = "scalarInterpolator";
field20.accessType = "initializeOnly";
field20.type = "SFNode";
ScalarInterpolator ScalarInterpolator21 = createNode("ScalarInterpolator");
ScalarInterpolator21.DEF = "_5";
field20.children = new MFNode();

field20.children[0] = ScalarInterpolator21;

ProtoInterface9.field[6] = field20;

field field22 = createNode("field");
field22.name = "autoViewpoint";
field22.accessType = "initializeOnly";
field22.type = "SFNode";
Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.DEF = "_6";
field22.children = new MFNode();

field22.children[0] = Viewpoint23;

ProtoInterface9.field[7] = field22;

field field24 = createNode("field");
field24.name = "viewpoint";
field24.accessType = "initializeOnly";
field24.type = "SFNode";
Viewpoint Viewpoint25 = createNode("Viewpoint");
Viewpoint25.DEF = "_7";
field24.children = new MFNode();

field24.children[0] = Viewpoint25;

ProtoInterface9.field[8] = field24;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody26 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare27 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="startTime" accessType="inputOutput" type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare27.name = "Data";
ProtoInterface ProtoInterface28 = createNode("ProtoInterface");
field field29 = createNode("field");
field29.name = "startTime";
field29.accessType = "inputOutput";
field29.type = "SFTime";
ProtoInterface28.field = new MFNode();

ProtoInterface28.field[0] = field29;

ProtoDeclare27.protoInterface = ProtoInterface28;

ProtoBody ProtoBody30 = createNode("ProtoBody");
Group Group31 = createNode("Group");
ProtoBody30.children = new MFNode();

ProtoBody30.children[0] = Group31;

ProtoDeclare27.protoBody = ProtoBody30;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = ProtoDeclare27;

Group Group32 = createNode("Group");
Script Script33 = createNode("Script");
Script33.DEF = "avp";
Script33.directOutput = True;
Script33.mustEvaluate = True;
field field34 = createNode("field");
field34.name = "set_startTime";
field34.accessType = "inputOnly";
field34.type = "SFTime";
Script33.field = new MFNode();

Script33.field[0] = field34;

field field35 = createNode("field");
field35.name = "set_isActive";
field35.accessType = "inputOnly";
field35.type = "SFBool";
Script33.field[1] = field35;

field field36 = createNode("field");
field36.name = "proximitySensor";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
Script33.field[2] = field36;

field field37 = createNode("field");
field37.name = "timeSensor";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
Script33.field[3] = field37;

field field38 = createNode("field");
field38.name = "positionInterpolator";
field38.accessType = "initializeOnly";
field38.type = "SFNode";
Script33.field[4] = field38;

field field39 = createNode("field");
field39.name = "orientationInterpolator";
field39.accessType = "initializeOnly";
field39.type = "SFNode";
Script33.field[5] = field39;

field field40 = createNode("field");
field40.name = "scalarInterpolator";
field40.accessType = "initializeOnly";
field40.type = "SFNode";
Script33.field[6] = field40;

field field41 = createNode("field");
field41.name = "autoViewpoint";
field41.accessType = "initializeOnly";
field41.type = "SFNode";
Script33.field[7] = field41;

field field42 = createNode("field");
field42.name = "viewpoint";
field42.accessType = "initializeOnly";
field42.type = "SFNode";
Script33.field[8] = field42;

field field43 = createNode("field");
field43.name = "data";
field43.accessType = "initializeOnly";
field43.type = "SFNode";
ProtoInstance ProtoInstance44 = createNode("ProtoInstance");
ProtoInstance44.name = "Data";
ProtoInstance44.DEF = "Data";
IS IS45 = createNode("IS");
connect connect46 = createNode("connect");
connect46.nodeField = "startTime";
connect46.protoField = "startTime";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

ProtoInstance44.iS = IS45;

field43.children = new MFNode();

field43.children[0] = ProtoInstance44;

Script33.field[9] = field43;

IS IS47 = createNode("IS");
connect connect48 = createNode("connect");
connect48.nodeField = "set_isActive";
connect48.protoField = "set_isActive";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "proximitySensor";
connect49.protoField = "proximitySensor";
IS47.connect[1] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "timeSensor";
connect50.protoField = "timeSensor";
IS47.connect[2] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "positionInterpolator";
connect51.protoField = "positionInterpolator";
IS47.connect[3] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "orientationInterpolator";
connect52.protoField = "orientationInterpolator";
IS47.connect[4] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "scalarInterpolator";
connect53.protoField = "scalarInterpolator";
IS47.connect[5] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "autoViewpoint";
connect54.protoField = "autoViewpoint";
IS47.connect[6] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "viewpoint";
connect55.protoField = "viewpoint";
IS47.connect[7] = connect55;

Script33.iS = IS47;


Script33.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	timeSensor.enabled  = FALSE;\n"+
"	timeSensor.stopTime = 0;\n"+
"\n"+
"	if (positionInterpolator) {\n"+
"		positionInterpolator.key      = new MFFloat(0, 1);\n"+
"		positionInterpolator.keyValue = new MFVec3f(\n"+
"			new SFVec3f(0, 0, 0),\n"+
"			viewpoint.position\n"+
"		);\n"+
"	}\n"+
"\n"+
"	if (orientationInterpolator) {\n"+
"		orientationInterpolator.key      = new MFFloat(0, 1);\n"+
"		orientationInterpolator.keyValue = new MFRotation(\n"+
"			new SFRotation(0, 0, 1, 0),\n"+
"			viewpoint.orientation\n"+
"		);\n"+
"	}\n"+
"\n"+
"	if (scalarInterpolator) {\n"+
"		scalarInterpolator.key		= new MFFloat(0, 1);\n"+
"		scalarInterpolator.keyValue = new MFFloat(\n"+
"			autoViewpoint.fieldOfView,\n"+
"			viewpoint.fieldOfView\n"+
"		);\n"+
"	}\n"+
"	autoViewpoint.jump = FALSE;\n"+
"}\n"+
"\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	if (timeSensor.isActive) return;\n"+
"\n"+
"	timeSensor.enabled = TRUE;\n"+
"\n"+
"	autoViewpoint.position    = proximitySensor.position_changed;\n"+
"	autoViewpoint.orientation = proximitySensor.orientation_changed;\n"+
"\n"+
"	if (positionInterpolator)    positionInterpolator.keyValue[0]    = autoViewpoint.position;\n"+
"	if (orientationInterpolator) orientationInterpolator.keyValue[0] = autoViewpoint.orientation;\n"+
"\n"+
"	autoViewpoint.set_bind = TRUE;\n"+
"	timeSensor.startTime   = time;\n"+
"}\n"+
"\n"+
"function set_isActive(value, time)\n"+
"{\n"+
"	if (!value) {\n"+
"		timeSensor.enabled = FALSE;\n"+
"		if (autoViewpoint.isBound) {\n"+
"			//autoViewpoint.set_bind = FALSE;\n"+
"			viewpoint.set_bind = TRUE;\n"+
"		}\n"+
"	}\n"+
"}`)
Group32.children = new MFNode();

Group32.children[0] = Script33;

ProtoBody26.children[1] = Group32;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "Data";
ROUTE56.fromField = "startTime_changed";
ROUTE56.toNode = "avp";
ROUTE56.toField = "set_startTime";
ProtoBody26.children[2] = ROUTE56;

ProtoDeclare8.protoBody = ProtoBody26;

children = new MFNode();

children[0] = ProtoDeclare8;

}
