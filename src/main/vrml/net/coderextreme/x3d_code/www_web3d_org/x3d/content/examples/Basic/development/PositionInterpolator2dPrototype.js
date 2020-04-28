let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PositionInterpolator2dPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="PositionInterpolator2D" appinfo="Provide interpolation capability for Vector2Float/SFVec2f values" documentation="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8" ><ProtoInterface><field name="set_fraction" accessType="inputOnly" appinfo="The set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event." type="SFFloat"><!--Regular interpolator-style input--></field>
<field name="set_key" accessType="inputOnly" type="MFFloat"></field>
<field name="key" accessType="inputOutput" appinfo="keyValue holds the array of Vector2FloatArrays that match each animation key." type="MFFloat"><!--initial value is [] null array--></field>
<field name="key_changed" accessType="outputOnly" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFVec2f"></field>
<field name="keyValue" accessType="inputOutput" appinfo="keyValue holds the array of Vector2Float values that match each animation key." type="MFVec2f"><!--initial value is [] null array--></field>
<field name="keyValue_changed" accessType="outputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFVec2f"></field>
<field name="value_changed" accessType="outputOnly" appinfo="The interpolator function averages between respective keyValue Vector2Floats resulting in a Vector2Float value_changed eventOut with the same timestamp as the set_fraction event." type="SFVec2f"><!--Regular interpolator-style output--></field>
</ProtoInterface>
<ProtoBody><Group><Switch whichChoice="-1"><ScalarInterpolator DEF="KeyHolder"><IS><connect nodeField="key" protoField="key"></connect>
</IS>
</ScalarInterpolator>
<Shape><IndexedFaceSet containerField="geometry"><TextureCoordinate containerField="texCoord" DEF="KeyValueHolder"><IS><connect nodeField="point" protoField="keyValue"></connect>
</IS>
</TextureCoordinate>
</IndexedFaceSet>
<Appearance DEF="SilenceWarnings"></Appearance>
</Shape>
</Switch>
<Script DEF="InterpolationScript" directOutput="true"><!--Regular interpolator-style input--><!--Regular interpolator-style output--><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="fraction" accessType="initializeOnly" appinfo="local variable" type="SFFloat" value="0"></field>
<field name="set_key" accessType="inputOnly" type="MFFloat"></field>
<field name="keyHolderNode" accessType="initializeOnly" type="SFNode"><ScalarInterpolator USE="KeyHolder"></ScalarInterpolator>
</field>
<field name="key_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" type="MFVec2f"></field>
<field name="keyValueHolderNode" accessType="initializeOnly" type="SFNode"><TextureCoordinate USE="KeyValueHolder"></TextureCoordinate>
</field>
<field name="keyValue_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="value_changed" accessType="outputOnly" type="SFVec2f"></field>
<IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="set_key" protoField="set_key"></connect>
<connect nodeField="key_changed" protoField="key_changed"></connect>
<connect nodeField="set_keyValue" protoField="set_keyValue"></connect>
<connect nodeField="keyValue_changed" protoField="keyValue_changed"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
</IS>
<![CDATA[ecmascript:

// internal global persistent variables
var previousFraction;
var previousFractionIndex;
var blockSize;
var outputArray;

var traceEnabled = false;

function tracePrint (outputString)
{
	if (traceEnabled) Browser.print ('[PositionInterpolator2d]' + outputString);
}
function alwaysPrint (outputString)
{
	Browser.print ('[PositionInterpolator2d]' + outputString);
}
function initialize ()
{
	key      = keyHolderNode.key;
	keyValue = keyValueHolderNode.point;
	previousFractionIndex = -1;
	previousFraction = 0;
	// check key array ranges [0..1] and is monotonically increasing
	// check that size of keyValue array is integer multiple of size of key array
	tracePrint ('key            =' + key);
	tracePrint ('key.length=' + key.length);
	tracePrint ('keyValue=  ' + keyValue);
	tracePrint ('keyValue.length=' + keyValue.length);
	blockSize =  keyValue.length/key.length;
	tracePrint ('blockSize=' + blockSize);
	if (blockSize != 1)
	{
	  alwaysPrint ('*** warning:  check sizes of key and keyValue, should be identical!');
	}
	if (key[0] != 0)
	{
	  alwaysPrint ('*** warning:  key[0] != 0');
	}
	if (key[key.length-1] != 1)
	{
	  alwaysPrint ('*** warning:  key[' + (key.length - 1) + '] != 1, reset from' + key[key.length-1] + ' to 1');
	  key[key.length-1] = 1;
	}
	for (index = 0; index < key.length; index++)
	{
		if ((key[index] < 0) || (key[index] > 1))
		{
		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');
		}
	}
}

function set_fraction (inputFloat, timestamp) {
	fraction = inputFloat;
	outputResult = new SFVec2f ();
	tracePrint ('previousFractionIndex=' + previousFractionIndex
		 + ', fraction=' + fraction + ', previousFraction=' + previousFraction);

	if (fraction < 0)
	{
		tracePrint ('*** illegal fraction' + fraction + ' set to 0');
		fraction = 0;
		previousFractionIndex = 0; // first
	}
	else if (fraction > 1)
	{
		alwaysPrint ('*** illegal fraction' + fraction + ' set to 1');
		fraction = 1;
		previousFractionIndex = key.length - 1; // last
	}
	else if (previousFractionIndex == -1)
	{
		previousFractionIndex = 0; // first
		tracePrint ('previousFractionIndex initialized for first event');
	}
	else if ((fraction >= previousFraction) && (fraction >= key[previousFractionIndex+1]))
	{
		previousFractionIndex++;
	}
	else if (fraction < previousFraction) // regress, or loop repeat without reaching one
	{
		previousFractionIndex = 0;
		while ((fraction >= key[previousFractionIndex+1]) && (previousFractionIndex < blockSize))
		{
			previousFractionIndex++;
		}
		tracePrint ('reset/reincrement previousFractionIndex to' + previousFractionIndex);
	}

	if (fraction == 1) // use final block
	{
		tracePrint ('(fraction == 1)');
		// update outputResult with final keyValue
		outputResult = keyValue[keyValue.length];

		previousFractionIndex = -1; // setup for restart
		tracePrint ('finished final fraction==1 block');
	}
	// when fraction matches index, calculate value_changed from corresponding keyValue array
	else if (fraction == key[previousFractionIndex])
	{
		tracePrint ('(fraction == key[previousFractionIndex])');
		// update outputResult with corresponding keyValue
		outputResult = keyValue[previousFractionIndex];
	}
	else // calculate value_changed by interpolating between adjacent keyValue arrays
	{
		partialFraction = fraction                     - key[previousFractionIndex];
		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];
		percentFraction = partialFraction / deltaFraction;
	//	tracePrint ('deltaFraction   =' + deltaFraction);
	//	tracePrint ('partialFraction =' + partialFraction);
		tracePrint ('percentFraction =' + percentFraction);
		// no arithmetic operators provided for SFVec2f, treat element by element
		nextKeyValue  = keyValue[previousFractionIndex + 1];
		priorKeyValue = keyValue[previousFractionIndex];
		tracePrint (' nextKeyValue =' + nextKeyValue);
		tracePrint ('priorKeyValue =' + priorKeyValue);
		deltaKeyValue = new SFVec2f (	nextKeyValue[0] - priorKeyValue[0],
						nextKeyValue[1] - priorKeyValue[1]);
		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);
		// update outputResult
		outputResult[0] = keyValue[previousFractionIndex][0]
			        + percentFraction * deltaKeyValue[0];
		outputResult[1] = keyValue[previousFractionIndex][1]
			        + percentFraction * deltaKeyValue[1];
	}
	value_changed = outputResult;
	previousFraction = fraction;
	tracePrint ('value_changed=' + value_changed);
}

