let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//The KeySensor prototype can be omitted if native-node Keysensor support is provided by the VRML browser.
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "KeySensorActivationKeySwitchTest.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="KeySensor" ><ProtoInterface><!--warning: enabled needs to become an exposedField once Scripts support exposedField--><field name="enabled" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="enabled_changed" accessType="outputOnly" type="SFBool"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="keyPress" accessType="outputOnly" type="SFInt32"></field>
<field name="keyRelease" accessType="outputOnly" type="SFInt32"></field>
<field name="actionKeyPress" accessType="outputOnly" type="SFInt32"></field>
<field name="actionKeyRelease" accessType="outputOnly" type="SFInt32"></field>
<field name="altKey" accessType="outputOnly" type="SFBool"></field>
<field name="controlKey" accessType="outputOnly" type="SFBool"></field>
<field name="shiftKey" accessType="outputOnly" type="SFBool"></field>
</ProtoInterface>
<ProtoBody><!--First node in prototype indicates node type, use Group so that this sensor is ChildNodeType.--><Group><Script DEF="KeySensorScript"><field name="altKey" accessType="outputOnly" type="SFBool"></field>
<field name="keyPress" accessType="outputOnly" type="SFInt32"></field>
<field name="set_enabled" accessType="inputOnly" type="SFBool"></field>
<field name="keyRelease" accessType="outputOnly" type="SFInt32"></field>
<field name="enabled" accessType="initializeOnly" type="SFBool"></field>
<field name="shiftKey" accessType="outputOnly" type="SFBool"></field>
<field name="actionKeyRelease" accessType="outputOnly" type="SFInt32"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="actionKeyPress" accessType="outputOnly" type="SFInt32"></field>
<field name="enabled_changed" accessType="outputOnly" type="SFBool"></field>
<field name="controlKey" accessType="outputOnly" type="SFBool"></field>
<IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="set_enabled" protoField="set_enabled"></connect>
<connect nodeField="enabled_changed" protoField="enabled_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="keyPress" protoField="keyPress"></connect>
<connect nodeField="keyRelease" protoField="keyRelease"></connect>
<connect nodeField="actionKeyPress" protoField="actionKeyPress"></connect>
<connect nodeField="actionKeyRelease" protoField="actionKeyRelease"></connect>
<connect nodeField="altKey" protoField="altKey"></connect>
<connect nodeField="controlKey" protoField="controlKey"></connect>
<connect nodeField="shiftKey" protoField="shiftKey"></connect>
</IS>
<![CDATA[ecmascript:

// Native support for KeySensor node
// or keyboard-access code needed!]]></Script>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "KeySensor";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
//warning: enabled needs to become an exposedField once Scripts support exposedField
let field5 = browser.currentScene.createNode("field");
field5.name = "enabled";
field5.accessType = "initializeOnly";
field5.type = "SFBool";
field5.value = "true";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "set_enabled";
field6.accessType = "inputOnly";
field6.type = "SFBool";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "enabled_changed";
field7.accessType = "outputOnly";
field7.type = "SFBool";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "isActive";
field8.accessType = "outputOnly";
field8.type = "SFBool";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "keyPress";
field9.accessType = "outputOnly";
field9.type = "SFInt32";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "keyRelease";
field10.accessType = "outputOnly";
field10.type = "SFInt32";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "actionKeyPress";
field11.accessType = "outputOnly";
field11.type = "SFInt32";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "actionKeyRelease";
field12.accessType = "outputOnly";
field12.type = "SFInt32";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "altKey";
field13.accessType = "outputOnly";
field13.type = "SFBool";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "controlKey";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ProtoInterface4.field[9] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "shiftKey";
field15.accessType = "outputOnly";
field15.type = "SFBool";
ProtoInterface4.field[10] = field15;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody16 = browser.currentScene.createNode("ProtoBody");
//First node in prototype indicates node type, use Group so that this sensor is ChildNodeType.
let Group17 = browser.currentScene.createNode("Group");
let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "KeySensorScript";
let field19 = browser.currentScene.createNode("field");
field19.name = "altKey";
field19.accessType = "outputOnly";
field19.type = "SFBool";
Script18.field = new MFNode();

Script18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "keyPress";
field20.accessType = "outputOnly";
field20.type = "SFInt32";
Script18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "set_enabled";
field21.accessType = "inputOnly";
field21.type = "SFBool";
Script18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "keyRelease";
field22.accessType = "outputOnly";
field22.type = "SFInt32";
Script18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "enabled";
field23.accessType = "initializeOnly";
field23.type = "SFBool";
Script18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "shiftKey";
field24.accessType = "outputOnly";
field24.type = "SFBool";
Script18.field[5] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "actionKeyRelease";
field25.accessType = "outputOnly";
field25.type = "SFInt32";
Script18.field[6] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "isActive";
field26.accessType = "outputOnly";
field26.type = "SFBool";
Script18.field[7] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "actionKeyPress";
field27.accessType = "outputOnly";
field27.type = "SFInt32";
Script18.field[8] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "enabled_changed";
field28.accessType = "outputOnly";
field28.type = "SFBool";
Script18.field[9] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "controlKey";
field29.accessType = "outputOnly";
field29.type = "SFBool";
Script18.field[10] = field29;

let IS30 = browser.currentScene.createNode("IS");
let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "enabled";
connect31.protoField = "enabled";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "set_enabled";
connect32.protoField = "set_enabled";
IS30.connect[1] = connect32;

let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "enabled_changed";
connect33.protoField = "enabled_changed";
IS30.connect[2] = connect33;

let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "isActive";
connect34.protoField = "isActive";
IS30.connect[3] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "keyPress";
connect35.protoField = "keyPress";
IS30.connect[4] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "keyRelease";
connect36.protoField = "keyRelease";
IS30.connect[5] = connect36;

let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "actionKeyPress";
connect37.protoField = "actionKeyPress";
IS30.connect[6] = connect37;

let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "actionKeyRelease";
connect38.protoField = "actionKeyRelease";
IS30.connect[7] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "altKey";
connect39.protoField = "altKey";
IS30.connect[8] = connect39;

let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "controlKey";
connect40.protoField = "controlKey";
IS30.connect[9] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "shiftKey";
connect41.protoField = "shiftKey";
IS30.connect[10] = connect41;

Script18.iS = IS30;


Script18.setSourceCode(`ecmascript:\n"+
"\n"+
"// Native support for KeySensor node\n"+
"// or keyboard-access code needed!`)
Group17.children = new MFNode();

Group17.children[0] = Script18;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Group17;

ProtoDeclare3.protoBody = ProtoBody16;

browser.currentScene.children[1] = ProtoDeclare3;

//============================================
//Enabling this KeySensor (from TouchSensor.isActive) disables all other KeySensors.
let KeySensor42 = browser.currentScene.createNode("KeySensor");
KeySensor42.DEF = "SingleKeySensor";
KeySensor42.enabled = False;
browser.currentScene.children[2] = KeySensor42;

let Billboard43 = browser.currentScene.createNode("Billboard");
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new SFVec3f(new float[0,2,0]);
let Shape45 = browser.currentScene.createNode("Shape");
let Text46 = browser.currentScene.createNode("Text");
Text46.string = new MFString(new java.lang.String["Touch this text to enable","KeySensor activation keys then","press activation keys to test"]);
let FontStyle47 = browser.currentScene.createNode("FontStyle");
FontStyle47.DEF = "MiddleMiddle";
FontStyle47.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text46.fontStyle = FontStyle47;

Shape45.geometry = Text46;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[0.9,0.9,0.4]);
Appearance48.material = Material49;

Shape45.appearance = Appearance48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

let TouchSensor50 = browser.currentScene.createNode("TouchSensor");
TouchSensor50.DEF = "StartMessageTouched";
TouchSensor50.description = "Touch this text to enable KeySensor activation keys then press activation keys to test";
Transform44.children[1] = TouchSensor50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "isOver";
ROUTE51.fromNode = "StartMessageTouched";
ROUTE51.toField = "enabled";
ROUTE51.toNode = "SingleKeySensor";
Transform44.children[2] = ROUTE51;

Billboard43.children = new MFNode();

Billboard43.children[0] = Transform44;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[0,-1,0]);
let Switch53 = browser.currentScene.createNode("Switch");
Switch53.DEF = "ActivationKeyMessageSwitch";
Switch53.whichChoice = 0;
//ROUTE is not treated as a selectable child of Switch
let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "actionKeyPress";
ROUTE54.fromNode = "SingleKeySensor";
ROUTE54.toField = "whichChoice";
ROUTE54.toNode = "ActivationKeyMessageSwitch";
Switch53.children = new MFNode();

