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
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/freewrlflowers.x3d");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Background9 = browser.currentScene.createNode("Background");
Background9.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background9.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background9.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background9.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background9.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background9.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[1] = Background9;

let Group10 = browser.currentScene.createNode("Group");
let ExternProtoDeclare11 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare11.name = "FlowerProto";
ExternProtoDeclare11.url = new X3D.MFString([new X3D.SFString("../personal/flowerproto.x3d#FlowerProto")]);
ExternProtoDeclare12.getField("vertex")ExternProtoDeclare11YYY.field = new X3D.MFNode();

ExternProtoDeclare13.getField("fragment")ExternProtoDeclare11YYY.field = new X3D.MFNode();

Group10YYY.children = new X3D.MFNode();

Group10ZZZ.children[0] = ExternProtoDeclare11;

let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/freewrl_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/freewrl.fs&quot;"></fieldValue>
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
fieldValue18.value = "\"../shaders/freewrl_flowers_chromatic.vs\"";
ProtoInstance17YYY.fieldValue = new X3D.MFNode();

ProtoInstance17ZZZ.fieldValue[0] = fieldValue18;

let fieldValue19 = browser.currentScene.createNode("fieldValue");
fieldValue19.name = "fragment";
fieldValue19.value = "\"../shaders/freewrl.fs\"";
ProtoInstance17ZZZ.fieldValue[1] = fieldValue19;

Group16YYY.children = new X3D.MFNode();

Group16ZZZ.children[0] = ProtoInstance17;

ProtoBody15YYY.children = new X3D.MFNode();

ProtoBody15ZZZ.children[0] = Group16;

protoBody = ProtoBody15;

Group10ZZZ.children[1] = ProtoDeclare14;

let ProtoInstance20 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance20.name = "flower";
Group10ZZZ.children[2] = ProtoInstance20;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "flower";
Group10ZZZ.children[3] = ProtoInstance21;

let ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "flower";
Group10ZZZ.children[4] = ProtoInstance22;

let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "flower";
Group10ZZZ.children[5] = ProtoInstance23;

let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "flower";
Group10ZZZ.children[6] = ProtoInstance24;

let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "flower";
Group10ZZZ.children[7] = ProtoInstance25;

browser.currentScene.children[2] = Group10;

}
main ();
