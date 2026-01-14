const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "rubikFurnace.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d");
scene.addMetaData("description", "a green rubik cube");
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
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
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
let Sphere28 = browser.currentScene.createNode("Sphere");
geometry = Sphere28;

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

let ProtoDeclare47 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare47.name = "nine";
ProtoInterface49.getField("ztranslation").setValue("0 0 0");
ProtoInterface48YYY.field = new X3D.MFNode();

ProtoInterface50.getField("myShape")let Shape51 = browser.currentScene.createNode("Shape");
let Sphere52 = browser.currentScene.createNode("Sphere");
geometry = Sphere52;

let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material54;

appearance = Appearance53;

field50YYY.children = new X3D.MFNode();

field50ZZZ.children[0] = Shape51;

ProtoInterface48YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface48;

let ProtoBody55 = browser.currentScene.createNode("ProtoBody");
let Transform56 = browser.currentScene.createNode("Transform");
let IS57 = browser.currentScene.createNode("IS");
let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "translation";
connect58.protoField = "ztranslation";
IS57YYY.connect = new X3D.MFNode();

IS57ZZZ.connect[0] = connect58;

iS = IS57;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "three";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "ytranslation";
fieldValue60.value = "0 0 0";
ProtoInstance59YYY.fieldValue = new X3D.MFNode();

ProtoInstance59ZZZ.fieldValue[0] = fieldValue60;

let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "myShape";
connect62.protoField = "myShape";
IS61YYY.connect = new X3D.MFNode();

IS61ZZZ.connect[0] = connect62;

iS = IS61;

Transform56YYY.children = new X3D.MFNode();

Transform56ZZZ.children[0] = ProtoInstance59;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "three";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "ytranslation";
fieldValue64.value = "0 2 0";
ProtoInstance63YYY.fieldValue = new X3D.MFNode();

ProtoInstance63ZZZ.fieldValue[0] = fieldValue64;

let IS65 = browser.currentScene.createNode("IS");
let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "myShape";
connect66.protoField = "myShape";
IS65YYY.connect = new X3D.MFNode();

IS65ZZZ.connect[0] = connect66;

iS = IS65;

Transform56ZZZ.children[1] = ProtoInstance63;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "three";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "ytranslation";
fieldValue68.value = "0 -2 0";
ProtoInstance67YYY.fieldValue = new X3D.MFNode();

ProtoInstance67ZZZ.fieldValue[0] = fieldValue68;

let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "myShape";
connect70.protoField = "myShape";
IS69YYY.connect = new X3D.MFNode();

IS69ZZZ.connect[0] = connect70;

iS = IS69;

Transform56ZZZ.children[2] = ProtoInstance67;

ProtoBody55YYY.children = new X3D.MFNode();

ProtoBody55ZZZ.children[0] = Transform56;

protoBody = ProtoBody55;

browser.currentScene.children[4] = ProtoDeclare47;

let ProtoDeclare71 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
ProtoDeclare71.name = "twentyseven";
ProtoInterface73.getField("ttranslation").setValue("0 0 0");
ProtoInterface72YYY.field = new X3D.MFNode();

ProtoInterface74.getField("myShape")let Shape75 = browser.currentScene.createNode("Shape");
let Sphere76 = browser.currentScene.createNode("Sphere");
geometry = Sphere76;

let Appearance77 = browser.currentScene.createNode("Appearance");
let Material78 = browser.currentScene.createNode("Material");
Material78.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material78;

appearance = Appearance77;

field74YYY.children = new X3D.MFNode();

field74ZZZ.children[0] = Shape75;

ProtoInterface72YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface72;

let ProtoBody79 = browser.currentScene.createNode("ProtoBody");
let Transform80 = browser.currentScene.createNode("Transform");
let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "translation";
connect82.protoField = "ttranslation";
IS81YYY.connect = new X3D.MFNode();

IS81ZZZ.connect[0] = connect82;

iS = IS81;

let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "nine";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "ztranslation";
fieldValue84.value = "0 0 0";
ProtoInstance83YYY.fieldValue = new X3D.MFNode();

ProtoInstance83ZZZ.fieldValue[0] = fieldValue84;

let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "myShape";
connect86.protoField = "myShape";
IS85YYY.connect = new X3D.MFNode();

IS85ZZZ.connect[0] = connect86;

iS = IS85;

Transform80YYY.children = new X3D.MFNode();

Transform80ZZZ.children[0] = ProtoInstance83;

let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "nine";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "ztranslation";
fieldValue88.value = "0 0 2";
ProtoInstance87YYY.fieldValue = new X3D.MFNode();

ProtoInstance87ZZZ.fieldValue[0] = fieldValue88;

let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "myShape";
connect90.protoField = "myShape";
IS89YYY.connect = new X3D.MFNode();

IS89ZZZ.connect[0] = connect90;

iS = IS89;

Transform80ZZZ.children[1] = ProtoInstance87;

let ProtoInstance91 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance91.name = "nine";
let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "ztranslation";
fieldValue92.value = "0 0 -2";
ProtoInstance91YYY.fieldValue = new X3D.MFNode();

ProtoInstance91ZZZ.fieldValue[0] = fieldValue92;

let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "myShape";
connect94.protoField = "myShape";
IS93YYY.connect = new X3D.MFNode();

IS93ZZZ.connect[0] = connect94;

iS = IS93;

Transform80ZZZ.children[2] = ProtoInstance91;

ProtoBody79YYY.children = new X3D.MFNode();

ProtoBody79ZZZ.children[0] = Transform80;

protoBody = ProtoBody79;

browser.currentScene.children[5] = ProtoDeclare71;

let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.name = "twentyseven";
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "ttranslation";
fieldValue96.value = "0 0 0";
ProtoInstance95YYY.fieldValue = new X3D.MFNode();

ProtoInstance95ZZZ.fieldValue[0] = fieldValue96;

let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "myShape";
let Group98 = browser.currentScene.createNode("Group");
let Shape99 = browser.currentScene.createNode("Shape");
let IndexedFaceSet100 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet100.convex = False;
IndexedFaceSet100.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0]);
IndexedFaceSet100.colorIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0]);
let Coordinate101 = browser.currentScene.createNode("Coordinate");
Coordinate101.point = new X3D.MFVec3f([0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,0]);
coord = Coordinate101;

let Color102 = browser.currentScene.createNode("Color");
Color102.color = new X3D.MFColor([1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,1,0,0,1]);
color = Color102;

geometry = IndexedFaceSet100;

Group98YYY.children = new X3D.MFNode();

Group98ZZZ.children[0] = Shape99;

let Shape103 = browser.currentScene.createNode("Shape");
let IndexedLineSet104 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet104.coordIndex = new X3D.MFInt32([0,1,-1,1,2,-1,2,3,-1,3,0,-1,2,0,-1]);
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new X3D.MFVec3f([0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,0]);
coord = Coordinate105;

let Color106 = browser.currentScene.createNode("Color");
Color106.color = new X3D.MFColor([1,1,1,1,1,1,1,1,1,1,1,1,0,0,0]);
color = Color106;

geometry = IndexedLineSet104;

Group98ZZZ.children[1] = Shape103;

fieldValue97YYY.children = new X3D.MFNode();

fieldValue97ZZZ.children[0] = Group98;

ProtoInstance95ZZZ.fieldValue[1] = fieldValue97;

browser.currentScene.children[6] = ProtoInstance95;

}
main ();
