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

field4.children = [];

field4.children[0] = Shape5;

ProtoInterface3.field = [];

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody7 = browser.currentScene.createNode("ProtoBody");
Transform8 = browser.currentScene.createNode("Transform");
IS9 = browser.currentScene.createNode("IS");
connect10 = browser.currentScene.createNode("connect");
connect10.nodeField = "children";
connect10.protoField = "myShape";
IS9.connect = [];

IS9.connect[0] = connect10;

Transform8.iS = IS9;

ProtoBody7.children = [];

ProtoBody7.children[0] = Transform8;

ProtoDeclare2.protoBody = ProtoBody7;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

ProtoDeclare11 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare11.name = "one";
ProtoInterface12 = browser.currentScene.createNode("ProtoInterface");
field13 = browser.currentScene.createNode("field");
field13.name = "myShape";
field13.accessType = "inputOutput";
field13.type = "MFNode";
Shape14 = browser.currentScene.createNode("Shape");
Cylinder15 = browser.currentScene.createNode("Cylinder");
Shape14.geometry = Cylinder15;

field13.children = [];

field13.children[0] = Shape14;

ProtoInterface12.field = [];

ProtoInterface12.field[0] = field13;

ProtoDeclare11.protoInterface = ProtoInterface12;

ProtoBody16 = browser.currentScene.createNode("ProtoBody");
Transform17 = browser.currentScene.createNode("Transform");
ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "anyShape";
IS19 = browser.currentScene.createNode("IS");
connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "myShape";
connect20.protoField = "myShape";
IS19.connect = [];

IS19.connect[0] = connect20;

ProtoInstance18.iS = IS19;

Transform17.children = [];

Transform17.children[0] = ProtoInstance18;

ProtoBody16.children = [];

ProtoBody16.children[0] = Transform17;

ProtoDeclare11.protoBody = ProtoBody16;

browser.currentScene.children[1] = ProtoDeclare11;

ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "one";
fieldValue22 = browser.currentScene.createNode("fieldValue");
fieldValue22.name = "myShape";
Shape23 = browser.currentScene.createNode("Shape");
Box24 = browser.currentScene.createNode("Box");
Box24.size = [140,140,140];
Shape23.geometry = Box24;

fieldValue22.children = [];

fieldValue22.children[0] = Shape23;

ProtoInstance21.fieldValue = [];

ProtoInstance21.fieldValue[0] = fieldValue22;

browser.currentScene.children[2] = ProtoInstance21;

