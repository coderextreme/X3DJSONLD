#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Geospatial";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "geobubbles.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "manual";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/geobubbles.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "geo bubbles";
head1.meta[5] = meta7;

head = head1;

//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
GeoViewpoint GeoViewpoint9 = createNode("GeoViewpoint");
GeoViewpoint9.DEF = "Tour";
GeoViewpoint9.position = new SFVec3d(new double[0,0,4]);
GeoViewpoint9.orientation = new SFRotation(new float[1,0,0,0]);
GeoViewpoint9.description = "Tour Views";
children = new MFNode();

children[0] = GeoViewpoint9;

Background Background10 = createNode("Background");
Background10.backUrl = new MFString(new java.lang.String["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]);
Background10.bottomUrl = new MFString(new java.lang.String["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]);
Background10.frontUrl = new MFString(new java.lang.String["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]);
Background10.leftUrl = new MFString(new java.lang.String["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]);
Background10.rightUrl = new MFString(new java.lang.String["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]);
Background10.topUrl = new MFString(new java.lang.String["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]);
children[1] = Background10;

Transform Transform11 = createNode("Transform");
Shape Shape12 = createNode("Shape");
Sphere Sphere13 = createNode("Sphere");
Shape12.geometry = Sphere13;

Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material15.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

children[2] = Transform11;

TimeSensor TimeSensor16 = createNode("TimeSensor");
TimeSensor16.DEF = "TourTime";
TimeSensor16.cycleInterval = 5;
TimeSensor16.loop = True;
children[3] = TimeSensor16;

GeoPositionInterpolator GeoPositionInterpolator17 = createNode("GeoPositionInterpolator");
GeoPositionInterpolator17.DEF = "TourPosition";
GeoPositionInterpolator17.key = new MFFloat(new float[0,1]);
GeoPositionInterpolator17.keyValue = new MFVec3d(new double[0.0015708,0,4,0,0.0015708,4]);
children[4] = GeoPositionInterpolator17;

Script Script18 = createNode("Script");
Script18.DEF = "RandomTourTime";
field field19 = createNode("field");
field19.name = "set_cycle";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script18.field = new MFNode();

Script18.field[0] = field19;

field field20 = createNode("field");
field20.name = "val";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.value = "0";
Script18.field[1] = field20;

field field21 = createNode("field");
field21.name = "positions";
field21.accessType = "inputOutput";
field21.type = "MFVec3d";
field21.value = "0.0015708 0 4 0 0.0015708 4";
Script18.field[2] = field21;

field field22 = createNode("field");
field22.name = "position";
field22.accessType = "inputOutput";
field22.type = "MFVec3d";
field22.value = "0.0015708 0 4 0 0.0015708 4";
Script18.field[3] = field22;


Script18.setSourceCode(`ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }`)
children[5] = Script18;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "TourTime";
ROUTE23.fromField = "cycleTime";
ROUTE23.toNode = "RandomTourTime";
ROUTE23.toField = "set_cycle";
children[6] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "RandomTourTime";
ROUTE24.fromField = "position";
ROUTE24.toNode = "TourPosition";
ROUTE24.toField = "keyValue";
children[7] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "TourTime";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "TourPosition";
ROUTE25.toField = "set_fraction";
children[8] = ROUTE25;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "TourPosition";
ROUTE26.fromField = "geovalue_changed";
ROUTE26.toNode = "Tour";
ROUTE26.toField = "set_position";
children[9] = ROUTE26;

}
