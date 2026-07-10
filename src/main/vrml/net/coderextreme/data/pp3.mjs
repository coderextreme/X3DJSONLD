const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "pp3.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("translator", "John Carlson");
scene.addMetaData("created", "5 May 2015");
scene.addMetaData("modified", "23 Dec 2022");
scene.addMetaData("description", "A process pipeline between three spheres (try typing on spheres and blue");
scene.addMetaData("identifier", "https://coderextreme.net/x3d/pp3.x3d");
scene.addMetaData("generator", "manual");
await browser .loadComponents (scene);
let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Process" ><ProtoBody><Group><!--left--><Transform scale="0.5 0.5 0.5"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 1 0" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="-2.5 0 0 -2 0 0 -1.5 0 0"></Extrusion>
</Shape>
<!--<Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'></Text> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"></StringSensor> <TouchSensor DEF="LeftTouch" enabled="true"></TouchSensor>--></Transform>
<!--right--><Transform scale="0.5 0.5 0.5"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0.7 1" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="1.5 0 0 2 0 0 2.5 0 0"></Extrusion>
</Shape>
<Transform translation="2 0 0"><Shape><Appearance containerField="appearance"><Material containerField="material" DEF="MaterialLightBlue" diffuseColor="1 1 1"></Material>
</Appearance>
<Text DEF="RightString" string="&quot;r&quot;"></Text>
</Shape>
</Transform>
<StringSensor DEF="RightSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="RightTouch"></TouchSensor>
</Transform>
<!--up--><Transform scale="0.5 0.5 0.5"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0.7 1" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 1.5 0 0 2 0 0 2.5 0"></Extrusion>
</Shape>
<Transform translation="-0.5 2 0"><Shape><Appearance containerField="appearance"><Material containerField="material" USE="MaterialLightBlue"></Material>
</Appearance>
<Text DEF="UpString" string="&quot;u&quot;"></Text>
</Shape>
</Transform>
<StringSensor DEF="UpSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="UpTouch"></TouchSensor>
</Transform>
<!--down--><Transform scale="0.5 0.5 0.5"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 1 0" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -2.5 0 0 -2 0 0 -1.5 0"></Extrusion>
</Shape>
<!--<Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'></Text> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"></StringSensor> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"></TouchSensor>--></Transform>
<!--center--><Transform><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0.7"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
<Transform scale="0.5 0.5 0.5" translation="-0.5 0 1"><Shape><Appearance containerField="appearance"><Material containerField="material" USE="MaterialLightBlue"></Material>
</Appearance>
<Text DEF="CenterString"></Text>
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
Transform14.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape15 = browser.currentScene.createNode("Shape");
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new X3D.SFColor([0.7,1,0]);
Material17.transparency = 0.5;
material = Material17;

appearance = Appearance16;

let Extrusion18 = browser.currentScene.createNode("Extrusion");
Extrusion18.creaseAngle = 0.785;
Extrusion18.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion18.spine = new X3D.MFVec3f([-2.5,0,0,-2,0,0,-1.5,0,0]);
geometry = Extrusion18;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape15;

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group13YYY.children = new X3D.MFNode();

Group13ZZZ.children[0] = Transform14;

//right
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0,0.7,1]);
Material22.transparency = 0.5;
material = Material22;

appearance = Appearance21;

