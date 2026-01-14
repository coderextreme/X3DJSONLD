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
await browser .loadComponents (scene);
let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Text string="&quot;Node&quot;"><FontStyle containerField="fontStyle" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
</Text>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0 1"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
<PositionInterpolator DEF="NodePosition" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MoveBall"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
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
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "node";
ProtoInterface13.getField("position").setValue("0 0 0");
ProtoInterface12YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface12;

let ProtoBody14 = browser.currentScene.createNode("ProtoBody");
let Group15 = browser.currentScene.createNode("Group");
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "transform";
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "position";
IS17YYY.connect = new X3D.MFNode();

IS17ZZZ.connect[0] = connect18;

iS = IS17;

let Shape19 = browser.currentScene.createNode("Shape");
let Sphere20 = browser.currentScene.createNode("Sphere");
geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material22;

appearance = Appearance21;

Transform16YYY.child = new X3D.undefined();

Transform16ZZZ.child[0] = Shape19;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new X3D.SFVec3f([1,0,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Text25 = browser.currentScene.createNode("Text");
Text25.string = new X3D.MFString([new X3D.SFString("Node")]);
let FontStyle26 = browser.currentScene.createNode("FontStyle");
FontStyle26.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle26.size = 5;
fontStyle = FontStyle26;

geometry = Text25;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material28;

appearance = Appearance27;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Transform16ZZZ.children[1] = Transform23;

Group15YYY.children = new X3D.MFNode();

Group15ZZZ.children[0] = Transform16;

let PositionInterpolator29 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator29.DEF = "NodePosition";
PositionInterpolator29.key = new X3D.MFFloat([0,1]);
PositionInterpolator29.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Group15ZZZ.children[1] = PositionInterpolator29;

let Script30 = browser.currentScene.createNode("Script");
Script30.DEF = "MoveBall";
Script31.getField("translation").setValue("50 50 0");
Script30YYY.field = new X3D.MFNode();

Script32.getField("old").setValue("0 0 0");
Script30YYY.field = new X3D.MFNode();

Script33.getField("set_cycle")Script30YYY.field = new X3D.MFNode();

Script34.getField("keyValue")Script30YYY.field = new X3D.MFNode();


Script30.setSourceCode(`ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}`)
Group15ZZZ.children[2] = Script30;

let TimeSensor35 = browser.currentScene.createNode("TimeSensor");
TimeSensor35.DEF = "nodeClock";
TimeSensor35.cycleInterval = 3;
TimeSensor35.loop = True;
Group15ZZZ.children[3] = TimeSensor35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "cycleTime";
ROUTE36.toNode = "MoveBall";
ROUTE36.toField = "set_cycle";
Group15ZZZ.children[4] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "nodeClock";
ROUTE37.fromField = "fraction_changed";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "set_fraction";
Group15ZZZ.children[5] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "MoveBall";
ROUTE38.fromField = "keyValue";
ROUTE38.toNode = "NodePosition";
ROUTE38.toField = "keyValue";
Group15ZZZ.children[6] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "NodePosition";
ROUTE39.fromField = "value_changed";
ROUTE39.toNode = "transform";
ROUTE39.toField = "set_translation";
Group15ZZZ.children[7] = ROUTE39;

ProtoBody14YYY.children = new X3D.MFNode();

ProtoBody14ZZZ.children[0] = Group15;

protoBody = ProtoBody14;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let ProtoDeclare40 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_positionB" accessType="inputOutput" type="SFVec3f" value="50 50 50"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="endA" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="endB" accessType="inputOutput" type="SFVec3f" value="50 50 50"></field>
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
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare40.name = "cyl";
ProtoInterface42.getField("set_positionA").setValue("0 0 0");
ProtoInterface41YYY.field = new X3D.MFNode();

ProtoInterface43.getField("set_positionB").setValue("50 50 50");
ProtoInterface41YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface41;

let ProtoBody44 = browser.currentScene.createNode("ProtoBody");
let Group45 = browser.currentScene.createNode("Group");
let Shape46 = browser.currentScene.createNode("Shape");
let Extrusion47 = browser.currentScene.createNode("Extrusion");
Extrusion47.DEF = "extrusion";
Extrusion47.creaseAngle = 0.785;
Extrusion47.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion47.spine = new X3D.MFVec3f([0,-50,0,0,0,0,0,50,0]);
geometry = Extrusion47;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material49;

appearance = Appearance48;

Group45YYY.children = new X3D.MFNode();

Group45ZZZ.children[0] = Shape46;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "MoveCylinder";
Script51.getField("spine").setValue("0 -50 0 0 0 0 0 50 0");
Script50YYY.field = new X3D.MFNode();

Script52.getField("endA").setValue("0 0 0");
Script50YYY.field = new X3D.MFNode();

Script53.getField("endB").setValue("50 50 50");
Script50YYY.field = new X3D.MFNode();

let IS54 = browser.currentScene.createNode("IS");
let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "endA";
connect55.protoField = "set_positionA";
IS54YYY.connect = new X3D.MFNode();

IS54ZZZ.connect[0] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "endB";
connect56.protoField = "set_positionB";
IS54ZZZ.connect[1] = connect56;

iS = IS54;


Script50.setSourceCode(`ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}`)
Group45ZZZ.children[1] = Script50;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "MoveCylinder";
ROUTE57.fromField = "spine";
ROUTE57.toNode = "extrusion";
ROUTE57.toField = "set_spine";
Group45ZZZ.children[2] = ROUTE57;

ProtoBody44YYY.children = new X3D.MFNode();

ProtoBody44ZZZ.children[0] = Group45;

protoBody = ProtoBody44;

browser.currentScene.children[1] = ProtoDeclare40;

let Transform58 = browser.currentScene.createNode("Transform");
Transform58.DEF = "HoldsContent";
Transform58.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let PlaneSensor59 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor59.DEF = "clickGenerator";
PlaneSensor59.minPosition = new X3D.SFVec2f([-50,-50]);
PlaneSensor59.maxPosition = new X3D.SFVec2f([50,50]);
PlaneSensor59.description = "click on background to add nodes, click on nodes to add links";
Transform58YYY.children = new X3D.MFNode();

Transform58ZZZ.children[0] = PlaneSensor59;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "node";
ProtoInstance60.DEF = "nodeA";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "position";
fieldValue61.value = "0 0 0";
ProtoInstance60YYY.fieldValue = new X3D.MFNode();

ProtoInstance60ZZZ.fieldValue[0] = fieldValue61;

Transform58ZZZ.children[1] = ProtoInstance60;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeB";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "50 50 50";
ProtoInstance62YYY.fieldValue = new X3D.MFNode();

ProtoInstance62ZZZ.fieldValue[0] = fieldValue63;

Transform58ZZZ.children[2] = ProtoInstance62;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "node";
ProtoInstance64.DEF = "nodeC";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "position";
fieldValue65.value = "-50 -50 -50";
ProtoInstance64YYY.fieldValue = new X3D.MFNode();

ProtoInstance64ZZZ.fieldValue[0] = fieldValue65;

Transform58ZZZ.children[3] = ProtoInstance64;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "node";
ProtoInstance66.DEF = "nodeD";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "position";
fieldValue67.value = "50 50 -50";
ProtoInstance66YYY.fieldValue = new X3D.MFNode();

ProtoInstance66ZZZ.fieldValue[0] = fieldValue67;

Transform58ZZZ.children[4] = ProtoInstance66;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "cyl";
ProtoInstance68.DEF = "linkA";
Transform58ZZZ.children[5] = ProtoInstance68;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "cyl";
ProtoInstance69.DEF = "linkB";
Transform58ZZZ.children[6] = ProtoInstance69;

let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkC";
Transform58ZZZ.children[7] = ProtoInstance70;

browser.currentScene.children[2] = Transform58;

let Script71 = browser.currentScene.createNode("Script");
Script71.DEF = "clickHandler";
Script72.getField("counter").setValue("0");
Script71YYY.field = new X3D.MFNode();

Script73.getField("add_node").setValue("false");
Script71YYY.field = new X3D.MFNode();

//<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/> <field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script71.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[3] = Script71;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromNode = "clickGenerator";
ROUTE74.fromField = "isActive";
ROUTE74.toNode = "clickHandler";
ROUTE74.toField = "add_node";
browser.currentScene.children[4] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromNode = "nodeA";
ROUTE75.fromField = "position";
ROUTE75.toNode = "linkA";
ROUTE75.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "nodeB";
ROUTE76.fromField = "position";
ROUTE76.toNode = "linkA";
ROUTE76.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "nodeA";
ROUTE77.fromField = "position";
ROUTE77.toNode = "linkB";
ROUTE77.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "nodeC";
ROUTE78.fromField = "position";
ROUTE78.toNode = "linkB";
ROUTE78.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "nodeA";
ROUTE79.fromField = "position";
ROUTE79.toNode = "linkC";
ROUTE79.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "nodeD";
ROUTE80.fromField = "position";
ROUTE80.toNode = "linkC";
ROUTE80.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE80;

}
main ();
