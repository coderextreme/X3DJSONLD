let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["File created using CATIA"]);
WorldInfo2.title = "CatiaHubBushing.x3d";
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
Group17.DEF = "_0272AA28";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.DEF = "_material0";
Material20.diffuseColor = new SFColor(new float[0,1,1]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]);
IndexedFaceSet21.solid = False;
let Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[-30,1.69966e-14,0,-30,1.69966e-14,80,-29.2478,6.67563,0,-29.2478,6.67563,80,-27.0291,13.0165,0,-27.0291,13.0165,80,-23.4549,18.7047,0,-23.4549,18.7047,80,-18.7047,23.4549,0,-18.7047,23.4549,80,-13.0165,27.0291,0,-13.0165,27.0291,80,-6.67563,29.2478,0,-6.67563,29.2478,80,8.49831e-15,30,0,8.49831e-15,30,80,6.67563,29.2478,0,6.67563,29.2478,80,13.0165,27.0291,0,13.0165,27.0291,80,18.7047,23.4549,0,18.7047,23.4549,80,23.4549,18.7047,0,23.4549,18.7047,80,27.0291,13.0165,0,27.0291,13.0165,80,29.2478,6.67563,0,29.2478,6.67563,80,30,0,0,30,0,80]);
IndexedFaceSet21.coord = Coordinate22;

let Normal23 = browser.currentScene.createNode("Normal");
Normal23.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.97493,0.22251,0,-0.97493,0.22251,0,-0.90097,0.433882,0,-0.90097,0.433882,0,-0.781853,0.623463,0,-0.781853,0.623463,0,-0.623463,0.781853,0,-0.623463,0.781853,0,-0.433882,0.90097,0,-0.433882,0.90097,0,-0.22251,0.97493,0,-0.22251,0.97493,0,0,1,0,0,1,0,0.22251,0.97493,0,0.22251,0.97493,0,0.433882,0.90097,0,0.433882,0.90097,0,0.623463,0.781853,0,0.623463,0.781853,0,0.781853,0.623463,0,0.781853,0.623463,0,0.90097,0.433882,0,0.90097,0.433882,0,0.97493,0.22251,0,0.97493,0.22251,0,1,0,0,1,0,0]);
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
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]);
IndexedFaceSet27.solid = False;
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[30,0,0,30,0,80,29.2478,-6.67563,0,29.2478,-6.67563,80,27.0291,-13.0165,0,27.0291,-13.0165,80,23.4549,-18.7047,0,23.4549,-18.7047,80,18.7047,-23.4549,0,18.7047,-23.4549,80,13.0165,-27.0291,0,13.0165,-27.0291,80,6.67563,-29.2478,0,6.67563,-29.2478,80,-3.21563e-14,-30,0,-3.21563e-14,-30,80,-6.67563,-29.2478,0,-6.67563,-29.2478,80,-13.0165,-27.0291,0,-13.0165,-27.0291,80,-18.7047,-23.4549,0,-18.7047,-23.4549,80,-23.4549,-18.7047,0,-23.4549,-18.7047,80,-27.0291,-13.0165,0,-27.0291,-13.0165,80,-29.2478,-6.67563,0,-29.2478,-6.67563,80,-30,1.69966e-14,0,-30,1.69966e-14,80]);
IndexedFaceSet27.coord = Coordinate28;

let Normal29 = browser.currentScene.createNode("Normal");
Normal29.vector = new MFVec3f(new float[1,0,0,1,0,0,0.97493,-0.22251,0,0.97493,-0.22251,0,0.90097,-0.433882,0,0.90097,-0.433882,0,0.781853,-0.623463,0,0.781853,-0.623463,0,0.623463,-0.781853,0,0.623463,-0.781853,0,0.433882,-0.90097,0,0.433882,-0.90097,0,0.22251,-0.97493,0,0.22251,-0.97493,0,0,-1,0,0,-1,0,-0.22251,-0.97493,0,-0.22251,-0.97493,0,-0.433882,-0.90097,0,-0.433882,-0.90097,0,-0.623463,-0.781853,0,-0.623463,-0.781853,0,-0.781853,-0.623463,0,-0.781853,-0.623463,0,-0.90097,-0.433882,0,-0.90097,-0.433882,0,-0.97493,-0.22251,0,-0.97493,-0.22251,0,-1,0,0,-1,0,0]);
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
IndexedFaceSet33.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1]);
IndexedFaceSet33.solid = False;
let Coordinate34 = browser.currentScene.createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[20,0,80,20,0,0,19.3185,-5.17638,80,19.3185,-5.17638,0,17.3205,-10,80,17.3205,-10,0,14.1421,-14.1421,80,14.1421,-14.1421,0,10,-17.3205,80,10,-17.3205,0,5.17638,-19.3185,80,5.17638,-19.3185,0,-3.67394e-15,-20,80,-3.67394e-15,-20,0,-5.17638,-19.3185,80,-5.17638,-19.3185,0,-10,-17.3205,80,-10,-17.3205,0,-14.1421,-14.1421,80,-14.1421,-14.1421,0,-17.3205,-10,80,-17.3205,-10,0,-19.3185,-5.17638,80,-19.3185,-5.17638,0,-20,2.44929e-15,80,-20,2.44929e-15,0]);
IndexedFaceSet33.coord = Coordinate34;

