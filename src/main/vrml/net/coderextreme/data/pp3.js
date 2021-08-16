let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "pp3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "translator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "5 May 2015";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "05 May 2017";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "A process pipeline between three spheres (try typing on spheres and blue";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "identifier";
meta8.content = "https://coderextreme.net/x3d/pp3.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "generator";
meta9.content = "manual";
head1.meta[7] = meta9;

head = head1;

let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Process" ><ProtoBody><Group><!--left--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0.7 1 0" transparency="0.5"></Material>
</Appearance>
<Extrusion containerField="geometry" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="-2.5 0 0 -1.5 0 0"></Extrusion>
</Shape>
<!--<Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'></Text> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"></StringSensor> <TouchSensor DEF="LeftTouch" enabled="true"></TouchSensor>--></Transform>
<!--right--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0 0.7 1" transparency="0.5"></Material>
</Appearance>
<Extrusion containerField="geometry" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="1.5 0 0 2.5 0 0"></Extrusion>
</Shape>
<Transform translation="2 0 0"><Shape><Appearance><Material DEF="MaterialLightBlue" diffuseColor="1 1 1"></Material>
</Appearance>
<Text containerField="geometry" DEF="RightString" string="&quot;r&quot;"></Text>
</Shape>
</Transform>
<StringSensor DEF="RightSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="RightTouch"></TouchSensor>
</Transform>
<!--up--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0 0.7 1" transparency="0.5"></Material>
</Appearance>
<Extrusion containerField="geometry" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 1.5 0 0 2.5 0"></Extrusion>
</Shape>
<Transform translation="-0.5 2 0"><Shape><Appearance><Material USE="MaterialLightBlue"></Material>
</Appearance>
<Text containerField="geometry" DEF="UpString" string="&quot;u&quot;"></Text>
</Shape>
</Transform>
<StringSensor DEF="UpSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="UpTouch"></TouchSensor>
</Transform>
<!--down--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0.7 1 0" transparency="0.5"></Material>
</Appearance>
<Extrusion containerField="geometry" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -2.5 0 0 -1.5 0"></Extrusion>
</Shape>
<!--<Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'></Text> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"></StringSensor> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"></TouchSensor>--></Transform>
<!--center--><Transform><Shape><Appearance><Material diffuseColor="1 0 0.7"></Material>
</Appearance>
<Sphere containerField="geometry"></Sphere>
</Shape>
<Transform scale="0.5 0.5 0.5" translation="-0.5 0 1"><Shape><Appearance><Material USE="MaterialLightBlue"></Material>
</Appearance>
<Text containerField="geometry" DEF="CenterString"></Text>
</Shape>
</Transform>
<StringSensor DEF="CenterSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="CenterTouch"></TouchSensor>
</Transform>
</Group>
<Script DEF="RightSingleToMultiString"><field name="set_rightstring" accessType="inputOnly" type="SFString"></field>
<field name="rightlines" accessType="outputOnly" type="MFString"></field>
<![CDATA[ecmascript:

function initialize() {
	rightlines = new MFString("");
}

function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
}]]></Script>
<Script DEF="UpSingleToMultiString"><field name="set_upstring" accessType="inputOnly" type="SFString"></field>
<field name="uplines" accessType="outputOnly" type="MFString"></field>
<![CDATA[ecmascript:

function initialize() {
	uplines = new MFString("");
}

function set_upstring(upstr) {
	uplines = new MFString(upstr);
}]]></Script>
<Script DEF="CenterSingleToMultiString"><field name="set_centerstring" accessType="inputOnly" type="SFString"></field>
<field name="centerlines" accessType="outputOnly" type="MFString"></field>
<![CDATA[ecmascript:

function initialize() {
	centerlines = new MFString("");
}

function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
}]]></Script>
<ROUTE fromField="enteredText" fromNode="CenterSensor" toField="set_centerstring" toNode="CenterSingleToMultiString"></ROUTE>
<ROUTE fromField="centerlines" fromNode="CenterSingleToMultiString" toField="set_string" toNode="CenterString"></ROUTE>
<ROUTE fromField="isOver" fromNode="CenterTouch" toField="set_enabled" toNode="CenterSensor"></ROUTE>
<ROUTE fromField="enteredText" fromNode="RightSensor" toField="set_rightstring" toNode="RightSingleToMultiString"></ROUTE>
<ROUTE fromField="rightlines" fromNode="RightSingleToMultiString" toField="set_string" toNode="RightString"></ROUTE>
<ROUTE fromField="isOver" fromNode="RightTouch" toField="set_enabled" toNode="RightSensor"></ROUTE>
<ROUTE fromField="enteredText" fromNode="UpSensor" toField="set_upstring" toNode="UpSingleToMultiString"></ROUTE>
<ROUTE fromField="uplines" fromNode="UpSingleToMultiString" toField="set_string" toNode="UpString"></ROUTE>
<ROUTE fromField="isOver" fromNode="UpTouch" toField="set_enabled" toNode="UpSensor"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "Process";
let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Group13 = browser.currentScene.createNode("Group");
//left
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape15 = browser.currentScene.createNode("Shape");
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.7,1,0]);
Material17.transparency = 0.5;
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let Extrusion18 = browser.currentScene.createNode("Extrusion");
Extrusion18.creaseAngle = 0.785;
Extrusion18.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion18.spine = new MFVec3f(new float[-2.5,0,0,-1.5,0,0]);
Shape15.geometry = Extrusion18;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group13.children = new MFNode();

