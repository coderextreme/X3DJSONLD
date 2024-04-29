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

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a box";
head1.meta[4] = meta6;

head = head1;

let ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "anyShape";
let ProtoInterface9 = browser.currentScene.createNode("ProtoInterface");
let field10 = browser.currentScene.createNode("field");
field10.name = "myShape";
field10.accessType = "inputOutput";
field10.type = "MFNode";
let Shape11 = browser.currentScene.createNode("Shape");
let Sphere12 = browser.currentScene.createNode("Sphere");
Shape11.geometry = Sphere12;

field10.children = new MFNode();

field10.children[0] = Shape11;

ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

ProtoDeclare8.protoInterface = ProtoInterface9;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "children";
connect16.protoField = "myShape";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare8.protoBody = ProtoBody13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare8;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "one";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
let field19 = browser.currentScene.createNode("field");
field19.name = "myShape";
field19.accessType = "inputOutput";
field19.type = "MFNode";
let Shape20 = browser.currentScene.createNode("Shape");
let Cylinder21 = browser.currentScene.createNode("Cylinder");
Shape20.geometry = Cylinder21;

field19.children = new MFNode();

field19.children[0] = Shape20;

ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody22 = browser.currentScene.createNode("ProtoBody");
let Transform23 = browser.currentScene.createNode("Transform");
let ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "anyShape";
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "myShape";
connect26.protoField = "myShape";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

ProtoInstance24.iS = IS25;

Transform23.children = new MFNode();

Transform23.children[0] = ProtoInstance24;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Transform23;

ProtoDeclare17.protoBody = ProtoBody22;

browser.currentScene.children[1] = ProtoDeclare17;

let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "one";
let fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "myShape";
let Shape29 = browser.currentScene.createNode("Shape");
let Box30 = browser.currentScene.createNode("Box");
Box30.size = new SFVec3f(new float[140,140,140]);
Shape29.geometry = Box30;

fieldValue28.children = new MFNode();

fieldValue28.children[0] = Shape29;

ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

browser.currentScene.children[2] = ProtoInstance27;