let Normal35 = browser.currentScene.createNode("Normal");
Normal35.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.965932,0.258797,0,-0.965932,0.258797,0,-0.866034,0.499985,0,-0.866034,0.499985,0,-0.707083,0.70713,0,-0.707083,0.70713,0,-0.499985,0.866034,0,-0.499985,0.866034,0,-0.258797,0.965932,0,-0.258797,0.965932,0,0,1,0,0,1,0,0.258797,0.965932,0,0.258797,0.965932,0,0.499985,0.866034,0,0.499985,0.866034,0,0.707083,0.70713,0,0.707083,0.70713,0,0.866034,0.499985,0,0.866034,0.499985,0,0.965932,0.258797,0,0.965932,0.258797,0,1,0,0,1,0,0]);
IndexedFaceSet33.normal = Normal35;

Shape30.geometry = IndexedFaceSet33;

Group17.children[2] = Shape30;

let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.USE = "_material0";
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let IndexedFaceSet39 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1]);
IndexedFaceSet39.solid = False;
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-20,2.44929e-15,80,-20,2.44929e-15,0,-19.3185,5.17638,80,-19.3185,5.17638,0,-17.3205,10,80,-17.3205,10,0,-14.1421,14.1421,80,-14.1421,14.1421,0,-10,17.3205,80,-10,17.3205,0,-5.17638,19.3185,80,-5.17638,19.3185,0,1.22465e-15,20,80,1.22465e-15,20,0,5.17638,19.3185,80,5.17638,19.3185,0,10,17.3205,80,10,17.3205,0,14.1421,14.1421,80,14.1421,14.1421,0,17.3205,10,80,17.3205,10,0,19.3185,5.17638,80,19.3185,5.17638,0,20,0,80,20,0,0]);
IndexedFaceSet39.coord = Coordinate40;

let Normal41 = browser.currentScene.createNode("Normal");
Normal41.vector = new MFVec3f(new float[1,0,0,1,0,0,0.965932,-0.258797,0,0.965932,-0.258797,0,0.866034,-0.499985,0,0.866034,-0.499985,0,0.707083,-0.70713,0,0.707083,-0.70713,0,0.499985,-0.866034,0,0.499985,-0.866034,0,0.258797,-0.965932,0,0.258797,-0.965932,0,0,-1,0,0,-1,0,-0.258797,-0.965932,0,-0.258797,-0.965932,0,-0.499985,-0.866034,0,-0.499985,-0.866034,0,-0.707083,-0.70713,0,-0.707083,-0.70713,0,-0.866034,-0.499985,0,-0.866034,-0.499985,0,-0.965932,-0.258797,0,-0.965932,-0.258797,0,-1,0,0,-1,0,0]);
IndexedFaceSet39.normal = Normal41;

Shape36.geometry = IndexedFaceSet39;

Group17.children[3] = Shape36;

