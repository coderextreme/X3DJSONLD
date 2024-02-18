let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "rubikFurnace.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a green rubik cube";
head1.meta[4] = meta6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Rubiks Cube on Fire";
Viewpoint9.position = new SFVec3f(new float[0,0,12]);
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
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
let field12 = browser.currentScene.createNode("field");
field12.name = "xtranslation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "myShape";
field13.accessType = "inputOutput";
field13.type = "MFNode";
let Shape14 = browser.currentScene.createNode("Shape");
let Sphere15 = browser.currentScene.createNode("Sphere");
Shape14.geometry = Sphere15;

let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[1,1,1]);
Appearance16.material = Material17;

Shape14.appearance = Appearance16;

field13.children = new MFNode();

field13.children[0] = Shape14;

ProtoInterface11.field[1] = field13;

ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
let Transform19 = browser.currentScene.createNode("Transform");
let IS20 = browser.currentScene.createNode("IS");
let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "translation";
connect21.protoField = "xtranslation";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "children";
connect22.protoField = "myShape";
IS20.connect[1] = connect22;

Transform19.iS = IS20;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Transform19;

ProtoDeclare10.protoBody = ProtoBody18;

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
let ProtoInterface24 = browser.currentScene.createNode("ProtoInterface");
let field25 = browser.currentScene.createNode("field");
field25.name = "ytranslation";
field25.accessType = "inputOutput";
field25.type = "SFVec3f";
field25.value = "0 0 0";
ProtoInterface24.field = new MFNode();

ProtoInterface24.field[0] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "myShape";
field26.accessType = "inputOutput";
field26.type = "MFNode";
let Shape27 = browser.currentScene.createNode("Shape");
let Sphere28 = browser.currentScene.createNode("Sphere");
Shape27.geometry = Sphere28;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,1,1]);
Appearance29.material = Material30;

Shape27.appearance = Appearance29;

field26.children = new MFNode();

field26.children[0] = Shape27;

ProtoInterface24.field[1] = field26;

ProtoDeclare23.protoInterface = ProtoInterface24;

let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Transform32 = browser.currentScene.createNode("Transform");
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "ytranslation";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

Transform32.iS = IS33;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "anyShape";
let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "xtranslation";
fieldValue36.value = "0 0 0";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "myShape";
connect38.protoField = "myShape";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

ProtoInstance35.iS = IS37;

Transform32.children = new MFNode();

Transform32.children[0] = ProtoInstance35;

let ProtoInstance39 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance39.name = "anyShape";
let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "xtranslation";
fieldValue40.value = "2 0 0";
ProtoInstance39.fieldValue = new MFNode();

ProtoInstance39.fieldValue[0] = fieldValue40;

let IS41 = browser.currentScene.createNode("IS");
let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "myShape";
connect42.protoField = "myShape";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

ProtoInstance39.iS = IS41;

Transform32.children[1] = ProtoInstance39;

let ProtoInstance43 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance43.name = "anyShape";
let fieldValue44 = browser.currentScene.createNode("fieldValue");
fieldValue44.name = "xtranslation";
fieldValue44.value = "-2 0 0";
ProtoInstance43.fieldValue = new MFNode();

ProtoInstance43.fieldValue[0] = fieldValue44;

let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "myShape";
connect46.protoField = "myShape";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

ProtoInstance43.iS = IS45;

Transform32.children[2] = ProtoInstance43;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Transform32;

ProtoDeclare23.protoBody = ProtoBody31;

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
let ProtoInterface48 = browser.currentScene.createNode("ProtoInterface");
let field49 = browser.currentScene.createNode("field");
field49.name = "ztranslation";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
ProtoInterface48.field = new MFNode();

ProtoInterface48.field[0] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "myShape";
field50.accessType = "inputOutput";
field50.type = "MFNode";
let Shape51 = browser.currentScene.createNode("Shape");
let Sphere52 = browser.currentScene.createNode("Sphere");
Shape51.geometry = Sphere52;

let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.diffuseColor = new SFColor(new float[1,1,1]);
Appearance53.material = Material54;

Shape51.appearance = Appearance53;

field50.children = new MFNode();

field50.children[0] = Shape51;

ProtoInterface48.field[1] = field50;

ProtoDeclare47.protoInterface = ProtoInterface48;

