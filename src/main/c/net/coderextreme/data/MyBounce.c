#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "MyBounce.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "3 prismatic spheres";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/SFVec3f.x3d";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "transform";
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
Material Material12 = createNode("Material");
Material12.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material12.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

Sphere Sphere13 = createNode("Sphere");
Shape10.geometry = Sphere13;

Transform9.children = new MFNode();

Transform9.children[0] = Shape10;

children[1] = Transform9;

Script Script14 = createNode("Script");
Script14.DEF = "Bounce2";
field field15 = createNode("field");
field15.name = "set_translation";
field15.accessType = "inputOnly";
field15.type = "SFVec3f";
field15.value = "0 0 0";
Script14.field = new MFNode();

Script14.field[0] = field15;

field field16 = createNode("field");
field16.name = "translation_changed";
field16.accessType = "outputOnly";
field16.type = "SFVec3f";
field16.value = "0 0 0";
Script14.field[1] = field16;

field field17 = createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
Script14.field[2] = field17;

field field18 = createNode("field");
field18.name = "velocity";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script14.field[3] = field18;

field field19 = createNode("field");
field19.name = "set_fraction";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script14.field[4] = field19;


Script14.setSourceCode(`ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}`)
children[2] = Script14;

TimeSensor TimeSensor20 = createNode("TimeSensor");
TimeSensor20.DEF = "TourTime";
TimeSensor20.cycleInterval = 0.15;
TimeSensor20.loop = True;
children[3] = TimeSensor20;

ROUTE ROUTE21 = createNode("ROUTE");
ROUTE21.fromNode = "TourTime";
ROUTE21.fromField = "cycleTime";
ROUTE21.toNode = "Bounce2";
ROUTE21.toField = "set_fraction";
children[4] = ROUTE21;

ROUTE ROUTE22 = createNode("ROUTE");
ROUTE22.fromNode = "Bounce2";
ROUTE22.fromField = "translation_changed";
ROUTE22.toNode = "transform";
ROUTE22.toField = "set_translation";
children[5] = ROUTE22;

}
