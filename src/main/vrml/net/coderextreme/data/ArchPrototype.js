var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "ArchPrototype";
ProtoDeclare2.appinfo = "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
field4 = browser.currentScene.createNode("field");
field4.name = "diffuseColor";
field4.accessType = "inputOutput";
field4.appinfo = "color of arch";
field4.type = "SFColor";
field4.value = "0.2 0.8 0.8";
ProtoInterface3.field = [];

ProtoInterface3.field[0] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "emissiveColor";
field5.accessType = "inputOutput";
field5.appinfo = "color of arch";
field5.type = "SFColor";
field5.value = "0.2 0.8 0.8";
ProtoInterface3.field[1] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "clearSpanWidth";
field6.accessType = "initializeOnly";
field6.appinfo = "clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference";
field6.type = "SFFloat";
field6.value = "4";
ProtoInterface3.field[2] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "riseHeight";
field7.accessType = "initializeOnly";
field7.appinfo = "riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference";
field7.type = "SFFloat";
field7.value = "2";
ProtoInterface3.field[3] = field7;

field8 = browser.currentScene.createNode("field");
field8.name = "depth";
field8.accessType = "initializeOnly";
field8.appinfo = "depth";
field8.type = "SFFloat";
field8.value = "3";
ProtoInterface3.field[4] = field8;

field9 = browser.currentScene.createNode("field");
field9.name = "topAbutmentHeight";
field9.accessType = "initializeOnly";
field9.appinfo = "topAbutmentHeight:topAbutmentHeight=0 means no topAbutment";
field9.type = "SFFloat";
field9.value = "0.5";
ProtoInterface3.field[5] = field9;

field10 = browser.currentScene.createNode("field");
field10.name = "pierWidth";
field10.accessType = "initializeOnly";
field10.appinfo = "pierWidth:pierWidtht=0 means no pierWidth";
field10.type = "SFFloat";
field10.value = "0.5";
ProtoInterface3.field[6] = field10;

field11 = browser.currentScene.createNode("field");
field11.name = "pierHeight";
field11.accessType = "initializeOnly";
field11.appinfo = "pierHeight: pierHeight=0 means no pierHeight";
field11.type = "SFFloat";
field11.value = "1";
ProtoInterface3.field[7] = field11;

field12 = browser.currentScene.createNode("field");
field12.name = "archHalf";
field12.accessType = "initializeOnly";
field12.appinfo = "archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width";
field12.type = "SFBool";
field12.value = "false";
ProtoInterface3.field[8] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "archHalfExtensionWidth";
field13.accessType = "initializeOnly";
field13.appinfo = "archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.";
field13.type = "SFFloat";
field13.value = "0";
ProtoInterface3.field[9] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "onlyIntrados";
field14.accessType = "initializeOnly";
field14.appinfo = "onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.";
field14.type = "SFBool";
field14.value = "false";
ProtoInterface3.field[10] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "archFilled";
field15.accessType = "initializeOnly";
field15.appinfo = "archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.";
field15.type = "SFBool";
field15.value = "false";
ProtoInterface3.field[11] = field15;

field16 = browser.currentScene.createNode("field");
field16.name = "archHalfFilled";
field16.accessType = "initializeOnly";
field16.appinfo = "archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.";
field16.type = "SFBool";
field16.value = "false";
ProtoInterface3.field[12] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "lintel";
field17.accessType = "initializeOnly";
field17.appinfo = "lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.";
field17.type = "SFBool";
field17.value = "false";
ProtoInterface3.field[13] = field17;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody18 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//IndexedFaceset creates arch
Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "ArchTransform";
Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "Arch";
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet21.DEF = "ArchIndex";
IndexedFaceSet21.convex = False;
IndexedFaceSet21.solid = False;
Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.DEF = "ArchChord";
IndexedFaceSet21.coord = Coordinate22;

Shape20.geometry = IndexedFaceSet21;

Appearance23 = browser.currentScene.createNode("Appearance");
Material24 = browser.currentScene.createNode("Material");
Material24.DEF = "MaterialNode";
IS25 = browser.currentScene.createNode("IS");
connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "emissiveColor";
connect26.protoField = "emissiveColor";
IS25.connect = [];

IS25.connect[0] = connect26;

connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "diffuseColor";
connect27.protoField = "diffuseColor";
IS25.connect[1] = connect27;

Material24.iS = IS25;

Appearance23.material = Material24;

Shape20.appearance = Appearance23;

Transform19.children = [];

Transform19.children[0] = Shape20;

ProtoBody18.children = [];

ProtoBody18.children[0] = Transform19;

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
Script28 = browser.currentScene.createNode("Script");
Script28.DEF = "ArchPrototypeScript";
Script28.url = ["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"];
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
field29 = browser.currentScene.createNode("field");
field29.name = "clearSpanWidth";
field29.accessType = "initializeOnly";
field29.appinfo = "user or default input for clearSpanWidth parameter";
field29.type = "SFFloat";
Script28.field = [];

Script28.field[0] = field29;

field30 = browser.currentScene.createNode("field");
field30.name = "riseHeight";
field30.accessType = "initializeOnly";
field30.appinfo = "user or default input for riseHeight parameter";
field30.type = "SFFloat";
Script28.field[1] = field30;

field31 = browser.currentScene.createNode("field");
field31.name = "depth";
field31.accessType = "initializeOnly";
field31.appinfo = "user or default input for depth parameter";
field31.type = "SFFloat";
Script28.field[2] = field31;

field32 = browser.currentScene.createNode("field");
field32.name = "topAbutmentHeight";
field32.accessType = "initializeOnly";
field32.appinfo = "user or default input for topAbutmentHeight parameter";
field32.type = "SFFloat";
Script28.field[3] = field32;

