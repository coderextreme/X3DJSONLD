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
scene.addMetaData("generator", "x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("modified", "Sat, 9 Nov 2024 19:29:39 GMT");
await browser .loadComponents (scene);
let ProtoDeclare12 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
</Appearance>
<Sphere></Sphere>
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
		    				/*
                                                var tmpkeyValue = new MFVec3f();
			    			tmpkeyValue[0] = old;
			    			tmpkeyValue[1] = translation;
                                                keyValue = tmpkeyValue;
		    				*/
                                                keyValue = new MFVec3f([old, translation]);
			    		
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
</Group>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="set_keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare12.name = "node";
ProtoInterface14.getField("position")ProtoInterface13YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface13;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Group16 = browser.currentScene.createNode("Group");
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "transform";
let IS18 = browser.currentScene.createNode("IS");
let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "translation";
connect19.protoField = "position";
IS18YYY.connect = new X3D.MFNode();

IS18ZZZ.connect[0] = connect19;

iS = IS18;

let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material22;

appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
geometry = Sphere23;

Transform17YYY.child = new X3D.undefined();

Transform17ZZZ.child[0] = Shape20;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([1,0,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material27;

appearance = Appearance26;

let Text28 = browser.currentScene.createNode("Text");
Text28.string = new X3D.MFString([new X3D.SFString("Node")]);
let FontStyle29 = browser.currentScene.createNode("FontStyle");
FontStyle29.size = 5;
FontStyle29.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle29;

geometry = Text28;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Transform17ZZZ.children[1] = Transform24;

Group16YYY.children = new X3D.MFNode();

Group16ZZZ.children[0] = Transform17;

let PositionInterpolator30 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator30.DEF = "NodePosition";
PositionInterpolator30.key = new X3D.MFFloat([0,1]);
PositionInterpolator30.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Group16ZZZ.children[1] = PositionInterpolator30;

let Script31 = browser.currentScene.createNode("Script");
Script31.DEF = "MoveBall";
Script32.getField("translation").setValue("50 50 0");
Script31YYY.field = new X3D.MFNode();

Script33.getField("old")Script31YYY.field = new X3D.MFNode();

Script34.getField("set_cycle")Script31YYY.field = new X3D.MFNode();

Script35.getField("keyValue")Script31YYY.field = new X3D.MFNode();


Script31.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"		    				/*\n"+
"                                                var tmpkeyValue = new MFVec3f();\n"+
"			    			tmpkeyValue[0] = old;\n"+
"			    			tmpkeyValue[1] = translation;\n"+
"                                                keyValue = tmpkeyValue;\n"+
"		    				*/\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"			    		\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group16ZZZ.children[2] = Script31;

let TimeSensor36 = browser.currentScene.createNode("TimeSensor");
TimeSensor36.DEF = "nodeClock";
TimeSensor36.cycleInterval = 3;
TimeSensor36.loop = True;
Group16ZZZ.children[3] = TimeSensor36;

ProtoBody15YYY.children = new X3D.MFNode();

ProtoBody15ZZZ.children[0] = Group16;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "nodeClock";
ROUTE37.fromField = "cycleTime";
ROUTE37.toNode = "MoveBall";
ROUTE37.toField = "set_cycle";
ProtoBody15ZZZ.children[1] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "nodeClock";
ROUTE38.fromField = "fraction_changed";
ROUTE38.toNode = "NodePosition";
ROUTE38.toField = "set_fraction";
ProtoBody15ZZZ.children[2] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "MoveBall";
ROUTE39.fromField = "keyValue";
ROUTE39.toNode = "NodePosition";
ROUTE39.toField = "set_keyValue";
ProtoBody15ZZZ.children[3] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "NodePosition";
ROUTE40.fromField = "value_changed";
ROUTE40.toNode = "transform";
ROUTE40.toField = "set_translation";
ProtoBody15ZZZ.children[4] = ROUTE40;

protoBody = ProtoBody15;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare12;

let ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cyl" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 1 0"></Material>
</Appearance>
<Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
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
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    	*/
		        spine = new MFVec3f([value, value]);
		    } else {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = spine[1];
			spine = tmpspine;
		        */
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		        */
		        spine = new MFVec3f([value, value]);
		    } else {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = spine[0];
			tmpspine[1] = value;
			spine = tmpspine;
		    	*/
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
</Group>
<ROUTE fromNode="MoveCylinder" fromField="spine_changed" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "cyl";
ProtoInterface43.getField("set_positionA")ProtoInterface42YYY.field = new X3D.MFNode();

ProtoInterface44.getField("set_positionB")ProtoInterface42YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface42;

let ProtoBody45 = browser.currentScene.createNode("ProtoBody");
let Group46 = browser.currentScene.createNode("Group");
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material49;

appearance = Appearance48;

let Extrusion50 = browser.currentScene.createNode("Extrusion");
Extrusion50.DEF = "extrusion";
Extrusion50.creaseAngle = 0.785;
Extrusion50.crossSection = new X3D.MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion50.spine = new X3D.MFVec3f([0,-50,0,0,50,0]);
geometry = Extrusion50;

Group46YYY.children = new X3D.MFNode();

Group46ZZZ.children[0] = Shape47;

let Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "MoveCylinder";
Script52.getField("spine").setValue("0 -50 0 0 50 0");
Script51YYY.field = new X3D.MFNode();

Script53.getField("set_endA")Script51YYY.field = new X3D.MFNode();

Script54.getField("set_endB")Script51YYY.field = new X3D.MFNode();

let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "set_endA";
connect56.protoField = "set_positionA";
IS55YYY.connect = new X3D.MFNode();

IS55ZZZ.connect[0] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "set_endB";
connect57.protoField = "set_positionB";
IS55ZZZ.connect[1] = connect57;

iS = IS55;


Script51.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    	*/\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = spine[1];\n"+
"			spine = tmpspine;\n"+
"		        */\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = value;\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		        */\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		    	/*\n"+
"		        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = spine[0];\n"+
"			tmpspine[1] = value;\n"+
"			spine = tmpspine;\n"+
"		    	*/\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
Group46ZZZ.children[1] = Script51;

ProtoBody45YYY.children = new X3D.MFNode();

ProtoBody45ZZZ.children[0] = Group46;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "MoveCylinder";
ROUTE58.fromField = "spine_changed";
ROUTE58.toNode = "extrusion";
ROUTE58.toField = "set_spine";
ProtoBody45ZZZ.children[1] = ROUTE58;

protoBody = ProtoBody45;

browser.currentScene.children[1] = ProtoDeclare41;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "HoldsContent";
Transform59.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let PlaneSensor60 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor60.DEF = "clickGenerator";
PlaneSensor60.description = "click on background to add nodes, click on nodes to add links";
PlaneSensor60.minPosition = new X3D.SFVec2f([-50,-50]);
PlaneSensor60.maxPosition = new X3D.SFVec2f([50,50]);
Transform59YYY.children = new X3D.MFNode();

Transform59ZZZ.children[0] = PlaneSensor60;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "node";
ProtoInstance61.DEF = "nodeA";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "position";
fieldValue62.value = "0 1.388333 0";
ProtoInstance61YYY.fieldValue = new X3D.MFNode();

ProtoInstance61ZZZ.fieldValue[0] = fieldValue62;

Transform59ZZZ.children[1] = ProtoInstance61;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "node";
ProtoInstance63.DEF = "nodeB";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "position";
fieldValue64.value = "0 1.388333 0";
ProtoInstance63YYY.fieldValue = new X3D.MFNode();

ProtoInstance63ZZZ.fieldValue[0] = fieldValue64;

Transform59ZZZ.children[2] = ProtoInstance63;

let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "node";
ProtoInstance65.DEF = "nodeC";
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "position";
fieldValue66.value = "0 1.388333 0";
ProtoInstance65YYY.fieldValue = new X3D.MFNode();

ProtoInstance65ZZZ.fieldValue[0] = fieldValue66;

Transform59ZZZ.children[3] = ProtoInstance65;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "node";
ProtoInstance67.DEF = "nodeD";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "position";
fieldValue68.value = "0 1.388333 0";
ProtoInstance67YYY.fieldValue = new X3D.MFNode();

ProtoInstance67ZZZ.fieldValue[0] = fieldValue68;

Transform59ZZZ.children[4] = ProtoInstance67;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "cyl";
ProtoInstance69.DEF = "linkA";
Transform59ZZZ.children[5] = ProtoInstance69;

let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "cyl";
ProtoInstance70.DEF = "linkB";
Transform59ZZZ.children[6] = ProtoInstance70;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "cyl";
ProtoInstance71.DEF = "linkC";
Transform59ZZZ.children[7] = ProtoInstance71;

browser.currentScene.children[2] = Transform59;

let Script72 = browser.currentScene.createNode("Script");
Script72.DEF = "clickHandler";
Script73.getField("counter")Script72YYY.field = new X3D.MFNode();

Script74.getField("node_changed")Script72YYY.field = new X3D.MFNode();

Script75.getField("add_node")Script72YYY.field = new X3D.MFNode();


Script72.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[3] = Script72;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromNode = "clickGenerator";
ROUTE76.fromField = "isActive";
ROUTE76.toNode = "clickHandler";
ROUTE76.toField = "add_node";
browser.currentScene.children[4] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "nodeA";
ROUTE77.fromField = "position_changed";
ROUTE77.toNode = "linkA";
ROUTE77.toField = "set_positionA";
browser.currentScene.children[5] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "nodeB";
ROUTE78.fromField = "position_changed";
ROUTE78.toNode = "linkA";
ROUTE78.toField = "set_positionB";
browser.currentScene.children[6] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromNode = "nodeA";
ROUTE79.fromField = "position_changed";
ROUTE79.toNode = "linkB";
ROUTE79.toField = "set_positionA";
browser.currentScene.children[7] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromNode = "nodeC";
ROUTE80.fromField = "position_changed";
ROUTE80.toNode = "linkB";
ROUTE80.toField = "set_positionB";
browser.currentScene.children[8] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromNode = "nodeA";
ROUTE81.fromField = "position_changed";
ROUTE81.toNode = "linkC";
ROUTE81.toField = "set_positionA";
browser.currentScene.children[9] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromNode = "nodeD";
ROUTE82.fromField = "position_changed";
ROUTE82.toNode = "linkC";
ROUTE82.toField = "set_positionB";
browser.currentScene.children[10] = ROUTE82;

}
main ();
