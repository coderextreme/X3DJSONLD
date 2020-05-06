let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.version = "3.1";
X3D0.profile = "Full";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE","ANY"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "Donut";
ExternProtoDeclare3.url = new MFString(new java.lang.String["Figure31.6DonutPrototype.wrl#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.wrl#Donut","Figure31.6DonutPrototype.x3d#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.x3d#Donut"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "crossSectionRadius";
field4.type = "SFFloat";
field4.accessType = "initializeOnly";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "set_spineRadius";
field5.type = "SFFloat";
field5.accessType = "inputOnly";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "set_crossSectionRadius";
field6.type = "SFFloat";
field6.accessType = "inputOnly";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "spineResolution";
field7.type = "SFInt32";
field7.accessType = "initializeOnly";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "crossSectionResolution";
field8.type = "SFInt32";
field8.accessType = "initializeOnly";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "spineRadius";
field9.type = "SFFloat";
field9.accessType = "initializeOnly";
ExternProtoDeclare3.field[5] = field9;

browser.currentScene.children[1] = ExternProtoDeclare3;

let ExternProtoDeclare10 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare10.name = "LightOak";
ExternProtoDeclare10.url = new MFString(new java.lang.String["Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak"]);
let field11 = browser.currentScene.createNode("field");
field11.name = "textureTransform";
field11.type = "SFNode";
field11.accessType = "inputOutput";
ExternProtoDeclare10.field = new MFNode();

ExternProtoDeclare10.field[0] = field11;

browser.currentScene.children[2] = ExternProtoDeclare10;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.position = new SFVec3f(new float[0,7,12]);
Viewpoint12.orientation = new SFRotation(new float[1,0,0,-0.52]);
Viewpoint12.description = "Click to pick a size";
browser.currentScene.children[3] = Viewpoint12;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,2,0]);
let Shape14 = browser.currentScene.createNode("Shape");
let ProtoInstance15 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance15.name = "LightOak";
let fieldValue16 = browser.currentScene.createNode("fieldValue");
fieldValue16.name = "textureTransform";
let TextureTransform17 = browser.currentScene.createNode("TextureTransform");
TextureTransform17.center = new SFVec2f(new float[0,5]);
TextureTransform17.rotation = 0.758;
TextureTransform17.scale = new SFVec2f(new float[2,0.5]);
TextureTransform17.translation = new SFVec2f(new float[0.5,0]);
fieldValue16.children = new MFNode();

fieldValue16.children[0] = TextureTransform17;

ProtoInstance15.fieldValue = new MFNode();

ProtoInstance15.fieldValue[0] = fieldValue16;

Shape14.geometry = ProtoInstance15;

let ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "Donut";
let fieldValue19 = browser.currentScene.createNode("fieldValue");
fieldValue19.name = "crossSectionRadius";
fieldValue19.value = "1";
ProtoInstance18.fieldValue = new MFNode();

ProtoInstance18.fieldValue[0] = fieldValue19;

let fieldValue20 = browser.currentScene.createNode("fieldValue");
fieldValue20.name = "spineRadius";
fieldValue20.value = "2";
ProtoInstance18.fieldValue[1] = fieldValue20;

Shape14.geometry = ProtoInstance18;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

browser.currentScene.children[4] = Transform13;

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "Clock";
TimeSensor21.loop = True;
TimeSensor21.cycleInterval = 10;
browser.currentScene.children[5] = TimeSensor21;

let ScalarInterpolator22 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator22.DEF = "DonutThickness";
ScalarInterpolator22.key = new MFFloat(new float[0,0.4,0.5,0.9,1]);
ScalarInterpolator22.keyValue = new MFFloat(new float[0.75,1.25,1.25,0.75,0.75]);
browser.currentScene.children[6] = ScalarInterpolator22;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-2,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../Chapter17-Textures/icing.jpg","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter17-Textures/icing.jpg"]);
Appearance25.texture = ImageTexture26;

Shape24.appearance = Appearance25;

let ProtoInstance27 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance27.name = "Donut";
ProtoInstance27.DEF = "SpecialtyOfTheHouse";
let fieldValue28 = browser.currentScene.createNode("fieldValue");
fieldValue28.name = "crossSectionRadius";
fieldValue28.value = "0.5";
ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "spineRadius";
fieldValue29.value = "2";
ProtoInstance27.fieldValue[1] = fieldValue29;

Shape24.geometry = ProtoInstance27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.DEF = "StopSizeChanges";
Transform23.children[1] = TouchSensor30;

browser.currentScene.children[7] = Transform23;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "Clock";
ROUTE31.fromField = "fraction_changed";
ROUTE31.toNode = "DonutThickness";
ROUTE31.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "DonutThickness";
ROUTE32.fromField = "value_changed";
ROUTE32.toNode = "SpecialtyOfTheHouse";
ROUTE32.toField = "set_crossSectionRadius";
browser.currentScene.children[9] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "StopSizeChanges";
ROUTE33.fromField = "touchTime";
ROUTE33.toNode = "Clock";
ROUTE33.toField = "stopTime";
browser.currentScene.children[10] = ROUTE33;

