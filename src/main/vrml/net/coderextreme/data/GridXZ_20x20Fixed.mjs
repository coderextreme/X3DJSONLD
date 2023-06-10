let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "GridXZ_20x20Fixed.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "MV4204 class";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "3 September 2000";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "modified";
meta5.content = "30 March 2016";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "reference";
meta6.content = "GridXY_20x20Fixed.x3d";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "GridYZ_20x20Fixed.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "description";
meta8.content = "Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "identifier";
meta9.content = "https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "license";
meta11.content = "../../license.html";
head1.meta[9] = meta11;

head = head1;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.description = "XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)";
Viewpoint13.orientation = new SFRotation(new float[1,0,0,-0.4]);
Viewpoint13.position = new SFVec3f(new float[0,10,25]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint13;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "GridLocation";
let Group15 = browser.currentScene.createNode("Group");
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "LinesAlignedAlongZ";
let IndexedLineSet17 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet17.colorIndex = new MFInt32(new int[1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]);
IndexedLineSet17.colorPerVertex = False;
IndexedLineSet17.coordIndex = new MFInt32(new int[1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]);
let Coordinate18 = browser.currentScene.createNode("Coordinate");
Coordinate18.DEF = "EndPoints";
Coordinate18.point = new MFVec3f(new float[0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10]);
IndexedLineSet17.coord = Coordinate18;

let Color19 = browser.currentScene.createNode("Color");
Color19.color = new MFColor(new float[0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05]);
IndexedLineSet17.color = Color19;

Shape16.geometry = IndexedLineSet17;

Group15.children = new MFNode();

Group15.children[0] = Shape16;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "LinesAlignedAlongX";
Transform20.rotation = new SFRotation(new float[0,1,0,1.57079]);
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.USE = "LinesAlignedAlongZ";
Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Group15.children[1] = Transform20;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[0,-0.5,0]);
let Billboard23 = browser.currentScene.createNode("Billboard");
let Shape24 = browser.currentScene.createNode("Shape");
let Text25 = browser.currentScene.createNode("Text");
Text25.DEF = "CenterTextNode";
Text25.string = new MFString(new java.lang.String["origin"]);
let FontStyle26 = browser.currentScene.createNode("FontStyle");
FontStyle26.DEF = "FS4";
FontStyle26.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle26.size = 0.4;
Text25.fontStyle = FontStyle26;

Shape24.geometry = Text25;

let Appearance27 = browser.currentScene.createNode("Appearance");
Appearance27.DEF = "DefaultAppearance";
let Material28 = browser.currentScene.createNode("Material");
Appearance27.material = Material28;

Shape24.appearance = Appearance27;

Billboard23.children = new MFNode();

Billboard23.children[0] = Shape24;

Transform22.children = new MFNode();

Transform22.children[0] = Billboard23;

Group15.children[2] = Transform22;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[10,-0.5,10]);
let Billboard30 = browser.currentScene.createNode("Billboard");
let Shape31 = browser.currentScene.createNode("Shape");
let Text32 = browser.currentScene.createNode("Text");
Text32.string = new MFString(new java.lang.String["10 0 10"]);
let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.USE = "FS4";
Text32.fontStyle = FontStyle33;

Shape31.geometry = Text32;

let Appearance34 = browser.currentScene.createNode("Appearance");
Appearance34.USE = "DefaultAppearance";
Shape31.appearance = Appearance34;

Billboard30.children = new MFNode();

Billboard30.children[0] = Shape31;

Transform29.children = new MFNode();

Transform29.children[0] = Billboard30;

Group15.children[3] = Transform29;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[10,-0.5,-10]);
let Billboard36 = browser.currentScene.createNode("Billboard");
let Shape37 = browser.currentScene.createNode("Shape");
let Text38 = browser.currentScene.createNode("Text");
Text38.string = new MFString(new java.lang.String["10 0 -10"]);
let FontStyle39 = browser.currentScene.createNode("FontStyle");
FontStyle39.USE = "FS4";
Text38.fontStyle = FontStyle39;

Shape37.geometry = Text38;

let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.USE = "DefaultAppearance";
Shape37.appearance = Appearance40;

Billboard36.children = new MFNode();

Billboard36.children[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Billboard36;

Group15.children[4] = Transform35;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[-10,-0.5,10]);
let Billboard42 = browser.currentScene.createNode("Billboard");
let Shape43 = browser.currentScene.createNode("Shape");
let Text44 = browser.currentScene.createNode("Text");
Text44.string = new MFString(new java.lang.String["-10 0 10"]);
let FontStyle45 = browser.currentScene.createNode("FontStyle");
FontStyle45.USE = "FS4";
Text44.fontStyle = FontStyle45;

Shape43.geometry = Text44;

let Appearance46 = browser.currentScene.createNode("Appearance");
Appearance46.USE = "DefaultAppearance";
Shape43.appearance = Appearance46;

Billboard42.children = new MFNode();

Billboard42.children[0] = Shape43;

Transform41.children = new MFNode();

Transform41.children[0] = Billboard42;

Group15.children[5] = Transform41;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[-10,-0.5,-10]);
let Billboard48 = browser.currentScene.createNode("Billboard");
let Shape49 = browser.currentScene.createNode("Shape");
let Text50 = browser.currentScene.createNode("Text");
Text50.string = new MFString(new java.lang.String["-10 0 -10"]);
let FontStyle51 = browser.currentScene.createNode("FontStyle");
FontStyle51.USE = "FS4";
Text50.fontStyle = FontStyle51;

Shape49.geometry = Text50;

let Appearance52 = browser.currentScene.createNode("Appearance");
Appearance52.USE = "DefaultAppearance";
Shape49.appearance = Appearance52;

Billboard48.children = new MFNode();

Billboard48.children[0] = Shape49;

Transform47.children = new MFNode();

Transform47.children[0] = Billboard48;

Group15.children[6] = Transform47;

Transform14.children = new MFNode();

Transform14.children[0] = Group15;

browser.currentScene.children[1] = Transform14;

