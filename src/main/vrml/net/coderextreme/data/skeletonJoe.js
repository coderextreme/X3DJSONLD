let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "default";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Transform3 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape4 = browser.currentScene.createNode("Shape");
Shape4.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet5 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet5.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet5.colorPerVertex = False;
IndexedLineSet5.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate6 = browser.currentScene.createNode("Coordinate");
Coordinate6.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet5.coord = Coordinate6;

let Color7 = browser.currentScene.createNode("Color");
Color7.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet5.color = Color7;

Shape4.geometry = IndexedLineSet5;

Transform3.children = new MFNode();

Transform3.children[0] = Shape4;

browser.currentScene.children[1] = Transform3;

let Group8 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform9 = browser.currentScene.createNode("Transform");
let Transform10 = browser.currentScene.createNode("Transform");
Transform10.translation = new SFVec3f(new float[0,2,0]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "HAnimRootShape";
let Sphere12 = browser.currentScene.createNode("Sphere");
Sphere12.radius = 0.02;
Shape11.geometry = Sphere12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.DEF = "HAnimRootMaterial";
Material14.diffuseColor = new SFColor(new float[0.8,0,0]);
Material14.transparency = 0.3;
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

let Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = new SFVec3f(new float[0,2.1,0]);
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "HAnimJointShape";
let Sphere17 = browser.currentScene.createNode("Sphere");
Sphere17.radius = 0.02;
Shape16.geometry = Sphere17;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.DEF = "HAnimJointMaterial";
Material19.diffuseColor = new SFColor(new float[0,0,0.8]);
Material19.transparency = 0.3;
Appearance18.material = Material19;

Shape16.appearance = Appearance18;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

Transform9.children[1] = Transform15;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.translation = new SFVec3f(new float[0,2.05,0]);
let Shape21 = browser.currentScene.createNode("Shape");
Shape21.DEF = "HAnimSegmentLine";
let LineSet22 = browser.currentScene.createNode("LineSet");
LineSet22.vertexCount = new MFInt32(new int[2]);
let ColorRGBA23 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA23.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA23.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet22.color = ColorRGBA23;

let Coordinate24 = browser.currentScene.createNode("Coordinate");
Coordinate24.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet22.coord = Coordinate24;

Shape21.geometry = LineSet22;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Transform9.children[2] = Transform20;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new SFVec3f(new float[0,2.1,0]);
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.DEF = "HAnimSiteShape";
let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.DEF = "DiamondIFS";
IndexedFaceSet27.creaseAngle = 0.5;
IndexedFaceSet27.solid = False;
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA28 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA28.DEF = "HAnimSiteColorRGBA";
ColorRGBA28.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet27.color = ColorRGBA28;

let Coordinate29 = browser.currentScene.createNode("Coordinate");
Coordinate29.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet27.coord = Coordinate29;

Shape26.geometry = IndexedFaceSet27;

let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,1,0]);
Material31.transparency = 0.3;
Appearance30.material = Material31;

Shape26.appearance = Appearance30;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

Transform9.children[3] = Transform25;

Group8.children = new MFNode();

Group8.children[0] = Transform9;

browser.currentScene.children[2] = Group8;

let NavigationInfo32 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo32.speed = 1.5;
browser.currentScene.children[3] = NavigationInfo32;

let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint33.description = "JohnBoy";
Viewpoint33.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[4] = Viewpoint33;