let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "_material0";
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,5,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,12,14,15,-1,14,16,15,-1,15,16,17,-1,15,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,27,26,28,-1,26,29,28,-1,28,29,30,-1,30,29,31,-1,29,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,37,36,38,-1,36,39,38,-1,38,39,40,-1,40,39,19,-1,39,41,19,-1,19,41,21,-1,41,42,21,-1,21,42,43,-1,44,1,0,-1,44,0,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,24,-1,44,24,23,-1]);
IndexedFaceSet45.solid = False;
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[-23.4549,18.7047,0,-5.17638,19.3185,0,-27.0291,13.0165,0,-10,17.3205,0,-14.1421,14.1421,0,-29.2478,6.67563,0,-17.3205,10,0,-19.3185,5.17638,0,-30,1.69966e-14,0,-20,2.44929e-15,0,-29.2478,-6.67563,0,-19.3185,-5.17638,0,-27.0291,-13.0165,0,-17.3205,-10,0,-14.1421,-14.1421,0,-23.4549,-18.7047,0,-10,-17.3205,0,-5.17638,-19.3185,0,-18.7047,-23.4549,0,-3.67394e-15,-20,0,-13.0165,-27.0291,0,-3.21563e-14,-30,0,-6.67563,-29.2478,0,5.17638,19.3185,0,23.4549,18.7047,0,10,17.3205,0,27.0291,13.0165,0,14.1421,14.1421,0,17.3205,10,0,29.2478,6.67563,0,19.3185,5.17638,0,20,0,0,30,0,0,19.3185,-5.17638,0,29.2478,-6.67563,0,17.3205,-10,0,27.0291,-13.0165,0,14.1421,-14.1421,0,10,-17.3205,0,23.4549,-18.7047,0,5.17638,-19.3185,0,18.7047,-23.4549,0,13.0165,-27.0291,0,6.67563,-29.2478,0,1.22465e-15,20,0,-18.7047,23.4549,0,-13.0165,27.0291,0,-6.67563,29.2478,0,8.49831e-15,30,0,6.67563,29.2478,0,13.0165,27.0291,0,18.7047,23.4549,0]);
IndexedFaceSet45.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet45;

Group17.children[4] = Shape42;

let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.USE = "_material0";
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let IndexedFaceSet50 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet50.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,7,6,8,-1,6,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,14,13,15,-1,13,16,15,-1,15,16,17,-1,17,16,18,-1,16,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,25,27,28,-1,27,29,28,-1,28,29,30,-1,28,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,35,37,38,-1,37,39,38,-1,38,39,40,-1,38,40,41,-1,40,18,41,-1,41,18,42,-1,18,20,42,-1,42,20,43,-1,44,24,23,-1,44,23,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,1,-1,44,1,0,-1]);
IndexedFaceSet50.solid = False;
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[-5.17638,19.3185,80,-23.4549,18.7047,80,-10,17.3205,80,-27.0291,13.0165,80,-14.1421,14.1421,80,-17.3205,10,80,-29.2478,6.67563,80,-19.3185,5.17638,80,-20,2.44929e-15,80,-30,1.69966e-14,80,-19.3185,-5.17638,80,-29.2478,-6.67563,80,-17.3205,-10,80,-27.0291,-13.0165,80,-14.1421,-14.1421,80,-10,-17.3205,80,-23.4549,-18.7047,80,-5.17638,-19.3185,80,-3.67394e-15,-20,80,-18.7047,-23.4549,80,-3.21563e-14,-30,80,-13.0165,-27.0291,80,-6.67563,-29.2478,80,23.4549,18.7047,80,5.17638,19.3185,80,27.0291,13.0165,80,10,17.3205,80,14.1421,14.1421,80,29.2478,6.67563,80,17.3205,10,80,19.3185,5.17638,80,30,0,80,20,0,80,29.2478,-6.67563,80,19.3185,-5.17638,80,27.0291,-13.0165,80,17.3205,-10,80,14.1421,-14.1421,80,23.4549,-18.7047,80,10,-17.3205,80,5.17638,-19.3185,80,18.7047,-23.4549,80,13.0165,-27.0291,80,6.67563,-29.2478,80,1.22465e-15,20,80,18.7047,23.4549,80,13.0165,27.0291,80,6.67563,29.2478,80,8.49831e-15,30,80,-6.67563,29.2478,80,-13.0165,27.0291,80,-18.7047,23.4549,80]);
IndexedFaceSet50.coord = Coordinate51;

Shape47.geometry = IndexedFaceSet50;

Group17.children[5] = Shape47;

Group16.children = new MFNode();

Group16.children[0] = Group17;

Group15.children = new MFNode();

Group15.children[0] = Group16;

Group14.children = new MFNode();

Group14.children[0] = Group15;

Transform13.children = new MFNode();

Transform13.children[0] = Group14;

browser.currentScene.children[11] = Transform13;

