let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CoordinateInterpolator2dPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CoordinateInterpolator2D" appinfo="Provide interpolation capability for Vector2FloatArray/MFVec2f values" documentation="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8" ><ProtoInterface><field name="set_fraction" accessType="inputOnly" appinfo="Regular interpolator-style input, the set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event." type="SFFloat"></field>
<field name="set_key" accessType="inputOnly" type="MFFloat"></field>
<field name="key" accessType="inputOutput" appinfo="keyValue holds the array of Vector2FloatArrays that match each animation key." type="MFFloat"></field>
<field name="key_changed" accessType="outputOnly" appinfo="Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues." type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFVec2f"></field>
<field name="keyValue" accessType="inputOutput" appinfo="keyValue holds the array of Vector2FloatArrays that match each animation key." type="MFVec2f"></field>
<field name="keyValue_changed" accessType="outputOnly" appinfo="Array of integer values. Must have the same number of keys as keyValues." type="MFVec2f"></field>
<field name="value_changed" accessType="outputOnly" appinfo="Regular interpolator-style output, the interpolator function averages between respective keyValue Vector2FloatArrays resulting in a Vector2FloatArray value_changed eventOut with the same timestamp as the set_fraction event." type="MFVec2f"></field>
</ProtoInterface>
<ProtoBody><Group><Switch whichChoice="-1"><ScalarInterpolator DEF="KeyHolder"><IS><connect nodeField="key" protoField="key"></connect>
</IS>
</ScalarInterpolator>
<Shape><IndexedFaceSet containerField="geometry"><TextureCoordinate containerField="texCoord" DEF="KeyValueHolder"><IS><connect nodeField="point" protoField="keyValue"></connect>
</IS>
</TextureCoordinate>
</IndexedFaceSet>
<Appearance DEF="DefaultAppearance"><Material></Material>
</Appearance>
</Shape>
</Switch>
<Script DEF="InterpolationScript" directOutput="true"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="fraction" accessType="initializeOnly" appinfo="local variable" type="SFFloat" value="0"></field>
<field name="set_key" accessType="inputOnly" type="MFFloat"></field>
<field name="keyHolderNode" accessType="initializeOnly" type="SFNode"><ScalarInterpolator USE="KeyHolder"></ScalarInterpolator>
</field>
<field name="key_changed" accessType="outputOnly" type="MFFloat"></field>
<field name="set_keyValue" accessType="inputOnly" type="MFVec2f"></field>
<field name="keyValueHolderNode" accessType="initializeOnly" type="SFNode"><TextureCoordinate USE="KeyValueHolder"></TextureCoordinate>
</field>
<field name="keyValue_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="value_changed" accessType="outputOnly" type="MFVec2f"></field>
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

