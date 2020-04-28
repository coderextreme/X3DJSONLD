let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "IntegerSequencerPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IntegerSequencer" ><ProtoInterface><field name="set_fraction" accessType="inputOnly" appinfo="Regular interpolator-style input, range [0..1]" type="SFFloat"></field>
<field name="set_key" accessType="inputOnly" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="key" accessType="inputOutput" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="key_changed" accessType="outputOnly" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFInt32"></field>
<field name="keyValue" accessType="initializeOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFInt32"></field>
<field name="keyValue_changed" accessType="outputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFInt32"></field>
<field name="value_changed" accessType="outputOnly" appinfo="Regular interpolator-style input" type="SFInt32"></field>
<field name="previous" accessType="inputOnly" appinfo="Utility method" type="SFBool"></field>
<field name="next" accessType="inputOnly" appinfo="Utility method" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><Group><Switch whichChoice="-1"><ScalarInterpolator DEF="KeyHolder"><IS><connect nodeField="key" protoField="key"></connect>
</IS>
</ScalarInterpolator>
</Switch>
<Script DEF="SequencerScript" directOutput="true"><!--Regular interpolator-style input--><!--Regular interpolator-style output--><!--Utility methods--><!--Script-specific interfaces, not needed for node definition--><field name="set_fraction" accessType="inputOnly" appinfo="range [0..1]" type="SFFloat"></field>
<field name="set_key" accessType="inputOnly" appinfo="Array sequentially increasing [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="keyHolderNode" accessType="initializeOnly" type="SFNode"><ScalarInterpolator USE="KeyHolder"></ScalarInterpolator>
</field>
<field name="key_changed" accessType="outputOnly" appinfo="Array sequentially increasing [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFInt32"></field>
<field name="keyValue" accessType="initializeOnly" type="MFInt32"></field>
<field name="keyValue_changed" accessType="outputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFInt32"></field>
<field name="value_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="previous" accessType="inputOnly" type="SFBool"></field>
<field name="next" accessType="inputOnly" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="For development use only not for inclusion in specification implementations." type="SFBool" value="true"></field>
<field name="previousFraction" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="nextIndex" accessType="initializeOnly" type="SFInt32" value="0"></field>
<field name="isValid" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="recheckValidity" accessType="initializeOnly" type="SFBool" value="false"></field>
<IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="set_key" protoField="set_key"></connect>
<connect nodeField="key_changed" protoField="key_changed"></connect>
<connect nodeField="set_keyValue" protoField="set_keyValue"></connect>
<connect nodeField="keyValue" protoField="keyValue"></connect>
<connect nodeField="keyValue_changed" protoField="keyValue_changed"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
<connect nodeField="previous" protoField="previous"></connect>
<connect nodeField="next" protoField="next"></connect>
</IS>
<![CDATA[ecmascript:

var leftToRight;

function initialize()
{
	key      = keyHolderNode.key;
	tracePrint('Initializing a new IntegerSequencer.  key.length=' + key.length + '; keyValue.length=' + keyValue.length);
	tracePrint('key =' + key);
	tracePrint('keyValue =' + keyValue);

	validityCheck();
	setHalfKeyRange();

	// assume we start at first key, going left to right
	leftToRight = true;
	previousFraction = key[0];
	nextIndex = 1;  //validityCheck ensures minimum of 2 keys exist
}

function set_fraction(newFraction, timeStamp)
{
	if (recheckValidity) validityCheck();

	if (!isValid) return; //IntegerSequencer ignored

	//Bounds checking
	if (newFraction < key[0])
	{
		tracePrint('*** warning: fraction is less than first key.  fraction set to first key ***');
		newFraction = key[0];
	}
	else if (newFraction > key[key.length-1])
	{
		tracePrint('*** warning: fraction is greater than last key.  fraction set to last key ***');
		newFraction = key[key.length -1];
	}

	//Check animation direction
	if (newFraction < previousFraction && leftToRight == true)
	{
		if ((previousFraction - newFraction) > halfKeyRange) //looped around
		{
			nextIndex = 1;
		}
		else //just changed direction
		{
			leftToRight = false;
			nextIndex = nextIndex - 1;
            }
	}
	else if (newFraction > previousFraction && leftToRight == false)
	{
		if ((newFraction - previousFraction) < halfKeyRange) //looped around
		{
			nextIndex = key.length - 2;
		}
		else //just changed direction
		{
			leftToRight = true;
			nextIndex = nextIndex + 1;
            }
	}
	else if (newFraction == previousFraction)
	{ //no change, so no processing required
		return;
	}
	previousFraction = newFraction;

	if (leftToRight) // moving left to right
	{
		while (newFraction > key[nextIndex]) nextIndex++;

		if (newFraction == key[nextIndex])
			value_changed = keyValue[nextIndex];
		else	value_changed = keyValue[nextIndex -1];

		tracePrint('forward animation, fraction =' + newFraction);
		tracePrint('value_changed eventOut is:' + value_changed);
	}
	else // moving right to left
	{
		while (newFraction < key[nextIndex]) nextIndex--;

		if (newFraction == key[nextIndex])
			value_changed = keyValue[nextIndex];
		else	value_changed = keyValue[nextIndex + 1];

		tracePrint('backward animation, fraction =' + newFraction);
		tracePrint('value_changed eventOut is:' + value_changed);
	}
}

function set_key(newKey, timeStamp)
{
	key = newKey;
	keyHolderNode.key = newKey;
	setHalfKeyWidth();
	recheckValidity = true;
}

function set_keyValue(newKeyValue, timeStamp)
{
	keyValue = newKeyValue;
	recheckValidity = true;
}

function setHalfKeyRange()
{
	halfKeyRange = (key[key.length - 1] - key[0])/2.0;
}

function previous (value, timeStamp)
{
  if (value==true) // trigger on true events only
  {
	leftToRight = true;
	nextIndex = nextIndex - 2; // reset to previous
	if (nextIndex < 0) nextIndex = nextIndex + key.length;
	value_changed = keyValue[nextIndex];
	previousFraction = key[nextIndex];
	nextIndex++; // setup for next time, leftToRight
	if (nextIndex > key.length - 1) nextIndex = 0;
  }
}
function next (value, timeStamp)
{
  if (value==true) // trigger on true events only
  {
	leftToRight = true;
	value_changed = keyValue[nextIndex];
	previousFraction = key[nextIndex];
	nextIndex++; // setup for next time,leftToRight
	if (nextIndex > key.length - 1) nextIndex = 0;
  }
}

function validityCheck()
{
	//Check if lengths of key & keyValue arrays match
	if (key.length != keyValue.length)
	{
		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  IntegerSequencer ignored ***');
		isValid = false;
		return;
	}
	//check to ensure minimum of 2 keys have been specified
	if (key.length < 2)
	{
		alwaysPrint('*** error: must contain at least 2 keys.  IntegerSequencer ignored ***');
		isValid = false;
		return;
	}

	//Check if key array has values in an non-decreasing order
	for (i = 1; i < key.length; i++)
	{
		tracePrint('i=' + i);

		if (key[i] < key [i-1])
		{
			alwaysPrint('*** error: key array values must be listed in a non-decreasing order.  IntegerSequencer ignored ***');
			isValid = false;
			return;
		}
	}
	isValid = true
	recheckValidity = false;
	key_changed = key;
	keyValue_changed = keyValue;
	return;
}

function tracePrint(outputString)
{
	if (traceEnabled) Browser.print ('[IntegerSequencer]' + outputString);
}

function alwaysPrint(outputString)
{
	Browser.print ('[IntegerSequencer]' + outputString);
}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "IntegerSequencer";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_fraction";
field5.accessType = "inputOnly";
field5.appinfo = "Regular interpolator-style input, range [0..1]";
field5.type = "SFFloat";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "set_key";
field6.accessType = "inputOnly";
field6.appinfo = "Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.";
field6.type = "MFFloat";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "key";
field7.accessType = "inputOutput";
field7.appinfo = "Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.";
field7.type = "MFFloat";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "key_changed";
field8.accessType = "outputOnly";
field8.appinfo = "Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.";
field8.type = "MFFloat";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "set_keyValue";
field9.accessType = "inputOnly";
field9.appinfo = "Array of integer values. Must have the same number of keys as keyValues.";
field9.type = "MFInt32";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "keyValue";
field10.accessType = "initializeOnly";
field10.appinfo = "Array of integer values. Must have the same number of keys as keyValues.";
field10.type = "MFInt32";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "keyValue_changed";
field11.accessType = "outputOnly";
field11.appinfo = "Array of integer values. Must have the same number of keys as keyValues.";
field11.type = "MFInt32";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "value_changed";
field12.accessType = "outputOnly";
field12.appinfo = "Regular interpolator-style input";
field12.type = "SFInt32";
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
let Switch17 = browser.currentScene.createNode("Switch");
Switch17.whichChoice = -1;
let ScalarInterpolator18 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator18.DEF = "KeyHolder";
let IS19 = browser.currentScene.createNode("IS");
let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "key";
connect20.protoField = "key";
IS19.connect = new MFNode();

IS19.connect[0] = connect20;

ScalarInterpolator18.iS = IS19;

Switch17.children = new MFNode();

Switch17.children[0] = ScalarInterpolator18;

Group16.children = new MFNode();

Group16.children[0] = Switch17;

let Script21 = browser.currentScene.createNode("Script");
Script21.DEF = "SequencerScript";
Script21.directOutput = True;
//Regular interpolator-style input
//Regular interpolator-style output
//Utility methods
//Script-specific interfaces, not needed for node definition
let field22 = browser.currentScene.createNode("field");
field22.name = "set_fraction";
field22.accessType = "inputOnly";
field22.appinfo = "range [0..1]";
field22.type = "SFFloat";
Script21.field = new MFNode();

Script21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "set_key";
field23.accessType = "inputOnly";
field23.appinfo = "Array sequentially increasing [0..1]. Must have the same number of keys as keyValues.";
field23.type = "MFFloat";
Script21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "keyHolderNode";
field24.accessType = "initializeOnly";
field24.type = "SFNode";
let ScalarInterpolator25 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator25.USE = "KeyHolder";
field24.children = new MFNode();

field24.children[0] = ScalarInterpolator25;

Script21.field[2] = field24;

let field26 = browser.currentScene.createNode("field");
field26.name = "key_changed";
field26.accessType = "outputOnly";
field26.appinfo = "Array sequentially increasing [0..1]. Must have the same number of keys as keyValues.";
field26.type = "MFFloat";
Script21.field[3] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "set_keyValue";
field27.accessType = "inputOnly";
field27.appinfo = "Array of integer values. Must have the same number of keys as keyValues.";
field27.type = "MFInt32";
Script21.field[4] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "keyValue";
field28.accessType = "initializeOnly";
field28.type = "MFInt32";
Script21.field[5] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "keyValue_changed";
field29.accessType = "outputOnly";
field29.appinfo = "Array of integer values. Must have the same number of keys as keyValues.";
field29.type = "MFInt32";
Script21.field[6] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "value_changed";
field30.accessType = "outputOnly";
field30.type = "SFInt32";
Script21.field[7] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "previous";
field31.accessType = "inputOnly";
field31.type = "SFBool";
Script21.field[8] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "next";
field32.accessType = "inputOnly";
field32.type = "SFBool";
Script21.field[9] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "traceEnabled";
field33.accessType = "initializeOnly";
field33.appinfo = "For development use only not for inclusion in specification implementations.";
field33.type = "SFBool";
field33.value = "true";
Script21.field[10] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "previousFraction";
field34.accessType = "initializeOnly";
field34.type = "SFFloat";
field34.value = "0";
Script21.field[11] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "nextIndex";
field35.accessType = "initializeOnly";
field35.type = "SFInt32";
field35.value = "0";
Script21.field[12] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "isValid";
field36.accessType = "initializeOnly";
field36.type = "SFBool";
field36.value = "true";
Script21.field[13] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "recheckValidity";
field37.accessType = "initializeOnly";
field37.type = "SFBool";
field37.value = "false";
Script21.field[14] = field37;

let IS38 = browser.currentScene.createNode("IS");
let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_fraction";
connect39.protoField = "set_fraction";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "set_key";
connect40.protoField = "set_key";
IS38.connect[1] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "key_changed";
connect41.protoField = "key_changed";
IS38.connect[2] = connect41;

let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "set_keyValue";
connect42.protoField = "set_keyValue";
IS38.connect[3] = connect42;

let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "keyValue";
connect43.protoField = "keyValue";
IS38.connect[4] = connect43;

let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "keyValue_changed";
connect44.protoField = "keyValue_changed";
IS38.connect[5] = connect44;

let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "value_changed";
connect45.protoField = "value_changed";
IS38.connect[6] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "previous";
connect46.protoField = "previous";
IS38.connect[7] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "next";
connect47.protoField = "next";
IS38.connect[8] = connect47;

Script21.iS = IS38;


Script21.setSourceCode(`ecmascript:\n"+
"\n"+
"var leftToRight;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	key      = keyHolderNode.key;\n"+
"	tracePrint('Initializing a new IntegerSequencer.  key.length=' + key.length + '; keyValue.length=' + keyValue.length);\n"+
"	tracePrint('key =' + key);\n"+
"	tracePrint('keyValue =' + keyValue);\n"+
"\n"+
"	validityCheck();\n"+
"	setHalfKeyRange();\n"+
"\n"+
"	// assume we start at first key, going left to right\n"+
"	leftToRight = true;\n"+
"	previousFraction = key[0];\n"+
"	nextIndex = 1;  //validityCheck ensures minimum of 2 keys exist\n"+
"}\n"+
"\n"+
"function set_fraction(newFraction, timeStamp)\n"+
"{\n"+
"	if (recheckValidity) validityCheck();\n"+
"\n"+
"	if (!isValid) return; //IntegerSequencer ignored\n"+
"\n"+
"	//Bounds checking\n"+
"	if (newFraction < key[0])\n"+
"	{\n"+
"		tracePrint('*** warning: fraction is less than first key.  fraction set to first key ***');\n"+
"		newFraction = key[0];\n"+
"	}\n"+
"	else if (newFraction > key[key.length-1])\n"+
"	{\n"+
"		tracePrint('*** warning: fraction is greater than last key.  fraction set to last key ***');\n"+
"		newFraction = key[key.length -1];\n"+
"	}\n"+
"\n"+
"	//Check animation direction\n"+
"	if (newFraction < previousFraction && leftToRight == true)\n"+
"	{\n"+
"		if ((previousFraction - newFraction) > halfKeyRange) //looped around\n"+
"		{\n"+
"			nextIndex = 1;\n"+
"		}\n"+
"		else //just changed direction\n"+
"		{\n"+
"			leftToRight = false;\n"+
"			nextIndex = nextIndex - 1;\n"+
"            }\n"+
"	}\n"+
"	else if (newFraction > previousFraction && leftToRight == false)\n"+
"	{\n"+
"		if ((newFraction - previousFraction) < halfKeyRange) //looped around\n"+
"		{\n"+
"			nextIndex = key.length - 2;\n"+
"		}\n"+
"		else //just changed direction\n"+
"		{\n"+
"			leftToRight = true;\n"+
"			nextIndex = nextIndex + 1;\n"+
"            }\n"+
"	}\n"+
"	else if (newFraction == previousFraction)\n"+
"	{ //no change, so no processing required\n"+
"		return;\n"+
"	}\n"+
"	previousFraction = newFraction;\n"+
"\n"+
"	if (leftToRight) // moving left to right\n"+
"	{\n"+
"		while (newFraction > key[nextIndex]) nextIndex++;\n"+
"\n"+
"		if (newFraction == key[nextIndex])\n"+
"			value_changed = keyValue[nextIndex];\n"+
"		else	value_changed = keyValue[nextIndex -1];\n"+
"\n"+
"		tracePrint('forward animation, fraction =' + newFraction);\n"+
"		tracePrint('value_changed eventOut is:' + value_changed);\n"+
"	}\n"+
"	else // moving right to left\n"+
"	{\n"+
"		while (newFraction < key[nextIndex]) nextIndex--;\n"+
"\n"+
"		if (newFraction == key[nextIndex])\n"+
"			value_changed = keyValue[nextIndex];\n"+
"		else	value_changed = keyValue[nextIndex + 1];\n"+
"\n"+
"		tracePrint('backward animation, fraction =' + newFraction);\n"+
"		tracePrint('value_changed eventOut is:' + value_changed);\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_key(newKey, timeStamp)\n"+
"{\n"+
"	key = newKey;\n"+
"	keyHolderNode.key = newKey;\n"+
"	setHalfKeyWidth();\n"+
"	recheckValidity = true;\n"+
"}\n"+
"\n"+
"function set_keyValue(newKeyValue, timeStamp)\n"+
"{\n"+
"	keyValue = newKeyValue;\n"+
"	recheckValidity = true;\n"+
"}\n"+
"\n"+
"function setHalfKeyRange()\n"+
"{\n"+
"	halfKeyRange = (key[key.length - 1] - key[0])/2.0;\n"+
"}\n"+
"\n"+
"function previous (value, timeStamp)\n"+
"{\n"+
"  if (value==true) // trigger on true events only\n"+
"  {\n"+
"	leftToRight = true;\n"+
"	nextIndex = nextIndex - 2; // reset to previous\n"+
"	if (nextIndex < 0) nextIndex = nextIndex + key.length;\n"+
"	value_changed = keyValue[nextIndex];\n"+
"	previousFraction = key[nextIndex];\n"+
"	nextIndex++; // setup for next time, leftToRight\n"+
"	if (nextIndex > key.length - 1) nextIndex = 0;\n"+
"  }\n"+
"}\n"+
"function next (value, timeStamp)\n"+
"{\n"+
"  if (value==true) // trigger on true events only\n"+
"  {\n"+
"	leftToRight = true;\n"+
"	value_changed = keyValue[nextIndex];\n"+
"	previousFraction = key[nextIndex];\n"+
"	nextIndex++; // setup for next time,leftToRight\n"+
"	if (nextIndex > key.length - 1) nextIndex = 0;\n"+
"  }\n"+
"}\n"+
"\n"+
"function validityCheck()\n"+
"{\n"+
"	//Check if lengths of key & keyValue arrays match\n"+
"	if (key.length != keyValue.length)\n"+
"	{\n"+
"		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  IntegerSequencer ignored ***');\n"+
"		isValid = false;\n"+
"		return;\n"+
"	}\n"+
"	//check to ensure minimum of 2 keys have been specified\n"+
"	if (key.length < 2)\n"+
"	{\n"+
"		alwaysPrint('*** error: must contain at least 2 keys.  IntegerSequencer ignored ***');\n"+
"		isValid = false;\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	//Check if key array has values in an non-decreasing order\n"+
"	for (i = 1; i < key.length; i++)\n"+
"	{\n"+
"		tracePrint('i=' + i);\n"+
"\n"+
"		if (key[i] < key [i-1])\n"+
"		{\n"+
"			alwaysPrint('*** error: key array values must be listed in a non-decreasing order.  IntegerSequencer ignored ***');\n"+
"			isValid = false;\n"+
"			return;\n"+
"		}\n"+
"	}\n"+
"	isValid = true\n"+
"	recheckValidity = false;\n"+
"	key_changed = key;\n"+
"	keyValue_changed = keyValue;\n"+
"	return;\n"+
"}\n"+
"\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[IntegerSequencer]' + outputString);\n"+
"}\n"+
"\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[IntegerSequencer]' + outputString);\n"+
"}`)
Group16.children[1] = Script21;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Group16;

ProtoDeclare3.protoBody = ProtoBody15;

browser.currentScene.children[1] = ProtoDeclare3;

//===============Example==============
let Anchor48 = browser.currentScene.createNode("Anchor");
Anchor48.description = "IntegerSequencerExample";
Anchor48.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor48.url = new MFString(new java.lang.String["IntegerSequencerExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.x3d","IntegerSequencerExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.wrl"]);
let Shape49 = browser.currentScene.createNode("Shape");
let Text50 = browser.currentScene.createNode("Text");
Text50.string = new MFString(new java.lang.String["IntegerSequencerPrototype","defines a prototype","","Click text to see example scene","IntegerSequencerExample"]);
let FontStyle51 = browser.currentScene.createNode("FontStyle");
FontStyle51.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle51.size = 0.9;
Text50.fontStyle = FontStyle51;

Shape49.geometry = Text50;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance52.material = Material53;

Shape49.appearance = Appearance52;

Anchor48.children = new MFNode();

Anchor48.children[0] = Shape49;

browser.currentScene.children[2] = Anchor48;

