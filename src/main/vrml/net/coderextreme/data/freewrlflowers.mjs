let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "freewrlflowers.x3d";
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

head = head1;

let ExternProtoDeclare7 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare7.name = "FlowerProto";
ExternProtoDeclare7.url = new MFString(new java.lang.String["../data/flowerproto.x3d#FlowerProto"]);
let field8 = browser.currentScene.createNode("field");
field8.accessType = "inputOutput";
field8.type = "MFString";
field8.name = "vertex";
ExternProtoDeclare7.field = new MFNode();

ExternProtoDeclare7.field[0] = field8;

let field9 = browser.currentScene.createNode("field");
field9.accessType = "inputOutput";
field9.type = "MFString";
field9.name = "fragment";
ExternProtoDeclare7.field[1] = field9;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare7;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/freewrl_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/freewrl.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "flower";
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Group13 = browser.currentScene.createNode("Group");
let ProtoInstance14 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance14.name = "FlowerProto";
let fieldValue15 = browser.currentScene.createNode("fieldValue");
fieldValue15.name = "vertex";
fieldValue15.value = "\"../shaders/freewrl_flowers_chromatic.vs\"";
ProtoInstance14.fieldValue = new MFNode();

ProtoInstance14.fieldValue[0] = fieldValue15;

let fieldValue16 = browser.currentScene.createNode("fieldValue");
fieldValue16.name = "fragment";
fieldValue16.value = "\"../shaders/freewrl.fs\"";
ProtoInstance14.fieldValue[1] = fieldValue16;

Group13.children = new MFNode();

Group13.children[0] = ProtoInstance14;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare10.protoBody = ProtoBody12;

browser.currentScene.children[1] = ProtoDeclare10;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
browser.currentScene.children[3] = Background18;

let Group19 = browser.currentScene.createNode("Group");
let ProtoInstance20 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance20.name = "flower";
Group19.children = new MFNode();

Group19.children[0] = ProtoInstance20;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group19.children[1] = ProtoInstance21;

let ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group19.children[2] = ProtoInstance22;

let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group19.children[3] = ProtoInstance23;

let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group19.children[4] = ProtoInstance24;

let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group19.children[5] = ProtoInstance25;

browser.currentScene.children[4] = Group19;

