let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "title";
meta10.content = "x3domflowers.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "5 or more prismatic flowers";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d";
head1.meta[12] = meta14;

head = head1;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo16;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background17;

let Group18 = browser.currentScene.createNode("Group");
let ExternProtoDeclare19 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "FlowerProto";
ExternProtoDeclare19.url = new MFString(new java.lang.String["../data/flowerproto.json#FlowerProto"]);
let field20 = browser.currentScene.createNode("field");
field20.name = "vertex";
field20.accessType = "inputOutput";
field20.type = "MFString";
ExternProtoDeclare19.field = new MFNode();

ExternProtoDeclare19.field[0] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "fragment";
field21.accessType = "inputOutput";
field21.type = "MFString";
ExternProtoDeclare19.field[1] = field21;

Group18.children = new MFNode();

Group18.children[0] = ExternProtoDeclare19;

let ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x3dom_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare22.name = "flower";
let ProtoBody23 = browser.currentScene.createNode("ProtoBody");
let Group24 = browser.currentScene.createNode("Group");
let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "FlowerProto";
let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "vertex";
fieldValue26.value = "\"../shaders/x3dom_flowers_chromatic.vs\"";
ProtoInstance25.fieldValue = new MFNode();

ProtoInstance25.fieldValue[0] = fieldValue26;

let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "fragment";
fieldValue27.value = "\"../shaders/common.fs\"";
ProtoInstance25.fieldValue[1] = fieldValue27;

Group24.children = new MFNode();

Group24.children[0] = ProtoInstance25;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Group24;

ProtoDeclare22.protoBody = ProtoBody23;

Group18.children[1] = ProtoDeclare22;

let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "flower";
Group18.children[2] = ProtoInstance28;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "flower";
Group18.children[3] = ProtoInstance29;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group18.children[4] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group18.children[5] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group18.children[6] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group18.children[7] = ProtoInstance33;

browser.currentScene.children[2] = Group18;

