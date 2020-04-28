let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//*********************************************************************
//*** Step 5: Copy/edit ProtoDeclare, (optionally ProtoInstance) ***
//*** and the tagset version for your nodes of interest. ***
//*** When instantiating field Node/Nodes or field values, ***
//*** use fieldValue tags to override the initial values. ***
//*** The following example content instantiates prototype ***
//*** NewTransformExample using tags and ProtoInstance. ***
//*********************************************************************
//Declaring the NewTransformExample PROTO:
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewTransformExample" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"><WorldInfo info="&quot;overridden at run time&quot;"></WorldInfo>
</field>
</ProtoInterface>
<ProtoBody><!--Transform is first node, which determines node type, and encloses children for instances.--><Transform DEF="InitialTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "NewTransformExample";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "translation";
field4.accessType = "inputOutput";
field4.type = "SFVec3f";
field4.value = "0 0 0";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "rotation";
field5.accessType = "inputOutput";
field5.type = "SFRotation";
field5.value = "0 0 1 0";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "center";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "scale";
field7.accessType = "inputOutput";
field7.type = "SFVec3f";
field7.value = "1 1 1";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "scaleOrientation";
field8.accessType = "inputOutput";
field8.type = "SFRotation";
field8.value = "0 0 1 0";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "bboxCenter";
field9.accessType = "initializeOnly";
field9.type = "SFVec3f";
field9.value = "0 0 0";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "bboxSize";
field10.accessType = "initializeOnly";
field10.type = "SFVec3f";
field10.value = "-1 -1 -1";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "children";
field11.accessType = "inputOutput";
field11.type = "MFNode";
let WorldInfo12 = browser.currentScene.createNode("WorldInfo");
WorldInfo12.info = new MFString(new java.lang.String["overridden at run time"]);
field11.children = new MFNode();

field11.children[0] = WorldInfo12;

ProtoInterface3.field[7] = field11;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
//Transform is first node, which determines node type, and encloses children for instances.
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "InitialTransform";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "translation";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "rotation";
connect17.protoField = "rotation";
IS15.connect[1] = connect17;

let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "center";
connect18.protoField = "center";
IS15.connect[2] = connect18;

let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "scale";
connect19.protoField = "scale";
IS15.connect[3] = connect19;

let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "scaleOrientation";
connect20.protoField = "scaleOrientation";
IS15.connect[4] = connect20;

let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "bboxCenter";
connect21.protoField = "bboxCenter";
IS15.connect[5] = connect21;

let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "bboxSize";
connect22.protoField = "bboxSize";
IS15.connect[6] = connect22;

let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "children";
connect23.protoField = "children";
IS15.connect[7] = connect23;

Transform14.iS = IS15;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare2.protoBody = ProtoBody13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

//Instantiating the NewTransformExample PROTO using a ProtoInstance tag:
let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "NewTransformExample";
let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "translation";
fieldValue25.value = "0 1.5 0";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "children";
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.1,0.8,0.8]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Text30 = browser.currentScene.createNode("Text");
Text30.string = new MFString(new java.lang.String["ProtoTagDtdDeclaration Examples","using a regular ProtoInstance"]);
let FontStyle31 = browser.currentScene.createNode("FontStyle");
FontStyle31.DEF = "FS";
FontStyle31.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle31.size = 0.7;
Text30.fontStyle = FontStyle31;

Shape27.geometry = Text30;

fieldValue26.children = new MFNode();

fieldValue26.children[0] = Shape27;

ProtoInstance24.fieldValue[1] = fieldValue26;

browser.currentScene.children[1] = ProtoInstance24;

//Instantiating the NewTransformExample node using a customized tag:
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.translation = new SFVec3f(new float[0,-2,0]);
let Anchor33 = browser.currentScene.createNode("Anchor");
Anchor33.description = "Click to view source (ProtoTagDtdDeclarationExamples.x3d.txt)";
Anchor33.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor33.url = new MFString(new java.lang.String["ProtoTagDtdDeclarationExamples.x3d.txt","https://www.web3d.org/x3d/content/examples/development/ProtoTagDtdDeclarationExamples.x3d.txt"]);
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0.8,0.4,0.1]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let Text37 = browser.currentScene.createNode("Text");
Text37.string = new MFString(new java.lang.String["(click to see source)"]);
let FontStyle38 = browser.currentScene.createNode("FontStyle");
FontStyle38.USE = "FS";
Text37.fontStyle = FontStyle38;

Shape34.geometry = Text37;

Anchor33.children = new MFNode();

Anchor33.children[0] = Shape34;

Transform32.children = new MFNode();

Transform32.children[0] = Anchor33;

browser.currentScene.children[2] = Transform32;

