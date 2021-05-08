let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "InlineSoundSource.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.DEF = "NAV";
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.backUrl = new MFString(new java.lang.String["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]);
Background4.bottomUrl = new MFString(new java.lang.String["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]);
Background4.frontUrl = new MFString(new java.lang.String["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]);
Background4.leftUrl = new MFString(new java.lang.String["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]);
Background4.rightUrl = new MFString(new java.lang.String["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]);
Background4.topUrl = new MFString(new java.lang.String["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]);
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.DEF = "Camera001";
Viewpoint5.description = "Camera001";
Viewpoint5.farDistance = 0;
Viewpoint5.nearDistance = 1;
Viewpoint5.orientation = new SFRotation(new float[1,0,0,-0.523599]);
Viewpoint5.position = new SFVec3f(new float[0,2000,3500]);
browser.currentScene.children[3] = Viewpoint5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "Floor";
Transform6.translation = new SFVec3f(new float[1.241,0,0.358]);
let Shape7 = browser.currentScene.createNode("Shape");
let Appearance8 = browser.currentScene.createNode("Appearance");
Appearance8.DEF = "WireColor";
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.122,0.114,0.125]);
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

let IndexedFaceSet10 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet10.DEF = "Box001-GEOMETRY";
IndexedFaceSet10.coordIndex = new MFInt32(new int[0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]);
IndexedFaceSet10.solid = False;
let Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.point = new MFVec3f(new float[-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000]);
IndexedFaceSet10.coord = Coordinate11;

let Normal12 = browser.currentScene.createNode("Normal");
Normal12.vector = new MFVec3f(new float[0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0]);
IndexedFaceSet10.normal = Normal12;

Shape7.geometry = IndexedFaceSet10;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "InlineScene";
let Inline14 = browser.currentScene.createNode("Inline");
Inline14.DEF = "inline";
Inline14.url = new MFString(new java.lang.String["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"]);
Transform13.children = new MFNode();

Transform13.children[0] = Inline14;

browser.currentScene.children[5] = Transform13;

