let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "BooleanSequencerPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="BooleanSequencer" ><ProtoInterface><field name="set_fraction" accessType="inputOnly" appinfo="Regular interpolator-style input, typical range [0..1]" type="SFFloat"></field>
<field name="set_key" accessType="inputOnly" type="MFFloat"></field>
<field name="key" accessType="inputOutput" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"><!--NULL initialization value--></field>
<field name="key_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" type="MFBool"></field>
<field name="keyValue" accessType="inputOutput" appinfo="Array of true|false values. Must have the same number of keys as keyValues." type="MFBool"><!--NULL initialization value--></field>
<field name="keyValue_changed" accessType="outputOnly" appinfo="Regular interpolator-style input" type="MFBool"></field>
<field name="value_changed" accessType="outputOnly" appinfo="Regular interpolator-style input" type="SFBool"></field>
<field name="previous" accessType="inputOnly" appinfo="Utility method" type="SFBool"></field>
<field name="next" accessType="inputOnly" appinfo="Utility method" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group><ScalarInterpolator DEF="KeyHolder"><IS><connect nodeField="key" protoField="key"></connect>
</IS>
</ScalarInterpolator>
<Anchor DEF="KeyValueHolder"><IS><connect nodeField="description" protoField="keyValue"></connect>
</IS>
</Anchor>
<Script DEF="SequencerScript" directOutput="true"><!--Regular interpolator-style input--><!--Regular interpolator-style output--><!--Utility methods--><!--Script-specific interfaces, not needed for node definition--><field name="set_fraction" accessType="inputOnly" appinfo="typical range [0..1]" type="SFFloat"></field>
<field name="set_key" accessType="inputOnly" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="keyHolderNode" accessType="initializeOnly" type="SFNode"><ScalarInterpolator USE="KeyHolder"></ScalarInterpolator>
</field>
<field name="key_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" appinfo="Array of true or false values. Must have the same number of keys as keyValues." type="MFBool"></field>
<field name="keyValueHolderNode" accessType="initializeOnly" type="SFNode"><Anchor USE="KeyValueHolder"></Anchor>
</field>
<field name="keyValue_changed" accessType="outputOnly" type="MFBool"></field>
<field name="value_changed" accessType="outputOnly" type="SFBool"></field>
<field name="previous" accessType="inputOnly" type="SFBool"></field>
<field name="next" accessType="inputOnly" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="keyValueArray" accessType="initializeOnly" type="MFInt32"><!--NULL initialization value--></field>
<field name="previousFraction" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="nextIndex" accessType="initializeOnly" type="SFInt32" value="0"></field>
<field name="valid" accessType="outputOnly" type="SFBool" value="true"></field>
<field name="recheckValidity" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="forward" accessType="initializeOnly" appinfo="leftToRight" type="SFBool" value="true"></field>
<field name="key" accessType="inputOnly" type="MFFloat"><!--NULL initialization value--></field>
<field name="keyValue" accessType="inputOutput" type="MFInt32"><!--NULL initialization value--></field>
<IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="set_key" protoField="set_key"></connect>
<connect nodeField="key_changed" protoField="key_changed"></connect>
<connect nodeField="set_keyValue" protoField="set_keyValue"></connect>
<connect nodeField="keyValue_changed" protoField="keyValue_changed"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
<connect nodeField="previous" protoField="previous"></connect>
<connect nodeField="next" protoField="next"></connect>
</IS>
<![CDATA[ecmascript:

var key, keyValue;

function initialize()
{
	key      = keyHolderNode.key;
	keyValue = keyValueHolderNode.description;
	tracePrint('key =' + key);
	tracePrint('keyValue =' + keyValue);
	keyValueToKeyValueArray ();
	tracePrint('keyValueArray =' + keyValueArray);

	forward = true;
	tracePrint('Initializing a new BooleanSequencer.  key.length=' + key.length + '; keyValueArray.length=' + keyValueArray.length);
	validityCheck();
}

function keyValueToKeyValueArray ()
{
	tracePrint('keyValueToKeyValueArray starting');
	index = 0;
	complete = false;
	nextString = keyValue.toLowerCase();
	tracePrint('initial nextString=' + nextString);
	tokenCount=0;
	while ((complete != true) && (nextString.length > 0))
	{
		tracePrint('nextString=' + nextString);
		while ((nextString.substring(0,1) == ' ') || (nextString.substring(0,1) == ','))
		       nextString = nextString.slice(1);
		tracePrint('deblanked nextString=' + nextString);
		if (nextString.length == 0)
		{
			tracePrint ('nextString.length == 0');
			complete = true;
		}
		if (nextString.length < 4)
		{
			alwaysPrint ('*** illegal keyValue input=' + nextString);
			valid = false;
			complete = true;
		}
		else if (nextString.substring(0,4) =='true')
		{
			keyValueArray[keyValueArray.length] = 1; // append
			newString = nextString.slice(4);
			nextString = newString;
			tokenCount++;
			tracePrint('found true, nextString=' + nextString + ', tokenCount=' + tokenCount);
		}
		else if (nextString.length < 5)
		{
			alwaysPrint ('*** illegal keyValue input=' + nextString);
			valid = false;
			complete = true;
		}
		else if (nextString.substring(0,5) =='false')
		{
			keyValueArray[keyValueArray.length] = 0; // append
			newString = nextString.slice(5);
			nextString = newString;
			tokenCount++;
			tracePrint('found false, nextString=' + nextString + ', tokenCount=' + tokenCount);
		}
		tracePrint('  intermediate keyValueArray=' + keyValueArray);
	}
	tracePrint('keyValueToKeyValueArray complete');
}

function set_fraction(value, timeStamp)
{
	if (recheckValidity) validityCheck();

	if (!valid) return; //BooleanSequencer ignored

	tracePrint('fraction =' + value);
	//Bounds checking
	if (value < 0)
	{
		alwaysPrint('*** warning: fraction is less than 0.  fraction reset to 0 ***');
		value = 0;
	}
	else if (value > 1)
	{
		alwaysPrint('*** warning: fraction is greater than 1.  fraction reset to 1 ***');
		value = 1;
	}

	//Check animation direction
	if (value < previousFraction && forward == true)
	{
		forward = false;
		nextIndex = nextIndex - 1;
		tracePrint('Animate backward');
	}
	else if (value > previousFraction && forward == false)
	{
		forward = true;
		//nextIndex = 0;
		tracePrint('Animate forward');
	}

	previousFraction = value;

	if (forward == true)
	{
		for (i = nextIndex; i < key.length; i++)
		{
			if (value < key[i])
				return;

			nextIndex = i + 1;
			tracePrint('nextIndex =' + nextIndex);
			if (nextIndex < key.length)
			{
				if (value <= key[nextIndex])
				{
					//Fire event
					if (keyValueArray[nextIndex-1] == 0)
						value_changed = false;
					else
						value_changed = true;
					tracePrint('value_changed eventOut is:' + value_changed);
				}
			}
			else if (nextIndex == key.length)
			{
				//Fire event
				if (keyValueArray[nextIndex-1] == 0)
					value_changed = false;
				else
					value_changed = true;
				tracePrint('value_changed eventOut is:' + value_changed);
			}
			else //nextIndex > key.length
			{
				//nextIndex = 0;
				break;
			}
		}
	}
	else //backward
	{
		for (i = nextIndex; i > 0; i--)
		{
			if (value >= key[i])
				return;

			nextIndex = i - 1;
			tracePrint('nextIndex =' + nextIndex);
			if (nextIndex >= 0)
			{
				if (value >= key[nextIndex])
				{
					//Fire event
					if (keyValueArray[nextIndex] == 0)
						value_changed = false;
					else
						value_changed = true;
					tracePrint('value_changed eventOut is:' + value_changed);
				}
			}
			else //nextIndex < 0
			{
				//nextIndex = key.length;
				break;
			}
		}
	}
}

function set_key(value, timeStamp)
{
	key = value;
	keyHolderNode.key  = key;
	recheckValidity = true;
}

function set_keyValue(value, timeStamp)
{
	keyValue = value;
	keyValueHolderNode.description = keyValue;
	recheckValidity = true;
	keyValueToKeyValueArray ();
	keyValue_changed = keyValue;
}

function validityCheck()
{
	//Check if key & keyValueArray array length matches
	if (key.length != keyValueArray.length)
	{
		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  BooleanSequencer ignored ***');
		valid = false;
		return;
	}

	//Check if key array has values in the range of [0..1] in an increasing order
	if (key[0] < 0 || key[0] > 1)
	{
		alwaysPrint('*** error: key[0] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');
		valid = false;
		return;
	}
	for (i = 1; i < key.length; i++)
	{
		if (key[i] < 0 || key[i] > 1)
		{
			alwaysPrint('*** error: key[' + i + '] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');
			valid = false;
			return;
		}

		if (key[i] <= key [i-1])
		{
			alwaysPrint('*** error: values for key[] array must be listed in an increasing order.  BooleanSequencer ignored ***');
			valid = false;
			return;
		}
	}
	recheckValidity = false;
	key_changed = key;
	return;
}
function previous (SFBoolValue, timestamp)
{
	nextIndex = nextIndex - 1;
	if (nextIndex == 0) nextIndex = key.length - 1;
}
function next (SFBoolValue, timestamp)
{
	nextIndex = nextIndex + 1;
	if (nextIndex == key.length) nextIndex = 0;
}

function tracePrint(outputString)
{
	if (traceEnabled) Browser.print ('[ BooleanSequencer ]' + outputString);
}

function alwaysPrint(outputString)
{
	Browser.print ('[ BooleanSequencer ]' + outputString);
}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "BooleanSequencer";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_fraction";
field5.accessType = "inputOnly";
field5.appinfo = "Regular interpolator-style input, typical range [0..1]";
field5.type = "SFFloat";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "set_key";
field6.accessType = "inputOnly";
field6.type = "MFFloat";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "key";
field7.accessType = "inputOutput";
field7.appinfo = "Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.";
field7.type = "MFFloat";
//NULL initialization value
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "key_changed";
field8.accessType = "outputOnly";
field8.type = "MFFloat";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "set_keyValue";
field9.accessType = "inputOnly";
field9.type = "MFBool";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "keyValue";
field10.accessType = "inputOutput";
field10.appinfo = "Array of true|false values. Must have the same number of keys as keyValues.";
field10.type = "MFBool";
//NULL initialization value
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "keyValue_changed";
field11.accessType = "outputOnly";
field11.appinfo = "Regular interpolator-style input";
field11.type = "MFBool";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "value_changed";
field12.accessType = "outputOnly";
field12.appinfo = "Regular interpolator-style input";
field12.type = "SFBool";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "previous";
field13.accessType = "inputOnly";
field13.appinfo = "Utility method";
field13.type = "SFBool";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "next";
field14.accessType = "inputOnly";
field14.appinfo = "Utility method";
field14.type = "SFBool";
ProtoInterface4.field[9] = field14;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Group16 = browser.currentScene.createNode("Group");
let ScalarInterpolator17 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator17.DEF = "KeyHolder";
let IS18 = browser.currentScene.createNode("IS");
let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "key";
connect19.protoField = "key";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

ScalarInterpolator17.iS = IS18;

Group16.children = new MFNode();

Group16.children[0] = ScalarInterpolator17;

let Anchor20 = browser.currentScene.createNode("Anchor");
Anchor20.DEF = "KeyValueHolder";
let IS21 = browser.currentScene.createNode("IS");
let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "description";
connect22.protoField = "keyValue";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

Anchor20.iS = IS21;

Group16.children[1] = Anchor20;

let Script23 = browser.currentScene.createNode("Script");
Script23.DEF = "SequencerScript";
Script23.directOutput = True;
//Regular interpolator-style input
//Regular interpolator-style output
//Utility methods
//Script-specific interfaces, not needed for node definition
let field24 = browser.currentScene.createNode("field");
field24.name = "set_fraction";
field24.accessType = "inputOnly";
field24.appinfo = "typical range [0..1]";
field24.type = "SFFloat";
Script23.field = new MFNode();

Script23.field[0] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "set_key";
field25.accessType = "inputOnly";
field25.appinfo = "Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.";
field25.type = "MFFloat";
Script23.field[1] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "keyHolderNode";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
let ScalarInterpolator27 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator27.USE = "KeyHolder";
field26.children = new MFNode();

field26.children[0] = ScalarInterpolator27;

Script23.field[2] = field26;

let field28 = browser.currentScene.createNode("field");
field28.name = "key_changed";
field28.accessType = "outputOnly";
field28.type = "MFFloat";
Script23.field[3] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "set_keyValue";
field29.accessType = "inputOnly";
field29.appinfo = "Array of true or false values. Must have the same number of keys as keyValues.";
field29.type = "MFBool";
Script23.field[4] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "keyValueHolderNode";
field30.accessType = "initializeOnly";
field30.type = "SFNode";
let Anchor31 = browser.currentScene.createNode("Anchor");
Anchor31.USE = "KeyValueHolder";
field30.children = new MFNode();

field30.children[0] = Anchor31;

Script23.field[5] = field30;

let field32 = browser.currentScene.createNode("field");
field32.name = "keyValue_changed";
field32.accessType = "outputOnly";
field32.type = "MFBool";
Script23.field[6] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "value_changed";
field33.accessType = "outputOnly";
field33.type = "SFBool";
Script23.field[7] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "previous";
field34.accessType = "inputOnly";
field34.type = "SFBool";
Script23.field[8] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "next";
field35.accessType = "inputOnly";
field35.type = "SFBool";
Script23.field[9] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "traceEnabled";
field36.accessType = "initializeOnly";
field36.type = "SFBool";
field36.value = "false";
Script23.field[10] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "keyValueArray";
field37.accessType = "initializeOnly";
field37.type = "MFInt32";
//NULL initialization value
Script23.field[11] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "previousFraction";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "0";
Script23.field[12] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "nextIndex";
field39.accessType = "initializeOnly";
field39.type = "SFInt32";
field39.value = "0";
Script23.field[13] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "valid";
field40.accessType = "outputOnly";
field40.type = "SFBool";
field40.value = "true";
Script23.field[14] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "recheckValidity";
field41.accessType = "initializeOnly";
field41.type = "SFBool";
field41.value = "false";
Script23.field[15] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "forward";
field42.accessType = "initializeOnly";
field42.appinfo = "leftToRight";
field42.type = "SFBool";
field42.value = "true";
Script23.field[16] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "key";
field43.accessType = "inputOnly";
field43.type = "MFFloat";
//NULL initialization value
Script23.field[17] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "keyValue";
field44.accessType = "inputOutput";
field44.type = "MFInt32";
//NULL initialization value
Script23.field[18] = field44;

let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "set_fraction";
connect46.protoField = "set_fraction";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "set_key";
connect47.protoField = "set_key";
IS45.connect[1] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "key_changed";
connect48.protoField = "key_changed";
IS45.connect[2] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "set_keyValue";
connect49.protoField = "set_keyValue";
IS45.connect[3] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "keyValue_changed";
connect50.protoField = "keyValue_changed";
IS45.connect[4] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "value_changed";
connect51.protoField = "value_changed";
IS45.connect[5] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "previous";
connect52.protoField = "previous";
IS45.connect[6] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "next";
connect53.protoField = "next";
IS45.connect[7] = connect53;

Script23.iS = IS45;


Script23.setSourceCode(`ecmascript:\n"+
"\n"+
"var key, keyValue;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	key      = keyHolderNode.key;\n"+
"	keyValue = keyValueHolderNode.description;\n"+
"	tracePrint('key =' + key);\n"+
"	tracePrint('keyValue =' + keyValue);\n"+
"	keyValueToKeyValueArray ();\n"+
"	tracePrint('keyValueArray =' + keyValueArray);\n"+
"\n"+
"	forward = true;\n"+
"	tracePrint('Initializing a new BooleanSequencer.  key.length=' + key.length + '; keyValueArray.length=' + keyValueArray.length);\n"+
"	validityCheck();\n"+
"}\n"+
"\n"+
"function keyValueToKeyValueArray ()\n"+
"{\n"+
"	tracePrint('keyValueToKeyValueArray starting');\n"+
"	index = 0;\n"+
"	complete = false;\n"+
"	nextString = keyValue.toLowerCase();\n"+
"	tracePrint('initial nextString=' + nextString);\n"+
"	tokenCount=0;\n"+
"	while ((complete != true) && (nextString.length > 0))\n"+
"	{\n"+
"		tracePrint('nextString=' + nextString);\n"+
"		while ((nextString.substring(0,1) == ' ') || (nextString.substring(0,1) == ','))\n"+
"		       nextString = nextString.slice(1);\n"+
"		tracePrint('deblanked nextString=' + nextString);\n"+
"		if (nextString.length == 0)\n"+
"		{\n"+
"			tracePrint ('nextString.length == 0');\n"+
"			complete = true;\n"+
"		}\n"+
"		if (nextString.length < 4)\n"+
"		{\n"+
"			alwaysPrint ('*** illegal keyValue input=' + nextString);\n"+
"			valid = false;\n"+
"			complete = true;\n"+
"		}\n"+
"		else if (nextString.substring(0,4) =='true')\n"+
"		{\n"+
"			keyValueArray[keyValueArray.length] = 1; // append\n"+
"			newString = nextString.slice(4);\n"+
"			nextString = newString;\n"+
"			tokenCount++;\n"+
"			tracePrint('found true, nextString=' + nextString + ', tokenCount=' + tokenCount);\n"+
"		}\n"+
"		else if (nextString.length < 5)\n"+
"		{\n"+
"			alwaysPrint ('*** illegal keyValue input=' + nextString);\n"+
"			valid = false;\n"+
"			complete = true;\n"+
"		}\n"+
"		else if (nextString.substring(0,5) =='false')\n"+
"		{\n"+
"			keyValueArray[keyValueArray.length] = 0; // append\n"+
"			newString = nextString.slice(5);\n"+
"			nextString = newString;\n"+
"			tokenCount++;\n"+
"			tracePrint('found false, nextString=' + nextString + ', tokenCount=' + tokenCount);\n"+
"		}\n"+
"		tracePrint('  intermediate keyValueArray=' + keyValueArray);\n"+
"	}\n"+
"	tracePrint('keyValueToKeyValueArray complete');\n"+
"}\n"+
"\n"+
"function set_fraction(value, timeStamp)\n"+
"{\n"+
"	if (recheckValidity) validityCheck();\n"+
"\n"+
"	if (!valid) return; //BooleanSequencer ignored\n"+
"\n"+
"	tracePrint('fraction =' + value);\n"+
"	//Bounds checking\n"+
"	if (value < 0)\n"+
"	{\n"+
"		alwaysPrint('*** warning: fraction is less than 0.  fraction reset to 0 ***');\n"+
"		value = 0;\n"+
"	}\n"+
"	else if (value > 1)\n"+
"	{\n"+
"		alwaysPrint('*** warning: fraction is greater than 1.  fraction reset to 1 ***');\n"+
"		value = 1;\n"+
"	}\n"+
"\n"+
"	//Check animation direction\n"+
"	if (value < previousFraction && forward == true)\n"+
"	{\n"+
"		forward = false;\n"+
"		nextIndex = nextIndex - 1;\n"+
"		tracePrint('Animate backward');\n"+
"	}\n"+
"	else if (value > previousFraction && forward == false)\n"+
"	{\n"+
"		forward = true;\n"+
"		//nextIndex = 0;\n"+
"		tracePrint('Animate forward');\n"+
"	}\n"+
"\n"+
"	previousFraction = value;\n"+
"\n"+
"	if (forward == true)\n"+
"	{\n"+
"		for (i = nextIndex; i < key.length; i++)\n"+
"		{\n"+
"			if (value < key[i])\n"+
"				return;\n"+
"\n"+
"			nextIndex = i + 1;\n"+
"			tracePrint('nextIndex =' + nextIndex);\n"+
"			if (nextIndex < key.length)\n"+
"			{\n"+
"				if (value <= key[nextIndex])\n"+
"				{\n"+
"					//Fire event\n"+
"					if (keyValueArray[nextIndex-1] == 0)\n"+
"						value_changed = false;\n"+
"					else\n"+
"						value_changed = true;\n"+
"					tracePrint('value_changed eventOut is:' + value_changed);\n"+
"				}\n"+
"			}\n"+
"			else if (nextIndex == key.length)\n"+
"			{\n"+
"				//Fire event\n"+
"				if (keyValueArray[nextIndex-1] == 0)\n"+
"					value_changed = false;\n"+
"				else\n"+
"					value_changed = true;\n"+
"				tracePrint('value_changed eventOut is:' + value_changed);\n"+
"			}\n"+
"			else //nextIndex > key.length\n"+
"			{\n"+
"				//nextIndex = 0;\n"+
"				break;\n"+
"			}\n"+
"		}\n"+
"	}\n"+
"	else //backward\n"+
"	{\n"+
"		for (i = nextIndex; i > 0; i--)\n"+
"		{\n"+
"			if (value >= key[i])\n"+
"				return;\n"+
"\n"+
"			nextIndex = i - 1;\n"+
"			tracePrint('nextIndex =' + nextIndex);\n"+
"			if (nextIndex >= 0)\n"+
"			{\n"+
"				if (value >= key[nextIndex])\n"+
"				{\n"+
"					//Fire event\n"+
"					if (keyValueArray[nextIndex] == 0)\n"+
"						value_changed = false;\n"+
"					else\n"+
"						value_changed = true;\n"+
"					tracePrint('value_changed eventOut is:' + value_changed);\n"+
"				}\n"+
"			}\n"+
"			else //nextIndex < 0\n"+
"			{\n"+
"				//nextIndex = key.length;\n"+
"				break;\n"+
"			}\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_key(value, timeStamp)\n"+
"{\n"+
"	key = value;\n"+
"	keyHolderNode.key  = key;\n"+
"	recheckValidity = true;\n"+
"}\n"+
"\n"+
"function set_keyValue(value, timeStamp)\n"+
"{\n"+
"	keyValue = value;\n"+
"	keyValueHolderNode.description = keyValue;\n"+
"	recheckValidity = true;\n"+
"	keyValueToKeyValueArray ();\n"+
"	keyValue_changed = keyValue;\n"+
"}\n"+
"\n"+
"function validityCheck()\n"+
"{\n"+
"	//Check if key & keyValueArray array length matches\n"+
"	if (key.length != keyValueArray.length)\n"+
"	{\n"+
"		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  BooleanSequencer ignored ***');\n"+
"		valid = false;\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	//Check if key array has values in the range of [0..1] in an increasing order\n"+
"	if (key[0] < 0 || key[0] > 1)\n"+
"	{\n"+
"		alwaysPrint('*** error: key[0] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');\n"+
"		valid = false;\n"+
"		return;\n"+
"	}\n"+
"	for (i = 1; i < key.length; i++)\n"+
"	{\n"+
"		if (key[i] < 0 || key[i] > 1)\n"+
"		{\n"+
"			alwaysPrint('*** error: key[' + i + '] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');\n"+
"			valid = false;\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if (key[i] <= key [i-1])\n"+
"		{\n"+
"			alwaysPrint('*** error: values for key[] array must be listed in an increasing order.  BooleanSequencer ignored ***');\n"+
"			valid = false;\n"+
"			return;\n"+
"		}\n"+
"	}\n"+
"	recheckValidity = false;\n"+
"	key_changed = key;\n"+
"	return;\n"+
"}\n"+
"function previous (SFBoolValue, timestamp)\n"+
"{\n"+
"	nextIndex = nextIndex - 1;\n"+
"	if (nextIndex == 0) nextIndex = key.length - 1;\n"+
"}\n"+
"function next (SFBoolValue, timestamp)\n"+
"{\n"+
"	nextIndex = nextIndex + 1;\n"+
"	if (nextIndex == key.length) nextIndex = 0;\n"+
"}\n"+
"\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[ BooleanSequencer ]' + outputString);\n"+
"}\n"+
"\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[ BooleanSequencer ]' + outputString);\n"+
"}`)
Group16.children[2] = Script23;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Group16;

ProtoDeclare3.protoBody = ProtoBody15;

browser.currentScene.children[1] = ProtoDeclare3;

//===============Example==============
let Anchor54 = browser.currentScene.createNode("Anchor");
Anchor54.description = "BooleanSequencerExample";
Anchor54.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor54.url = new MFString(new java.lang.String["BooleanSequencerExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d","BooleanSequencerExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.wrl"]);
let Shape55 = browser.currentScene.createNode("Shape");
let Text56 = browser.currentScene.createNode("Text");
Text56.string = new MFString(new java.lang.String["BooleanSequencerPrototype","defines a prototype","","Click on this text to see","BooleanSequencerExample"," scene"]);
let FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

let Appearance58 = browser.currentScene.createNode("Appearance");
let Material59 = browser.currentScene.createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance58.material = Material59;

Shape55.appearance = Appearance58;

Anchor54.children = new MFNode();

Anchor54.children[0] = Shape55;

browser.currentScene.children[2] = Anchor54;

