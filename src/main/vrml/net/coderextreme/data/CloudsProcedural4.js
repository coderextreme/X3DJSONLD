let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "CloudsProcedural4.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Capt Darren W. Murphy";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "1 November 2007";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "14 January 2014";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.html";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "../../license.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "TODO";
meta10.content = "fix links";
head1.meta[8] = meta10;

head = head1;

//A png image file for the cloud texture must be designated in the ecmascript node.
let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.description = "Main";
Viewpoint12.jump = False;
Viewpoint12.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint12.position = new SFVec3f(new float[50000,1000,42000]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.description = "Light House Tower";
Viewpoint13.jump = False;
Viewpoint13.orientation = new SFRotation(new float[0,1,0,1.3]);
Viewpoint13.position = new SFVec3f(new float[45000,1290,44000]);
browser.currentScene.children[1] = Viewpoint13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.description = "centerWest";
Viewpoint14.jump = False;
Viewpoint14.orientation = new SFRotation(new float[0,1,0,2.5]);
Viewpoint14.position = new SFVec3f(new float[48000,1000,20000]);
browser.currentScene.children[2] = Viewpoint14;

let Background15 = browser.currentScene.createNode("Background");
Background15.groundColor = new MFColor(new float[0,0,1]);
Background15.skyColor = new MFColor(new float[0,0,1]);
browser.currentScene.children[3] = Background15;

let DirectionalLight16 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight16.ambientIntensity = 1;
DirectionalLight16.direction = new SFVec3f(new float[-1,0,0]);
DirectionalLight16.global = True;
browser.currentScene.children[4] = DirectionalLight16;

let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "Terrain";
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.scale = new SFVec3f(new float[50,50,50]);
Transform18.translation = new SFVec3f(new float[25000,0,25000]);
let Inline19 = browser.currentScene.createNode("Inline");
Inline19.url = new MFString(new java.lang.String["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"]);
Transform18.children = new MFNode();

Transform18.children[0] = Inline19;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform20.translation = new SFVec3f(new float[25000,0,25000]);
let Shape21 = browser.currentScene.createNode("Shape");
let Rectangle2D22 = browser.currentScene.createNode("Rectangle2D");
Rectangle2D22.size = new SFVec2f(new float[77000,55000]);
Shape21.geometry = Rectangle2D22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"]);
Appearance23.texture = ImageTexture24;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

Group17.children[1] = Transform20;

browser.currentScene.children[5] = Group17;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "Placemarks";
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.scale = new SFVec3f(new float[50,50,50]);
Transform26.translation = new SFVec3f(new float[45000,30,44000]);
let Inline27 = browser.currentScene.createNode("Inline");
Inline27.url = new MFString(new java.lang.String["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"]);
Transform26.children = new MFNode();

Transform26.children[0] = Inline27;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

browser.currentScene.children[6] = Group25;

let Group28 = browser.currentScene.createNode("Group");
Group28.DEF = "Clouds";
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "Cumulus";
Group28.children = new MFNode();

Group28.children[0] = Transform29;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "Cirrus";
Group28.children[1] = Transform30;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "Fog";
Group28.children[2] = Transform31;

let Script32 = browser.currentScene.createNode("Script");
Script32.DEF = "PixelScript";
Script32.directOutput = True;
let field33 = browser.currentScene.createNode("field");
field33.name = "Cumulus";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.USE = "Cumulus";
field33.children = new MFNode();

field33.children[0] = Transform34;

Script32.field = new MFNode();

Script32.field[0] = field33;

let field35 = browser.currentScene.createNode("field");
field35.name = "Cirrus";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
let Transform36 = browser.currentScene.createNode("Transform");
Transform36.USE = "Cirrus";
field35.children = new MFNode();

field35.children[0] = Transform36;

Script32.field[1] = field35;

let field37 = browser.currentScene.createNode("field");
field37.name = "Fog";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
Script32.field[2] = field37;

let #sourceCode38 = browser.currentScene.createNode("#sourceCode");
Script32.#sourceCode[3] = #sourceCode38;

Group28.children[3] = Script32;

let DirectionalLight39 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight39.ambientIntensity = 1;
DirectionalLight39.color = new SFColor(new float[1,0,0]);
DirectionalLight39.direction = new SFVec3f(new float[-1,-1,0]);
DirectionalLight39.global = True;
Group28.children[4] = DirectionalLight39;

browser.currentScene.children[7] = Group28;

