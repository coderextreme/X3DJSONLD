let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PixelTextureInterpolatorPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="PixelTextureInterpolator" ><ProtoInterface><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="key" accessType="initializeOnly" type="MFFloat"></field>
<field name="keyValue" accessType="initializeOnly" type="MFNode"></field>
<field name="value_changed" accessType="outputOnly" type="SFImage"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of prototype--><Script DEF="ImageInterpolatorScript" url="&quot;PixelTextureInterpolator.js&quot; &quot;https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolator.js&quot;"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="key" accessType="initializeOnly" type="MFFloat"></field>
<field name="keyValue" accessType="initializeOnly" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="value_changed" accessType="outputOnly" type="SFImage"></field>
<field name="traceEnabled" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="key" protoField="key"></connect>
<connect nodeField="keyValue" protoField="keyValue"></connect>
<connect nodeField="value_changed" protoField="value_changed"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
</Script>
<!--Subsequent nodes do not render, but still must be a valid X3D subgraph--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "PixelTextureInterpolator";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_fraction";
field5.accessType = "inputOnly";
field5.type = "SFFloat";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "key";
field6.accessType = "initializeOnly";
field6.type = "MFFloat";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "keyValue";
field7.accessType = "initializeOnly";
field7.type = "MFNode";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "value_changed";
field8.accessType = "outputOnly";
field8.type = "SFImage";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "traceEnabled";
field9.accessType = "initializeOnly";
field9.appinfo = "enable console output to trace script computations and prototype progress";
field9.type = "SFBool";
field9.value = "true";
ProtoInterface4.field[4] = field9;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of prototype
let Script11 = browser.currentScene.createNode("Script");
Script11.DEF = "ImageInterpolatorScript";
Script11.url = new MFString(new java.lang.String["PixelTextureInterpolator.js","https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolator.js"]);
let field12 = browser.currentScene.createNode("field");
field12.name = "set_fraction";
field12.accessType = "inputOnly";
field12.type = "SFFloat";
Script11.field = new MFNode();

Script11.field[0] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "key";
field13.accessType = "initializeOnly";
field13.type = "MFFloat";
Script11.field[1] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "keyValue";
field14.accessType = "initializeOnly";
field14.type = "MFNode";
//initialization nodes (if any) go here
Script11.field[2] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "value_changed";
field15.accessType = "outputOnly";
field15.type = "SFImage";
Script11.field[3] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "traceEnabled";
field16.accessType = "initializeOnly";
field16.type = "SFBool";
Script11.field[4] = field16;

let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "set_fraction";
connect18.protoField = "set_fraction";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "key";
connect19.protoField = "key";
IS17.connect[1] = connect19;

let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "keyValue";
connect20.protoField = "keyValue";
IS17.connect[2] = connect20;

let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "value_changed";
connect21.protoField = "value_changed";
IS17.connect[3] = connect21;

let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "traceEnabled";
connect22.protoField = "traceEnabled";
IS17.connect[4] = connect22;

Script11.iS = IS17;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = Script11;

//Subsequent nodes do not render, but still must be a valid X3D subgraph
ProtoDeclare3.protoBody = ProtoBody10;

browser.currentScene.children[1] = ProtoDeclare3;

//renderable scene graph begins here
let Shape23 = browser.currentScene.createNode("Shape");
let Box24 = browser.currentScene.createNode("Box");
Shape23.geometry = Box24;

let Appearance25 = browser.currentScene.createNode("Appearance");
let PixelTexture26 = browser.currentScene.createNode("PixelTexture");
PixelTexture26.DEF = "PixelColors";
PixelTexture26.image = new SFImage(new int[2,4,3,16711680,16776960,30464,16711799,255,16742144,65399,8947848]);
Appearance25.texture = PixelTexture26;

Shape23.appearance = Appearance25;

browser.currentScene.children[2] = Shape23;

//set of images, interpolated as a 2D morph
let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "PixelTextureInterpolator";
ProtoInstance27.DEF = "PixelTextureInterpolatorExample";
let fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "key";
fieldValue28.value = "0 0.25 0.5 0.75 1";
ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "keyValue";
//rotate two image values in each PixelTexture
let PixelTexture30 = browser.currentScene.createNode("PixelTexture");
PixelTexture30.image = new SFImage(new int[2,4,3,16711680,16776960,30464,16711799,255,16742144,65399,8947848]);
fieldValue29.children = new MFNode();

fieldValue29.children[0] = PixelTexture30;

let PixelTexture31 = browser.currentScene.createNode("PixelTexture");
PixelTexture31.image = new SFImage(new int[2,4,3,30464,16711799,255,16742144,65399,8947848,16711680,16776960]);
fieldValue29.children[1] = PixelTexture31;

let PixelTexture32 = browser.currentScene.createNode("PixelTexture");
PixelTexture32.image = new SFImage(new int[2,4,3,255,16742144,65399,8947848,16711680,16776960,30464,16711799]);
fieldValue29.children[2] = PixelTexture32;

let PixelTexture33 = browser.currentScene.createNode("PixelTexture");
PixelTexture33.image = new SFImage(new int[2,4,3,65399,8947848,16711680,16776960,30464,16711799,255,16742144]);
fieldValue29.children[3] = PixelTexture33;

//last PixelTexture matches first, would like to DEF and USE within a fieldValue initialization
let PixelTexture34 = browser.currentScene.createNode("PixelTexture");
PixelTexture34.image = new SFImage(new int[2,4,3,16711680,16776960,30464,16711799,255,16742144,65399,8947848]);
fieldValue29.children[4] = PixelTexture34;

ProtoInstance27.fieldValue[1] = fieldValue29;

let fieldValue35 = browser.currentScene.createNode("fieldValue");
fieldValue35.name = "traceEnabled";
fieldValue35.value = "true";
ProtoInstance27.fieldValue[2] = fieldValue35;

browser.currentScene.children[3] = ProtoInstance27;

let TimeSensor36 = browser.currentScene.createNode("TimeSensor");
TimeSensor36.DEF = "Time";
TimeSensor36.cycleInterval = 4;
browser.currentScene.children[4] = TimeSensor36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromField = "value_changed";
ROUTE37.fromNode = "PixelTextureInterpolatorExample";
ROUTE37.toField = "image";
ROUTE37.toNode = "PixelColors";
browser.currentScene.children[5] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromField = "fraction_changed";
ROUTE38.fromNode = "Time";
ROUTE38.toField = "set_fraction";
ROUTE38.toNode = "PixelTextureInterpolatorExample";
browser.currentScene.children[6] = ROUTE38;

