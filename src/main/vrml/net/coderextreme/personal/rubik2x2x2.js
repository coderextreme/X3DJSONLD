let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "rubik2x2x2.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/rubik.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a kind of 2x2x2 rubik cube";
head1.meta[4] = meta6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Rubiks Cube";
Viewpoint9.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[1] = Viewpoint9;

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="boxproto" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><Box containerField="geometry"></Box>
<Appearance><Material diffuseColor="1 1 1"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "boxproto";
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
let field12 = browser.currentScene.createNode("field");
field12.name = "xtranslation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "diffuseColor";
field13.accessType = "inputOutput";
field13.type = "SFColor";
field13.value = "1 1 1";
ProtoInterface11.field[1] = field13;

ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody14 = browser.currentScene.createNode("ProtoBody");
let Transform15 = browser.currentScene.createNode("Transform");
let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "xtranslation";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform15.iS = IS16;

let Shape18 = browser.currentScene.createNode("Shape");
let Box19 = browser.currentScene.createNode("Box");
Shape18.geometry = Box19;

let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[1,1,1]);
let IS22 = browser.currentScene.createNode("IS");
let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "diffuseColor";
connect23.protoField = "diffuseColor";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

Material21.iS = IS22;

Appearance20.material = Material21;

Shape18.appearance = Appearance20;

Transform15.children = new MFNode();

Transform15.children[0] = Shape18;

ProtoBody14.children = new MFNode();

ProtoBody14.children[0] = Transform15;

ProtoDeclare10.protoBody = ProtoBody14;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="two" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="boxproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare24.name = "two";
let ProtoInterface25 = browser.currentScene.createNode("ProtoInterface");
let field26 = browser.currentScene.createNode("field");
field26.name = "ytranslation";
field26.accessType = "inputOutput";
field26.type = "SFVec3f";
field26.value = "0 0 0";
ProtoInterface25.field = new MFNode();

ProtoInterface25.field[0] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "diffuseColor";
field27.accessType = "inputOutput";
field27.type = "SFColor";
field27.value = "1 0 0";
ProtoInterface25.field[1] = field27;

ProtoDeclare24.protoInterface = ProtoInterface25;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let Transform29 = browser.currentScene.createNode("Transform");
let IS30 = browser.currentScene.createNode("IS");
let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "translation";
connect31.protoField = "ytranslation";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

Transform29.iS = IS30;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "boxproto";
let fieldValue33 = browser.currentScene.createNode("fieldValue");
fieldValue33.name = "xtranslation";
fieldValue33.value = "0 0 0";
ProtoInstance32.fieldValue = new MFNode();

ProtoInstance32.fieldValue[0] = fieldValue33;

let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "diffuseColor";
let IS35 = browser.currentScene.createNode("IS");
let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "diffuseColor";
connect36.protoField = "diffuseColor";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

fieldValue34.iS = IS35;

ProtoInstance32.fieldValue[1] = fieldValue34;

Transform29.children = new MFNode();

Transform29.children[0] = ProtoInstance32;

let ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "boxproto";
let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "xtranslation";
fieldValue38.value = "2 0 0";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "diffuseColor";
let IS40 = browser.currentScene.createNode("IS");
let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "diffuseColor";
connect41.protoField = "diffuseColor";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

fieldValue39.iS = IS40;

ProtoInstance37.fieldValue[1] = fieldValue39;

Transform29.children[1] = ProtoInstance37;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Transform29;

ProtoDeclare24.protoBody = ProtoBody28;

browser.currentScene.children[3] = ProtoDeclare24;

let ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="four" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="x1diffuseColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
<field name="x2diffuseColor" accessType="inputOutput" type="SFColor" value="0 1 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 0 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="x1diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
<ProtoInstance name="two"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
<fieldValue name="diffuseColor"><IS><connect nodeField="diffuseColor" protoField="x2diffuseColor"></connect>
</IS>
</fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "four";
let ProtoInterface43 = browser.currentScene.createNode("ProtoInterface");
let field44 = browser.currentScene.createNode("field");
field44.name = "ztranslation";
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.value = "0 0 0";
ProtoInterface43.field = new MFNode();

