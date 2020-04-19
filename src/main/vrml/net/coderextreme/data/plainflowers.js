var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = [];

browser.currentScene.children[0] = NavigationInfo2;

Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"];
Background3.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"];
Background3.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"];
Background3.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"];
Background3.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"];
Background3.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"];
browser.currentScene.children[1] = Background3;

Group4 = browser.currentScene.createNode("Group");
ExternProtoDeclare5 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare5.name = "FlowerProto";
ExternProtoDeclare5.url = ["../data/flowerproto.x3d#FlowerProto"];
field6 = browser.currentScene.createNode("field");
field6.name = "vertex";
field6.accessType = "inputOutput";
field6.type = "MFString";
ExternProtoDeclare5.field = [];

ExternProtoDeclare5.field[0] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "fragment";
field7.accessType = "inputOutput";
field7.type = "MFString";
ExternProtoDeclare5.field[1] = field7;

Group4.children = [];

Group4.children[0] = ExternProtoDeclare5;

ProtoDeclare8 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare8.name = "flower";
ProtoBody9 = browser.currentScene.createNode("ProtoBody");
Group10 = browser.currentScene.createNode("Group");
ProtoInstance11 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance11.name = "FlowerProto";
fieldValue12 = browser.currentScene.createNode("fieldValue");
fieldValue12.name = "vertex";
fieldValue12.value = "\"../shaders/x_ite_flowers_plain.vs\"";
ProtoInstance11.fieldValue = [];

ProtoInstance11.fieldValue[0] = fieldValue12;

fieldValue13 = browser.currentScene.createNode("fieldValue");
fieldValue13.name = "fragment";
fieldValue13.value = "\"../shaders/plain.fs\"";
ProtoInstance11.fieldValue[1] = fieldValue13;

Group10.children = [];

Group10.children[0] = ProtoInstance11;

ProtoBody9.children = [];

ProtoBody9.children[0] = Group10;

ProtoDeclare8.protoBody = ProtoBody9;

Group4.children[1] = ProtoDeclare8;

ProtoInstance14 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance14.name = "flower";
Group4.children[2] = ProtoInstance14;

ProtoInstance15 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance15.name = "flower";
Group4.children[3] = ProtoInstance15;

ProtoInstance16 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance16.name = "flower";
Group4.children[4] = ProtoInstance16;

ProtoInstance17 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance17.name = "flower";
Group4.children[5] = ProtoInstance17;

ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "flower";
Group4.children[6] = ProtoInstance18;

ProtoInstance19 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance19.name = "flower";
Group4.children[7] = ProtoInstance19;

browser.currentScene.children[2] = Group4;

