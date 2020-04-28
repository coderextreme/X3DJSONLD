let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["File created using CATIA"]);
WorldInfo2.title = "CatiaHubCap.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY"]);
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "Main Viewpoint";
Viewpoint5.fieldOfView = 0.471225;
Viewpoint5.orientation = new SFRotation(new float[0.326678,0.502925,0.800218,2.185925]);
Viewpoint5.position = new SFVec3f(new float[0.411502,0.183945,0.216403]);
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.description = "Iso View";
Viewpoint6.fieldOfView = 0.471225;
Viewpoint6.orientation = new SFRotation(new float[0.187053,0.451587,0.872399,2.448076]);
Viewpoint6.position = new SFVec3f(new float[0.288675,0.288675,0.288675]);
browser.currentScene.children[4] = Viewpoint6;

let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.description = "Front View";
Viewpoint7.fieldOfView = 0.471225;
Viewpoint7.orientation = new SFRotation(new float[0.57735,0.57735,0.57735,2.094395]);
Viewpoint7.position = new SFVec3f(new float[0.5,0,0]);
browser.currentScene.children[5] = Viewpoint7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.description = "Back View";
Viewpoint8.fieldOfView = 0.471225;
Viewpoint8.orientation = new SFRotation(new float[0.57735,-0.57735,-0.57735,2.094395]);
Viewpoint8.position = new SFVec3f(new float[-0.5,0,0]);
browser.currentScene.children[6] = Viewpoint8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Left View";
Viewpoint9.fieldOfView = 0.471225;
Viewpoint9.orientation = new SFRotation(new float[1,-0.000173,0.000173,1.570796]);
Viewpoint9.position = new SFVec3f(new float[0,-0.5,0]);
browser.currentScene.children[7] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Right View";
Viewpoint10.fieldOfView = 0.471225;
Viewpoint10.orientation = new SFRotation(new float[-0.000122,-0.707107,-0.707107,3.141348]);
Viewpoint10.position = new SFVec3f(new float[0,0.5,0]);
browser.currentScene.children[8] = Viewpoint10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.description = "Top View";
Viewpoint11.fieldOfView = 0.471225;
Viewpoint11.orientation = new SFRotation(new float[0,0,1,1.570796]);
Viewpoint11.position = new SFVec3f(new float[0,0,0.5]);
browser.currentScene.children[9] = Viewpoint11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.description = "Bottom View";
Viewpoint12.fieldOfView = 0.471225;
Viewpoint12.orientation = new SFRotation(new float[0.707107,0.707107,0,3.141593]);
Viewpoint12.position = new SFVec3f(new float[0,0,-0.5]);
browser.currentScene.children[10] = Viewpoint12;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.scale = new SFVec3f(new float[0.001,0.001,0.001]);
let Group14 = browser.currentScene.createNode("Group");
let Group15 = browser.currentScene.createNode("Group");
let Group16 = browser.currentScene.createNode("Group");
let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "_03E3C7E8";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.DEF = "_material0";
Material20.diffuseColor = new SFColor(new float[0.94902,0.635294,0.341176]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1]);
IndexedFaceSet21.solid = False;
let Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[-75,0,0,-75,0,20,-74.2366,10.6736,0,-74.2366,10.6736,20,-71.962,21.1299,0,-71.962,21.1299,20,-68.2224,31.1561,0,-68.2224,31.1561,20,-63.094,40.5481,0,-63.094,40.5481,20,-56.6812,49.1146,0,-56.6812,49.1146,20,-49.1146,56.6812,0,-49.1146,56.6812,20,-40.5481,63.094,0,-40.5481,63.094,20,-31.1561,68.2224,0,-31.1561,68.2224,20,-21.1299,71.962,0,-21.1299,71.962,20,-10.6736,74.2366,0,-10.6736,74.2366,20,0,75,0,0,75,20,10.6736,74.2366,0,10.6736,74.2366,20,21.1299,71.962,0,21.1299,71.962,20,31.1561,68.2224,0,31.1561,68.2224,20,40.5481,63.094,0,40.5481,63.094,20,49.1146,56.6812,0,49.1146,56.6812,20,56.6812,49.1146,0,56.6812,49.1146,20,63.094,40.5481,0,63.094,40.5481,20,68.2224,31.1561,0,68.2224,31.1561,20,71.962,21.1299,0,71.962,21.1299,20,74.2366,10.6736,0,74.2366,10.6736,20,75,0,0,75,0,20]);
IndexedFaceSet21.coord = Coordinate22;

