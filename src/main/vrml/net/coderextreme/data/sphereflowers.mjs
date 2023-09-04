let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "sphereflowers.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "Jan 17 2022";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "modified";
meta5.content = "Sep 03 2023";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "5 or more prismatic flowers";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Scripting";
component8.level = 1;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "EnvironmentalEffects";
component9.level = 3;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Shaders";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "CubeMapTexturing";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Texturing";
component12.level = 1;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Rendering";
component13.level = 1;
head1.component[11] = component13;

let component14 = browser.currentScene.createNode("component");
component14.name = "Grouping";
component14.level = 3;
head1.component[12] = component14;

let component15 = browser.currentScene.createNode("component");
component15.name = "Core";
component15.level = 1;
head1.component[13] = component15;

head = head1;

let ExternProtoDeclare17 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "FlowerProto";
ExternProtoDeclare17.url = new MFString(new java.lang.String["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto"]);
let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFString";
field18.name = "vertex";
ExternProtoDeclare17.field = new MFNode();

ExternProtoDeclare17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "MFString";
field19.name = "fragment";
ExternProtoDeclare17.field[1] = field19;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare17;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare20.name = "flower";
let ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare20.protoInterface = ProtoInterface21;

let ProtoBody22 = browser.currentScene.createNode("ProtoBody");
let Group23 = browser.currentScene.createNode("Group");
let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "FlowerProto";
let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "vertex";
fieldValue25.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "fragment";
fieldValue26.value = "\"../shaders/x_ite.fs\"";
ProtoInstance24.fieldValue[1] = fieldValue26;

Group23.children = new MFNode();

Group23.children[0] = ProtoInstance24;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Group23;

ProtoDeclare20.protoBody = ProtoBody22;

browser.currentScene.children[1] = ProtoDeclare20;

let NavigationInfo27 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo27;

let Background28 = browser.currentScene.createNode("Background");
Background28.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background28.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background28.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background28.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background28.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"]);
Background28.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
browser.currentScene.children[3] = Background28;

let Group29 = browser.currentScene.createNode("Group");
let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group29.children = new MFNode();

Group29.children[0] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group29.children[1] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group29.children[2] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group29.children[3] = ProtoInstance33;

let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "flower";
Group29.children[4] = ProtoInstance34;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "flower";
Group29.children[5] = ProtoInstance35;

let TimeSensor36 = browser.currentScene.createNode("TimeSensor");
TimeSensor36.DEF = "SongTime";
TimeSensor36.loop = True;
Group29.children[6] = TimeSensor36;

let Sound37 = browser.currentScene.createNode("Sound");
Sound37.minBack = 20;
Sound37.minFront = 20;
Sound37.maxBack = 100;
Sound37.maxFront = 100;
let AudioClip38 = browser.currentScene.createNode("AudioClip");
AudioClip38.DEF = "AudioClip";
AudioClip38.description = "Chandubabamusic #1";
AudioClip38.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"]);
Sound37.source = AudioClip38;

Group29.children[7] = Sound37;

browser.currentScene.children[4] = Group29;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "SongTime";
ROUTE39.fromField = "cycleTime";
ROUTE39.toNode = "AudioClip";
ROUTE39.toField = "startTime";
browser.currentScene.children[5] = ROUTE39;

