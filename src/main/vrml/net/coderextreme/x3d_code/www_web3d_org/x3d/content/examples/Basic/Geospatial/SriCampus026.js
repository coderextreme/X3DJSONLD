let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus026.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-52";
TouchSensor3.enabled = False;
browser.currentScene.children[1] = TouchSensor3;

let Shape4 = browser.currentScene.createNode("Shape");
let Appearance5 = browser.currentScene.createNode("Appearance");
let Material6 = browser.currentScene.createNode("Material");
Material6.diffuseColor = new SFColor(new float[0.75,0.75,0.75]);
Appearance5.material = Material6;

Shape4.appearance = Appearance5;

let IndexedFaceSet7 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet7.convex = False;
IndexedFaceSet7.coordIndex = new MFInt32(new int[24,25,1,0,-1,22,23,25,24,-1,20,21,23,22,-1,18,19,21,20,-1,16,17,19,18,-1,14,15,17,16,-1,12,13,15,14,-1,10,11,13,12,-1,8,9,11,10,-1,6,7,9,8,-1,4,5,7,6,-1,2,3,5,4,-1,0,1,3,2,-1,25,23,21,19,17,15,13,11,9,7,5,3,1,-1,0,2,4,6,8,10,12,14,16,18,20,22,24,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-26-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-19.118906,0,-47.281948,0.030344266,76.53163,-47.281948,-19.118906,76.53163,-89.46675,0.030344266,144.66078,-89.46675,-19.118906,144.66078,-79.76882,0.030344266,150.80469,-79.76882,-19.118906,150.80469,-55.13782,0.030344266,111.250626,-55.13782,-19.118906,111.250626,-35.866737,0.030344266,123.35565,-35.866737,-19.118906,123.35565,-26.391157,0.030344266,108.25669,-26.391157,-19.118906,108.25669,-45.779972,0.030344266,95.76958,-45.779972,-19.118906,95.76958,-24.160658,0.030344266,60.919914,-24.160658,-19.118906,60.919914,-4.8944416,0.030344266,73.114,-4.8944416,-19.118906,73.114,4.670042,0.030344266,57.821125,4.670042,-19.118906,57.821125,-14.979609,0.030344266,45.7227,-14.979609,-19.118906,45.7227,9.798365,0.030344266,6.229705,9.798365,-19.118906,6.229705]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;

