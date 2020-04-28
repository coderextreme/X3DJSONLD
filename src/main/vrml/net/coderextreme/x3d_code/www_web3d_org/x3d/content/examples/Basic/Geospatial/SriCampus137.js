let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "SriCampus137.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let TouchSensor3 = browser.currentScene.createNode("TouchSensor");
TouchSensor3.DEF = "MouseOverPopupDescription";
TouchSensor3.description = "Extrusion-3";
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
IndexedFaceSet7.coordIndex = new MFInt32(new int[0,1,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,-1,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1]);
IndexedFaceSet7.solid = False;
let Coordinate8 = browser.currentScene.createNode("Coordinate");
Coordinate8.DEF = "OBJECT-137-VERTICES";
Coordinate8.point = new MFVec3f(new float[0,0,0,0,-18.85569,0,2.291761,0.000642941,10.547004,2.291761,-18.85569,10.547004,-2.8185573,0.000642941,11.723005,-2.8185573,-18.85569,11.723005,-3.5341625,0.000642941,15.113612,-3.5341625,-18.85569,15.113612,-2.9920127,0.000642941,18.134363,-2.9920127,-18.85569,18.134363,-0.9843536,0.000642941,21.440897,-0.9843536,-18.85569,21.440897,1.5354041,0.000642941,22.27623,1.5354041,-18.85569,22.27623,5.066231,0.000642941,21.199247,5.066231,-18.85569,21.199247,8.862147,0.000642941,37.18861,8.862147,-18.85569,37.18861,-7.3980722,0.000642941,40.557735,-7.3980722,-18.85569,40.557735,-9.735897,0.000642941,30.142391,-9.735897,-18.85569,30.142391,-5.894487,0.000642941,28.914547,-5.894487,-18.85569,28.914547,-4.0522604,0.000642941,26.922781,-4.0522604,-18.85569,26.922781,-3.8651404,0.000642941,24.002205,-3.8651404,-18.85569,24.002205,-5.6912127,0.000642941,19.866385,-5.6912127,-18.85569,19.866385,-7.6994147,0.000642941,18.16032,-7.6994147,-18.85569,18.16032,-12.57047,0.000642941,18.968575,-12.57047,-18.85569,18.968575,-16.333782,0.000642941,3.5941617,-16.333782,-18.85569,3.5941617]);
IndexedFaceSet7.coord = Coordinate8;

Shape4.geometry = IndexedFaceSet7;

browser.currentScene.children[2] = Shape4;

