#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 08 Oct 2015 11:03:48 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V2.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Examples/Misc/torusbreath2.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 03 Oct 2016 12:49:26 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "torusbreath2";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "NavigationInfo";
MetadataSet11.DEF = "NavigationInfo";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataString MetadataString12 = createNode("MetadataString");
MetadataString12.name = "type";
MetadataString12.DEF = "type";
MetadataString12.reference = "http://titania.create3000.de";
MetadataString12.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataString12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Viewpoint";
MetadataSet13.DEF = "Viewpoint";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "position";
MetadataDouble14.DEF = "position";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[1,162,268]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[-1,0,0,0.573000073432922]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[0,0,0]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Selection";
MetadataSet17.DEF = "Selection";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "children";
MetadataSet18.DEF = "children";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataSet18;

MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "previous";
MetadataSet19.DEF = "previous";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataSet17.value[1] = MetadataSet19;

MetadataSet10.value[2] = MetadataSet17;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "entry";
Viewpoint20.description = "entry";
Viewpoint20.position = new SFVec3f(new float[1,162,268]);
Viewpoint20.orientation = new SFRotation(new float[-1,0,0,0.573]);
Viewpoint20.fieldOfView = 0.785;
children[1] = Viewpoint20;

NavigationInfo NavigationInfo21 = createNode("NavigationInfo");
NavigationInfo21.DEF = "Examine";
NavigationInfo21.type = new MFString(new java.lang.String["EXAMINE"]);
NavigationInfo21.speed = 5;
children[2] = NavigationInfo21;

TimeSensor TimeSensor22 = createNode("TimeSensor");
TimeSensor22.DEF = "TimeSensor01-TIMER";
TimeSensor22.cycleInterval = 1.33;
TimeSensor22.loop = True;
TimeSensor22.startTime = 1;
children[3] = TimeSensor22;

Script Script23 = createNode("Script");
Script23.DEF = "TimeSensor01-SCRIPT";
field field24 = createNode("field");
field24.name = "fractionIn";
field24.accessType = "inputOnly";
field24.type = "SFFloat";
Script23.field = new MFNode();

Script23.field[0] = field24;

field field25 = createNode("field");
field25.name = "fractionOut";
field25.accessType = "outputOnly";
field25.type = "SFFloat";
Script23.field[1] = field25;


Script23.setSourceCode(`vrmlscript:\n"+
"\n"+
"    function fractionIn(i) {\n"+
"\n"+
"    fractionOut = 0.4 * i;\n"+
"\n"+
"  }`)
children[4] = Script23;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.DEF = "closeup";
Viewpoint26.description = "closeup";
Viewpoint26.position = new SFVec3f(new float[0,190,0.0000103]);
Viewpoint26.orientation = new SFRotation(new float[-0.76193400937255,-0.457961005633378,-0.457961005633378,1.84]);
Viewpoint26.fieldOfView = 0.785;
children[5] = Viewpoint26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.DEF = "sideview";
Viewpoint27.description = "sideview";
Viewpoint27.position = new SFVec3f(new float[0,-60,0]);
Viewpoint27.orientation = new SFRotation(new float[0.258013964510698,-0.931051871935686,0.258013964510698,1.64]);
Viewpoint27.fieldOfView = 0.785;
children[6] = Viewpoint27;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "Torus01";
Transform28.translation = new SFVec3f(new float[0,14.5827,0]);
Transform28.rotation = new SFRotation(new float[-0.707106781186548,0,-0.707106781186548,3.14]);
Transform28.scale = new SFVec3f(new float[1.65058,1,1.65058]);
TimeSensor TimeSensor29 = createNode("TimeSensor");
TimeSensor29.DEF = "Torus01-TIMER";
TimeSensor29.cycleInterval = 3.33;
Transform28.children = new MFNode();

Transform28.children[0] = TimeSensor29;

