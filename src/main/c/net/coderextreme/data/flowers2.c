#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "flowers2.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "transcriber";
meta5.content = "John Carlson";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "23 January 2005";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "21 March 2018";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "manually written";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "license";
meta11.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[9] = meta11;

head = head1;

NavigationInfo NavigationInfo13 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo13;

Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.description = "Two mathematical orbitals";
Viewpoint14.position = new SFVec3f(new float[0,0,50]);
children[1] = Viewpoint14;

Group Group15 = createNode("Group");
DirectionalLight DirectionalLight16 = createNode("DirectionalLight");
DirectionalLight16.direction = new SFVec3f(new float[1,1,1]);
Group15.children = new MFNode();

Group15.children[0] = DirectionalLight16;

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "translation";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "-8 0 0";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "diffuseColor";
field20.accessType = "inputOutput";
field20.type = "SFColor";
field20.value = "1 0.5 0";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "specularColor";
field21.accessType = "inputOutput";
field21.type = "SFColor";
field21.value = "1 0.5 0";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "transparency";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.value = "0.75";
ProtoInterface18.field[3] = field22;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody23 = createNode("ProtoBody");
Group Group24 = createNode("Group");
TimeSensor TimeSensor25 = createNode("TimeSensor");
TimeSensor25.DEF = "Clock";
TimeSensor25.cycleInterval = 16;
TimeSensor25.loop = True;
Group24.children = new MFNode();

Group24.children[0] = TimeSensor25;

OrientationInterpolator OrientationInterpolator26 = createNode("OrientationInterpolator");
OrientationInterpolator26.DEF = "OrbitPath";
OrientationInterpolator26.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator26.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,3.14,1,0,0,6.28]);
Group24.children[1] = OrientationInterpolator26;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "OrbitTransform";
IS IS28 = createNode("IS");
connect connect29 = createNode("connect");
connect29.nodeField = "translation";
connect29.protoField = "translation";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Transform27.iS = IS28;

Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "diffuseColor";
connect34.protoField = "diffuseColor";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "specularColor";
connect35.protoField = "specularColor";
IS33.connect[1] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "transparency";
connect36.protoField = "transparency";
IS33.connect[2] = connect36;

Material32.iS = IS33;

Appearance31.material = Material32;

Shape30.appearance = Appearance31;

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.ccw = False;
IndexedFaceSet37.convex = False;
IndexedFaceSet37.coordIndex = new MFInt32(new int[0,1,2,-1]);
IndexedFaceSet37.DEF = "Orbit";
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.DEF = "OrbitCoordinates";
Coordinate38.point = new MFVec3f(new float[0,0,1,0,1,0,1,0,0]);
IndexedFaceSet37.coord = Coordinate38;

Shape30.geometry = IndexedFaceSet37;

Transform27.child = new undefined();

Transform27.child[0] = Shape30;

Group24.children[2] = Transform27;

Script Script39 = createNode("Script");
Script39.DEF = "OrbitScript";
field field40 = createNode("field");
field40.name = "set_fraction";
field40.accessType = "inputOnly";
field40.type = "SFFloat";
Script39.field = new MFNode();

Script39.field[0] = field40;

field field41 = createNode("field");
field41.name = "coordinates";
field41.accessType = "inputOutput";
field41.type = "MFVec3f";
Script39.field[1] = field41;

field field42 = createNode("field");
field42.name = "coordIndexes";
field42.accessType = "inputOutput";
field42.type = "MFInt32";
Script39.field[2] = field42;

field field43 = createNode("field");
field43.name = "e";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "5";
Script39.field[3] = field43;

field field44 = createNode("field");
field44.name = "f";
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.value = "5";
Script39.field[4] = field44;

field field45 = createNode("field");
field45.name = "g";
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.value = "5";
Script39.field[5] = field45;

field field46 = createNode("field");
field46.name = "h";
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.value = "5";
Script39.field[6] = field46;

field field47 = createNode("field");
field47.name = "resolution";
field47.accessType = "inputOutput";
field47.type = "SFInt32";
field47.value = "50";
Script39.field[7] = field47;


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
Group24.children[3] = Script39;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "OrbitScript";
ROUTE48.fromField = "coordIndexes";
ROUTE48.toNode = "Orbit";
ROUTE48.toField = "set_coordIndex";
Group24.children[4] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "OrbitScript";
ROUTE49.fromField = "coordinates";
ROUTE49.toNode = "OrbitCoordinates";
ROUTE49.toField = "point";
Group24.children[5] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "Clock";
ROUTE50.fromField = "fraction_changed";
ROUTE50.toNode = "OrbitScript";
ROUTE50.toField = "set_fraction";
Group24.children[6] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "OrbitPath";
ROUTE51.fromField = "value_changed";
ROUTE51.toNode = "OrbitTransform";
ROUTE51.toField = "rotation";
Group24.children[7] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromNode = "Clock";
ROUTE52.fromField = "fraction_changed";
ROUTE52.toNode = "OrbitPath";
ROUTE52.toField = "set_fraction";
Group24.children[8] = ROUTE52;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare17.protoBody = ProtoBody23;

Group15.children[1] = ProtoDeclare17;

ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "orbit";
fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "translation";
fieldValue54.value = "-8 0 0";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "diffuseColor";
fieldValue55.value = "1 0.5 0";
ProtoInstance53.fieldValue[1] = fieldValue55;

fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "specularColor";
fieldValue56.value = "1 0.5 0";
ProtoInstance53.fieldValue[2] = fieldValue56;

fieldValue fieldValue57 = createNode("fieldValue");
fieldValue57.name = "transparency";
fieldValue57.value = "0.75";
ProtoInstance53.fieldValue[3] = fieldValue57;

Group15.children[2] = ProtoInstance53;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "orbit";
fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "translation";
fieldValue59.value = "8 0 0";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "diffuseColor";
fieldValue60.value = "0 0.5 1";
ProtoInstance58.fieldValue[1] = fieldValue60;

fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "specularColor";
fieldValue61.value = "0 0.5 1";
ProtoInstance58.fieldValue[2] = fieldValue61;

fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "transparency";
fieldValue62.value = "0.5";
ProtoInstance58.fieldValue[3] = fieldValue62;

Group15.children[3] = ProtoInstance58;

children[2] = Group15;

}
