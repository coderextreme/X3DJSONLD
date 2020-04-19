var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
Group2 = browser.currentScene.createNode("Group");
Shape3 = browser.currentScene.createNode("Shape");
IndexedFaceSet4 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet4.DEF = "IndexedFaceSet";
IndexedFaceSet4.coordIndex = [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1];
IndexedFaceSet4.normalIndex = [0,0,1,2,3,4,5];
IndexedFaceSet4.normalPerVertex = False;
IndexedFaceSet4.colorIndex = [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1];
Coordinate5 = browser.currentScene.createNode("Coordinate");
Coordinate5.point = [0,0,1,0,1,1,1,1,1,1,0,1];
IndexedFaceSet4.coord = Coordinate5;

Normal6 = browser.currentScene.createNode("Normal");
Normal6.vector = [1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1];
IndexedFaceSet4.normal = Normal6;

Color7 = browser.currentScene.createNode("Color");
Color7.color = [0,1,0];
IndexedFaceSet4.color = Color7;

Shape3.geometry = IndexedFaceSet4;

Group2.children = [];

Group2.children[0] = Shape3;

browser.currentScene.children = [];

browser.currentScene.children[0] = Group2;