PositionInterpolator PositionInterpolator30 = createNode("PositionInterpolator");
PositionInterpolator30.DEF = "Torus01-POS-INTERP";
PositionInterpolator30.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]);
PositionInterpolator30.keyValue = new MFVec3f(new float[0,0,0,0,3.8,0,0,7.2,0,0,10.2,0,0,12.8,0,0,15,0,0,16.8,0,0,18.2,0,0,19.2,0,0,19.8,0,0,20,0,0,19.6,0,0,18.6,0,0,16.9,0,0,14.9,0,0,12.5,0,0,9.92,0,0,7.26,0,0,4.64,0,0,2.18,0,0,0,0,0,-2.18,0,0,-4.64,0,0,-7.26,0,0,-9.92,0,0,-12.5,0,0,-14.9,0,0,-16.9,0,0,-18.6,0,0,-19.6,0,0,-20,0,0,-19.8,0,0,-19.2,0,0,-18.2,0,0,-16.8,0,0,-15,0,0,-12.8,0,0,-10.2,0,0,-7.2,0,0,-3.8,0,0,0,0]);
Transform28.children[1] = PositionInterpolator30;

OrientationInterpolator OrientationInterpolator31 = createNode("OrientationInterpolator");
OrientationInterpolator31.DEF = "Torus01-ROT-INTERP";
OrientationInterpolator31.key = new MFFloat(new float[0,0.04,0.05,0.06,0.08,0.09,0.11,0.12,0.13,0.14,0.16,0.17,0.18,0.19,0.2,0.25,0.26,0.28,0.29,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]);
OrientationInterpolator31.keyValue = new MFRotation(new float[-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14]);
Transform28.children[2] = OrientationInterpolator31;

PositionInterpolator PositionInterpolator32 = createNode("PositionInterpolator");
PositionInterpolator32.DEF = "Torus01-SCALE-INTERP";
PositionInterpolator32.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]);
PositionInterpolator32.keyValue = new MFVec3f(new float[1,1,1,1.02,1,1.02,1.04,1,1.04,1.07,1,1.07,1.1,1,1.1,1.13,1,1.13,1.17,1,1.17,1.21,1,1.21,1.25,1,1.25,1.29,1,1.29,1.34,1,1.34,1.4,1,1.4,1.47,1,1.47,1.55,1,1.55,1.64,1,1.64,1.72,1,1.72,1.8,1,1.8,1.88,1,1.88,1.93,1,1.93,1.97,1,1.97,1.98,1,1.98,1.97,1,1.97,1.93,1,1.93,1.87,1,1.87,1.8,1,1.8,1.72,1,1.72,1.63,1,1.63,1.54,1,1.54,1.46,1,1.46,1.39,1,1.39,1.33,1,1.33,1.28,1,1.28,1.24,1,1.24,1.2,1,1.2,1.16,1,1.16,1.13,1,1.13,1.09,1,1.09,1.07,1,1.07,1.04,1,1.04,1.02,1,1.02,1,1,1]);
Transform28.children[3] = PositionInterpolator32;

Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.diffuseColor = new SFColor(new float[0.4,0.522,0.702]);
Material35.emissiveColor = new SFColor(new float[0.04,0.0522,0.0702]);
Material35.shininess = 0.4;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

IndexedFaceSet IndexedFaceSet36 = createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "Torus01-FACES";
IndexedFaceSet36.coordIndex = new MFInt32(new int[0,5,4,-1,0,1,5,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,4,7,-1,3,0,4,-1,4,9,8,-1,4,5,9,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,8,11,-1,7,4,8,-1,8,13,12,-1,8,9,13,-1,9,14,13,-1,9,10,14,-1,10,15,14,-1,10,11,15,-1,11,12,15,-1,11,8,12,-1,12,1,0,-1,12,13,1,-1,13,2,1,-1,13,14,2,-1,14,3,2,-1,14,15,3,-1,15,0,3,-1,15,12,0,-1]);
Coordinate Coordinate37 = createNode("Coordinate");
Coordinate37.DEF = "Torus01-COORD";
Coordinate37.point = new MFVec3f(new float[80,0,0,60,20,0,40,0,0,60,-20,0,0,0,80,0,20,60,0,0,40,0,-20,60,-80,0,0,-60,20,0,-40,0,0,-60,-20,0,0.0000105,0,-80,0,20,-60,0,0,-40,0,-20,-60]);
IndexedFaceSet36.coord = Coordinate37;

