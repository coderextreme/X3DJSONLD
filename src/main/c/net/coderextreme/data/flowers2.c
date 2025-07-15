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
meta5.name = "created";
meta5.content = "23 January 2005";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "9 November 2024";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "generator";
meta9.content = "manually written";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[8] = meta10;

head = head1;

NavigationInfo NavigationInfo12 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo12;

Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.description = "Two mathematical orbitals";
Viewpoint13.position = new SFVec3f(new float[0,0,50]);
children[1] = Viewpoint13;

Group Group14 = createNode("Group");
DirectionalLight DirectionalLight15 = createNode("DirectionalLight");
DirectionalLight15.direction = new SFVec3f(new float[1,1,1]);
Group14.children = new MFNode();

Group14.children[0] = DirectionalLight15;

ProtoDeclare ProtoDeclare16 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
<!--<IndexedFaceSet DEF="Orbit"> <Coordinate DEF="OrbitCoordinates"></Coordinate> </IndexedFaceSet>--><IndexedFaceSet ccw="false" convex="false" coordIndex="0 1 2 -1" DEF="Orbit"><Coordinate DEF="OrbitCoordinates" point="0 0 1 0 1 0 1 0 0"></Coordinate>
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
ProtoInterface ProtoInterface17 = createNode("ProtoInterface");
field field18 = createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "-8 0 0";
ProtoInterface17.field = new MFNode();

ProtoInterface17.field[0] = field18;

field field19 = createNode("field");
field19.name = "diffuseColor";
field19.accessType = "inputOutput";
field19.type = "SFColor";
field19.value = "1 0.5 0";
ProtoInterface17.field[1] = field19;

field field20 = createNode("field");
field20.name = "specularColor";
field20.accessType = "inputOutput";
field20.type = "SFColor";
field20.value = "1 0.5 0";
ProtoInterface17.field[2] = field20;

field field21 = createNode("field");
field21.name = "transparency";
field21.accessType = "inputOutput";
field21.type = "SFFloat";
field21.value = "0.75";
ProtoInterface17.field[3] = field21;

ProtoDeclare16.protoInterface = ProtoInterface17;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Group Group23 = createNode("Group");
TimeSensor TimeSensor24 = createNode("TimeSensor");
TimeSensor24.DEF = "Clock";
TimeSensor24.cycleInterval = 16;
TimeSensor24.loop = True;
Group23.children = new MFNode();

Group23.children[0] = TimeSensor24;

OrientationInterpolator OrientationInterpolator25 = createNode("OrientationInterpolator");
OrientationInterpolator25.DEF = "OrbitPath";
OrientationInterpolator25.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator25.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,3.14,1,0,0,6.28]);
Group23.children[1] = OrientationInterpolator25;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "OrbitTransform";
IS IS27 = createNode("IS");
connect connect28 = createNode("connect");
connect28.nodeField = "translation";
connect28.protoField = "translation";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

Transform26.iS = IS27;

Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
IS IS32 = createNode("IS");
connect connect33 = createNode("connect");
connect33.nodeField = "diffuseColor";
connect33.protoField = "diffuseColor";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

connect connect34 = createNode("connect");
connect34.nodeField = "specularColor";
connect34.protoField = "specularColor";
IS32.connect[1] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "transparency";
connect35.protoField = "transparency";
IS32.connect[2] = connect35;

Material31.iS = IS32;

Appearance30.material = Material31;

Shape29.appearance = Appearance30;

//<IndexedFaceSet DEF=\"Orbit\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet IndexedFaceSet36 = createNode("IndexedFaceSet");
IndexedFaceSet36.ccw = False;
IndexedFaceSet36.convex = False;
IndexedFaceSet36.coordIndex = new MFInt32(new int[0,1,2,-1]);
IndexedFaceSet36.DEF = "Orbit";
Coordinate Coordinate37 = createNode("Coordinate");
Coordinate37.DEF = "OrbitCoordinates";
Coordinate37.point = new MFVec3f(new float[0,0,1,0,1,0,1,0,0]);
IndexedFaceSet36.coord = Coordinate37;