Switch53.children[0] = ROUTE54;

let Shape55 = browser.currentScene.createNode("Shape");
Shape55.DEF = "Zero";
let Text56 = browser.currentScene.createNode("Text");
Text56.string = new MFString(new java.lang.String["No activation keypress sensed...."]);
let FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.USE = "MiddleMiddle";
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

let Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.DEF = "SelectionAppearance";
let Material59 = browser.currentScene.createNode("Material");
Material59.diffuseColor = new SFColor(new float[0,1,0]);
Appearance58.material = Material59;

Shape55.appearance = Appearance58;

Switch53.children[1] = Shape55;

let Shape60 = browser.currentScene.createNode("Shape");
Shape60.DEF = "One";
let Text61 = browser.currentScene.createNode("Text");
Text61.string = new MFString(new java.lang.String["F1"]);
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.USE = "MiddleMiddle";
Text61.fontStyle = FontStyle62;

Shape60.geometry = Text61;

let Appearance63 = browser.currentScene.createNode("Appearance");
Appearance63.USE = "SelectionAppearance";
Shape60.appearance = Appearance63;

Switch53.children[2] = Shape60;

let Shape64 = browser.currentScene.createNode("Shape");
Shape64.DEF = "Two";
let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["F2"]);
let FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.USE = "MiddleMiddle";
Text65.fontStyle = FontStyle66;

