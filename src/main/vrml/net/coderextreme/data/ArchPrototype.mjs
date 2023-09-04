let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ArchPrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Michele Foti, Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "15 December 2014";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "27 November 2015";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "ArchModelingDiagrams.pdf";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://en.wikipedia.org/wiki/Arch";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "identifier";
meta10.content = "http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "generator";
meta11.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[9] = meta11;

head = head1;

let ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArchPrototype" ><ProtoInterface><field accessType="inputOutput" type="SFColor" name="diffuseColor" value="0.2 0.8 0.8"></field>
<field accessType="inputOutput" type="SFColor" name="emissiveColor" value="0.2 0.8 0.8"></field>
<field accessType="initializeOnly" type="SFFloat" name="clearSpanWidth" value="4"></field>
<field accessType="initializeOnly" type="SFFloat" name="riseHeight" value="2"></field>
<field accessType="initializeOnly" type="SFFloat" name="depth" value="3"></field>
<field accessType="initializeOnly" type="SFFloat" name="topAbutmentHeight" value="0.5"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierWidth" value="0.5"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierHeight" value="1"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalf"></field>
<field accessType="initializeOnly" type="SFFloat" name="archHalfExtensionWidth"></field>
<field accessType="initializeOnly" type="SFBool" name="onlyIntrados"></field>
<field accessType="initializeOnly" type="SFBool" name="archFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalfFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="lintel"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="ArchTransform"><Shape DEF="Arch"><Appearance><Material DEF="MaterialNode"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
</IS>
</Material>
</Appearance>
<IndexedFaceSet DEF="ArchIndex" solid="false" convex="false"><Coordinate containerField="coord" DEF="ArchChord"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<Script DEF="ArchPrototypeScript" url="&quot;../node/ArchPrototypeScript.js&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js&quot;"><field accessType="initializeOnly" type="SFFloat" name="clearSpanWidth"></field>
<field accessType="initializeOnly" type="SFFloat" name="riseHeight"></field>
<field accessType="initializeOnly" type="SFFloat" name="depth"></field>
<field accessType="initializeOnly" type="SFFloat" name="topAbutmentHeight"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierWidth"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierHeight"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalf"></field>
<field accessType="initializeOnly" type="SFFloat" name="archHalfExtensionWidth"></field>
<field accessType="initializeOnly" type="SFBool" name="onlyIntrados"></field>
<field accessType="initializeOnly" type="SFBool" name="archFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalfFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="lintel"></field>
<field accessType="outputOnly" type="SFVec3f" name="computedScale"></field>
<field accessType="outputOnly" type="MFVec3f" name="pointOut"></field>
<field accessType="outputOnly" type="MFInt32" name="indexOut"></field>
<IS><connect nodeField="clearSpanWidth" protoField="clearSpanWidth"></connect>
<connect nodeField="riseHeight" protoField="riseHeight"></connect>
<connect nodeField="depth" protoField="depth"></connect>
<connect nodeField="topAbutmentHeight" protoField="topAbutmentHeight"></connect>
<connect nodeField="pierWidth" protoField="pierWidth"></connect>
<connect nodeField="pierHeight" protoField="pierHeight"></connect>
<connect nodeField="archHalf" protoField="archHalf"></connect>
<connect nodeField="archHalfExtensionWidth" protoField="archHalfExtensionWidth"></connect>
<connect nodeField="onlyIntrados" protoField="onlyIntrados"></connect>
<connect nodeField="archFilled" protoField="archFilled"></connect>
<connect nodeField="archHalfFilled" protoField="archHalfFilled"></connect>
<connect nodeField="lintel" protoField="lintel"></connect>
</IS>
</Script>
<ROUTE fromNode="ArchPrototypeScript" fromField="computedScale" toNode="ArchTransform" toField="scale"></ROUTE>
<ROUTE fromNode="ArchPrototypeScript" fromField="pointOut" toNode="ArchChord" toField="point"></ROUTE>
<ROUTE fromNode="ArchPrototypeScript" fromField="indexOut" toNode="ArchIndex" toField="set_coordIndex"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "ArchPrototype";
let ProtoInterface14 = browser.currentScene.createNode("ProtoInterface");
let field15 = browser.currentScene.createNode("field");
field15.accessType = "inputOutput";
field15.type = "SFColor";
field15.name = "diffuseColor";
field15.value = "0.2 0.8 0.8";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