let ProtoBody55 = browser.currentScene.createNode("ProtoBody");
let Transform56 = browser.currentScene.createNode("Transform");
let IS57 = browser.currentScene.createNode("IS");
let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "translation";
connect58.protoField = "ztranslation";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

Transform56.iS = IS57;

let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "three";
let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "ytranslation";
fieldValue60.value = "0 0 0";
ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "myShape";
connect62.protoField = "myShape";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

ProtoInstance59.iS = IS61;

Transform56.children = new MFNode();

Transform56.children[0] = ProtoInstance59;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "three";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "ytranslation";
fieldValue64.value = "0 2 0";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

let IS65 = browser.currentScene.createNode("IS");
let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "myShape";
connect66.protoField = "myShape";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

ProtoInstance63.iS = IS65;

Transform56.children[1] = ProtoInstance63;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "three";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "ytranslation";
fieldValue68.value = "0 -2 0";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "myShape";
connect70.protoField = "myShape";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

ProtoInstance67.iS = IS69;

Transform56.children[2] = ProtoInstance67;

ProtoBody55.children = new MFNode();

ProtoBody55.children[0] = Transform56;

ProtoDeclare47.protoBody = ProtoBody55;

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
let ProtoInterface72 = browser.currentScene.createNode("ProtoInterface");
let field73 = browser.currentScene.createNode("field");
field73.name = "ttranslation";
field73.accessType = "inputOutput";
field73.type = "SFVec3f";
field73.value = "0 0 0";
ProtoInterface72.field = new MFNode();

ProtoInterface72.field[0] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "myShape";
field74.accessType = "inputOutput";
field74.type = "MFNode";
let Shape75 = browser.currentScene.createNode("Shape");
let Sphere76 = browser.currentScene.createNode("Sphere");
Shape75.geometry = Sphere76;

let Appearance77 = browser.currentScene.createNode("Appearance");
let Material78 = browser.currentScene.createNode("Material");
Material78.diffuseColor = new SFColor(new float[1,1,1]);
Appearance77.material = Material78;

Shape75.appearance = Appearance77;

field74.children = new MFNode();

field74.children[0] = Shape75;

ProtoInterface72.field[1] = field74;

ProtoDeclare71.protoInterface = ProtoInterface72;

let ProtoBody79 = browser.currentScene.createNode("ProtoBody");
let Transform80 = browser.currentScene.createNode("Transform");
let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "translation";
connect82.protoField = "ttranslation";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

Transform80.iS = IS81;

let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "nine";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "ztranslation";
fieldValue84.value = "0 0 0";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "myShape";
connect86.protoField = "myShape";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

ProtoInstance83.iS = IS85;

Transform80.children = new MFNode();

Transform80.children[0] = ProtoInstance83;

let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "nine";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "ztranslation";
fieldValue88.value = "0 0 2";
ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "myShape";
connect90.protoField = "myShape";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

ProtoInstance87.iS = IS89;

Transform80.children[1] = ProtoInstance87;

let ProtoInstance91 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance91.name = "nine";
let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "ztranslation";
fieldValue92.value = "0 0 -2";
ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "myShape";
connect94.protoField = "myShape";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

ProtoInstance91.iS = IS93;

Transform80.children[2] = ProtoInstance91;

ProtoBody79.children = new MFNode();

ProtoBody79.children[0] = Transform80;

ProtoDeclare71.protoBody = ProtoBody79;

browser.currentScene.children[5] = ProtoDeclare71;

let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.name = "twentyseven";
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "ttranslation";
fieldValue96.value = "0 0 0";
ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "myShape";
let Shape98 = browser.currentScene.createNode("Shape");
let Box99 = browser.currentScene.createNode("Box");
Box99.size = new SFVec3f(new float[1,1,1]);
Shape98.geometry = Box99;

let Appearance100 = browser.currentScene.createNode("Appearance");
let Material101 = browser.currentScene.createNode("Material");
Material101.diffuseColor = new SFColor(new float[0,1,0]);
Appearance100.material = Material101;

Shape98.appearance = Appearance100;

fieldValue97.children = new MFNode();

fieldValue97.children[0] = Shape98;

ProtoInstance95.fieldValue[1] = fieldValue97;

browser.currentScene.children[6] = ProtoInstance95;

