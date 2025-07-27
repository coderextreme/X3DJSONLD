const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene.addMetaData("title", "flowers2.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("transcriber", "John Carlson");
scene.addMetaData("created", "23 January 2005");
scene.addMetaData("modified", "21 March 2018");
scene.addMetaData("description", "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers2.x3d");
scene.addMetaData("generator", "manually written");
scene.addMetaData("license", "https://coderextreme.net/X3DJSONLD/LICENSE");
await browser .loadComponents (scene);
let NavigationInfo13 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.description = "Two mathematical orbitals";
Viewpoint14.position = new X3D.SFVec3f([0,0,50]);
browser.currentScene.children[1] = Viewpoint14;

let Group15 = browser.currentScene.createNode("Group");
let DirectionalLight16 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight16.direction = new X3D.SFVec3f([1,1,1]);
Group15YYY.children = new X3D.MFNode();

Group15ZZZ.children[0] = DirectionalLight16;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="orbit" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="-8 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0.5 0"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="1 0.5 0"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0.75"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="Clock" cycleInterval="16" loop="true"></TimeSensor>
<OrientationInterpolator DEF="OrbitPath" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 3.14 1 0 0 6.28"></OrientationInterpolator>
<Transform DEF="OrbitTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Appearance containerField="appearance"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<!--<IndexedFaceSet DEF="Orbit" creaseAngle="0"> <Coordinate DEF="OrbitCoordinates"></Coordinate> </IndexedFaceSet>--><IndexedFaceSet ccw="false" convex="false" coordIndex="0 1 2 -1" DEF="Orbit"><Coordinate DEF="OrbitCoordinates" point="0 0 1 0 1 0 1 0 0"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<Script DEF="OrbitScript"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="coordinates" accessType="inputOutput" type="MFVec3f"></field>
<field name="coordIndexes" accessType="inputOutput" type="MFInt32"></field>
<field name="e" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="f" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="g" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="h" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="resolution" accessType="inputOutput" type="SFInt32" value="50"></field>
<![CDATA[ecmascript:

			function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
			}

			function set_fraction(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					e += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 1:
					f += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 2:
					g += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 3:
					h += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				}
				if (e < 1) {
					f = 10;
				}
				if (f < 1) {
					f = 10;
				}
				if (g < 1) {
					g = 4;
				}
				if (h < 1) {
					h = 4;
				}
				generateCoordinates();
			}]]></Script>
<ROUTE fromNode="OrbitScript" fromField="coordIndexes" toNode="Orbit" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="OrbitScript" fromField="coordinates" toNode="OrbitCoordinates" toField="point"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitScript" toField="set_fraction"></ROUTE>
<ROUTE fromNode="OrbitPath" fromField="value_changed" toNode="OrbitTransform" toField="rotation"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitPath" toField="set_fraction"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "orbit";
ProtoInterface19.getField("translation").setValue("-8 0 0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface20.getField("diffuseColor").setValue("1 0.5 0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface21.getField("specularColor").setValue("1 0.5 0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface22.getField("transparency").setValue("0.75");
ProtoInterface18YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface18;

let ProtoBody23 = browser.currentScene.createNode("ProtoBody");
let Group24 = browser.currentScene.createNode("Group");
let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "Clock";
TimeSensor25.cycleInterval = 16;
TimeSensor25.loop = True;
Group24YYY.children = new X3D.MFNode();

Group24ZZZ.children[0] = TimeSensor25;

let OrientationInterpolator26 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator26.DEF = "OrbitPath";
OrientationInterpolator26.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator26.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,3.14,1,0,0,6.28]);
Group24ZZZ.children[1] = OrientationInterpolator26;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "OrbitTransform";
let IS28 = browser.currentScene.createNode("IS");
let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "translation";
connect29.protoField = "translation";
IS28YYY.connect = new X3D.MFNode();

IS28ZZZ.connect[0] = connect29;

iS = IS28;

let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "diffuseColor";
connect34.protoField = "diffuseColor";
IS33YYY.connect = new X3D.MFNode();

IS33ZZZ.connect[0] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "specularColor";
connect35.protoField = "specularColor";
IS33ZZZ.connect[1] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "transparency";
connect36.protoField = "transparency";
IS33ZZZ.connect[2] = connect36;

