var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Rubiks Cube";
Viewpoint3.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[1] = Viewpoint3;

ProtoDeclare4 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare4.name = "sphere";
ProtoInterface5 = browser.currentScene.createNode("ProtoInterface");
field6 = browser.currentScene.createNode("field");
field6.name = "xtranslation";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface5.field = new MFNode();

ProtoInterface5.field[0] = field6;

ProtoDeclare4.protoInterface = ProtoInterface5;

ProtoBody7 = browser.currentScene.createNode("ProtoBody");
Transform8 = browser.currentScene.createNode("Transform");
IS9 = browser.currentScene.createNode("IS");
connect10 = browser.currentScene.createNode("connect");
connect10.nodeField = "translation";
connect10.protoField = "xtranslation";
IS9.connect = new MFNode();

IS9.connect[0] = connect10;

Transform8.iS = IS9;

Shape11 = browser.currentScene.createNode("Shape");
Sphere12 = browser.currentScene.createNode("Sphere");
Shape11.geometry = Sphere12;

Appearance13 = browser.currentScene.createNode("Appearance");
Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform8.children = new MFNode();

Transform8.children[0] = Shape11;

ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = Transform8;

ProtoDeclare4.protoBody = ProtoBody7;

browser.currentScene.children[2] = ProtoDeclare4;

ProtoDeclare15 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare15.name = "three";
ProtoInterface16 = browser.currentScene.createNode("ProtoInterface");
field17 = browser.currentScene.createNode("field");
field17.name = "ytranslation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody18 = browser.currentScene.createNode("ProtoBody");
Transform19 = browser.currentScene.createNode("Transform");
IS20 = browser.currentScene.createNode("IS");
connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "translation";
connect21.protoField = "ytranslation";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

Transform19.iS = IS20;

ProtoInstance22 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance22.name = "sphere";
fieldValue23 = browser.currentScene.createNode("fieldValue");
fieldValue23.name = "xtranslation";
fieldValue23.value = "0 0 0";
ProtoInstance22.fieldValue = new MFNode();

ProtoInstance22.fieldValue[0] = fieldValue23;

Transform19.children = new MFNode();

Transform19.children[0] = ProtoInstance22;

ProtoInstance24 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance24.name = "sphere";
fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "xtranslation";
fieldValue25.value = "2 0 0";
ProtoInstance24.fieldValue = new MFNode();

ProtoInstance24.fieldValue[0] = fieldValue25;

Transform19.children[1] = ProtoInstance24;

ProtoInstance26 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance26.name = "sphere";
fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "xtranslation";
fieldValue27.value = "-2 0 0";
ProtoInstance26.fieldValue = new MFNode();

ProtoInstance26.fieldValue[0] = fieldValue27;

Transform19.children[2] = ProtoInstance26;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = Transform19;

ProtoDeclare15.protoBody = ProtoBody18;

browser.currentScene.children[3] = ProtoDeclare15;

ProtoDeclare28 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare28.name = "nine";
ProtoInterface29 = browser.currentScene.createNode("ProtoInterface");
field30 = browser.currentScene.createNode("field");
field30.name = "ztranslation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
ProtoInterface29.field = new MFNode();

ProtoInterface29.field[0] = field30;

ProtoDeclare28.protoInterface = ProtoInterface29;

ProtoBody31 = browser.currentScene.createNode("ProtoBody");
Transform32 = browser.currentScene.createNode("Transform");
IS33 = browser.currentScene.createNode("IS");
connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "ztranslation";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

Transform32.iS = IS33;

ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "three";
fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "ytranslation";
fieldValue36.value = "0 0 0";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

Transform32.children = new MFNode();

Transform32.children[0] = ProtoInstance35;

ProtoInstance37 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance37.name = "three";
fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "ytranslation";
fieldValue38.value = "0 2 0";
ProtoInstance37.fieldValue = new MFNode();

ProtoInstance37.fieldValue[0] = fieldValue38;

Transform32.children[1] = ProtoInstance37;

ProtoInstance39 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance39.name = "three";
fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "ytranslation";
fieldValue40.value = "0 -2 0";
ProtoInstance39.fieldValue = new MFNode();

ProtoInstance39.fieldValue[0] = fieldValue40;

Transform32.children[2] = ProtoInstance39;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Transform32;

ProtoDeclare28.protoBody = ProtoBody31;

browser.currentScene.children[4] = ProtoDeclare28;

ProtoDeclare41 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare41.name = "twentyseven";
ProtoInterface42 = browser.currentScene.createNode("ProtoInterface");
field43 = browser.currentScene.createNode("field");
field43.name = "ttranslation";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
field43.value = "0 0 0";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

ProtoDeclare41.protoInterface = ProtoInterface42;

ProtoBody44 = browser.currentScene.createNode("ProtoBody");
Transform45 = browser.currentScene.createNode("Transform");
IS46 = browser.currentScene.createNode("IS");
connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "translation";
connect47.protoField = "ttranslation";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

Transform45.iS = IS46;

ProtoInstance48 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance48.name = "nine";
fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "ztranslation";
fieldValue49.value = "0 0 0";
ProtoInstance48.fieldValue = new MFNode();

ProtoInstance48.fieldValue[0] = fieldValue49;

Transform45.children = new MFNode();

Transform45.children[0] = ProtoInstance48;

ProtoInstance50 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance50.name = "nine";
fieldValue51 = browser.currentScene.createNode("fieldValue");
fieldValue51.name = "ztranslation";
fieldValue51.value = "0 0 2";
ProtoInstance50.fieldValue = new MFNode();

ProtoInstance50.fieldValue[0] = fieldValue51;

Transform45.children[1] = ProtoInstance50;

ProtoInstance52 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance52.name = "nine";
fieldValue53 = browser.currentScene.createNode("fieldValue");
fieldValue53.name = "ztranslation";
fieldValue53.value = "0 0 -2";
ProtoInstance52.fieldValue = new MFNode();

ProtoInstance52.fieldValue[0] = fieldValue53;

Transform45.children[2] = ProtoInstance52;

ProtoBody44.children = new MFNode();

ProtoBody44.children[0] = Transform45;

ProtoDeclare41.protoBody = ProtoBody44;

browser.currentScene.children[5] = ProtoDeclare41;

ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "twentyseven";
fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "ttranslation";
fieldValue55.value = "0 0 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

browser.currentScene.children[6] = ProtoInstance54;

