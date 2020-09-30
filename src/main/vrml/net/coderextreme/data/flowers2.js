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
Group4.bboxCenter = new SFVec3f(new float[0,0,0]);
Group4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
<ProtoBody><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><TimeSensor DEF="Clock" cycleInterval="16" loop="true"></TimeSensor>
<OrientationInterpolator DEF="OrbitPath" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 3.14 1 0 0 6.28"></OrientationInterpolator>
<Transform DEF="OrbitTransform" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Appearance><Material><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<!--<IndexedFaceSet DEF="Orbit" creaseAngle="0"> <Coordinate DEF="OrbitCoordinates"></Coordinate> </IndexedFaceSet>--><IndexedFaceSet containerField="geometry" ccw="false" convex="false" coordIndex="0 1 2 -1" DEF="Orbit"><Coordinate containerField="coord" DEF="OrbitCoordinates" point="0 0 1 0 1 0 1 0 0"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<ROUTE fromNode="OrbitScript" fromField="coordIndexes" toNode="Orbit" toField="coordIndex"></ROUTE>
<ROUTE fromNode="OrbitScript" fromField="coordinates" toNode="OrbitCoordinates" toField="point"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitScript" toField="set_fraction"></ROUTE>
<ROUTE fromNode="OrbitPath" fromField="value_changed" toNode="OrbitTransform" toField="rotation"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitPath" toField="set_fraction"></ROUTE>
<X3DScript DEF="OrbitScript"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="coordinates" accessType="outputOnly" type="MFVec3f"></field>
<field name="coordIndexes" accessType="outputOnly" type="MFInt32"></field>
<field name="e" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="f" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="g" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="h" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="resolution" accessType="inputOutput" type="SFInt32" value="50"></field>
</X3DScript>
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
Group13.bboxCenter = new SFVec3f(new float[0,0,0]);
Group13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform16.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform16.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "translation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Transform16.iS = IS17;

let Shape19 = browser.currentScene.createNode("Shape");
Shape19.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "OrbitScript";
ROUTE28.fromField = "coordIndexes";
ROUTE28.toNode = "Orbit";
ROUTE28.toField = "coordIndex";
Group13.children[3] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "OrbitScript";
ROUTE29.fromField = "coordinates";
ROUTE29.toNode = "OrbitCoordinates";
ROUTE29.toField = "point";
Group13.children[4] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "Clock";
ROUTE30.fromField = "fraction_changed";
ROUTE30.toNode = "OrbitScript";
ROUTE30.toField = "set_fraction";
Group13.children[5] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "OrbitPath";
ROUTE31.fromField = "value_changed";
ROUTE31.toNode = "OrbitTransform";
ROUTE31.toField = "rotation";
Group13.children[6] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "Clock";
ROUTE32.fromField = "fraction_changed";
ROUTE32.toNode = "OrbitPath";
ROUTE32.toField = "set_fraction";
Group13.children[7] = ROUTE32;

let X3DScript33 = browser.currentScene.createNode("X3DScript");
X3DScript33.DEF = "OrbitScript";
let field34 = browser.currentScene.createNode("field");
field34.name = "set_fraction";
field34.accessType = "inputOnly";
field34.type = "SFFloat";
X3DScript33.field = new MFNode();

X3DScript33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "coordinates";
field35.accessType = "outputOnly";
field35.type = "MFVec3f";
X3DScript33.field[1] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "coordIndexes";
field36.accessType = "outputOnly";
field36.type = "MFInt32";
X3DScript33.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "e";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "5";
X3DScript33.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "f";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "5";
X3DScript33.field[4] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "g";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "5";
X3DScript33.field[5] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "h";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.value = "5";
X3DScript33.field[6] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "resolution";
field41.accessType = "inputOutput";
field41.type = "SFInt32";
field41.value = "50";
X3DScript33.field[7] = field41;

Group13.x3DScript[8] = X3DScript33;

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