let field16 = browser.currentScene.createNode("field");
field16.accessType = "inputOutput";
field16.type = "SFColor";
field16.name = "emissiveColor";
field16.value = "0.2 0.8 0.8";
ProtoInterface14.field[1] = field16;

let field17 = browser.currentScene.createNode("field");
field17.accessType = "initializeOnly";
field17.type = "SFFloat";
field17.name = "clearSpanWidth";
field17.value = "4";
ProtoInterface14.field[2] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "initializeOnly";
field18.type = "SFFloat";
field18.name = "riseHeight";
field18.value = "2";
ProtoInterface14.field[3] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "initializeOnly";
field19.type = "SFFloat";
field19.name = "depth";
field19.value = "3";
ProtoInterface14.field[4] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "initializeOnly";
field20.type = "SFFloat";
field20.name = "topAbutmentHeight";
field20.value = "0.5";
ProtoInterface14.field[5] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "initializeOnly";
field21.type = "SFFloat";
field21.name = "pierWidth";
field21.value = "0.5";
ProtoInterface14.field[6] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "initializeOnly";
field22.type = "SFFloat";
field22.name = "pierHeight";
field22.value = "1";
ProtoInterface14.field[7] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "initializeOnly";
field23.type = "SFBool";
field23.name = "archHalf";
ProtoInterface14.field[8] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "initializeOnly";
field24.type = "SFFloat";
field24.name = "archHalfExtensionWidth";
ProtoInterface14.field[9] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "initializeOnly";
field25.type = "SFBool";
field25.name = "onlyIntrados";
ProtoInterface14.field[10] = field25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "initializeOnly";
field26.type = "SFBool";
field26.name = "archFilled";
ProtoInterface14.field[11] = field26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "initializeOnly";
field27.type = "SFBool";
field27.name = "archHalfFilled";
ProtoInterface14.field[12] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "initializeOnly";
field28.type = "SFBool";
field28.name = "lintel";
ProtoInterface14.field[13] = field28;

ProtoDeclare13.protoInterface = ProtoInterface14;

let ProtoBody29 = browser.currentScene.createNode("ProtoBody");
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "ArchTransform";
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.DEF = "Arch";
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.DEF = "MaterialNode";
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "diffuseColor";
connect35.protoField = "diffuseColor";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "emissiveColor";
connect36.protoField = "emissiveColor";
IS34.connect[1] = connect36;

Material33.iS = IS34;

Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.DEF = "ArchIndex";
IndexedFaceSet37.solid = False;
IndexedFaceSet37.convex = False;
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.DEF = "ArchChord";
IndexedFaceSet37.coord = Coordinate38;

Shape31.geometry = IndexedFaceSet37;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

ProtoBody29.children = new MFNode();

ProtoBody29.children[0] = Transform30;

