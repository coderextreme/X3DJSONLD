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
scene.addMetaData("created", "23 January 2005");
scene.addMetaData("modified", "9 November 2024");
scene.addMetaData("description", "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d");
scene.addMetaData("generator", "manually written");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
await browser .loadComponents (scene);
let NavigationInfo12 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.description = "Two mathematical orbitals";
Viewpoint13.position = new X3D.SFVec3f([0,0,50]);
browser.currentScene.children[1] = Viewpoint13;

let Group14 = browser.currentScene.createNode("Group");
let DirectionalLight15 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight15.direction = new X3D.SFVec3f([1,1,1]);
Group14YYY.children = new X3D.MFNode();

Group14ZZZ.children[0] = DirectionalLight15;

let ProtoDeclare16 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare16.name = "orbit";
ProtoInterface18.getField("translation").setValue("-8 0 0");
ProtoInterface17YYY.field = new X3D.MFNode();

ProtoInterface19.getField("diffuseColor").setValue("1 0.5 0");
ProtoInterface17YYY.field = new X3D.MFNode();

ProtoInterface20.getField("specularColor").setValue("1 0.5 0");
ProtoInterface17YYY.field = new X3D.MFNode();

ProtoInterface21.getField("transparency").setValue("0.75");
ProtoInterface17YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface17;

let ProtoBody22 = browser.currentScene.createNode("ProtoBody");
let Group23 = browser.currentScene.createNode("Group");
let TimeSensor24 = browser.currentScene.createNode("TimeSensor");
TimeSensor24.DEF = "Clock";
TimeSensor24.cycleInterval = 16;
TimeSensor24.loop = True;
Group23YYY.children = new X3D.MFNode();

Group23ZZZ.children[0] = TimeSensor24;

let OrientationInterpolator25 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator25.DEF = "OrbitPath";
OrientationInterpolator25.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator25.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,3.14,1,0,0,6.28]);
Group23ZZZ.children[1] = OrientationInterpolator25;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "OrbitTransform";
let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "translation";
connect28.protoField = "translation";
IS27YYY.connect = new X3D.MFNode();

IS27ZZZ.connect[0] = connect28;

iS = IS27;

let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
let IS32 = browser.currentScene.createNode("IS");
let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "diffuseColor";
connect33.protoField = "diffuseColor";
IS32YYY.connect = new X3D.MFNode();

IS32ZZZ.connect[0] = connect33;

let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "specularColor";
connect34.protoField = "specularColor";
IS32ZZZ.connect[1] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "transparency";
connect35.protoField = "transparency";
IS32ZZZ.connect[2] = connect35;

iS = IS32;

material = Material31;

appearance = Appearance30;

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.ccw = False;
IndexedFaceSet36.convex = False;
IndexedFaceSet36.coordIndex = new X3D.MFInt32([0,1,2,-1]);
IndexedFaceSet36.DEF = "Orbit";
let Coordinate37 = browser.currentScene.createNode("Coordinate");
Coordinate37.DEF = "OrbitCoordinates";
Coordinate37.point = new X3D.MFVec3f([0,0,1,0,1,0,1,0,0]);
coord = Coordinate37;

geometry = IndexedFaceSet36;

Transform26YYY.child = new X3D.undefined();

Transform26ZZZ.child[0] = Shape29;

Group23ZZZ.children[2] = Transform26;

let Script38 = browser.currentScene.createNode("Script");
Script38.DEF = "OrbitScript";
Script39.getField("set_fraction")Script38YYY.field = new X3D.MFNode();

Script40.getField("coordinates")Script38YYY.field = new X3D.MFNode();

Script41.getField("coordIndexes")Script38YYY.field = new X3D.MFNode();

Script42.getField("e").setValue("5");
Script38YYY.field = new X3D.MFNode();

Script43.getField("f").setValue("5");
Script38YYY.field = new X3D.MFNode();

Script44.getField("g").setValue("5");
Script38YYY.field = new X3D.MFNode();

Script45.getField("h").setValue("5");
Script38YYY.field = new X3D.MFNode();

Script46.getField("resolution").setValue("50");
Script38YYY.field = new X3D.MFNode();


Script38.setSourceCode(`ecmascript:\n"+
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
Group23ZZZ.children[3] = Script38;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "OrbitScript";
ROUTE47.fromField = "coordIndexes";
ROUTE47.toNode = "Orbit";
ROUTE47.toField = "set_coordIndex";
Group23ZZZ.children[4] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "OrbitScript";
ROUTE48.fromField = "coordinates";
ROUTE48.toNode = "OrbitCoordinates";
ROUTE48.toField = "point";
Group23ZZZ.children[5] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "Clock";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "OrbitScript";
ROUTE49.toField = "set_fraction";
Group23ZZZ.children[6] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "OrbitPath";
ROUTE50.fromField = "value_changed";
ROUTE50.toNode = "OrbitTransform";
ROUTE50.toField = "rotation";
Group23ZZZ.children[7] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "Clock";
ROUTE51.fromField = "fraction_changed";
ROUTE51.toNode = "OrbitPath";
ROUTE51.toField = "set_fraction";
Group23ZZZ.children[8] = ROUTE51;

ProtoBody22YYY.children = new X3D.MFNode();

ProtoBody22ZZZ.children[0] = Group23;

protoBody = ProtoBody22;

Group14ZZZ.children[1] = ProtoDeclare16;

let ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "orbit";
let fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "translation";
fieldValue53.value = "-8 0 0";
ProtoInstance52YYY.fieldValue = new X3D.MFNode();

ProtoInstance52ZZZ.fieldValue[0] = fieldValue53;

let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "diffuseColor";
fieldValue54.value = "1 0.5 0";
ProtoInstance52ZZZ.fieldValue[1] = fieldValue54;

let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "specularColor";
fieldValue55.value = "1 0.5 0";
ProtoInstance52ZZZ.fieldValue[2] = fieldValue55;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "transparency";
fieldValue56.value = "0.75";
ProtoInstance52ZZZ.fieldValue[3] = fieldValue56;

Group14ZZZ.children[2] = ProtoInstance52;

let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "orbit";
let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "translation";
fieldValue58.value = "8 0 0";
ProtoInstance57YYY.fieldValue = new X3D.MFNode();

ProtoInstance57ZZZ.fieldValue[0] = fieldValue58;

let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "diffuseColor";
fieldValue59.value = "0 0.5 1";
ProtoInstance57ZZZ.fieldValue[1] = fieldValue59;

let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "specularColor";
fieldValue60.value = "0 0.5 1";
ProtoInstance57ZZZ.fieldValue[2] = fieldValue60;

let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "transparency";
fieldValue61.value = "0.5";
ProtoInstance57ZZZ.fieldValue[3] = fieldValue61;

Group14ZZZ.children[3] = ProtoInstance57;

browser.currentScene.children[2] = Group14;

}
main ();