field33 = browser.currentScene.createNode("field");
field33.name = "pierWidth";
field33.accessType = "initializeOnly";
field33.appinfo = "user or default input for pierWidth parameter";
field33.type = "SFFloat";
Script28.field[4] = field33;

field34 = browser.currentScene.createNode("field");
field34.name = "pierHeight";
field34.accessType = "initializeOnly";
field34.appinfo = "user or default input for pierHeight parameter";
field34.type = "SFFloat";
Script28.field[5] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "archHalf";
field35.accessType = "initializeOnly";
field35.appinfo = "user or default input for archHalf parameter";
field35.type = "SFBool";
Script28.field[6] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "archHalfExtensionWidth";
field36.accessType = "initializeOnly";
field36.appinfo = "user or default input for archHalfExtensionWidth parameter";
field36.type = "SFFloat";
Script28.field[7] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "onlyIntrados";
field37.accessType = "initializeOnly";
field37.appinfo = "user or default input for onlyIntrados parameter";
field37.type = "SFBool";
Script28.field[8] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "archFilled";
field38.accessType = "initializeOnly";
field38.appinfo = "user or default input for archFilled parameter";
field38.type = "SFBool";
Script28.field[9] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "archHalfFilled";
field39.accessType = "initializeOnly";
field39.appinfo = "user or default input for archHalfFilled parameter";
field39.type = "SFBool";
Script28.field[10] = field39;

field40 = browser.currentScene.createNode("field");
field40.name = "lintel";
field40.accessType = "initializeOnly";
field40.appinfo = "user or default input for lintel parameter";
field40.type = "SFBool";
Script28.field[11] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "computedScale";
field41.accessType = "outputOnly";
field41.appinfo = "computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth";
field41.type = "SFVec3f";
Script28.field[12] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "pointOut";
field42.accessType = "outputOnly";
field42.appinfo = "send computed points to the Coordinate node";
field42.type = "MFVec3f";
Script28.field[13] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "indexOut";
field43.accessType = "outputOnly";
field43.appinfo = "send computed indices to the IndexedFaceSet node";
field43.type = "MFInt32";
Script28.field[14] = field43;

IS44 = browser.currentScene.createNode("IS");
connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "clearSpanWidth";
connect45.protoField = "clearSpanWidth";
IS44.connect = [];

IS44.connect[0] = connect45;

connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "riseHeight";
connect46.protoField = "riseHeight";
IS44.connect[1] = connect46;

connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "depth";
connect47.protoField = "depth";
IS44.connect[2] = connect47;

connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "pierWidth";
connect48.protoField = "pierWidth";
IS44.connect[3] = connect48;

connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "topAbutmentHeight";
connect49.protoField = "topAbutmentHeight";
IS44.connect[4] = connect49;

connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "pierHeight";
connect50.protoField = "pierHeight";
IS44.connect[5] = connect50;

connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "archHalf";
connect51.protoField = "archHalf";
IS44.connect[6] = connect51;

connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "archHalfExtensionWidth";
connect52.protoField = "archHalfExtensionWidth";
IS44.connect[7] = connect52;

connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "onlyIntrados";
connect53.protoField = "onlyIntrados";
IS44.connect[8] = connect53;

connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "archFilled";
connect54.protoField = "archFilled";
IS44.connect[9] = connect54;

connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "archHalfFilled";
connect55.protoField = "archHalfFilled";
IS44.connect[10] = connect55;

connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "lintel";
connect56.protoField = "lintel";
IS44.connect[11] = connect56;

Script28.iS = IS44;

ProtoBody18.children[1] = Script28;

ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "computedScale";
ROUTE57.fromNode = "ArchPrototypeScript";
ROUTE57.toField = "scale";
ROUTE57.toNode = "ArchTransform";
ProtoBody18.children[2] = ROUTE57;

ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "pointOut";
ROUTE58.fromNode = "ArchPrototypeScript";
ROUTE58.toField = "point";
ROUTE58.toNode = "ArchChord";
ProtoBody18.children[3] = ROUTE58;

ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "indexOut";
ROUTE59.fromNode = "ArchPrototypeScript";
ROUTE59.toField = "set_coordIndex";
ROUTE59.toNode = "ArchIndex";
ProtoBody18.children[4] = ROUTE59;

ProtoDeclare2.protoBody = ProtoBody18;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "ArchPrototype";
ProtoInstance60.DEF = "ArchInstance";
fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "diffuseColor";
fieldValue61.value = "0.5 0.3 0.6";
ProtoInstance60.fieldValue = [];

ProtoInstance60.fieldValue[0] = fieldValue61;

fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "emissiveColor";
fieldValue62.value = "0.5 0.3 0.6";
ProtoInstance60.fieldValue[1] = fieldValue62;

fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "clearSpanWidth";
fieldValue63.value = "5";
ProtoInstance60.fieldValue[2] = fieldValue63;

fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "riseHeight";
fieldValue64.value = "2.5";
ProtoInstance60.fieldValue[3] = fieldValue64;

fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "depth";
fieldValue65.value = "2";
ProtoInstance60.fieldValue[4] = fieldValue65;

fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "topAbutmentHeight";
fieldValue66.value = "0.6";
ProtoInstance60.fieldValue[5] = fieldValue66;

fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "pierWidth";
fieldValue67.value = "1";
ProtoInstance60.fieldValue[6] = fieldValue67;

fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "pierHeight";
fieldValue68.value = "2";
ProtoInstance60.fieldValue[7] = fieldValue68;

browser.currentScene.children[1] = ProtoInstance60;

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
Inline69 = browser.currentScene.createNode("Inline");
Inline69.DEF = "CoordinateAxes";
Inline69.url = ["../data/CoordinateAxes.x3d"];
browser.currentScene.children[2] = Inline69;

