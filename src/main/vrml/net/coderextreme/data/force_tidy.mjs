const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene.addMetaData("creator", "John W Carlson");
scene.addMetaData("created", "December 13 2015");
scene.addMetaData("modified", "July 14 2025");
scene.addMetaData("title", "force.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("generator", "x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("modified", "Sat, 9 Nov 2024 19:29:39 GMT");
await browser .loadComponents (scene);
let ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0 1"></Material>
</Appearance>
<Text string="&quot;Node&quot;"><FontStyle containerField="fontStyle" size="5" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;"></FontStyle>
</Text>
</Shape>
</Transform>
</Transform>
<PositionInterpolator DEF="NodePosition" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MoveBall"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f"></field>
<field name="set_cycle" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="outputOnly" type="MFVec3f"></field>
<![CDATA[ecmascript:
		function set_cycle(value) {
			old = translation;
			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
			keyValue = new MFVec3f(old, translation);
		}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="set_keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "node";
ProtoInterface15.getField("position")ProtoInterface14YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface14;

let ProtoBody16 = browser.currentScene.createNode("ProtoBody");
let Group17 = browser.currentScene.createNode("Group");
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "transform";
let IS19 = browser.currentScene.createNode("IS");
let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "translation";
connect20.protoField = "position";
IS19YYY.connect = new X3D.MFNode();

IS19ZZZ.connect[0] = connect20;

iS = IS19;

let Shape21 = browser.currentScene.createNode("Shape");
let Sphere22 = browser.currentScene.createNode("Sphere");
geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material24;

appearance = Appearance23;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape21;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new X3D.SFVec3f([1,0,0]);
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material28;

appearance = Appearance27;

let Text29 = browser.currentScene.createNode("Text");
Text29.string = new X3D.MFString([new X3D.SFString("Node")]);
let FontStyle30 = browser.currentScene.createNode("FontStyle");
FontStyle30.size = 5;
FontStyle30.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle30;

geometry = Text29;

Transform25YYY.child = new X3D.undefined();

Transform25ZZZ.child[0] = Shape26;

Transform18ZZZ.children[1] = Transform25;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = Transform18;

let PositionInterpolator31 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator31.DEF = "NodePosition";
PositionInterpolator31.key = new X3D.MFFloat([0,1]);
PositionInterpolator31.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Group17ZZZ.children[1] = PositionInterpolator31;

let Script32 = browser.currentScene.createNode("Script");
Script32.DEF = "MoveBall";
Script33.getField("translation").setValue("50 50 0");
Script32YYY.field = new X3D.MFNode();

Script34.getField("old")Script32YYY.field = new X3D.MFNode();

Script35.getField("set_cycle")Script32YYY.field = new X3D.MFNode();

Script36.getField("keyValue")Script32YYY.field = new X3D.MFNode();


Script32.setSourceCode(`ecmascript:\n"+
"		function set_cycle(value) {\n"+
"			old = translation;\n"+
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"			keyValue = new MFVec3f(old, translation);\n"+
"		}`)
Group17ZZZ.children[2] = Script32;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "nodeClock";
TimeSensor37.cycleInterval = 3;
TimeSensor37.loop = True;
Group17ZZZ.children[3] = TimeSensor37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "nodeClock";
ROUTE38.fromField = "cycleTime";
ROUTE38.toNode = "MoveBall";
ROUTE38.toField = "set_cycle";
Group17ZZZ.children[4] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "nodeClock";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "NodePosition";
ROUTE39.toField = "set_fraction";
Group17ZZZ.children[5] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "MoveBall";
ROUTE40.fromField = "keyValue";
ROUTE40.toNode = "NodePosition";
ROUTE40.toField = "set_keyValue";
Group17ZZZ.children[6] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "NodePosition";
ROUTE41.fromField = "value_changed";
ROUTE41.toNode = "transform";
ROUTE41.toField = "set_translation";
Group17ZZZ.children[7] = ROUTE41;

ProtoBody16YYY.children = new X3D.MFNode();

ProtoBody16ZZZ.children[0] = Group17;

protoBody = ProtoBody16;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare13;

let ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOutput" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
<Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="endA" accessType="inputOutput" type="SFVec3f"></field>
<field name="endB" accessType="inputOutput" type="SFVec3f"></field>
<IS><connect nodeField="endA" protoField="set_positionA"></connect>
<connect nodeField="endB" protoField="set_positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    spine = new MFVec3f(value, spine[1]);
                }

                function set_endB(value) {
		    spine = new MFVec3f(spine[0], value);
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine_changed" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "cyl";
ProtoInterface44.getField("set_positionA")ProtoInterface43YYY.field = new X3D.MFNode();

ProtoInterface45.getField("set_positionB")ProtoInterface43YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface43;

let ProtoBody46 = browser.currentScene.createNode("ProtoBody");
let Group47 = browser.currentScene.createNode("Group");
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material50;

appearance = Appearance49;

let Extrusion51 = browser.currentScene.createNode("Extrusion");
Extrusion51.DEF = "extrusion";
Extrusion51.creaseAngle = 0.785;
Extrusion51.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion51.spine = new X3D.MFVec3f([0,-50,0,0,0,0,0,50,0]);
geometry = Extrusion51;

Group47YYY.children = new X3D.MFNode();

Group47ZZZ.children[0] = Shape48;

let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "MoveCylinder";
Script53.getField("spine").setValue("0 -50 0 0 0 0 0 50 0");
Script52YYY.field = new X3D.MFNode();

Script54.getField("endA")Script52YYY.field = new X3D.MFNode();

Script55.getField("endB")Script52YYY.field = new X3D.MFNode();

let IS56 = browser.currentScene.createNode("IS");
let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "endA";
connect57.protoField = "set_positionA";
IS56YYY.connect = new X3D.MFNode();

IS56ZZZ.connect[0] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "endB";
connect58.protoField = "set_positionB";
IS56ZZZ.connect[1] = connect58;

iS = IS56;


Script52.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    spine = new MFVec3f(value, spine[1]);\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    spine = new MFVec3f(spine[0], value);\n"+
"                }`)
Group47ZZZ.children[1] = Script52;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "MoveCylinder";
ROUTE59.fromField = "spine_changed";
ROUTE59.toNode = "extrusion";
ROUTE59.toField = "set_spine";
Group47ZZZ.children[2] = ROUTE59;

ProtoBody46YYY.children = new X3D.MFNode();

ProtoBody46ZZZ.children[0] = Group47;

protoBody = ProtoBody46;

browser.currentScene.children[1] = ProtoDeclare42;

let Transform60 = browser.currentScene.createNode("Transform");
Transform60.DEF = "HoldsContent";
Transform60.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let PlaneSensor61 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor61.DEF = "clickGenerator";
PlaneSensor61.description = "click on background to add nodes, click on nodes to add links";
PlaneSensor61.minPosition = new X3D.SFVec2f([-50,-50]);
PlaneSensor61.maxPosition = new X3D.SFVec2f([50,50]);
Transform60YYY.children = new X3D.MFNode();

Transform60ZZZ.children[0] = PlaneSensor61;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeA";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "0 1.388333 0";
ProtoInstance62YYY.fieldValue = new X3D.MFNode();

ProtoInstance62ZZZ.fieldValue[0] = fieldValue63;

Transform60ZZZ.children[1] = ProtoInstance62;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "node";
ProtoInstance64.DEF = "nodeB";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "position";
fieldValue65.value = "0 1.388333 0";
ProtoInstance64YYY.fieldValue = new X3D.MFNode();

ProtoInstance64ZZZ.fieldValue[0] = fieldValue65;

Transform60ZZZ.children[2] = ProtoInstance64;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "node";
ProtoInstance66.DEF = "nodeC";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "position";
fieldValue67.value = "0 1.388333 0";
ProtoInstance66YYY.fieldValue = new X3D.MFNode();

ProtoInstance66ZZZ.fieldValue[0] = fieldValue67;

Transform60ZZZ.children[3] = ProtoInstance66;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "node";
ProtoInstance68.DEF = "nodeD";
let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "position";
fieldValue69.value = "0 1.388333 0";
ProtoInstance68YYY.fieldValue = new X3D.MFNode();

ProtoInstance68ZZZ.fieldValue[0] = fieldValue69;

Transform60ZZZ.children[4] = ProtoInstance68;

let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkA";
Transform60ZZZ.children[5] = ProtoInstance70;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "cyl";
ProtoInstance71.DEF = "linkB";
Transform60ZZZ.children[6] = ProtoInstance71;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "cyl";
ProtoInstance72.DEF = "linkC";
Transform60ZZZ.children[7] = ProtoInstance72;

browser.currentScene.children[2] = Transform60;

let Script73 = browser.currentScene.createNode("Script");
Script73.DEF = "clickHandler";
Script74.getField("counter")Script73YYY.field = new X3D.MFNode();

Script75.getField("node_changed")Script73YYY.field = new X3D.MFNode();

Script76.getField("add_node")Script73YYY.field = new X3D.MFNode();


Script73.setSourceCode(`ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }`)
browser.currentScene.children[3] = Script73;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "clickGenerator";
ROUTE77.fromField = "isActive";
ROUTE77.toNode = "clickHandler";
ROUTE77.toField = "add_node";
browser.currentScene.children[4] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "nodeA";
ROUTE78.fromField = "position_changed";
ROUTE78.toNode = "linkA";
ROUTE78.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "nodeB";
ROUTE79.fromField = "position_changed";
ROUTE79.toNode = "linkA";
ROUTE79.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "nodeA";
ROUTE80.fromField = "position_changed";
ROUTE80.toNode = "linkB";
ROUTE80.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "nodeC";
ROUTE81.fromField = "position_changed";
ROUTE81.toNode = "linkB";
ROUTE81.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "nodeA";
ROUTE82.fromField = "position_changed";
ROUTE82.toNode = "linkC";
ROUTE82.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "nodeD";
ROUTE83.fromField = "position_changed";
ROUTE83.toNode = "linkC";
ROUTE83.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE83;

}
main ();
