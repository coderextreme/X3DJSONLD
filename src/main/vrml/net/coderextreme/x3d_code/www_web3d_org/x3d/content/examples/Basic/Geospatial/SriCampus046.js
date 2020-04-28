let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus046.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-123";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[0,1,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,-1,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-46-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-8.313948,0,2.952344,0.08051264,-5.1568027,2.952344,-8.313948,-5.1568027,0.25575694,0.08051264,-9.145796,0.25575694,-8.313948,-9.145796,4.7673345,0.08051264,-13.154732,4.7673345,-8.313948,-13.154732,7.2925296,0.08051264,-11.343418,7.2925296,-8.313948,-11.343418,10.114447,0.08051264,-16.187342,10.114447,-8.313948,-16.187342,55.785866,0.08051264,12.625972,55.785866,-8.313948,12.625972,58.67103,0.08051264,6.4663777,58.67103,-8.313948,6.4663777,64.54185,0.08051264,10.359601,64.54185,-8.313948,10.359601,88.87908,0.08051264,-30.95296,88.87908,-8.313948,-30.95296,96.22282,0.08051264,-27.394997,96.22282,-8.313948,-27.394997,73.7724,0.08051264,10.901485,73.7724,-8.313948,10.901485,79.74227,0.08051264,15.728492,79.74227,-8.313948,15.728492,75.39562,0.08051264,22.982388,75.39562,-8.313948,22.982388,76.80156,0.08051264,23.938143,76.80156,-8.313948,23.938143,66.09832,0.08051264,42.35907,66.09832,-8.313948,42.35907,45.57028,0.08051264,28.987062,45.57028,-8.313948,28.987062,47.255882,0.08051264,26.313633,47.255882,-8.313948,26.313633,35.69259,0.08051264,19.459175,35.69259,-8.313948,19.459175,34.158894,0.08051264,21.850235,34.158894,-8.313948,21.850235]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;