function set_key (inputArray, timestamp) {
	key = inputArray;       // update key Vector2FloatArray
	keyHolderNode.key = key; // update holder
	initialize (timestamp); // reverify key, keyValue sizes
}

function set_keyValue (inputArray, timestamp) {
	keyValue = inputArray;  // update keyValue Vector2FloatArray
	keyValueHolderNode.point = keyValue; // update holder
	initialize (timestamp); // reverify key, keyValue sizes
}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "PositionInterpolator2D";
ProtoDeclare3.appinfo = "Provide interpolation capability for Vector2Float/SFVec2f values";
ProtoDeclare3.documentation = "https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_fraction";
field5.accessType = "inputOnly";
field5.appinfo = "The set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.";
field5.type = "SFFloat";
//Regular interpolator-style input
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
field7.appinfo = "keyValue holds the array of Vector2FloatArrays that match each animation key.";
field7.type = "MFFloat";
//initial value is [] null array
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
field9.type = "MFVec2f";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "keyValue";
field10.accessType = "inputOutput";
field10.appinfo = "keyValue holds the array of Vector2Float values that match each animation key.";
field10.type = "MFVec2f";
//initial value is [] null array
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "keyValue_changed";
field11.accessType = "outputOnly";
field11.appinfo = "Array of integer values. Must have the same number of keys as keyValues.";
field11.type = "MFVec2f";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "value_changed";
field12.accessType = "outputOnly";
field12.appinfo = "The interpolator function averages between respective keyValue Vector2Floats resulting in a Vector2Float value_changed eventOut with the same timestamp as the set_fraction event.";
field12.type = "SFVec2f";
//Regular interpolator-style output
ProtoInterface4.field[7] = field12;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Group14 = browser.currentScene.createNode("Group");
let Switch15 = browser.currentScene.createNode("Switch");
Switch15.whichChoice = -1;
let ScalarInterpolator16 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator16.DEF = "KeyHolder";
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "key";
connect18.protoField = "key";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

