let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "BoxEm.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d";
head1.meta[3] = meta5;

head = head1;

let ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
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
field10.type = "MFNode";
field10.name = "myShape";
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[1,1,1]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

let Sphere14 = browser.currentScene.createNode("Sphere");
Shape11.geometry = Sphere14;

field10.children = new MFNode();

field10.children[0] = Shape11;

ProtoInterface8.field[1] = field10;

ProtoDeclare7.protoInterface = ProtoInterface8;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let Transform16 = browser.currentScene.createNode("Transform");
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "translation";
connect18.protoField = "xtranslation";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "children";
connect19.protoField = "myShape";
IS17.connect[1] = connect19;

Transform16.iS = IS17;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = Transform16;

ProtoDeclare7.protoBody = ProtoBody15;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare7;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_1"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Cylinder></Cylinder>
</Shape>
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
ProtoDeclare20.name = "three";
let ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.name = "ytranslation";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOutput";
field23.type = "MFNode";
field23.name = "myShape";
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "_1";
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[1,1,1]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Cylinder27 = browser.currentScene.createNode("Cylinder");
Shape24.geometry = Cylinder27;

field23.children = new MFNode();

field23.children[0] = Shape24;

ProtoInterface21.field[1] = field23;

ProtoDeclare20.protoInterface = ProtoInterface21;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let Transform29 = browser.currentScene.createNode("Transform");
let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "anyShape";
let IS31 = browser.currentScene.createNode("IS");
let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "myShape";
connect32.protoField = "myShape";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ProtoInstance30.iS = IS31;

Transform29.children = new MFNode();

Transform29.children[0] = ProtoInstance30;

let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "anyShape";
let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "xtranslation";
fieldValue34.value = "2 0 0";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

let IS35 = browser.currentScene.createNode("IS");
let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "myShape";
connect36.protoField = "myShape";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

ProtoInstance33.iS = IS35;

Transform29.children[1] = ProtoInstance33;

let ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "anyShape";
let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "xtranslation";
fieldValue38.value = "-2 0 0";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "myShape";
connect40.protoField = "myShape";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

ProtoInstance37.iS = IS39;

Transform29.children[2] = ProtoInstance37;

let IS41 = browser.currentScene.createNode("IS");
let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "translation";
connect42.protoField = "ytranslation";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

Transform29.iS = IS41;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Transform29;

ProtoDeclare20.protoBody = ProtoBody28;

browser.currentScene.children[1] = ProtoDeclare20;

let NavigationInfo43 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo43.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[2] = NavigationInfo43;

let Viewpoint44 = browser.currentScene.createNode("Viewpoint");
Viewpoint44.description = "Cubes on Fire";
Viewpoint44.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[3] = Viewpoint44;

let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.DEF = "threepi";
ProtoInstance45.name = "three";
let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "myShape";
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "box";
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Box50 = browser.currentScene.createNode("Box");
Box50.size = new SFVec3f(new float[1,1,1]);
Shape47.geometry = Box50;

fieldValue46.children = new MFNode();

fieldValue46.children[0] = Shape47;

ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

browser.currentScene.children[4] = ProtoInstance45;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,2,0]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "box";
Transform51.child = new undefined();

Transform51.child[0] = Shape52;

browser.currentScene.children[5] = Transform51;