Shape29.geometry = IndexedFaceSet36;

Transform26.child = new undefined();

Transform26.child[0] = Shape29;

Group23.children[2] = Transform26;

Script Script38 = createNode("Script");
Script38.DEF = "OrbitScript";
field field39 = createNode("field");
field39.name = "set_fraction";
field39.accessType = "inputOnly";
field39.type = "SFFloat";
Script38.field = new MFNode();

Script38.field[0] = field39;

field field40 = createNode("field");
field40.name = "coordinates";
field40.accessType = "inputOutput";
field40.type = "MFVec3f";
Script38.field[1] = field40;

field field41 = createNode("field");
field41.name = "coordIndexes";
field41.accessType = "inputOutput";
field41.type = "MFInt32";
Script38.field[2] = field41;

field field42 = createNode("field");
field42.name = "e";
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.value = "5";
Script38.field[3] = field42;

field field43 = createNode("field");
field43.name = "f";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "5";
Script38.field[4] = field43;

field field44 = createNode("field");
field44.name = "g";
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.value = "5";
Script38.field[5] = field44;

field field45 = createNode("field");
field45.name = "h";
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.value = "5";
Script38.field[6] = field45;

field field46 = createNode("field");
field46.name = "resolution";
field46.accessType = "inputOutput";
field46.type = "SFInt32";
field46.value = "50";
Script38.field[7] = field46;


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
Group23.children[3] = Script38;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "OrbitScript";
ROUTE47.fromField = "coordIndexes";
ROUTE47.toNode = "Orbit";
ROUTE47.toField = "set_coordIndex";
Group23.children[4] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "OrbitScript";
ROUTE48.fromField = "coordinates";
ROUTE48.toNode = "OrbitCoordinates";
ROUTE48.toField = "point";
Group23.children[5] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Clock";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "OrbitScript";
ROUTE49.toField = "set_fraction";
Group23.children[6] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "OrbitPath";
ROUTE50.fromField = "value_changed";
ROUTE50.toNode = "OrbitTransform";
ROUTE50.toField = "rotation";
Group23.children[7] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "Clock";
ROUTE51.fromField = "fraction_changed";
ROUTE51.toNode = "OrbitPath";
ROUTE51.toField = "set_fraction";
Group23.children[8] = ROUTE51;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare16.protoBody = ProtoBody22;

Group14.children[1] = ProtoDeclare16;

ProtoInstance ProtoInstance52 = createNode("ProtoInstance");
ProtoInstance52.name = "orbit";
fieldValue fieldValue53 = createNode("fieldValue");
fieldValue53.name = "translation";
fieldValue53.value = "-8 0 0";
ProtoInstance52.fieldValue = new MFNode();

ProtoInstance52.fieldValue[0] = fieldValue53;

fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "diffuseColor";
fieldValue54.value = "1 0.5 0";
ProtoInstance52.fieldValue[1] = fieldValue54;

fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "specularColor";
fieldValue55.value = "1 0.5 0";
ProtoInstance52.fieldValue[2] = fieldValue55;

fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "transparency";
fieldValue56.value = "0.75";
ProtoInstance52.fieldValue[3] = fieldValue56;

Group14.children[2] = ProtoInstance52;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "orbit";
fieldValue fieldValue58 = createNode("fieldValue");
fieldValue58.name = "translation";
fieldValue58.value = "8 0 0";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "diffuseColor";
fieldValue59.value = "0 0.5 1";
ProtoInstance57.fieldValue[1] = fieldValue59;

fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "specularColor";
fieldValue60.value = "0 0.5 1";
ProtoInstance57.fieldValue[2] = fieldValue60;

fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "transparency";
fieldValue61.value = "0.5";
ProtoInstance57.fieldValue[3] = fieldValue61;

Group14.children[3] = ProtoInstance57;

children[2] = Group14;

}
