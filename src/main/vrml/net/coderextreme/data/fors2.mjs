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
scene.addMetaData("title", "fors2.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><!--comment before Sphere--><!--comment after Sphere--><!--comment after Appearance--><Sphere></Sphere>
<Appearance containerField="appearance"><!--comment before Material--><!--comment after Material--><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
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
//comment before Sphere
//comment after Sphere
//comment after Appearance
let Sphere20 = browser.currentScene.createNode("Sphere");
geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
//comment before Material
//comment after Material
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material22;

appearance = Appearance21;

Transform16YYY.child = new X3D.undefined();

Transform16ZZZ.child[0] = Shape19;

Group15YYY.children = new X3D.MFNode();

Group15ZZZ.children[0] = Transform16;

let PositionInterpolator23 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator23.DEF = "NodePosition";
PositionInterpolator23.key = new X3D.MFFloat([0,1]);
PositionInterpolator23.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Group15ZZZ.children[1] = PositionInterpolator23;

let Script24 = browser.currentScene.createNode("Script");
Script24.DEF = "MoveBall";
Script25.getField("translation").setValue("50 50 0");
Script24YYY.field = new X3D.MFNode();

Script26.getField("old").setValue("0 0 0");
Script24YYY.field = new X3D.MFNode();

Script27.getField("set_cycle")Script24YYY.field = new X3D.MFNode();

Script28.getField("keyValue")Script24YYY.field = new X3D.MFNode();


Script24.setSourceCode(`ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}`)
Group15ZZZ.children[2] = Script24;

let TimeSensor29 = browser.currentScene.createNode("TimeSensor");
TimeSensor29.DEF = "nodeClock";
TimeSensor29.cycleInterval = 3;
TimeSensor29.loop = True;
Group15ZZZ.children[3] = TimeSensor29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "nodeClock";
ROUTE30.fromField = "cycleTime";
ROUTE30.toNode = "MoveBall";
ROUTE30.toField = "set_cycle";
Group15ZZZ.children[4] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "nodeClock";
ROUTE31.fromField = "fraction_changed";
ROUTE31.toNode = "NodePosition";
ROUTE31.toField = "set_fraction";
Group15ZZZ.children[5] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "MoveBall";
ROUTE32.fromField = "keyValue";
ROUTE32.toNode = "NodePosition";
ROUTE32.toField = "keyValue";
Group15ZZZ.children[6] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "NodePosition";
ROUTE33.fromField = "value_changed";
ROUTE33.toNode = "transform";
ROUTE33.toField = "set_translation";
Group15ZZZ.children[7] = ROUTE33;

ProtoBody14YYY.children = new X3D.MFNode();

ProtoBody14ZZZ.children[0] = Group15;

protoBody = ProtoBody14;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare11;

let ProtoDeclare34 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="positionA" accessType="inputOutput" type="SFVec3f"></field>
<field name="positionB" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="endA" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="endB" accessType="inputOutput" type="SFVec3f" value="50 50 50"></field>
<IS><connect nodeField="endA" protoField="positionA"></connect>
<connect nodeField="endB" protoField="positionB"></connect>
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
ProtoDeclare34.name = "cyl";
ProtoInterface36.getField("positionA")ProtoInterface35YYY.field = new X3D.MFNode();

ProtoInterface37.getField("positionB")ProtoInterface35YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface35;

let ProtoBody38 = browser.currentScene.createNode("ProtoBody");
let Group39 = browser.currentScene.createNode("Group");
let Shape40 = browser.currentScene.createNode("Shape");
let Extrusion41 = browser.currentScene.createNode("Extrusion");
Extrusion41.DEF = "extrusion";
Extrusion41.creaseAngle = 0.785;
Extrusion41.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion41.spine = new X3D.MFVec3f([0,-50,0,0,0,0,0,50,0]);
geometry = Extrusion41;

let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material43;

appearance = Appearance42;

Group39YYY.children = new X3D.MFNode();

Group39ZZZ.children[0] = Shape40;

let Script44 = browser.currentScene.createNode("Script");
Script44.DEF = "MoveCylinder";
Script45.getField("spine").setValue("0 -50 0 0 0 0 0 50 0");
Script44YYY.field = new X3D.MFNode();

Script46.getField("endA").setValue("0 0 0");
Script44YYY.field = new X3D.MFNode();

Script47.getField("endB").setValue("50 50 50");
Script44YYY.field = new X3D.MFNode();

let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "endA";
connect49.protoField = "positionA";
IS48YYY.connect = new X3D.MFNode();

IS48ZZZ.connect[0] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "endB";
connect50.protoField = "positionB";
IS48ZZZ.connect[1] = connect50;

iS = IS48;


Script44.setSourceCode(`ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}`)
Group39ZZZ.children[1] = Script44;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "MoveCylinder";
ROUTE51.fromField = "spine";
ROUTE51.toNode = "extrusion";
ROUTE51.toField = "set_spine";
Group39ZZZ.children[2] = ROUTE51;

ProtoBody38YYY.children = new X3D.MFNode();

ProtoBody38ZZZ.children[0] = Group39;

protoBody = ProtoBody38;

browser.currentScene.children[1] = ProtoDeclare34;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "node";
ProtoInstance53.DEF = "nodeA";
let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "position";
fieldValue54.value = "-50 -50 -50";
ProtoInstance53YYY.fieldValue = new X3D.MFNode();

ProtoInstance53ZZZ.fieldValue[0] = fieldValue54;

Transform52YYY.children = new X3D.MFNode();

Transform52ZZZ.children[0] = ProtoInstance53;

let ProtoInstance55 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance55.name = "node";
ProtoInstance55.DEF = "nodeB";
let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "position";
fieldValue56.value = "50 50 50";
ProtoInstance55YYY.fieldValue = new X3D.MFNode();

ProtoInstance55ZZZ.fieldValue[0] = fieldValue56;

Transform52ZZZ.children[1] = ProtoInstance55;

let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "cyl";
ProtoInstance57.DEF = "linkA";
Transform52ZZZ.children[2] = ProtoInstance57;

browser.currentScene.children[2] = Transform52;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "nodeA";
ROUTE58.fromField = "position";
ROUTE58.toNode = "linkA";
ROUTE58.toField = "positionA";
browser.currentScene.children[3] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "nodeB";
ROUTE59.fromField = "position";
ROUTE59.toNode = "linkA";
ROUTE59.toField = "positionB";
browser.currentScene.children[4] = ROUTE59;

}
main ();