Shape33.geometry = IndexedFaceSet36;

Transform28.child[4] = Shape33;

children[7] = Transform28;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "Torus02";
Transform38.translation = new SFVec3f(new float[0.964,-14.5827,-0.482]);
Transform38.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform38.scale = new SFVec3f(new float[0.73762,1,0.73762]);
TimeSensor TimeSensor39 = createNode("TimeSensor");
TimeSensor39.DEF = "Torus02-TIMER";
TimeSensor39.cycleInterval = 3.33;
Transform38.children = new MFNode();

Transform38.children[0] = TimeSensor39;

PositionInterpolator PositionInterpolator40 = createNode("PositionInterpolator");
PositionInterpolator40.DEF = "Torus02-POS-INTERP";
PositionInterpolator40.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]);
PositionInterpolator40.keyValue = new MFVec3f(new float[0.964,0,-0.482,0.964,-3.8,-0.482,0.964,-7.2,-0.482,0.964,-10.2,-0.482,0.964,-12.8,-0.482,0.964,-15,-0.482,0.964,-16.8,-0.482,0.964,-18.2,-0.482,0.964,-19.2,-0.482,0.964,-19.8,-0.482,0.964,-20,-0.482,0.964,-19.6,-0.482,0.964,-18.6,-0.482,0.964,-16.9,-0.482,0.964,-14.9,-0.482,0.964,-12.5,-0.482,0.964,-9.92,-0.482,0.964,-7.26,-0.482,0.964,-4.64,-0.482,0.964,-2.18,-0.482,0.964,0,-0.482,0.964,2.18,-0.482,0.964,4.64,-0.482,0.964,7.26,-0.482,0.964,9.92,-0.482,0.964,12.5,-0.482,0.964,14.9,-0.482,0.964,16.9,-0.482,0.964,18.6,-0.482,0.964,19.6,-0.482,0.964,20,-0.482,0.964,19.8,-0.482,0.964,19.2,-0.482,0.964,18.2,-0.482,0.964,16.8,-0.482,0.964,15,-0.482,0.964,12.8,-0.482,0.964,10.2,-0.482,0.964,7.2,-0.482,0.964,3.8,-0.482,0.964,0,-0.482]);
Transform38.children[1] = PositionInterpolator40;

