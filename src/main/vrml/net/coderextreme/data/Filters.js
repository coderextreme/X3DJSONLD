let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Filters.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.DEF = "NAV";
NavigationInfo3.type = new MFString(new java.lang.String["NONE"]);
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[0.2,0.2,0.2]);
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint5.position = new SFVec3f(new float[0,500,600]);
Viewpoint5.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "Audio1";
Transform6.translation = new SFVec3f(new float[-200,50,0]);
let Shape7 = browser.currentScene.createNode("Shape");
let Appearance8 = browser.currentScene.createNode("Appearance");
Appearance8.DEF = "audio_emit1";
let Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material9.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material9.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

let Sphere10 = browser.currentScene.createNode("Sphere");
Sphere10.radius = 30;
Shape7.geometry = Sphere10;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "Audio2";
Transform11.translation = new SFVec3f(new float[0,50,0]);
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
Appearance13.DEF = "audio_emit2";
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material14.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material14.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Sphere15 = browser.currentScene.createNode("Sphere");
Sphere15.radius = 30;
Shape12.geometry = Sphere15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

browser.currentScene.children[5] = Transform11;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "Audio3";
Transform16.translation = new SFVec3f(new float[200,50,0]);
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
Appearance18.DEF = "audio_emit3";
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material19.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material19.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let Sphere20 = browser.currentScene.createNode("Sphere");
Sphere20.radius = 30;
Shape17.geometry = Sphere20;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

browser.currentScene.children[6] = Transform16;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "AnimData";
Transform21.translation = new SFVec3f(new float[0,50,0]);
browser.currentScene.children[7] = Transform21;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "AnimDataBoxH";
Transform22.translation = new SFVec3f(new float[0,100,0]);
browser.currentScene.children[8] = Transform22;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "AnimDataBoxM";
Transform23.translation = new SFVec3f(new float[15,100,0]);
browser.currentScene.children[9] = Transform23;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "AnimDataBoxL";
Transform24.translation = new SFVec3f(new float[30,100,0]);
browser.currentScene.children[10] = Transform24;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "AnimDataBoxMM";
Transform25.translation = new SFVec3f(new float[-15,100,0]);
browser.currentScene.children[11] = Transform25;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "AnimDataBoxLM";
Transform26.translation = new SFVec3f(new float[-30,100,0]);
browser.currentScene.children[12] = Transform26;

let Transform27 = browser.currentScene.createNode("Transform");
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.DEF = "floor";
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material30.shininess = 0.8;
Material30.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Cylinder31 = browser.currentScene.createNode("Cylinder");
Cylinder31.radius = 500;
Shape28.geometry = Cylinder31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

browser.currentScene.children[13] = Transform27;