let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "ArchPrototypeScript";
Script39.url = new MFString(new java.lang.String["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]);
let field40 = browser.currentScene.createNode("field");
field40.accessType = "initializeOnly";
field40.type = "SFFloat";
field40.name = "clearSpanWidth";
Script39.field = new MFNode();

Script39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "initializeOnly";
field41.type = "SFFloat";
field41.name = "riseHeight";
Script39.field[1] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "initializeOnly";
field42.type = "SFFloat";
field42.name = "depth";
Script39.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "initializeOnly";
field43.type = "SFFloat";
field43.name = "topAbutmentHeight";
Script39.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "initializeOnly";
field44.type = "SFFloat";
field44.name = "pierWidth";
Script39.field[4] = field44;

let field45 = browser.currentScene.createNode("field");
field45.accessType = "initializeOnly";
field45.type = "SFFloat";
field45.name = "pierHeight";
Script39.field[5] = field45;

let field46 = browser.currentScene.createNode("field");
field46.accessType = "initializeOnly";
field46.type = "SFBool";
field46.name = "archHalf";
Script39.field[6] = field46;

let field47 = browser.currentScene.createNode("field");
field47.accessType = "initializeOnly";
field47.type = "SFFloat";
field47.name = "archHalfExtensionWidth";
Script39.field[7] = field47;

let field48 = browser.currentScene.createNode("field");
field48.accessType = "initializeOnly";
field48.type = "SFBool";
field48.name = "onlyIntrados";
Script39.field[8] = field48;

let field49 = browser.currentScene.createNode("field");
field49.accessType = "initializeOnly";
field49.type = "SFBool";
field49.name = "archFilled";
Script39.field[9] = field49;

let field50 = browser.currentScene.createNode("field");
field50.accessType = "initializeOnly";
field50.type = "SFBool";
field50.name = "archHalfFilled";
Script39.field[10] = field50;

let field51 = browser.currentScene.createNode("field");
field51.accessType = "initializeOnly";
field51.type = "SFBool";
field51.name = "lintel";
Script39.field[11] = field51;

let field52 = browser.currentScene.createNode("field");
field52.accessType = "outputOnly";
field52.type = "SFVec3f";
field52.name = "computedScale";
Script39.field[12] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "outputOnly";
field53.type = "MFVec3f";
field53.name = "pointOut";
Script39.field[13] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "outputOnly";
field54.type = "MFInt32";
field54.name = "indexOut";
Script39.field[14] = field54;

let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "clearSpanWidth";
connect56.protoField = "clearSpanWidth";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "riseHeight";
connect57.protoField = "riseHeight";
IS55.connect[1] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "depth";
connect58.protoField = "depth";
IS55.connect[2] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "topAbutmentHeight";
connect59.protoField = "topAbutmentHeight";
IS55.connect[3] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "pierWidth";
connect60.protoField = "pierWidth";
IS55.connect[4] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "pierHeight";
connect61.protoField = "pierHeight";
IS55.connect[5] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "archHalf";
connect62.protoField = "archHalf";
IS55.connect[6] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "archHalfExtensionWidth";
connect63.protoField = "archHalfExtensionWidth";
IS55.connect[7] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "onlyIntrados";
connect64.protoField = "onlyIntrados";
IS55.connect[8] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "archFilled";
connect65.protoField = "archFilled";
IS55.connect[9] = connect65;

let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "archHalfFilled";
connect66.protoField = "archHalfFilled";
IS55.connect[10] = connect66;

let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "lintel";
connect67.protoField = "lintel";
IS55.connect[11] = connect67;

Script39.iS = IS55;

ProtoBody29.children[1] = Script39;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromNode = "ArchPrototypeScript";
ROUTE68.fromField = "computedScale";
ROUTE68.toNode = "ArchTransform";
ROUTE68.toField = "scale";
ProtoBody29.children[2] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromNode = "ArchPrototypeScript";
ROUTE69.fromField = "pointOut";
ROUTE69.toNode = "ArchChord";
ROUTE69.toField = "point";
ProtoBody29.children[3] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromNode = "ArchPrototypeScript";
ROUTE70.fromField = "indexOut";
ROUTE70.toNode = "ArchIndex";
ROUTE70.toField = "set_coordIndex";
ProtoBody29.children[4] = ROUTE70;

ProtoDeclare13.protoBody = ProtoBody29;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare13;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.DEF = "ArchInstance";
ProtoInstance71.name = "ArchPrototype";
let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "diffuseColor";
fieldValue72.value = "0.5 0.3 0.6";
ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "emissiveColor";
fieldValue73.value = "0.5 0.3 0.6";
ProtoInstance71.fieldValue[1] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "clearSpanWidth";
fieldValue74.value = "5";
ProtoInstance71.fieldValue[2] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "riseHeight";
fieldValue75.value = "2.5";
ProtoInstance71.fieldValue[3] = fieldValue75;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "depth";
fieldValue76.value = "2";
ProtoInstance71.fieldValue[4] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "topAbutmentHeight";
fieldValue77.value = "0.6";
ProtoInstance71.fieldValue[5] = fieldValue77;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "pierWidth";
fieldValue78.value = "1";
ProtoInstance71.fieldValue[6] = fieldValue78;

let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "pierHeight";
fieldValue79.value = "2";
ProtoInstance71.fieldValue[7] = fieldValue79;

browser.currentScene.children[1] = ProtoInstance71;

let Inline80 = browser.currentScene.createNode("Inline");
Inline80.DEF = "CoordinateAxes";
Inline80.global = True;
Inline80.url = new MFString(new java.lang.String["../data/CoordinateAxes.x3d"]);
browser.currentScene.children[2] = Inline80;