PositionInterpolator PositionInterpolator41 = createNode("PositionInterpolator");
PositionInterpolator41.DEF = "Torus02-SCALE-INTERP";
PositionInterpolator41.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]);
PositionInterpolator41.keyValue = new MFVec3f(new float[1,1,1,0.979,1,0.979,0.959,1,0.959,0.939,1,0.939,0.92,1,0.92,0.901,1,0.901,0.882,1,0.882,0.864,1,0.864,0.847,1,0.847,0.83,1,0.83,0.813,1,0.813,0.796,1,0.796,0.777,1,0.777,0.759,1,0.759,0.74,1,0.74,0.722,1,0.722,0.706,1,0.706,0.693,1,0.693,0.682,1,0.682,0.675,1,0.675,0.672,1,0.672,0.674,1,0.674,0.68,1,0.68,0.69,1,0.69,0.703,1,0.703,0.718,1,0.718,0.734,1,0.734,0.752,1,0.752,0.771,1,0.771,0.789,1,0.789,0.806,1,0.806,0.823,1,0.823,0.841,1,0.841,0.86,1,0.86,0.879,1,0.879,0.899,1,0.899,0.919,1,0.919,0.94,1,0.94,0.962,1,0.962,0.985,1,0.985,1.01,1,1.01]);
Transform38.children[2] = PositionInterpolator41;

Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.4,0.522,0.702]);
Material44.emissiveColor = new SFColor(new float[0.04,0.0522,0.0702]);
Material44.shininess = 0.4;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.DEF = "Torus02-FACES";
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,5,4,-1,0,1,5,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,4,7,-1,3,0,4,-1,4,9,8,-1,4,5,9,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,8,11,-1,7,4,8,-1,8,13,12,-1,8,9,13,-1,9,14,13,-1,9,10,14,-1,10,15,14,-1,10,11,15,-1,11,12,15,-1,11,8,12,-1,12,1,0,-1,12,13,1,-1,13,2,1,-1,13,14,2,-1,14,3,2,-1,14,15,3,-1,15,0,3,-1,15,12,0,-1]);
Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.DEF = "Torus02-COORD";
Coordinate46.point = new MFVec3f(new float[120,0,0,100,20,0,80,0,0,100,-20,0,0,0,120,0,20,100,0,0,80,0,-20,100,-120,0,-0.0000105,-100,20,0,-80,0,0,-100,-20,0,0.0000157,0,-120,0.0000131,20,-100,0.0000105,0,-80,0.0000131,-20,-100]);
IndexedFaceSet45.coord = Coordinate46;

Shape42.geometry = IndexedFaceSet45;

Transform38.child[3] = Shape42;

children[8] = Transform38;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "Sphere01";
Transform47.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform47.scale = new SFVec3f(new float[1.02793,0.729241,1.02793]);
Transform47.scaleOrientation = new SFRotation(new float[0,-1,0,0.227]);
TimeSensor TimeSensor48 = createNode("TimeSensor");
TimeSensor48.DEF = "Sphere01-TIMER";
TimeSensor48.cycleInterval = 3.33;
Transform47.children = new MFNode();

Transform47.children[0] = TimeSensor48;

