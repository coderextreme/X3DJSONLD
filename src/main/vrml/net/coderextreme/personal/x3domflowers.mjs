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
scene.addMetaData("title", "x3domflowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "5 or more prismatic flowers");
scene.addMetaData("generator", "X3D-Edit, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/x3domflowers.x3d");
await browser .loadComponents (scene);
let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo16;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background17.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background17.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background17.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background17.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background17.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[1] = Background17;

let Group18 = browser.currentScene.createNode("Group");
let ExternProtoDeclare19 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "FlowerProto";
ExternProtoDeclare19.url = new X3D.MFString([new X3D.SFString("../personal/flowerproto.json#FlowerProto")]);
ExternProtoDeclare20.getField("vertex")ExternProtoDeclare19YYY.field = new X3D.MFNode();

ExternProtoDeclare21.getField("fragment")ExternProtoDeclare19YYY.field = new X3D.MFNode();

Group18YYY.children = new X3D.MFNode();

Group18ZZZ.children[0] = ExternProtoDeclare19;

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
ProtoInstance25YYY.fieldValue = new X3D.MFNode();

ProtoInstance25ZZZ.fieldValue[0] = fieldValue26;

let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "fragment";
fieldValue27.value = "\"../shaders/common.fs\"";
ProtoInstance25ZZZ.fieldValue[1] = fieldValue27;

Group24YYY.children = new X3D.MFNode();

Group24ZZZ.children[0] = ProtoInstance25;

ProtoBody23YYY.children = new X3D.MFNode();

ProtoBody23ZZZ.children[0] = Group24;

protoBody = ProtoBody23;

Group18ZZZ.children[1] = ProtoDeclare22;

let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "flower";
Group18ZZZ.children[2] = ProtoInstance28;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "flower";
Group18ZZZ.children[3] = ProtoInstance29;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "flower";
Group18ZZZ.children[4] = ProtoInstance30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "flower";
Group18ZZZ.children[5] = ProtoInstance31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "flower";
Group18ZZZ.children[6] = ProtoInstance32;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "flower";
Group18ZZZ.children[7] = ProtoInstance33;

browser.currentScene.children[2] = Group18;

}
main ();
