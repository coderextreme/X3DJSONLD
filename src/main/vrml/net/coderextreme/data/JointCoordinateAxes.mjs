let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "converter";
meta2.content = "x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "converted";
meta3.content = "Mon, 31 Jul 2023 03:48:04 GMT";
head1.meta[1] = meta3;

head = head1;

let NavigationInfo5 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo5.headlight = False;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo5;

let Group6 = browser.currentScene.createNode("Group");
let Group7 = browser.currentScene.createNode("Group");
Group7.DEF = "ARROW";
let Shape8 = browser.currentScene.createNode("Shape");
let Appearance9 = browser.currentScene.createNode("Appearance");
Appearance9.DEF = "ARROW_APPEARANCE";
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material10.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

let Cylinder11 = browser.currentScene.createNode("Cylinder");
Cylinder11.top = False;
Cylinder11.bottom = False;
Cylinder11.radius = 0.025;
Shape8.geometry = Cylinder11;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,1,0]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "ARROW_POINTER";
let Appearance14 = browser.currentScene.createNode("Appearance");
Appearance14.USE = "ARROW_APPEARANCE";
Shape13.appearance = Appearance14;

let Cone15 = browser.currentScene.createNode("Cone");
Cone15.height = 0.1;
Cone15.bottomRadius = 0.05;
Shape13.geometry = Cone15;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Group7.children[1] = Transform12;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,-1,0]);
Transform16.rotation = new SFRotation(new float[1,0,0,3.1416]);
let Shape17 = browser.currentScene.createNode("Shape");
Shape17.USE = "ARROW_POINTER";
Transform16.child = new undefined();

Transform16.child[0] = Shape17;

Group7.children[2] = Transform16;

Group6.children = new MFNode();

Group6.children[0] = Group7;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,1.08,0]);
let Billboard19 = browser.currentScene.createNode("Billboard");
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "LABEL_APPEARANCE";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,0.3]);
Material22.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Text23 = browser.currentScene.createNode("Text");
Text23.string = new MFString(new java.lang.String["Y"]);
let FontStyle24 = browser.currentScene.createNode("FontStyle");
FontStyle24.DEF = "LABEL_FONT";
FontStyle24.family = new MFString(new java.lang.String["SANS"]);
FontStyle24.size = 0.2;
FontStyle24.justify = new MFString(new java.lang.String["MIDDLE"]);
Text23.fontStyle = FontStyle24;

Shape20.geometry = Text23;

Billboard19.children = new MFNode();

Billboard19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Billboard19;

Group6.children[1] = Transform18;

browser.currentScene.children[1] = Group6;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.rotation = new SFRotation(new float[0,0,1,-1.5708]);
let Group26 = browser.currentScene.createNode("Group");
let Group27 = browser.currentScene.createNode("Group");
Group27.USE = "ARROW";
Group26.children = new MFNode();

Group26.children[0] = Group27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[0.072,1.1,0]);
Transform28.rotation = new SFRotation(new float[0,0,1,1.5708]);
let Billboard29 = browser.currentScene.createNode("Billboard");
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.USE = "LABEL_APPEARANCE";
Shape30.appearance = Appearance31;

let Text32 = browser.currentScene.createNode("Text");
Text32.string = new MFString(new java.lang.String["X"]);
let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.USE = "LABEL_FONT";
Text32.fontStyle = FontStyle33;

Shape30.geometry = Text32;

Billboard29.children = new MFNode();

Billboard29.children[0] = Shape30;

Transform28.children = new MFNode();

Transform28.children[0] = Billboard29;

Group26.children[1] = Transform28;

Transform25.children = new MFNode();

Transform25.children[0] = Group26;

browser.currentScene.children[2] = Transform25;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.rotation = new SFRotation(new float[1,0,0,1.5708]);
let Group35 = browser.currentScene.createNode("Group");
let Group36 = browser.currentScene.createNode("Group");
Group36.USE = "ARROW";
Group35.children = new MFNode();

Group35.children[0] = Group36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new SFVec3f(new float[0,1.1,0.072]);
Transform37.rotation = new SFRotation(new float[1,0,0,-1.5708]);
let Billboard38 = browser.currentScene.createNode("Billboard");
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.USE = "LABEL_APPEARANCE";
Shape39.appearance = Appearance40;

let Text41 = browser.currentScene.createNode("Text");
Text41.string = new MFString(new java.lang.String["Z"]);
let FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.USE = "LABEL_FONT";
Text41.fontStyle = FontStyle42;

Shape39.geometry = Text41;

Billboard38.children = new MFNode();

Billboard38.children[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Billboard38;

Group35.children[1] = Transform37;

Transform34.children = new MFNode();

Transform34.children[0] = Group35;

browser.currentScene.children[3] = Transform34;

