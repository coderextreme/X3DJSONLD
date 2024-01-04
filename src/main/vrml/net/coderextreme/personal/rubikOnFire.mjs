let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "rubikOnFire.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d";
head1.meta[3] = meta5;

head = head1;

let ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
</Shape>
<IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "anyShape";
let ProtoInterface8 = browser.currentScene.createNode("ProtoInterface");
let field9 = browser.currentScene.createNode("field");
field9.accessType = "inputOutput";
field9.type = "SFVec3f";
field9.name = "xtranslation";
ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

let field10 = browser.currentScene.createNode("field");
field10.accessType = "inputOutput";
field10.type = "SFNode";
field10.name = "myShape";
let Sphere11 = browser.currentScene.createNode("Sphere");
field10.children = new MFNode();

field10.children[0] = Sphere11;

ProtoInterface8.field[1] = field10;

ProtoDeclare7.protoInterface = ProtoInterface8;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Transform13 = browser.currentScene.createNode("Transform");
let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = new SFColor(new float[1,1,1]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "geometry";
connect18.protoField = "myShape";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Shape14.iS = IS17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

let IS19 = browser.currentScene.createNode("IS");
let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "translation";
connect20.protoField = "xtranslation";
IS19.connect = new MFNode();

IS19.connect[0] = connect20;

Transform13.iS = IS19;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

ProtoDeclare7.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare7;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_1"></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare21.name = "three";
let ProtoInterface22 = browser.currentScene.createNode("ProtoInterface");
let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.name = "ytranslation";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "inputOutput";
field24.type = "SFNode";
field24.name = "myShape";
let Sphere25 = browser.currentScene.createNode("Sphere");
Sphere25.DEF = "_1";
field24.children = new MFNode();

field24.children[0] = Sphere25;

ProtoInterface22.field[1] = field24;

ProtoDeclare21.protoInterface = ProtoInterface22;

let ProtoBody26 = browser.currentScene.createNode("ProtoBody");
let Transform27 = browser.currentScene.createNode("Transform");
let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "anyShape";
let IS29 = browser.currentScene.createNode("IS");
let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "myShape";
connect30.protoField = "myShape";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

ProtoInstance28.iS = IS29;

Transform27.children = new MFNode();

Transform27.children[0] = ProtoInstance28;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "anyShape";
let fieldValue32 = browser.currentScene.createNode("fieldValue");
fieldValue32.name = "xtranslation";
fieldValue32.value = "2 0 0";
ProtoInstance31.fieldValue = new MFNode();

ProtoInstance31.fieldValue[0] = fieldValue32;

let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "myShape";
connect34.protoField = "myShape";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

ProtoInstance31.iS = IS33;

Transform27.children[1] = ProtoInstance31;

let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "anyShape";
let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "xtranslation";
fieldValue36.value = "-2 0 0";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

let IS37 = browser.currentScene.createNode("IS");
let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "myShape";
connect38.protoField = "myShape";
IS37.connect = new MFNode();

IS37.connect[0] = connect38;

ProtoInstance35.iS = IS37;

Transform27.children[2] = ProtoInstance35;

let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "translation";
connect40.protoField = "ytranslation";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

Transform27.iS = IS39;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Transform27;

ProtoDeclare21.protoBody = ProtoBody26;

browser.currentScene.children[1] = ProtoDeclare21;

let ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_2"></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="three"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "nine";
let ProtoInterface42 = browser.currentScene.createNode("ProtoInterface");
let field43 = browser.currentScene.createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.name = "ztranslation";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFNode";
field44.name = "myShape";
let Sphere45 = browser.currentScene.createNode("Sphere");
Sphere45.DEF = "_2";
field44.children = new MFNode();

field44.children[0] = Sphere45;

ProtoInterface42.field[1] = field44;

ProtoDeclare41.protoInterface = ProtoInterface42;

let ProtoBody46 = browser.currentScene.createNode("ProtoBody");
let Transform47 = browser.currentScene.createNode("Transform");
let ProtoInstance48 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance48.name = "three";
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "myShape";
connect50.protoField = "myShape";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

ProtoInstance48.iS = IS49;

Transform47.children = new MFNode();

Transform47.children[0] = ProtoInstance48;

let ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "three";
let fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "ytranslation";
fieldValue52.value = "0 2 0";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "myShape";
connect54.protoField = "myShape";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

ProtoInstance51.iS = IS53;

Transform47.children[1] = ProtoInstance51;

let ProtoInstance55 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance55.name = "three";
let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "ytranslation";
fieldValue56.value = "0 -2 0";
ProtoInstance55.fieldValue = new MFNode();

ProtoInstance55.fieldValue[0] = fieldValue56;

let IS57 = browser.currentScene.createNode("IS");
let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "myShape";
connect58.protoField = "myShape";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

ProtoInstance55.iS = IS57;

Transform47.children[2] = ProtoInstance55;

let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "translation";
connect60.protoField = "ztranslation";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

Transform47.iS = IS59;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Transform47;

ProtoDeclare41.protoBody = ProtoBody46;

browser.currentScene.children[2] = ProtoDeclare41;

let ProtoDeclare61 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
<field accessType="inputOutput" type="SFNode" name="myShape"><Sphere DEF="_3"></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="nine"><IS><connect nodeField="myShape" protoField="myShape"></connect>
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
<IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare61.name = "twentyseven";
let ProtoInterface62 = browser.currentScene.createNode("ProtoInterface");
let field63 = browser.currentScene.createNode("field");
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.name = "ttranslation";
ProtoInterface62.field = new MFNode();

ProtoInterface62.field[0] = field63;

let field64 = browser.currentScene.createNode("field");
field64.accessType = "inputOutput";
field64.type = "SFNode";
field64.name = "myShape";
let Sphere65 = browser.currentScene.createNode("Sphere");
Sphere65.DEF = "_3";
field64.children = new MFNode();

field64.children[0] = Sphere65;

ProtoInterface62.field[1] = field64;

ProtoDeclare61.protoInterface = ProtoInterface62;

let ProtoBody66 = browser.currentScene.createNode("ProtoBody");
let Transform67 = browser.currentScene.createNode("Transform");
let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "nine";
let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "myShape";
connect70.protoField = "myShape";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

ProtoInstance68.iS = IS69;

Transform67.children = new MFNode();

Transform67.children[0] = ProtoInstance68;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "nine";
let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "ztranslation";
fieldValue72.value = "0 0 2";
ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

let IS73 = browser.currentScene.createNode("IS");
let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "myShape";
connect74.protoField = "myShape";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

ProtoInstance71.iS = IS73;

Transform67.children[1] = ProtoInstance71;

let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "nine";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "ztranslation";
fieldValue76.value = "0 0 -2";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "myShape";
connect78.protoField = "myShape";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

ProtoInstance75.iS = IS77;

Transform67.children[2] = ProtoInstance75;

let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "translation";
connect80.protoField = "ttranslation";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

Transform67.iS = IS79;

ProtoBody66.children = new MFNode();

ProtoBody66.children[0] = Transform67;

ProtoDeclare61.protoBody = ProtoBody66;

browser.currentScene.children[3] = ProtoDeclare61;

let NavigationInfo81 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo81.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[4] = NavigationInfo81;

let Viewpoint82 = browser.currentScene.createNode("Viewpoint");
Viewpoint82.description = "Rubiks Cube on Fire";
Viewpoint82.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[5] = Viewpoint82;

let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "twentyseven";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "myShape";
let Box85 = browser.currentScene.createNode("Box");
Box85.DEF = "_4";
Box85.size = new SFVec3f(new float[1,1,1]);
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Box85;

ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

browser.currentScene.children[6] = ProtoInstance83;

