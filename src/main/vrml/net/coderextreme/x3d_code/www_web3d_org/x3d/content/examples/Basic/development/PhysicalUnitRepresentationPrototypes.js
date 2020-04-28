let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//====================
//Initial approach: direct scaling
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PhysicalUnitRepresentationPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "MyZeptoScale";
Transform3.scale = new SFVec3f(new float[1e-10,1e-10,1e-10]);
let Transform4 = browser.currentScene.createNode("Transform");
Transform4.scale = new SFVec3f(new float[1e-11,1e-11,1e-11]);
let MetadataString5 = browser.currentScene.createNode("MetadataString");
MetadataString5.name = "lengthUnit";
MetadataString5.value = new MFString(new java.lang.String["ZEPTO meters"]);
Transform4.metadata = MetadataString5;

//scaled content goes here
let Shape6 = browser.currentScene.createNode("Shape");
let Box7 = browser.currentScene.createNode("Box");
Shape6.geometry = Box7;

Transform4.children = new MFNode();

Transform4.children[0] = Shape6;

Transform3.children = new MFNode();

Transform3.children[0] = Transform4;

browser.currentScene.children[1] = Transform3;

//====================
//Second approach: prototype nodes for scaling
//====================
let ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ZeptoScale" appinfo="ZeptoScale applies a uniform scale factor of 10^-21 to all children" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><!--initialization: NULL node--></field>
<!--TODO: can add other fields for Transform node here to ensure completeness--></ProtoInterface>
<ProtoBody><Transform DEF="ZeptoScale" scale="1e-10 1e-10 1e-10"><Transform scale="1e-11 1e-11 1e-11"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "ZeptoScale";
ProtoDeclare8.appinfo = "ZeptoScale applies a uniform scale factor of 10^-21 to all children";
let ProtoInterface9 = browser.currentScene.createNode("ProtoInterface");
let field10 = browser.currentScene.createNode("field");
field10.name = "children";
field10.accessType = "inputOutput";
field10.type = "MFNode";
//initialization: NULL node
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

//TODO: can add other fields for Transform node here to ensure completeness
ProtoDeclare8.protoInterface = ProtoInterface9;

let ProtoBody11 = browser.currentScene.createNode("ProtoBody");
let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "ZeptoScale";
Transform12.scale = new SFVec3f(new float[1e-10,1e-10,1e-10]);
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.scale = new SFVec3f(new float[1e-11,1e-11,1e-11]);
let IS14 = browser.currentScene.createNode("IS");
let connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "children";
connect15.protoField = "children";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Transform13.iS = IS14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

ProtoBody11.children = new MFNode();

ProtoBody11.children[0] = Transform12;

ProtoDeclare8.protoBody = ProtoBody11;

browser.currentScene.children[2] = ProtoDeclare8;

//====================
//Example use of prototype: the following should be very very small...
let ProtoInstance16 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance16.name = "ZeptoScale";
let fieldValue17 = browser.currentScene.createNode("fieldValue");
fieldValue17.name = "children";
let Shape18 = browser.currentScene.createNode("Shape");
let Sphere19 = browser.currentScene.createNode("Sphere");
Shape18.geometry = Sphere19;

fieldValue17.children = new MFNode();

fieldValue17.children[0] = Shape18;

ProtoInstance16.fieldValue = new MFNode();

ProtoInstance16.fieldValue[0] = fieldValue17;

browser.currentScene.children[3] = ProtoInstance16;

//====================
let Background20 = browser.currentScene.createNode("Background");
Background20.groundColor = new MFColor(new float[0.25,0.25,0.25]);
Background20.skyColor = new MFColor(new float[0.25,0.25,0.25]);
browser.currentScene.children[4] = Background20;