let Normal23 = browser.currentScene.createNode("Normal");
Normal23.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.989822,0.142308,0,-0.989822,0.142308,0,-0.959498,0.281716,0,-0.959498,0.281716,0,-0.909645,0.415387,0,-0.909645,0.415387,0,-0.841257,0.540635,0,-0.841257,0.540635,0,-0.755771,0.654836,0,-0.755771,0.654836,0,-0.654836,0.755771,0,-0.654836,0.755771,0,-0.540635,0.841257,0,-0.540635,0.841257,0,-0.415387,0.909645,0,-0.415387,0.909645,0,-0.281716,0.959498,0,-0.281716,0.959498,0,-0.142308,0.989822,0,-0.142308,0.989822,0,0,1,0,0,1,0,0.142308,0.989822,0,0.142308,0.989822,0,0.281716,0.959498,0,0.281716,0.959498,0,0.415387,0.909645,0,0.415387,0.909645,0,0.540635,0.841257,0,0.540635,0.841257,0,0.654836,0.755771,0,0.654836,0.755771,0,0.755771,0.654836,0,0.755771,0.654836,0,0.841257,0.540635,0,0.841257,0.540635,0,0.909645,0.415387,0,0.909645,0.415387,0,0.959498,0.281716,0,0.959498,0.281716,0,0.989822,0.142308,0,0.989822,0.142308,0,1,0,0,1,0,0]);
IndexedFaceSet21.normal = Normal23;

Shape18.geometry = IndexedFaceSet21;

Group17.children = new MFNode();

Group17.children[0] = Shape18;

let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.USE = "_material0";
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1]);
IndexedFaceSet27.solid = False;
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[75,0,0,75,0,20,74.2366,-10.6736,0,74.2366,-10.6736,20,71.962,-21.1299,0,71.962,-21.1299,20,68.2224,-31.1561,0,68.2224,-31.1561,20,63.094,-40.5481,0,63.094,-40.5481,20,56.6812,-49.1146,0,56.6812,-49.1146,20,49.1146,-56.6812,0,49.1146,-56.6812,20,40.5481,-63.094,0,40.5481,-63.094,20,31.1561,-68.2224,0,31.1561,-68.2224,20,21.1299,-71.962,0,21.1299,-71.962,20,10.6736,-74.2366,0,10.6736,-74.2366,20,0,-75,0,0,-75,20,-10.6736,-74.2366,0,-10.6736,-74.2366,20,-21.1299,-71.962,0,-21.1299,-71.962,20,-31.1561,-68.2224,0,-31.1561,-68.2224,20,-40.5481,-63.094,0,-40.5481,-63.094,20,-49.1146,-56.6812,0,-49.1146,-56.6812,20,-56.6812,-49.1146,0,-56.6812,-49.1146,20,-63.094,-40.5481,0,-63.094,-40.5481,20,-68.2224,-31.1561,0,-68.2224,-31.1561,20,-71.962,-21.1299,0,-71.962,-21.1299,20,-74.2366,-10.6736,0,-74.2366,-10.6736,20,-75,0,0,-75,0,20]);
IndexedFaceSet27.coord = Coordinate28;

let Normal29 = browser.currentScene.createNode("Normal");
Normal29.vector = new MFVec3f(new float[1,0,0,1,0,0,0.989822,-0.142308,0,0.989822,-0.142308,0,0.959498,-0.281716,0,0.959498,-0.281716,0,0.909645,-0.415387,0,0.909645,-0.415387,0,0.841257,-0.540635,0,0.841257,-0.540635,0,0.755771,-0.654836,0,0.755771,-0.654836,0,0.654836,-0.755771,0,0.654836,-0.755771,0,0.540635,-0.841257,0,0.540635,-0.841257,0,0.415387,-0.909645,0,0.415387,-0.909645,0,0.281716,-0.959498,0,0.281716,-0.959498,0,0.142308,-0.989822,0,0.142308,-0.989822,0,0,-1,0,0,-1,0,-0.142308,-0.989822,0,-0.142308,-0.989822,0,-0.281716,-0.959498,0,-0.281716,-0.959498,0,-0.415387,-0.909645,0,-0.415387,-0.909645,0,-0.540635,-0.841257,0,-0.540635,-0.841257,0,-0.654836,-0.755771,0,-0.654836,-0.755771,0,-0.755771,-0.654836,0,-0.755771,-0.654836,0,-0.841257,-0.540635,0,-0.841257,-0.540635,0,-0.909645,-0.415387,0,-0.909645,-0.415387,0,-0.959498,-0.281716,0,-0.959498,-0.281716,0,-0.989822,-0.142308,0,-0.989822,-0.142308,0,-1,0,0,-1,0,0]);
IndexedFaceSet27.normal = Normal29;

