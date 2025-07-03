const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ArchPrototype.x3d");
scene.addMetaData("description", "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.");
scene.addMetaData("description", "Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.");
scene.addMetaData("creator", "Michele Foti, Don Brutzman");
scene.addMetaData("created", "15 December 2014");
scene.addMetaData("modified", "27 November 2015");
scene.addMetaData("reference", "ArchModelingDiagrams.pdf");
scene.addMetaData("reference", "https://en.wikipedia.org/wiki/Arch");
scene.addMetaData("identifier", "http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArchPrototype" appinfo="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js." ><ProtoInterface><!--COLOR OF ARCH--><!--INPUT PARAMETERS--><!--General parameters: measures in meters--><!--Parameters to create to create shapes related to arch: put true to apply--><field name="diffuseColor" accessType="inputOutput" appinfo="color of arch" type="SFColor" value="0.2 0.8 0.8"></field>
<field name="emissiveColor" accessType="inputOutput" appinfo="color of arch" type="SFColor" value="0.2 0.8 0.8"></field>
<field name="clearSpanWidth" accessType="initializeOnly" appinfo="clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference" type="SFFloat" value="4"></field>
<field name="riseHeight" accessType="initializeOnly" appinfo="riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference" type="SFFloat" value="2"></field>
<field name="depth" accessType="initializeOnly" appinfo="depth" type="SFFloat" value="3"></field>
<field name="topAbutmentHeight" accessType="initializeOnly" appinfo="topAbutmentHeight:topAbutmentHeight=0 means no topAbutment" type="SFFloat" value="0.5"></field>
<field name="pierWidth" accessType="initializeOnly" appinfo="pierWidth:pierWidtht=0 means no pierWidth" type="SFFloat" value="0.5"></field>
<field name="pierHeight" accessType="initializeOnly" appinfo="pierHeight: pierHeight=0 means no pierHeight" type="SFFloat" value="1"></field>
<field name="archHalf" accessType="initializeOnly" appinfo="archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width" type="SFBool" value="false"></field>
<field name="archHalfExtensionWidth" accessType="initializeOnly" appinfo="archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information." type="SFFloat" value="0"></field>
<field name="onlyIntrados" accessType="initializeOnly" appinfo="onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true." type="SFBool" value="false"></field>
<field name="archFilled" accessType="initializeOnly" appinfo="archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose." type="SFBool" value="false"></field>
<field name="archHalfFilled" accessType="initializeOnly" appinfo="archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width." type="SFBool" value="false"></field>
<field name="lintel" accessType="initializeOnly" appinfo="lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true." type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of this prototype--><!--IndexedFaceset creates arch--><Transform DEF="ArchTransform"><Shape DEF="Arch"><!--note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly--><IndexedFaceSet DEF="ArchIndex" convex="false" solid="false"><Coordinate DEF="ArchChord"></Coordinate>
</IndexedFaceSet>
<Appearance containerField="appearance"><Material containerField="material" DEF="MaterialNode"><IS><connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
<!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><!--This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs--><Script DEF="ArchPrototypeScript" url="&quot;../node/ArchPrototypeScript.js&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js&quot;"><!--INPUT PARAMETERS--><!--General parameters--><!--Parameters to create to create shapes related to arch: put true to apply--><!--OUTPUT PARAMETERS--><field name="clearSpanWidth" accessType="initializeOnly" appinfo="user or default input for clearSpanWidth parameter" type="SFFloat"></field>
<field name="riseHeight" accessType="initializeOnly" appinfo="user or default input for riseHeight parameter" type="SFFloat"></field>
<field name="depth" accessType="initializeOnly" appinfo="user or default input for depth parameter" type="SFFloat"></field>
<field name="topAbutmentHeight" accessType="initializeOnly" appinfo="user or default input for topAbutmentHeight parameter" type="SFFloat"></field>
<field name="pierWidth" accessType="initializeOnly" appinfo="user or default input for pierWidth parameter" type="SFFloat"></field>
<field name="pierHeight" accessType="initializeOnly" appinfo="user or default input for pierHeight parameter" type="SFFloat"></field>
<field name="archHalf" accessType="initializeOnly" appinfo="user or default input for archHalf parameter" type="SFBool"></field>
<field name="archHalfExtensionWidth" accessType="initializeOnly" appinfo="user or default input for archHalfExtensionWidth parameter" type="SFFloat"></field>
<field name="onlyIntrados" accessType="initializeOnly" appinfo="user or default input for onlyIntrados parameter" type="SFBool"></field>
<field name="archFilled" accessType="initializeOnly" appinfo="user or default input for archFilled parameter" type="SFBool"></field>
<field name="archHalfFilled" accessType="initializeOnly" appinfo="user or default input for archHalfFilled parameter" type="SFBool"></field>
<field name="lintel" accessType="initializeOnly" appinfo="user or default input for lintel parameter" type="SFBool"></field>
<field name="computedScale" accessType="outputOnly" appinfo="computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth" type="SFVec3f"></field>
<field name="pointOut" accessType="outputOnly" appinfo="send computed points to the Coordinate node" type="MFVec3f"></field>
<field name="indexOut" accessType="outputOnly" appinfo="send computed indices to the IndexedFaceSet node" type="MFInt32"></field>
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
ProtoDeclare14.name = "ArchPrototype";
ProtoDeclare14.appinfo = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.";
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
ProtoInterface16.getField("diffuseColor").setValue("0.2 0.8 0.8");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface17.getField("emissiveColor").setValue("0.2 0.8 0.8");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface18.getField("clearSpanWidth").setValue("4");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface19.getField("riseHeight").setValue("2");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface20.getField("depth").setValue("3");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface21.getField("topAbutmentHeight").setValue("0.5");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface22.getField("pierWidth").setValue("0.5");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface23.getField("pierHeight").setValue("1");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface24.getField("archHalf").setValue("false");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface25.getField("archHalfExtensionWidth").setValue("0");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface26.getField("onlyIntrados").setValue("false");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface27.getField("archFilled").setValue("false");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface28.getField("archHalfFilled").setValue("false");
ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface29.getField("lintel").setValue("false");
ProtoInterface15YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface15;

let ProtoBody30 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//IndexedFaceset creates arch
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "ArchTransform";
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.DEF = "Arch";
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
let IndexedFaceSet33 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet33.DEF = "ArchIndex";
IndexedFaceSet33.convex = False;
IndexedFaceSet33.solid = False;
let Coordinate34 = browser.currentScene.createNode("Coordinate");
Coordinate34.DEF = "ArchChord";
coord = Coordinate34;

geometry = IndexedFaceSet33;

let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.DEF = "MaterialNode";
let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "emissiveColor";
connect38.protoField = "emissiveColor";
IS37YYY.connect = new X3D.MFNode();

IS37ZZZ.connect[0] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "diffuseColor";
connect39.protoField = "diffuseColor";
IS37ZZZ.connect[1] = connect39;

iS = IS37;

material = Material36;

appearance = Appearance35;

Transform31YYY.child = new X3D.undefined();

Transform31ZZZ.child[0] = Shape32;

ProtoBody30YYY.children = new X3D.MFNode();

ProtoBody30ZZZ.children[0] = Transform31;

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "ArchPrototypeScript";
Script40.url = new X3D.MFString([new X3D.SFString("../node/ArchPrototypeScript.js"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js")]);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
Script41.getField("clearSpanWidth")Script40YYY.field = new X3D.MFNode();

Script42.getField("riseHeight")Script40YYY.field = new X3D.MFNode();

Script43.getField("depth")Script40YYY.field = new X3D.MFNode();

Script44.getField("topAbutmentHeight")Script40YYY.field = new X3D.MFNode();

Script45.getField("pierWidth")Script40YYY.field = new X3D.MFNode();

Script46.getField("pierHeight")Script40YYY.field = new X3D.MFNode();

Script47.getField("archHalf")Script40YYY.field = new X3D.MFNode();

Script48.getField("archHalfExtensionWidth")Script40YYY.field = new X3D.MFNode();

Script49.getField("onlyIntrados")Script40YYY.field = new X3D.MFNode();

Script50.getField("archFilled")Script40YYY.field = new X3D.MFNode();

Script51.getField("archHalfFilled")Script40YYY.field = new X3D.MFNode();

Script52.getField("lintel")Script40YYY.field = new X3D.MFNode();

Script53.getField("computedScale")Script40YYY.field = new X3D.MFNode();

Script54.getField("pointOut")Script40YYY.field = new X3D.MFNode();

Script55.getField("indexOut")Script40YYY.field = new X3D.MFNode();

let IS56 = browser.currentScene.createNode("IS");
let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "clearSpanWidth";
connect57.protoField = "clearSpanWidth";
IS56YYY.connect = new X3D.MFNode();

IS56ZZZ.connect[0] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "riseHeight";
connect58.protoField = "riseHeight";
IS56ZZZ.connect[1] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "depth";
connect59.protoField = "depth";
IS56ZZZ.connect[2] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "pierWidth";
connect60.protoField = "pierWidth";
IS56ZZZ.connect[3] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "topAbutmentHeight";
connect61.protoField = "topAbutmentHeight";
IS56ZZZ.connect[4] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "pierHeight";
connect62.protoField = "pierHeight";
IS56ZZZ.connect[5] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "archHalf";
connect63.protoField = "archHalf";
IS56ZZZ.connect[6] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "archHalfExtensionWidth";
connect64.protoField = "archHalfExtensionWidth";
IS56ZZZ.connect[7] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "onlyIntrados";
connect65.protoField = "onlyIntrados";
IS56ZZZ.connect[8] = connect65;

let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "archFilled";
connect66.protoField = "archFilled";
IS56ZZZ.connect[9] = connect66;

let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "archHalfFilled";
connect67.protoField = "archHalfFilled";
IS56ZZZ.connect[10] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "lintel";
connect68.protoField = "lintel";
IS56ZZZ.connect[11] = connect68;

iS = IS56;

ProtoBody30ZZZ.children[1] = Script40;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "computedScale";
ROUTE69.fromNode = "ArchPrototypeScript";
ROUTE69.toField = "scale";
ROUTE69.toNode = "ArchTransform";
ProtoBody30ZZZ.children[2] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "pointOut";
ROUTE70.fromNode = "ArchPrototypeScript";
ROUTE70.toField = "point";
ROUTE70.toNode = "ArchChord";
ProtoBody30ZZZ.children[3] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "indexOut";
ROUTE71.fromNode = "ArchPrototypeScript";
ROUTE71.toField = "set_coordIndex";
ROUTE71.toNode = "ArchIndex";
ProtoBody30ZZZ.children[4] = ROUTE71;

protoBody = ProtoBody30;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare14;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "ArchPrototype";
ProtoInstance72.DEF = "ArchInstance";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "diffuseColor";
fieldValue73.value = "0.5 0.3 0.6";
ProtoInstance72YYY.fieldValue = new X3D.MFNode();

ProtoInstance72ZZZ.fieldValue[0] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "emissiveColor";
fieldValue74.value = "0.5 0.3 0.6";
ProtoInstance72ZZZ.fieldValue[1] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "clearSpanWidth";
fieldValue75.value = "5";
ProtoInstance72ZZZ.fieldValue[2] = fieldValue75;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "riseHeight";
fieldValue76.value = "2.5";
ProtoInstance72ZZZ.fieldValue[3] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "depth";
fieldValue77.value = "2";
ProtoInstance72ZZZ.fieldValue[4] = fieldValue77;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "topAbutmentHeight";
fieldValue78.value = "0.6";
ProtoInstance72ZZZ.fieldValue[5] = fieldValue78;

let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "pierWidth";
fieldValue79.value = "1";
ProtoInstance72ZZZ.fieldValue[6] = fieldValue79;

let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "pierHeight";
fieldValue80.value = "2";
ProtoInstance72ZZZ.fieldValue[7] = fieldValue80;

browser.currentScene.children[1] = ProtoInstance72;

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
let Inline81 = browser.currentScene.createNode("Inline");
Inline81.DEF = "CoordinateAxes";
Inline81.url = new X3D.MFString([new X3D.SFString("../data/CoordinateAxes.x3d")]);
browser.currentScene.children[2] = Inline81;

}
main ();
