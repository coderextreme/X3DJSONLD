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
meta3.content = "Mon, 13 Oct 2014 00:37:06 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoPositionInterpolator.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 16 Apr 2016 16:49:16 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Selection";
MetadataSet11.DEF = "Selection";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "previous";
MetadataSet12.DEF = "previous";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataSet12;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "children";
MetadataSet13.DEF = "children";
MetadataSet13.reference = "http://titania.create3000.de";
TimeSensor TimeSensor14 = createNode("TimeSensor");
TimeSensor14.DEF = "_1";
TimeSensor14.cycleInterval = 10;
TimeSensor14.loop = True;
MetadataSet13.value = TimeSensor14;

MetadataSet11.value[1] = MetadataSet13;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet15 = createNode("MetadataSet");
MetadataSet15.name = "NavigationInfo";
MetadataSet15.DEF = "NavigationInfo";
MetadataSet15.reference = "http://titania.create3000.de";
MetadataString MetadataString16 = createNode("MetadataString");
MetadataString16.name = "type";
MetadataString16.DEF = "type";
MetadataString16.reference = "http://titania.create3000.de";
MetadataString16.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet15.value = new MFNode();

MetadataSet15.value[0] = MetadataString16;

MetadataSet10.value[1] = MetadataSet15;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Viewpoint";
MetadataSet17.DEF = "Viewpoint";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble18 = createNode("MetadataDouble");
MetadataDouble18.name = "position";
MetadataDouble18.DEF = "position";
MetadataDouble18.reference = "http://titania.create3000.de";
MetadataDouble18.value = new MFDouble(new double[18264404,2.91911419481039e-8,67.0888977050781]);
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataDouble18;

MetadataDouble MetadataDouble19 = createNode("MetadataDouble");
MetadataDouble19.name = "orientation";
MetadataDouble19.DEF = "orientation";
MetadataDouble19.reference = "http://titania.create3000.de";
MetadataDouble19.value = new MFDouble(new double[0.577349562279675,0.577349562279675,0.577351683006932,2.09439298166854]);
MetadataSet17.value[1] = MetadataDouble19;

MetadataDouble MetadataDouble20 = createNode("MetadataDouble");
MetadataDouble20.name = "centerOfRotation";
MetadataDouble20.DEF = "centerOfRotation";
MetadataDouble20.reference = "http://titania.create3000.de";
MetadataDouble20.value = new MFDouble(new double[-21384.685546875,0,-2.6100881438812e-12]);
MetadataSet17.value[2] = MetadataDouble20;

MetadataSet10.value[2] = MetadataSet17;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

NavigationInfo NavigationInfo21 = createNode("NavigationInfo");
children[1] = NavigationInfo21;

Background Background22 = createNode("Background");
Background22.DEF = "Gray";
Background22.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[2] = Background22;

GeoViewpoint GeoViewpoint23 = createNode("GeoViewpoint");
GeoViewpoint23.DEF = "_2";
GeoViewpoint23.description = "GeoViewpoint";
GeoViewpoint23.position = new SFVec3d(new double[0.000210952279826894,9.15731602998129e-14,11886267.4098626]);
GeoViewpoint23.orientation = new SFRotation(new float[-1,6.28036986176185e-16,1.0205601025363e-15,1.57079631818816]);
GeoViewpoint23.centerOfRotation = new SFVec3d(new double[180,0,-6356752.31424518]);
children[3] = GeoViewpoint23;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "GeoElevationGrid";
Shape Shape25 = createNode("Shape");
Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Appearance26.material = Material27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../images/earth.png"]);
Appearance26.texture = ImageTexture28;

Shape25.appearance = Appearance26;

GeoElevationGrid GeoElevationGrid29 = createNode("GeoElevationGrid");
GeoElevationGrid29.geoGridOrigin = new SFVec3d(new double[-90,180,0]);
GeoElevationGrid29.xDimension = 361;
GeoElevationGrid29.zDimension = 181;
GeoElevationGrid29.creaseAngle = 3.14159;
Shape25.geometry = GeoElevationGrid29;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

