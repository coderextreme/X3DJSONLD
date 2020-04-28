let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare appinfo="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js." name="ArchPrototype" ><ProtoInterface><!-- COLOR OF ARCH --><!-- INPUT PARAMETERS --><!-- General parameters: measures in meters --><!-- Parameters to create to create shapes related to arch: put true to apply --><field accessType="inputOutput" appinfo="color of arch" name="diffuseColor" type="SFColor" value="0.2 0.8 0.8"></field>
<field accessType="inputOutput" appinfo="color of arch" name="emissiveColor" type="SFColor" value="0.2 0.8 0.8"></field>
<field accessType="initializeOnly" appinfo="clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference" name="clearSpanWidth" type="SFFloat" value="4"></field>
<field accessType="initializeOnly" appinfo="riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference" name="riseHeight" type="SFFloat" value="2"></field>
<field accessType="initializeOnly" appinfo="depth" name="depth" type="SFFloat" value="3"></field>
<field accessType="initializeOnly" appinfo="topAbutmentHeight:topAbutmentHeight=0 means no topAbutment" name="topAbutmentHeight" type="SFFloat" value="0.5"></field>
<field accessType="initializeOnly" appinfo="pierWidth:pierWidtht=0 means no pierWidth" name="pierWidth" type="SFFloat" value="0.5"></field>
<field accessType="initializeOnly" appinfo="pierHeight: pierHeight=0 means no pierHeight" name="pierHeight" type="SFFloat" value="1"></field>
<field accessType="initializeOnly" appinfo="archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width" name="archHalf" type="SFBool" value="false"></field>
<field accessType="initializeOnly" appinfo="archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information." name="archHalfExtensionWidth" type="SFFloat" value="0"></field>
<field accessType="initializeOnly" appinfo="onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true." name="onlyIntrados" type="SFBool" value="false"></field>
<field accessType="initializeOnly" appinfo="archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose." name="archFilled" type="SFBool" value="false"></field>
<field accessType="initializeOnly" appinfo="archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width." name="archHalfFilled" type="SFBool" value="false"></field>
<field accessType="initializeOnly" appinfo="lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true." name="lintel" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!-- First node determines node type of this prototype --><!-- IndexedFaceset creates arch --><Transform DEF="ArchTransform"><Shape DEF="Arch"><!-- note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly --><IndexedFaceSet containerField="geometry" DEF="ArchIndex" convex="false" creaseAngle="0" solid="false"><Coordinate containerField="coord" DEF="ArchChord"></Coordinate>
</IndexedFaceSet>
<Appearance><Material DEF="MaterialNode"><IS><connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
<!-- Subsequent nodes do not render, but still must be a valid X3D subgraph --><!-- This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs --><Script DEF="ArchPrototypeScript" url="&quot;../node/ArchPrototypeScript.js&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js&quot;"><!-- INPUT PARAMETERS --><!-- General parameters --><!-- Parameters to create to create shapes related to arch: put true to apply --><!-- OUTPUT PARAMETERS --><field accessType="initializeOnly" appinfo="user or default input for clearSpanWidth parameter" name="clearSpanWidth" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for riseHeight parameter" name="riseHeight" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for depth parameter" name="depth" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for topAbutmentHeight parameter" name="topAbutmentHeight" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for pierWidth parameter" name="pierWidth" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for pierHeight parameter" name="pierHeight" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for archHalf parameter" name="archHalf" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="user or default input for archHalfExtensionWidth parameter" name="archHalfExtensionWidth" type="SFFloat"></field>
<field accessType="initializeOnly" appinfo="user or default input for onlyIntrados parameter" name="onlyIntrados" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="user or default input for archFilled parameter" name="archFilled" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="user or default input for archHalfFilled parameter" name="archHalfFilled" type="SFBool"></field>
<field accessType="initializeOnly" appinfo="user or default input for lintel parameter" name="lintel" type="SFBool"></field>
<field accessType="outputOnly" appinfo="computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth" name="computedScale" type="SFVec3f"></field>
<field accessType="outputOnly" appinfo="send computed points to the Coordinate node" name="pointOut" type="MFVec3f"></field>
<field accessType="outputOnly" appinfo="send computed indices to the IndexedFaceSet node" name="indexOut" type="MFInt32"></field>
<IS><connect nodeField="clearSpanWidth" protoField="clearSpanWidth"></connect>
<connect nodeField="riseHeight" protoField="riseHeight"></connect>
<connect nodeField="depth" protoField="depth"></connect>
<connect nodeField="pierWidth" protoField="pierWidth"></connect>
<connect nodeField="topAbutmentHeight" protoField="topAbutmentHeight"></connect>
<connect nodeField="pierHeight" protoField="pierHeight"></connect>
<connect nodeField="archHalf" protoField="archHalf"></connect>
<connect nodeField="archHalfExtensionWidth" protoField="archHalfExtensionWidth"></connect>
<connect nodeField="onlyIntrados" protoField="onlyIntrados"></connect>
<connect nodeField="archFilled" protoField="archFilled"></connect>
<connect nodeField="archHalfFilled" protoField="archHalfFilled"></connect>
<connect nodeField="lintel" protoField="lintel"></connect>
</IS>
</Script>
<ROUTE fromField="computedScale" fromNode="ArchPrototypeScript" toField="scale" toNode="ArchTransform"></ROUTE>
<ROUTE fromField="pointOut" fromNode="ArchPrototypeScript" toField="point" toNode="ArchChord"></ROUTE>
<ROUTE fromField="indexOut" fromNode="ArchPrototypeScript" toField="set_coordIndex" toNode="ArchIndex"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.appinfo = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.";
ProtoDeclare2.name = "ArchPrototype";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
// COLOR OF ARCH 
// INPUT PARAMETERS 
// General parameters: measures in meters 
// Parameters to create to create shapes related to arch: put true to apply 
let field4 = browser.currentScene.createNode("field");
field4.accessType = "inputOutput";
field4.appinfo = "color of arch";
field4.name = "diffuseColor";
field4.type = "SFColor";
field4.value = "0.2 0.8 0.8";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.accessType = "inputOutput";
field5.appinfo = "color of arch";
field5.name = "emissiveColor";
field5.type = "SFColor";
field5.value = "0.2 0.8 0.8";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.accessType = "initializeOnly";
field6.appinfo = "clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference";
field6.name = "clearSpanWidth";
field6.type = "SFFloat";
field6.value = "4";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.accessType = "initializeOnly";
field7.appinfo = "riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference";
field7.name = "riseHeight";
field7.type = "SFFloat";
field7.value = "2";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.accessType = "initializeOnly";
field8.appinfo = "depth";
field8.name = "depth";
field8.type = "SFFloat";
field8.value = "3";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.accessType = "initializeOnly";
field9.appinfo = "topAbutmentHeight:topAbutmentHeight=0 means no topAbutment";
field9.name = "topAbutmentHeight";
field9.type = "SFFloat";
field9.value = "0.5";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.accessType = "initializeOnly";
field10.appinfo = "pierWidth:pierWidtht=0 means no pierWidth";
field10.name = "pierWidth";
field10.type = "SFFloat";
field10.value = "0.5";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.accessType = "initializeOnly";
field11.appinfo = "pierHeight: pierHeight=0 means no pierHeight";
field11.name = "pierHeight";
field11.type = "SFFloat";
field11.value = "1";
ProtoInterface3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.accessType = "initializeOnly";
field12.appinfo = "archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width";
field12.name = "archHalf";
field12.type = "SFBool";
field12.value = "false";
ProtoInterface3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.accessType = "initializeOnly";
field13.appinfo = "archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.";
field13.name = "archHalfExtensionWidth";
field13.type = "SFFloat";
field13.value = "0";
ProtoInterface3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.accessType = "initializeOnly";
field14.appinfo = "onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.";
field14.name = "onlyIntrados";
field14.type = "SFBool";
field14.value = "false";
ProtoInterface3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.accessType = "initializeOnly";
field15.appinfo = "archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.";
field15.name = "archFilled";
field15.type = "SFBool";
field15.value = "false";
ProtoInterface3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.accessType = "initializeOnly";
field16.appinfo = "archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.";
field16.name = "archHalfFilled";
field16.type = "SFBool";
field16.value = "false";
ProtoInterface3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.accessType = "initializeOnly";
field17.appinfo = "lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.";
field17.name = "lintel";
field17.type = "SFBool";
field17.value = "false";
ProtoInterface3.field[13] = field17;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
// First node determines node type of this prototype 
// IndexedFaceset creates arch 
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "ArchTransform";
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "Arch";
// note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly 
let IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet21.DEF = "ArchIndex";
IndexedFaceSet21.convex = False;
IndexedFaceSet21.creaseAngle = 0;
IndexedFaceSet21.solid = False;
let Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.DEF = "ArchChord";
IndexedFaceSet21.coord = Coordinate22;

