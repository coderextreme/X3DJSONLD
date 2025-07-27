const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "BoxEm.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/box.x3d");
scene.addMetaData("description", "3 boxes");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Cubes on Fire";
Viewpoint9.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[1] = Viewpoint9;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "anyShape";
ProtoInterface12.getField("xtranslation").setValue("0 0 0");
ProtoInterface11YYY.field = new X3D.MFNode();

ProtoInterface13.getField("myShape")let Shape14 = browser.currentScene.createNode("Shape");
let Sphere15 = browser.currentScene.createNode("Sphere");
geometry = Sphere15;

let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material17;

appearance = Appearance16;

field13YYY.children = new X3D.MFNode();

field13ZZZ.children[0] = Shape14;

ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
let Transform19 = browser.currentScene.createNode("Transform");
let IS20 = browser.currentScene.createNode("IS");
let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "translation";
connect21.protoField = "xtranslation";
IS20YYY.connect = new X3D.MFNode();

IS20ZZZ.connect[0] = connect21;

let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "children";
connect22.protoField = "myShape";
IS20ZZZ.connect[1] = connect22;

iS = IS20;

ProtoBody18YYY.children = new X3D.MFNode();

ProtoBody18ZZZ.children[0] = Transform19;

protoBody = ProtoBody18;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoDeclare23 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder></Cylinder>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="anyShape"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare23.name = "three";
ProtoInterface25.getField("ytranslation").setValue("0 0 0");
ProtoInterface24YYY.field = new X3D.MFNode();

ProtoInterface26.getField("myShape")let Shape27 = browser.currentScene.createNode("Shape");
let Cylinder28 = browser.currentScene.createNode("Cylinder");
geometry = Cylinder28;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material30;

appearance = Appearance29;

field26YYY.children = new X3D.MFNode();

field26ZZZ.children[0] = Shape27;

ProtoInterface24YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface24;

let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Transform32 = browser.currentScene.createNode("Transform");
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "ytranslation";
IS33YYY.connect = new X3D.MFNode();

IS33ZZZ.connect[0] = connect34;

iS = IS33;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "anyShape";
let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "xtranslation";
fieldValue36.value = "0 0 0";
ProtoInstance35YYY.fieldValue = new X3D.MFNode();

ProtoInstance35ZZZ.fieldValue[0] = fieldValue36;

let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "myShape";
connect38.protoField = "myShape";
IS37YYY.connect = new X3D.MFNode();

IS37ZZZ.connect[0] = connect38;

iS = IS37;

Transform32YYY.children = new X3D.MFNode();

Transform32ZZZ.children[0] = ProtoInstance35;

let ProtoInstance39 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance39.name = "anyShape";
let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "xtranslation";
fieldValue40.value = "2 0 0";
ProtoInstance39YYY.fieldValue = new X3D.MFNode();

ProtoInstance39ZZZ.fieldValue[0] = fieldValue40;

let IS41 = browser.currentScene.createNode("IS");
let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "myShape";
connect42.protoField = "myShape";
IS41YYY.connect = new X3D.MFNode();

IS41ZZZ.connect[0] = connect42;

iS = IS41;

Transform32ZZZ.children[1] = ProtoInstance39;

let ProtoInstance43 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance43.name = "anyShape";
let fieldValue44 = browser.currentScene.createNode("fieldValue");
fieldValue44.name = "xtranslation";
fieldValue44.value = "-2 0 0";
ProtoInstance43YYY.fieldValue = new X3D.MFNode();

ProtoInstance43ZZZ.fieldValue[0] = fieldValue44;

let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "myShape";
connect46.protoField = "myShape";
IS45YYY.connect = new X3D.MFNode();

IS45ZZZ.connect[0] = connect46;

iS = IS45;

Transform32ZZZ.children[2] = ProtoInstance43;

ProtoBody31YYY.children = new X3D.MFNode();

ProtoBody31ZZZ.children[0] = Transform32;

protoBody = ProtoBody31;

browser.currentScene.children[3] = ProtoDeclare23;

let ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "three";
ProtoInstance47.DEF = "threepi";
let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "ytranslation";
fieldValue48.value = "0 0 0";
ProtoInstance47YYY.fieldValue = new X3D.MFNode();

ProtoInstance47ZZZ.fieldValue[0] = fieldValue48;

let fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "myShape";
let Shape50 = browser.currentScene.createNode("Shape");
Shape50.DEF = "box";
let Box51 = browser.currentScene.createNode("Box");
Box51.size = new X3D.SFVec3f([1,1,1]);
geometry = Box51;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material53;

appearance = Appearance52;

fieldValue49YYY.children = new X3D.MFNode();

fieldValue49ZZZ.children[0] = Shape50;

ProtoInstance47ZZZ.fieldValue[1] = fieldValue49;

browser.currentScene.children[4] = ProtoInstance47;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new X3D.SFVec3f([0,2,0]);
let Shape55 = browser.currentScene.createNode("Shape");
Shape55.USE = "box";
Transform54YYY.child = new X3D.undefined();

Transform54ZZZ.child[0] = Shape55;

browser.currentScene.children[5] = Transform54;

}
main ();
