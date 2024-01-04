let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "CoordinateAxes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo15;

let Collision16 = browser.currentScene.createNode("Collision");
Collision16.DEF = "DoNotCollideWithVisualizationWidget";
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
let Group17 = browser.currentScene.createNode("Group");
//Vertical Y arrow and label
let Group18 = browser.currentScene.createNode("Group");
Group18.DEF = "ArrowGreen";
let Shape19 = browser.currentScene.createNode("Shape");
let Cylinder20 = browser.currentScene.createNode("Cylinder");
Cylinder20.DEF = "ArrowCylinder";
Cylinder20.radius = 0.025;
Cylinder20.top = False;
Shape19.geometry = Cylinder20;

let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "Green";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.1,0.6,0.1]);
Material22.emissiveColor = new SFColor(new float[0.05,0.2,0.05]);
Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Group18.children = new MFNode();

Group18.children[0] = Shape19;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,1,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Cone25 = browser.currentScene.createNode("Cone");
Cone25.DEF = "ArrowCone";
Cone25.bottomRadius = 0.05;
Cone25.height = 0.1;
Shape24.geometry = Cone25;

let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.USE = "Green";
Shape24.appearance = Appearance26;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Group18.children[1] = Transform23;

Group17.children = new MFNode();

Group17.children[0] = Group18;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new SFVec3f(new float[0,1.08,0]);
let Billboard28 = browser.currentScene.createNode("Billboard");
let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
Appearance30.DEF = "LABEL_APPEARANCE";
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,1,0.3]);
Material31.emissiveColor = new SFColor(new float[0.33,0.33,0.1]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

let Text32 = browser.currentScene.createNode("Text");
Text32.string = new MFString(new java.lang.String["Y"]);
let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.DEF = "LABEL_FONT";
FontStyle33.family = new MFString(new java.lang.String["SANS"]);
FontStyle33.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle33.size = 0.2;
Text32.fontStyle = FontStyle33;

Shape29.geometry = Text32;

Billboard28.children = new MFNode();

Billboard28.children[0] = Shape29;

Transform27.children = new MFNode();

Transform27.children[0] = Billboard28;

Group17.children[1] = Transform27;

Collision16.proxy = Group17;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.rotation = new SFRotation(new float[0,0,1,-1.57079]);
//Horizontal X arrow and label
let Group35 = browser.currentScene.createNode("Group");
let Group36 = browser.currentScene.createNode("Group");
Group36.DEF = "ArrowRed";
let Shape37 = browser.currentScene.createNode("Shape");
let Cylinder38 = browser.currentScene.createNode("Cylinder");
Cylinder38.USE = "ArrowCylinder";
Shape37.geometry = Cylinder38;

let Appearance39 = browser.currentScene.createNode("Appearance");
Appearance39.DEF = "Red";
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[0.7,0.1,0.1]);
Material40.emissiveColor = new SFColor(new float[0.33,0,0]);
Appearance39.material = Material40;

Shape37.appearance = Appearance39;

Group36.children = new MFNode();

Group36.children[0] = Shape37;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,1,0]);
let Shape42 = browser.currentScene.createNode("Shape");
let Cone43 = browser.currentScene.createNode("Cone");
Cone43.USE = "ArrowCone";
Shape42.geometry = Cone43;

let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.USE = "Red";
Shape42.appearance = Appearance44;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Group36.children[1] = Transform41;

Group35.children = new MFNode();

Group35.children[0] = Group36;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.rotation = new SFRotation(new float[0,0,1,1.57079]);
Transform45.translation = new SFVec3f(new float[0.072,1.1,0]);
//note label rotated back to original coordinate frame
let Billboard46 = browser.currentScene.createNode("Billboard");
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "LABEL_APPEARANCE";
Shape47.appearance = Appearance48;

let Text49 = browser.currentScene.createNode("Text");
Text49.string = new MFString(new java.lang.String["X"]);
let FontStyle50 = browser.currentScene.createNode("FontStyle");
FontStyle50.USE = "LABEL_FONT";
Text49.fontStyle = FontStyle50;

Shape47.geometry = Text49;

Billboard46.children = new MFNode();

Billboard46.children[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Billboard46;

Group35.children[1] = Transform45;

Transform34.children = new MFNode();

Transform34.children[0] = Group35;

Collision16.proxy = Transform34;

let Transform51 = browser.currentScene.createNode("Transform");
Transform51.rotation = new SFRotation(new float[1,0,0,1.57079]);
//Perpendicular Z arrow and label, note right-hand rule
let Group52 = browser.currentScene.createNode("Group");
let Group53 = browser.currentScene.createNode("Group");
Group53.DEF = "ArrowBlue";
let Shape54 = browser.currentScene.createNode("Shape");
let Cylinder55 = browser.currentScene.createNode("Cylinder");
Cylinder55.USE = "ArrowCylinder";
Shape54.geometry = Cylinder55;

let Appearance56 = browser.currentScene.createNode("Appearance");
Appearance56.DEF = "Blue";
let Material57 = browser.currentScene.createNode("Material");
Material57.diffuseColor = new SFColor(new float[0.3,0.3,1]);
Material57.emissiveColor = new SFColor(new float[0.1,0.1,0.33]);
Appearance56.material = Material57;

Shape54.appearance = Appearance56;

Group53.children = new MFNode();

Group53.children[0] = Shape54;

let Transform58 = browser.currentScene.createNode("Transform");
Transform58.translation = new SFVec3f(new float[0,1,0]);
let Shape59 = browser.currentScene.createNode("Shape");
let Cone60 = browser.currentScene.createNode("Cone");
Cone60.USE = "ArrowCone";
Shape59.geometry = Cone60;

let Appearance61 = browser.currentScene.createNode("Appearance");
Appearance61.USE = "Blue";
Shape59.appearance = Appearance61;

Transform58.child = new undefined();

Transform58.child[0] = Shape59;

Group53.children[1] = Transform58;

Group52.children = new MFNode();

Group52.children[0] = Group53;

let Transform62 = browser.currentScene.createNode("Transform");
Transform62.rotation = new SFRotation(new float[1,0,0,-1.57079]);
Transform62.translation = new SFVec3f(new float[0,1.1,0.072]);
//note label rotated back to original coordinate frame
let Billboard63 = browser.currentScene.createNode("Billboard");
let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
Appearance65.USE = "LABEL_APPEARANCE";
Shape64.appearance = Appearance65;

let Text66 = browser.currentScene.createNode("Text");
Text66.string = new MFString(new java.lang.String["Z"]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.USE = "LABEL_FONT";
Text66.fontStyle = FontStyle67;

Shape64.geometry = Text66;

Billboard63.children = new MFNode();

Billboard63.children[0] = Shape64;

Transform62.children = new MFNode();

Transform62.children[0] = Billboard63;

Group52.children[1] = Transform62;

Transform51.children = new MFNode();

Transform51.children[0] = Group52;

Collision16.proxy = Transform51;

browser.currentScene.children[1] = Collision16;

