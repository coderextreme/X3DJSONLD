#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "bubs3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Tour around a prismatic sphere";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/bubs.x3d";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.position = new SFVec3f(new float[0,0,4]);
Viewpoint9.orientation = new SFRotation(new float[1,0,0,0]);
Viewpoint9.description = "Bubbles in action";
children[1] = Viewpoint9;

Background Background10 = createNode("Background");
Background10.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]);
Background10.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]);
Background10.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]);
Background10.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]);
Background10.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]);
Background10.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]);
children[2] = Background10;

Transform Transform11 = createNode("Transform");
Transform11.DEF = "DECLBubble_bubbleA";
Shape Shape12 = createNode("Shape");
Sphere Sphere13 = createNode("Sphere");
Sphere13.radius = 0.25;
Shape12.geometry = Sphere13;

Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,0,0]);
Material15.transparency = 0.2;
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Script Script16 = createNode("Script");
Script16.DEF = "DECLBubble_bubbleA_bounce";
field field17 = createNode("field");
field17.name = "scale";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "1 1 1";
Script16.field = new MFNode();

Script16.field[0] = field17;

field field18 = createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script16.field[1] = field18;

field field19 = createNode("field");
field19.name = "velocity";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script16.field[2] = field19;

field field20 = createNode("field");
field20.name = "scalvel";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0 0 0";
Script16.field[3] = field20;

field field21 = createNode("field");
field21.name = "set_fraction";
field21.accessType = "inputOnly";
field21.type = "SFFloat";
Script16.field[4] = field21;


Script16.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform11.children[1] = Script16;

TimeSensor TimeSensor22 = createNode("TimeSensor");
TimeSensor22.DEF = "DECLBubble_bubbleA_bubbleClock";
TimeSensor22.cycleInterval = 10;
TimeSensor22.loop = True;
Transform11.children[2] = TimeSensor22;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE23.fromField = "translation_changed";
ROUTE23.toNode = "DECLBubble_transform";
ROUTE23.toField = "set_translation";
Transform11.children[3] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "DECLBubble_bubbleA_bounce";
ROUTE24.fromField = "scale_changed";
ROUTE24.toNode = "DECLBubble_transform";
ROUTE24.toField = "set_scale";
Transform11.children[4] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "DECLBubble_bubbleA_bubbleClock";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "DECLBubble_bubbleA_bounce";
ROUTE25.toField = "set_fraction";
Transform11.children[5] = ROUTE25;

children[3] = Transform11;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "DECLBubble_bubbleB";
Shape Shape27 = createNode("Shape");
Sphere Sphere28 = createNode("Sphere");
Sphere28.radius = 0.25;
Shape27.geometry = Sphere28;

Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,0,0]);
Material30.transparency = 0.2;
Appearance29.material = Material30;

Shape27.appearance = Appearance29;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Script Script31 = createNode("Script");
Script31.DEF = "DECLBubble_bubbleB_bounce";
field field32 = createNode("field");
field32.name = "scale";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "1 1 1";
Script31.field = new MFNode();

Script31.field[0] = field32;

field field33 = createNode("field");
field33.name = "translation";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0 0 0";
Script31.field[1] = field33;

field field34 = createNode("field");
field34.name = "velocity";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0 0 0";
Script31.field[2] = field34;

field field35 = createNode("field");
field35.name = "scalvel";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0 0 0";
Script31.field[3] = field35;

field field36 = createNode("field");
field36.name = "set_fraction";
field36.accessType = "inputOnly";
field36.type = "SFFloat";
Script31.field[4] = field36;


Script31.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform26.children[1] = Script31;

TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "DECLBubble_bubbleB_bubbleClock";
TimeSensor37.cycleInterval = 10;
TimeSensor37.loop = True;
Transform26.children[2] = TimeSensor37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE38.fromField = "translation_changed";
ROUTE38.toNode = "DECLBubble_transform";
ROUTE38.toField = "set_translation";
Transform26.children[3] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "DECLBubble_bubbleB_bounce";
ROUTE39.fromField = "scale_changed";
ROUTE39.toNode = "DECLBubble_transform";
ROUTE39.toField = "set_scale";
Transform26.children[4] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "DECLBubble_bubbleB_bubbleClock";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "DECLBubble_bubbleB_bounce";
ROUTE40.toField = "set_fraction";
Transform26.children[5] = ROUTE40;

