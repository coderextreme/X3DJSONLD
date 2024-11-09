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
<ProtoDeclare name="ToggleAnim" ><ProtoInterface><field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_animating" accessType="inputOnly" type="SFBool"></field>
<field name="offset" accessType="inputOutput" type="SFBool"></field>
<field name="toggled" accessType="outputOnly" type="SFBool"></field>
<field name="forwardTimer" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="unamedForwardTimer" enabled="false"></TimeSensor>
</field>
<field name="backTimer" accessType="initializeOnly" type="SFNode"><TimeSensor DEF="unamedBackTimer" enabled="false"></TimeSensor>
</field>
</ProtoInterface>
<ProtoBody><ProtoDeclare name="Data"><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>
<Group><Script DEF="_toggleAnim_1" directOutput="true"><field name="toggled" accessType="outputOnly" type="SFBool"></field>
<field name="startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_animating" accessType="inputOnly" type="SFBool"></field>
<field name="set_offset" accessType="inputOnly" type="SFBool"></field>
<field name="animating" accessType="initializeOnly" type="SFBool"></field>
<field name="click" accessType="initializeOnly" type="SFBool"></field>
<field name="forwardTimer" accessType="initializeOnly" type="SFNode"></field>
<field name="backTimer" accessType="initializeOnly" type="SFNode"></field>
<field name="data" accessType="initializeOnly" type="SFNode"><ProtoInstance name="Data" DEF="_1"><IS><connect nodeField="offset" protoField="offset"></connect>
</IS>
</ProtoInstance>
</field>
<IS><connect nodeField="toggled" protoField="toggled"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="set_animating" protoField="set_animating"></connect>
<connect nodeField="forwardTimer" protoField="forwardTimer"></connect>
<connect nodeField="backTimer" protoField="backTimer"></connect>
</IS>
<![CDATA[vrmlscript:

function initialize()
{
	forwardTimer.enabled = FALSE;
	backTimer.enabled = FALSE;

	if (data.offset){
		backTimer.fraction_changed = 0;
	}else {
		forwardTimer.fraction_changed = 0;
	}
	toggled = data.offset;
}

function startTime(value, time)
{
	if (!toggled){
		if(animating) click = TRUE;
		else{
			forwardTimer.enabled   = TRUE;
			forwardTimer.startTime = time;
		}
	}else {
		if(animating) click = TRUE;
		else{
			backTimer.enabled   = TRUE;
			backTimer.startTime = time;
		}
	}	
}

function set_animating(value, time)
{
	animating = value;
	if (value){
		click = FALSE;
	} else {
		toggled = !toggled;
		if (click){
			if (toggled){
				backTimer.enabled   = TRUE;
				backTimer.startTime = time;
			}else {
				forwardTimer.enabled   = TRUE;
				forwardTimer.startTime = time;
			}	
		}
	}
}

function set_offset(value, time)
{
	click = FALSE;
	forwardTimer.enabled = FALSE;
	backTimer.enabled = FALSE;

	if (value){
		backTimer.fraction_changed = 0;
	}else {
		forwardTimer.fraction_changed = 0;
	}
	toggled = value;
}]]></Script>
</Group>
<ROUTE fromNode="_1" fromField="offset_changed" toNode="_toggleAnim_1" toField="set_offset"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "ToggleAnim";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOnly";
field10.type = "SFTime";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "set_animating";
field11.accessType = "inputOnly";
field11.type = "SFBool";
ProtoInterface9.field[1] = field11;

field field12 = createNode("field");
field12.name = "offset";
field12.accessType = "inputOutput";
field12.type = "SFBool";
ProtoInterface9.field[2] = field12;

field field13 = createNode("field");
field13.name = "toggled";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface9.field[3] = field13;

field field14 = createNode("field");
field14.name = "forwardTimer";
field14.accessType = "initializeOnly";
field14.type = "SFNode";
TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "unamedForwardTimer";
TimeSensor15.enabled = False;
field14.children = new MFNode();

field14.children[0] = TimeSensor15;

ProtoInterface9.field[4] = field14;

field field16 = createNode("field");
field16.name = "backTimer";
field16.accessType = "initializeOnly";
field16.type = "SFNode";
TimeSensor TimeSensor17 = createNode("TimeSensor");
TimeSensor17.DEF = "unamedBackTimer";
TimeSensor17.enabled = False;
field16.children = new MFNode();

field16.children[0] = TimeSensor17;

ProtoInterface9.field[5] = field16;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody18 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Data" ><ProtoInterface><field name="offset" accessType="inputOutput" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "Data";
ProtoInterface ProtoInterface20 = createNode("ProtoInterface");
field field21 = createNode("field");
field21.name = "offset";
field21.accessType = "inputOutput";
field21.type = "SFBool";
ProtoInterface20.field = new MFNode();

ProtoInterface20.field[0] = field21;

