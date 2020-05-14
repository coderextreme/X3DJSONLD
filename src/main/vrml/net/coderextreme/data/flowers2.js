let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Two mathematical orbitals";
Viewpoint3.position = new SFVec3f(new float[0,0,50]);
browser.currentScene.children[1] = Viewpoint3;

let Group4 = browser.currentScene.createNode("Group");
let DirectionalLight5 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight5.direction = new SFVec3f(new float[1,1,1]);
Group4.children = new MFNode();

Group4.children[0] = DirectionalLight5;

let ProtoDeclare6 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="orbit" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="-8 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0.5 0"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="1 0.5 0"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0.75"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="Clock" cycleInterval="16" loop="true"></TimeSensor>
<OrientationInterpolator DEF="OrbitPath" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 3.14 1 0 0 6.28"></OrientationInterpolator>
<Transform DEF="OrbitTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Appearance><Material><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<!--<IndexedFaceSet DEF="Orbit" creaseAngle="0"> <Coordinate DEF="OrbitCoordinates"></Coordinate> </IndexedFaceSet>--><IndexedFaceSet containerField="geometry" ccw="false" convex="false" coordIndex="0 1 2 -1" DEF="Orbit"><Coordinate containerField="coord" DEF="OrbitCoordinates" point="0 0 1 0 1 0 1 0 0"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<Script DEF="OrbitScript"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="coordinates" accessType="outputOnly" type="MFVec3f"></field>
<field name="coordIndexes" accessType="outputOnly" type="MFInt32"></field>
<field name="e" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="f" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="g" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="h" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="resolution" accessType="inputOutput" type="SFInt32" value="50"></field>
<![CDATA[ecmascript:

			var e = 5;
			var f = 5;
			var g = 5;
			var h = 5;
			var resolution = 100;

			function initialize() {
			     generateCoordinates();
			     var localci = [];
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     localci.push(i*resolution+j);
				     localci.push(i*resolution+j+1);
				     localci.push((i+1)*resolution+j+1);
				     localci.push((i+1)*resolution+j);
				     localci.push(-1);
				}
			    }
			    coordIndexes = new MFInt32(localci);
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var localc = [];
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					localc.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
			     }
			     
			     coordinates = new MFVec3f(localc);
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
<ROUTE fromNode="OrbitScript" fromField="coordIndexes" toNode="Orbit" toField="coordIndex"></ROUTE>
<ROUTE fromNode="OrbitScript" fromField="coordinates" toNode="OrbitCoordinates" toField="point"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitScript" toField="set_fraction"></ROUTE>
<ROUTE fromNode="OrbitPath" fromField="value_changed" toNode="OrbitTransform" toField="rotation"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitPath" toField="set_fraction"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare6.name = "orbit";
let ProtoInterface7 = browser.currentScene.createNode("ProtoInterface");
let field8 = browser.currentScene.createNode("field");
field8.name = "translation";
field8.accessType = "inputOutput";
field8.type = "SFVec3f";
field8.value = "-8 0 0";
ProtoInterface7.field = new MFNode();

ProtoInterface7.field[0] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "diffuseColor";
field9.accessType = "inputOutput";
field9.type = "SFColor";
field9.value = "1 0.5 0";
ProtoInterface7.field[1] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "specularColor";
field10.accessType = "inputOutput";
field10.type = "SFColor";
field10.value = "1 0.5 0";
ProtoInterface7.field[2] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "transparency";
field11.accessType = "inputOutput";
field11.type = "SFFloat";
field11.value = "0.75";
ProtoInterface7.field[3] = field11;

ProtoDeclare6.protoInterface = ProtoInterface7;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Group13 = browser.currentScene.createNode("Group");
let TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "Clock";
TimeSensor14.cycleInterval = 16;
TimeSensor14.loop = True;
Group13.children = new MFNode();

Group13.children[0] = TimeSensor14;

let OrientationInterpolator15 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator15.DEF = "OrbitPath";
OrientationInterpolator15.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator15.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,3.14,1,0,0,6.28]);
Group13.children[1] = OrientationInterpolator15;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "OrbitTransform";
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "translation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Transform16.iS = IS17;

let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
let IS22 = browser.currentScene.createNode("IS");
let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "diffuseColor";
connect23.protoField = "diffuseColor";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

let connect24 = browser.currentScene.createNode("connect");
connect24.nodeField = "specularColor";
connect24.protoField = "specularColor";
IS22.connect[1] = connect24;

let connect25 = browser.currentScene.createNode("connect");
connect25.nodeField = "transparency";
connect25.protoField = "transparency";
IS22.connect[2] = connect25;

Material21.iS = IS22;

Appearance20.material = Material21;