iS = IS33;

material = Material32;

appearance = Appearance31;

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.ccw = False;
IndexedFaceSet37.convex = False;
IndexedFaceSet37.coordIndex = new X3D.MFInt32([0,1,2,-1]);
IndexedFaceSet37.DEF = "Orbit";
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.DEF = "OrbitCoordinates";
Coordinate38.point = new X3D.MFVec3f([0,0,1,0,1,0,1,0,0]);
coord = Coordinate38;

geometry = IndexedFaceSet37;

Transform27YYY.child = new X3D.undefined();

Transform27ZZZ.child[0] = Shape30;

Group24ZZZ.children[2] = Transform27;

let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "OrbitScript";
Script40.getField("set_fraction")Script39YYY.field = new X3D.MFNode();

Script41.getField("coordinates")Script39YYY.field = new X3D.MFNode();

Script42.getField("coordIndexes")Script39YYY.field = new X3D.MFNode();

Script43.getField("e").setValue("5");
Script39YYY.field = new X3D.MFNode();

Script44.getField("f").setValue("5");
Script39YYY.field = new X3D.MFNode();

Script45.getField("g").setValue("5");
Script39YYY.field = new X3D.MFNode();

Script46.getField("h").setValue("5");
Script39YYY.field = new X3D.MFNode();

Script47.getField("resolution").setValue("50");
Script39YYY.field = new X3D.MFNode();


Script39.setSourceCode(`ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}`)
Group24ZZZ.children[3] = Script39;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "OrbitScript";
ROUTE48.fromField = "coordIndexes";
ROUTE48.toNode = "Orbit";
ROUTE48.toField = "set_coordIndex";
Group24ZZZ.children[4] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "OrbitScript";
ROUTE49.fromField = "coordinates";
ROUTE49.toNode = "OrbitCoordinates";
ROUTE49.toField = "point";
Group24ZZZ.children[5] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "Clock";
ROUTE50.fromField = "fraction_changed";
ROUTE50.toNode = "OrbitScript";
ROUTE50.toField = "set_fraction";
Group24ZZZ.children[6] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "OrbitPath";
ROUTE51.fromField = "value_changed";
ROUTE51.toNode = "OrbitTransform";
ROUTE51.toField = "rotation";
Group24ZZZ.children[7] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "Clock";
ROUTE52.fromField = "fraction_changed";
ROUTE52.toNode = "OrbitPath";
ROUTE52.toField = "set_fraction";
Group24ZZZ.children[8] = ROUTE52;

ProtoBody23YYY.children = new X3D.MFNode();

ProtoBody23ZZZ.children[0] = Group24;

protoBody = ProtoBody23;

Group15ZZZ.children[1] = ProtoDeclare17;

let ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "orbit";
let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "translation";
fieldValue54.value = "-8 0 0";
ProtoInstance53YYY.fieldValue = new X3D.MFNode();

ProtoInstance53ZZZ.fieldValue[0] = fieldValue54;

let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "diffuseColor";
fieldValue55.value = "1 0.5 0";
ProtoInstance53ZZZ.fieldValue[1] = fieldValue55;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "specularColor";
fieldValue56.value = "1 0.5 0";
ProtoInstance53ZZZ.fieldValue[2] = fieldValue56;

let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "transparency";
fieldValue57.value = "0.75";
ProtoInstance53ZZZ.fieldValue[3] = fieldValue57;

Group15ZZZ.children[2] = ProtoInstance53;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "orbit";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "translation";
fieldValue59.value = "8 0 0";
ProtoInstance58YYY.fieldValue = new X3D.MFNode();

ProtoInstance58ZZZ.fieldValue[0] = fieldValue59;

let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "diffuseColor";
fieldValue60.value = "0 0.5 1";
ProtoInstance58ZZZ.fieldValue[1] = fieldValue60;

let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "specularColor";
fieldValue61.value = "0 0.5 1";
ProtoInstance58ZZZ.fieldValue[2] = fieldValue61;

let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "transparency";
fieldValue62.value = "0.5";
ProtoInstance58ZZZ.fieldValue[3] = fieldValue62;

Group15ZZZ.children[3] = ProtoInstance58;

browser.currentScene.children[2] = Group15;

}
main ();