let Extrusion23 = browser.currentScene.createNode("Extrusion");
Extrusion23.creaseAngle = 0.785;
Extrusion23.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion23.spine = new X3D.MFVec3f([1.5,0,0,2,0,0,2.5,0,0]);
geometry = Extrusion23;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([2,0,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.DEF = "MaterialLightBlue";
Material27.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material27;

appearance = Appearance26;

let Text28 = browser.currentScene.createNode("Text");
Text28.DEF = "RightString";
Text28.string = new X3D.MFString([new X3D.SFString("r")]);
geometry = Text28;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Transform19ZZZ.children[1] = Transform24;

let StringSensor29 = browser.currentScene.createNode("StringSensor");
StringSensor29.DEF = "RightSensor";
StringSensor29.enabled = False;
Transform19ZZZ.children[2] = StringSensor29;

let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.description = "touch to activate";
TouchSensor30.DEF = "RightTouch";
Transform19ZZZ.children[3] = TouchSensor30;

Group13ZZZ.children[1] = Transform19;

//up
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new X3D.SFColor([0,0.7,1]);
Material34.transparency = 0.5;
material = Material34;

appearance = Appearance33;

let Extrusion35 = browser.currentScene.createNode("Extrusion");
Extrusion35.creaseAngle = 0.785;
Extrusion35.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion35.spine = new X3D.MFVec3f([0,1.5,0,0,2,0,0,2.5,0]);
geometry = Extrusion35;

Transform31YYY.child = new X3D.undefined();

Transform31ZZZ.child[0] = Shape32;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new X3D.SFVec3f([-0.5,2,0]);
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.USE = "MaterialLightBlue";
material = Material39;

appearance = Appearance38;

let Text40 = browser.currentScene.createNode("Text");
Text40.DEF = "UpString";
Text40.string = new X3D.MFString([new X3D.SFString("u")]);
geometry = Text40;

Transform36YYY.child = new X3D.undefined();

Transform36ZZZ.child[0] = Shape37;

Transform31ZZZ.children[1] = Transform36;

let StringSensor41 = browser.currentScene.createNode("StringSensor");
StringSensor41.DEF = "UpSensor";
StringSensor41.enabled = False;
Transform31ZZZ.children[2] = StringSensor41;

let TouchSensor42 = browser.currentScene.createNode("TouchSensor");
TouchSensor42.description = "touch to activate";
TouchSensor42.DEF = "UpTouch";
Transform31ZZZ.children[3] = TouchSensor42;

Group13ZZZ.children[2] = Transform31;

//down
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new X3D.SFColor([0.7,1,0]);
Material46.transparency = 0.5;
material = Material46;

appearance = Appearance45;

let Extrusion47 = browser.currentScene.createNode("Extrusion");
Extrusion47.creaseAngle = 0.785;
Extrusion47.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion47.spine = new X3D.MFVec3f([0,-2.5,0,0,-2,0,0,-1.5,0]);
geometry = Extrusion47;

Transform43YYY.child = new X3D.undefined();

Transform43ZZZ.child[0] = Shape44;

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group13ZZZ.children[3] = Transform43;

//center
let Transform48 = browser.currentScene.createNode("Transform");
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.diffuseColor = new X3D.SFColor([1,0,0.7]);
material = Material51;

appearance = Appearance50;

let Sphere52 = browser.currentScene.createNode("Sphere");
geometry = Sphere52;

Transform48YYY.child = new X3D.undefined();

Transform48ZZZ.child[0] = Shape49;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.scale = new X3D.SFVec3f([0.5,0.5,0.5]);
Transform53.translation = new X3D.SFVec3f([-0.5,0,1]);
let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.USE = "MaterialLightBlue";
material = Material56;

appearance = Appearance55;

let Text57 = browser.currentScene.createNode("Text");
Text57.DEF = "CenterString";
geometry = Text57;

Transform53YYY.child = new X3D.undefined();

Transform53ZZZ.child[0] = Shape54;

Transform48ZZZ.children[1] = Transform53;

let StringSensor58 = browser.currentScene.createNode("StringSensor");
StringSensor58.DEF = "CenterSensor";
StringSensor58.enabled = False;
Transform48ZZZ.children[2] = StringSensor58;

let TouchSensor59 = browser.currentScene.createNode("TouchSensor");
TouchSensor59.description = "touch to activate";
TouchSensor59.DEF = "CenterTouch";
Transform48ZZZ.children[3] = TouchSensor59;

Group13ZZZ.children[4] = Transform48;

ProtoBody12YYY.children = new X3D.MFNode();

ProtoBody12ZZZ.children[0] = Group13;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "RightSingleToMultiString";
Script61.getField("set_rightstring")Script60YYY.field = new X3D.MFNode();

Script62.getField("rightlines")Script60YYY.field = new X3D.MFNode();


Script60.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}`)
ProtoBody12ZZZ.children[1] = Script60;

let Script63 = browser.currentScene.createNode("Script");
Script63.DEF = "UpSingleToMultiString";
Script64.getField("set_upstring")Script63YYY.field = new X3D.MFNode();

Script65.getField("uplines")Script63YYY.field = new X3D.MFNode();


Script63.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}`)
ProtoBody12ZZZ.children[2] = Script63;

