let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta10.content = "sphereflowers.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "created";
meta12.content = "Jan 17 2022";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "modified";
meta13.content = "Sep 3 2023";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "description";
meta14.content = "5 or more prismatic flowers";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "identifier";
meta16.content = "https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d";
head1.meta[14] = meta16;

head = head1;

let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background19;

let Group20 = browser.currentScene.createNode("Group");
let ExternProtoDeclare21 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare21.name = "FlowerProto";
ExternProtoDeclare21.url = new MFString(new java.lang.String["../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"]);
let field22 = browser.currentScene.createNode("field");
field22.name = "vertex";
field22.accessType = "inputOutput";
field22.type = "MFString";
ExternProtoDeclare21.field = new MFNode();

ExternProtoDeclare21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "fragment";
field23.accessType = "inputOutput";
field23.type = "MFString";
ExternProtoDeclare21.field[1] = field23;

Group20.children = new MFNode();

Group20.children[0] = ExternProtoDeclare21;

let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "flower";
let ProtoBody25 = browser.currentScene.createNode("ProtoBody");
let Group26 = browser.currentScene.createNode("Group");
let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "FlowerProto";
let fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "vertex";
fieldValue28.value = "\"../shaders/x_ite_flowers_chromatic.vs\"";
ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "fragment";
fieldValue29.value = "\"../shaders/x_ite.fs\"";
ProtoInstance27.fieldValue[1] = fieldValue29;

Group26.children = new MFNode();

Group26.children[0] = ProtoInstance27;

ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Group26;

ProtoDeclare24.protoBody = ProtoBody25;

Group20.children[1] = ProtoDeclare24;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group20.children[2] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group20.children[3] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group20.children[4] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group20.children[5] = ProtoInstance33;

let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "flower";
Group20.children[6] = ProtoInstance34;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "flower";
Group20.children[7] = ProtoInstance35;

let TimeSensor36 = browser.currentScene.createNode("TimeSensor");
TimeSensor36.DEF = "SongTime";
TimeSensor36.loop = True;
Group20.children[8] = TimeSensor36;

let Sound37 = browser.currentScene.createNode("Sound");
Sound37.maxBack = 100;
Sound37.maxFront = 100;
Sound37.minBack = 20;
Sound37.minFront = 20;
Sound37.location = new SFVec3f(new float[0,1,0]);
let AudioClip38 = browser.currentScene.createNode("AudioClip");
AudioClip38.DEF = "AudioClip";
AudioClip38.description = "Chandubabamusic #1";
AudioClip38.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"]);
Sound37.source = AudioClip38;

Group20.children[9] = Sound37;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "cycleTime";
ROUTE39.fromNode = "SongTime";
ROUTE39.toField = "startTime";
ROUTE39.toNode = "AudioClip";
Group20.children[10] = ROUTE39;

browser.currentScene.children[2] = Group20;

