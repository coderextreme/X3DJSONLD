var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n
ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "HeadsUpDisplay";
ExternProtoDeclare2.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location";
ExternProtoDeclare2.url = ["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"];
field3 = browser.currentScene.createNode("field");
field3.name = "screenOffset";
field3.accessType = "inputOutput";
field3.appinfo = "offset position for HUD relative to current view location, default 0 0 -5";
field3.type = "SFVec3f";
ExternProtoDeclare2.field = [];

ExternProtoDeclare2.field[0] = field3;

field4 = browser.currentScene.createNode("field");
field4.name = "children";
field4.accessType = "inputOutput";
field4.appinfo = "X3D content positioned at HUD offset";
field4.type = "MFNode";
ExternProtoDeclare2.field[1] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "position_changed";
field5.accessType = "outputOnly";
field5.appinfo = "HUD position update (in world coordinates) relative to original location";
field5.type = "SFVec3f";
ExternProtoDeclare2.field[2] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "orientation_changed";
field6.accessType = "outputOnly";
field6.appinfo = "HUD orientation update relative to original location";
field6.type = "SFRotation";
ExternProtoDeclare2.field[3] = field6;

browser.currentScene.children = [];

browser.currentScene.children[0] = ExternProtoDeclare2;

Background7 = browser.currentScene.createNode("Background");
Background7.DEF = "SandyShallowBottom";
Background7.groundAngle = [0.05,1.52,1.56,1.5707];
Background7.groundColor = [0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4];
Background7.skyAngle = [0.04,0.05,0.1,1.309,1.57];
Background7.skyColor = [0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9];
browser.currentScene.children[1] = Background7;

Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.description = "Heads-up display (HUD)";
browser.currentScene.children[2] = Viewpoint8;

//ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence
ProtoInstance9 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance9.name = "HeadsUpDisplay";
ProtoInstance9.DEF = "HeadsUpDisplayInstance";
//example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view
fieldValue10 = browser.currentScene.createNode("fieldValue");
fieldValue10.name = "screenOffset";
fieldValue10.value = "-0.75 1 -5";
ProtoInstance9.fieldValue = [];

ProtoInstance9.fieldValue[0] = fieldValue10;

fieldValue11 = browser.currentScene.createNode("fieldValue");
fieldValue11.name = "children";
Shape12 = browser.currentScene.createNode("Shape");
Text13 = browser.currentScene.createNode("Text");
Text13.string = ["HUD text stays fixed","while user navigates"];
FontStyle14 = browser.currentScene.createNode("FontStyle");
FontStyle14.justify = ["MIDDLE","MIDDLE"];
FontStyle14.size = 0.3;
Text13.fontStyle = FontStyle14;

Shape12.geometry = Text13;

Appearance15 = browser.currentScene.createNode("Appearance");
Material16 = browser.currentScene.createNode("Material");
Material16.diffuseColor = [0.894118,0.819608,1];
Appearance15.material = Material16;

Shape12.appearance = Appearance15;

fieldValue11.children = [];

fieldValue11.children[0] = Shape12;

ProtoInstance9.fieldValue[1] = fieldValue11;

browser.currentScene.children[3] = ProtoInstance9;

Inline17 = browser.currentScene.createNode("Inline");
Inline17.url = ["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"];
browser.currentScene.children[4] = Inline17;

