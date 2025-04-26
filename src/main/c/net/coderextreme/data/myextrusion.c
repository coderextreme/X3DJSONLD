#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "creator";
meta2.content = "John W Carlson";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "December 13 2015";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "modified";
meta4.content = "November 9 2024";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "title";
meta5.content = "myextrusion.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "beginnings of a force directed graph in 3D";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

head = head1;

Group Group10 = createNode("Group");
Shape Shape11 = createNode("Shape");
Extrusion Extrusion12 = createNode("Extrusion");
Extrusion12.DEF = "myextrusion";
Extrusion12.spine = new MFVec3f(new float[-50,-50,0,50,50,0]);
Extrusion12.creaseAngle = 0.785;
Extrusion12.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape11.geometry = Extrusion12;

Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[0,1,0]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Group10.children = new MFNode();

Group10.children[0] = Shape11;

TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "TourTime";
TimeSensor15.loop = True;
Group10.children[1] = TimeSensor15;

Script Script16 = createNode("Script");
Script16.DEF = "MoveCylinder";
field field17 = createNode("field");
field17.name = "set_cycle";
field17.accessType = "inputOnly";
field17.type = "SFTime";
Script16.field = new MFNode();

Script16.field[0] = field17;

field field18 = createNode("field");
field18.name = "spine";
field18.accessType = "inputOutput";
field18.type = "MFVec3f";
field18.value = "-50 -50 0 50 50 0";
Script16.field[1] = field18;


Script16.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"                        var tmpspine = new MFVec3f();\n"+
"			tmpspine[0] = endA;\n"+
"			tmpspine[1] = endB;\n"+
"                        spine = tmpspine;\n"+
"                }`)
Group10.children[2] = Script16;

ROUTE ROUTE19 = createNode("ROUTE");
ROUTE19.fromNode = "TourTime";
ROUTE19.fromField = "cycleTime";
ROUTE19.toNode = "MoveCylinder";
ROUTE19.toField = "set_cycle";
Group10.children[3] = ROUTE19;

ROUTE ROUTE20 = createNode("ROUTE");
ROUTE20.fromNode = "MoveCylinder";
ROUTE20.fromField = "spine_changed";
ROUTE20.toNode = "myextrusion";
ROUTE20.toField = "set_spine";
Group10.children[4] = ROUTE20;

children = new MFNode();

children[0] = Group10;

}
