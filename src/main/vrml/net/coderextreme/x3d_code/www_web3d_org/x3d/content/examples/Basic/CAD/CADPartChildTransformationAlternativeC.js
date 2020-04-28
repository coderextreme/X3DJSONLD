let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "CADInterchange";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CADPartChildTransformationAlternativeC.x3d";
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
CADPart6.name = "CADPartExample";
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

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform16.translation = new SFVec3f(new float[0,1.5,0]);
let CADFace17 = browser.currentScene.createNode("CADFace");
CADFace17.name = "topCap";
let Shape18 = browser.currentScene.createNode("Shape");
let IndexedTriangleSet19 = browser.currentScene.createNode("IndexedTriangleSet");
IndexedTriangleSet19.index = new MFInt32(new int[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
let Coordinate20 = browser.currentScene.createNode("Coordinate");
Coordinate20.DEF = "HollowCircleCoordinates";
Coordinate20.point = new MFVec3f(new float[2,0,0,1,0,0,1.9616,0.3902,0,0.9808,0.1951,0,1.8478,0.7654,0,0.9239,0.3827,0,1.6629,1.1111,0,0.8315,0.5556,0,1.4142,1.4142,0,0.7071,0.7071,0,1.1111,1.6629,0,0.5556,0.8315,0,0.7654,1.8478,0,0.3827,0.9239,0,0.3902,1.9616,0,0.1951,0.9808,0,0,2,0,0,1,0,-0.3902,1.9616,0,-0.1951,0.9808,0,-0.7654,1.8478,0,-0.3827,0.9239,0,-1.1111,1.6629,0,-0.5556,0.8315,0,-1.4142,1.4142,0,-0.7071,0.7071,0,-1.6629,1.1111,0,-0.8315,0.5556,0,-1.8478,0.7654,0,-0.9239,0.3827,0,-1.9616,0.3902,0,-0.9808,0.1951,0,-2,0,0,-1,0,0,-1.9616,-0.3902,0,-0.9808,-0.1951,0,-1.8478,-0.7654,0,-0.9239,-0.3827,0,-1.6629,-1.1111,0,-0.8315,-0.5556,0,-1.4142,-1.4142,0,-0.7071,-0.7071,0,-1.1111,-1.6629,0,-0.5556,-0.8315,0,-0.7654,-1.8478,0,-0.3827,-0.9239,0,-0.3902,-1.9616,0,-0.1951,-0.9808,0,0,-2,0,0,-1,0,0.3902,-1.9616,0,0.1951,-0.9808,0,0.7654,-1.8478,0,0.3827,-0.9239,0,1.1111,-1.6629,0,0.5556,-0.8315,0,1.4142,-1.4142,0,0.7071,-0.7071,0,1.6629,-1.1111,0,0.8315,-0.5556,0,1.8478,-0.7654,0,0.9239,-0.3827,0,1.9616,-0.3902,0,0.9808,-0.1951,0,2,0,0,1,0,0]);
IndexedTriangleSet19.coord = Coordinate20;

Shape18.geometry = IndexedTriangleSet19;

let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.USE = "AppearanceGrey";
Shape18.appearance = Appearance21;

CADFace17.shape = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = CADFace17;

CADPart6.transform[2] = Transform16;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform22.translation = new SFVec3f(new float[0,-1.5,0]);
let CADFace23 = browser.currentScene.createNode("CADFace");
CADFace23.name = "bottomCap";
let Shape24 = browser.currentScene.createNode("Shape");
let IndexedTriangleSet25 = browser.currentScene.createNode("IndexedTriangleSet");
IndexedTriangleSet25.index = new MFInt32(new int[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
let Coordinate26 = browser.currentScene.createNode("Coordinate");
Coordinate26.USE = "HollowCircleCoordinates";
IndexedTriangleSet25.coord = Coordinate26;

Shape24.geometry = IndexedTriangleSet25;

let Appearance27 = browser.currentScene.createNode("Appearance");
Appearance27.USE = "AppearanceGrey";
Shape24.appearance = Appearance27;

CADFace23.shape = Shape24;

Transform22.children = new MFNode();

Transform22.children[0] = CADFace23;

CADPart6.transform[3] = Transform22;

CADAssembly5.children = new MFNode();

CADAssembly5.children[0] = CADPart6;

browser.currentScene.children[3] = CADAssembly5;

