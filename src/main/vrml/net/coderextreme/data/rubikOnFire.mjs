const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "rubikOnFire.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d");
scene.addMetaData("description", "a white rubik cube");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("WALK"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Rubiks Cube on Fire";
Viewpoint9.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[1] = Viewpoint9;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "anyShape";
ProtoInterface12.getField("xtranslation").setValue("0 0 0");
ProtoInterface11YYY.field = new X3D.MFNode();

ProtoInterface13.getField("myShape")let Sphere14 = browser.currentScene.createNode("Sphere");
field13YYY.children = new X3D.MFNode();

field13ZZZ.children[0] = Sphere14;

ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Transform16 = browser.currentScene.createNode("Transform");
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "xtranslation";
IS17YYY.connect = new X3D.MFNode();

IS17ZZZ.connect[0] = connect18;

iS = IS17;

let Shape19 = browser.currentScene.createNode("Shape");
let IS20 = browser.currentScene.createNode("IS");
let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "geometry";
connect21.protoField = "myShape";
IS20YYY.connect = new X3D.MFNode();

IS20ZZZ.connect[0] = connect21;

iS = IS20;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material23;

appearance = Appearance22;

Transform16YYY.child = new X3D.undefined();

Transform16ZZZ.child[0] = Shape19;

ProtoBody15YYY.children = new X3D.MFNode();

ProtoBody15ZZZ.children[0] = Transform16;

protoBody = ProtoBody15;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
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
ProtoDeclare24.name = "three";
ProtoInterface26.getField("ytranslation").setValue("0 0 0");
ProtoInterface25YYY.field = new X3D.MFNode();

ProtoInterface27.getField("myShape")let Sphere28 = browser.currentScene.createNode("Sphere");
field27YYY.children = new X3D.MFNode();

field27ZZZ.children[0] = Sphere28;

ProtoInterface25YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface25;

let ProtoBody29 = browser.currentScene.createNode("ProtoBody");
let Transform30 = browser.currentScene.createNode("Transform");
let IS31 = browser.currentScene.createNode("IS");
let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "translation";
connect32.protoField = "ytranslation";
IS31YYY.connect = new X3D.MFNode();

IS31ZZZ.connect[0] = connect32;

iS = IS31;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "anyShape";
let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "xtranslation";
fieldValue34.value = "0 0 0";
ProtoInstance33YYY.fieldValue = new X3D.MFNode();

ProtoInstance33ZZZ.fieldValue[0] = fieldValue34;

let IS35 = browser.currentScene.createNode("IS");
let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "myShape";
connect36.protoField = "myShape";
IS35YYY.connect = new X3D.MFNode();

IS35ZZZ.connect[0] = connect36;

iS = IS35;

Transform30YYY.children = new X3D.MFNode();

Transform30ZZZ.children[0] = ProtoInstance33;

let ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "anyShape";
let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "xtranslation";
fieldValue38.value = "2 0 0";
ProtoInstance37YYY.fieldValue = new X3D.MFNode();

ProtoInstance37ZZZ.fieldValue[0] = fieldValue38;

let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "myShape";
connect40.protoField = "myShape";
IS39YYY.connect = new X3D.MFNode();

IS39ZZZ.connect[0] = connect40;

iS = IS39;

Transform30ZZZ.children[1] = ProtoInstance37;

let ProtoInstance41 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance41.name = "anyShape";
let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "xtranslation";
fieldValue42.value = "-2 0 0";
ProtoInstance41YYY.fieldValue = new X3D.MFNode();

ProtoInstance41ZZZ.fieldValue[0] = fieldValue42;

let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "myShape";
connect44.protoField = "myShape";
IS43YYY.connect = new X3D.MFNode();

IS43ZZZ.connect[0] = connect44;

iS = IS43;

Transform30ZZZ.children[2] = ProtoInstance41;

ProtoBody29YYY.children = new X3D.MFNode();

ProtoBody29ZZZ.children[0] = Transform30;

protoBody = ProtoBody29;

browser.currentScene.children[3] = ProtoDeclare24;

let ProtoDeclare45 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare45.name = "nine";
ProtoInterface47.getField("ztranslation").setValue("0 0 0");
ProtoInterface46YYY.field = new X3D.MFNode();

ProtoInterface48.getField("myShape")let Sphere49 = browser.currentScene.createNode("Sphere");
field48YYY.children = new X3D.MFNode();

field48ZZZ.children[0] = Sphere49;

ProtoInterface46YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface46;

let ProtoBody50 = browser.currentScene.createNode("ProtoBody");
let Transform51 = browser.currentScene.createNode("Transform");
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ztranslation";
IS52YYY.connect = new X3D.MFNode();

IS52ZZZ.connect[0] = connect53;

iS = IS52;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "three";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "ytranslation";
fieldValue55.value = "0 0 0";
ProtoInstance54YYY.fieldValue = new X3D.MFNode();

ProtoInstance54ZZZ.fieldValue[0] = fieldValue55;

let IS56 = browser.currentScene.createNode("IS");
let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "myShape";
connect57.protoField = "myShape";
IS56YYY.connect = new X3D.MFNode();

IS56ZZZ.connect[0] = connect57;

iS = IS56;

Transform51YYY.children = new X3D.MFNode();

Transform51ZZZ.children[0] = ProtoInstance54;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "three";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "ytranslation";
fieldValue59.value = "0 2 0";
ProtoInstance58YYY.fieldValue = new X3D.MFNode();

ProtoInstance58ZZZ.fieldValue[0] = fieldValue59;

let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "myShape";
connect61.protoField = "myShape";
IS60YYY.connect = new X3D.MFNode();

IS60ZZZ.connect[0] = connect61;

iS = IS60;

Transform51ZZZ.children[1] = ProtoInstance58;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "three";
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "ytranslation";
fieldValue63.value = "0 -2 0";
ProtoInstance62YYY.fieldValue = new X3D.MFNode();

ProtoInstance62ZZZ.fieldValue[0] = fieldValue63;

let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "myShape";
connect65.protoField = "myShape";
IS64YYY.connect = new X3D.MFNode();

IS64ZZZ.connect[0] = connect65;

iS = IS64;

Transform51ZZZ.children[2] = ProtoInstance62;

ProtoBody50YYY.children = new X3D.MFNode();

ProtoBody50ZZZ.children[0] = Transform51;

protoBody = ProtoBody50;

browser.currentScene.children[4] = ProtoDeclare45;

let ProtoDeclare66 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
<IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare66.name = "twentyseven";
ProtoInterface68.getField("ttranslation").setValue("0 0 0");
ProtoInterface67YYY.field = new X3D.MFNode();

ProtoInterface69.getField("myShape")let Sphere70 = browser.currentScene.createNode("Sphere");
field69YYY.children = new X3D.MFNode();

field69ZZZ.children[0] = Sphere70;

ProtoInterface67YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface67;

let ProtoBody71 = browser.currentScene.createNode("ProtoBody");
let Transform72 = browser.currentScene.createNode("Transform");
let IS73 = browser.currentScene.createNode("IS");
let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "translation";
connect74.protoField = "ttranslation";
IS73YYY.connect = new X3D.MFNode();

IS73ZZZ.connect[0] = connect74;

iS = IS73;

let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "nine";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "ztranslation";
fieldValue76.value = "0 0 0";
ProtoInstance75YYY.fieldValue = new X3D.MFNode();

ProtoInstance75ZZZ.fieldValue[0] = fieldValue76;

let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "myShape";
connect78.protoField = "myShape";
IS77YYY.connect = new X3D.MFNode();

IS77ZZZ.connect[0] = connect78;

iS = IS77;

Transform72YYY.children = new X3D.MFNode();

Transform72ZZZ.children[0] = ProtoInstance75;

let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "nine";
let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "ztranslation";
fieldValue80.value = "0 0 2";
ProtoInstance79YYY.fieldValue = new X3D.MFNode();

ProtoInstance79ZZZ.fieldValue[0] = fieldValue80;

let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "myShape";
connect82.protoField = "myShape";
IS81YYY.connect = new X3D.MFNode();

IS81ZZZ.connect[0] = connect82;

iS = IS81;

Transform72ZZZ.children[1] = ProtoInstance79;

let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "nine";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "ztranslation";
fieldValue84.value = "0 0 -2";
ProtoInstance83YYY.fieldValue = new X3D.MFNode();

ProtoInstance83ZZZ.fieldValue[0] = fieldValue84;

let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "myShape";
connect86.protoField = "myShape";
IS85YYY.connect = new X3D.MFNode();

IS85ZZZ.connect[0] = connect86;

iS = IS85;

Transform72ZZZ.children[2] = ProtoInstance83;

ProtoBody71YYY.children = new X3D.MFNode();

ProtoBody71ZZZ.children[0] = Transform72;

protoBody = ProtoBody71;

browser.currentScene.children[5] = ProtoDeclare66;

let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "twentyseven";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "ttranslation";
fieldValue88.value = "0 0 0";
ProtoInstance87YYY.fieldValue = new X3D.MFNode();

ProtoInstance87ZZZ.fieldValue[0] = fieldValue88;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "myShape";
let Box90 = browser.currentScene.createNode("Box");
Box90.size = new X3D.SFVec3f([1,1,1]);
fieldValue89YYY.children = new X3D.MFNode();

fieldValue89ZZZ.children[0] = Box90;

ProtoInstance87ZZZ.fieldValue[1] = fieldValue89;

browser.currentScene.children[6] = ProtoInstance87;

}
main ();
