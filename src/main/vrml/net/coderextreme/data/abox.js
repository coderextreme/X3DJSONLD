let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "anyShape";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "myShape";
field4.accessType = "inputOutput";
field4.type = "MFNode";
let Shape5 = browser.currentScene.createNode("Shape");
let Sphere6 = browser.currentScene.createNode("Sphere");
Shape5.geometry = Sphere6;

field4.children = new MFNode();

field4.children[0] = Shape5;

ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody7 = browser.currentScene.createNode("ProtoBody");
let Transform8 = browser.currentScene.createNode("Transform");
let IS9 = browser.currentScene.createNode("IS");
let connect10 = browser.currentScene.createNode("connect");
connect10.nodeField = "children";
connect10.protoField = "myShape";
IS9.connect = new MFNode();

IS9.connect[0] = connect10;

Transform8.iS = IS9;

ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = Transform8;

ProtoDeclare2.protoBody = ProtoBody7;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare11 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder containerField="geometry"></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare11.name = "one";
let ProtoInterface12 = browser.currentScene.createNode("ProtoInterface");
let field13 = browser.currentScene.createNode("field");
field13.name = "myShape";
field13.accessType = "inputOutput";
field13.type = "MFNode";
let Shape14 = browser.currentScene.createNode("Shape");
let Cylinder15 = browser.currentScene.createNode("Cylinder");
Shape14.geometry = Cylinder15;

field13.children = new MFNode();

field13.children[0] = Shape14;

ProtoInterface12.field = new MFNode();

ProtoInterface12.field[0] = field13;

ProtoDeclare11.protoInterface = ProtoInterface12;

let ProtoBody16 = browser.currentScene.createNode("ProtoBody");
let Transform17 = browser.currentScene.createNode("Transform");
let ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "anyShape";
let IS19 = browser.currentScene.createNode("IS");
let connect20 = browser.currentScene.createNode("connect");
connect20.nodeField = "myShape";
connect20.protoField = "myShape";
IS19.connect = new MFNode();

IS19.connect[0] = connect20;

ProtoInstance18.iS = IS19;

Transform17.children = new MFNode();

Transform17.children[0] = ProtoInstance18;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Transform17;

ProtoDeclare11.protoBody = ProtoBody16;

browser.currentScene.children[1] = ProtoDeclare11;

let ProtoInstance21 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance21.name = "one";
let fieldValue22 = browser.currentScene.createNode("fieldValue");
fieldValue22.name = "myShape";
let Shape23 = browser.currentScene.createNode("Shape");
let Box24 = browser.currentScene.createNode("Box");
Box24.size = new SFVec3f(new float[140,140,140]);
Shape23.geometry = Box24;

fieldValue22.children = new MFNode();

fieldValue22.children[0] = Shape23;

ProtoInstance21.fieldValue = new MFNode();

ProtoInstance21.fieldValue[0] = fieldValue22;

browser.currentScene.children[2] = ProtoInstance21;

