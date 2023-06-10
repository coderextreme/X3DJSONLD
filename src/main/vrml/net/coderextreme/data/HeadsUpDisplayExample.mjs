let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HeadsUpDisplayExample.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Leonard Daly and Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "15 July 2006";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "24 October 2016";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "HeadsUpDisplayPrototype.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "http://X3dGraphics.com";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "rights";
meta10.content = "Copyright 2006, Daly Realism and Don Brutzman";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "subject";
meta11.content = "X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "identifier";
meta12.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

//Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n
let ExternProtoDeclare16 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "HeadsUpDisplay";
ExternProtoDeclare16.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location";
ExternProtoDeclare16.url = new MFString(new java.lang.String["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]);
let field17 = browser.currentScene.createNode("field");
field17.name = "screenOffset";
field17.accessType = "inputOutput";
field17.appinfo = "offset position for HUD relative to current view location, default 0 0 -5";
field17.type = "SFVec3f";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "children";
field18.accessType = "inputOutput";
field18.appinfo = "X3D content positioned at HUD offset";
field18.type = "MFNode";
ExternProtoDeclare16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "position_changed";
field19.accessType = "outputOnly";
field19.appinfo = "HUD position update (in world coordinates) relative to original location";
field19.type = "SFVec3f";
ExternProtoDeclare16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "orientation_changed";
field20.accessType = "outputOnly";
field20.appinfo = "HUD orientation update relative to original location";
field20.type = "SFRotation";
ExternProtoDeclare16.field[3] = field20;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare16;

let Background21 = browser.currentScene.createNode("Background");
Background21.DEF = "SandyShallowBottom";
Background21.groundAngle = new MFFloat(new float[0.05,1.52,1.56,1.5707]);
Background21.groundColor = new MFColor(new float[0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4]);
Background21.skyAngle = new MFFloat(new float[0.04,0.05,0.1,1.309,1.57]);
Background21.skyColor = new MFColor(new float[0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9]);
browser.currentScene.children[1] = Background21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "Heads-up display (HUD)";
browser.currentScene.children[2] = Viewpoint22;

//ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence
let ProtoInstance23 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance23.name = "HeadsUpDisplay";
ProtoInstance23.DEF = "HeadsUpDisplayInstance";
//example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view
let fieldValue24 = browser.currentScene.createNode("fieldValue");
fieldValue24.name = "screenOffset";
fieldValue24.value = "-0.75 1 -5";
ProtoInstance23.fieldValue = new MFNode();

ProtoInstance23.fieldValue[0] = fieldValue24;

let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "children";
let Shape26 = browser.currentScene.createNode("Shape");
let Text27 = browser.currentScene.createNode("Text");
Text27.string = new MFString(new java.lang.String["HUD text stays fixed","while user navigates"]);
let FontStyle28 = browser.currentScene.createNode("FontStyle");
FontStyle28.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle28.size = 0.3;
Text27.fontStyle = FontStyle28;

Shape26.geometry = Text27;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[0.894118,0.819608,1]);
Appearance29.material = Material30;

Shape26.appearance = Appearance29;

fieldValue25.children = new MFNode();

fieldValue25.children[0] = Shape26;

ProtoInstance23.fieldValue[1] = fieldValue25;

browser.currentScene.children[3] = ProtoInstance23;

let Inline31 = browser.currentScene.createNode("Inline");
Inline31.url = new MFString(new java.lang.String["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"]);
browser.currentScene.children[4] = Inline31;

