const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "freewrlflowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "5 or more prismatic flowers");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Tour Views";
Viewpoint9.position = new X3D.SFVec3f([0,0,50]);
browser.currentScene.children[1] = Viewpoint9;

let Background10 = browser.currentScene.createNode("Background");
Background10.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background10.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background10.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background10.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background10.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background10.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[2] = Background10;

let Group11 = browser.currentScene.createNode("Group");
let ExternProtoDeclare12 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "FlowerProto";
ExternProtoDeclare12.url = new X3D.MFString([new X3D.SFString("../data/flowerprotofreewrl.x3d#FlowerProto"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto")]);
ExternProtoDeclare13.getField("vertex")ExternProtoDeclare12YYY.field = new X3D.MFNode();

ExternProtoDeclare14.getField("fragment")ExternProtoDeclare12YYY.field = new X3D.MFNode();

Group11YYY.children = new X3D.MFNode();

Group11ZZZ.children[0] = ExternProtoDeclare12;

let ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/freewrl_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/freewrl.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "flower";
let ProtoBody16 = browser.currentScene.createNode("ProtoBody");
let Group17 = browser.currentScene.createNode("Group");
let ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "FlowerProto";
let fieldValue19 = browser.currentScene.createNode("fieldValue");
fieldValue19.name = "vertex";
fieldValue19.value = "\"../shaders/freewrl_flowers_chromatic.vs\"";
ProtoInstance18YYY.fieldValue = new X3D.MFNode();

ProtoInstance18ZZZ.fieldValue[0] = fieldValue19;

let fieldValue20 = browser.currentScene.createNode("fieldValue");
fieldValue20.name = "fragment";
fieldValue20.value = "\"../shaders/freewrl.fs\"";
ProtoInstance18ZZZ.fieldValue[1] = fieldValue20;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = ProtoInstance18;

ProtoBody16YYY.children = new X3D.MFNode();

ProtoBody16ZZZ.children[0] = Group17;

protoBody = ProtoBody16;

Group11ZZZ.children[1] = ProtoDeclare15;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group11ZZZ.children[2] = ProtoInstance21;

let ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group11ZZZ.children[3] = ProtoInstance22;

let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group11ZZZ.children[4] = ProtoInstance23;

let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group11ZZZ.children[5] = ProtoInstance24;

let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group11ZZZ.children[6] = ProtoInstance25;

let ProtoInstance26 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance26.name = "flower";
Group11ZZZ.children[7] = ProtoInstance26;

browser.currentScene.children[3] = Group11;

}
main ();
