var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = ["EXAMINE"];
browser.currentScene.children = [];

browser.currentScene.children[0] = NavigationInfo2;

Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Rubiks Cube on Fire";
Viewpoint3.position = [0,0,12];
browser.currentScene.children[1] = Viewpoint3;

ProtoDeclare4 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare4.name = "anyShape";
ProtoInterface5 = browser.currentScene.createNode("ProtoInterface");
field6 = browser.currentScene.createNode("field");
field6.name = "xtranslation";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface5.field = [];

ProtoInterface5.field[0] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "myShape";
field7.accessType = "inputOutput";
field7.type = "SFNode";
Sphere8 = browser.currentScene.createNode("Sphere");
field7.children = [];

field7.children[0] = Sphere8;

ProtoInterface5.field[1] = field7;

ProtoDeclare4.protoInterface = ProtoInterface5;

ProtoBody9 = browser.currentScene.createNode("ProtoBody");
Transform10 = browser.currentScene.createNode("Transform");
IS11 = browser.currentScene.createNode("IS");
connect12 = browser.currentScene.createNode("connect");
connect12.nodeField = "translation";
connect12.protoField = "xtranslation";
IS11.connect = [];

IS11.connect[0] = connect12;

Transform10.iS = IS11;

Shape13 = browser.currentScene.createNode("Shape");
IS14 = browser.currentScene.createNode("IS");
connect15 = browser.currentScene.createNode("connect");
connect15.nodeField = "geometry";
connect15.protoField = "myShape";
IS14.connect = [];

IS14.connect[0] = connect15;

Shape13.iS = IS14;

Appearance16 = browser.currentScene.createNode("Appearance");
Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = [1,1,1];
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Transform10.children = [];

Transform10.children[0] = Shape13;

ProtoBody9.children = [];

ProtoBody9.children[0] = Transform10;

ProtoDeclare4.protoBody = ProtoBody9;

browser.currentScene.children[2] = ProtoDeclare4;

ProtoDeclare18 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare18.name = "three";
ProtoInterface19 = browser.currentScene.createNode("ProtoInterface");
field20 = browser.currentScene.createNode("field");
field20.name = "ytranslation";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0 0 0";
ProtoInterface19.field = [];

ProtoInterface19.field[0] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "myShape";
field21.accessType = "inputOutput";
field21.type = "SFNode";
Sphere22 = browser.currentScene.createNode("Sphere");
field21.children = [];

field21.children[0] = Sphere22;

ProtoInterface19.field[1] = field21;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody23 = browser.currentScene.createNode("ProtoBody");
Transform24 = browser.currentScene.createNode("Transform");
IS25 = browser.currentScene.createNode("IS");
connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "translation";
connect26.protoField = "ytranslation";
IS25.connect = [];

IS25.connect[0] = connect26;

Transform24.iS = IS25;

ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "anyShape";
fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "xtranslation";
fieldValue28.value = "0 0 0";
ProtoInstance27.fieldValue = [];

ProtoInstance27.fieldValue[0] = fieldValue28;

IS29 = browser.currentScene.createNode("IS");
connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "myShape";
connect30.protoField = "myShape";
IS29.connect = [];

IS29.connect[0] = connect30;

ProtoInstance27.iS = IS29;

Transform24.children = [];

Transform24.children[0] = ProtoInstance27;

ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "anyShape";
fieldValue32 = browser.currentScene.createNode("fieldValue");
fieldValue32.name = "xtranslation";
fieldValue32.value = "2 0 0";
ProtoInstance31.fieldValue = [];

ProtoInstance31.fieldValue[0] = fieldValue32;

IS33 = browser.currentScene.createNode("IS");
connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "myShape";
connect34.protoField = "myShape";
IS33.connect = [];

IS33.connect[0] = connect34;

ProtoInstance31.iS = IS33;

Transform24.children[1] = ProtoInstance31;

ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "anyShape";
fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "xtranslation";
fieldValue36.value = "-2 0 0";
ProtoInstance35.fieldValue = [];

ProtoInstance35.fieldValue[0] = fieldValue36;

IS37 = browser.currentScene.createNode("IS");
connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "myShape";
connect38.protoField = "myShape";
IS37.connect = [];

IS37.connect[0] = connect38;

ProtoInstance35.iS = IS37;

Transform24.children[2] = ProtoInstance35;

ProtoBody23.children = [];

ProtoBody23.children[0] = Transform24;

ProtoDeclare18.protoBody = ProtoBody23;

browser.currentScene.children[3] = ProtoDeclare18;

ProtoDeclare39 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare39.name = "nine";
ProtoInterface40 = browser.currentScene.createNode("ProtoInterface");
field41 = browser.currentScene.createNode("field");
field41.name = "ztranslation";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "0 0 0";
ProtoInterface40.field = [];

ProtoInterface40.field[0] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "myShape";
field42.accessType = "inputOutput";
field42.type = "SFNode";
Sphere43 = browser.currentScene.createNode("Sphere");
field42.children = [];

field42.children[0] = Sphere43;

ProtoInterface40.field[1] = field42;

ProtoDeclare39.protoInterface = ProtoInterface40;