children[4] = Transform24;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "Axes";
Transform30.scale = new SFVec3f(new float[10000000,10000000,10000000]);
Shape Shape31 = createNode("Shape");
IndexedLineSet IndexedLineSet32 = createNode("IndexedLineSet");
IndexedLineSet32.colorPerVertex = False;
IndexedLineSet32.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet32.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color33 = createNode("Color");
Color33.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet32.color = Color33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet32.coord = Coordinate34;

Shape31.geometry = IndexedLineSet32;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

children[5] = Transform30;

Script Script35 = createNode("Script");
Script35.DEF = "DebugScript";
field field36 = createNode("field");
field36.name = "set_hitGeoCoord";
field36.accessType = "inputOnly";
field36.type = "SFVec3d";
Script35.field = new MFNode();

Script35.field[0] = field36;


Script35.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_hitGeoCoord (value)\n"+
"{\n"+
"	print (value);\n"+
"}`)
children[6] = Script35;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "PointSet";
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
LineProperties LineProperties40 = createNode("LineProperties");
LineProperties40.linewidthScaleFactor = 20;
Appearance39.lineProperties = LineProperties40;

Material Material41 = createNode("Material");
Material41.emissiveColor = new SFColor(new float[1,0,0]);
Appearance39.material = Material41;

Shape38.appearance = Appearance39;

PointSet PointSet42 = createNode("PointSet");
GeoCoordinate GeoCoordinate43 = createNode("GeoCoordinate");
GeoCoordinate43.point = new MFVec3d(new double[0,0,0,51.31158,12.37115,0,-37.013074,143.98429,0]);
PointSet42.coord = GeoCoordinate43;

Shape38.geometry = PointSet42;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

children[7] = Transform37;

Transform Transform44 = createNode("Transform");
Transform44.DEF = "PointSet_1";
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Appearance46.DEF = "_3";
LineProperties LineProperties47 = createNode("LineProperties");
LineProperties47.linewidthScaleFactor = 20;
Appearance46.lineProperties = LineProperties47;

Material Material48 = createNode("Material");
Material48.emissiveColor = new SFColor(new float[0,0.427919,1]);
Appearance46.material = Material48;

Shape45.appearance = Appearance46;

PointSet PointSet49 = createNode("PointSet");
GeoCoordinate GeoCoordinate50 = createNode("GeoCoordinate");
GeoCoordinate50.geoSystem = new MFString(new java.lang.String[", ","UTM, ","WEZ10"]);
GeoCoordinate50.point = new MFVec3d(new double[4145173,572227,0]);
PointSet49.coord = GeoCoordinate50;

Shape45.geometry = PointSet49;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Appearance52.USE = "_3";
Shape51.appearance = Appearance52;

PointSet PointSet53 = createNode("PointSet");
GeoCoordinate GeoCoordinate54 = createNode("GeoCoordinate");
GeoCoordinate54.geoSystem = new MFString(new java.lang.String[", ","UTM, ","WE, ","Z60S"]);
GeoCoordinate54.point = new MFVec3d(new double[5427419.7,314369.5,0]);
PointSet53.coord = GeoCoordinate54;

Shape51.geometry = PointSet53;

Transform44.child[1] = Shape51;

children[8] = Transform44;

GeoPositionInterpolator GeoPositionInterpolator55 = createNode("GeoPositionInterpolator");
GeoPositionInterpolator55.DEF = "_4";
GeoPositionInterpolator55.key = new MFFloat(new float[0,0.333333,0.666667,1]);
GeoPositionInterpolator55.keyValue = new MFVec3d(new double[0,0,13000000,51.31158,12.37115,13000000,-37.013074,143.98429,13000000,0,0,13000000]);
children[9] = GeoPositionInterpolator55;

TimeSensor TimeSensor56 = createNode("TimeSensor");
TimeSensor56.USE = "_1";
children[10] = TimeSensor56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "_1";
ROUTE57.fromField = "fraction_changed";
ROUTE57.toNode = "_4";
ROUTE57.toField = "set_fraction";
children[11] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "_4";
ROUTE58.fromField = "geovalue_changed";
ROUTE58.toNode = "_2";
ROUTE58.toField = "set_position";
children[12] = ROUTE58;

}
