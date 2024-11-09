#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Wed, 05 Jul 2017 08:02:41 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V3.0.4, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Navigation/ViewpointJump.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Wed, 05 Jul 2017 08:10:01 GMT";
head1.meta[5] = meta7;

head = head1;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.position = new SFVec3f(new float[0,0,3.1]);
children = new MFNode();

children[0] = Viewpoint9;

TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "TimeSensor1";
TimeSensor10.cycleInterval = 3;
TimeSensor10.loop = True;
children[1] = TimeSensor10;

Transform Transform11 = createNode("Transform");
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Sphere Sphere15 = createNode("Sphere");
Shape12.geometry = Sphere15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

children[2] = Transform11;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.DEF = "Viewpoint1";
Viewpoint16.position = new SFVec3f(new float[0,0,10.2]);
children[3] = Viewpoint16;

Script Script17 = createNode("Script");
Script17.DEF = "Script1";
field field18 = createNode("field");
field18.name = "float1_in";
field18.accessType = "inputOnly";
field18.type = "SFFloat";
Script17.field = new MFNode();

Script17.field[0] = field18;

field field19 = createNode("field");
field19.name = "bool1_out";
field19.accessType = "outputOnly";
field19.type = "SFBool";
Script17.field[1] = field19;

field field20 = createNode("field");
field20.name = "mstring1_out";
field20.accessType = "outputOnly";
field20.type = "MFString";
Script17.field[2] = field20;


Script17.setSourceCode(`javascript:\n"+
"\n"+
" function float1_in(value)\n"+
"    {\n"+
"    // value  SFFloat\n"+
"    if (value > 0.90)\n"+
"        bool1_out = true;\n"+
"    mstring1_out = new MFString(value);\n"+
"    }`)
children[4] = Script17;

Transform Transform21 = createNode("Transform");
Transform21.translation = new SFVec3f(new float[-2.57105,0,0]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

Text Text25 = createNode("Text");
Text25.DEF = "Text1";
Text25.string = new MFString(new java.lang.String["0.6444690227508545"]);
Shape22.geometry = Text25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

children[5] = Transform21;

NavigationInfo NavigationInfo26 = createNode("NavigationInfo");
children[6] = NavigationInfo26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "TimeSensor1";
ROUTE27.fromField = "fraction_changed";
ROUTE27.toNode = "Script1";
ROUTE27.toField = "float1_in";
children[7] = ROUTE27;

ROUTE ROUTE28 = createNode("ROUTE");
ROUTE28.fromNode = "Script1";
ROUTE28.fromField = "bool1_out";
ROUTE28.toNode = "Viewpoint1";
ROUTE28.toField = "set_bind";
children[8] = ROUTE28;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromNode = "Script1";
ROUTE29.fromField = "mstring1_out";
ROUTE29.toNode = "Text1";
ROUTE29.toField = "set_string";
children[9] = ROUTE29;

}
