#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
meta4.name = "title";
meta4.content = "extrusion.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "beginnings of a force directed graph in 3D";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[5] = meta7;

head = head1;

Group Group9 = createNode("Group");
Shape Shape10 = createNode("Shape");
Extrusion Extrusion11 = createNode("Extrusion");
Extrusion11.DEF = "extrusion";
Extrusion11.spine = new MFVec3f(new float[-50,-50,0,50,50,0]);
Extrusion11.creaseAngle = 0.785;
Extrusion11.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Shape10.geometry = Extrusion11;

Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.diffuseColor = new SFColor(new float[0,1,0]);
Appearance12.material = Material13;

Shape10.appearance = Appearance12;

Group9.children = new MFNode();

Group9.children[0] = Shape10;

TimeSensor TimeSensor14 = createNode("TimeSensor");
TimeSensor14.DEF = "TourTime";
TimeSensor14.loop = True;
Group9.children[1] = TimeSensor14;

Script Script15 = createNode("Script");
Script15.DEF = "MoveCylinder";
field field16 = createNode("field");
field16.name = "set_cycle";
field16.accessType = "inputOnly";
field16.type = "SFTime";
Script15.field = new MFNode();

Script15.field[0] = field16;

field field17 = createNode("field");
field17.name = "spine";
field17.accessType = "inputOutput";
field17.type = "MFVec3f";
field17.value = "-50 -50 0 50 50 0";
Script15.field[1] = field17;


Script15.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }`)
Group9.children[2] = Script15;

ROUTE ROUTE18 = createNode("ROUTE");
ROUTE18.fromNode = "TourTime";
ROUTE18.fromField = "cycleTime";
ROUTE18.toNode = "MoveCylinder";
ROUTE18.toField = "set_cycle";
Group9.children[3] = ROUTE18;

ROUTE ROUTE19 = createNode("ROUTE");
ROUTE19.fromNode = "MoveCylinder";
ROUTE19.fromField = "spine_changed";
ROUTE19.toNode = "extrusion";
ROUTE19.toField = "set_spine";
Group9.children[4] = ROUTE19;

children = new MFNode();

children[0] = Group9;

}
