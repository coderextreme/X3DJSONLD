let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "CADInterchange";
X3D0.version = "3.2";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CadDesignPatternExampleBushing.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.9607843,1,0.9607843]);
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "Hello CAD bushing";
Viewpoint4.orientation = new SFRotation(new float[1,0,0,-0.321751]);
Viewpoint4.position = new SFVec3f(new float[0,5,15]);
browser.currentScene.children[2] = Viewpoint4;

let CADAssembly5 = browser.currentScene.createNode("CADAssembly");
CADAssembly5.name = "DesignPatternAssembly";
let CADPart6 = browser.currentScene.createNode("CADPart");
CADPart6.name = "CADPartSides";
//the rotation and translation attributes serve to position the bushing within the assembly
let CADFace7 = browser.currentScene.createNode("CADFace");
CADFace7.name = "outerSurface";
let Shape8 = browser.currentScene.createNode("Shape");
//note solid='true' and so one-sided external rendering only
let Cylinder9 = browser.currentScene.createNode("Cylinder");
Cylinder9.bottom = False;
Cylinder9.height = 3;
Cylinder9.radius = 2;
Cylinder9.top = False;
Shape8.geometry = Cylinder9;

let Appearance10 = browser.currentScene.createNode("Appearance");
Appearance10.DEF = "AppearanceGrey";
let Material11 = browser.currentScene.createNode("Material");
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

CADFace7.shape = Shape8;

CADPart6.children = new MFNode();

CADPart6.children[0] = CADFace7;

let CADFace12 = browser.currentScene.createNode("CADFace");
CADFace12.name = "innerSurface";
let Shape13 = browser.currentScene.createNode("Shape");
//note solid='false' and so two-sided internal + external rendering
let Cylinder14 = browser.currentScene.createNode("Cylinder");
Cylinder14.bottom = False;
Cylinder14.height = 3;
Cylinder14.solid = False;
Cylinder14.top = False;
Shape13.geometry = Cylinder14;

let Appearance15 = browser.currentScene.createNode("Appearance");
Appearance15.USE = "AppearanceGrey";
Shape13.appearance = Appearance15;

CADFace12.shape = Shape13;

CADPart6.children[1] = CADFace12;

CADAssembly5.children = new MFNode();

CADAssembly5.children[0] = CADPart6;

let CADPart16 = browser.currentScene.createNode("CADPart");
CADPart16.name = "CADPartTop";
CADPart16.rotation = new SFRotation(new float[1,0,0,1.5708]);
CADPart16.translation = new SFVec3f(new float[0,1.5,0]);
let CADFace17 = browser.currentScene.createNode("CADFace");
CADFace17.name = "topCap";
let Shape18 = browser.currentScene.createNode("Shape");
let Disk2D19 = browser.currentScene.createNode("Disk2D");
Disk2D19.innerRadius = 1;
Disk2D19.outerRadius = 2;
Shape18.geometry = Disk2D19;

let Appearance20 = browser.currentScene.createNode("Appearance");
Appearance20.USE = "AppearanceGrey";
Shape18.appearance = Appearance20;

CADFace17.shape = Shape18;

CADPart16.children = new MFNode();

CADPart16.children[0] = CADFace17;

CADAssembly5.children[1] = CADPart16;

let CADPart21 = browser.currentScene.createNode("CADPart");
CADPart21.name = "CADPartBottom";
CADPart21.rotation = new SFRotation(new float[-1,0,0,1.5708]);
CADPart21.translation = new SFVec3f(new float[0,-1.5,0]);
let CADFace22 = browser.currentScene.createNode("CADFace");
CADFace22.name = "bottomCap";
let Shape23 = browser.currentScene.createNode("Shape");
let Disk2D24 = browser.currentScene.createNode("Disk2D");
Disk2D24.innerRadius = 1;
Disk2D24.outerRadius = 2;
Shape23.geometry = Disk2D24;

let Appearance25 = browser.currentScene.createNode("Appearance");
Appearance25.USE = "AppearanceGrey";
Shape23.appearance = Appearance25;

CADFace22.shape = Shape23;

CADPart21.children = new MFNode();

CADPart21.children[0] = CADFace22;

CADAssembly5.children[2] = CADPart21;

browser.currentScene.children[3] = CADAssembly5;

