let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "flowers2.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "transcriber";
meta5.content = "John Carlson";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "23 January 2005";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "21 March 2018";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "description";
meta8.content = "2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "identifier";
meta9.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "manually written";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "license";
meta11.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[9] = meta11;

head = head1;

let NavigationInfo13 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.description = "Two mathematical orbitals";
Viewpoint14.position = new SFVec3f(new float[0,0,50]);
browser.currentScene.children[1] = Viewpoint14;

let Group15 = browser.currentScene.createNode("Group");
let DirectionalLight16 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight16.direction = new SFVec3f(new float[1,1,1]);
Group15.children = new MFNode();

Group15.children[0] = DirectionalLight16;

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
<#sourceCode/>
</Script>
<ROUTE fromNode="OrbitScript" fromField="coordIndexes" toNode="Orbit" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="OrbitScript" fromField="coordinates" toNode="OrbitCoordinates" toField="point"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitScript" toField="set_fraction"></ROUTE>
<ROUTE fromNode="OrbitPath" fromField="value_changed" toNode="OrbitTransform" toField="rotation"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitPath" toField="set_fraction"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "orbit";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
let field19 = browser.currentScene.createNode("field");
field19.name = "translation";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "-8 0 0";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "diffuseColor";
field20.accessType = "inputOutput";
field20.type = "SFColor";
field20.value = "1 0.5 0";
ProtoInterface18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "specularColor";
field21.accessType = "inputOutput";
field21.type = "SFColor";
field21.value = "1 0.5 0";
ProtoInterface18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "transparency";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.value = "0.75";
ProtoInterface18.field[3] = field22;

ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody23 = browser.currentScene.createNode("ProtoBody");
let Group24 = browser.currentScene.createNode("Group");
let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "Clock";
TimeSensor25.cycleInterval = 16;
TimeSensor25.loop = True;
Group24.children = new MFNode();

Group24.children[0] = TimeSensor25;

let OrientationInterpolator26 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator26.DEF = "OrbitPath";
OrientationInterpolator26.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator26.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,3.14,1,0,0,6.28]);
Group24.children[1] = OrientationInterpolator26;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "OrbitTransform";
let IS28 = browser.currentScene.createNode("IS");
let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "translation";
connect29.protoField = "translation";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Transform27.iS = IS28;

let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "diffuseColor";
connect34.protoField = "diffuseColor";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "specularColor";
connect35.protoField = "specularColor";
IS33.connect[1] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "transparency";
connect36.protoField = "transparency";
IS33.connect[2] = connect36;

Material32.iS = IS33;

Appearance31.material = Material32;

Shape30.appearance = Appearance31;

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.ccw = False;
IndexedFaceSet37.convex = False;
IndexedFaceSet37.coordIndex = new MFInt32(new int[0,1,2,-1]);
IndexedFaceSet37.DEF = "Orbit";
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.DEF = "OrbitCoordinates";
Coordinate38.point = new MFVec3f(new float[0,0,1,0,1,0,1,0,0]);
IndexedFaceSet37.coord = Coordinate38;

Shape30.geometry = IndexedFaceSet37;

Transform27.children = new MFNode();

Transform27.children[0] = Shape30;

Group24.children[2] = Transform27;

let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "OrbitScript";
let field40 = browser.currentScene.createNode("field");
field40.name = "set_fraction";
field40.accessType = "inputOnly";
field40.type = "SFFloat";
Script39.field = new MFNode();

Script39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "coordinates";
field41.accessType = "outputOnly";
field41.type = "MFVec3f";
Script39.field[1] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "coordIndexes";
field42.accessType = "outputOnly";
field42.type = "MFInt32";
Script39.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "e";
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.value = "5";
Script39.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "f";
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.value = "5";
Script39.field[4] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "g";
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.value = "5";
Script39.field[5] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "h";
field46.accessType = "inputOutput";
field46.type = "SFFloat";
field46.value = "5";
Script39.field[6] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "resolution";
field47.accessType = "inputOutput";
field47.type = "SFInt32";
field47.value = "50";
Script39.field[7] = field47;

let #sourceCode48 = browser.currentScene.createNode("#sourceCode");
Script39.#sourceCode[8] = #sourceCode48;

Group24.children[3] = Script39;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "OrbitScript";
ROUTE49.fromField = "coordIndexes";
ROUTE49.toNode = "Orbit";
ROUTE49.toField = "set_coordIndex";
Group24.children[4] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "OrbitScript";
ROUTE50.fromField = "coordinates";
ROUTE50.toNode = "OrbitCoordinates";
ROUTE50.toField = "point";
Group24.children[5] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "Clock";
ROUTE51.fromField = "fraction_changed";
ROUTE51.toNode = "OrbitScript";
ROUTE51.toField = "set_fraction";
Group24.children[6] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "OrbitPath";
ROUTE52.fromField = "value_changed";
ROUTE52.toNode = "OrbitTransform";
ROUTE52.toField = "rotation";
Group24.children[7] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "Clock";
ROUTE53.fromField = "fraction_changed";
ROUTE53.toNode = "OrbitPath";
ROUTE53.toField = "set_fraction";
Group24.children[8] = ROUTE53;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare17.protoBody = ProtoBody23;

Group15.children[1] = ProtoDeclare17;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "orbit";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "translation";
fieldValue55.value = "-8 0 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "diffuseColor";
fieldValue56.value = "1 0.5 0";
ProtoInstance54.fieldValue[1] = fieldValue56;

let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "specularColor";
fieldValue57.value = "1 0.5 0";
ProtoInstance54.fieldValue[2] = fieldValue57;

let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "transparency";
fieldValue58.value = "0.75";
ProtoInstance54.fieldValue[3] = fieldValue58;

Group15.children[2] = ProtoInstance54;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "orbit";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "translation";
fieldValue60.value = "8 0 0";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "diffuseColor";
fieldValue61.value = "0 0.5 1";
ProtoInstance59.fieldValue[1] = fieldValue61;

let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "specularColor";
fieldValue62.value = "0 0.5 1";
ProtoInstance59.fieldValue[2] = fieldValue62;

let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "transparency";
fieldValue63.value = "0.5";
ProtoInstance59.fieldValue[3] = fieldValue63;

Group15.children[3] = ProtoInstance59;

browser.currentScene.children[2] = Group15;

