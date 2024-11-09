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
meta3.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 25 Sep 2015 17:43:15 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="TourGuide" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="viewpointPosition" accessType="initializeOnly" type="SFVec3f"></field>
<field name="viewpointOrientation" accessType="initializeOnly" type="SFRotation"></field>
<field name="set_bind" accessType="inputOnly" type="SFBool"></field>
<field name="isBound" accessType="outputOnly" type="SFBool"></field>
<field name="bind_changed" accessType="outputOnly" type="SFBool"></field>
<field name="proximitySensor" accessType="initializeOnly" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Transform><Viewpoint DEF="_1" position="0 0 0" jump="false"></Viewpoint>
<Transform><Script DEF="_guide_1" directOutput="true"><field name="bind_changed" accessType="outputOnly" type="SFBool"></field>
<field name="set_bind" accessType="inputOnly" type="SFBool"></field>
<field name="isActive" accessType="inputOnly" type="SFBool"></field>
<field name="viewpointPosition" accessType="initializeOnly" type="SFVec3f"></field>
<field name="viewpointOrientation" accessType="initializeOnly" type="SFRotation"></field>
<field name="proximitySensor" accessType="initializeOnly" type="SFNode"></field>
<field name="timeSensor" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="_2"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
</IS>
</TimeSensor>
</field>
<field name="positionInterpolator" accessType="initializeOnly" type="SFNode"><PositionInterpolator DEF="_3" key="0 1" keyValue="0 0 0 0 0 0"></PositionInterpolator>
</field>
<field name="orientationInterpolator" accessType="initializeOnly" type="SFNode"><OrientationInterpolator DEF="_4" key="0 1" keyValue="0 0 1 0 0 0 1 0"></OrientationInterpolator>
</field>
<field name="viewPoint" accessType="initializeOnly" type="SFNode"><Viewpoint USE="_1"></Viewpoint>
</field>
<IS><connect nodeField="bind_changed" protoField="bind_changed"></connect>
<connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="viewpointPosition" protoField="viewpointPosition"></connect>
<connect nodeField="viewpointOrientation" protoField="viewpointOrientation"></connect>
<connect nodeField="proximitySensor" protoField="proximitySensor"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize()
{
	positionInterpolator.keyValue[1]    = viewpointPosition;
	orientationInterpolator.keyValue[1] = viewpointOrientation;
}

function isActive(value, time)
{
	if (!value){
		timeSensor.enabled = FALSE;
		viewPoint.set_bind = FALSE;
		bind_changed = TRUE;
	}
}

function set_bind(value, time)
{
	if (value){
		timeSensor.enabled    = TRUE;

		viewPoint.position    = proximitySensor.position_changed;
		viewPoint.orientation = proximitySensor.orientation_changed;
	
		positionInterpolator.keyValue[0]    = viewPoint.position;
		orientationInterpolator.keyValue[0] = viewPoint.orientation;

		viewPoint.set_bind = TRUE;
	}else {
		bind_changed = FALSE;
	}
}]]></Script>
</Transform>
</Transform>
<ROUTE fromNode="_3" fromField="value_changed" toNode="_1" toField="set_position"></ROUTE>
<ROUTE fromNode="_4" fromField="value_changed" toNode="_1" toField="set_orientation"></ROUTE>
<ROUTE fromNode="_1" fromField="isBound" toNode="_2" toField="set_enabled"></ROUTE>
<ROUTE fromNode="_1" fromField="bindTime" toNode="_2" toField="set_startTime"></ROUTE>
<ROUTE fromNode="_2" fromField="fraction_changed" toNode="_3" toField="set_fraction"></ROUTE>
<ROUTE fromNode="_2" fromField="fraction_changed" toNode="_4" toField="set_fraction"></ROUTE>
<ROUTE fromNode="_2" fromField="isActive" toNode="_guide_1" toField="isActive"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "TourGuide";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "cycleInterval";
field10.accessType = "inputOutput";
field10.type = "SFTime";
field10.value = "1";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "viewpointPosition";
field11.accessType = "initializeOnly";
field11.type = "SFVec3f";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "viewpointOrientation";
field12.accessType = "initializeOnly";
field12.type = "SFRotation";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "set_bind";
field13.accessType = "inputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "isBound";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ProtoInterface9.field[4] = field14;

field field15 = createNode("field");
field15.name = "bind_changed";
field15.accessType = "outputOnly";
field15.type = "SFBool";
ProtoInterface9.field[5] = field15;

field field16 = createNode("field");
field16.name = "proximitySensor";
field16.accessType = "initializeOnly";
field16.type = "SFNode";
ProtoInterface9.field[6] = field16;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody17 = createNode("ProtoBody");
Transform Transform18 = createNode("Transform");
Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.DEF = "_1";
Viewpoint19.position = new SFVec3f(new float[0,0,0]);
Viewpoint19.jump = False;
Transform18.children = new MFNode();

Transform18.children[0] = Viewpoint19;

Transform Transform20 = createNode("Transform");
Script Script21 = createNode("Script");
Script21.DEF = "_guide_1";
Script21.directOutput = True;
field field22 = createNode("field");
field22.name = "bind_changed";
field22.accessType = "outputOnly";
field22.type = "SFBool";
Script21.field = new MFNode();

Script21.field[0] = field22;

field field23 = createNode("field");
field23.name = "set_bind";
field23.accessType = "inputOnly";
field23.type = "SFBool";
Script21.field[1] = field23;

