let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Rubiks Cube on Fire";
Viewpoint3.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[1] = Viewpoint3;

let ProtoDeclare4 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="xtranslation"></connect>
<connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare4.name = "anyShape";
let ProtoInterface5 = browser.currentScene.createNode("ProtoInterface");
let field6 = browser.currentScene.createNode("field");
field6.name = "xtranslation";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface5.field = new MFNode();

ProtoInterface5.field[0] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "myShape";
field7.accessType = "inputOutput";
field7.type = "MFNode";
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere9 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere9;

let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,1,1]);
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

field7.children = new MFNode();

field7.children[0] = Shape8;

ProtoInterface5.field[1] = field7;

ProtoDeclare4.protoInterface = ProtoInterface5;

let ProtoBody12 = browser.currentScene.createNode("ProtoBody");
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS14 = browser.currentScene.createNode("IS");
let connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "translation";
connect15.protoField = "xtranslation";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "children";
connect16.protoField = "myShape";
IS14.connect[1] = connect16;

Transform13.iS = IS14;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

ProtoDeclare4.protoBody = ProtoBody12;

browser.currentScene.children[2] = ProtoDeclare4;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="ytranslation"></connect>
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
ProtoDeclare17.name = "three";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
let field19 = browser.currentScene.createNode("field");
field19.name = "ytranslation";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "myShape";
field20.accessType = "inputOutput";
field20.type = "MFNode";
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape21.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere22 = browser.currentScene.createNode("Sphere");
Shape21.geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,1,1]);
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

field20.children = new MFNode();

field20.children[0] = Shape21;

ProtoInterface18.field[1] = field20;

ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody25 = browser.currentScene.createNode("ProtoBody");
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform26.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "translation";
connect28.protoField = "ytranslation";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

Transform26.iS = IS27;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "anyShape";
let fieldValue30 = browser.currentScene.createNode("fieldValue");
fieldValue30.name = "xtranslation";
fieldValue30.value = "0 0 0";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

let IS31 = browser.currentScene.createNode("IS");
let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "myShape";
connect32.protoField = "myShape";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ProtoInstance29.iS = IS31;

Transform26.children = new MFNode();

Transform26.children[0] = ProtoInstance29;

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

Transform26.children[1] = ProtoInstance33;

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

Transform26.children[2] = ProtoInstance37;

ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Transform26;

ProtoDeclare17.protoBody = ProtoBody25;

browser.currentScene.children[3] = ProtoDeclare17;

let ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="ztranslation"></connect>
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
ProtoDeclare41.name = "nine";
let ProtoInterface42 = browser.currentScene.createNode("ProtoInterface");
let field43 = browser.currentScene.createNode("field");
field43.name = "ztranslation";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "0 0 0";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "myShape";
field44.accessType = "inputOutput";
field44.type = "MFNode";
let Shape45 = browser.currentScene.createNode("Shape");
Shape45.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape45.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere46 = browser.currentScene.createNode("Sphere");
Shape45.geometry = Sphere46;

let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.diffuseColor = new SFColor(new float[1,1,1]);
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

field44.children = new MFNode();

field44.children[0] = Shape45;

ProtoInterface42.field[1] = field44;

ProtoDeclare41.protoInterface = ProtoInterface42;

let ProtoBody49 = browser.currentScene.createNode("ProtoBody");
let Transform50 = browser.currentScene.createNode("Transform");
Transform50.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "translation";
connect52.protoField = "ztranslation";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

Transform50.iS = IS51;

let ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "three";
let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "ytranslation";
fieldValue54.value = "0 0 0";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "myShape";
connect56.protoField = "myShape";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

ProtoInstance53.iS = IS55;

Transform50.children = new MFNode();

Transform50.children[0] = ProtoInstance53;

let ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "three";
let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "ytranslation";
fieldValue58.value = "0 2 0";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "myShape";
connect60.protoField = "myShape";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

ProtoInstance57.iS = IS59;

Transform50.children[1] = ProtoInstance57;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "three";
let fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "ytranslation";
fieldValue62.value = "0 -2 0";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "myShape";
connect64.protoField = "myShape";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

ProtoInstance61.iS = IS63;

Transform50.children[2] = ProtoInstance61;

ProtoBody49.children = new MFNode();

ProtoBody49.children[0] = Transform50;

ProtoDeclare41.protoBody = ProtoBody49;

browser.currentScene.children[4] = ProtoDeclare41;

let ProtoDeclare65 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="MFNode"><Shape bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="translation" protoField="ttranslation"></connect>
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
ProtoDeclare65.name = "twentyseven";
let ProtoInterface66 = browser.currentScene.createNode("ProtoInterface");
let field67 = browser.currentScene.createNode("field");
field67.name = "ttranslation";
field67.accessType = "inputOutput";
field67.type = "SFVec3f";
field67.value = "0 0 0";
ProtoInterface66.field = new MFNode();

ProtoInterface66.field[0] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "myShape";
field68.accessType = "inputOutput";
field68.type = "MFNode";
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape69.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere70 = browser.currentScene.createNode("Sphere");
Shape69.geometry = Sphere70;

let Appearance71 = browser.currentScene.createNode("Appearance");
let Material72 = browser.currentScene.createNode("Material");
Material72.diffuseColor = new SFColor(new float[1,1,1]);
Appearance71.material = Material72;

Shape69.appearance = Appearance71;

field68.children = new MFNode();

field68.children[0] = Shape69;

ProtoInterface66.field[1] = field68;

ProtoDeclare65.protoInterface = ProtoInterface66;

let ProtoBody73 = browser.currentScene.createNode("ProtoBody");
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform74.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "translation";
connect76.protoField = "ttranslation";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

Transform74.iS = IS75;

let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "nine";
let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "ztranslation";
fieldValue78.value = "0 0 0";
ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "myShape";
connect80.protoField = "myShape";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

ProtoInstance77.iS = IS79;

Transform74.children = new MFNode();

Transform74.children[0] = ProtoInstance77;

let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "nine";
let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "ztranslation";
fieldValue82.value = "0 0 2";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

let IS83 = browser.currentScene.createNode("IS");
let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "myShape";
connect84.protoField = "myShape";
IS83.connect = new MFNode();

IS83.connect[0] = connect84;

ProtoInstance81.iS = IS83;

Transform74.children[1] = ProtoInstance81;

let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "nine";
let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "ztranslation";
fieldValue86.value = "0 0 -2";
ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

let IS87 = browser.currentScene.createNode("IS");
let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "myShape";
connect88.protoField = "myShape";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

ProtoInstance85.iS = IS87;

Transform74.children[2] = ProtoInstance85;

ProtoBody73.children = new MFNode();

ProtoBody73.children[0] = Transform74;

ProtoDeclare65.protoBody = ProtoBody73;

browser.currentScene.children[5] = ProtoDeclare65;

let ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "twentyseven";
let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "ttranslation";
fieldValue90.value = "0 0 0";
ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "myShape";
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape92.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Box93 = browser.currentScene.createNode("Box");
Box93.size = new SFVec3f(new float[1,1,1]);
Box93.solid = True;
Shape92.geometry = Box93;

let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.diffuseColor = new SFColor(new float[0,1,0]);
Appearance94.material = Material95;

Shape92.appearance = Appearance94;

fieldValue91.children = new MFNode();

fieldValue91.children[0] = Shape92;

ProtoInstance89.fieldValue[1] = fieldValue91;

browser.currentScene.children[6] = ProtoInstance89;