Group13.children[0] = Transform14;

//right
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,0.7,1]);
Material22.transparency = 0.5;
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Extrusion23 = browser.currentScene.createNode("Extrusion");
Extrusion23.creaseAngle = 0.785;
Extrusion23.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion23.spine = new MFVec3f(new float[1.5,0,0,2.5,0,0]);
Shape20.geometry = Extrusion23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[2,0,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.DEF = "MaterialLightBlue";
Material27.diffuseColor = new SFColor(new float[1,1,1]);
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

let Text28 = browser.currentScene.createNode("Text");
Text28.DEF = "RightString";
Text28.string = new MFString(new java.lang.String["r"]);
Shape25.geometry = Text28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Transform19.children[1] = Transform24;

let StringSensor29 = browser.currentScene.createNode("StringSensor");
StringSensor29.DEF = "RightSensor";
StringSensor29.enabled = False;
Transform19.children[2] = StringSensor29;

let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.description = "touch to activate";
TouchSensor30.DEF = "RightTouch";
Transform19.children[3] = TouchSensor30;

Group13.children[1] = Transform19;

//up
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,0.7,1]);
Material34.transparency = 0.5;
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Extrusion35 = browser.currentScene.createNode("Extrusion");
Extrusion35.creaseAngle = 0.785;
Extrusion35.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion35.spine = new MFVec3f(new float[0,1.5,0,0,2.5,0]);
Shape32.geometry = Extrusion35;

Transform31.children = new MFNode();

Transform31.children[0] = Shape32;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new SFVec3f(new float[-0.5,2,0]);
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.USE = "MaterialLightBlue";
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let Text40 = browser.currentScene.createNode("Text");
Text40.DEF = "UpString";
Text40.string = new MFString(new java.lang.String["u"]);
Shape37.geometry = Text40;

Transform36.children = new MFNode();

Transform36.children[0] = Shape37;

Transform31.children[1] = Transform36;

let StringSensor41 = browser.currentScene.createNode("StringSensor");
StringSensor41.DEF = "UpSensor";
StringSensor41.enabled = False;
Transform31.children[2] = StringSensor41;

let TouchSensor42 = browser.currentScene.createNode("TouchSensor");
TouchSensor42.description = "touch to activate";
TouchSensor42.DEF = "UpTouch";
Transform31.children[3] = TouchSensor42;

Group13.children[2] = Transform31;

//down
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.scale = new SFVec3f(new float[0.5,0.5,0.5]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.7,1,0]);
Material46.transparency = 0.5;
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

let Extrusion47 = browser.currentScene.createNode("Extrusion");
Extrusion47.creaseAngle = 0.785;
Extrusion47.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion47.spine = new MFVec3f(new float[0,-2.5,0,0,-1.5,0]);
Shape44.geometry = Extrusion47;

Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group13.children[3] = Transform43;