children[4] = Transform26;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "DECLBubble_bubbleC";
Shape Shape42 = createNode("Shape");
Sphere Sphere43 = createNode("Sphere");
Sphere43.radius = 0.25;
Shape42.geometry = Sphere43;

Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.diffuseColor = new SFColor(new float[1,0,0]);
Material45.transparency = 0.2;
Appearance44.material = Material45;

Shape42.appearance = Appearance44;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Script Script46 = createNode("Script");
Script46.DEF = "DECLBubble_bubbleC_bounce";
field field47 = createNode("field");
field47.name = "scale";
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.value = "1 1 1";
Script46.field = new MFNode();

Script46.field[0] = field47;

field field48 = createNode("field");
field48.name = "translation";
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.value = "0 0 0";
Script46.field[1] = field48;

field field49 = createNode("field");
field49.name = "velocity";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
Script46.field[2] = field49;

field field50 = createNode("field");
field50.name = "scalvel";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script46.field[3] = field50;

field field51 = createNode("field");
field51.name = "set_fraction";
field51.accessType = "inputOnly";
field51.type = "SFFloat";
Script46.field[4] = field51;


Script46.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform41.children[1] = Script46;

TimeSensor TimeSensor52 = createNode("TimeSensor");
TimeSensor52.DEF = "DECLBubble_bubbleC_bubbleClock";
TimeSensor52.cycleInterval = 10;
TimeSensor52.loop = True;
Transform41.children[2] = TimeSensor52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE53.fromField = "translation_changed";
ROUTE53.toNode = "DECLBubble_transform";
ROUTE53.toField = "set_translation";
Transform41.children[3] = ROUTE53;

ROUTE ROUTE54 = createNode("ROUTE");
ROUTE54.fromNode = "DECLBubble_bubbleC_bounce";
ROUTE54.fromField = "scale_changed";
ROUTE54.toNode = "DECLBubble_transform";
ROUTE54.toField = "set_scale";
Transform41.children[4] = ROUTE54;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "DECLBubble_bubbleC_bubbleClock";
ROUTE55.fromField = "fraction_changed";
ROUTE55.toNode = "DECLBubble_bubbleC_bounce";
ROUTE55.toField = "set_fraction";
Transform41.children[5] = ROUTE55;

children[5] = Transform41;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "DECLBubble_bubbleD";
Shape Shape57 = createNode("Shape");
Sphere Sphere58 = createNode("Sphere");
Sphere58.radius = 0.25;
Shape57.geometry = Sphere58;

Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.diffuseColor = new SFColor(new float[1,0,0]);
Material60.transparency = 0.2;
Appearance59.material = Material60;

Shape57.appearance = Appearance59;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

Script Script61 = createNode("Script");
Script61.DEF = "DECLBubble_bubbleD_bounce";
field field62 = createNode("field");
field62.name = "scale";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "1 1 1";
Script61.field = new MFNode();

Script61.field[0] = field62;

field field63 = createNode("field");
field63.name = "translation";
field63.accessType = "inputOutput";
field63.type = "SFVec3f";
field63.value = "0 0 0";
Script61.field[1] = field63;

field field64 = createNode("field");
field64.name = "velocity";
field64.accessType = "inputOutput";
field64.type = "SFVec3f";
field64.value = "0 0 0";
Script61.field[2] = field64;

field field65 = createNode("field");
field65.name = "scalvel";
field65.accessType = "inputOutput";
field65.type = "SFVec3f";
field65.value = "0 0 0";
Script61.field[3] = field65;

field field66 = createNode("field");
field66.name = "set_fraction";
field66.accessType = "inputOnly";
field66.type = "SFFloat";
Script61.field[4] = field66;


Script61.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform56.children[1] = Script61;

TimeSensor TimeSensor67 = createNode("TimeSensor");
TimeSensor67.DEF = "DECLBubble_bubbleD_bubbleClock";
TimeSensor67.cycleInterval = 10;
TimeSensor67.loop = True;
Transform56.children[2] = TimeSensor67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE68.fromField = "translation_changed";
ROUTE68.toNode = "DECLBubble_transform";
ROUTE68.toField = "set_translation";
Transform56.children[3] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "DECLBubble_bubbleD_bounce";
ROUTE69.fromField = "scale_changed";
ROUTE69.toNode = "DECLBubble_transform";
ROUTE69.toField = "set_scale";
Transform56.children[4] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "DECLBubble_bubbleD_bubbleClock";
ROUTE70.fromField = "fraction_changed";
ROUTE70.toNode = "DECLBubble_bubbleD_bounce";
ROUTE70.toField = "set_fraction";
Transform56.children[5] = ROUTE70;

children[6] = Transform56;

}
