var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Cubes on Fire";
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
Cylinder22 = browser.currentScene.createNode("Cylinder");
Shape21.geometry = Cylinder22;

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

ProtoInstance41 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance41.name = "three";
ProtoInstance41.DEF = "threepi";
fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "ytranslation";
fieldValue42.value = "0 0 0";
ProtoInstance41.fieldValue = new MFNode();

ProtoInstance41.fieldValue[0] = fieldValue42;

fieldValue43 = browser.currentScene.createNode("fieldValue");
fieldValue43.name = "myShape";
Shape44 = browser.currentScene.createNode("Shape");
Shape44.DEF = "box";
Box45 = browser.currentScene.createNode("Box");
Box45.size = new SFVec3f(new float[1,1,1]);
Shape44.geometry = Box45;

Appearance46 = browser.currentScene.createNode("Appearance");
Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new SFColor(new float[0,1,0]);
Appearance46.material = Material47;

Shape44.appearance = Appearance46;

fieldValue43.children = new MFNode();

fieldValue43.children[0] = Shape44;

ProtoInstance41.fieldValue[1] = fieldValue43;

browser.currentScene.children[4] = ProtoInstance41;

Transform48 = browser.currentScene.createNode("Transform");
Transform48.translation = new SFVec3f(new float[0,2,0]);
Shape49 = browser.currentScene.createNode("Shape");
Shape49.USE = "box";
Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

browser.currentScene.children[5] = Transform48;

