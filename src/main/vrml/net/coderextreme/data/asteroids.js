let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry"></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "anyShape";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "myShape";
field4.accessType = "inputOutput";
field4.type = "MFNode";
let Shape5 = browser.currentScene.createNode("Shape");
Shape5.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere6 = browser.currentScene.createNode("Sphere");
Shape5.geometry = Sphere6;

field4.children = new MFNode();

field4.children[0] = Shape5;

ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody7 = browser.currentScene.createNode("ProtoBody");
let Transform8 = browser.currentScene.createNode("Transform");
Transform8.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS9 = browser.currentScene.createNode("IS");
let connect10 = browser.currentScene.createNode("connect");
connect10.nodeField = "children";
connect10.protoField = "myShape";
IS9.connect = new MFNode();

IS9.connect[0] = connect10;

Transform8.iS = IS9;

ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = Transform8;

ProtoDeclare2.protoBody = ProtoBody7;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoInstance11 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance11.name = "anyShape";
browser.currentScene.children[1] = ProtoInstance11;

