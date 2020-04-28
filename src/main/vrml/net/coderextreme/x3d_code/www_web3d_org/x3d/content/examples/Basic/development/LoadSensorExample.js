let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//Do not copy this ExternProtoDeclare, it is used for providing automatic support in X3dToVrml97.xslt and X3D-Edit
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "LoadSensorExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "LoadSensor";
ExternProtoDeclare3.appinfo = "LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.";
ExternProtoDeclare3.documentation = "https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor";
ExternProtoDeclare3.url = new MFString(new java.lang.String["LoadSensorPrototype.wrl#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.wrl#LoadSensor","LoadSensorPrototype.x3d#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d#LoadSensor"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "enabled";
field4.accessType = "inputOutput";
field4.type = "SFBool";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "timeOut";
field5.accessType = "inputOutput";
field5.type = "SFTime";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "watchList";
field6.accessType = "initializeOnly";
field6.type = "MFNode";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "set_watchList";
field7.accessType = "inputOnly";
field7.type = "MFNode";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "isActive";
field8.accessType = "outputOnly";
field8.type = "SFBool";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "isLoaded";
field9.accessType = "outputOnly";
field9.type = "SFBool";
ExternProtoDeclare3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "loadTime";
field10.accessType = "outputOnly";
field10.type = "SFTime";
ExternProtoDeclare3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "progress";
field11.accessType = "outputOnly";
field11.type = "SFFloat";
ExternProtoDeclare3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "metadata";
field12.accessType = "initializeOnly";
field12.type = "SFNode";
ExternProtoDeclare3.field[8] = field12;

browser.currentScene.children[1] = ExternProtoDeclare3;

let Group13 = browser.currentScene.createNode("Group");
let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.DEF = "NotLoadedView";
Viewpoint14.description = "Not loaded texture";
Viewpoint14.position = new SFVec3f(new float[0,0,6]);
Group13.children = new MFNode();

Group13.children[0] = Viewpoint14;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.DEF = "ActiveView";
Viewpoint15.description = "Loading textures";
Group13.children[1] = Viewpoint15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.DEF = "LoadedView";
Viewpoint16.description = "Texture loading complete";
Viewpoint16.orientation = new SFRotation(new float[0,1,0,3.14159]);
Viewpoint16.position = new SFVec3f(new float[0,0,-10]);
Group13.children[2] = Viewpoint16;

let Group17 = browser.currentScene.createNode("Group");
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[-1,0,0]);
let Shape19 = browser.currentScene.createNode("Shape");
let Sphere20 = browser.currentScene.createNode("Sphere");
Shape19.geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.DEF = "EarthImage";
ImageTexture22.url = new MFString(new java.lang.String["earth-topo.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]);
Appearance21.texture = ImageTexture22;

Shape19.appearance = Appearance21;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[1,0,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Box25 = browser.currentScene.createNode("Box");
Shape24.geometry = Box25;

let Appearance26 = browser.currentScene.createNode("Appearance");
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.DEF = "JavaBoardImage";
ImageTexture27.url = new MFString(new java.lang.String["JavaBoardSmileForTheCamera.jpg","https://www.web3d.org/x3d/content/examples/Basic/development/JavaBoardSmileForTheCamera.jpg"]);
Appearance26.texture = ImageTexture27;

Shape24.appearance = Appearance26;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Group17.children[1] = Transform23;

Group13.children[3] = Group17;

let LoadSensor28 = browser.currentScene.createNode("LoadSensor");
LoadSensor28.DEF = "Loader";
LoadSensor28.timeOut = 4;
let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.USE = "EarthImage";
LoadSensor28.watchList = new MFNode();

LoadSensor28.watchList[0] = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.USE = "JavaBoardImage";
LoadSensor28.watchList[1] = ImageTexture30;

Group13.children[4] = LoadSensor28;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "isActive";
ROUTE31.fromNode = "Loader";
ROUTE31.toField = "set_bind";
ROUTE31.toNode = "ActiveView";
Group13.children[5] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "isLoaded";
ROUTE32.fromNode = "Loader";
ROUTE32.toField = "set_bind";
ROUTE32.toNode = "LoadedView";
Group13.children[6] = ROUTE32;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,0,7]);
let Shape34 = browser.currentScene.createNode("Shape");
let Text35 = browser.currentScene.createNode("Text");
Text35.string = new MFString(new java.lang.String["LoadSensor active"]);
let FontStyle36 = browser.currentScene.createNode("FontStyle");
FontStyle36.DEF = "Font";
FontStyle36.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle36.size = 0.5;
Text35.fontStyle = FontStyle36;

Shape34.geometry = Text35;

let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.8,0.5,0.1]);
Appearance37.material = Material38;

Shape34.appearance = Appearance37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Group13.children[7] = Transform33;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform39.translation = new SFVec3f(new float[0,0,-7]);
let Shape40 = browser.currentScene.createNode("Shape");
let Text41 = browser.currentScene.createNode("Text");
Text41.string = new MFString(new java.lang.String["LoadSensor success"]);
let FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.USE = "Font";
Text41.fontStyle = FontStyle42;

Shape40.geometry = Text41;

let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.1,0.5,0.1]);
Appearance43.material = Material44;

Shape40.appearance = Appearance43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Group13.children[8] = Transform39;

browser.currentScene.children[2] = Group13;