ProtoInterface43.field[0] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "x1diffuseColor";
field45.accessType = "inputOutput";
field45.type = "SFColor";
field45.value = "1 0 0";
ProtoInterface43.field[1] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "x2diffuseColor";
field46.accessType = "inputOutput";
field46.type = "SFColor";
field46.value = "0 1 0";
ProtoInterface43.field[2] = field46;

ProtoDeclare42.protoInterface = ProtoInterface43;

let ProtoBody47 = browser.currentScene.createNode("ProtoBody");
let Transform48 = browser.currentScene.createNode("Transform");
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "translation";
connect50.protoField = "ztranslation";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

Transform48.iS = IS49;

let ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "two";
let fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "ytranslation";
fieldValue52.value = "0 0 0";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

let fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "diffuseColor";
let IS54 = browser.currentScene.createNode("IS");
let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "diffuseColor";
connect55.protoField = "x1diffuseColor";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

fieldValue53.iS = IS54;

ProtoInstance51.fieldValue[1] = fieldValue53;

Transform48.children = new MFNode();

Transform48.children[0] = ProtoInstance51;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "two";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "ytranslation";
fieldValue57.value = "0 2 0";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "diffuseColor";
let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "diffuseColor";
connect60.protoField = "x2diffuseColor";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

fieldValue58.iS = IS59;

ProtoInstance56.fieldValue[1] = fieldValue58;

Transform48.children[1] = ProtoInstance56;

ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Transform48;

ProtoDeclare42.protoBody = ProtoBody47;

browser.currentScene.children[4] = ProtoDeclare42;

let ProtoDeclare61 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="eight" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
<ProtoInstance name="four"><fieldValue name="ztranslation" value="0 0 0"></fieldValue>
<fieldValue name="x1diffuseColor" value="1 0 0"></fieldValue>
<fieldValue name="x2diffuseColor" value="0 1 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="four"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
<fieldValue name="x1diffuseColor" value="0 0 1"></fieldValue>
<fieldValue name="x2diffuseColor" value="1 1 0"></fieldValue>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare61.name = "eight";
let ProtoInterface62 = browser.currentScene.createNode("ProtoInterface");
let field63 = browser.currentScene.createNode("field");
field63.name = "ttranslation";
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.value = "0 0 0";
ProtoInterface62.field = new MFNode();

ProtoInterface62.field[0] = field63;

ProtoDeclare61.protoInterface = ProtoInterface62;

let ProtoBody64 = browser.currentScene.createNode("ProtoBody");
let Transform65 = browser.currentScene.createNode("Transform");
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "translation";
connect67.protoField = "ttranslation";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

Transform65.iS = IS66;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "four";
let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "ztranslation";
fieldValue69.value = "0 0 0";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "x1diffuseColor";
fieldValue70.value = "1 0 0";
ProtoInstance68.fieldValue[1] = fieldValue70;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "x2diffuseColor";
fieldValue71.value = "0 1 0";
ProtoInstance68.fieldValue[2] = fieldValue71;

Transform65.children = new MFNode();

Transform65.children[0] = ProtoInstance68;

let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "four";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "ztranslation";
fieldValue73.value = "0 0 2";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "x1diffuseColor";
fieldValue74.value = "0 0 1";
ProtoInstance72.fieldValue[1] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "x2diffuseColor";
fieldValue75.value = "1 1 0";
ProtoInstance72.fieldValue[2] = fieldValue75;

Transform65.children[1] = ProtoInstance72;

ProtoBody64.children = new MFNode();

ProtoBody64.children[0] = Transform65;

ProtoDeclare61.protoBody = ProtoBody64;

browser.currentScene.children[5] = ProtoDeclare61;

let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.name = "eight";
let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "ttranslation";
fieldValue77.value = "0 0 0";
ProtoInstance76.fieldValue = new MFNode();

ProtoInstance76.fieldValue[0] = fieldValue77;

browser.currentScene.children[6] = ProtoInstance76;

