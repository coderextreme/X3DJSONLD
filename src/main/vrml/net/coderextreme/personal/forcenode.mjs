const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("creator", "John W Carlson");
scene.addMetaData("created", "December 13 2015");
scene.addMetaData("title", "forcenode.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/force.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 1"><Shape><Text string="&quot;Node&quot;"><FontStyle containerField="fontStyle" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
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
                                                keyValue = new MFVec3f(...[old, translation]);
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "node";
ProtoInterface11.getField("position").setValue("0 0 0");
ProtoInterface10YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface10;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Group13 = browser.currentScene.createNode("Group");
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
let Sphere18 = browser.currentScene.createNode("Sphere");
geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material20;

appearance = Appearance19;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape17;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.translation = new X3D.SFVec3f([1,0,1]);
let Shape22 = browser.currentScene.createNode("Shape");
let Text23 = browser.currentScene.createNode("Text");
Text23.string = new X3D.MFString([new X3D.SFString("Node")]);
let FontStyle24 = browser.currentScene.createNode("FontStyle");
FontStyle24.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle24.size = 5;
fontStyle = FontStyle24;

geometry = Text23;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material26;

appearance = Appearance25;

Transform21YYY.child = new X3D.undefined();

Transform21ZZZ.child[0] = Shape22;

Transform14ZZZ.children[1] = Transform21;

Group13YYY.children = new X3D.MFNode();

Group13ZZZ.children[0] = Transform14;

let PositionInterpolator27 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator27.DEF = "NodePosition";
PositionInterpolator27.key = new X3D.MFFloat([0,1]);
PositionInterpolator27.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Group13ZZZ.children[1] = PositionInterpolator27;

let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "MoveBall";
Script29.getField("translation").setValue("50 50 0");
Script28YYY.field = new X3D.MFNode();

Script30.getField("old").setValue("0 0 0");
Script28YYY.field = new X3D.MFNode();

Script31.getField("set_cycle")Script28YYY.field = new X3D.MFNode();

Script32.getField("keyValue")Script28YYY.field = new X3D.MFNode();


Script28.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f(...[old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group13ZZZ.children[2] = Script28;

let TimeSensor33 = browser.currentScene.createNode("TimeSensor");
TimeSensor33.DEF = "nodeClock";
TimeSensor33.cycleInterval = 3;
TimeSensor33.loop = True;
Group13ZZZ.children[3] = TimeSensor33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "nodeClock";
ROUTE34.fromField = "cycleTime";
ROUTE34.toNode = "MoveBall";
ROUTE34.toField = "set_cycle";
Group13ZZZ.children[4] = ROUTE34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "fraction_changed";
ROUTE35.toNode = "NodePosition";
ROUTE35.toField = "set_fraction";
Group13ZZZ.children[5] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "MoveBall";
ROUTE36.fromField = "keyValue";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "keyValue";
Group13ZZZ.children[6] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "NodePosition";
ROUTE37.fromField = "value_changed";
ROUTE37.toNode = "transform";
ROUTE37.toField = "set_translation";
Group13ZZZ.children[7] = ROUTE37;

ProtoBody12YYY.children = new X3D.MFNode();

ProtoBody12ZZZ.children[0] = Group13;

protoBody = ProtoBody12;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare9;

let ProtoDeclare38 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="set_positionA"></connect>
<connect nodeField="set_endB" protoField="set_positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f(...[value, value]);
		    } else {
		        spine = new MFVec3f(...[value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f(...[value, value]);
		    } else {
		        spine = new MFVec3f(...[spine[0], value]);
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare38.name = "cylinder";
ProtoInterface40.getField("set_positionA")ProtoInterface39YYY.field = new X3D.MFNode();

ProtoInterface41.getField("set_positionB")ProtoInterface39YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface39;

let ProtoBody42 = browser.currentScene.createNode("ProtoBody");
let Group43 = browser.currentScene.createNode("Group");
let Shape44 = browser.currentScene.createNode("Shape");
let Extrusion45 = browser.currentScene.createNode("Extrusion");
Extrusion45.DEF = "extrusion";
Extrusion45.creaseAngle = 0.785;
Extrusion45.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion45.spine = new X3D.MFVec3f([0,-50,0,0,50,0]);
geometry = Extrusion45;

let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material47;

appearance = Appearance46;

Group43YYY.children = new X3D.MFNode();

Group43ZZZ.children[0] = Shape44;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "MoveCylinder";
Script49.getField("spine").setValue("0 -50 0 0 50 0");
Script48YYY.field = new X3D.MFNode();

Script50.getField("set_endA")Script48YYY.field = new X3D.MFNode();

Script51.getField("set_endB")Script48YYY.field = new X3D.MFNode();

let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "set_endA";
connect53.protoField = "set_positionA";
IS52YYY.connect = new X3D.MFNode();

IS52ZZZ.connect[0] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "set_endB";
connect54.protoField = "set_positionB";
IS52ZZZ.connect[1] = connect54;

iS = IS52;


Script48.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(...[value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(...[value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f(...[value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f(...[spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group43ZZZ.children[1] = Script48;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "MoveCylinder";
ROUTE55.fromField = "spine";
ROUTE55.toNode = "extrusion";
ROUTE55.toField = "set_spine";
Group43ZZZ.children[2] = ROUTE55;

ProtoBody42YYY.children = new X3D.MFNode();

ProtoBody42ZZZ.children[0] = Group43;

protoBody = ProtoBody42;

browser.currentScene.children[1] = ProtoDeclare38;

let Transform56 = browser.currentScene.createNode("Transform");
Transform56.DEF = "HoldsContent";
Transform56.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let PlaneSensor57 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor57.DEF = "clickGenerator";
PlaneSensor57.minPosition = new X3D.SFVec2f([-50,-50]);
PlaneSensor57.maxPosition = new X3D.SFVec2f([50,50]);
PlaneSensor57.description = "click on background to add nodes, click on nodes to add links";
Transform56YYY.children = new X3D.MFNode();

Transform56ZZZ.children[0] = PlaneSensor57;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "node";
ProtoInstance58.DEF = "nodeA";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "position";
fieldValue59.value = "0 0 0";
ProtoInstance58YYY.fieldValue = new X3D.MFNode();

ProtoInstance58ZZZ.fieldValue[0] = fieldValue59;

Transform56ZZZ.children[1] = ProtoInstance58;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "node";
ProtoInstance60.DEF = "nodeB";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "position";
fieldValue61.value = "50 50 50";
ProtoInstance60YYY.fieldValue = new X3D.MFNode();

ProtoInstance60ZZZ.fieldValue[0] = fieldValue61;

Transform56ZZZ.children[2] = ProtoInstance60;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "node";
ProtoInstance62.DEF = "nodeC";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "position";
fieldValue63.value = "-50 -50 -50";
ProtoInstance62YYY.fieldValue = new X3D.MFNode();

ProtoInstance62ZZZ.fieldValue[0] = fieldValue63;

Transform56ZZZ.children[3] = ProtoInstance62;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "node";
ProtoInstance64.DEF = "nodeD";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "position";
fieldValue65.value = "50 50 -50";
ProtoInstance64YYY.fieldValue = new X3D.MFNode();

ProtoInstance64ZZZ.fieldValue[0] = fieldValue65;

Transform56ZZZ.children[4] = ProtoInstance64;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "cylinder";
ProtoInstance66.DEF = "linkA";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "set_positionA";
fieldValue67.value = "0 0 0";
ProtoInstance66YYY.fieldValue = new X3D.MFNode();

ProtoInstance66ZZZ.fieldValue[0] = fieldValue67;

let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "set_positionB";
fieldValue68.value = "50 50 50";
ProtoInstance66ZZZ.fieldValue[1] = fieldValue68;

Transform56ZZZ.children[5] = ProtoInstance66;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "cylinder";
ProtoInstance69.DEF = "linkB";
let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "set_positionA";
fieldValue70.value = "0 0 0";
ProtoInstance69YYY.fieldValue = new X3D.MFNode();

ProtoInstance69ZZZ.fieldValue[0] = fieldValue70;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "set_positionB";
fieldValue71.value = "-50 -50 -50";
ProtoInstance69ZZZ.fieldValue[1] = fieldValue71;

Transform56ZZZ.children[6] = ProtoInstance69;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "cylinder";
ProtoInstance72.DEF = "linkC";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "set_positionA";
fieldValue73.value = "50 50 50";
ProtoInstance72YYY.fieldValue = new X3D.MFNode();

ProtoInstance72ZZZ.fieldValue[0] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "set_positionB";
fieldValue74.value = "50 50 -50";
ProtoInstance72ZZZ.fieldValue[1] = fieldValue74;

Transform56ZZZ.children[7] = ProtoInstance72;

browser.currentScene.children[2] = Transform56;

let Script75 = browser.currentScene.createNode("Script");
Script75.DEF = "clickHandler";
Script76.getField("counter").setValue("0");
Script75YYY.field = new X3D.MFNode();

Script77.getField("node_changed")Script75YYY.field = new X3D.MFNode();

Script78.getField("add_node").setValue("false");
Script75YYY.field = new X3D.MFNode();

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script75.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[3] = Script75;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "clickGenerator";
ROUTE79.fromField = "isActive";
ROUTE79.toNode = "clickHandler";
ROUTE79.toField = "add_node";
browser.currentScene.children[4] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "nodeA";
ROUTE80.fromField = "position";
ROUTE80.toNode = "linkA";
ROUTE80.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "nodeB";
ROUTE81.fromField = "position";
ROUTE81.toNode = "linkA";
ROUTE81.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "nodeA";
ROUTE82.fromField = "position";
ROUTE82.toNode = "linkB";
ROUTE82.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "nodeC";
ROUTE83.fromField = "position";
ROUTE83.toNode = "linkB";
ROUTE83.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "nodeA";
ROUTE84.fromField = "position";
ROUTE84.toNode = "linkC";
ROUTE84.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "nodeD";
ROUTE85.fromField = "position";
ROUTE85.toNode = "linkC";
ROUTE85.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE85;

}
main ();
