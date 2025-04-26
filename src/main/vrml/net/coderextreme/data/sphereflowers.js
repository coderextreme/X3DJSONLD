const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "sphereflowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "Jan 17 2022");
scene.addMetaData("modified", "Sep 3 2023");
scene.addMetaData("description", "5 or more prismatic flowers");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d");
await browser .loadComponents (scene);
let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo18;

let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background19.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background19.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background19.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background19.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background19.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[1] = Background19;

let Group20 = browser.currentScene.createNode("Group");
let ExternProtoDeclare21 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare21.name = "FlowerProto";
ExternProtoDeclare21.url = new X3D.MFString([new X3D.SFString("../data/flowerproto.x3d#FlowerProto"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto")]);
ExternProtoDeclare22.getField("vertex")ExternProtoDeclare21YYY.field = new X3D.MFNode();

ExternProtoDeclare23.getField("fragment")ExternProtoDeclare21YYY.field = new X3D.MFNode();

Group20YYY.children = new X3D.MFNode();

Group20ZZZ.children[0] = ExternProtoDeclare21;

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
ProtoInstance27YYY.fieldValue = new X3D.MFNode();

ProtoInstance27ZZZ.fieldValue[0] = fieldValue28;

let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "fragment";
fieldValue29.value = "\"../shaders/x_ite.fs\"";
ProtoInstance27ZZZ.fieldValue[1] = fieldValue29;

Group26YYY.children = new X3D.MFNode();

Group26ZZZ.children[0] = ProtoInstance27;

ProtoBody25YYY.children = new X3D.MFNode();

ProtoBody25ZZZ.children[0] = Group26;

protoBody = ProtoBody25;

Group20ZZZ.children[1] = ProtoDeclare24;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group20ZZZ.children[2] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group20ZZZ.children[3] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group20ZZZ.children[4] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group20ZZZ.children[5] = ProtoInstance33;

let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "flower";
Group20ZZZ.children[6] = ProtoInstance34;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "flower";
Group20ZZZ.children[7] = ProtoInstance35;

let TimeSensor36 = browser.currentScene.createNode("TimeSensor");
TimeSensor36.DEF = "SongTime";
TimeSensor36.loop = True;
Group20ZZZ.children[8] = TimeSensor36;

let Sound37 = browser.currentScene.createNode("Sound");
Sound37.maxBack = 100;
Sound37.maxFront = 100;
Sound37.minBack = 20;
Sound37.minFront = 20;
Sound37.location = new X3D.SFVec3f([0,1,0]);
let AudioClip38 = browser.currentScene.createNode("AudioClip");
AudioClip38.DEF = "AudioClip";
AudioClip38.description = "Chandubabamusic #1";
AudioClip38.url = new X3D.MFString([new X3D.SFString("../resources/chandubabamusic1.wav"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav")]);
source = AudioClip38;

Group20ZZZ.children[9] = Sound37;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "cycleTime";
ROUTE39.fromNode = "SongTime";
ROUTE39.toField = "startTime";
ROUTE39.toNode = "AudioClip";
Group20ZZZ.children[10] = ROUTE39;

browser.currentScene.children[2] = Group20;

}
main ();
