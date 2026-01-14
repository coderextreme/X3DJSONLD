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
scene.addMetaData("title", "force.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
scene.addMetaData("description", "beginnings of a force directed graph in 3D");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
                                                var tmpkeyValue = new MFVec3f();
			    			tmpkeyValue[0] = old;
			    			tmpkeyValue[1] = translation;
                                                keyValue = tmpkeyValue;
			    		
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
ProtoDeclare10.name = "node";
ProtoInterface12.getField("position").setValue("0 0 0");
ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Group14 = browser.currentScene.createNode("Group");
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "transform";
let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "position";
IS16YYY.connect = new X3D.MFNode();

IS16ZZZ.connect[0] = connect17;

iS = IS16;

let Shape18 = browser.currentScene.createNode("Shape");
let Sphere19 = browser.currentScene.createNode("Sphere");
geometry = Sphere19;

let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material21;

appearance = Appearance20;

Transform15YYY.child = new X3D.undefined();

Transform15ZZZ.child[0] = Shape18;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new X3D.SFVec3f([1,0,0]);
let Shape23 = browser.currentScene.createNode("Shape");
let Text24 = browser.currentScene.createNode("Text");
Text24.string = new X3D.MFString([new X3D.SFString("Node")]);
let FontStyle25 = browser.currentScene.createNode("FontStyle");
FontStyle25.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle25.size = 5;
fontStyle = FontStyle25;

geometry = Text24;

let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material27;

appearance = Appearance26;

Transform22YYY.child = new X3D.undefined();

Transform22ZZZ.child[0] = Shape23;

Transform15ZZZ.children[1] = Transform22;

Group14YYY.children = new X3D.MFNode();

Group14ZZZ.children[0] = Transform15;

let PositionInterpolator28 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator28.DEF = "NodePosition";
PositionInterpolator28.key = new X3D.MFFloat([0,1]);
PositionInterpolator28.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Group14ZZZ.children[1] = PositionInterpolator28;

let Script29 = browser.currentScene.createNode("Script");
Script29.DEF = "MoveBall";
Script30.getField("translation").setValue("50 50 0");
Script29YYY.field = new X3D.MFNode();

Script31.getField("old").setValue("0 0 0");
Script29YYY.field = new X3D.MFNode();

Script32.getField("set_cycle")Script29YYY.field = new X3D.MFNode();

Script33.getField("keyValue")Script29YYY.field = new X3D.MFNode();


Script29.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group14ZZZ.children[2] = Script29;

let TimeSensor34 = browser.currentScene.createNode("TimeSensor");
TimeSensor34.DEF = "nodeClock";
TimeSensor34.cycleInterval = 3;
TimeSensor34.loop = True;
Group14ZZZ.children[3] = TimeSensor34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "nodeClock";
ROUTE35.fromField = "cycleTime";
ROUTE35.toNode = "MoveBall";
ROUTE35.toField = "set_cycle";
Group14ZZZ.children[4] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "nodeClock";
ROUTE36.fromField = "fraction_changed";
ROUTE36.toNode = "NodePosition";
ROUTE36.toField = "set_fraction";
Group14ZZZ.children[5] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "MoveBall";
ROUTE37.fromField = "keyValue";
ROUTE37.toNode = "NodePosition";
ROUTE37.toField = "keyValue";
Group14ZZZ.children[6] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "NodePosition";
ROUTE38.fromField = "value_changed";
ROUTE38.toNode = "transform";
ROUTE38.toField = "set_translation";
Group14ZZZ.children[7] = ROUTE38;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Group14;

protoBody = ProtoBody13;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let ProtoDeclare39 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
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
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    } else {
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = spine[1];
			spine = tmpspine;
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    } else {
		        var tmpspine = new MFVec3f();
			tmpspine[0] = spine[0];
			tmpspine[1] = value;
			spine = tmpspine;
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare39.name = "cyl";
ProtoInterface41.getField("set_positionA")ProtoInterface40YYY.field = new X3D.MFNode();

ProtoInterface42.getField("set_positionB")ProtoInterface40YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface40;

let ProtoBody43 = browser.currentScene.createNode("ProtoBody");
let Group44 = browser.currentScene.createNode("Group");
let Shape45 = browser.currentScene.createNode("Shape");
let Extrusion46 = browser.currentScene.createNode("Extrusion");
Extrusion46.DEF = "extrusion";
Extrusion46.creaseAngle = 0.785;
Extrusion46.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion46.spine = new X3D.MFVec3f([0,-50,0,0,50,0]);
geometry = Extrusion46;

let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material48;

appearance = Appearance47;

Group44YYY.children = new X3D.MFNode();

Group44ZZZ.children[0] = Shape45;

let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "MoveCylinder";
Script50.getField("spine").setValue("0 -50 0 0 50 0");
Script49YYY.field = new X3D.MFNode();

Script51.getField("set_endA")Script49YYY.field = new X3D.MFNode();

Script52.getField("set_endB")Script49YYY.field = new X3D.MFNode();

let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "set_endA";
connect54.protoField = "set_positionA";
IS53YYY.connect = new X3D.MFNode();

IS53ZZZ.connect[0] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "set_endB";
connect55.protoField = "set_positionB";
IS53ZZZ.connect[1] = connect55;

iS = IS53;


Script49.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    } else {\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group44ZZZ.children[1] = Script49;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "MoveCylinder";
ROUTE56.fromField = "spine";
ROUTE56.toNode = "extrusion";
ROUTE56.toField = "set_spine";
Group44ZZZ.children[2] = ROUTE56;

ProtoBody43YYY.children = new X3D.MFNode();

ProtoBody43ZZZ.children[0] = Group44;

protoBody = ProtoBody43;

browser.currentScene.children[1] = ProtoDeclare39;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.DEF = "HoldsContent";
Transform57.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let PlaneSensor58 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor58.DEF = "clickGenerator";
PlaneSensor58.minPosition = new X3D.SFVec2f([-50,-50]);
PlaneSensor58.maxPosition = new X3D.SFVec2f([50,50]);
PlaneSensor58.description = "click on background to add nodes, click on nodes to add links";
Transform57YYY.children = new X3D.MFNode();

Transform57ZZZ.children[0] = PlaneSensor58;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "node";
ProtoInstance59.DEF = "nodeA";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "position";
fieldValue60.value = "0 0 0";
ProtoInstance59YYY.fieldValue = new X3D.MFNode();

ProtoInstance59ZZZ.fieldValue[0] = fieldValue60;

Transform57ZZZ.children[1] = ProtoInstance59;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "node";
ProtoInstance61.DEF = "nodeB";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "position";
fieldValue62.value = "50 50 50";
ProtoInstance61YYY.fieldValue = new X3D.MFNode();

ProtoInstance61ZZZ.fieldValue[0] = fieldValue62;

Transform57ZZZ.children[2] = ProtoInstance61;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "node";
ProtoInstance63.DEF = "nodeC";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "position";
fieldValue64.value = "-50 -50 -50";
ProtoInstance63YYY.fieldValue = new X3D.MFNode();

ProtoInstance63ZZZ.fieldValue[0] = fieldValue64;

Transform57ZZZ.children[3] = ProtoInstance63;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "node";
ProtoInstance65.DEF = "nodeD";
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "position";
fieldValue66.value = "50 50 -50";
ProtoInstance65YYY.fieldValue = new X3D.MFNode();

ProtoInstance65ZZZ.fieldValue[0] = fieldValue66;

Transform57ZZZ.children[4] = ProtoInstance65;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "cyl";
ProtoInstance67.DEF = "linkA";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "set_positionA";
fieldValue68.value = "0 0 0";
ProtoInstance67YYY.fieldValue = new X3D.MFNode();

ProtoInstance67ZZZ.fieldValue[0] = fieldValue68;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "set_positionB";
fieldValue69.value = "50 50 50";
ProtoInstance67ZZZ.fieldValue[1] = fieldValue69;

Transform57ZZZ.children[5] = ProtoInstance67;

let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkB";
let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "set_positionA";
fieldValue71.value = "0 0 0";
ProtoInstance70YYY.fieldValue = new X3D.MFNode();

ProtoInstance70ZZZ.fieldValue[0] = fieldValue71;

let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "set_positionB";
fieldValue72.value = "-50 -50 -50";
ProtoInstance70ZZZ.fieldValue[1] = fieldValue72;

Transform57ZZZ.children[6] = ProtoInstance70;

let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "cyl";
ProtoInstance73.DEF = "linkC";
let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "set_positionA";
fieldValue74.value = "50 50 50";
ProtoInstance73YYY.fieldValue = new X3D.MFNode();

ProtoInstance73ZZZ.fieldValue[0] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "set_positionB";
fieldValue75.value = "50 50 -50";
ProtoInstance73ZZZ.fieldValue[1] = fieldValue75;

Transform57ZZZ.children[7] = ProtoInstance73;

browser.currentScene.children[2] = Transform57;

let Script76 = browser.currentScene.createNode("Script");
Script76.DEF = "clickHandler";
Script77.getField("counter").setValue("0");
Script76YYY.field = new X3D.MFNode();

Script78.getField("node_changed")Script76YYY.field = new X3D.MFNode();

Script79.getField("add_node").setValue("false");
Script76YYY.field = new X3D.MFNode();

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script76.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[3] = Script76;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "clickGenerator";
ROUTE80.fromField = "isActive";
ROUTE80.toNode = "clickHandler";
ROUTE80.toField = "add_node";
browser.currentScene.children[4] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "nodeA";
ROUTE81.fromField = "position";
ROUTE81.toNode = "linkA";
ROUTE81.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "nodeB";
ROUTE82.fromField = "position";
ROUTE82.toNode = "linkA";
ROUTE82.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromNode = "nodeA";
ROUTE83.fromField = "position";
ROUTE83.toNode = "linkB";
ROUTE83.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromNode = "nodeC";
ROUTE84.fromField = "position";
ROUTE84.toNode = "linkB";
ROUTE84.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "nodeA";
ROUTE85.fromField = "position";
ROUTE85.toNode = "linkC";
ROUTE85.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "nodeD";
ROUTE86.fromField = "position";
ROUTE86.toNode = "linkC";
ROUTE86.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE86;

}
main ();
