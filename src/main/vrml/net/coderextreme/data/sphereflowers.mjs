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
meta5.content = "Sat, 30 Dec 2023 07:58:44 GMT";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "5 or more prismatic flowers";
head1.meta[4] = meta6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Scripting";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "EnvironmentalEffects";
component8.level = 3;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Shaders";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "CubeMapTexturing";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Texturing";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Rendering";
component12.level = 1;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Grouping";
component13.level = 3;
head1.component[11] = component13;

let component14 = browser.currentScene.createNode("component");
component14.name = "Core";
component14.level = 1;
head1.component[12] = component14;

head = head1;

let ExternProtoDeclare16 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "FlowerProto";
ExternProtoDeclare16.url = new MFString(new java.lang.String["../personal/flowerproto.json#FlowerProto"]);
let field17 = browser.currentScene.createNode("field");
field17.accessType = "inputOutput";
field17.type = "MFString";
field17.name = "vertex";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFString";
field18.name = "fragment";
ExternProtoDeclare16.field[1] = field18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare16;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "flower";
let ProtoInterface20 = browser.currentScene.createNode("ProtoInterface");
ProtoDeclare19.protoInterface = ProtoInterface20;

let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Group22 = browser.currentScene.createNode("Group");
let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "FlowerProto";
let fieldValue24 = browser.currentScene.createNode("fieldValue");
fieldValue24.name = "vertex";
fieldValue24.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance23.fieldValue = new MFNode();

ProtoInstance23.fieldValue[0] = fieldValue24;

let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "fragment";
fieldValue25.value = "\"../shaders/x_ite.fs\"";
ProtoInstance23.fieldValue[1] = fieldValue25;

Group22.children = new MFNode();

Group22.children[0] = ProtoInstance23;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Group22;

ProtoDeclare19.protoBody = ProtoBody21;

browser.currentScene.children[1] = ProtoDeclare19;

let NavigationInfo26 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[2] = NavigationInfo26;

let Background27 = browser.currentScene.createNode("Background");
Background27.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background27.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background27.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background27.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background27.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background27.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
browser.currentScene.children[3] = Background27;

let Group28 = browser.currentScene.createNode("Group");
let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "flower";
Group28.children = new MFNode();

Group28.children[0] = ProtoInstance29;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group28.children[1] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group28.children[2] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group28.children[3] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group28.children[4] = ProtoInstance33;

let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "flower";
Group28.children[5] = ProtoInstance34;

let TimeSensor35 = browser.currentScene.createNode("TimeSensor");
TimeSensor35.DEF = "SongTime";
TimeSensor35.loop = True;
Group28.children[6] = TimeSensor35;

let Sound36 = browser.currentScene.createNode("Sound");
Sound36.location = new SFVec3f(new float[0,1,0]);
Sound36.minBack = 20;
Sound36.minFront = 20;
Sound36.maxBack = 100;
Sound36.maxFront = 100;
let AudioClip37 = browser.currentScene.createNode("AudioClip");
AudioClip37.DEF = "AudioClip";
AudioClip37.description = "Chandubabamusic #1";
AudioClip37.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
AudioClip37.startTime = 1703923124.156;
Sound36.source = AudioClip37;

Group28.children[7] = Sound36;

browser.currentScene.children[4] = Group28;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "SongTime";
ROUTE38.fromField = "cycleTime";
ROUTE38.toNode = "AudioClip";
ROUTE38.toField = "startTime";
browser.currentScene.children[5] = ROUTE38;