function tracePrint (outputString)
{
	var traceEnabled = false;
	if (traceEnabled) Browser.print ('[CoordinateInterpolator2D]' + outputString);
}
function alwaysPrint (outputString)
{
	Browser.print ('[CoordinateInterpolator2D]' + outputString);
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
	tracePrint ('key.length= ' + key.length);
	tracePrint ('keyValue=   ' + keyValue);
	tracePrint ('keyValue.length=' + keyValue.length);
	blockSize =  keyValue.length/key.length;
	tracePrint ('blockSize=' + blockSize);
	if (blockSize != Math.round(blockSize))
	{
	  alwaysPrint ('*** warning:  blockSize not an integer multiple. check sizes of key and keyValue');
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
	for (index = 0; index < blockSize; index++)
	{
		if ((key[index] < 0) || (key[index] > 1))
		{
		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');
		}
	}
	// instantiate default array, later computations just update it
	outputArray = new MFVec2f ();
	for (index = 0; index < blockSize; index++)
	{
		// dynamically grow outputArray to match initial block
		outputArray[index] = keyValue[index];
	}
	tracePrint ('initial outputArray=' + outputArray);
}

function set_fraction (inputFloat, timestamp) {
	fraction = inputFloat;
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
		previousFractionIndex = blockSize - 1; // last
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
		for (index = 0; index < blockSize; index++)
		{
			// update outputArray with final four keyValues
			outputArray[4 - index] = keyValue[keyValue.length - index];
		}
		previousFractionIndex = -1; // setup for restart
		tracePrint ('finished final fraction==1 block');
	}
	// when fraction matches index, calculate value_changed from corresponding keyValue array
	else if (fraction == key[previousFractionIndex])
	{
		tracePrint ('(fraction == key[previousFractionIndex])');
		for (index = 0; index < blockSize; index++)
		{
			// update outputArray - need to interpolate next
			outputArray[index] = keyValue[blockSize * (previousFractionIndex) + index];
		}
	}
	else // calculate value_changed by interpolating between adjacent keyValue arrays
	{
		partialFraction = fraction                     - key[previousFractionIndex];
		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];
		percentFraction = partialFraction / deltaFraction;
	//	tracePrint ('deltaFraction   =' + deltaFraction);
	//	tracePrint ('partialFraction =' + partialFraction);
		tracePrint ('percentFraction =' + percentFraction);
		for (index = 0; index < blockSize; index++)
		{
			// no arithmetic operators provided for SFVec2f, treat element by element
			nextKeyValue  = keyValue[blockSize * (previousFractionIndex + 1) + index];
			priorKeyValue = keyValue[blockSize * (previousFractionIndex)     + index];
			deltaKeyValue = new SFVec2f (
						nextKeyValue[0] - priorKeyValue[0],
						nextKeyValue[1] - priorKeyValue[1]);
		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);
			// update outputArray
			outputArray[index][0] = keyValue[blockSize * (previousFractionIndex) + index][0]
			   + percentFraction * deltaKeyValue[0];
			outputArray[index][1] = keyValue[blockSize * (previousFractionIndex) + index][1]
			   + percentFraction * deltaKeyValue[1];
		}
	}
	value_changed = outputArray;
	previousFraction = fraction;
	tracePrint ('value_changed=' + value_changed);
}

function set_key (inputArray, timestamp) {
	key = inputArray;       // update key Vector2FloatArray
	keyHolderNode.key = key; // update holder
	initialize (timestamp); // reverify key, keyValue sizes
	key_changed = key;	// eventOut
}

function set_keyValue (inputArray, timestamp) {
	keyValue = inputArray;  	// update keyValue Vector2FloatArray
	keyValueHolderNode.point = keyValue; // update holder
	initialize (timestamp); 	// reverify key, keyValue sizes
	keyValue_changed = keyValue;	// eventOut
}]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "CoordinateInterpolator2D";
ProtoDeclare3.appinfo = "Provide interpolation capability for Vector2FloatArray/MFVec2f values";
ProtoDeclare3.documentation = "https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_fraction";
field5.accessType = "inputOnly";
field5.appinfo = "Regular interpolator-style input, the set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.";
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
field7.appinfo = "keyValue holds the array of Vector2FloatArrays that match each animation key.";
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
field9.type = "MFVec2f";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "keyValue";
field10.accessType = "inputOutput";
field10.appinfo = "keyValue holds the array of Vector2FloatArrays that match each animation key.";
field10.type = "MFVec2f";
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
field12.appinfo = "Regular interpolator-style output, the interpolator function averages between respective keyValue Vector2FloatArrays resulting in a Vector2FloatArray value_changed eventOut with the same timestamp as the set_fraction event.";
field12.type = "MFVec2f";
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
Appearance24.DEF = "DefaultAppearance";
let Material25 = browser.currentScene.createNode("Material");
Appearance24.material = Material25;

Shape19.appearance = Appearance24;

Switch15.children[1] = Shape19;

Group14.children = new MFNode();

Group14.children[0] = Switch15;

let Script26 = browser.currentScene.createNode("Script");
Script26.DEF = "InterpolationScript";
Script26.directOutput = True;
let field27 = browser.currentScene.createNode("field");
field27.name = "set_fraction";
field27.accessType = "inputOnly";
field27.type = "SFFloat";
Script26.field = new MFNode();

