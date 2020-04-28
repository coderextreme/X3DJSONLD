let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "BradenPrototypeInitializeExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Foo" ><ProtoInterface><field name="runtimeMaterialInstance" accessType="inputOutput" type="SFNode"><Material diffuseColor="1 0 0"></Material>
</field>
</ProtoInterface>
<ProtoBody><Shape><Appearance DEF="FOO_APPEARANCE"><IS><connect nodeField="material" protoField="runtimeMaterialInstance"></connect>
</IS>
</Appearance>
<Sphere containerField="geometry"></Sphere>
</Shape>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "Foo";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "runtimeMaterialInstance";
field5.accessType = "inputOutput";
field5.type = "SFNode";
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[1,0,0]);
field5.children = new MFNode();

field5.children[0] = Material6;

ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody7 = browser.currentScene.createNode("ProtoBody");
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
Appearance9.DEF = "FOO_APPEARANCE";
let IS10 = browser.currentScene.createNode("IS");
let connect11 = browser.currentScene.createNode("connect");
connect11.nodeField = "material";
connect11.protoField = "runtimeMaterialInstance";
IS10.connect = new MFNode();

IS10.connect[0] = connect11;

Appearance9.iS = IS10;

Shape8.appearance = Appearance9;

let Sphere12 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere12;

ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = Shape8;

ProtoDeclare3.protoBody = ProtoBody7;

browser.currentScene.children[1] = ProtoDeclare3;

let ProtoInstance13 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance13.name = "Foo";
let fieldValue14 = browser.currentScene.createNode("fieldValue");
fieldValue14.name = "runtimeMaterialInstance";
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0,1,0]);
fieldValue14.children = new MFNode();

fieldValue14.children[0] = Material15;

ProtoInstance13.fieldValue = new MFNode();

ProtoInstance13.fieldValue[0] = fieldValue14;

browser.currentScene.children[2] = ProtoInstance13;