PositionInterpolator PositionInterpolator49 = createNode("PositionInterpolator");
PositionInterpolator49.DEF = "Sphere01-SCALE-INTERP";
PositionInterpolator49.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]);
PositionInterpolator49.keyValue = new MFVec3f(new float[1,0.725,1,0.964,0.752,0.964,0.933,0.775,0.933,0.907,0.795,0.907,0.886,0.812,0.886,0.871,0.824,0.871,0.86,0.833,0.86,0.855,0.839,0.855,0.855,0.841,0.855,0.86,0.839,0.86,0.87,0.833,0.87,0.89,0.82,0.89,0.925,0.798,0.925,0.97,0.768,0.97,1.02,0.734,1.02,1.08,0.698,1.08,1.13,0.662,1.13,1.18,0.63,1.18,1.22,0.604,1.22,1.24,0.586,1.24,1.25,0.579,1.25,1.24,0.584,1.24,1.22,0.601,1.22,1.18,0.626,1.18,1.13,0.656,1.13,1.08,0.69,1.08,1.03,0.725,1.03,0.981,0.758,0.981,0.937,0.787,0.937,0.902,0.809,0.902,0.882,0.822,0.882,0.872,0.827,0.872,0.866,0.83,0.866,0.866,0.828,0.866,0.87,0.824,0.87,0.879,0.816,0.879,0.894,0.805,0.894,0.913,0.79,0.913,0.937,0.772,0.937,0.965,0.75,0.965,0.999,0.725,0.999]);
Transform47.children[1] = PositionInterpolator49;

Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[0.882,0.345,0.78]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.DEF = "Sphere01-FACES";
IndexedFaceSet53.coordIndex = new MFInt32(new int[1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,6,-1,6,0,7,-1,7,0,8,-1,8,0,9,-1,9,0,10,-1,10,0,11,-1,11,0,12,-1,12,0,1,-1,13,1,14,-1,14,1,2,-1,14,2,15,-1,15,2,3,-1,15,3,16,-1,16,3,4,-1,16,4,17,-1,17,4,5,-1,17,5,18,-1,18,5,6,-1,18,6,19,-1,19,6,7,-1,19,7,20,-1,20,7,8,-1,20,8,21,-1,21,8,9,-1,21,9,22,-1,22,9,10,-1,22,10,23,-1,23,10,11,-1,23,11,24,-1,24,11,12,-1,24,12,13,-1,13,12,1,-1,25,13,26,-1,26,13,14,-1,26,14,27,-1,27,14,15,-1,27,15,28,-1,28,15,16,-1,28,16,29,-1,29,16,17,-1,29,17,30,-1,30,17,18,-1,30,18,31,-1,31,18,19,-1,31,19,32,-1,32,19,20,-1,32,20,33,-1,33,20,21,-1,33,21,34,-1,34,21,22,-1,34,22,35,-1,35,22,23,-1,35,23,36,-1,36,23,24,-1,36,24,25,-1,25,24,13,-1,37,25,38,-1,38,25,26,-1,38,26,39,-1,39,26,27,-1,39,27,40,-1,40,27,28,-1,40,28,41,-1,41,28,29,-1,41,29,42,-1,42,29,30,-1,42,30,43,-1,43,30,31,-1,43,31,44,-1,44,31,32,-1,44,32,45,-1,45,32,33,-1,45,33,46,-1,46,33,34,-1,46,34,47,-1,47,34,35,-1,47,35,48,-1,48,35,36,-1,48,36,37,-1,37,36,25,-1,49,37,50,-1,50,37,38,-1,50,38,51,-1,51,38,39,-1,51,39,52,-1,52,39,40,-1,52,40,53,-1,53,40,41,-1,53,41,54,-1,54,41,42,-1,54,42,55,-1,55,42,43,-1,55,43,56,-1,56,43,44,-1,56,44,57,-1,57,44,45,-1,57,45,58,-1,58,45,46,-1,58,46,59,-1,59,46,47,-1,59,47,60,-1,60,47,48,-1,60,48,49,-1,49,48,37,-1,50,61,49,-1,51,61,50,-1,52,61,51,-1,53,61,52,-1,54,61,53,-1,55,61,54,-1,56,61,55,-1,57,61,56,-1,58,61,57,-1,59,61,58,-1,60,61,59,-1,49,61,60,-1]);
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.DEF = "Sphere01-COORD";
Coordinate54.point = new MFVec3f(new float[0,140,0,70,121,0,60.6,121,-35,35,121,-60.6,0,121,-70,-35,121,-60.6,-60.6,121,-35,-70,121,0,-60.6,121,35,-35,121,60.6,0,121,70,35,121,60.6,60.6,121,35,121,70,0,105,70,-60.6,60.6,70,-105,0,70,-121,-60.6,70,-105,-105,70,-60.6,-121,70,0.0000106,-105,70,60.6,-60.6,70,105,0.0000159,70,121,60.6,70,105,105,70,60.6,140,0,0,121,0,-70,70,0,-121,0,0,-140,-70,0,-121,-121,0,-70,-140,0,0.0000122,-121,0,70,-70,0,121,0.0000184,0,140,70,0,121,121,0,70,121,-70,0,105,-70,-60.6,60.6,-70,-105,0,-70,-121,-60.6,-70,-105,-105,-70,-60.6,-121,-70,0.0000106,-105,-70,60.6,-60.6,-70,105,0.0000159,-70,121,60.6,-70,105,105,-70,60.6,70,-121,0,60.6,-121,-35,35,-121,-60.6,0,-121,-70,-35,-121,-60.6,-60.6,-121,-35,-70,-121,0,-60.6,-121,35,-35,-121,60.6,0,-121,70,35,-121,60.6,60.6,-121,35,0,-140,0]);
IndexedFaceSet53.coord = Coordinate54;

Shape50.geometry = IndexedFaceSet53;

Transform47.child[2] = Shape50;