let Script66 = browser.currentScene.createNode("Script");
Script66.DEF = "CenterSingleToMultiString";
Script67.getField("set_centerstring")Script66YYY.field = new X3D.MFNode();

Script68.getField("centerlines")Script66YYY.field = new X3D.MFNode();


Script66.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}`)
ProtoBody12ZZZ.children[3] = Script66;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "enteredText";
ROUTE69.fromNode = "CenterSensor";
ROUTE69.toField = "set_centerstring";
ROUTE69.toNode = "CenterSingleToMultiString";
ProtoBody12ZZZ.children[4] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "centerlines";
ROUTE70.fromNode = "CenterSingleToMultiString";
ROUTE70.toField = "set_string";
ROUTE70.toNode = "CenterString";
ProtoBody12ZZZ.children[5] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "isOver";
ROUTE71.fromNode = "CenterTouch";
ROUTE71.toField = "set_enabled";
ROUTE71.toNode = "CenterSensor";
ProtoBody12ZZZ.children[6] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "enteredText";
ROUTE72.fromNode = "RightSensor";
ROUTE72.toField = "set_rightstring";
ROUTE72.toNode = "RightSingleToMultiString";
ProtoBody12ZZZ.children[7] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "rightlines";
ROUTE73.fromNode = "RightSingleToMultiString";
ROUTE73.toField = "set_string";
ROUTE73.toNode = "RightString";
ProtoBody12ZZZ.children[8] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "isOver";
ROUTE74.fromNode = "RightTouch";
ROUTE74.toField = "set_enabled";
ROUTE74.toNode = "RightSensor";
ProtoBody12ZZZ.children[9] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "enteredText";
ROUTE75.fromNode = "UpSensor";
ROUTE75.toField = "set_upstring";
ROUTE75.toNode = "UpSingleToMultiString";
ProtoBody12ZZZ.children[10] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "uplines";
ROUTE76.fromNode = "UpSingleToMultiString";
ROUTE76.toField = "set_string";
ROUTE76.toNode = "UpString";
ProtoBody12ZZZ.children[11] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "isOver";
ROUTE77.fromNode = "UpTouch";
ROUTE77.toField = "set_enabled";
ROUTE77.toNode = "UpSensor";
ProtoBody12ZZZ.children[12] = ROUTE77;

protoBody = ProtoBody12;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let NavigationInfo78 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo78;

let Viewpoint79 = browser.currentScene.createNode("Viewpoint");
Viewpoint79.description = "Process pipes";
Viewpoint79.orientation = new X3D.SFRotation([1,0,0,-0.4]);
Viewpoint79.position = new X3D.SFVec3f([0,5,12]);
browser.currentScene.children[2] = Viewpoint79;

let Transform80 = browser.currentScene.createNode("Transform");
Transform80.translation = new X3D.SFVec3f([0,-2.5,0]);
let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "Process";
Transform80YYY.children = new X3D.MFNode();

Transform80ZZZ.children[0] = ProtoInstance81;

browser.currentScene.children[3] = Transform80;

let Transform82 = browser.currentScene.createNode("Transform");
let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "Process";
Transform82YYY.children = new X3D.MFNode();

Transform82ZZZ.children[0] = ProtoInstance83;

browser.currentScene.children[4] = Transform82;

let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new X3D.SFVec3f([0,2.5,0]);
let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "Process";
Transform84YYY.children = new X3D.MFNode();

Transform84ZZZ.children[0] = ProtoInstance85;

browser.currentScene.children[5] = Transform84;

}
main ();