ScalarInterpolator16.iS = IS17;

Switch15.children = new MFNode();

Switch15.children[0] = ScalarInterpolator16;

let Shape19 = browser.currentScene.createNode("Shape");
let IndexedFaceSet20 = browser.currentScene.createNode("IndexedFaceSet");
let TextureCoordinate21 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate21.DEF = "KeyValueHolder";
let IS22 = browser.currentScene.createNode("IS");
let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "point";
connect23.protoField = "keyValue";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

TextureCoordinate21.iS = IS22;

IndexedFaceSet20.texCoord = TextureCoordinate21;

Shape19.geometry = IndexedFaceSet20;

let Appearance24 = browser.currentScene.createNode("Appearance");
Appearance24.DEF = "SilenceWarnings";
Shape19.appearance = Appearance24;

Switch15.children[1] = Shape19;

Group14.children = new MFNode();

Group14.children[0] = Switch15;

let Script25 = browser.currentScene.createNode("Script");
Script25.DEF = "InterpolationScript";
Script25.directOutput = True;
//Regular interpolator-style input
//Regular interpolator-style output
let field26 = browser.currentScene.createNode("field");
field26.name = "set_fraction";
field26.accessType = "inputOnly";
field26.type = "SFFloat";
Script25.field = new MFNode();

Script25.field[0] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "fraction";
field27.accessType = "initializeOnly";
field27.appinfo = "local variable";
field27.type = "SFFloat";
field27.value = "0";
Script25.field[1] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "set_key";
field28.accessType = "inputOnly";
field28.type = "MFFloat";
Script25.field[2] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "keyHolderNode";
field29.accessType = "initializeOnly";
field29.type = "SFNode";
let ScalarInterpolator30 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator30.USE = "KeyHolder";
field29.children = new MFNode();

field29.children[0] = ScalarInterpolator30;

Script25.field[3] = field29;

let field31 = browser.currentScene.createNode("field");
field31.name = "key_changed";
field31.accessType = "outputOnly";
field31.type = "MFFloat";
Script25.field[4] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "set_keyValue";
field32.accessType = "inputOnly";
field32.type = "MFVec2f";
Script25.field[5] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "keyValueHolderNode";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
let TextureCoordinate34 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate34.USE = "KeyValueHolder";
field33.children = new MFNode();

field33.children[0] = TextureCoordinate34;

Script25.field[6] = field33;

let field35 = browser.currentScene.createNode("field");
field35.name = "keyValue_changed";
field35.accessType = "outputOnly";
field35.type = "MFVec2f";
Script25.field[7] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "value_changed";
field36.accessType = "outputOnly";
field36.type = "SFVec2f";
Script25.field[8] = field36;