Shape19.appearance = Appearance20;

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
let IndexedFaceSet26 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet26.ccw = False;
IndexedFaceSet26.convex = False;
IndexedFaceSet26.coordIndex = new MFInt32(new int[0,1,2,-1]);
IndexedFaceSet26.DEF = "Orbit";
let Coordinate27 = browser.currentScene.createNode("Coordinate");
Coordinate27.DEF = "OrbitCoordinates";
Coordinate27.point = new MFVec3f(new float[0,0,1,0,1,0,1,0,0]);
IndexedFaceSet26.coord = Coordinate27;

Shape19.geometry = IndexedFaceSet26;

Transform16.children = new MFNode();

Transform16.children[0] = Shape19;

Group13.children[2] = Transform16;

let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "OrbitScript";
let field29 = browser.currentScene.createNode("field");
field29.name = "set_fraction";
field29.accessType = "inputOnly";
field29.type = "SFFloat";
Script28.field = new MFNode();

Script28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "coordinates";
field30.accessType = "outputOnly";
field30.type = "MFVec3f";
Script28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "coordIndexes";
field31.accessType = "outputOnly";
field31.type = "MFInt32";
Script28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "e";
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.value = "5";
Script28.field[3] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "f";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "5";
Script28.field[4] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "g";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "5";
Script28.field[5] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "h";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "5";
Script28.field[6] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "resolution";
field36.accessType = "inputOutput";
field36.type = "SFInt32";
field36.value = "50";
Script28.field[7] = field36;


Script28.setSourceCode(`ecmascript:\n"+
"\n"+
"			var e = 5;\n"+
"			var f = 5;\n"+
"			var g = 5;\n"+
"			var h = 5;\n"+
"			var resolution = 100;\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var localci = [];\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     localci.push(i*resolution+j);\n"+
"				     localci.push(i*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j);\n"+
"				     localci.push(-1);\n"+
"				}\n"+
"			    }\n"+
"			    coordIndexes = new MFInt32(localci);\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var localc = [];\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					localc.push(new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					));\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			     \n"+
"			     coordinates = new MFVec3f(localc);\n"+
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
Group13.children[3] = Script28;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "OrbitScript";
ROUTE37.fromField = "coordIndexes";
ROUTE37.toNode = "Orbit";
ROUTE37.toField = "coordIndex";
Group13.children[4] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "OrbitScript";
ROUTE38.fromField = "coordinates";
ROUTE38.toNode = "OrbitCoordinates";
ROUTE38.toField = "point";
Group13.children[5] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "Clock";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "OrbitScript";
ROUTE39.toField = "set_fraction";
Group13.children[6] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "OrbitPath";
ROUTE40.fromField = "value_changed";
ROUTE40.toNode = "OrbitTransform";
ROUTE40.toField = "rotation";
Group13.children[7] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "Clock";
ROUTE41.fromField = "fraction_changed";
ROUTE41.toNode = "OrbitPath";
ROUTE41.toField = "set_fraction";
Group13.children[8] = ROUTE41;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare6.protoBody = ProtoBody12;

Group4.children[1] = ProtoDeclare6;

let ProtoInstance42 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance42.name = "orbit";
let fieldValue43 = browser.currentScene.createNode("fieldValue");
fieldValue43.name = "translation";
fieldValue43.value = "-8 0 0";
ProtoInstance42.fieldValue = new MFNode();

ProtoInstance42.fieldValue[0] = fieldValue43;

let fieldValue44 = browser.currentScene.createNode("fieldValue");
fieldValue44.name = "diffuseColor";
fieldValue44.value = "1 0.5 0";
ProtoInstance42.fieldValue[1] = fieldValue44;

let fieldValue45 = browser.currentScene.createNode("fieldValue");
fieldValue45.name = "specularColor";
fieldValue45.value = "1 0.5 0";
ProtoInstance42.fieldValue[2] = fieldValue45;

let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "transparency";
fieldValue46.value = "0.75";
ProtoInstance42.fieldValue[3] = fieldValue46;

Group4.children[2] = ProtoInstance42;

let ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "orbit";
let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "translation";
fieldValue48.value = "8 0 0";
ProtoInstance47.fieldValue = new MFNode();

ProtoInstance47.fieldValue[0] = fieldValue48;

let fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "diffuseColor";
fieldValue49.value = "0 0.5 1";
ProtoInstance47.fieldValue[1] = fieldValue49;

let fieldValue50 = browser.currentScene.createNode("fieldValue");
fieldValue50.name = "specularColor";
fieldValue50.value = "0 0.5 1";
ProtoInstance47.fieldValue[2] = fieldValue50;

let fieldValue51 = browser.currentScene.createNode("fieldValue");
fieldValue51.name = "transparency";
fieldValue51.value = "0.5";
ProtoInstance47.fieldValue[3] = fieldValue51;

Group4.children[3] = ProtoInstance47;

browser.currentScene.children[2] = Group4;

