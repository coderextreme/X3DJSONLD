let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "EventUtilityPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="BooleanFilter" appinfo="BooleanFilter selectively passes true false or negated events." ><ProtoInterface><field name="set_boolean" accessType="inputOnly" appinfo="set_boolean is the input value to be filtered." type="SFBool"></field>
<field name="inputTrue" accessType="outputOnly" appinfo="inputTrue only passes a true value when set_boolean input is true." type="SFBool"></field>
<field name="inputFalse" accessType="outputOnly" appinfo="inputFalse only passes a false value when set_boolean is false." type="SFBool"></field>
<field name="inputNegate" accessType="outputOnly" appinfo="inputNegate provides opposite value by negating set_boolean input." type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="BooleanFilterScript"><field name="set_boolean" accessType="inputOnly" type="SFBool"></field>
<field name="inputTrue" accessType="outputOnly" type="SFBool"></field>
<field name="inputFalse" accessType="outputOnly" type="SFBool"></field>
<field name="inputNegate" accessType="outputOnly" type="SFBool"></field>
<IS><connect nodeField="set_boolean" protoField="set_boolean"></connect>
<connect nodeField="inputTrue" protoField="inputTrue"></connect>
<connect nodeField="inputFalse" protoField="inputFalse"></connect>
<connect nodeField="inputNegate" protoField="inputNegate"></connect>
</IS>
<![CDATA[ecmascript:

function set_boolean (value, timestamp)
{
	if (value) inputTrue  = value;
	else       inputFalse = value;
	inputNegate = !value;

//	if (value) Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputTrue='  + inputTrue  + ', inputNegate=' + inputNegate);
//	else       Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputFalse=' + inputFalse + ', inputNegate=' + inputNegate);
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "BooleanFilter";
ProtoDeclare3.appinfo = "BooleanFilter selectively passes true false or negated events.";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_boolean";
field5.accessType = "inputOnly";
field5.appinfo = "set_boolean is the input value to be filtered.";
field5.type = "SFBool";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "inputTrue";
field6.accessType = "outputOnly";
field6.appinfo = "inputTrue only passes a true value when set_boolean input is true.";
field6.type = "SFBool";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "inputFalse";
field7.accessType = "outputOnly";
field7.appinfo = "inputFalse only passes a false value when set_boolean is false.";
field7.type = "SFBool";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "inputNegate";
field8.accessType = "outputOnly";
field8.appinfo = "inputNegate provides opposite value by negating set_boolean input.";
field8.type = "SFBool";
ProtoInterface4.field[3] = field8;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
let Script10 = browser.currentScene.createNode("Script");
Script10.DEF = "BooleanFilterScript";
let field11 = browser.currentScene.createNode("field");
field11.name = "set_boolean";
field11.accessType = "inputOnly";
field11.type = "SFBool";
Script10.field = new MFNode();

Script10.field[0] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "inputTrue";
field12.accessType = "outputOnly";
field12.type = "SFBool";
Script10.field[1] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "inputFalse";
field13.accessType = "outputOnly";
field13.type = "SFBool";
Script10.field[2] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "inputNegate";
field14.accessType = "outputOnly";
field14.type = "SFBool";
Script10.field[3] = field14;

let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "set_boolean";
connect16.protoField = "set_boolean";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "inputTrue";
connect17.protoField = "inputTrue";
IS15.connect[1] = connect17;

let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "inputFalse";
connect18.protoField = "inputFalse";
IS15.connect[2] = connect18;

let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "inputNegate";
connect19.protoField = "inputNegate";
IS15.connect[3] = connect19;

Script10.iS = IS15;


Script10.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (value, timestamp)\n"+
"{\n"+
"	if (value) inputTrue  = value;\n"+
"	else       inputFalse = value;\n"+
"	inputNegate = !value;\n"+
"\n"+
"//	if (value) Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputTrue='  + inputTrue  + ', inputNegate=' + inputNegate);\n"+
"//	else       Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputFalse=' + inputFalse + ', inputNegate=' + inputNegate);\n"+
"}`)
ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Script10;

ProtoDeclare3.protoBody = ProtoBody9;

browser.currentScene.children[1] = ProtoDeclare3;

//========================================
let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="BooleanToggle" appinfo="BooleanToggle maintains state and negates output when a true input is provided." ><ProtoInterface><field name="set_boolean" accessType="inputOnly" appinfo="If set_boolean input is true toggle state." type="SFBool"></field>
<field name="set_toggle" accessType="inputOnly" appinfo="Reset persistent state value." type="SFBool"></field>
<field name="toggle" accessType="initializeOnly" appinfo="Persistent state value that gets toggled or reset." type="SFBool" value="false"></field>
<field name="toggle_changed" accessType="outputOnly" appinfo="Output toggled persistent state value." type="SFBool"></field>
<!--warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet.--></ProtoInterface>
<ProtoBody><Group><Script DEF="BooleanToggleScript"><field name="set_boolean" accessType="inputOnly" type="SFBool"></field>
<field name="set_toggle" accessType="inputOnly" type="SFBool"></field>
<field name="toggle" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="toggle_changed" accessType="outputOnly" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" type="SFBool" value="false"></field>
<IS><connect nodeField="set_boolean" protoField="set_boolean"></connect>
<connect nodeField="set_toggle" protoField="set_toggle"></connect>
<connect nodeField="toggle_changed" protoField="toggle_changed"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	if (traceEnabled) Browser.print ('[BooleanToggle] toggle=' + toggle);

}
function set_boolean (value, timestamp)
{
	if (value == true)  // only toggle on true input
	{
		if (toggle == true) toggle = false;
		else                toggle = true;
	}
	toggle_changed = toggle;
//	Browser.print ('[BooleanToggle] traceEnabled=' + traceEnabled);
	if (traceEnabled) Browser.print ('[BooleanToggle] set_boolean=' + value + ', toggle=' + toggle);
}
function set_toggle (value, timestamp)
{
	toggle = value;
	toggle_changed = toggle;
	if (traceEnabled) Browser.print ('[BooleanToggle] set_toggle=' + set_toggle);
}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare20.name = "BooleanToggle";
ProtoDeclare20.appinfo = "BooleanToggle maintains state and negates output when a true input is provided.";
let ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
let field22 = browser.currentScene.createNode("field");
field22.name = "set_boolean";
field22.accessType = "inputOnly";
field22.appinfo = "If set_boolean input is true toggle state.";
field22.type = "SFBool";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "set_toggle";
field23.accessType = "inputOnly";
field23.appinfo = "Reset persistent state value.";
field23.type = "SFBool";
ProtoInterface21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "toggle";
field24.accessType = "initializeOnly";
field24.appinfo = "Persistent state value that gets toggled or reset.";
field24.type = "SFBool";
field24.value = "false";
ProtoInterface21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "toggle_changed";
field25.accessType = "outputOnly";
field25.appinfo = "Output toggled persistent state value.";
field25.type = "SFBool";
ProtoInterface21.field[3] = field25;

//warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet.
ProtoDeclare20.protoInterface = ProtoInterface21;

let ProtoBody26 = browser.currentScene.createNode("ProtoBody");
let Group27 = browser.currentScene.createNode("Group");
let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "BooleanToggleScript";
let field29 = browser.currentScene.createNode("field");
field29.name = "set_boolean";
field29.accessType = "inputOnly";
field29.type = "SFBool";
Script28.field = new MFNode();

Script28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "set_toggle";
field30.accessType = "inputOnly";
field30.type = "SFBool";
Script28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "toggle";
field31.accessType = "initializeOnly";
field31.type = "SFBool";
field31.value = "false";
Script28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "toggle_changed";
field32.accessType = "outputOnly";
field32.type = "SFBool";
Script28.field[3] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "traceEnabled";
field33.accessType = "initializeOnly";
field33.type = "SFBool";
field33.value = "false";
Script28.field[4] = field33;

let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "set_boolean";
connect35.protoField = "set_boolean";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "set_toggle";
connect36.protoField = "set_toggle";
IS34.connect[1] = connect36;

let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "toggle_changed";
connect37.protoField = "toggle_changed";
IS34.connect[2] = connect37;

Script28.iS = IS34;


Script28.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[BooleanToggle] toggle=' + toggle);\n"+
"\n"+
"}\n"+
"function set_boolean (value, timestamp)\n"+
"{\n"+
"	if (value == true)  // only toggle on true input\n"+
"	{\n"+
"		if (toggle == true) toggle = false;\n"+
"		else                toggle = true;\n"+
"	}\n"+
"	toggle_changed = toggle;\n"+
"//	Browser.print ('[BooleanToggle] traceEnabled=' + traceEnabled);\n"+
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_boolean=' + value + ', toggle=' + toggle);\n"+
"}\n"+
"function set_toggle (value, timestamp)\n"+
"{\n"+
"	toggle = value;\n"+
"	toggle_changed = toggle;\n"+
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_toggle=' + set_toggle);\n"+
"}`)
Group27.children = new MFNode();

Group27.children[0] = Script28;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Group27;

ProtoDeclare20.protoBody = ProtoBody26;

browser.currentScene.children[2] = ProtoDeclare20;

//========================================
let ProtoDeclare38 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="BooleanTrigger" appinfo="BooleanTrigger converts time events to boolean true events." ><ProtoInterface><field name="set_triggerTime" accessType="inputOnly" appinfo="set_triggerTime provides input time event typical event sent is TouchSensor touchTime." type="SFTime"></field>
<field name="triggerTrue" accessType="outputOnly" appinfo="triggerTrue outputs a true value whenever a triggerTime event is received." type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Script DEF="TriggerBooleanScript"><field name="set_triggerTime" accessType="inputOnly" type="SFTime"></field>
<field name="triggerTrue" accessType="outputOnly" type="SFBool"></field>
<IS><connect nodeField="set_triggerTime" protoField="set_triggerTime"></connect>
<connect nodeField="triggerTrue" protoField="triggerTrue"></connect>
</IS>
<![CDATA[ecmascript:

function set_triggerTime (value, timestamp)
{
	triggerTrue = true;
//	Browser.print ('triggerTrue = true');
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare38.name = "BooleanTrigger";
ProtoDeclare38.appinfo = "BooleanTrigger converts time events to boolean true events.";
let ProtoInterface39 = browser.currentScene.createNode("ProtoInterface");
let field40 = browser.currentScene.createNode("field");
field40.name = "set_triggerTime";
field40.accessType = "inputOnly";
field40.appinfo = "set_triggerTime provides input time event typical event sent is TouchSensor touchTime.";
field40.type = "SFTime";
ProtoInterface39.field = new MFNode();

ProtoInterface39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "triggerTrue";
field41.accessType = "outputOnly";
field41.appinfo = "triggerTrue outputs a true value whenever a triggerTime event is received.";
field41.type = "SFBool";
ProtoInterface39.field[1] = field41;

ProtoDeclare38.protoInterface = ProtoInterface39;

let ProtoBody42 = browser.currentScene.createNode("ProtoBody");
let Script43 = browser.currentScene.createNode("Script");
Script43.DEF = "TriggerBooleanScript";
let field44 = browser.currentScene.createNode("field");
field44.name = "set_triggerTime";
field44.accessType = "inputOnly";
field44.type = "SFTime";
Script43.field = new MFNode();

Script43.field[0] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "triggerTrue";
field45.accessType = "outputOnly";
field45.type = "SFBool";
Script43.field[1] = field45;

let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "set_triggerTime";
connect47.protoField = "set_triggerTime";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "triggerTrue";
connect48.protoField = "triggerTrue";
IS46.connect[1] = connect48;

Script43.iS = IS46;


Script43.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_triggerTime (value, timestamp)\n"+
"{\n"+
"	triggerTrue = true;\n"+
"//	Browser.print ('triggerTrue = true');\n"+
"}`)
ProtoBody42.children = new MFNode();

ProtoBody42.children[0] = Script43;

ProtoDeclare38.protoBody = ProtoBody42;

browser.currentScene.children[3] = ProtoDeclare38;

//========================================
let ProtoDeclare49 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IntegerTrigger" appinfo="IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node)." ><ProtoInterface><field name="set_boolean" accessType="inputOnly" appinfo="If set_boolean input is true trigger output of integer value." type="SFBool"></field>
<field name="set_integerKey" accessType="inputOnly" appinfo="Resets value used for output when triggered later." type="SFInt32"></field>
<field name="integerKey" accessType="inputOutput" appinfo="integerKey is value for output when triggered." type="SFInt32" value="-1"></field>
<field name="integerKey_changed" accessType="outputOnly" appinfo="Reports change in integerKey value." type="SFInt32"></field>
<field name="triggerValue" accessType="outputOnly" appinfo="triggerValue provides integer event output matching integerKey when true set_boolean received." type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Group><Switch DEF="IntegerKeyHolder" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="integerKey"></connect>
</IS>
</Switch>
<Script DEF="TriggerIntegerScript" directOutput="true"><field name="set_boolean" accessType="inputOnly" type="SFBool"></field>
<field name="set_integerKey" accessType="inputOnly" type="SFInt32"></field>
<field name="integerKeyHolderNode" accessType="initializeOnly" type="SFNode"><Switch USE="IntegerKeyHolder"></Switch>
</field>
<field name="integerKey_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="triggerValue" accessType="outputOnly" type="SFInt32"></field>
<IS><connect nodeField="set_boolean" protoField="set_boolean"></connect>
<connect nodeField="set_integerKey" protoField="set_integerKey"></connect>
<connect nodeField="integerKey_changed" protoField="integerKey_changed"></connect>
<connect nodeField="triggerValue" protoField="triggerValue"></connect>
</IS>
<![CDATA[ecmascript:

function set_boolean (inputValue, timestamp)
{
	if (inputValue == true)
	{
		integerKey = integerKeyHolderNode.whichChoice;
		triggerValue = integerKey; // send output event
	}
}
function set_integerKey (inputValue, timestamp)
{
	integerKey = inputValue;
	integerKeyHolderNode.whichChoice = integerKey;
	integerKey_changed = integerKey; // send output event
}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare49.name = "IntegerTrigger";
ProtoDeclare49.appinfo = "IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).";
let ProtoInterface50 = browser.currentScene.createNode("ProtoInterface");
let field51 = browser.currentScene.createNode("field");
field51.name = "set_boolean";
field51.accessType = "inputOnly";
field51.appinfo = "If set_boolean input is true trigger output of integer value.";
field51.type = "SFBool";
ProtoInterface50.field = new MFNode();

ProtoInterface50.field[0] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_integerKey";
field52.accessType = "inputOnly";
field52.appinfo = "Resets value used for output when triggered later.";
field52.type = "SFInt32";
ProtoInterface50.field[1] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "integerKey";
field53.accessType = "inputOutput";
field53.appinfo = "integerKey is value for output when triggered.";
field53.type = "SFInt32";
field53.value = "-1";
ProtoInterface50.field[2] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "integerKey_changed";
field54.accessType = "outputOnly";
field54.appinfo = "Reports change in integerKey value.";
field54.type = "SFInt32";
ProtoInterface50.field[3] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "triggerValue";
field55.accessType = "outputOnly";
field55.appinfo = "triggerValue provides integer event output matching integerKey when true set_boolean received.";
field55.type = "SFInt32";
ProtoInterface50.field[4] = field55;

ProtoDeclare49.protoInterface = ProtoInterface50;

let ProtoBody56 = browser.currentScene.createNode("ProtoBody");
let Group57 = browser.currentScene.createNode("Group");
let Switch58 = browser.currentScene.createNode("Switch");
Switch58.DEF = "IntegerKeyHolder";
Switch58.whichChoice = -1;
let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "whichChoice";
connect60.protoField = "integerKey";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

Switch58.iS = IS59;

Group57.children = new MFNode();

Group57.children[0] = Switch58;

let Script61 = browser.currentScene.createNode("Script");
Script61.DEF = "TriggerIntegerScript";
Script61.directOutput = True;
let field62 = browser.currentScene.createNode("field");
field62.name = "set_boolean";
field62.accessType = "inputOnly";
field62.type = "SFBool";
Script61.field = new MFNode();

Script61.field[0] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "set_integerKey";
field63.accessType = "inputOnly";
field63.type = "SFInt32";
Script61.field[1] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "integerKeyHolderNode";
field64.accessType = "initializeOnly";
field64.type = "SFNode";
let Switch65 = browser.currentScene.createNode("Switch");
Switch65.USE = "IntegerKeyHolder";
field64.children = new MFNode();

field64.children[0] = Switch65;

Script61.field[2] = field64;

let field66 = browser.currentScene.createNode("field");
field66.name = "integerKey_changed";
field66.accessType = "outputOnly";
field66.type = "SFInt32";
Script61.field[3] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "triggerValue";
field67.accessType = "outputOnly";
field67.type = "SFInt32";
Script61.field[4] = field67;

let IS68 = browser.currentScene.createNode("IS");
let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "set_boolean";
connect69.protoField = "set_boolean";
IS68.connect = new MFNode();

IS68.connect[0] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "set_integerKey";
connect70.protoField = "set_integerKey";
IS68.connect[1] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "integerKey_changed";
connect71.protoField = "integerKey_changed";
IS68.connect[2] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "triggerValue";
connect72.protoField = "triggerValue";
IS68.connect[3] = connect72;

Script61.iS = IS68;


Script61.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (inputValue, timestamp)\n"+
"{\n"+
"	if (inputValue == true)\n"+
"	{\n"+
"		integerKey = integerKeyHolderNode.whichChoice;\n"+
"		triggerValue = integerKey; // send output event\n"+
"	}\n"+
"}\n"+
"function set_integerKey (inputValue, timestamp)\n"+
"{\n"+
"	integerKey = inputValue;\n"+
"	integerKeyHolderNode.whichChoice = integerKey;\n"+
"	integerKey_changed = integerKey; // send output event\n"+
"}`)
Group57.children[1] = Script61;

ProtoBody56.children = new MFNode();

ProtoBody56.children[0] = Group57;

ProtoDeclare49.protoBody = ProtoBody56;

browser.currentScene.children[4] = ProtoDeclare49;

//========================================
let ProtoDeclare73 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="TimeTrigger" appinfo="TimeTrigger converts boolean true events to time events." ><ProtoInterface><field name="set_boolean" accessType="inputOnly" appinfo="If set_boolean input is true trigger output time value." type="SFBool"></field>
<field name="triggerTime" accessType="outputOnly" appinfo="triggerTime is output time event sent when set_boolean input is true." type="SFTime"></field>
</ProtoInterface>
<ProtoBody><Script DEF="TriggerTimeScript"><field name="set_boolean" accessType="inputOnly" type="SFBool"></field>
<field name="triggerTime" accessType="outputOnly" type="SFTime"></field>
<IS><connect nodeField="set_boolean" protoField="set_boolean"></connect>
<connect nodeField="triggerTime" protoField="triggerTime"></connect>
</IS>
<![CDATA[ecmascript:

function set_boolean (value, timestamp)
{
	if (value) triggerTime = timestamp;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare73.name = "TimeTrigger";
ProtoDeclare73.appinfo = "TimeTrigger converts boolean true events to time events.";
let ProtoInterface74 = browser.currentScene.createNode("ProtoInterface");
let field75 = browser.currentScene.createNode("field");
field75.name = "set_boolean";
field75.accessType = "inputOnly";
field75.appinfo = "If set_boolean input is true trigger output time value.";
field75.type = "SFBool";
ProtoInterface74.field = new MFNode();

ProtoInterface74.field[0] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "triggerTime";
field76.accessType = "outputOnly";
field76.appinfo = "triggerTime is output time event sent when set_boolean input is true.";
field76.type = "SFTime";
ProtoInterface74.field[1] = field76;

ProtoDeclare73.protoInterface = ProtoInterface74;

let ProtoBody77 = browser.currentScene.createNode("ProtoBody");
let Script78 = browser.currentScene.createNode("Script");
Script78.DEF = "TriggerTimeScript";
let field79 = browser.currentScene.createNode("field");
field79.name = "set_boolean";
field79.accessType = "inputOnly";
field79.type = "SFBool";
Script78.field = new MFNode();

Script78.field[0] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "triggerTime";
field80.accessType = "outputOnly";
field80.type = "SFTime";
Script78.field[1] = field80;

let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "set_boolean";
connect82.protoField = "set_boolean";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "triggerTime";
connect83.protoField = "triggerTime";
IS81.connect[1] = connect83;

Script78.iS = IS81;


Script78.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_boolean (value, timestamp)\n"+
"{\n"+
"	if (value) triggerTime = timestamp;\n"+
"}`)
ProtoBody77.children = new MFNode();

ProtoBody77.children[0] = Script78;

ProtoDeclare73.protoBody = ProtoBody77;

browser.currentScene.children[5] = ProtoDeclare73;

//========================================
let Anchor84 = browser.currentScene.createNode("Anchor");
Anchor84.description = "EventUtilityExamples";
Anchor84.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor84.url = new MFString(new java.lang.String["EventUtilityExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d","EventUtilityExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.wrl"]);
let Shape85 = browser.currentScene.createNode("Shape");
let Text86 = browser.currentScene.createNode("Text");
Text86.string = new MFString(new java.lang.String["EventUtilityPrototype","defines prototypes","","Click text to see","EventUtilityExamples"]);
let FontStyle87 = browser.currentScene.createNode("FontStyle");
FontStyle87.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle87.size = 0.9;
Text86.fontStyle = FontStyle87;

Shape85.geometry = Text86;

let Appearance88 = browser.currentScene.createNode("Appearance");
let Material89 = browser.currentScene.createNode("Material");
Material89.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance88.material = Material89;

Shape85.appearance = Appearance88;

Anchor84.children = new MFNode();

Anchor84.children[0] = Shape85;

browser.currentScene.children[6] = Anchor84;