Shape64.geometry = Text65;

let Appearance67 = browser.currentScene.createNode("Appearance");
Appearance67.USE = "SelectionAppearance";
Shape64.appearance = Appearance67;

Switch53.children[3] = Shape64;

let Shape68 = browser.currentScene.createNode("Shape");
Shape68.DEF = "Three";
let Text69 = browser.currentScene.createNode("Text");
Text69.string = new MFString(new java.lang.String["F3"]);
let FontStyle70 = browser.currentScene.createNode("FontStyle");
FontStyle70.USE = "MiddleMiddle";
Text69.fontStyle = FontStyle70;

Shape68.geometry = Text69;

let Appearance71 = browser.currentScene.createNode("Appearance");
Appearance71.USE = "SelectionAppearance";
Shape68.appearance = Appearance71;

Switch53.children[4] = Shape68;

let Shape72 = browser.currentScene.createNode("Shape");
Shape72.DEF = "Four";
let Text73 = browser.currentScene.createNode("Text");
Text73.string = new MFString(new java.lang.String["F4"]);
let FontStyle74 = browser.currentScene.createNode("FontStyle");
FontStyle74.USE = "MiddleMiddle";
Text73.fontStyle = FontStyle74;

Shape72.geometry = Text73;

let Appearance75 = browser.currentScene.createNode("Appearance");
Appearance75.USE = "SelectionAppearance";
Shape72.appearance = Appearance75;

Switch53.children[5] = Shape72;

let Shape76 = browser.currentScene.createNode("Shape");
Shape76.DEF = "Five";
let Text77 = browser.currentScene.createNode("Text");
Text77.string = new MFString(new java.lang.String["F5"]);
let FontStyle78 = browser.currentScene.createNode("FontStyle");
FontStyle78.USE = "MiddleMiddle";
Text77.fontStyle = FontStyle78;

Shape76.geometry = Text77;

let Appearance79 = browser.currentScene.createNode("Appearance");
Appearance79.USE = "SelectionAppearance";
Shape76.appearance = Appearance79;

Switch53.children[6] = Shape76;

let Shape80 = browser.currentScene.createNode("Shape");
Shape80.DEF = "Six";
let Text81 = browser.currentScene.createNode("Text");
Text81.string = new MFString(new java.lang.String["F6"]);
let FontStyle82 = browser.currentScene.createNode("FontStyle");
FontStyle82.USE = "MiddleMiddle";
Text81.fontStyle = FontStyle82;

Shape80.geometry = Text81;

let Appearance83 = browser.currentScene.createNode("Appearance");
Appearance83.USE = "SelectionAppearance";
Shape80.appearance = Appearance83;

Switch53.children[7] = Shape80;

