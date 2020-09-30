let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
//A png image file for the cloud texture must be designated in the ecmascript node.
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "Main";
Viewpoint2.jump = False;
Viewpoint2.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint2.position = new SFVec3f(new float[50000,1000,42000]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Light House Tower";
Viewpoint3.jump = False;
Viewpoint3.orientation = new SFRotation(new float[0,1,0,1.3]);
Viewpoint3.position = new SFVec3f(new float[45000,1290,44000]);
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "centerWest";
Viewpoint4.jump = False;
Viewpoint4.orientation = new SFRotation(new float[0,1,0,2.5]);
Viewpoint4.position = new SFVec3f(new float[48000,1000,20000]);
browser.currentScene.children[2] = Viewpoint4;

let Background5 = browser.currentScene.createNode("Background");
Background5.groundColor = new MFColor(new float[0,0,1]);
Background5.skyColor = new MFColor(new float[0,0,1]);
Background5.transparency = 0;
browser.currentScene.children[3] = Background5;

let DirectionalLight6 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight6.ambientIntensity = 1;
DirectionalLight6.direction = new SFVec3f(new float[-1,0,0]);
DirectionalLight6.global = True;
browser.currentScene.children[4] = DirectionalLight6;

let Group7 = browser.currentScene.createNode("Group");
Group7.DEF = "Terrain";
Group7.bboxCenter = new SFVec3f(new float[0,0,0]);
Group7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform8 = browser.currentScene.createNode("Transform");
Transform8.scale = new SFVec3f(new float[50,50,50]);
Transform8.translation = new SFVec3f(new float[25000,0,25000]);
Transform8.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Inline9 = browser.currentScene.createNode("Inline");
Inline9.url = new MFString(new java.lang.String["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"]);
Inline9.bboxCenter = new SFVec3f(new float[0,0,0]);
Inline9.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform8.children = new MFNode();

Transform8.children[0] = Inline9;

Group7.children = new MFNode();

Group7.children[0] = Transform8;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform10.translation = new SFVec3f(new float[25000,0,25000]);
Transform10.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform10.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape11.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Rectangle2D12 = browser.currentScene.createNode("Rectangle2D");
Rectangle2D12.size = new SFVec2f(new float[77000,55000]);
Shape11.geometry = Rectangle2D12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"]);
Appearance13.texture = ImageTexture14;

Shape11.appearance = Appearance13;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

Group7.children[1] = Transform10;

browser.currentScene.children[5] = Group7;

let Group15 = browser.currentScene.createNode("Group");
Group15.DEF = "Placemarks";
Group15.bboxCenter = new SFVec3f(new float[0,0,0]);
Group15.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.scale = new SFVec3f(new float[50,50,50]);
Transform16.translation = new SFVec3f(new float[45000,30,44000]);
Transform16.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform16.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Inline17 = browser.currentScene.createNode("Inline");
Inline17.url = new MFString(new java.lang.String["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"]);
Inline17.bboxCenter = new SFVec3f(new float[0,0,0]);
Inline17.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Transform16.children = new MFNode();

Transform16.children[0] = Inline17;

Group15.children = new MFNode();

Group15.children[0] = Transform16;

browser.currentScene.children[6] = Group15;

let Group18 = browser.currentScene.createNode("Group");
Group18.DEF = "Clouds";
Group18.bboxCenter = new SFVec3f(new float[0,0,0]);
Group18.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "Cumulus";
Transform19.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Group18.children = new MFNode();

Group18.children[0] = Transform19;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "Cirrus";
Transform20.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform20.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Group18.children[1] = Transform20;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "Fog";
Transform21.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform21.bboxSize = new SFVec3f(new float[-1,-1,-1]);
Group18.children[2] = Transform21;

let DirectionalLight22 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight22.ambientIntensity = 1;
DirectionalLight22.color = new SFColor(new float[1,0,0]);
DirectionalLight22.direction = new SFVec3f(new float[-1,-1,0]);
DirectionalLight22.global = True;
Group18.children[3] = DirectionalLight22;

let X3DScript23 = browser.currentScene.createNode("X3DScript");
X3DScript23.DEF = "PixelScript";
X3DScript23.directOutput = True;
let field24 = browser.currentScene.createNode("field");
field24.name = "Cumulus";
field24.accessType = "initializeOnly";
field24.type = "SFNode";
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.USE = "Cumulus";
field24.children = new MFNode();

field24.children[0] = Transform25;

X3DScript23.field = new MFNode();

X3DScript23.field[0] = field24;

let field26 = browser.currentScene.createNode("field");
field26.name = "Cirrus";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
let Transform27 = browser.currentScene.createNode("Transform");
Transform27.USE = "Cirrus";
field26.children = new MFNode();

field26.children[0] = Transform27;

X3DScript23.field[1] = field26;

let field28 = browser.currentScene.createNode("field");
field28.name = "Fog";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
X3DScript23.field[2] = field28;

Group18.x3DScript[4] = X3DScript23;

browser.currentScene.children[7] = Group18;

