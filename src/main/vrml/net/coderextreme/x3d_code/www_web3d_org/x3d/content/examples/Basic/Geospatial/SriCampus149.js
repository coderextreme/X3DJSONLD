let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus149.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-18";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[0,1,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,-1,18,16,14,12,10,8,6,4,2,0,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-149-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-19.318727,0,2.9632297,0.0012397391,-5.815984,2.9632297,-19.318727,-5.815984,49.806767,0.0012397391,23.343729,49.806767,-19.318727,23.343729,30.871647,0.0012397391,54.355877,30.871647,-19.318727,54.355877,11.727289,0.0012397391,42.403755,11.727289,-19.318727,42.403755,10.369084,0.0012397391,45.22804,10.369084,-19.318727,45.22804,0.64209086,0.0012397391,38.748062,0.64209086,-19.318727,38.748062,1.9902558,0.0012397391,36.36381,1.9902558,-19.318727,36.36381,-12.558201,0.0012397391,26.961876,-12.558201,-19.318727,26.961876,2.482083,0.0012397391,1.496662,2.482083,-19.318727,1.496662]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;