let Shape84 = browser.currentScene.createNode("Shape");
Shape84.DEF = "Seven";
let Text85 = browser.currentScene.createNode("Text");
Text85.string = new MFString(new java.lang.String["F7"]);
let FontStyle86 = browser.currentScene.createNode("FontStyle");
FontStyle86.USE = "MiddleMiddle";
Text85.fontStyle = FontStyle86;

Shape84.geometry = Text85;

let Appearance87 = browser.currentScene.createNode("Appearance");
Appearance87.USE = "SelectionAppearance";
Shape84.appearance = Appearance87;

Switch53.children[8] = Shape84;

let Shape88 = browser.currentScene.createNode("Shape");
Shape88.DEF = "Eight";
let Text89 = browser.currentScene.createNode("Text");
Text89.string = new MFString(new java.lang.String["F8"]);
let FontStyle90 = browser.currentScene.createNode("FontStyle");
FontStyle90.USE = "MiddleMiddle";
Text89.fontStyle = FontStyle90;

Shape88.geometry = Text89;

let Appearance91 = browser.currentScene.createNode("Appearance");
Appearance91.USE = "SelectionAppearance";
Shape88.appearance = Appearance91;

Switch53.children[9] = Shape88;

let Shape92 = browser.currentScene.createNode("Shape");
Shape92.DEF = "Nine";
let Text93 = browser.currentScene.createNode("Text");
Text93.string = new MFString(new java.lang.String["F9"]);
let FontStyle94 = browser.currentScene.createNode("FontStyle");
FontStyle94.USE = "MiddleMiddle";
Text93.fontStyle = FontStyle94;

Shape92.geometry = Text93;

let Appearance95 = browser.currentScene.createNode("Appearance");
Appearance95.USE = "SelectionAppearance";
Shape92.appearance = Appearance95;

Switch53.children[10] = Shape92;

