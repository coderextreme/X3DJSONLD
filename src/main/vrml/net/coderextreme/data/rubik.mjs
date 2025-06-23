const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "rubik.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d");
scene.addMetaData("description", "a kind of rubik cube with spheres");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Rubiks Cube";
Viewpoint9.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[1] = Viewpoint9;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="sphereproto" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "sphereproto";
ProtoInterface12.getField("xtranslation").setValue("0 0 0");
ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "xtranslation";
IS15YYY.connect = new X3D.MFNode();

IS15ZZZ.connect[0] = connect16;

iS = IS15;

let Shape17 = browser.currentScene.createNode("Shape");
let Sphere18 = browser.currentScene.createNode("Sphere");
geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material20;

appearance = Appearance19;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape17;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Transform14;

protoBody = ProtoBody13;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "three";
ProtoInterface23.getField("ytranslation").setValue("0 0 0");
ProtoInterface22YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface22;

let ProtoBody24 = browser.currentScene.createNode("ProtoBody");
let Transform25 = browser.currentScene.createNode("Transform");
let IS26 = browser.currentScene.createNode("IS");
let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "translation";
connect27.protoField = "ytranslation";
IS26YYY.connect = new X3D.MFNode();

IS26ZZZ.connect[0] = connect27;

iS = IS26;

let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "sphereproto";
let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "xtranslation";
fieldValue29.value = "0 0 0";
ProtoInstance28YYY.fieldValue = new X3D.MFNode();

ProtoInstance28ZZZ.fieldValue[0] = fieldValue29;

Transform25YYY.children = new X3D.MFNode();

Transform25ZZZ.children[0] = ProtoInstance28;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "sphereproto";
let fieldValue31 = browser.currentScene.createNode("fieldValue");
fieldValue31.name = "xtranslation";
fieldValue31.value = "2 0 0";
ProtoInstance30YYY.fieldValue = new X3D.MFNode();

ProtoInstance30ZZZ.fieldValue[0] = fieldValue31;

Transform25ZZZ.children[1] = ProtoInstance30;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "sphereproto";
let fieldValue33 = browser.currentScene.createNode("fieldValue");
fieldValue33.name = "xtranslation";
fieldValue33.value = "-2 0 0";
ProtoInstance32YYY.fieldValue = new X3D.MFNode();

ProtoInstance32ZZZ.fieldValue[0] = fieldValue33;

Transform25ZZZ.children[2] = ProtoInstance32;

ProtoBody24YYY.children = new X3D.MFNode();

ProtoBody24ZZZ.children[0] = Transform25;

protoBody = ProtoBody24;

browser.currentScene.children[3] = ProtoDeclare21;

let ProtoDeclare34 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare34.name = "nine";
ProtoInterface36.getField("ztranslation").setValue("0 0 0");
ProtoInterface35YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface35;

let ProtoBody37 = browser.currentScene.createNode("ProtoBody");
let Transform38 = browser.currentScene.createNode("Transform");
let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "translation";
connect40.protoField = "ztranslation";
IS39YYY.connect = new X3D.MFNode();

IS39ZZZ.connect[0] = connect40;

iS = IS39;

let ProtoInstance41 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance41.name = "three";
let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "ytranslation";
fieldValue42.value = "0 0 0";
ProtoInstance41YYY.fieldValue = new X3D.MFNode();

ProtoInstance41ZZZ.fieldValue[0] = fieldValue42;

Transform38YYY.children = new X3D.MFNode();

Transform38ZZZ.children[0] = ProtoInstance41;

let ProtoInstance43 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance43.name = "three";
let fieldValue44 = browser.currentScene.createNode("fieldValue");
fieldValue44.name = "ytranslation";
fieldValue44.value = "0 2 0";
ProtoInstance43YYY.fieldValue = new X3D.MFNode();

ProtoInstance43ZZZ.fieldValue[0] = fieldValue44;

Transform38ZZZ.children[1] = ProtoInstance43;

let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "three";
let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "ytranslation";
fieldValue46.value = "0 -2 0";
ProtoInstance45YYY.fieldValue = new X3D.MFNode();

ProtoInstance45ZZZ.fieldValue[0] = fieldValue46;

Transform38ZZZ.children[2] = ProtoInstance45;

ProtoBody37YYY.children = new X3D.MFNode();

ProtoBody37ZZZ.children[0] = Transform38;

protoBody = ProtoBody37;

browser.currentScene.children[4] = ProtoDeclare34;

let ProtoDeclare47 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare47.name = "twentyseven";
ProtoInterface49.getField("ttranslation").setValue("0 0 0");
ProtoInterface48YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface48;

let ProtoBody50 = browser.currentScene.createNode("ProtoBody");
let Transform51 = browser.currentScene.createNode("Transform");
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ttranslation";
IS52YYY.connect = new X3D.MFNode();

IS52ZZZ.connect[0] = connect53;

iS = IS52;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "nine";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "ztranslation";
fieldValue55.value = "0 0 0";
ProtoInstance54YYY.fieldValue = new X3D.MFNode();

ProtoInstance54ZZZ.fieldValue[0] = fieldValue55;

Transform51YYY.children = new X3D.MFNode();

Transform51ZZZ.children[0] = ProtoInstance54;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "nine";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "ztranslation";
fieldValue57.value = "0 0 2";
ProtoInstance56YYY.fieldValue = new X3D.MFNode();

ProtoInstance56ZZZ.fieldValue[0] = fieldValue57;

Transform51ZZZ.children[1] = ProtoInstance56;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "nine";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "ztranslation";
fieldValue59.value = "0 0 -2";
ProtoInstance58YYY.fieldValue = new X3D.MFNode();

ProtoInstance58ZZZ.fieldValue[0] = fieldValue59;

Transform51ZZZ.children[2] = ProtoInstance58;

ProtoBody50YYY.children = new X3D.MFNode();

ProtoBody50ZZZ.children[0] = Transform51;

protoBody = ProtoBody50;

browser.currentScene.children[5] = ProtoDeclare47;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "twentyseven";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "ttranslation";
fieldValue61.value = "0 0 0";
ProtoInstance60YYY.fieldValue = new X3D.MFNode();

ProtoInstance60ZZZ.fieldValue[0] = fieldValue61;

browser.currentScene.children[6] = ProtoInstance60;

}
main ();