ProtoBody44 = browser.currentScene.createNode("ProtoBody");
Transform45 = browser.currentScene.createNode("Transform");
IS46 = browser.currentScene.createNode("IS");
connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "translation";
connect47.protoField = "ztranslation";
IS46.connect = [];

IS46.connect[0] = connect47;

Transform45.iS = IS46;

ProtoInstance48 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance48.name = "three";
fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "ytranslation";
fieldValue49.value = "0 0 0";
ProtoInstance48.fieldValue = [];

ProtoInstance48.fieldValue[0] = fieldValue49;

IS50 = browser.currentScene.createNode("IS");
connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "myShape";
connect51.protoField = "myShape";
IS50.connect = [];

IS50.connect[0] = connect51;

ProtoInstance48.iS = IS50;

Transform45.children = [];

Transform45.children[0] = ProtoInstance48;

ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "three";
fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "ytranslation";
fieldValue53.value = "0 2 0";
ProtoInstance52.fieldValue = [];

ProtoInstance52.fieldValue[0] = fieldValue53;

IS54 = browser.currentScene.createNode("IS");
connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "myShape";
connect55.protoField = "myShape";
IS54.connect = [];

IS54.connect[0] = connect55;

ProtoInstance52.iS = IS54;

Transform45.children[1] = ProtoInstance52;

ProtoInstance56 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance56.name = "three";
fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "ytranslation";
fieldValue57.value = "0 -2 0";
ProtoInstance56.fieldValue = [];

ProtoInstance56.fieldValue[0] = fieldValue57;

IS58 = browser.currentScene.createNode("IS");
connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "myShape";
connect59.protoField = "myShape";
IS58.connect = [];

IS58.connect[0] = connect59;

ProtoInstance56.iS = IS58;

Transform45.children[2] = ProtoInstance56;

ProtoBody44.children = [];

ProtoBody44.children[0] = Transform45;

ProtoDeclare39.protoBody = ProtoBody44;

browser.currentScene.children[4] = ProtoDeclare39;

ProtoDeclare60 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare60.name = "twentyseven";
ProtoInterface61 = browser.currentScene.createNode("ProtoInterface");
field62 = browser.currentScene.createNode("field");
field62.name = "ttranslation";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
ProtoInterface61.field = [];

ProtoInterface61.field[0] = field62;

field63 = browser.currentScene.createNode("field");
field63.name = "myShape";
field63.accessType = "inputOutput";
field63.type = "SFNode";
Sphere64 = browser.currentScene.createNode("Sphere");
field63.children = [];

field63.children[0] = Sphere64;

ProtoInterface61.field[1] = field63;

ProtoDeclare60.protoInterface = ProtoInterface61;

ProtoBody65 = browser.currentScene.createNode("ProtoBody");
Transform66 = browser.currentScene.createNode("Transform");
IS67 = browser.currentScene.createNode("IS");
connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "translation";
connect68.protoField = "ttranslation";
IS67.connect = [];

IS67.connect[0] = connect68;

Transform66.iS = IS67;

ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "nine";
fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "ztranslation";
fieldValue70.value = "0 0 0";
ProtoInstance69.fieldValue = [];

ProtoInstance69.fieldValue[0] = fieldValue70;

IS71 = browser.currentScene.createNode("IS");
connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "myShape";
connect72.protoField = "myShape";
IS71.connect = [];

IS71.connect[0] = connect72;

ProtoInstance69.iS = IS71;

Transform66.children = [];

Transform66.children[0] = ProtoInstance69;

ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "nine";
fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "ztranslation";
fieldValue74.value = "0 0 2";
ProtoInstance73.fieldValue = [];

ProtoInstance73.fieldValue[0] = fieldValue74;

IS75 = browser.currentScene.createNode("IS");
connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "myShape";
connect76.protoField = "myShape";
IS75.connect = [];

IS75.connect[0] = connect76;

ProtoInstance73.iS = IS75;

Transform66.children[1] = ProtoInstance73;

ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "nine";
fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "ztranslation";
fieldValue78.value = "0 0 -2";
ProtoInstance77.fieldValue = [];

ProtoInstance77.fieldValue[0] = fieldValue78;

IS79 = browser.currentScene.createNode("IS");
connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "myShape";
connect80.protoField = "myShape";
IS79.connect = [];

IS79.connect[0] = connect80;

ProtoInstance77.iS = IS79;

Transform66.children[2] = ProtoInstance77;

ProtoBody65.children = [];

ProtoBody65.children[0] = Transform66;

ProtoDeclare60.protoBody = ProtoBody65;

browser.currentScene.children[5] = ProtoDeclare60;

ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.name = "twentyseven";
fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "ttranslation";
fieldValue82.value = "0 0 0";
ProtoInstance81.fieldValue = [];

ProtoInstance81.fieldValue[0] = fieldValue82;

fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "myShape";
Box84 = browser.currentScene.createNode("Box");
Box84.size = [1,1,1];
fieldValue83.children = [];

fieldValue83.children[0] = Box84;

ProtoInstance81.fieldValue[1] = fieldValue83;

browser.currentScene.children[6] = ProtoInstance81;

