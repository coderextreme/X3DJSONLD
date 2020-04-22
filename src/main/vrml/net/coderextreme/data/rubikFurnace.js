var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Rubiks Cube on Fire";
Viewpoint3.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[1] = Viewpoint3;

ProtoDeclare4 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare4.name = "anyShape";
ProtoInterface5 = browser.currentScene.createNode("ProtoInterface");
field6 = browser.currentScene.createNode("field");
field6.name = "xtranslation";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface5.field = new MFNode();

ProtoInterface5.field[0] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "myShape";
field7.accessType = "inputOutput";
field7.type = "MFNode";
Shape8 = browser.currentScene.createNode("Shape");
Sphere9 = browser.currentScene.createNode("Sphere");
Shape8.geometry = Sphere9;

Appearance10 = browser.currentScene.createNode("Appearance");
Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,1,1]);
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

field7.children = new MFNode();

field7.children[0] = Shape8;

ProtoInterface5.field[1] = field7;

ProtoDeclare4.protoInterface = ProtoInterface5;

ProtoBody12 = browser.currentScene.createNode("ProtoBody");
Transform13 = browser.currentScene.createNode("Transform");
IS14 = browser.currentScene.createNode("IS");
connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "translation";
connect15.protoField = "xtranslation";
IS14.connect = new MFNode();

IS14.connect[0] = connect15;

connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "children";
connect16.protoField = "myShape";
IS14.connect[1] = connect16;

Transform13.iS = IS14;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Transform13;

ProtoDeclare4.protoBody = ProtoBody12;

browser.currentScene.children[2] = ProtoDeclare4;

ProtoDeclare17 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare17.name = "three";
ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
field19 = browser.currentScene.createNode("field");
field19.name = "ytranslation";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "myShape";
field20.accessType = "inputOutput";
field20.type = "MFNode";
Shape21 = browser.currentScene.createNode("Shape");
Sphere22 = browser.currentScene.createNode("Sphere");
Shape21.geometry = Sphere22;

Appearance23 = browser.currentScene.createNode("Appearance");
Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,1,1]);
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

field20.children = new MFNode();

field20.children[0] = Shape21;

ProtoInterface18.field[1] = field20;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody25 = browser.currentScene.createNode("ProtoBody");
Transform26 = browser.currentScene.createNode("Transform");
IS27 = browser.currentScene.createNode("IS");
connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "translation";
connect28.protoField = "ytranslation";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

Transform26.iS = IS27;

ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "anyShape";
fieldValue30 = browser.currentScene.createNode("fieldValue");
fieldValue30.name = "xtranslation";
fieldValue30.value = "0 0 0";
ProtoInstance29.fieldValue = new MFNode();

ProtoInstance29.fieldValue[0] = fieldValue30;

IS31 = browser.currentScene.createNode("IS");
connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "myShape";
connect32.protoField = "myShape";
IS31.connect = new MFNode();

IS31.connect[0] = connect32;

ProtoInstance29.iS = IS31;

Transform26.children = new MFNode();

Transform26.children[0] = ProtoInstance29;

ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "anyShape";
fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "xtranslation";
fieldValue34.value = "2 0 0";
ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

IS35 = browser.currentScene.createNode("IS");
connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "myShape";
connect36.protoField = "myShape";
IS35.connect = new MFNode();

IS35.connect[0] = connect36;

ProtoInstance33.iS = IS35;

Transform26.children[1] = ProtoInstance33;

ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "anyShape";
fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "xtranslation";
fieldValue38.value = "-2 0 0";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

IS39 = browser.currentScene.createNode("IS");
connect40 = browser.currentScene.createNode("connect");
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

ProtoDeclare41 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare41.name = "nine";
ProtoInterface42 = browser.currentScene.createNode("ProtoInterface");
field43 = browser.currentScene.createNode("field");
field43.name = "ztranslation";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "0 0 0";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "myShape";
field44.accessType = "inputOutput";
field44.type = "MFNode";
Shape45 = browser.currentScene.createNode("Shape");
Sphere46 = browser.currentScene.createNode("Sphere");
Shape45.geometry = Sphere46;

Appearance47 = browser.currentScene.createNode("Appearance");
Material48 = browser.currentScene.createNode("Material");
Material48.diffuseColor = new SFColor(new float[1,1,1]);
Appearance47.material = Material48;

Shape45.appearance = Appearance47;

field44.children = new MFNode();

field44.children[0] = Shape45;

