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
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="xtranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="xtranslation"></connect>
</IS>
<Shape><IS><connect nodeField="geometry" protoField="myShape"></connect>
</IS>
<Appearance><Material diffuseColor="1 1 1"></Material>
</Appearance>
</Shape>
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
field7.type = "SFNode";
let Sphere8 = browser.currentScene.createNode("Sphere");
field7.children = new MFNode();

field7.children[0] = Sphere8;

ProtoInterface5.field[1] = field7;

ProtoDeclare4.protoInterface = ProtoInterface5;

let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
let Transform10 = browser.currentScene.createNode("Transform");
let IS11 = browser.currentScene.createNode("IS");
let connect12 = browser.currentScene.createNode("connect");
connect12.nodeField = "translation";
connect12.protoField = "xtranslation";
IS11.connect = new MFNode();

IS11.connect[0] = connect12;

Transform10.iS = IS11;

let Shape13 = browser.currentScene.createNode("Shape");
let IS14 = browser.currentScene.createNode("IS");
let connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "geometry";
connect15.protoField = "myShape";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

Shape13.iS = IS14;

let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[1,1,1]);
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Transform10.children = new MFNode();

Transform10.children[0] = Shape13;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Transform10;

ProtoDeclare4.protoBody = ProtoBody9;

browser.currentScene.children[2] = ProtoDeclare4;

let ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="three" ><ProtoInterface><field name="ytranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ytranslation"></connect>
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
ProtoDeclare18.name = "three";
let ProtoInterface19 = browser.currentScene.createNode("ProtoInterface");
let field20 = browser.currentScene.createNode("field");
field20.name = "ytranslation";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0 0 0";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "myShape";
field21.accessType = "inputOutput";
field21.type = "SFNode";
let Sphere22 = browser.currentScene.createNode("Sphere");
field21.children = new MFNode();

field21.children[0] = Sphere22;

ProtoInterface19.field[1] = field21;

ProtoDeclare18.protoInterface = ProtoInterface19;

let ProtoBody23 = browser.currentScene.createNode("ProtoBody");
let Transform24 = browser.currentScene.createNode("Transform");
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "translation";
connect26.protoField = "ytranslation";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

Transform24.iS = IS25;

let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "anyShape";
let fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "xtranslation";
fieldValue28.value = "0 0 0";
ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

let IS29 = browser.currentScene.createNode("IS");
let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "myShape";
connect30.protoField = "myShape";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

ProtoInstance27.iS = IS29;

Transform24.children = new MFNode();

Transform24.children[0] = ProtoInstance27;

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

Transform24.children[1] = ProtoInstance31;

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

Transform24.children[2] = ProtoInstance35;

ProtoBody23.children = new MFNode();

ProtoBody23.children[0] = Transform24;

ProtoDeclare18.protoBody = ProtoBody23;

browser.currentScene.children[3] = ProtoDeclare18;

let ProtoDeclare39 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="nine" ><ProtoInterface><field name="ztranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ztranslation"></connect>
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
ProtoDeclare39.name = "nine";
let ProtoInterface40 = browser.currentScene.createNode("ProtoInterface");
let field41 = browser.currentScene.createNode("field");
field41.name = "ztranslation";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "0 0 0";
ProtoInterface40.field = new MFNode();

ProtoInterface40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "myShape";
field42.accessType = "inputOutput";
field42.type = "SFNode";
let Sphere43 = browser.currentScene.createNode("Sphere");
field42.children = new MFNode();

field42.children[0] = Sphere43;

ProtoInterface40.field[1] = field42;

ProtoDeclare39.protoInterface = ProtoInterface40;

let ProtoBody44 = browser.currentScene.createNode("ProtoBody");
let Transform45 = browser.currentScene.createNode("Transform");
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "translation";
connect47.protoField = "ztranslation";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

Transform45.iS = IS46;

let ProtoInstance48 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance48.name = "three";
let fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "ytranslation";
fieldValue49.value = "0 0 0";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "myShape";
connect51.protoField = "myShape";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

ProtoInstance48.iS = IS50;

Transform45.children = new MFNode();

Transform45.children[0] = ProtoInstance48;

let ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "three";
let fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "ytranslation";
fieldValue53.value = "0 2 0";
ProtoInstance52.fieldValue = new MFNode();

ProtoInstance52.fieldValue[0] = fieldValue53;

let IS54 = browser.currentScene.createNode("IS");
let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "myShape";
connect55.protoField = "myShape";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

ProtoInstance52.iS = IS54;

Transform45.children[1] = ProtoInstance52;

let ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "three";
let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "ytranslation";
fieldValue57.value = "0 -2 0";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "myShape";
connect59.protoField = "myShape";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

ProtoInstance56.iS = IS58;

Transform45.children[2] = ProtoInstance56;

ProtoBody44.children = new MFNode();

ProtoBody44.children[0] = Transform45;

ProtoDeclare39.protoBody = ProtoBody44;

browser.currentScene.children[4] = ProtoDeclare39;

let ProtoDeclare60 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="twentyseven" ><ProtoInterface><field name="ttranslation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="myShape" accessType="inputOutput" type="SFNode"><Sphere></Sphere>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="ttranslation"></connect>
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
ProtoDeclare60.name = "twentyseven";
let ProtoInterface61 = browser.currentScene.createNode("ProtoInterface");
let field62 = browser.currentScene.createNode("field");
field62.name = "ttranslation";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
ProtoInterface61.field = new MFNode();

ProtoInterface61.field[0] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "myShape";
field63.accessType = "inputOutput";
field63.type = "SFNode";
let Sphere64 = browser.currentScene.createNode("Sphere");
field63.children = new MFNode();

field63.children[0] = Sphere64;

ProtoInterface61.field[1] = field63;

ProtoDeclare60.protoInterface = ProtoInterface61;

let ProtoBody65 = browser.currentScene.createNode("ProtoBody");
let Transform66 = browser.currentScene.createNode("Transform");
let IS67 = browser.currentScene.createNode("IS");
let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "translation";
connect68.protoField = "ttranslation";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

Transform66.iS = IS67;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "nine";
let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "ztranslation";
fieldValue70.value = "0 0 0";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

let IS71 = browser.currentScene.createNode("IS");
let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "myShape";
connect72.protoField = "myShape";
IS71.connect = new MFNode();

IS71.connect[0] = connect72;

ProtoInstance69.iS = IS71;

Transform66.children = new MFNode();

Transform66.children[0] = ProtoInstance69;

let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "nine";
let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "ztranslation";
fieldValue74.value = "0 0 2";
ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "myShape";
connect76.protoField = "myShape";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

ProtoInstance73.iS = IS75;

Transform66.children[1] = ProtoInstance73;

let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "nine";
let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "ztranslation";
fieldValue78.value = "0 0 -2";
ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "myShape";
connect80.protoField = "myShape";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

ProtoInstance77.iS = IS79;

Transform66.children[2] = ProtoInstance77;

ProtoBody65.children = new MFNode();

ProtoBody65.children[0] = Transform66;

ProtoDeclare60.protoBody = ProtoBody65;

browser.currentScene.children[5] = ProtoDeclare60;

let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "twentyseven";
let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "ttranslation";
fieldValue82.value = "0 0 0";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "myShape";
let Box84 = browser.currentScene.createNode("Box");
Box84.size = new SFVec3f(new float[1,1,1]);
fieldValue83.children = new MFNode();

fieldValue83.children[0] = Box84;

ProtoInstance81.fieldValue[1] = fieldValue83;

browser.currentScene.children[6] = ProtoInstance81;

