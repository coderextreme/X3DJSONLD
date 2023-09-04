let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
head = head1;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.headlight = False;
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo3;

let Group4 = browser.currentScene.createNode("Group");
let Group5 = browser.currentScene.createNode("Group");
Group5.DEF = "ARROW";
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
Appearance7.DEF = "ARROW_APPEARANCE";
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material8.emissiveColor = new SFColor(new float[0.3,0.3,0.33]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let Cylinder9 = browser.currentScene.createNode("Cylinder");
Cylinder9.top = False;
Cylinder9.bottom = False;
Cylinder9.radius = 0.025;
Shape6.geometry = Cylinder9;

Group5.children = new MFNode();

Group5.children[0] = Shape6;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.translation = new SFVec3f(new float[0,1,0]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "ARROW_POINTER";
let Appearance12 = browser.currentScene.createNode("Appearance");
Appearance12.USE = "ARROW_APPEARANCE";
Shape11.appearance = Appearance12;

let Cone13 = browser.currentScene.createNode("Cone");
Cone13.height = 0.1;
Cone13.bottomRadius = 0.05;
Shape11.geometry = Cone13;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Group5.children[1] = Transform10;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = new SFVec3f(new float[0,-1,0]);
Transform14.rotation = new SFRotation(new float[1,0,0,3.1416]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.USE = "ARROW_POINTER";
Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Group5.children[2] = Transform14;

Group4.children = new MFNode();

Group4.children[0] = Group5;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,1.08,0]);
let Billboard17 = browser.currentScene.createNode("Billboard");
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
Appearance19.DEF = "LABEL_APPEARANCE";
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,1,0.3]);
Material20.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["Y"]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.DEF = "LABEL_FONT";
FontStyle22.family = new MFString(new java.lang.String["SANS"]);
FontStyle22.size = 0.2;
FontStyle22.justify = new MFString(new java.lang.String["MIDDLE"]);
Text21.fontStyle = FontStyle22;

Shape18.geometry = Text21;

Billboard17.children = new MFNode();

Billboard17.children[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Billboard17;

Group4.children[1] = Transform16;

browser.currentScene.children[1] = Group4;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.rotation = new SFRotation(new float[0,0,1,-1.5708]);
let Group24 = browser.currentScene.createNode("Group");
let Group25 = browser.currentScene.createNode("Group");
Group25.USE = "ARROW";
Group24.children = new MFNode();

Group24.children[0] = Group25;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0.072,1.1,0]);
Transform26.rotation = new SFRotation(new float[0,0,1,1.5708]);
let Billboard27 = browser.currentScene.createNode("Billboard");
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.USE = "LABEL_APPEARANCE";
Shape28.appearance = Appearance29;

let Text30 = browser.currentScene.createNode("Text");
Text30.string = new MFString(new java.lang.String["X"]);
let FontStyle31 = browser.currentScene.createNode("FontStyle");
FontStyle31.USE = "LABEL_FONT";
Text30.fontStyle = FontStyle31;

Shape28.geometry = Text30;

Billboard27.children = new MFNode();

Billboard27.children[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Billboard27;

Group24.children[1] = Transform26;

Transform23.children = new MFNode();

Transform23.children[0] = Group24;

browser.currentScene.children[2] = Transform23;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.rotation = new SFRotation(new float[1,0,0,1.5708]);
let Group33 = browser.currentScene.createNode("Group");
let Group34 = browser.currentScene.createNode("Group");
Group34.USE = "ARROW";
Group33.children = new MFNode();

Group33.children[0] = Group34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,1.1,0.072]);
Transform35.rotation = new SFRotation(new float[1,0,0,-1.5708]);
let Billboard36 = browser.currentScene.createNode("Billboard");
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
Appearance38.USE = "LABEL_APPEARANCE";
Shape37.appearance = Appearance38;

let Text39 = browser.currentScene.createNode("Text");
Text39.string = new MFString(new java.lang.String["Z"]);
let FontStyle40 = browser.currentScene.createNode("FontStyle");
FontStyle40.USE = "LABEL_FONT";
Text39.fontStyle = FontStyle40;

Shape37.geometry = Text39;

Billboard36.children = new MFNode();

Billboard36.children[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Billboard36;

Group33.children[1] = Transform35;

Transform32.children = new MFNode();

Transform32.children[0] = Group33;

browser.currentScene.children[3] = Transform32;

