let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)";
Viewpoint2.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint2.position = new SFVec3f(new float[0,10,25]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Transform3 = browser.currentScene.createNode("Transform");
Transform3.DEF = "GridLocation";
let Group4 = browser.currentScene.createNode("Group");
let Shape5 = browser.currentScene.createNode("Shape");
Shape5.DEF = "LinesAlignedAlongZ";
let IndexedLineSet6 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet6.colorIndex = new MFInt32(new int[1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]);
IndexedLineSet6.colorPerVertex = False;
IndexedLineSet6.coordIndex = new MFInt32(new int[1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]);
let Coordinate7 = browser.currentScene.createNode("Coordinate");
Coordinate7.DEF = "EndPoints";
Coordinate7.point = new MFVec3f(new float[0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10]);
IndexedLineSet6.coord = Coordinate7;

let Color8 = browser.currentScene.createNode("Color");
Color8.color = new MFColor(new float[0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05]);
IndexedLineSet6.color = Color8;

Shape5.geometry = IndexedLineSet6;

Group4.children = new MFNode();

Group4.children[0] = Shape5;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.DEF = "LinesAlignedAlongX";
Transform9.rotation = new SFRotation(new float[0,1,0,1.57079]);
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.USE = "LinesAlignedAlongZ";
Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

Group4.children[1] = Transform9;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = new SFVec3f(new float[0,-0.5,0]);
let Billboard12 = browser.currentScene.createNode("Billboard");
let Shape13 = browser.currentScene.createNode("Shape");
let Text14 = browser.currentScene.createNode("Text");
Text14.DEF = "CenterTextNode";
Text14.string = new MFString(new java.lang.String["origin"]);
let FontStyle15 = browser.currentScene.createNode("FontStyle");
FontStyle15.DEF = "FS4";
FontStyle15.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle15.size = 0.4;
Text14.fontStyle = FontStyle15;

Shape13.geometry = Text14;

let Appearance16 = browser.currentScene.createNode("Appearance");
Appearance16.DEF = "DefaultAppearance";
let Material17 = browser.currentScene.createNode("Material");
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Billboard12.children = new MFNode();

Billboard12.children[0] = Shape13;

Transform11.children = new MFNode();

Transform11.children[0] = Billboard12;

Group4.children[2] = Transform11;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[10,-0.5,10]);
let Billboard19 = browser.currentScene.createNode("Billboard");
let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["10 0 10"]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.USE = "FS4";
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
Appearance23.USE = "DefaultAppearance";
Shape20.appearance = Appearance23;

Billboard19.children = new MFNode();

Billboard19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Billboard19;

Group4.children[3] = Transform18;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[10,-0.5,-10]);
let Billboard25 = browser.currentScene.createNode("Billboard");
let Shape26 = browser.currentScene.createNode("Shape");
let Text27 = browser.currentScene.createNode("Text");
Text27.string = new MFString(new java.lang.String["10 0 -10"]);
let FontStyle28 = browser.currentScene.createNode("FontStyle");
FontStyle28.USE = "FS4";
Text27.fontStyle = FontStyle28;

Shape26.geometry = Text27;

let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.USE = "DefaultAppearance";
Shape26.appearance = Appearance29;

Billboard25.children = new MFNode();

Billboard25.children[0] = Shape26;

Transform24.children = new MFNode();

Transform24.children[0] = Billboard25;

Group4.children[4] = Transform24;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.translation = new SFVec3f(new float[-10,-0.5,10]);
let Billboard31 = browser.currentScene.createNode("Billboard");
let Shape32 = browser.currentScene.createNode("Shape");
let Text33 = browser.currentScene.createNode("Text");
Text33.string = new MFString(new java.lang.String["-10 0 10"]);
let FontStyle34 = browser.currentScene.createNode("FontStyle");
FontStyle34.USE = "FS4";
Text33.fontStyle = FontStyle34;

Shape32.geometry = Text33;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.USE = "DefaultAppearance";
Shape32.appearance = Appearance35;

Billboard31.children = new MFNode();

Billboard31.children[0] = Shape32;

Transform30.children = new MFNode();

Transform30.children[0] = Billboard31;

Group4.children[5] = Transform30;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new SFVec3f(new float[-10,-0.5,-10]);
let Billboard37 = browser.currentScene.createNode("Billboard");
let Shape38 = browser.currentScene.createNode("Shape");
let Text39 = browser.currentScene.createNode("Text");
Text39.string = new MFString(new java.lang.String["-10 0 -10"]);
let FontStyle40 = browser.currentScene.createNode("FontStyle");
FontStyle40.USE = "FS4";
Text39.fontStyle = FontStyle40;

Shape38.geometry = Text39;

let Appearance41 = browser.currentScene.createNode("Appearance");
Appearance41.USE = "DefaultAppearance";
Shape38.appearance = Appearance41;

Billboard37.children = new MFNode();

Billboard37.children[0] = Shape38;

Transform36.children = new MFNode();

Transform36.children[0] = Billboard37;

Group4.children[6] = Transform36;

Transform3.children = new MFNode();

Transform3.children[0] = Group4;

browser.currentScene.children[1] = Transform3;