ProtoInterface42.field[1] = field44;

ProtoDeclare41.protoInterface = ProtoInterface42;

ProtoBody49 = browser.currentScene.createNode("ProtoBody");
Transform50 = browser.currentScene.createNode("Transform");
IS51 = browser.currentScene.createNode("IS");
connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "translation";
connect52.protoField = "ztranslation";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

Transform50.iS = IS51;

ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "three";
fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "ytranslation";
fieldValue54.value = "0 0 0";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

IS55 = browser.currentScene.createNode("IS");
connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "myShape";
connect56.protoField = "myShape";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

ProtoInstance53.iS = IS55;

Transform50.children = new MFNode();

Transform50.children[0] = ProtoInstance53;

ProtoInstance57 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance57.name = "three";
fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "ytranslation";
fieldValue58.value = "0 2 0";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

IS59 = browser.currentScene.createNode("IS");
connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "myShape";
connect60.protoField = "myShape";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

ProtoInstance57.iS = IS59;

Transform50.children[1] = ProtoInstance57;

ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "three";
fieldValue62 = browser.currentScene.createNode("fieldValue");
fieldValue62.name = "ytranslation";
fieldValue62.value = "0 -2 0";
ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

IS63 = browser.currentScene.createNode("IS");
connect64 = browser.currentScene.createNode("connect");
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

ProtoDeclare65 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare65.name = "twentyseven";
ProtoInterface66 = browser.currentScene.createNode("ProtoInterface");
field67 = browser.currentScene.createNode("field");
field67.name = "ttranslation";
field67.accessType = "inputOutput";
field67.type = "SFVec3f";
field67.value = "0 0 0";
ProtoInterface66.field = new MFNode();

ProtoInterface66.field[0] = field67;

field68 = browser.currentScene.createNode("field");
field68.name = "myShape";
field68.accessType = "inputOutput";
field68.type = "MFNode";
Shape69 = browser.currentScene.createNode("Shape");
Sphere70 = browser.currentScene.createNode("Sphere");
Shape69.geometry = Sphere70;

Appearance71 = browser.currentScene.createNode("Appearance");
Material72 = browser.currentScene.createNode("Material");
Material72.diffuseColor = new SFColor(new float[1,1,1]);
Appearance71.material = Material72;

Shape69.appearance = Appearance71;

field68.children = new MFNode();

field68.children[0] = Shape69;

ProtoInterface66.field[1] = field68;

ProtoDeclare65.protoInterface = ProtoInterface66;

ProtoBody73 = browser.currentScene.createNode("ProtoBody");
Transform74 = browser.currentScene.createNode("Transform");
IS75 = browser.currentScene.createNode("IS");
connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "translation";
connect76.protoField = "ttranslation";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

Transform74.iS = IS75;

ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "nine";
fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "ztranslation";
fieldValue78.value = "0 0 0";
ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

IS79 = browser.currentScene.createNode("IS");
connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "myShape";
connect80.protoField = "myShape";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

ProtoInstance77.iS = IS79;

Transform74.children = new MFNode();

Transform74.children[0] = ProtoInstance77;

ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "nine";
fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "ztranslation";
fieldValue82.value = "0 0 2";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

IS83 = browser.currentScene.createNode("IS");
connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "myShape";
connect84.protoField = "myShape";
IS83.connect = new MFNode();

IS83.connect[0] = connect84;

ProtoInstance81.iS = IS83;

Transform74.children[1] = ProtoInstance81;

ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "nine";
fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "ztranslation";
fieldValue86.value = "0 0 -2";
ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

IS87 = browser.currentScene.createNode("IS");
connect88 = browser.currentScene.createNode("connect");
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

ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "twentyseven";
fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "ttranslation";
fieldValue90.value = "0 0 0";
ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "myShape";
Shape92 = browser.currentScene.createNode("Shape");
Box93 = browser.currentScene.createNode("Box");
Box93.size = new SFVec3f(new float[1,1,1]);
Shape92.geometry = Box93;

Appearance94 = browser.currentScene.createNode("Appearance");
Material95 = browser.currentScene.createNode("Material");
Material95.diffuseColor = new SFColor(new float[0,1,0]);
Appearance94.material = Material95;

Shape92.appearance = Appearance94;

fieldValue91.children = new MFNode();

fieldValue91.children[0] = Shape92;

ProtoInstance89.fieldValue[1] = fieldValue91;

browser.currentScene.children[6] = ProtoInstance89;

