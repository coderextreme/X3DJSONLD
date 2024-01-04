let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta5.name = "generator";
meta5.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
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
<Sphere></Sphere>
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

let Sphere27 = browser.currentScene.createNode("Sphere");
Shape24.geometry = Sphere27;

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

let ProtoDeclare43 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_2"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
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
ProtoDeclare43.name = "nine";
let ProtoInterface44 = browser.currentScene.createNode("ProtoInterface");
let field45 = browser.currentScene.createNode("field");
field45.accessType = "inputOutput";
field45.type = "SFVec3f";
field45.name = "ztranslation";
ProtoInterface44.field = new MFNode();

ProtoInterface44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.accessType = "inputOutput";
field46.type = "MFNode";
field46.name = "myShape";
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "_2";
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Sphere50 = browser.currentScene.createNode("Sphere");
Shape47.geometry = Sphere50;

field46.children = new MFNode();

field46.children[0] = Shape47;

ProtoInterface44.field[1] = field46;

ProtoDeclare43.protoInterface = ProtoInterface44;

let ProtoBody51 = browser.currentScene.createNode("ProtoBody");
let Transform52 = browser.currentScene.createNode("Transform");
let ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "three";
let IS54 = browser.currentScene.createNode("IS");
let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "myShape";
connect55.protoField = "myShape";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

ProtoInstance53.iS = IS54;

Transform52.children = new MFNode();

Transform52.children[0] = ProtoInstance53;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "three";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "ytranslation";
fieldValue57.value = "0 2 0";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "myShape";
connect59.protoField = "myShape";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

ProtoInstance56.iS = IS58;

Transform52.children[1] = ProtoInstance56;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "three";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "ytranslation";
fieldValue61.value = "0 -2 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "myShape";
connect63.protoField = "myShape";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

ProtoInstance60.iS = IS62;

Transform52.children[2] = ProtoInstance60;

let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "translation";
connect65.protoField = "ztranslation";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

Transform52.iS = IS64;

ProtoBody51.children = new MFNode();

ProtoBody51.children[0] = Transform52;

ProtoDeclare43.protoBody = ProtoBody51;

browser.currentScene.children[2] = ProtoDeclare43;

let ProtoDeclare66 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
<field accessType="inputOutput" type="MFNode" name="myShape"><Shape DEF="_3"><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
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
ProtoDeclare66.name = "twentyseven";
let ProtoInterface67 = browser.currentScene.createNode("ProtoInterface");
let field68 = browser.currentScene.createNode("field");
field68.accessType = "inputOutput";
field68.type = "SFVec3f";
field68.name = "ttranslation";
ProtoInterface67.field = new MFNode();

ProtoInterface67.field[0] = field68;

let field69 = browser.currentScene.createNode("field");
field69.accessType = "inputOutput";
field69.type = "MFNode";
field69.name = "myShape";
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.DEF = "_3";
let Appearance71 = browser.currentScene.createNode("Appearance");
let Material72 = browser.currentScene.createNode("Material");
Material72.diffuseColor = new SFColor(new float[1,1,1]);
Appearance71.material = Material72;

Shape70.appearance = Appearance71;

let Sphere73 = browser.currentScene.createNode("Sphere");
Shape70.geometry = Sphere73;

field69.children = new MFNode();

field69.children[0] = Shape70;

ProtoInterface67.field[1] = field69;

ProtoDeclare66.protoInterface = ProtoInterface67;

let ProtoBody74 = browser.currentScene.createNode("ProtoBody");
let Transform75 = browser.currentScene.createNode("Transform");
let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.name = "nine";
let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "myShape";
connect78.protoField = "myShape";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

ProtoInstance76.iS = IS77;

Transform75.children = new MFNode();

Transform75.children[0] = ProtoInstance76;

let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "nine";
let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "ztranslation";
fieldValue80.value = "0 0 2";
ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "myShape";
connect82.protoField = "myShape";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

ProtoInstance79.iS = IS81;

Transform75.children[1] = ProtoInstance79;

let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "nine";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "ztranslation";
fieldValue84.value = "0 0 -2";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "myShape";
connect86.protoField = "myShape";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

ProtoInstance83.iS = IS85;

Transform75.children[2] = ProtoInstance83;

let IS87 = browser.currentScene.createNode("IS");
let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "translation";
connect88.protoField = "ttranslation";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

Transform75.iS = IS87;

ProtoBody74.children = new MFNode();

ProtoBody74.children[0] = Transform75;

ProtoDeclare66.protoBody = ProtoBody74;

browser.currentScene.children[3] = ProtoDeclare66;

let NavigationInfo89 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo89.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[4] = NavigationInfo89;

let Viewpoint90 = browser.currentScene.createNode("Viewpoint");
Viewpoint90.description = "Rubiks Cube on Fire";
Viewpoint90.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[5] = Viewpoint90;

let ProtoInstance91 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance91.name = "twentyseven";
let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "myShape";
let Shape93 = browser.currentScene.createNode("Shape");
Shape93.DEF = "_4";
let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.diffuseColor = new SFColor(new float[0,1,0]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

let Box96 = browser.currentScene.createNode("Box");
Box96.size = new SFVec3f(new float[1,1,1]);
Shape93.geometry = Box96;

fieldValue92.children = new MFNode();

fieldValue92.children[0] = Shape93;

ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

browser.currentScene.children[6] = ProtoInstance91;

