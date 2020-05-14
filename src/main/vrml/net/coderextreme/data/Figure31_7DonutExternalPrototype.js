let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Figure31_7DonutExternalPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "Donut";
ExternProtoDeclare3.url = new MFString(new java.lang.String["Figure31_6DonutPrototype.wrl#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut","Figure31_6DonutPrototype.x3d#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "crossSectionRadius";
field4.accessType = "initializeOnly";
field4.type = "SFFloat";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "spineRadius";
field5.accessType = "initializeOnly";
field5.type = "SFFloat";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "crossSectionResolution";
field6.accessType = "initializeOnly";
field6.type = "SFInt32";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "spineResolution";
field7.accessType = "initializeOnly";
field7.type = "SFInt32";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "set_crossSectionRadius";
field8.accessType = "inputOnly";
field8.type = "SFFloat";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "set_spineRadius";
field9.accessType = "inputOnly";
field9.type = "SFFloat";
ExternProtoDeclare3.field[5] = field9;

browser.currentScene.children[1] = ExternProtoDeclare3;

let ExternProtoDeclare10 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare10.name = "LightOak";
ExternProtoDeclare10.url = new MFString(new java.lang.String["Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak"]);
let field11 = browser.currentScene.createNode("field");
field11.name = "textureTransform";
field11.accessType = "inputOutput";
field11.type = "SFNode";
ExternProtoDeclare10.field = new MFNode();

ExternProtoDeclare10.field[0] = field11;

browser.currentScene.children[2] = ExternProtoDeclare10;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.description = "Click to pick a size";
Viewpoint12.orientation = new SFRotation(new float[1,0,0,-0.52]);
Viewpoint12.position = new SFVec3f(new float[0,7,12]);
browser.currentScene.children[3] = Viewpoint12;

//Donut instances from prototypes
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,2,0]);
let Shape14 = browser.currentScene.createNode("Shape");
let ProtoInstance15 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance15.name = "Donut";
let fieldValue16 = browser.currentScene.createNode("fieldValue");
fieldValue16.name = "crossSectionRadius";
fieldValue16.value = "1";
ProtoInstance15.fieldValue = new MFNode();

ProtoInstance15.fieldValue[0] = fieldValue16;

let fieldValue17 = browser.currentScene.createNode("fieldValue");
fieldValue17.name = "spineRadius";
fieldValue17.value = "2";
ProtoInstance15.fieldValue[1] = fieldValue17;

Shape14.geometry = ProtoInstance15;

let ProtoInstance18 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance18.name = "LightOak";
let fieldValue19 = browser.currentScene.createNode("fieldValue");
fieldValue19.name = "textureTransform";
let TextureTransform20 = browser.currentScene.createNode("TextureTransform");
TextureTransform20.center = new SFVec2f(new float[0,5]);
TextureTransform20.rotation = 0.758;
TextureTransform20.scale = new SFVec2f(new float[2,0.5]);
TextureTransform20.translation = new SFVec2f(new float[0.5,0]);
fieldValue19.children = new MFNode();

fieldValue19.children[0] = TextureTransform20;

ProtoInstance18.fieldValue = new MFNode();

ProtoInstance18.fieldValue[0] = fieldValue19;

Shape14.geometry = ProtoInstance18;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

browser.currentScene.children[4] = Transform13;

//Hmmm, what size donut do you really want?
let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "Clock";
TimeSensor21.cycleInterval = 10;
TimeSensor21.loop = True;
browser.currentScene.children[5] = TimeSensor21;

let ScalarInterpolator22 = browser.currentScene.createNode("ScalarInterpolator");
ScalarInterpolator22.DEF = "DonutThickness";
ScalarInterpolator22.key = new MFFloat(new float[0,0.4,0.5,0.9,1]);
ScalarInterpolator22.keyValue = new MFFloat(new float[0.75,1.25,1.25,0.75,0.75]);
browser.currentScene.children[6] = ScalarInterpolator22;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-2,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let ProtoInstance25 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance25.name = "Donut";
ProtoInstance25.DEF = "SpecialtyOfTheHouse";
let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "crossSectionRadius";
fieldValue26.value = "0.5";
ProtoInstance25.fieldValue = new MFNode();

ProtoInstance25.fieldValue[0] = fieldValue26;

let fieldValue27 = browser.currentScene.createNode("fieldValue");
fieldValue27.name = "spineRadius";
fieldValue27.value = "2";
ProtoInstance25.fieldValue[1] = fieldValue27;

Shape24.geometry = ProtoInstance25;

let Appearance28 = browser.currentScene.createNode("Appearance");
let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../Chapter17Textures/icing.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg"]);
Appearance28.texture = ImageTexture29;

Shape24.appearance = Appearance28;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.DEF = "StopSizeChanges";
TouchSensor30.description = "touch to stop size changes";
Transform23.children[1] = TouchSensor30;

browser.currentScene.children[7] = Transform23;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "fraction_changed";
ROUTE31.fromNode = "Clock";
ROUTE31.toField = "set_fraction";
ROUTE31.toNode = "DonutThickness";
browser.currentScene.children[8] = ROUTE31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "value_changed";
ROUTE32.fromNode = "DonutThickness";
ROUTE32.toField = "set_crossSectionRadius";
ROUTE32.toNode = "SpecialtyOfTheHouse";
browser.currentScene.children[9] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromField = "touchTime";
ROUTE33.fromNode = "StopSizeChanges";
ROUTE33.toField = "stopTime";
ROUTE33.toNode = "Clock";
browser.currentScene.children[10] = ROUTE33;

