let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "asteroids.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/asteroids.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "asteroids";
head1.meta[4] = meta6;

head = head1;

let ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "anyShape";
let ProtoInterface9 = browser.currentScene.createNode("ProtoInterface");
let field10 = browser.currentScene.createNode("field");
field10.name = "myShape";
field10.accessType = "inputOutput";
field10.type = "MFNode";
let Shape11 = browser.currentScene.createNode("Shape");
let Sphere12 = browser.currentScene.createNode("Sphere");
Shape11.geometry = Sphere12;

field10.children = new MFNode();

field10.children[0] = Shape11;

ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

ProtoDeclare8.protoInterface = ProtoInterface9;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "children";
connect16.protoField = "myShape";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare8.protoBody = ProtoBody13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare8;

let ProtoInstance17 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance17.name = "anyShape";
browser.currentScene.children[1] = ProtoInstance17;
