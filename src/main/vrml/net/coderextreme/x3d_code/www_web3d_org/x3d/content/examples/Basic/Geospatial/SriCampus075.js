let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus075.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-14";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[0,1,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,-1,14,12,10,8,6,4,2,0,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-75-VERTICES";
Coordinate8.point = new MFVec3f(new float[1.3116813,-0.5838856,0.7599707,1.3116813,-18.5816,0.7599707,-14.278957,-0.62585616,-9.464085,-14.278957,-18.5816,-9.464085,5.4185925,-0.68125737,-41.02141,5.4185925,-18.5816,-41.02141,-19.056501,-0.73858887,-56.246086,-19.056501,-18.5816,-56.246086,-39.069057,-0.682354,-24.194252,-39.069057,-18.5816,-24.194252,-54.14433,-0.724155,-34.053555,-54.14433,-18.5816,-34.053555,-26.26088,-0.80577016,-78.127785,-26.26088,-18.5816,-78.127785,28.226763,-0.66466707,-43.921726,28.226763,-18.5816,-43.921726]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;

