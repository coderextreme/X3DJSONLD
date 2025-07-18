#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ArchPrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Michele Foti, Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "15 December 2014";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "27 November 2015";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "ArchModelingDiagrams.pdf";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://en.wikipedia.org/wiki/Arch";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "license";
meta12.content = "../license.html";
head1.meta[10] = meta12;

head = head1;

ProtoDeclare ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface15 = createNode("ProtoInterface");
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
field field16 = createNode("field");
field16.name = "diffuseColor";
field16.accessType = "inputOutput";
field16.appinfo = "color of arch";
field16.type = "SFColor";
field16.value = "0.2 0.8 0.8";
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

field field17 = createNode("field");
field17.name = "emissiveColor";
field17.accessType = "inputOutput";
field17.appinfo = "color of arch";
field17.type = "SFColor";
field17.value = "0.2 0.8 0.8";
ProtoInterface15.field[1] = field17;

field field18 = createNode("field");
field18.name = "clearSpanWidth";
field18.accessType = "initializeOnly";
field18.appinfo = "clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference";
field18.type = "SFFloat";
field18.value = "4";
ProtoInterface15.field[2] = field18;

field field19 = createNode("field");
field19.name = "riseHeight";
field19.accessType = "initializeOnly";
field19.appinfo = "riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference";
field19.type = "SFFloat";
field19.value = "2";
ProtoInterface15.field[3] = field19;

field field20 = createNode("field");
field20.name = "depth";
field20.accessType = "initializeOnly";
field20.appinfo = "depth";
field20.type = "SFFloat";
field20.value = "3";
ProtoInterface15.field[4] = field20;

field field21 = createNode("field");
field21.name = "topAbutmentHeight";
field21.accessType = "initializeOnly";
field21.appinfo = "topAbutmentHeight:topAbutmentHeight=0 means no topAbutment";
field21.type = "SFFloat";
field21.value = "0.5";
ProtoInterface15.field[5] = field21;

field field22 = createNode("field");
field22.name = "pierWidth";
field22.accessType = "initializeOnly";
field22.appinfo = "pierWidth:pierWidtht=0 means no pierWidth";
field22.type = "SFFloat";
field22.value = "0.5";
ProtoInterface15.field[6] = field22;

field field23 = createNode("field");
field23.name = "pierHeight";
field23.accessType = "initializeOnly";
field23.appinfo = "pierHeight: pierHeight=0 means no pierHeight";
field23.type = "SFFloat";
field23.value = "1";
ProtoInterface15.field[7] = field23;

field field24 = createNode("field");
field24.name = "archHalf";
field24.accessType = "initializeOnly";
field24.appinfo = "archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width";
field24.type = "SFBool";
field24.value = "false";
ProtoInterface15.field[8] = field24;

field field25 = createNode("field");
field25.name = "archHalfExtensionWidth";
field25.accessType = "initializeOnly";
field25.appinfo = "archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.";
field25.type = "SFFloat";
field25.value = "0";
ProtoInterface15.field[9] = field25;

field field26 = createNode("field");
field26.name = "onlyIntrados";
field26.accessType = "initializeOnly";
field26.appinfo = "onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.";
field26.type = "SFBool";
field26.value = "false";
ProtoInterface15.field[10] = field26;

field field27 = createNode("field");
field27.name = "archFilled";
field27.accessType = "initializeOnly";
field27.appinfo = "archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.";
field27.type = "SFBool";
field27.value = "false";
ProtoInterface15.field[11] = field27;

field field28 = createNode("field");
field28.name = "archHalfFilled";
field28.accessType = "initializeOnly";
field28.appinfo = "archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.";
field28.type = "SFBool";
field28.value = "false";
ProtoInterface15.field[12] = field28;

field field29 = createNode("field");
field29.name = "lintel";
field29.accessType = "initializeOnly";
field29.appinfo = "lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.";
field29.type = "SFBool";
field29.value = "false";
ProtoInterface15.field[13] = field29;

ProtoDeclare14.protoInterface = ProtoInterface15;

ProtoBody ProtoBody30 = createNode("ProtoBody");
//First node determines node type of this prototype
//IndexedFaceset creates arch
Transform Transform31 = createNode("Transform");
Transform31.DEF = "ArchTransform";
Shape Shape32 = createNode("Shape");
Shape32.DEF = "Arch";
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
IndexedFaceSet IndexedFaceSet33 = createNode("IndexedFaceSet");
IndexedFaceSet33.DEF = "ArchIndex";
IndexedFaceSet33.convex = False;
IndexedFaceSet33.solid = False;
Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.DEF = "ArchChord";
IndexedFaceSet33.coord = Coordinate34;

