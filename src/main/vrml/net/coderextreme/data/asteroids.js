var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "anyShape";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
field4 = browser.currentScene.createNode("field");
field4.name = "myShape";
field4.accessType = "inputOutput";
field4.type = "MFNode";
Shape5 = browser.currentScene.createNode("Shape");
Sphere6 = browser.currentScene.createNode("Sphere");
Shape5.geometry = Sphere6;

field4.children = new MFNode();

field4.children[0] = Shape5;

ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody7 = browser.currentScene.createNode("ProtoBody");
Transform8 = browser.currentScene.createNode("Transform");
IS9 = browser.currentScene.createNode("IS");
connect10 = browser.currentScene.createNode("connect");
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

ProtoInstance11 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance11.name = "anyShape";
browser.currentScene.children[1] = ProtoInstance11;