//center
let Transform48 = browser.currentScene.createNode("Transform");
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.diffuseColor = new SFColor(new float[1,0,0.7]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let Sphere52 = browser.currentScene.createNode("Sphere");
Shape49.geometry = Sphere52;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Transform53.translation = new SFVec3f(new float[-0.5,0,1]);
let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.USE = "MaterialLightBlue";
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let Text57 = browser.currentScene.createNode("Text");
Text57.DEF = "CenterString";
Shape54.geometry = Text57;

Transform53.children = new MFNode();

Transform53.children[0] = Shape54;

Transform48.children[1] = Transform53;

let StringSensor58 = browser.currentScene.createNode("StringSensor");
StringSensor58.DEF = "CenterSensor";
StringSensor58.enabled = False;
Transform48.children[2] = StringSensor58;

let TouchSensor59 = browser.currentScene.createNode("TouchSensor");
TouchSensor59.description = "touch to activate";
TouchSensor59.DEF = "CenterTouch";
Transform48.children[3] = TouchSensor59;

Group13.children[4] = Transform48;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "RightSingleToMultiString";
let field61 = browser.currentScene.createNode("field");
field61.name = "set_rightstring";
field61.accessType = "inputOnly";
field61.type = "SFString";
Script60.field = new MFNode();

Script60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "rightlines";
field62.accessType = "outputOnly";
field62.type = "MFString";
Script60.field[1] = field62;


Script60.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}`)
ProtoBody12.children[1] = Script60;

let Script63 = browser.currentScene.createNode("Script");
Script63.DEF = "UpSingleToMultiString";
let field64 = browser.currentScene.createNode("field");
field64.name = "set_upstring";
field64.accessType = "inputOnly";
field64.type = "SFString";
Script63.field = new MFNode();

Script63.field[0] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "uplines";
field65.accessType = "outputOnly";
field65.type = "MFString";
Script63.field[1] = field65;


Script63.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}`)
ProtoBody12.children[2] = Script63;

let Script66 = browser.currentScene.createNode("Script");
Script66.DEF = "CenterSingleToMultiString";
let field67 = browser.currentScene.createNode("field");
field67.name = "set_centerstring";
field67.accessType = "inputOnly";
field67.type = "SFString";
Script66.field = new MFNode();

Script66.field[0] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "centerlines";
field68.accessType = "outputOnly";
field68.type = "MFString";
Script66.field[1] = field68;


Script66.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}`)
ProtoBody12.children[3] = Script66;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "enteredText";
ROUTE69.fromNode = "CenterSensor";
ROUTE69.toField = "set_centerstring";
ROUTE69.toNode = "CenterSingleToMultiString";
ProtoBody12.children[4] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "centerlines";
ROUTE70.fromNode = "CenterSingleToMultiString";
ROUTE70.toField = "set_string";
ROUTE70.toNode = "CenterString";
ProtoBody12.children[5] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "isOver";
ROUTE71.fromNode = "CenterTouch";
ROUTE71.toField = "set_enabled";
ROUTE71.toNode = "CenterSensor";
ProtoBody12.children[6] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "enteredText";
ROUTE72.fromNode = "RightSensor";
ROUTE72.toField = "set_rightstring";
ROUTE72.toNode = "RightSingleToMultiString";
ProtoBody12.children[7] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "rightlines";
ROUTE73.fromNode = "RightSingleToMultiString";
ROUTE73.toField = "set_string";
ROUTE73.toNode = "RightString";
ProtoBody12.children[8] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "isOver";
ROUTE74.fromNode = "RightTouch";
ROUTE74.toField = "set_enabled";
ROUTE74.toNode = "RightSensor";
ProtoBody12.children[9] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "enteredText";
ROUTE75.fromNode = "UpSensor";
ROUTE75.toField = "set_upstring";
ROUTE75.toNode = "UpSingleToMultiString";
ProtoBody12.children[10] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "uplines";
ROUTE76.fromNode = "UpSingleToMultiString";
ROUTE76.toField = "set_string";
ROUTE76.toNode = "UpString";
ProtoBody12.children[11] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "isOver";
ROUTE77.fromNode = "UpTouch";
ROUTE77.toField = "set_enabled";
ROUTE77.toNode = "UpSensor";
ProtoBody12.children[12] = ROUTE77;

ProtoDeclare11.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let NavigationInfo78 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo78;

let Viewpoint79 = browser.currentScene.createNode("Viewpoint");
Viewpoint79.description = "Process pipes";
Viewpoint79.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint79.position = new SFVec3f(new float[0,5,12]);
browser.currentScene.children[2] = Viewpoint79;

let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new SFVec3f(new float[0,-2.5,0]);
let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "Process";
Transform80.children = new MFNode();

Transform80.children[0] = ProtoInstance81;

browser.currentScene.children[3] = Transform80;

let Transform82 = browser.currentScene.createNode("Transform");
let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "Process";
Transform82.children = new MFNode();

Transform82.children[0] = ProtoInstance83;

browser.currentScene.children[4] = Transform82;

let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new SFVec3f(new float[0,2.5,0]);
let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "Process";
Transform84.children = new MFNode();

Transform84.children[0] = ProtoInstance85;

browser.currentScene.children[5] = Transform84;

