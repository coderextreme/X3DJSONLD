let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "plainflowers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "5 or more prismatic flowers";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/plainflowers.x3d";
head1.meta[4] = meta6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Background9 = browser.currentScene.createNode("Background");
Background9.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background9.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background9.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background9.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background9.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background9.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background9;

let Group10 = browser.currentScene.createNode("Group");
let ExternProtoDeclare11 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare11.name = "FlowerProto";
ExternProtoDeclare11.url = new MFString(new java.lang.String["../data/flowerproto.x3d#FlowerProto"]);
let field12 = browser.currentScene.createNode("field");
field12.name = "vertex";
field12.accessType = "inputOutput";
field12.type = "MFString";
ExternProtoDeclare11.field = new MFNode();

ExternProtoDeclare11.field[0] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "fragment";
field13.accessType = "inputOutput";
field13.type = "MFString";
ExternProtoDeclare11.field[1] = field13;

Group10.children = new MFNode();

Group10.children[0] = ExternProtoDeclare11;

let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_plain.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/plain.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "flower";
let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Group16 = browser.currentScene.createNode("Group");
let ProtoInstance17 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance17.name = "FlowerProto";
let fieldValue18 = browser.currentScene.createNode("fieldValue");
fieldValue18.name = "vertex";
fieldValue18.value = "\"../shaders/x_ite_flowers_plain.vs\"";
ProtoInstance17.fieldValue = new MFNode();

ProtoInstance17.fieldValue[0] = fieldValue18;

let fieldValue19 = browser.currentScene.createNode("fieldValue");
fieldValue19.name = "fragment";
fieldValue19.value = "\"../shaders/plain.fs\"";
ProtoInstance17.fieldValue[1] = fieldValue19;

Group16.children = new MFNode();

Group16.children[0] = ProtoInstance17;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Group16;

ProtoDeclare14.protoBody = ProtoBody15;

Group10.children[1] = ProtoDeclare14;

let ProtoInstance20 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance20.name = "flower";
Group10.children[2] = ProtoInstance20;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group10.children[3] = ProtoInstance21;

let ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group10.children[4] = ProtoInstance22;

let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group10.children[5] = ProtoInstance23;

let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group10.children[6] = ProtoInstance24;

let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group10.children[7] = ProtoInstance25;

browser.currentScene.children[2] = Group10;

