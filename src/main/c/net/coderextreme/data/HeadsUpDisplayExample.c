#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HeadsUpDisplayExample.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Leonard Daly and Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "15 July 2006";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "24 October 2016";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "HeadsUpDisplayPrototype.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "http://X3dGraphics.com";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "rights";
meta10.content = "Copyright 2006, Daly Realism and Don Brutzman";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "subject";
meta11.content = "X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

//Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n
ExternProtoDeclare ExternProtoDeclare16 = createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "HeadsUpDisplay";
ExternProtoDeclare16.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location";
ExternProtoDeclare16.url = new MFString(new java.lang.String["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]);
field field17 = createNode("field");
field17.name = "screenOffset";
field17.accessType = "inputOutput";
field17.appinfo = "offset position for HUD relative to current view location, default 0 0 -5";
field17.type = "SFVec3f";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

field field18 = createNode("field");
field18.name = "children";
field18.accessType = "inputOutput";
field18.appinfo = "X3D content positioned at HUD offset";
field18.type = "MFNode";
ExternProtoDeclare16.field[1] = field18;

field field19 = createNode("field");
field19.name = "position_changed";
field19.accessType = "outputOnly";
field19.appinfo = "HUD position update (in world coordinates) relative to original location";
field19.type = "SFVec3f";
ExternProtoDeclare16.field[2] = field19;

field field20 = createNode("field");
field20.name = "orientation_changed";
field20.accessType = "outputOnly";
field20.appinfo = "HUD orientation update relative to original location";
field20.type = "SFRotation";
ExternProtoDeclare16.field[3] = field20;

children = new MFNode();

children[0] = ExternProtoDeclare16;

Background Background21 = createNode("Background");
Background21.DEF = "SandyShallowBottom";
Background21.groundAngle = new MFFloat(new float[0.05,1.52,1.56,1.5707]);
Background21.groundColor = new MFColor(new float[0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4]);
Background21.skyAngle = new MFFloat(new float[0.04,0.05,0.1,1.309,1.57]);
Background21.skyColor = new MFColor(new float[0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9]);
children[1] = Background21;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.description = "Heads-up display (HUD)";
children[2] = Viewpoint22;

//ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence
ProtoInstance ProtoInstance23 = createNode("ProtoInstance");
ProtoInstance23.name = "HeadsUpDisplay";
ProtoInstance23.DEF = "HeadsUpDisplayInstance";
//example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view
fieldValue fieldValue24 = createNode("fieldValue");
fieldValue24.name = "screenOffset";
fieldValue24.value = "-0.75 1 -5";
ProtoInstance23.fieldValue = new MFNode();

ProtoInstance23.fieldValue[0] = fieldValue24;

fieldValue fieldValue25 = createNode("fieldValue");
fieldValue25.name = "children";
Shape Shape26 = createNode("Shape");
Text Text27 = createNode("Text");
Text27.string = new MFString(new java.lang.String["HUD text stays fixed","while user navigates"]);
FontStyle FontStyle28 = createNode("FontStyle");
FontStyle28.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle28.size = 0.3;
Text27.fontStyle = FontStyle28;

Shape26.geometry = Text27;

Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.diffuseColor = new SFColor(new float[0.894118,0.819608,1]);
Appearance29.material = Material30;

Shape26.appearance = Appearance29;

fieldValue25.children = new MFNode();

fieldValue25.children[0] = Shape26;

ProtoInstance23.fieldValue[1] = fieldValue25;

children[3] = ProtoInstance23;

Inline Inline31 = createNode("Inline");
Inline31.url = new MFString(new java.lang.String["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"]);
children[4] = Inline31;

}
