const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "abox.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/abox.x3d");
scene.addMetaData("description", "a box");
await browser .loadComponents (scene);
let ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "anyShape";
ProtoInterface10.getField("myShape")let Shape11 = browser.currentScene.createNode("Shape");
let Sphere12 = browser.currentScene.createNode("Sphere");
geometry = Sphere12;

field10YYY.children = new X3D.MFNode();

field10ZZZ.children[0] = Shape11;

ProtoInterface9YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface9;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "children";
connect16.protoField = "myShape";
IS15YYY.connect = new X3D.MFNode();

IS15ZZZ.connect[0] = connect16;

iS = IS15;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Transform14;

protoBody = ProtoBody13;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare8;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "one";
ProtoInterface19.getField("myShape")let Shape20 = browser.currentScene.createNode("Shape");
let Cylinder21 = browser.currentScene.createNode("Cylinder");
geometry = Cylinder21;

field19YYY.children = new X3D.MFNode();

field19ZZZ.children[0] = Shape20;

ProtoInterface18YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface18;

let ProtoBody22 = browser.currentScene.createNode("ProtoBody");
let Transform23 = browser.currentScene.createNode("Transform");
let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "anyShape";
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "myShape";
connect26.protoField = "myShape";
IS25YYY.connect = new X3D.MFNode();

IS25ZZZ.connect[0] = connect26;

iS = IS25;

Transform23YYY.children = new X3D.MFNode();

Transform23ZZZ.children[0] = ProtoInstance24;

ProtoBody22YYY.children = new X3D.MFNode();

ProtoBody22ZZZ.children[0] = Transform23;

protoBody = ProtoBody22;

browser.currentScene.children[1] = ProtoDeclare17;

let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "one";
let fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "myShape";
let Shape29 = browser.currentScene.createNode("Shape");
let Box30 = browser.currentScene.createNode("Box");
Box30.size = new X3D.SFVec3f([140,140,140]);
geometry = Box30;

fieldValue28YYY.children = new X3D.MFNode();

fieldValue28ZZZ.children[0] = Shape29;

ProtoInstance27YYY.fieldValue = new X3D.MFNode();

ProtoInstance27ZZZ.fieldValue[0] = fieldValue28;

browser.currentScene.children[2] = ProtoInstance27;

}
main ();