let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "set_fraction";
connect38.protoField = "set_fraction";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_key";
connect39.protoField = "set_key";
IS37.connect[1] = connect39;

let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "key_changed";
connect40.protoField = "key_changed";
IS37.connect[2] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "set_keyValue";
connect41.protoField = "set_keyValue";
IS37.connect[3] = connect41;

let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "keyValue_changed";
connect42.protoField = "keyValue_changed";
IS37.connect[4] = connect42;

let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "value_changed";
connect43.protoField = "value_changed";
IS37.connect[5] = connect43;

Script25.iS = IS37;


Script25.setSourceCode(`ecmascript:\n"+
"\n"+
"// internal global persistent variables\n"+
"var previousFraction;\n"+
"var previousFractionIndex;\n"+
"var blockSize;\n"+
"var outputArray;\n"+
"\n"+
"var traceEnabled = false;\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[PositionInterpolator2d]' + outputString);\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"	Browser.print ('[PositionInterpolator2d]' + outputString);\n"+
"}\n"+
"function initialize ()\n"+
"{\n"+
"	key      = keyHolderNode.key;\n"+
"	keyValue = keyValueHolderNode.point;\n"+
"	previousFractionIndex = -1;\n"+
"	previousFraction = 0;\n"+
"	// check key array ranges [0..1] and is monotonically increasing\n"+
"	// check that size of keyValue array is integer multiple of size of key array\n"+
"	tracePrint ('key            =' + key);\n"+
"	tracePrint ('key.length=' + key.length);\n"+
"	tracePrint ('keyValue=  ' + keyValue);\n"+
"	tracePrint ('keyValue.length=' + keyValue.length);\n"+
"	blockSize =  keyValue.length/key.length;\n"+
"	tracePrint ('blockSize=' + blockSize);\n"+
"	if (blockSize != 1)\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  check sizes of key and keyValue, should be identical!');\n"+
"	}\n"+
"	if (key[0] != 0)\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  key[0] != 0');\n"+
"	}\n"+
"	if (key[key.length-1] != 1)\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  key[' + (key.length - 1) + '] != 1, reset from' + key[key.length-1] + ' to 1');\n"+
"	  key[key.length-1] = 1;\n"+
"	}\n"+
"	for (index = 0; index < key.length; index++)\n"+
"	{\n"+
"		if ((key[index] < 0) || (key[index] > 1))\n"+
"		{\n"+
"		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_fraction (inputFloat, timestamp) {\n"+
"	fraction = inputFloat;\n"+
"	outputResult = new SFVec2f ();\n"+
"	tracePrint ('previousFractionIndex=' + previousFractionIndex\n"+
"		 + ', fraction=' + fraction + ', previousFraction=' + previousFraction);\n"+
"\n"+
"	if (fraction < 0)\n"+
"	{\n"+
"		tracePrint ('*** illegal fraction' + fraction + ' set to 0');\n"+
"		fraction = 0;\n"+
"		previousFractionIndex = 0; // first\n"+
"	}\n"+
"	else if (fraction > 1)\n"+
"	{\n"+
"		alwaysPrint ('*** illegal fraction' + fraction + ' set to 1');\n"+
"		fraction = 1;\n"+
"		previousFractionIndex = key.length - 1; // last\n"+
"	}\n"+
"	else if (previousFractionIndex == -1)\n"+
"	{\n"+
"		previousFractionIndex = 0; // first\n"+
"		tracePrint ('previousFractionIndex initialized for first event');\n"+
"	}\n"+
"	else if ((fraction >= previousFraction) && (fraction >= key[previousFractionIndex+1]))\n"+
"	{\n"+
"		previousFractionIndex++;\n"+
"	}\n"+
"	else if (fraction < previousFraction) // regress, or loop repeat without reaching one\n"+
"	{\n"+
"		previousFractionIndex = 0;\n"+
"		while ((fraction >= key[previousFractionIndex+1]) && (previousFractionIndex < blockSize))\n"+
"		{\n"+
"			previousFractionIndex++;\n"+
"		}\n"+
"		tracePrint ('reset/reincrement previousFractionIndex to' + previousFractionIndex);\n"+
"	}\n"+
"\n"+
"	if (fraction == 1) // use final block\n"+
"	{\n"+
"		tracePrint ('(fraction == 1)');\n"+
"		// update outputResult with final keyValue\n"+
"		outputResult = keyValue[keyValue.length];\n"+
"\n"+
"		previousFractionIndex = -1; // setup for restart\n"+
"		tracePrint ('finished final fraction==1 block');\n"+
"	}\n"+
"	// when fraction matches index, calculate value_changed from corresponding keyValue array\n"+
"	else if (fraction == key[previousFractionIndex])\n"+
"	{\n"+
"		tracePrint ('(fraction == key[previousFractionIndex])');\n"+
"		// update outputResult with corresponding keyValue\n"+
"		outputResult = keyValue[previousFractionIndex];\n"+
"	}\n"+
"	else // calculate value_changed by interpolating between adjacent keyValue arrays\n"+
"	{\n"+
"		partialFraction = fraction                     - key[previousFractionIndex];\n"+
"		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];\n"+
"		percentFraction = partialFraction / deltaFraction;\n"+
"	//	tracePrint ('deltaFraction   =' + deltaFraction);\n"+
"	//	tracePrint ('partialFraction =' + partialFraction);\n"+
"		tracePrint ('percentFraction =' + percentFraction);\n"+
"		// no arithmetic operators provided for SFVec2f, treat element by element\n"+
"		nextKeyValue  = keyValue[previousFractionIndex + 1];\n"+
"		priorKeyValue = keyValue[previousFractionIndex];\n"+
"		tracePrint (' nextKeyValue =' + nextKeyValue);\n"+
"		tracePrint ('priorKeyValue =' + priorKeyValue);\n"+
"		deltaKeyValue = new SFVec2f (	nextKeyValue[0] - priorKeyValue[0],\n"+
"						nextKeyValue[1] - priorKeyValue[1]);\n"+
"		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);\n"+
"		// update outputResult\n"+
"		outputResult[0] = keyValue[previousFractionIndex][0]\n"+
"			        + percentFraction * deltaKeyValue[0];\n"+
"		outputResult[1] = keyValue[previousFractionIndex][1]\n"+
"			        + percentFraction * deltaKeyValue[1];\n"+
"	}\n"+
"	value_changed = outputResult;\n"+
"	previousFraction = fraction;\n"+
"	tracePrint ('value_changed=' + value_changed);\n"+
"}\n"+
"\n"+
"function set_key (inputArray, timestamp) {\n"+
"	key = inputArray;       // update key Vector2FloatArray\n"+
"	keyHolderNode.key = key; // update holder\n"+
"	initialize (timestamp); // reverify key, keyValue sizes\n"+
"}\n"+
"\n"+
"function set_keyValue (inputArray, timestamp) {\n"+
"	keyValue = inputArray;  // update keyValue Vector2FloatArray\n"+
"	keyValueHolderNode.point = keyValue; // update holder\n"+
"	initialize (timestamp); // reverify key, keyValue sizes\n"+
"}`)
Group14.children[1] = Script25;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Group14;

ProtoDeclare3.protoBody = ProtoBody13;

browser.currentScene.children[1] = ProtoDeclare3;

//======================================
//Example use
let Anchor44 = browser.currentScene.createNode("Anchor");
Anchor44.description = "PositionInterpolator2D Example";
Anchor44.url = new MFString(new java.lang.String["PositionInterpolator2dExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d","PositionInterpolator2dExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.wrl"]);
let Shape45 = browser.currentScene.createNode("Shape");
let Text46 = browser.currentScene.createNode("Text");
Text46.string = new MFString(new java.lang.String["PositionInterpolator2dPrototype","defines a prototype","","Click text to see","PositionInterpolator2dExample"," scene"]);
let FontStyle47 = browser.currentScene.createNode("FontStyle");
FontStyle47.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle47.size = 0.7;
Text46.fontStyle = FontStyle47;

Shape45.geometry = Text46;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance48.material = Material49;

Shape45.appearance = Appearance48;

Anchor44.children = new MFNode();

Anchor44.children[0] = Shape45;

browser.currentScene.children[2] = Anchor44;

