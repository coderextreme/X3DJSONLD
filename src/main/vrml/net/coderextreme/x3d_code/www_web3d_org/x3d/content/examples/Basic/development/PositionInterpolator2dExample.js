let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "PositionInterpolator2dExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Click to activate animation";
Viewpoint3.position = new SFVec3f(new float[0,0,3]);
browser.currentScene.children[1] = Viewpoint3;

let TimeSensor4 = browser.currentScene.createNode("TimeSensor");
TimeSensor4.DEF = "Clock";
TimeSensor4.cycleInterval = 10;
TimeSensor4.enabled = False;
TimeSensor4.loop = True;
browser.currentScene.children[2] = TimeSensor4;

let PositionInterpolator2D5 = browser.currentScene.createNode("PositionInterpolator2D");
PositionInterpolator2D5.DEF = "InterpolateTTscale";
PositionInterpolator2D5.key = new MFFloat(new float[0,0.35,0.45,0.8,0.9,1]);
PositionInterpolator2D5.keyValue = new MFVec2f(new float[1,1,3,3,3,3,0.8,0.8,1,1,1,1]);
browser.currentScene.children[3] = PositionInterpolator2D5;

let ROUTE6 = browser.currentScene.createNode("ROUTE");
ROUTE6.fromField = "fraction_changed";
ROUTE6.fromNode = "Clock";
ROUTE6.toField = "set_fraction";
ROUTE6.toNode = "InterpolateTTscale";
browser.currentScene.children[4] = ROUTE6;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "ImageAspectRatio";
Transform7.scale = new SFVec3f(new float[1.5,1,1]);
let TouchSensor8 = browser.currentScene.createNode("TouchSensor");
TouchSensor8.DEF = "Toucher";
TouchSensor8.description = "click and hold to animate TextureTransform";
Transform7.children = new MFNode();

Transform7.children[0] = TouchSensor8;

let ROUTE9 = browser.currentScene.createNode("ROUTE");
ROUTE9.fromField = "isActive";
ROUTE9.fromNode = "Toucher";
ROUTE9.toField = "enabled";
ROUTE9.toNode = "Clock";
Transform7.children[1] = ROUTE9;

let Shape10 = browser.currentScene.createNode("Shape");
let IndexedFaceSet11 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet11.coordIndex = new MFInt32(new int[0,1,2,3,0,-1]);
let Coordinate12 = browser.currentScene.createNode("Coordinate");
Coordinate12.DEF = "TwoByTwoSquare";
Coordinate12.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet11.coord = Coordinate12;

Shape10.geometry = IndexedFaceSet11;

let Appearance13 = browser.currentScene.createNode("Appearance");
let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.DEF = "ContactImage";
ImageTexture14.url = new MFString(new java.lang.String["JavaBoardSmileForTheCamera.jpg","https://savage.nps.edu/Savage/Tools/Animation/JavaBoardSmileForTheCamera.jpg","http://faculty.nps.edu/brutzman/images/JavaBoardSmileForTheCamera.jpg"]);
Appearance13.texture = ImageTexture14;

let TextureTransform15 = browser.currentScene.createNode("TextureTransform");
TextureTransform15.DEF = "TTN";
Appearance13.textureTransform = TextureTransform15;

Shape10.appearance = Appearance13;

Transform7.children[2] = Shape10;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromField = "value_changed";
ROUTE16.fromNode = "InterpolateTTscale";
ROUTE16.toField = "set_scale";
ROUTE16.toNode = "TTN";
Transform7.children[3] = ROUTE16;

browser.currentScene.children[5] = Transform7;

