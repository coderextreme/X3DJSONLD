const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("creator", "John W Carlson");
scene.addMetaData("created", "December 13 2015");
scene.addMetaData("modified", "April 18 2017");
scene.addMetaData("title", "fors2.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
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
                                                keyValue = new MFVec3f([old, translation]);
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "node";
ProtoInterface12.getField("position").setValue("0 0 0");
ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "transform";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "position";
IS15YYY.connect = new X3D.MFNode();

IS15ZZZ.connect[0] = connect16;

iS = IS15;

let Shape17 = browser.currentScene.createNode("Shape");
//comment before Sphere
//comment after Sphere
//comment after Appearance
let Sphere18 = browser.currentScene.createNode("Sphere");
geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
//comment before Material
//comment after Material
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material20;

appearance = Appearance19;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape17;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Transform14;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "NodePosition";
PositionInterpolator21.key = new X3D.MFFloat([0,1]);
PositionInterpolator21.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
ProtoBody13ZZZ.children[1] = PositionInterpolator21;

let Script22 = browser.currentScene.createNode("Script");
Script22.DEF = "MoveBall";
Script23.getField("translation").setValue("50 50 0");
Script22YYY.field = new X3D.MFNode();

Script24.getField("old").setValue("0 0 0");
Script22YYY.field = new X3D.MFNode();

Script25.getField("set_cycle")Script22YYY.field = new X3D.MFNode();

Script26.getField("keyValue")Script22YYY.field = new X3D.MFNode();


Script22.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody13ZZZ.children[2] = Script22;

let TimeSensor27 = browser.currentScene.createNode("TimeSensor");
TimeSensor27.DEF = "nodeClock";
TimeSensor27.cycleInterval = 3;
TimeSensor27.loop = True;
ProtoBody13ZZZ.children[3] = TimeSensor27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "nodeClock";
ROUTE28.fromField = "cycleTime";
ROUTE28.toNode = "MoveBall";
ROUTE28.toField = "set_cycle";
ProtoBody13ZZZ.children[4] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "nodeClock";
ROUTE29.fromField = "fraction_changed";
ROUTE29.toNode = "NodePosition";
ROUTE29.toField = "set_fraction";
ProtoBody13ZZZ.children[5] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "MoveBall";
ROUTE30.fromField = "keyValue";
ROUTE30.toNode = "NodePosition";
ROUTE30.toField = "keyValue";
ProtoBody13ZZZ.children[6] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "NodePosition";
ROUTE31.fromField = "value_changed";
ROUTE31.toNode = "transform";
ROUTE31.toField = "set_translation";
ProtoBody13ZZZ.children[7] = ROUTE31;

protoBody = ProtoBody13;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let ProtoDeclare32 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="positionA"></connect>
<connect nodeField="set_endB" protoField="positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
		    Browser.print('\n'+'"');
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare32.name = "cyl";
ProtoInterface34.getField("positionA")ProtoInterface33YYY.field = new X3D.MFNode();

ProtoInterface35.getField("positionB")ProtoInterface33YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface33;

let ProtoBody36 = browser.currentScene.createNode("ProtoBody");
let Shape37 = browser.currentScene.createNode("Shape");
let Extrusion38 = browser.currentScene.createNode("Extrusion");
Extrusion38.DEF = "extrusion";
Extrusion38.creaseAngle = 0.785;
Extrusion38.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion38.spine = new X3D.MFVec3f([0,-50,0,0,0,0,0,50,0]);
geometry = Extrusion38;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material40;

appearance = Appearance39;

ProtoBody36YYY.children = new X3D.MFNode();

ProtoBody36ZZZ.children[0] = Shape37;

let Script41 = browser.currentScene.createNode("Script");
Script41.DEF = "MoveCylinder";
Script42.getField("spine").setValue("0 -50 0 0 0 0 0 50 0");
Script41YYY.field = new X3D.MFNode();

Script43.getField("set_endA")Script41YYY.field = new X3D.MFNode();

Script44.getField("set_endB")Script41YYY.field = new X3D.MFNode();

let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "set_endA";
connect46.protoField = "positionA";
IS45YYY.connect = new X3D.MFNode();

IS45ZZZ.connect[0] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "set_endB";
connect47.protoField = "positionB";
IS45ZZZ.connect[1] = connect47;

iS = IS45;


Script41.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody36ZZZ.children[1] = Script41;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "MoveCylinder";
ROUTE48.fromField = "spine";
ROUTE48.toNode = "extrusion";
ROUTE48.toField = "set_spine";
ProtoBody36ZZZ.children[2] = ROUTE48;

protoBody = ProtoBody36;

browser.currentScene.children[1] = ProtoDeclare32;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let ProtoInstance50 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance50.name = "node";
ProtoInstance50.DEF = "nodeA";
let fieldValue51 = browser.currentScene.createNode("fieldValue");
fieldValue51.name = "position";
fieldValue51.value = "-50 -50 -50";
ProtoInstance50YYY.fieldValue = new X3D.MFNode();

ProtoInstance50ZZZ.fieldValue[0] = fieldValue51;

Transform49YYY.children = new X3D.MFNode();

Transform49ZZZ.children[0] = ProtoInstance50;

let ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "node";
ProtoInstance52.DEF = "nodeB";
let fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "position";
fieldValue53.value = "50 50 50";
ProtoInstance52YYY.fieldValue = new X3D.MFNode();

ProtoInstance52ZZZ.fieldValue[0] = fieldValue53;

Transform49ZZZ.children[1] = ProtoInstance52;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "cyl";
ProtoInstance54.DEF = "linkA";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "positionA";
fieldValue55.value = "0 0 0";
ProtoInstance54YYY.fieldValue = new X3D.MFNode();

ProtoInstance54ZZZ.fieldValue[0] = fieldValue55;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "positionB";
fieldValue56.value = "50 50 50";
ProtoInstance54ZZZ.fieldValue[1] = fieldValue56;

Transform49ZZZ.children[2] = ProtoInstance54;

browser.currentScene.children[2] = Transform49;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "nodeA";
ROUTE57.fromField = "position";
ROUTE57.toNode = "linkA";
ROUTE57.toField = "positionA";
browser.currentScene.children[3] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "nodeB";
ROUTE58.fromField = "position";
ROUTE58.toNode = "linkA";
ROUTE58.toField = "positionB";
browser.currentScene.children[4] = ROUTE58;

}
main ();