Shape32.geometry = IndexedFaceSet33;

Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.DEF = "MaterialNode";
IS IS37 = createNode("IS");
connect connect38 = createNode("connect");
connect38.nodeField = "emissiveColor";
connect38.protoField = "emissiveColor";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

connect connect39 = createNode("connect");
connect39.nodeField = "diffuseColor";
connect39.protoField = "diffuseColor";
IS37.connect[1] = connect39;

Material36.iS = IS37;

Appearance35.material = Material36;

Shape32.appearance = Appearance35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

ProtoBody30.children = new MFNode();

ProtoBody30.children[0] = Transform31;

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
Script Script40 = createNode("Script");
Script40.DEF = "ArchPrototypeScript";
Script40.url = new MFString(new java.lang.String["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
field field41 = createNode("field");
field41.name = "clearSpanWidth";
field41.accessType = "initializeOnly";
field41.appinfo = "user or default input for clearSpanWidth parameter";
field41.type = "SFFloat";
Script40.field = new MFNode();

Script40.field[0] = field41;

field field42 = createNode("field");
field42.name = "riseHeight";
field42.accessType = "initializeOnly";
field42.appinfo = "user or default input for riseHeight parameter";
field42.type = "SFFloat";
Script40.field[1] = field42;

field field43 = createNode("field");
field43.name = "depth";
field43.accessType = "initializeOnly";
field43.appinfo = "user or default input for depth parameter";
field43.type = "SFFloat";
Script40.field[2] = field43;

field field44 = createNode("field");
field44.name = "topAbutmentHeight";
field44.accessType = "initializeOnly";
field44.appinfo = "user or default input for topAbutmentHeight parameter";
field44.type = "SFFloat";
Script40.field[3] = field44;

field field45 = createNode("field");
field45.name = "pierWidth";
field45.accessType = "initializeOnly";
field45.appinfo = "user or default input for pierWidth parameter";
field45.type = "SFFloat";
Script40.field[4] = field45;

field field46 = createNode("field");
field46.name = "pierHeight";
field46.accessType = "initializeOnly";
field46.appinfo = "user or default input for pierHeight parameter";
field46.type = "SFFloat";
Script40.field[5] = field46;

field field47 = createNode("field");
field47.name = "archHalf";
field47.accessType = "initializeOnly";
field47.appinfo = "user or default input for archHalf parameter";
field47.type = "SFBool";
Script40.field[6] = field47;

field field48 = createNode("field");
field48.name = "archHalfExtensionWidth";
field48.accessType = "initializeOnly";
field48.appinfo = "user or default input for archHalfExtensionWidth parameter";
field48.type = "SFFloat";
Script40.field[7] = field48;

field field49 = createNode("field");
field49.name = "onlyIntrados";
field49.accessType = "initializeOnly";
field49.appinfo = "user or default input for onlyIntrados parameter";
field49.type = "SFBool";
Script40.field[8] = field49;

field field50 = createNode("field");
field50.name = "archFilled";
field50.accessType = "initializeOnly";
field50.appinfo = "user or default input for archFilled parameter";
field50.type = "SFBool";
Script40.field[9] = field50;

field field51 = createNode("field");
field51.name = "archHalfFilled";
field51.accessType = "initializeOnly";
field51.appinfo = "user or default input for archHalfFilled parameter";
field51.type = "SFBool";
Script40.field[10] = field51;

field field52 = createNode("field");
field52.name = "lintel";
field52.accessType = "initializeOnly";
field52.appinfo = "user or default input for lintel parameter";
field52.type = "SFBool";
Script40.field[11] = field52;

field field53 = createNode("field");
field53.name = "computedScale";
field53.accessType = "outputOnly";
field53.appinfo = "computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth";
field53.type = "SFVec3f";
Script40.field[12] = field53;

field field54 = createNode("field");
field54.name = "pointOut";
field54.accessType = "outputOnly";
field54.appinfo = "send computed points to the Coordinate node";
field54.type = "MFVec3f";
Script40.field[13] = field54;

field field55 = createNode("field");
field55.name = "indexOut";
field55.accessType = "outputOnly";
field55.appinfo = "send computed indices to the IndexedFaceSet node";
field55.type = "MFInt32";
Script40.field[14] = field55;

IS IS56 = createNode("IS");
connect connect57 = createNode("connect");
connect57.nodeField = "clearSpanWidth";
connect57.protoField = "clearSpanWidth";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

connect connect58 = createNode("connect");
connect58.nodeField = "riseHeight";
connect58.protoField = "riseHeight";
IS56.connect[1] = connect58;

connect connect59 = createNode("connect");
connect59.nodeField = "depth";
connect59.protoField = "depth";
IS56.connect[2] = connect59;

connect connect60 = createNode("connect");
connect60.nodeField = "pierWidth";
connect60.protoField = "pierWidth";
IS56.connect[3] = connect60;

connect connect61 = createNode("connect");
connect61.nodeField = "topAbutmentHeight";
connect61.protoField = "topAbutmentHeight";
IS56.connect[4] = connect61;

connect connect62 = createNode("connect");
connect62.nodeField = "pierHeight";
connect62.protoField = "pierHeight";
IS56.connect[5] = connect62;

connect connect63 = createNode("connect");
connect63.nodeField = "archHalf";
connect63.protoField = "archHalf";
IS56.connect[6] = connect63;

connect connect64 = createNode("connect");
connect64.nodeField = "archHalfExtensionWidth";
connect64.protoField = "archHalfExtensionWidth";
IS56.connect[7] = connect64;

connect connect65 = createNode("connect");
connect65.nodeField = "onlyIntrados";
connect65.protoField = "onlyIntrados";
IS56.connect[8] = connect65;

connect connect66 = createNode("connect");
connect66.nodeField = "archFilled";
connect66.protoField = "archFilled";
IS56.connect[9] = connect66;

connect connect67 = createNode("connect");
connect67.nodeField = "archHalfFilled";
connect67.protoField = "archHalfFilled";
IS56.connect[10] = connect67;

connect connect68 = createNode("connect");
connect68.nodeField = "lintel";
connect68.protoField = "lintel";
IS56.connect[11] = connect68;

Script40.iS = IS56;

ProtoBody30.children[1] = Script40;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromField = "computedScale";
ROUTE69.fromNode = "ArchPrototypeScript";
ROUTE69.toField = "scale";
ROUTE69.toNode = "ArchTransform";
ProtoBody30.children[2] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromField = "pointOut";
ROUTE70.fromNode = "ArchPrototypeScript";
ROUTE70.toField = "point";
ROUTE70.toNode = "ArchChord";
ProtoBody30.children[3] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromField = "indexOut";
ROUTE71.fromNode = "ArchPrototypeScript";
ROUTE71.toField = "set_coordIndex";
ROUTE71.toNode = "ArchIndex";
ProtoBody30.children[4] = ROUTE71;

ProtoDeclare14.protoBody = ProtoBody30;

children = new MFNode();

children[0] = ProtoDeclare14;

ProtoInstance ProtoInstance72 = createNode("ProtoInstance");
ProtoInstance72.name = "ArchPrototype";
ProtoInstance72.DEF = "ArchInstance";
fieldValue fieldValue73 = createNode("fieldValue");
fieldValue73.name = "diffuseColor";
fieldValue73.value = "0.5 0.3 0.6";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

fieldValue fieldValue74 = createNode("fieldValue");
fieldValue74.name = "emissiveColor";
fieldValue74.value = "0.5 0.3 0.6";
ProtoInstance72.fieldValue[1] = fieldValue74;

fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "clearSpanWidth";
fieldValue75.value = "5";
ProtoInstance72.fieldValue[2] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "riseHeight";
fieldValue76.value = "2.5";
ProtoInstance72.fieldValue[3] = fieldValue76;

fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "depth";
fieldValue77.value = "2";
ProtoInstance72.fieldValue[4] = fieldValue77;

fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "topAbutmentHeight";
fieldValue78.value = "0.6";
ProtoInstance72.fieldValue[5] = fieldValue78;

fieldValue fieldValue79 = createNode("fieldValue");
fieldValue79.name = "pierWidth";
fieldValue79.value = "1";
ProtoInstance72.fieldValue[6] = fieldValue79;

fieldValue fieldValue80 = createNode("fieldValue");
fieldValue80.name = "pierHeight";
fieldValue80.value = "2";
ProtoInstance72.fieldValue[7] = fieldValue80;

children[1] = ProtoInstance72;

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
Inline Inline81 = createNode("Inline");
Inline81.DEF = "CoordinateAxes";
Inline81.url = new MFString(new java.lang.String["../data/CoordinateAxes.x3d"]);
children[2] = Inline81;

}
