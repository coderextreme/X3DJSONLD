let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "x3domflowers.x3d";
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

let component6 = browser.currentScene.createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Grouping";
component12.level = 3;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Core";
component13.level = 1;
head1.component[11] = component13;

head = head1;

let ExternProtoDeclare15 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "FlowerProto";
ExternProtoDeclare15.url = new MFString(new java.lang.String["../data/flowerproto.json#FlowerProto"]);
let field16 = browser.currentScene.createNode("field");
field16.accessType = "inputOutput";
field16.type = "MFString";
field16.name = "vertex";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.accessType = "inputOutput";
field17.type = "MFString";
field17.name = "fragment";
ExternProtoDeclare15.field[1] = field17;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare15;

let ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x3dom_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "flower";
let ProtoInterface19 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare18.protoInterface = ProtoInterface19;

let ProtoBody20 = browser.currentScene.createNode("ProtoBody");
let Group21 = browser.currentScene.createNode("Group");
let ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "FlowerProto";
let fieldValue23 = browser.currentScene.createNode("fieldValue");
fieldValue23.name = "vertex";
fieldValue23.value = "\"../shaders/x3dom_flowers_chromatic.vs\"";
ProtoInstance22.fieldValue = new MFNode();

ProtoInstance22.fieldValue[0] = fieldValue23;

let fieldValue24 = browser.currentScene.createNode("fieldValue");
fieldValue24.name = "fragment";
fieldValue24.value = "\"../shaders/common.fs\"";
ProtoInstance22.fieldValue[1] = fieldValue24;

Group21.children = new MFNode();

Group21.children[0] = ProtoInstance22;

ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = Group21;

ProtoDeclare18.protoBody = ProtoBody20;

browser.currentScene.children[1] = ProtoDeclare18;

let NavigationInfo25 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo25;

let Background26 = browser.currentScene.createNode("Background");
Background26.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background26.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background26.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background26.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background26.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background26.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
browser.currentScene.children[3] = Background26;

let Group27 = browser.currentScene.createNode("Group");
let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "flower";
Group27.children = new MFNode();

Group27.children[0] = ProtoInstance28;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "flower";
Group27.children[1] = ProtoInstance29;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group27.children[2] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group27.children[3] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group27.children[4] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group27.children[5] = ProtoInstance33;

browser.currentScene.children[4] = Group27;