Script26.field[0] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "fraction";
field28.accessType = "initializeOnly";
field28.appinfo = "local variable";
field28.type = "SFFloat";
field28.value = "0";
Script26.field[1] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "set_key";
field29.accessType = "inputOnly";
field29.type = "MFFloat";
Script26.field[2] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "keyHolderNode";
field30.accessType = "initializeOnly";
field30.type = "SFNode";
let ScalarInterpolator31 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator31.USE = "KeyHolder";
field30.children = new MFNode();

field30.children[0] = ScalarInterpolator31;

Script26.field[3] = field30;

let field32 = browser.currentScene.createNode("field");
field32.name = "key_changed";
field32.accessType = "outputOnly";
field32.type = "MFFloat";
Script26.field[4] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "set_keyValue";
field33.accessType = "inputOnly";
field33.type = "MFVec2f";
Script26.field[5] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "keyValueHolderNode";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
let TextureCoordinate35 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate35.USE = "KeyValueHolder";
field34.children = new MFNode();

field34.children[0] = TextureCoordinate35;

Script26.field[6] = field34;

let field36 = browser.currentScene.createNode("field");
field36.name = "keyValue_changed";
field36.accessType = "outputOnly";
field36.type = "MFVec2f";
Script26.field[7] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "value_changed";
field37.accessType = "outputOnly";
field37.type = "MFVec2f";
Script26.field[8] = field37;

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
connect43.nodeField = "keyValue_changed";
connect43.protoField = "keyValue_changed";
IS38.connect[4] = connect43;

let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "value_changed";
connect44.protoField = "value_changed";
IS38.connect[5] = connect44;

Script26.iS = IS38;


