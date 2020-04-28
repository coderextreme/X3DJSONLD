let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ModelOrientation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Default model orientation: nose +X axis, up +Y axis, right-hand side +Z axis";
browser.currentScene.children[1] = Viewpoint3;

//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
let Transform4 = browser.currentScene.createNode("Transform");
Transform4.scale = new SFVec3f(new float[2,2,2]);
let Inline5 = browser.currentScene.createNode("Inline");
Inline5.DEF = "CoordinateAxes";
Inline5.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform4.children = new MFNode();

Transform4.children[0] = Inline5;

browser.currentScene.children[2] = Transform4;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.scale = new SFVec3f(new float[1.2,1.6,1.6]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.rotation = new SFRotation(new float[0,0,-1,1.57]);
Transform7.scale = new SFVec3f(new float[0.25,0.25,0.25]);
let Shape8 = browser.currentScene.createNode("Shape");
let Cylinder9 = browser.currentScene.createNode("Cylinder");
Cylinder9.height = 8;
Cylinder9.radius = 0.4425;
Cylinder9.top = False;
Shape8.geometry = Cylinder9;

let Appearance10 = browser.currentScene.createNode("Appearance");
Appearance10.DEF = "Cammi";
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[0.45,0.55,0.55]);
Appearance10.material = Material11;

Shape8.appearance = Appearance10;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,4.9,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Cone14 = browser.currentScene.createNode("Cone");
Cone14.bottomRadius = 0.4425;
Cone14.height = 1.8;
Shape13.geometry = Cone14;

let Appearance15 = browser.currentScene.createNode("Appearance");
Appearance15.USE = "Cammi";
Shape13.appearance = Appearance15;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Transform7.children[1] = Transform12;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,-4.1,0]);
let Shape17 = browser.currentScene.createNode("Shape");
let Cone18 = browser.currentScene.createNode("Cone");
Cone18.bottomRadius = 0.2;
Cone18.height = 0.66;
Shape17.geometry = Cone18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.15,0.15,0.15]);
Material20.shininess = 0.66;
Material20.specularColor = new SFColor(new float[0.22,0.22,0.22]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

Transform7.children[2] = Transform16;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "TailFin";
Transform21.translation = new SFVec3f(new float[0.175,-4.5,0]);
let Shape22 = browser.currentScene.createNode("Shape");
let IndexedFaceSet23 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,3,4,5,-1]);
IndexedFaceSet23.solid = False;
let Coordinate24 = browser.currentScene.createNode("Coordinate");
Coordinate24.point = new MFVec3f(new float[0,0.4,0,0.25,0,0,0.75,0,0,0.75,1,0,0,1.65,0,0,0.4,0]);
IndexedFaceSet23.coord = Coordinate24;

Shape22.geometry = IndexedFaceSet23;

let Appearance25 = browser.currentScene.createNode("Appearance");
Appearance25.USE = "Cammi";
Shape22.appearance = Appearance25;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

Transform7.children[3] = Transform21;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.rotation = new SFRotation(new float[0,1,0,1.57]);
let Transform27 = browser.currentScene.createNode("Transform");
Transform27.USE = "TailFin";
Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform7.children[4] = Transform26;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.rotation = new SFRotation(new float[0,1,0,3.14]);
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.USE = "TailFin";
Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

Transform7.children[5] = Transform28;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.rotation = new SFRotation(new float[0,1,0,-1.57]);
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.USE = "TailFin";
Transform30.children = new MFNode();

Transform30.children[0] = Transform31;

Transform7.children[6] = Transform30;

Transform6.children = new MFNode();

Transform6.children[0] = Transform7;

browser.currentScene.children[3] = Transform6;