children[9] = Transform47;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "Torus01-TIMER";
ROUTE55.fromField = "fraction_changed";
ROUTE55.toNode = "Torus01-POS-INTERP";
ROUTE55.toField = "set_fraction";
children[10] = ROUTE55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "Torus01-POS-INTERP";
ROUTE56.fromField = "value_changed";
ROUTE56.toNode = "Torus01";
ROUTE56.toField = "set_translation";
children[11] = ROUTE56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "TimeSensor01-TIMER";
ROUTE57.fromField = "fraction_changed";
ROUTE57.toNode = "TimeSensor01-SCRIPT";
ROUTE57.toField = "fractionIn";
children[12] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "TimeSensor01-SCRIPT";
ROUTE58.fromField = "fractionOut";
ROUTE58.toNode = "Torus01-POS-INTERP";
ROUTE58.toField = "set_fraction";
children[13] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "Torus01-TIMER";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "Torus01-ROT-INTERP";
ROUTE59.toField = "set_fraction";
children[14] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "Torus01-ROT-INTERP";
ROUTE60.fromField = "value_changed";
ROUTE60.toNode = "Torus01";
ROUTE60.toField = "set_rotation";
children[15] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "TimeSensor01-SCRIPT";
ROUTE61.fromField = "fractionOut";
ROUTE61.toNode = "Torus01-ROT-INTERP";
ROUTE61.toField = "set_fraction";
children[16] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Torus01-TIMER";
ROUTE62.fromField = "fraction_changed";
ROUTE62.toNode = "Torus01-SCALE-INTERP";
ROUTE62.toField = "set_fraction";
children[17] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "Torus01-SCALE-INTERP";
ROUTE63.fromField = "value_changed";
ROUTE63.toNode = "Torus01";
ROUTE63.toField = "set_scale";
children[18] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "TimeSensor01-SCRIPT";
ROUTE64.fromField = "fractionOut";
ROUTE64.toNode = "Torus01-SCALE-INTERP";
ROUTE64.toField = "set_fraction";
children[19] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "Torus02-TIMER";
ROUTE65.fromField = "fraction_changed";
ROUTE65.toNode = "Torus02-POS-INTERP";
ROUTE65.toField = "set_fraction";
children[20] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "Torus02-POS-INTERP";
ROUTE66.fromField = "value_changed";
ROUTE66.toNode = "Torus02";
ROUTE66.toField = "set_translation";
children[21] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "TimeSensor01-SCRIPT";
ROUTE67.fromField = "fractionOut";
ROUTE67.toNode = "Torus02-POS-INTERP";
ROUTE67.toField = "set_fraction";
children[22] = ROUTE67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "Torus02-TIMER";
ROUTE68.fromField = "fraction_changed";
ROUTE68.toNode = "Torus02-SCALE-INTERP";
ROUTE68.toField = "set_fraction";
children[23] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "Torus02-SCALE-INTERP";
ROUTE69.fromField = "value_changed";
ROUTE69.toNode = "Torus02";
ROUTE69.toField = "set_scale";
children[24] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "TimeSensor01-SCRIPT";
ROUTE70.fromField = "fractionOut";
ROUTE70.toNode = "Torus02-SCALE-INTERP";
ROUTE70.toField = "set_fraction";
children[25] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "Sphere01-TIMER";
ROUTE71.fromField = "fraction_changed";
ROUTE71.toNode = "Sphere01-SCALE-INTERP";
ROUTE71.toField = "set_fraction";
children[26] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromNode = "Sphere01-SCALE-INTERP";
ROUTE72.fromField = "value_changed";
ROUTE72.toNode = "Sphere01";
ROUTE72.toField = "set_scale";
children[27] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromNode = "TimeSensor01-SCRIPT";
ROUTE73.fromField = "fractionOut";
ROUTE73.toNode = "Sphere01-SCALE-INTERP";
ROUTE73.toField = "set_fraction";
children[28] = ROUTE73;

}
