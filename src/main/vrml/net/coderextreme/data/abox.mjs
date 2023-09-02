let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "abox.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d";
head1.meta[3] = meta5;

head = head1;

let ProtoDeclare7 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare7.name = "anyShape";
let ProtoInterface8 = browser.currentScene.createNode("ProtoInterface");
let field9 = browser.currentScene.createNode("field");
field9.accessType = "inputOutput";
field9.type = "MFNode";
field9.name = "myShape";
let Shape10 = browser.currentScene.createNode("Shape");
let Sphere11 = browser.currentScene.createNode("Sphere");
Shape10.geometry = Sphere11;

field9.children = new MFNode();

field9.children[0] = Shape10;

ProtoInterface8.field = new MFNode();

ProtoInterface8.field[0] = field9;

ProtoDeclare7.protoInterface = ProtoInterface8;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Transform13 = browser.currentScene.createNode("Transform");
let IS14 = browser.currentScene.createNode("IS");
let connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "children";
connect15.protoField = "myShape";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Transform13.iS = IS14;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

ProtoDeclare7.protoBody = ProtoBody12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare7;

let ProtoDeclare16 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare16.name = "one";
let ProtoInterface17 = browser.currentScene.createNode("ProtoInterface");
let field18 = browser.currentScene.createNode("field");
field18.accessType = "inputOutput";
field18.type = "MFNode";
field18.name = "myShape";
let Shape19 = browser.currentScene.createNode("Shape");
let Cylinder20 = browser.currentScene.createNode("Cylinder");
Shape19.geometry = Cylinder20;

field18.children = new MFNode();

field18.children[0] = Shape19;

ProtoInterface17.field = new MFNode();

ProtoInterface17.field[0] = field18;

ProtoDeclare16.protoInterface = ProtoInterface17;

let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Transform22 = browser.currentScene.createNode("Transform");
let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "anyShape";
let IS24 = browser.currentScene.createNode("IS");
let connect25 = browser.currentScene.createNode("connect");
connect25.nodeField = "myShape";
connect25.protoField = "myShape";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

ProtoInstance23.iS = IS24;

Transform22.children = new MFNode();

Transform22.children[0] = ProtoInstance23;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

ProtoDeclare16.protoBody = ProtoBody21;

browser.currentScene.children[1] = ProtoDeclare16;

let ProtoInstance26 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance26.name = "one";
let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "myShape";
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.DEF = "_1";
let Box29 = browser.currentScene.createNode("Box");
Box29.size = new SFVec3f(new float[140,140,140]);
Shape28.geometry = Box29;

fieldValue27.children = new MFNode();

fieldValue27.children[0] = Shape28;

ProtoInstance26.fieldValue = new MFNode();

ProtoInstance26.fieldValue[0] = fieldValue27;

browser.currentScene.children[2] = ProtoInstance26;