let Shape96 = browser.currentScene.createNode("Shape");
Shape96.DEF = "Ten";
let Text97 = browser.currentScene.createNode("Text");
Text97.string = new MFString(new java.lang.String["F10"]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.USE = "MiddleMiddle";
Text97.fontStyle = FontStyle98;

Shape96.geometry = Text97;

let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.USE = "SelectionAppearance";
Shape96.appearance = Appearance99;

Switch53.children[11] = Shape96;

let Shape100 = browser.currentScene.createNode("Shape");
Shape100.DEF = "Eleven";
let Text101 = browser.currentScene.createNode("Text");
Text101.string = new MFString(new java.lang.String["F11"]);
let FontStyle102 = browser.currentScene.createNode("FontStyle");
FontStyle102.USE = "MiddleMiddle";
Text101.fontStyle = FontStyle102;

Shape100.geometry = Text101;

let Appearance103 = browser.currentScene.createNode("Appearance");
Appearance103.USE = "SelectionAppearance";
Shape100.appearance = Appearance103;

Switch53.children[12] = Shape100;

let Shape104 = browser.currentScene.createNode("Shape");
Shape104.DEF = "Twelve";
let Text105 = browser.currentScene.createNode("Text");
Text105.string = new MFString(new java.lang.String["F12"]);
let FontStyle106 = browser.currentScene.createNode("FontStyle");
FontStyle106.USE = "MiddleMiddle";
Text105.fontStyle = FontStyle106;

Shape104.geometry = Text105;

let Appearance107 = browser.currentScene.createNode("Appearance");
Appearance107.USE = "SelectionAppearance";
Shape104.appearance = Appearance107;

Switch53.children[13] = Shape104;

let Shape108 = browser.currentScene.createNode("Shape");
Shape108.DEF = "Thirteen";
let Text109 = browser.currentScene.createNode("Text");
Text109.string = new MFString(new java.lang.String["13: HOME"]);
let FontStyle110 = browser.currentScene.createNode("FontStyle");
FontStyle110.USE = "MiddleMiddle";
Text109.fontStyle = FontStyle110;

Shape108.geometry = Text109;

let Appearance111 = browser.currentScene.createNode("Appearance");
Appearance111.USE = "SelectionAppearance";
Shape108.appearance = Appearance111;

Switch53.children[14] = Shape108;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.DEF = "Fourteen";
let Text113 = browser.currentScene.createNode("Text");
Text113.string = new MFString(new java.lang.String["14: END"]);
let FontStyle114 = browser.currentScene.createNode("FontStyle");
FontStyle114.USE = "MiddleMiddle";
Text113.fontStyle = FontStyle114;

Shape112.geometry = Text113;

let Appearance115 = browser.currentScene.createNode("Appearance");
Appearance115.USE = "SelectionAppearance";
Shape112.appearance = Appearance115;

Switch53.children[15] = Shape112;

let Shape116 = browser.currentScene.createNode("Shape");
Shape116.DEF = "Fifteen";
let Text117 = browser.currentScene.createNode("Text");
Text117.string = new MFString(new java.lang.String["15: LEFT"]);
let FontStyle118 = browser.currentScene.createNode("FontStyle");
FontStyle118.USE = "MiddleMiddle";
Text117.fontStyle = FontStyle118;

Shape116.geometry = Text117;

let Appearance119 = browser.currentScene.createNode("Appearance");
Appearance119.USE = "SelectionAppearance";
Shape116.appearance = Appearance119;

Switch53.children[16] = Shape116;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.DEF = "Sixteen";
let Text121 = browser.currentScene.createNode("Text");
Text121.string = new MFString(new java.lang.String["16: RIGHT"]);
let FontStyle122 = browser.currentScene.createNode("FontStyle");
FontStyle122.USE = "MiddleMiddle";
Text121.fontStyle = FontStyle122;

Shape120.geometry = Text121;

let Appearance123 = browser.currentScene.createNode("Appearance");
Appearance123.USE = "SelectionAppearance";
Shape120.appearance = Appearance123;

Switch53.children[17] = Shape120;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.DEF = "Seventeen";
let Text125 = browser.currentScene.createNode("Text");
Text125.string = new MFString(new java.lang.String["17: UP"]);
let FontStyle126 = browser.currentScene.createNode("FontStyle");
FontStyle126.USE = "MiddleMiddle";
Text125.fontStyle = FontStyle126;

Shape124.geometry = Text125;

let Appearance127 = browser.currentScene.createNode("Appearance");
Appearance127.USE = "SelectionAppearance";
Shape124.appearance = Appearance127;

Switch53.children[18] = Shape124;

let Shape128 = browser.currentScene.createNode("Shape");
Shape128.DEF = "Eighteen";
let Text129 = browser.currentScene.createNode("Text");
Text129.string = new MFString(new java.lang.String["18: DOWN"]);
let FontStyle130 = browser.currentScene.createNode("FontStyle");
FontStyle130.USE = "MiddleMiddle";
Text129.fontStyle = FontStyle130;

Shape128.geometry = Text129;

let Appearance131 = browser.currentScene.createNode("Appearance");
Appearance131.USE = "SelectionAppearance";
Shape128.appearance = Appearance131;

Switch53.children[19] = Shape128;

let Shape132 = browser.currentScene.createNode("Shape");
Shape132.DEF = "Nineteen";
let Text133 = browser.currentScene.createNode("Text");
Text133.string = new MFString(new java.lang.String["19: PGUP"]);
let FontStyle134 = browser.currentScene.createNode("FontStyle");
FontStyle134.USE = "MiddleMiddle";
Text133.fontStyle = FontStyle134;

Shape132.geometry = Text133;

let Appearance135 = browser.currentScene.createNode("Appearance");
Appearance135.USE = "SelectionAppearance";
Shape132.appearance = Appearance135;

Switch53.children[20] = Shape132;

let Shape136 = browser.currentScene.createNode("Shape");
Shape136.DEF = "Twenty";
let Text137 = browser.currentScene.createNode("Text");
Text137.string = new MFString(new java.lang.String["20: PGDN"]);
let FontStyle138 = browser.currentScene.createNode("FontStyle");
FontStyle138.USE = "MiddleMiddle";
Text137.fontStyle = FontStyle138;

Shape136.geometry = Text137;

let Appearance139 = browser.currentScene.createNode("Appearance");
Appearance139.USE = "SelectionAppearance";
Shape136.appearance = Appearance139;

Switch53.children[21] = Shape136;

Transform52.children = new MFNode();

Transform52.children[0] = Switch53;

Billboard43.children[1] = Transform52;

browser.currentScene.children[3] = Billboard43;