Script26.setSourceCode(`ecmascript:\n"+
"\n"+
"// internal global persistent variables\n"+
"var previousFraction;\n"+
"var previousFractionIndex;\n"+
"var blockSize;\n"+
"var outputArray;\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	var traceEnabled = false;\n"+
"	if (traceEnabled) Browser.print ('[CoordinateInterpolator2D]' + outputString);\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"	Browser.print ('[CoordinateInterpolator2D]' + outputString);\n"+
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
"	tracePrint ('key.length= ' + key.length);\n"+
"	tracePrint ('keyValue=   ' + keyValue);\n"+
"	tracePrint ('keyValue.length=' + keyValue.length);\n"+
"	blockSize =  keyValue.length/key.length;\n"+
"	tracePrint ('blockSize=' + blockSize);\n"+
"	if (blockSize != Math.round(blockSize))\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  blockSize not an integer multiple. check sizes of key and keyValue');\n"+
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
"	for (index = 0; index < blockSize; index++)\n"+
"	{\n"+
"		if ((key[index] < 0) || (key[index] > 1))\n"+
"		{\n"+
"		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');\n"+
"		}\n"+
"	}\n"+
"	// instantiate default array, later computations just update it\n"+
"	outputArray = new MFVec2f ();\n"+
"	for (index = 0; index < blockSize; index++)\n"+
"	{\n"+
"		// dynamically grow outputArray to match initial block\n"+
"		outputArray[index] = keyValue[index];\n"+
"	}\n"+
"	tracePrint ('initial outputArray=' + outputArray);\n"+
"}\n"+
"\n"+
"function set_fraction (inputFloat, timestamp) {\n"+
"	fraction = inputFloat;\n"+
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
"		previousFractionIndex = blockSize - 1; // last\n"+
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
"		for (index = 0; index < blockSize; index++)\n"+
"		{\n"+
"			// update outputArray with final four keyValues\n"+
"			outputArray[4 - index] = keyValue[keyValue.length - index];\n"+
"		}\n"+
"		previousFractionIndex = -1; // setup for restart\n"+
"		tracePrint ('finished final fraction==1 block');\n"+
"	}\n"+
"	// when fraction matches index, calculate value_changed from corresponding keyValue array\n"+
"	else if (fraction == key[previousFractionIndex])\n"+
"	{\n"+
"		tracePrint ('(fraction == key[previousFractionIndex])');\n"+
"		for (index = 0; index < blockSize; index++)\n"+
"		{\n"+
"			// update outputArray - need to interpolate next\n"+
"			outputArray[index] = keyValue[blockSize * (previousFractionIndex) + index];\n"+
"		}\n"+
"	}\n"+
"	else // calculate value_changed by interpolating between adjacent keyValue arrays\n"+
"	{\n"+
"		partialFraction = fraction                     - key[previousFractionIndex];\n"+
"		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];\n"+
"		percentFraction = partialFraction / deltaFraction;\n"+
"	//	tracePrint ('deltaFraction   =' + deltaFraction);\n"+
"	//	tracePrint ('partialFraction =' + partialFraction);\n"+
"		tracePrint ('percentFraction =' + percentFraction);\n"+
"		for (index = 0; index < blockSize; index++)\n"+
"		{\n"+
"			// no arithmetic operators provided for SFVec2f, treat element by element\n"+
"			nextKeyValue  = keyValue[blockSize * (previousFractionIndex + 1) + index];\n"+
"			priorKeyValue = keyValue[blockSize * (previousFractionIndex)     + index];\n"+
"			deltaKeyValue = new SFVec2f (\n"+
"						nextKeyValue[0] - priorKeyValue[0],\n"+
"						nextKeyValue[1] - priorKeyValue[1]);\n"+
"		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);\n"+
"			// update outputArray\n"+
"			outputArray[index][0] = keyValue[blockSize * (previousFractionIndex) + index][0]\n"+
"			   + percentFraction * deltaKeyValue[0];\n"+
"			outputArray[index][1] = keyValue[blockSize * (previousFractionIndex) + index][1]\n"+
"			   + percentFraction * deltaKeyValue[1];\n"+
"		}\n"+
"	}\n"+
"	value_changed = outputArray;\n"+
"	previousFraction = fraction;\n"+
"	tracePrint ('value_changed=' + value_changed);\n"+
"}\n"+
"\n"+
"function set_key (inputArray, timestamp) {\n"+
"	key = inputArray;       // update key Vector2FloatArray\n"+
"	keyHolderNode.key = key; // update holder\n"+
"	initialize (timestamp); // reverify key, keyValue sizes\n"+
"	key_changed = key;	// eventOut\n"+
"}\n"+
"\n"+
"function set_keyValue (inputArray, timestamp) {\n"+
"	keyValue = inputArray;  	// update keyValue Vector2FloatArray\n"+
"	keyValueHolderNode.point = keyValue; // update holder\n"+
"	initialize (timestamp); 	// reverify key, keyValue sizes\n"+
"	keyValue_changed = keyValue;	// eventOut\n"+
"}`)
Group14.children[1] = Script26;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Group14;

ProtoDeclare3.protoBody = ProtoBody13;

browser.currentScene.children[1] = ProtoDeclare3;

//======================================
//Example use
let Anchor45 = browser.currentScene.createNode("Anchor");
Anchor45.description = "CoordinateInterpolator2dExample";
Anchor45.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor45.url = new MFString(new java.lang.String["CoordinateInterpolator2dExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.x3d","CoordinateInterpolator2dExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.wrl"]);
let Shape46 = browser.currentScene.createNode("Shape");
let Text47 = browser.currentScene.createNode("Text");
Text47.string = new MFString(new java.lang.String["CoordinateInterpolator2dPrototype","defines a prototype","","Click on this text to see","CoordinateInterpolator2dExample"," scene"]);
let FontStyle48 = browser.currentScene.createNode("FontStyle");
FontStyle48.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle48.size = 0.7;
Text47.fontStyle = FontStyle48;

Shape46.geometry = Text47;

let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance49.material = Material50;

Shape46.appearance = Appearance49;

Anchor45.children = new MFNode();

Anchor45.children[0] = Shape46;

browser.currentScene.children[2] = Anchor45;