Shape24.geometry = IndexedFaceSet27;

Group17.children[1] = Shape24;

let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.USE = "_material0";
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let IndexedFaceSet33 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet33.coordIndex = new MFInt32(new int[2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1]);
IndexedFaceSet33.solid = False;
let Coordinate34 = browser.currentScene.createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[0,75,0,10.6736,74.2366,0,-10.6736,74.2366,0,-21.1299,71.962,0,21.1299,71.962,0,-31.1561,68.2224,0,31.1561,68.2224,0,-40.5481,63.094,0,40.5481,63.094,0,-49.1146,56.6812,0,49.1146,56.6812,0,-56.6812,49.1146,0,56.6812,49.1146,0,-63.094,40.5481,0,63.094,40.5481,0,-68.2224,31.1561,0,68.2224,31.1561,0,-71.962,21.1299,0,71.962,21.1299,0,-74.2366,10.6736,0,74.2366,10.6736,0,-75,0,0,75,0,0,-74.2366,-10.6736,0,74.2366,-10.6736,0,-71.962,-21.1299,0,71.962,-21.1299,0,-68.2224,-31.1561,0,68.2224,-31.1561,0,-63.094,-40.5481,0,63.094,-40.5481,0,-56.6812,-49.1146,0,56.6812,-49.1146,0,-49.1146,-56.6812,0,49.1146,-56.6812,0,-40.5481,-63.094,0,40.5481,-63.094,0,-31.1561,-68.2224,0,31.1561,-68.2224,0,-21.1299,-71.962,0,21.1299,-71.962,0,-10.6736,-74.2366,0,10.6736,-74.2366,0,0,-75,0]);
IndexedFaceSet33.coord = Coordinate34;

Shape30.geometry = IndexedFaceSet33;

Group17.children[2] = Shape30;

let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.USE = "_material0";
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let IndexedFaceSet38 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet38.coordIndex = new MFInt32(new int[1,0,3,-1,0,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1]);
IndexedFaceSet38.solid = False;
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[-10.6736,74.2366,20,10.6736,74.2366,20,0,75,20,21.1299,71.962,20,-21.1299,71.962,20,31.1561,68.2224,20,-31.1561,68.2224,20,40.5481,63.094,20,-40.5481,63.094,20,49.1146,56.6812,20,-49.1146,56.6812,20,56.6812,49.1146,20,-56.6812,49.1146,20,63.094,40.5481,20,-63.094,40.5481,20,68.2224,31.1561,20,-68.2224,31.1561,20,71.962,21.1299,20,-71.962,21.1299,20,74.2366,10.6736,20,-74.2366,10.6736,20,75,0,20,-75,0,20,74.2366,-10.6736,20,-74.2366,-10.6736,20,71.962,-21.1299,20,-71.962,-21.1299,20,68.2224,-31.1561,20,-68.2224,-31.1561,20,63.094,-40.5481,20,-63.094,-40.5481,20,56.6812,-49.1146,20,-56.6812,-49.1146,20,49.1146,-56.6812,20,-49.1146,-56.6812,20,40.5481,-63.094,20,-40.5481,-63.094,20,31.1561,-68.2224,20,-31.1561,-68.2224,20,21.1299,-71.962,20,-21.1299,-71.962,20,10.6736,-74.2366,20,-10.6736,-74.2366,20,0,-75,20]);
IndexedFaceSet38.coord = Coordinate39;

Shape35.geometry = IndexedFaceSet38;

Group17.children[3] = Shape35;

Group16.children = new MFNode();

Group16.children[0] = Group17;

Group15.children = new MFNode();

Group15.children[0] = Group16;

Group14.children = new MFNode();

Group14.children[0] = Group15;

Transform13.children = new MFNode();

Transform13.children[0] = Group14;

browser.currentScene.children[11] = Transform13;

