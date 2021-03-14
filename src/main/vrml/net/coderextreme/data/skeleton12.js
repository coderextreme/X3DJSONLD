let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let Transform2 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape3 = browser.currentScene.createNode("Shape");
Shape3.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet4 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet4.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet4.colorPerVertex = False;
IndexedLineSet4.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate5 = browser.currentScene.createNode("Coordinate");
Coordinate5.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet4.coord = Coordinate5;

let Color6 = browser.currentScene.createNode("Color");
Color6.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet4.color = Color6;

Shape3.geometry = IndexedLineSet4;

Transform2.children = new MFNode();

Transform2.children[0] = Shape3;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform2;

let Group7 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform8 = browser.currentScene.createNode("Transform");
let Transform9 = browser.currentScene.createNode("Transform");
Transform9.translation = new SFVec3f(new float[0,2,0]);
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "HAnimRootShape";
let Sphere11 = browser.currentScene.createNode("Sphere");
Sphere11.radius = 0.02;
Shape10.geometry = Sphere11;

let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.DEF = "HAnimRootMaterial";
Material13.diffuseColor = new SFColor(new float[0.8,0,0]);
Material13.transparency = 0.3;
Appearance12.material = Material13;

Shape10.appearance = Appearance12;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

Transform8.children = new MFNode();

Transform8.children[0] = Transform9;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.translation = new SFVec3f(new float[0,2.1,0]);
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "HAnimJointShape";
let Sphere16 = browser.currentScene.createNode("Sphere");
Sphere16.radius = 0.02;
Shape15.geometry = Sphere16;

let Appearance17 = browser.currentScene.createNode("Appearance");
let Material18 = browser.currentScene.createNode("Material");
Material18.DEF = "HAnimJointMaterial";
Material18.diffuseColor = new SFColor(new float[0,0,0.8]);
Material18.transparency = 0.3;
Appearance17.material = Material18;

Shape15.appearance = Appearance17;

Transform14.children = new MFNode();

Transform14.children[0] = Shape15;

Transform8.children[1] = Transform14;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2.05,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimSegmentLine";
let LineSet21 = browser.currentScene.createNode("LineSet");
LineSet21.vertexCount = new MFInt32(new int[2]);
let ColorRGBA22 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA22.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA22.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet21.color = ColorRGBA22;

let Coordinate23 = browser.currentScene.createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet21.coord = Coordinate23;

Shape20.geometry = LineSet21;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Transform8.children[2] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.1,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimSiteShape";
let IndexedFaceSet26 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet26.DEF = "DiamondIFS";
IndexedFaceSet26.creaseAngle = 0.5;
IndexedFaceSet26.solid = False;
IndexedFaceSet26.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA27 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSiteColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet26.color = ColorRGBA27;

let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet26.coord = Coordinate28;

Shape25.geometry = IndexedFaceSet26;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,1,0]);
Material30.transparency = 0.3;
Appearance29.material = Material30;

Shape25.appearance = Appearance29;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Transform8.children[3] = Transform24;

Group7.children = new MFNode();

Group7.children[0] = Transform8;

browser.currentScene.children[1] = Group7;

let NavigationInfo31 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo31.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo31;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.description = "default";
browser.currentScene.children[3] = Viewpoint32;