ProtoDeclare19.protoInterface = ProtoInterface20;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Group Group23 = createNode("Group");
ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare19.protoBody = ProtoBody22;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = ProtoDeclare19;

Group Group24 = createNode("Group");
Script Script25 = createNode("Script");
Script25.DEF = "_toggleAnim_1";
Script25.directOutput = True;
field field26 = createNode("field");
field26.name = "toggled";
field26.accessType = "outputOnly";
field26.type = "SFBool";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "startTime";
field27.accessType = "inputOnly";
field27.type = "SFTime";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "set_animating";
field28.accessType = "inputOnly";
field28.type = "SFBool";
Script25.field[2] = field28;

field field29 = createNode("field");
field29.name = "set_offset";
field29.accessType = "inputOnly";
field29.type = "SFBool";
Script25.field[3] = field29;

field field30 = createNode("field");
field30.name = "animating";
field30.accessType = "initializeOnly";
field30.type = "SFBool";
Script25.field[4] = field30;

field field31 = createNode("field");
field31.name = "click";
field31.accessType = "initializeOnly";
field31.type = "SFBool";
Script25.field[5] = field31;

field field32 = createNode("field");
field32.name = "forwardTimer";
field32.accessType = "initializeOnly";
field32.type = "SFNode";
Script25.field[6] = field32;

field field33 = createNode("field");
field33.name = "backTimer";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
Script25.field[7] = field33;

field field34 = createNode("field");
field34.name = "data";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "Data";
ProtoInstance35.DEF = "_1";
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "offset";
connect37.protoField = "offset";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

ProtoInstance35.iS = IS36;

field34.children = new MFNode();

field34.children[0] = ProtoInstance35;

Script25.field[8] = field34;

IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "toggled";
connect39.protoField = "toggled";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

connect connect40 = createNode("connect");
connect40.nodeField = "startTime";
connect40.protoField = "startTime";
IS38.connect[1] = connect40;

connect connect41 = createNode("connect");
connect41.nodeField = "set_animating";
connect41.protoField = "set_animating";
IS38.connect[2] = connect41;

connect connect42 = createNode("connect");
connect42.nodeField = "forwardTimer";
connect42.protoField = "forwardTimer";
IS38.connect[3] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "backTimer";
connect43.protoField = "backTimer";
IS38.connect[4] = connect43;

Script25.iS = IS38;


Script25.setSourceCode(`vrmlscript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	forwardTimer.enabled = FALSE;\n"+
"	backTimer.enabled = FALSE;\n"+
"\n"+
"	if (data.offset){\n"+
"		backTimer.fraction_changed = 0;\n"+
"	}else {\n"+
"		forwardTimer.fraction_changed = 0;\n"+
"	}\n"+
"	toggled = data.offset;\n"+
"}\n"+
"\n"+
"function startTime(value, time)\n"+
"{\n"+
"	if (!toggled){\n"+
"		if(animating) click = TRUE;\n"+
"		else{\n"+
"			forwardTimer.enabled   = TRUE;\n"+
"			forwardTimer.startTime = time;\n"+
"		}\n"+
"	}else {\n"+
"		if(animating) click = TRUE;\n"+
"		else{\n"+
"			backTimer.enabled   = TRUE;\n"+
"			backTimer.startTime = time;\n"+
"		}\n"+
"	}	\n"+
"}\n"+
"\n"+
"function set_animating(value, time)\n"+
"{\n"+
"	animating = value;\n"+
"	if (value){\n"+
"		click = FALSE;\n"+
"	} else {\n"+
"		toggled = !toggled;\n"+
"		if (click){\n"+
"			if (toggled){\n"+
"				backTimer.enabled   = TRUE;\n"+
"				backTimer.startTime = time;\n"+
"			}else {\n"+
"				forwardTimer.enabled   = TRUE;\n"+
"				forwardTimer.startTime = time;\n"+
"			}	\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_offset(value, time)\n"+
"{\n"+
"	click = FALSE;\n"+
"	forwardTimer.enabled = FALSE;\n"+
"	backTimer.enabled = FALSE;\n"+
"\n"+
"	if (value){\n"+
"		backTimer.fraction_changed = 0;\n"+
"	}else {\n"+
"		forwardTimer.fraction_changed = 0;\n"+
"	}\n"+
"	toggled = value;\n"+
"}`)
Group24.children = new MFNode();

Group24.children[0] = Script25;

ProtoBody18.children[1] = Group24;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "_1";
ROUTE44.fromField = "offset_changed";
ROUTE44.toNode = "_toggleAnim_1";
ROUTE44.toField = "set_offset";
ProtoBody18.children[2] = ROUTE44;

ProtoDeclare8.protoBody = ProtoBody18;

children = new MFNode();

children[0] = ProtoDeclare8;

WorldInfo WorldInfo45 = createNode("WorldInfo");
WorldInfo45.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
children[1] = WorldInfo45;

}
