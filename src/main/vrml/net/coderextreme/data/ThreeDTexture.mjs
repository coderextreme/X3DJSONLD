let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ThreeDTexture.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a kind of ThreeDTexture cube with spheres";
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
let ProtoInterface11 = browser.currentScene.createNode("ProtoInterface");
let field12 = browser.currentScene.createNode("field");
field12.name = "xtranslation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

ProtoDeclare10.protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "xtranslation";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

let Shape17 = browser.currentScene.createNode("Shape");
let Sphere18 = browser.currentScene.createNode("Sphere");
Shape17.geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,1,1]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.child = new undefined();

Transform14.child[0] = Shape17;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare10.protoBody = ProtoBody13;

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
let ProtoInterface22 = browser.currentScene.createNode("ProtoInterface");
let field23 = browser.currentScene.createNode("field");
field23.name = "ytranslation";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "0 0 0";
ProtoInterface22.field = new MFNode();

ProtoInterface22.field[0] = field23;

ProtoDeclare21.protoInterface = ProtoInterface22;

let ProtoBody24 = browser.currentScene.createNode("ProtoBody");
let Transform25 = browser.currentScene.createNode("Transform");
let IS26 = browser.currentScene.createNode("IS");
let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "translation";
connect27.protoField = "ytranslation";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

Transform25.iS = IS26;

let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "sphereproto";
let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "xtranslation";
fieldValue29.value = "0 0 0";
ProtoInstance28.fieldValue = new MFNode();

ProtoInstance28.fieldValue[0] = fieldValue29;

Transform25.children = new MFNode();

Transform25.children[0] = ProtoInstance28;

let ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "sphereproto";
let fieldValue31 = browser.currentScene.createNode("fieldValue");
fieldValue31.name = "xtranslation";
fieldValue31.value = "2 0 0";
ProtoInstance30.fieldValue = new MFNode();

ProtoInstance30.fieldValue[0] = fieldValue31;

Transform25.children[1] = ProtoInstance30;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "sphereproto";
let fieldValue33 = browser.currentScene.createNode("fieldValue");
fieldValue33.name = "xtranslation";
fieldValue33.value = "-2 0 0";
ProtoInstance32.fieldValue = new MFNode();

ProtoInstance32.fieldValue[0] = fieldValue33;

Transform25.children[2] = ProtoInstance32;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Transform25;

ProtoDeclare21.protoBody = ProtoBody24;

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
let ProtoInterface35 = browser.currentScene.createNode("ProtoInterface");
let field36 = browser.currentScene.createNode("field");
field36.name = "ztranslation";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
ProtoInterface35.field = new MFNode();

ProtoInterface35.field[0] = field36;

ProtoDeclare34.protoInterface = ProtoInterface35;

let ProtoBody37 = browser.currentScene.createNode("ProtoBody");
let Transform38 = browser.currentScene.createNode("Transform");
let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "translation";
connect40.protoField = "ztranslation";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

Transform38.iS = IS39;

let ProtoInstance41 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance41.name = "three";
let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "ytranslation";
fieldValue42.value = "0 0 0";
ProtoInstance41.fieldValue = new MFNode();

ProtoInstance41.fieldValue[0] = fieldValue42;

Transform38.children = new MFNode();

Transform38.children[0] = ProtoInstance41;

let ProtoInstance43 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance43.name = "three";
let fieldValue44 = browser.currentScene.createNode("fieldValue");
fieldValue44.name = "ytranslation";
fieldValue44.value = "0 2 0";
ProtoInstance43.fieldValue = new MFNode();

ProtoInstance43.fieldValue[0] = fieldValue44;

Transform38.children[1] = ProtoInstance43;

let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "three";
let fieldValue46 = browser.currentScene.createNode("fieldValue");
fieldValue46.name = "ytranslation";
fieldValue46.value = "0 -2 0";
ProtoInstance45.fieldValue = new MFNode();

ProtoInstance45.fieldValue[0] = fieldValue46;

Transform38.children[2] = ProtoInstance45;

ProtoBody37.children = new MFNode();

ProtoBody37.children[0] = Transform38;

ProtoDeclare34.protoBody = ProtoBody37;

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
let ProtoInterface48 = browser.currentScene.createNode("ProtoInterface");
let field49 = browser.currentScene.createNode("field");
field49.name = "ttranslation";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
ProtoInterface48.field = new MFNode();

ProtoInterface48.field[0] = field49;

ProtoDeclare47.protoInterface = ProtoInterface48;

let ProtoBody50 = browser.currentScene.createNode("ProtoBody");
let Transform51 = browser.currentScene.createNode("Transform");
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "translation";
connect53.protoField = "ttranslation";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Transform51.iS = IS52;

let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "nine";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "ztranslation";
fieldValue55.value = "0 0 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

Transform51.children = new MFNode();

Transform51.children[0] = ProtoInstance54;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "nine";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "ztranslation";
fieldValue57.value = "0 0 2";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

Transform51.children[1] = ProtoInstance56;

let ProtoInstance58 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance58.name = "nine";
let fieldValue59 = browser.currentScene.createNode("fieldValue");
fieldValue59.name = "ztranslation";
fieldValue59.value = "0 0 -2";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

Transform51.children[2] = ProtoInstance58;

ProtoBody50.children = new MFNode();

ProtoBody50.children[0] = Transform51;

ProtoDeclare47.protoBody = ProtoBody50;

browser.currentScene.children[5] = ProtoDeclare47;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "twentyseven";
let fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "ttranslation";
fieldValue61.value = "0 0 0";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

browser.currentScene.children[6] = ProtoInstance60;

