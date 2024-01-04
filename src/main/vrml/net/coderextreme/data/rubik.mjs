let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "rubik.x3d";
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
<ProtoDeclare name="sphereproto" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="xtranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "sphereproto";
let ProtoInterface8 = browser.currentScene.createNode("ProtoInterface");
let field9 = browser.currentScene.createNode("field");
field9.accessType = "inputOutput";
field9.type = "SFVec3f";
field9.name = "xtranslation";
ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

ProtoDeclare7.protoInterface = ProtoInterface8;

let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
let Transform11 = browser.currentScene.createNode("Transform");
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Sphere15 = browser.currentScene.createNode("Sphere");
Shape12.geometry = Sphere15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

let IS16 = browser.currentScene.createNode("IS");
let connect17 = browser.currentScene.createNode("connect");
connect17.nodeField = "translation";
connect17.protoField = "xtranslation";
IS16.connect = new MFNode();

IS16.connect[0] = connect17;

Transform11.iS = IS16;

ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = Transform11;

ProtoDeclare7.protoBody = ProtoBody10;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare7;

let ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ytranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="sphereproto"></ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="2 0 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="sphereproto"><fieldValue name="xtranslation" value="-2 0 0"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ytranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare18.name = "three";
let ProtoInterface19 = browser.currentScene.createNode("ProtoInterface");
let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.name = "ytranslation";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

ProtoDeclare18.protoInterface = ProtoInterface19;

let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Transform22 = browser.currentScene.createNode("Transform");
let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "sphereproto";
Transform22.children = new MFNode();

Transform22.children[0] = ProtoInstance23;

let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "sphereproto";
let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "xtranslation";
fieldValue25.value = "2 0 0";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

Transform22.children[1] = ProtoInstance24;

let ProtoInstance26 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance26.name = "sphereproto";
let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "xtranslation";
fieldValue27.value = "-2 0 0";
ProtoInstance26.fieldValue = new MFNode();

ProtoInstance26.fieldValue[0] = fieldValue27;

Transform22.children[2] = ProtoInstance26;

let IS28 = browser.currentScene.createNode("IS");
let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "translation";
connect29.protoField = "ytranslation";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

Transform22.iS = IS28;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

ProtoDeclare18.protoBody = ProtoBody21;

browser.currentScene.children[1] = ProtoDeclare18;

let ProtoDeclare30 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ztranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="three"></ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 2 0"></fieldValue>
</ProtoInstance>
<ProtoInstance name="three"><fieldValue name="ytranslation" value="0 -2 0"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ztranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare30.name = "nine";
let ProtoInterface31 = browser.currentScene.createNode("ProtoInterface");
let field32 = browser.currentScene.createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.name = "ztranslation";
ProtoInterface31.field = new MFNode();

ProtoInterface31.field[0] = field32;

ProtoDeclare30.protoInterface = ProtoInterface31;

let ProtoBody33 = browser.currentScene.createNode("ProtoBody");
let Transform34 = browser.currentScene.createNode("Transform");
let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "three";
Transform34.children = new MFNode();

Transform34.children[0] = ProtoInstance35;

let ProtoInstance36 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance36.name = "three";
let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "ytranslation";
fieldValue37.value = "0 2 0";
ProtoInstance36.fieldValue = new MFNode();

ProtoInstance36.fieldValue[0] = fieldValue37;

Transform34.children[1] = ProtoInstance36;

let ProtoInstance38 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance38.name = "three";
let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "ytranslation";
fieldValue39.value = "0 -2 0";
ProtoInstance38.fieldValue = new MFNode();

ProtoInstance38.fieldValue[0] = fieldValue39;

Transform34.children[2] = ProtoInstance38;

let IS40 = browser.currentScene.createNode("IS");
let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "translation";
connect41.protoField = "ztranslation";
IS40.connect = new MFNode();

IS40.connect[0] = connect41;

Transform34.iS = IS40;

ProtoBody33.children = new MFNode();

ProtoBody33.children[0] = Transform34;

ProtoDeclare30.protoBody = ProtoBody33;

browser.currentScene.children[2] = ProtoDeclare30;

let ProtoDeclare42 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field accessType="inputOutput" type="SFVec3f" name="ttranslation"></field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="nine"></ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 2"></fieldValue>
</ProtoInstance>
<ProtoInstance name="nine"><fieldValue name="ztranslation" value="0 0 -2"></fieldValue>
</ProtoInstance>
<IS><connect nodeField="translation" protoField="ttranslation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare42.name = "twentyseven";
let ProtoInterface43 = browser.currentScene.createNode("ProtoInterface");
let field44 = browser.currentScene.createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFVec3f";
field44.name = "ttranslation";
ProtoInterface43.field = new MFNode();

ProtoInterface43.field[0] = field44;

ProtoDeclare42.protoInterface = ProtoInterface43;

let ProtoBody45 = browser.currentScene.createNode("ProtoBody");
let Transform46 = browser.currentScene.createNode("Transform");
let ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "nine";
Transform46.children = new MFNode();

Transform46.children[0] = ProtoInstance47;

let ProtoInstance48 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance48.name = "nine";
let fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "ztranslation";
fieldValue49.value = "0 0 2";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

Transform46.children[1] = ProtoInstance48;

let ProtoInstance50 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance50.name = "nine";
let fieldValue51 = browser.currentScene.createNode("fieldValue");
fieldValue51.name = "ztranslation";
fieldValue51.value = "0 0 -2";
ProtoInstance50.fieldValue = new MFNode();

ProtoInstance50.fieldValue[0] = fieldValue51;

Transform46.children[2] = ProtoInstance50;

let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ttranslation";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Transform46.iS = IS52;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Transform46;

ProtoDeclare42.protoBody = ProtoBody45;

browser.currentScene.children[3] = ProtoDeclare42;

let NavigationInfo54 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo54.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[4] = NavigationInfo54;

let Viewpoint55 = browser.currentScene.createNode("Viewpoint");
Viewpoint55.description = "Rubiks Cube";
Viewpoint55.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[5] = Viewpoint55;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "twentyseven";
browser.currentScene.children[6] = ProtoInstance56;

