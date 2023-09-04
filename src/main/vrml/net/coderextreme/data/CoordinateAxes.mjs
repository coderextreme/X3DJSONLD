let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "CoordinateAxes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Don Brutzman, Byounghyun Yoo";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "14 July 2000";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "modified";
meta5.content = "20 October 2019";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "CoordinateAxes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let Collision15 = browser.currentScene.createNode("Collision");
Collision15.DEF = "DoNotCollideWithVisualizationWidget";
let Group16 = browser.currentScene.createNode("Group");
let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "ArrowGreen";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
Appearance19.DEF = "Green";
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.1,0.6,0.1]);
Material20.emissiveColor = new SFColor(new float[0.05,0.2,0.05]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Cylinder21 = browser.currentScene.createNode("Cylinder");
Cylinder21.DEF = "ArrowCylinder";
Cylinder21.top = False;
Cylinder21.radius = 0.025;
Shape18.geometry = Cylinder21;

Group17.children = new MFNode();

Group17.children[0] = Shape18;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new SFVec3f(new float[0,1,0]);
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
Appearance24.USE = "Green";
Shape23.appearance = Appearance24;

let Cone25 = browser.currentScene.createNode("Cone");
Cone25.DEF = "ArrowCone";
Cone25.height = 0.1;
Cone25.bottomRadius = 0.05;
Shape23.geometry = Cone25;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Group17.children[1] = Transform22;

Group16.children = new MFNode();

Group16.children[0] = Group17;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,1.08,0]);
let Billboard27 = browser.currentScene.createNode("Billboard");
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.DEF = "LABEL_APPEARANCE";
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,1,0.3]);
Material30.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Text31 = browser.currentScene.createNode("Text");
Text31.string = new MFString(new java.lang.String["Y"]);
let FontStyle32 = browser.currentScene.createNode("FontStyle");
FontStyle32.DEF = "LABEL_FONT";
FontStyle32.family = new MFString(new java.lang.String["SANS"]);
FontStyle32.size = 0.2;
FontStyle32.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text31.fontStyle = FontStyle32;

Shape28.geometry = Text31;

Billboard27.children = new MFNode();

Billboard27.children[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Billboard27;

Group16.children[1] = Transform26;

Collision15.proxy = Group16;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.rotation = new SFRotation(new float[0,0,1,-1.57079]);
let Group34 = browser.currentScene.createNode("Group");
let Group35 = browser.currentScene.createNode("Group");
Group35.DEF = "ArrowRed";
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
Appearance37.DEF = "Red";
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.7,0.1,0.1]);
Material38.emissiveColor = new SFColor(new float[0.33,0,0]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let Cylinder39 = browser.currentScene.createNode("Cylinder");
Cylinder39.USE = "ArrowCylinder";
Shape36.geometry = Cylinder39;

Group35.children = new MFNode();

Group35.children[0] = Shape36;

let Transform40 = browser.currentScene.createNode("Transform");
Transform40.translation = new SFVec3f(new float[0,1,0]);
let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
Appearance42.USE = "Red";
Shape41.appearance = Appearance42;

let Cone43 = browser.currentScene.createNode("Cone");
Cone43.USE = "ArrowCone";
Shape41.geometry = Cone43;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

Group35.children[1] = Transform40;

Group34.children = new MFNode();

Group34.children[0] = Group35;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new SFVec3f(new float[0.072,1.1,0]);
Transform44.rotation = new SFRotation(new float[0,0,1,1.57079]);
let Billboard45 = browser.currentScene.createNode("Billboard");
let Shape46 = browser.currentScene.createNode("Shape");
let Appearance47 = browser.currentScene.createNode("Appearance");
Appearance47.USE = "LABEL_APPEARANCE";
Shape46.appearance = Appearance47;

let Text48 = browser.currentScene.createNode("Text");
Text48.string = new MFString(new java.lang.String["X"]);
let FontStyle49 = browser.currentScene.createNode("FontStyle");
FontStyle49.USE = "LABEL_FONT";
Text48.fontStyle = FontStyle49;

Shape46.geometry = Text48;

Billboard45.children = new MFNode();

Billboard45.children[0] = Shape46;

Transform44.children = new MFNode();

Transform44.children[0] = Billboard45;

Group34.children[1] = Transform44;

Transform33.children = new MFNode();

Transform33.children[0] = Group34;

Collision15.proxy = Transform33;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.rotation = new SFRotation(new float[1,0,0,1.57079]);
let Group51 = browser.currentScene.createNode("Group");
let Group52 = browser.currentScene.createNode("Group");
Group52.DEF = "ArrowBlue";
let Shape53 = browser.currentScene.createNode("Shape");
let Appearance54 = browser.currentScene.createNode("Appearance");
Appearance54.DEF = "Blue";
let Material55 = browser.currentScene.createNode("Material");
Material55.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material55.emissiveColor = new SFColor(new float[0.1,0.1,0.33]);
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

let Cylinder56 = browser.currentScene.createNode("Cylinder");
Cylinder56.USE = "ArrowCylinder";
Shape53.geometry = Cylinder56;

Group52.children = new MFNode();

Group52.children[0] = Shape53;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.translation = new SFVec3f(new float[0,1,0]);
let Shape58 = browser.currentScene.createNode("Shape");
let Appearance59 = browser.currentScene.createNode("Appearance");
Appearance59.USE = "Blue";
Shape58.appearance = Appearance59;

let Cone60 = browser.currentScene.createNode("Cone");
Cone60.USE = "ArrowCone";
Shape58.geometry = Cone60;

Transform57.child = new undefined();

Transform57.child[0] = Shape58;

Group52.children[1] = Transform57;

Group51.children = new MFNode();

Group51.children[0] = Group52;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.translation = new SFVec3f(new float[0,1.1,0.072]);
Transform61.rotation = new SFRotation(new float[1,0,0,-1.57079]);
let Billboard62 = browser.currentScene.createNode("Billboard");
let Shape63 = browser.currentScene.createNode("Shape");
let Appearance64 = browser.currentScene.createNode("Appearance");
Appearance64.USE = "LABEL_APPEARANCE";
Shape63.appearance = Appearance64;

let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["Z"]);
let FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.USE = "LABEL_FONT";
Text65.fontStyle = FontStyle66;

Shape63.geometry = Text65;

Billboard62.children = new MFNode();

Billboard62.children[0] = Shape63;

Transform61.children = new MFNode();

Transform61.children[0] = Billboard62;

Group51.children[1] = Transform61;

Transform50.children = new MFNode();

Transform50.children[0] = Group51;

Collision15.proxy = Transform50;

browser.currentScene.children[1] = Collision15;