Shape20.geometry = IndexedFaceSet21;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.DEF = "MaterialNode";
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "emissiveColor";
connect26.protoField = "emissiveColor";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "diffuseColor";
connect27.protoField = "diffuseColor";
IS25.connect[1] = connect27;

Material24.iS = IS25;

Appearance23.material = Material24;

Shape20.appearance = Appearance23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Transform19;

// Subsequent nodes do not render, but still must be a valid X3D subgraph 
// This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
let Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "ArchPrototypeScript";
Script28.url = new MFString(new java.lang.String["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]);
// INPUT PARAMETERS 
// General parameters 
// Parameters to create to create shapes related to arch: put true to apply 
// OUTPUT PARAMETERS 
let field29 = browser.currentScene.createNode("field");
field29.accessType = "initializeOnly";
field29.appinfo = "user or default input for clearSpanWidth parameter";
field29.name = "clearSpanWidth";
field29.type = "SFFloat";
Script28.field = new MFNode();

Script28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "initializeOnly";
field30.appinfo = "user or default input for riseHeight parameter";
field30.name = "riseHeight";
field30.type = "SFFloat";
Script28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "initializeOnly";
field31.appinfo = "user or default input for depth parameter";
field31.name = "depth";
field31.type = "SFFloat";
Script28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "initializeOnly";
field32.appinfo = "user or default input for topAbutmentHeight parameter";
field32.name = "topAbutmentHeight";
field32.type = "SFFloat";
Script28.field[3] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "initializeOnly";
field33.appinfo = "user or default input for pierWidth parameter";
field33.name = "pierWidth";
field33.type = "SFFloat";
Script28.field[4] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "initializeOnly";
field34.appinfo = "user or default input for pierHeight parameter";
field34.name = "pierHeight";
field34.type = "SFFloat";
Script28.field[5] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "initializeOnly";
field35.appinfo = "user or default input for archHalf parameter";
field35.name = "archHalf";
field35.type = "SFBool";
Script28.field[6] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "initializeOnly";
field36.appinfo = "user or default input for archHalfExtensionWidth parameter";
field36.name = "archHalfExtensionWidth";
field36.type = "SFFloat";
Script28.field[7] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "initializeOnly";
field37.appinfo = "user or default input for onlyIntrados parameter";
field37.name = "onlyIntrados";
field37.type = "SFBool";
Script28.field[8] = field37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "initializeOnly";
field38.appinfo = "user or default input for archFilled parameter";
field38.name = "archFilled";
field38.type = "SFBool";
Script28.field[9] = field38;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "initializeOnly";
field39.appinfo = "user or default input for archHalfFilled parameter";
field39.name = "archHalfFilled";
field39.type = "SFBool";
Script28.field[10] = field39;

let field40 = browser.currentScene.createNode("field");
field40.accessType = "initializeOnly";
field40.appinfo = "user or default input for lintel parameter";
field40.name = "lintel";
field40.type = "SFBool";
Script28.field[11] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "outputOnly";
field41.appinfo = "computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth";
field41.name = "computedScale";
field41.type = "SFVec3f";
Script28.field[12] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "outputOnly";
field42.appinfo = "send computed points to the Coordinate node";
field42.name = "pointOut";
field42.type = "MFVec3f";
Script28.field[13] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "outputOnly";
field43.appinfo = "send computed indices to the IndexedFaceSet node";
field43.name = "indexOut";
field43.type = "MFInt32";
Script28.field[14] = field43;

let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "clearSpanWidth";
connect45.protoField = "clearSpanWidth";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "riseHeight";
connect46.protoField = "riseHeight";
IS44.connect[1] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "depth";
connect47.protoField = "depth";
IS44.connect[2] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "pierWidth";
connect48.protoField = "pierWidth";
IS44.connect[3] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "topAbutmentHeight";
connect49.protoField = "topAbutmentHeight";
IS44.connect[4] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "pierHeight";
connect50.protoField = "pierHeight";
IS44.connect[5] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "archHalf";
connect51.protoField = "archHalf";
IS44.connect[6] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "archHalfExtensionWidth";
connect52.protoField = "archHalfExtensionWidth";
IS44.connect[7] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "onlyIntrados";
connect53.protoField = "onlyIntrados";
IS44.connect[8] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "archFilled";
connect54.protoField = "archFilled";
IS44.connect[9] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "archHalfFilled";
connect55.protoField = "archHalfFilled";
IS44.connect[10] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "lintel";
connect56.protoField = "lintel";
IS44.connect[11] = connect56;

Script28.iS = IS44;

ProtoBody18.children[1] = Script28;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "computedScale";
ROUTE57.fromNode = "ArchPrototypeScript";
ROUTE57.toField = "scale";
ROUTE57.toNode = "ArchTransform";
ProtoBody18.children[2] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "pointOut";
ROUTE58.fromNode = "ArchPrototypeScript";
ROUTE58.toField = "point";
ROUTE58.toNode = "ArchChord";
ProtoBody18.children[3] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "indexOut";
ROUTE59.fromNode = "ArchPrototypeScript";
ROUTE59.toField = "set_coordIndex";
ROUTE59.toNode = "ArchIndex";
ProtoBody18.children[4] = ROUTE59;

ProtoDeclare2.protoBody = ProtoBody18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.DEF = "ArchInstance";
ProtoInstance60.name = "ArchPrototype";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "diffuseColor";
fieldValue61.value = "0.5 0.3 0.6";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "emissiveColor";
fieldValue62.value = "0.5 0.3 0.6";
ProtoInstance60.fieldValue[1] = fieldValue62;

let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "clearSpanWidth";
fieldValue63.value = "5";
ProtoInstance60.fieldValue[2] = fieldValue63;

let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "riseHeight";
fieldValue64.value = "2.5";
ProtoInstance60.fieldValue[3] = fieldValue64;

let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "depth";
fieldValue65.value = "2";
ProtoInstance60.fieldValue[4] = fieldValue65;

let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "topAbutmentHeight";
fieldValue66.value = "0.6";
ProtoInstance60.fieldValue[5] = fieldValue66;

let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "pierWidth";
fieldValue67.value = "1";
ProtoInstance60.fieldValue[6] = fieldValue67;

let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "pierHeight";
fieldValue68.value = "2";
ProtoInstance60.fieldValue[7] = fieldValue68;

browser.currentScene.children[1] = ProtoInstance60;

// Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) 
let Inline69 = browser.currentScene.createNode("Inline");
Inline69.DEF = "CoordinateAxes";
Inline69.url = new MFString(new java.lang.String["../data/CoordinateAxes.x3d"]);
browser.currentScene.children[2] = Inline69;

