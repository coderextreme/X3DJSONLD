let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "BeckyRoadOverpass.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Front view, 4 inches above ground";
Viewpoint3.position = new SFVec3f(new float[0,4,20]);
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "Side view, 6 inches above ground";
Viewpoint4.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint4.position = new SFVec3f(new float[25,6,0]);
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "Top-down view, 20 inches above";
Viewpoint5.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint5.position = new SFVec3f(new float[0,28,0]);
browser.currentScene.children[3] = Viewpoint5;

let Background6 = browser.currentScene.createNode("Background");
Background6.groundAngle = new MFFloat(new float[1.309,1.570796]);
Background6.groundColor = new MFColor(new float[0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6]);
Background6.skyAngle = new MFFloat(new float[1.309,1.571]);
Background6.skyColor = new MFColor(new float[0,0.2,0.7,0,0.5,1,1,1,1]);
browser.currentScene.children[4] = Background6;

//Upper road surface is elevated y=8 inches in the air
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.translation = new SFVec3f(new float[0,8,0]);
let Group8 = browser.currentScene.createNode("Group");
Group8.DEF = "Road";
let Shape9 = browser.currentScene.createNode("Shape");
//Road model is x=20 inches long by z=7 inches wide, with posterboard y=0.25 inches thick
//Road surface color is grey
let Box10 = browser.currentScene.createNode("Box");
Box10.size = new SFVec3f(new float[20,0.2,7]);
Shape9.geometry = Box10;

let Appearance11 = browser.currentScene.createNode("Appearance");
Appearance11.DEF = "GreyAppearance";
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[0.4,0.4,0.4]);
Appearance11.material = Material12;

Shape9.appearance = Appearance11;

Group8.children = new MFNode();

Group8.children[0] = Shape9;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,0.2,0.3]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.DEF = "WhiteLine";
let Box15 = browser.currentScene.createNode("Box");
Box15.size = new SFVec3f(new float[20,0.01,0.4]);
Shape14.geometry = Box15;

let Appearance16 = browser.currentScene.createNode("Appearance");
Appearance16.DEF = "WhiteAppearance";
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[1,1,1]);
Material17.emissiveColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance16.material = Material17;

Shape14.appearance = Appearance16;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Group8.children[1] = Transform13;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,0.2,-0.3]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.USE = "WhiteLine";
Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Group8.children[2] = Transform18;

Transform7.children = new MFNode();

Transform7.children[0] = Group8;

browser.currentScene.children[5] = Transform7;

//Lower road is on the ground at y=0 inches, rotated 90 degrees around y axis
let Transform20 = browser.currentScene.createNode("Transform");
Transform20.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform20.translation = new SFVec3f(new float[0,0.1,0]);
let Group21 = browser.currentScene.createNode("Group");
Group21.USE = "Road";
Transform20.children = new MFNode();

Transform20.children[0] = Group21;

browser.currentScene.children[6] = Transform20;

//Vertical center of y=8 inch tall pillar is y=4 inches in the air
//Center of each column matches top-down diagram
let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "ColumnA";
Transform22.translation = new SFVec3f(new float[-6,4,-2]);
let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "Column";
let Cylinder24 = browser.currentScene.createNode("Cylinder");
Cylinder24.height = 8;
Shape23.geometry = Cylinder24;

let Appearance25 = browser.currentScene.createNode("Appearance");
Appearance25.USE = "GreyAppearance";
Shape23.appearance = Appearance25;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

browser.currentScene.children[7] = Transform22;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "ColumnB";
Transform26.translation = new SFVec3f(new float[6,4,-2]);
let Shape27 = browser.currentScene.createNode("Shape");
Shape27.USE = "Column";
Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

browser.currentScene.children[8] = Transform26;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "ColumnC";
Transform28.translation = new SFVec3f(new float[-6,4,2]);
let Shape29 = browser.currentScene.createNode("Shape");
Shape29.USE = "Column";
Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

browser.currentScene.children[9] = Transform28;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "ColumnD";
Transform30.translation = new SFVec3f(new float[6,4,2]);
let Shape31 = browser.currentScene.createNode("Shape");
Shape31.USE = "Column";
Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

browser.currentScene.children[10] = Transform30;

