let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ProtoMFNodeSensorExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MyProto" ><ProtoInterface><field name="a_Field" accessType="inputOutput" type="MFNode"><Group><Shape><Text containerField="geometry" string="&quot;Encoding examples of&quot; &quot;multifield node relationships&quot; &quot;inside a ProtoDeclare&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;"></FontStyle>
</Text>
</Shape>
</Group>
</field>
<field name="b_Field" accessType="inputOutput" type="MFNode"><SphereSensor description="example"></SphereSensor>
</field>
</ProtoInterface>
<ProtoBody><Transform DEF="TransformC"><IS><connect nodeField="children" protoField="a_Field"></connect>
</IS>
<Group DEF="GroupD"></Group>
</Transform>
<Group DEF="GroupE"><IS><connect nodeField="children" protoField="b_Field"></connect>
</IS>
<SphereSensor DEF="SphereSensorD" description="example"></SphereSensor>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "MyProto";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "a_Field";
field5.accessType = "inputOutput";
field5.type = "MFNode";
let Group6 = browser.currentScene.createNode("Group");
let Shape7 = browser.currentScene.createNode("Shape");
let Text8 = browser.currentScene.createNode("Text");
Text8.string = new MFString(new java.lang.String["Encoding examples of","multifield node relationships","inside a ProtoDeclare"]);
let FontStyle9 = browser.currentScene.createNode("FontStyle");
FontStyle9.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text8.fontStyle = FontStyle9;

Shape7.geometry = Text8;

Group6.children = new MFNode();

Group6.children[0] = Shape7;

field5.children = new MFNode();

field5.children[0] = Group6;

ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field10 = browser.currentScene.createNode("field");
field10.name = "b_Field";
field10.accessType = "inputOutput";
field10.type = "MFNode";
let SphereSensor11 = browser.currentScene.createNode("SphereSensor");
SphereSensor11.description = "example";
field10.children = new MFNode();

field10.children[0] = SphereSensor11;

ProtoInterface4.field[1] = field10;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "TransformC";
let IS14 = browser.currentScene.createNode("IS");
let connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "children";
connect15.protoField = "a_Field";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Transform13.iS = IS14;

let Group16 = browser.currentScene.createNode("Group");
Group16.DEF = "GroupD";
Transform13.children = new MFNode();

Transform13.children[0] = Group16;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "GroupE";
let IS18 = browser.currentScene.createNode("IS");
let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "children";
connect19.protoField = "b_Field";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

Group17.iS = IS18;

let SphereSensor20 = browser.currentScene.createNode("SphereSensor");
SphereSensor20.DEF = "SphereSensorD";
SphereSensor20.description = "example";
Group17.children = new MFNode();

Group17.children[0] = SphereSensor20;

ProtoBody12.children[1] = Group17;

ProtoDeclare3.protoBody = ProtoBody12;

browser.currentScene.children[1] = ProtoDeclare3;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "MyProto";
browser.currentScene.children[2] = ProtoInstance21;

