let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "MaterialExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.DEF = "ViewpointNode";
Viewpoint3.description = "default";
Viewpoint3.position = new SFVec3f(new float[0,0,4]);
browser.currentScene.children[1] = Viewpoint3;

let NavigationInfo4 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo4.headlight = False;
NavigationInfo4.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[2] = NavigationInfo4;

let Background5 = browser.currentScene.createNode("Background");
Background5.DEF = "BackgroundNode";
browser.currentScene.children[3] = Background5;

let DirectionalLight6 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight6.DEF = "DirectionalLightNode";
DirectionalLight6.direction = new SFVec3f(new float[-0.707,0,-0.707]);
browser.currentScene.children[4] = DirectionalLight6;

let Shape7 = browser.currentScene.createNode("Shape");
Shape7.DEF = "ShapeNode";
let Sphere8 = browser.currentScene.createNode("Sphere");
Shape7.geometry = Sphere8;

let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.DEF = "MaterialNode";
Appearance9.material = Material10;

Shape7.appearance = Appearance9;

browser.currentScene.children[5] = Shape7;

let Switch11 = browser.currentScene.createNode("Switch");
Switch11.DEF = "AxesSwitch";
Switch11.whichChoice = 0;
let Group12 = browser.currentScene.createNode("Group");
let Group13 = browser.currentScene.createNode("Group");
Group13.DEF = "xAxis";
let Shape14 = browser.currentScene.createNode("Shape");
let IndexedLineSet15 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet15.coordIndex = new MFInt32(new int[0,1]);
let Coordinate16 = browser.currentScene.createNode("Coordinate");
Coordinate16.point = new MFVec3f(new float[0,0,0,1.25,0,0]);
IndexedLineSet15.coord = Coordinate16;

Shape14.geometry = IndexedLineSet15;

let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "AppearanceRed";
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[0,0,0]);
Material18.emissiveColor = new SFColor(new float[0.8,0,0]);
Appearance17.material = Material18;

Shape14.appearance = Appearance17;

Group13.children = new MFNode();

Group13.children[0] = Shape14;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[1.4,0,0]);
let Billboard20 = browser.currentScene.createNode("Billboard");
let Shape21 = browser.currentScene.createNode("Shape");
let Text22 = browser.currentScene.createNode("Text");
Text22.string = new MFString(new java.lang.String["x"]);
let FontStyle23 = browser.currentScene.createNode("FontStyle");
FontStyle23.DEF = "LabelStyle";
FontStyle23.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle23.size = 0.3;
Text22.fontStyle = FontStyle23;

Shape21.geometry = Text22;

let Appearance24 = browser.currentScene.createNode("Appearance");
Appearance24.USE = "AppearanceRed";
Shape21.appearance = Appearance24;

Billboard20.children = new MFNode();

Billboard20.children[0] = Shape21;

Transform19.children = new MFNode();

Transform19.children[0] = Billboard20;

Group13.children[1] = Transform19;

Group12.children = new MFNode();

Group12.children[0] = Group13;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "yAxis";
let Shape26 = browser.currentScene.createNode("Shape");
let IndexedLineSet27 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet27.coordIndex = new MFInt32(new int[0,1]);
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[0,0,0,0,1.25,0]);
IndexedLineSet27.coord = Coordinate28;

Shape26.geometry = IndexedLineSet27;

let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.DEF = "AppearanceGreen";
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[0,0,0]);
Material30.emissiveColor = new SFColor(new float[0,0.8,0]);
Appearance29.material = Material30;

Shape26.appearance = Appearance29;

Group25.children = new MFNode();

Group25.children[0] = Shape26;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[0,1.4,0]);
let Billboard32 = browser.currentScene.createNode("Billboard");
Billboard32.axisOfRotation = new SFVec3f(new float[0,0,0]);
let Shape33 = browser.currentScene.createNode("Shape");
let Text34 = browser.currentScene.createNode("Text");
Text34.string = new MFString(new java.lang.String["y"]);
let FontStyle35 = browser.currentScene.createNode("FontStyle");
FontStyle35.USE = "LabelStyle";
Text34.fontStyle = FontStyle35;

Shape33.geometry = Text34;

let Appearance36 = browser.currentScene.createNode("Appearance");
Appearance36.USE = "AppearanceGreen";
Shape33.appearance = Appearance36;

Billboard32.children = new MFNode();

Billboard32.children[0] = Shape33;

Transform31.children = new MFNode();

Transform31.children[0] = Billboard32;

Group25.children[1] = Transform31;

Group12.children[1] = Group25;

let Group37 = browser.currentScene.createNode("Group");
Group37.DEF = "zAxis";
let Shape38 = browser.currentScene.createNode("Shape");
let IndexedLineSet39 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet39.coordIndex = new MFInt32(new int[0,1]);
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[0,0,0,0,0,1.25]);
IndexedLineSet39.coord = Coordinate40;

Shape38.geometry = IndexedLineSet39;

let Appearance41 = browser.currentScene.createNode("Appearance");
Appearance41.DEF = "AppearanceBlue";
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new SFColor(new float[0,0,0]);
Material42.emissiveColor = new SFColor(new float[0,0,0.8]);
Appearance41.material = Material42;

Shape38.appearance = Appearance41;

Group37.children = new MFNode();

Group37.children[0] = Shape38;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[0,0,1.4]);
let Billboard44 = browser.currentScene.createNode("Billboard");
Billboard44.axisOfRotation = new SFVec3f(new float[0,0,0]);
let Shape45 = browser.currentScene.createNode("Shape");
let Text46 = browser.currentScene.createNode("Text");
Text46.string = new MFString(new java.lang.String["z"]);
let FontStyle47 = browser.currentScene.createNode("FontStyle");
FontStyle47.USE = "LabelStyle";
Text46.fontStyle = FontStyle47;

Shape45.geometry = Text46;

let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.USE = "AppearanceBlue";
Shape45.appearance = Appearance48;

Billboard44.children = new MFNode();

Billboard44.children[0] = Shape45;

Transform43.children = new MFNode();

Transform43.children[0] = Billboard44;

Group37.children[1] = Transform43;

Group12.children[2] = Group37;

Switch11.children = new MFNode();

Switch11.children[0] = Group12;

browser.currentScene.children[6] = Switch11;

let Switch49 = browser.currentScene.createNode("Switch");
Switch49.DEF = "LightDirectionVectorSwitch";
Switch49.whichChoice = 0;
let Transform50 = browser.currentScene.createNode("Transform");
Transform50.scale = new SFVec3f(new float[1.25,1.25,1.25]);
let Shape51 = browser.currentScene.createNode("Shape");
let IndexedLineSet52 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet52.coordIndex = new MFInt32(new int[0,1]);
//negate direction-vector values so that line approaches from light direction towards origin
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.DEF = "LightDirectionCoordinateNode";
Coordinate53.point = new MFVec3f(new float[0.707,0,0.707,0,0,0]);
IndexedLineSet52.coord = Coordinate53;

Shape51.geometry = IndexedLineSet52;

let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.DEF = "LightDirectionLineMaterial";
Material55.diffuseColor = new SFColor(new float[0,0,0]);
Material55.emissiveColor = new SFColor(new float[1,1,1]);
Appearance54.material = Material55;

Shape51.appearance = Appearance54;

Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Switch49.children = new MFNode();

Switch49.children[0] = Transform50;

browser.currentScene.children[7] = Switch49;