field field24 = createNode("field");
field24.name = "isActive";
field24.accessType = "inputOnly";
field24.type = "SFBool";
Script21.field[2] = field24;

field field25 = createNode("field");
field25.name = "viewpointPosition";
field25.accessType = "initializeOnly";
field25.type = "SFVec3f";
Script21.field[3] = field25;

field field26 = createNode("field");
field26.name = "viewpointOrientation";
field26.accessType = "initializeOnly";
field26.type = "SFRotation";
Script21.field[4] = field26;

field field27 = createNode("field");
field27.name = "proximitySensor";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
Script21.field[5] = field27;

field field28 = createNode("field");
field28.name = "timeSensor";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
TimeSensor TimeSensor29 = createNode("TimeSensor");
TimeSensor29.DEF = "_2";
IS IS30 = createNode("IS");
connect connect31 = createNode("connect");
connect31.nodeField = "cycleInterval";
connect31.protoField = "cycleInterval";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

TimeSensor29.iS = IS30;

field28.children = new MFNode();

field28.children[0] = TimeSensor29;

Script21.field[6] = field28;

field field32 = createNode("field");
field32.name = "positionInterpolator";
field32.accessType = "initializeOnly";
field32.type = "SFNode";
PositionInterpolator PositionInterpolator33 = createNode("PositionInterpolator");
PositionInterpolator33.DEF = "_3";
PositionInterpolator33.key = new MFFloat(new float[0,1]);
PositionInterpolator33.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
field32.children = new MFNode();

field32.children[0] = PositionInterpolator33;

Script21.field[7] = field32;

field field34 = createNode("field");
field34.name = "orientationInterpolator";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
OrientationInterpolator OrientationInterpolator35 = createNode("OrientationInterpolator");
OrientationInterpolator35.DEF = "_4";
OrientationInterpolator35.key = new MFFloat(new float[0,1]);
OrientationInterpolator35.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
field34.children = new MFNode();

field34.children[0] = OrientationInterpolator35;

Script21.field[8] = field34;

field field36 = createNode("field");
field36.name = "viewPoint";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.USE = "_1";
field36.children = new MFNode();

field36.children[0] = Viewpoint37;

Script21.field[9] = field36;

IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "bind_changed";
connect39.protoField = "bind_changed";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "set_bind";
connect40.protoField = "set_bind";
IS38.connect[1] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "viewpointPosition";
connect41.protoField = "viewpointPosition";
IS38.connect[2] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "viewpointOrientation";
connect42.protoField = "viewpointOrientation";
IS38.connect[3] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "proximitySensor";
connect43.protoField = "proximitySensor";
IS38.connect[4] = connect43;

Script21.iS = IS38;


Script21.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	positionInterpolator.keyValue[1]    = viewpointPosition;\n"+
"	orientationInterpolator.keyValue[1] = viewpointOrientation;\n"+
"}\n"+
"\n"+
"function isActive(value, time)\n"+
"{\n"+
"	if (!value){\n"+
"		timeSensor.enabled = FALSE;\n"+
"		viewPoint.set_bind = FALSE;\n"+
"		bind_changed = TRUE;\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_bind(value, time)\n"+
"{\n"+
"	if (value){\n"+
"		timeSensor.enabled    = TRUE;\n"+
"\n"+
"		viewPoint.position    = proximitySensor.position_changed;\n"+
"		viewPoint.orientation = proximitySensor.orientation_changed;\n"+
"	\n"+
"		positionInterpolator.keyValue[0]    = viewPoint.position;\n"+
"		orientationInterpolator.keyValue[0] = viewPoint.orientation;\n"+
"\n"+
"		viewPoint.set_bind = TRUE;\n"+
"	}else {\n"+
"		bind_changed = FALSE;\n"+
"	}\n"+
"}`)
Transform20.children = new MFNode();

Transform20.children[0] = Script21;

Transform18.children[1] = Transform20;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = Transform18;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "_3";
ROUTE44.fromField = "value_changed";
ROUTE44.toNode = "_1";
ROUTE44.toField = "set_position";
ProtoBody17.children[1] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "_4";
ROUTE45.fromField = "value_changed";
ROUTE45.toNode = "_1";
ROUTE45.toField = "set_orientation";
ProtoBody17.children[2] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_1";
ROUTE46.fromField = "isBound";
ROUTE46.toNode = "_2";
ROUTE46.toField = "set_enabled";
ProtoBody17.children[3] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "_1";
ROUTE47.fromField = "bindTime";
ROUTE47.toNode = "_2";
ROUTE47.toField = "set_startTime";
ProtoBody17.children[4] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "_2";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "_3";
ROUTE48.toField = "set_fraction";
ProtoBody17.children[5] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "_2";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "_4";
ROUTE49.toField = "set_fraction";
ProtoBody17.children[6] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "_2";
ROUTE50.fromField = "isActive";
ROUTE50.toNode = "_guide_1";
ROUTE50.toField = "isActive";
ProtoBody17.children[7] = ROUTE50;

ProtoDeclare8.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare8;

Group Group51 = createNode("Group");
WorldInfo WorldInfo52 = createNode("WorldInfo");
WorldInfo52.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group51.children = new MFNode();

Group51.children[0] = WorldInfo52;

ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "TourGuide";
Group51.children[1] = ProtoInstance53;

children[1] = Group51;

}
