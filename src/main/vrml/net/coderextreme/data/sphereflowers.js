let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE","ANY"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background3;

let Group4 = browser.currentScene.createNode("Group");
let ExternProtoDeclare5 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare5.name = "FlowerProto";
ExternProtoDeclare5.url = new MFString(new java.lang.String["../data/flowerproto.json#FlowerProto"]);
let field6 = browser.currentScene.createNode("field");
field6.accessType = "inputOutput";
field6.name = "vertex";
field6.type = "MFString";
ExternProtoDeclare5.field = new MFNode();

ExternProtoDeclare5.field[0] = field6;

let field7 = browser.currentScene.createNode("field");
field7.accessType = "inputOutput";
field7.name = "fragment";
field7.type = "MFString";
ExternProtoDeclare5.field[1] = field7;

Group4.children = new MFNode();

Group4.children[0] = ExternProtoDeclare5;

let ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "flower";
let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
let Group10 = browser.currentScene.createNode("Group");
let ProtoInstance11 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance11.name = "FlowerProto";
let fieldValue12 = browser.currentScene.createNode("fieldValue");
fieldValue12.name = "vertex";
fieldValue12.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance11.fieldValue = new MFNode();

ProtoInstance11.fieldValue[0] = fieldValue12;

let fieldValue13 = browser.currentScene.createNode("fieldValue");
fieldValue13.name = "fragment";
fieldValue13.value = "\"../shaders/common.fs\"";
ProtoInstance11.fieldValue[1] = fieldValue13;

Group10.children = new MFNode();

Group10.children[0] = ProtoInstance11;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Group10;

ProtoDeclare8.protoBody = ProtoBody9;

Group4.children[1] = ProtoDeclare8;

let ProtoInstance14 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance14.name = "flower";
Group4.children[2] = ProtoInstance14;

let ProtoInstance15 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance15.name = "flower";
Group4.children[3] = ProtoInstance15;

let ProtoInstance16 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance16.name = "flower";
Group4.children[4] = ProtoInstance16;

let ProtoInstance17 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance17.name = "flower";
Group4.children[5] = ProtoInstance17;

let ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "flower";
Group4.children[6] = ProtoInstance18;

let ProtoInstance19 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance19.name = "flower";
Group4.children[7] = ProtoInstance19;

let TimeSensor20 = browser.currentScene.createNode("TimeSensor");
TimeSensor20.DEF = "SongTime";
TimeSensor20.loop = True;
Group4.children[8] = TimeSensor20;

let Sound21 = browser.currentScene.createNode("Sound");
Sound21.maxBack = 100;
Sound21.maxFront = 100;
Sound21.minBack = 20;
Sound21.minFront = 20;
let AudioClip22 = browser.currentScene.createNode("AudioClip");
AudioClip22.DEF = "AudioClip";
AudioClip22.description = "Chandubabamusic #1";
AudioClip22.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
Sound21.source = AudioClip22;

Group4.children[9] = Sound21;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromField = "cycleTime";
ROUTE23.fromNode = "SongTime";
ROUTE23.toField = "startTime";
ROUTE23.toNode = "AudioClip";
Group4.children[10] = ROUTE23;

browser.currentScene.children[2] = Group4;

