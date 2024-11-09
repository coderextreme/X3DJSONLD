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
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoProximitySensor.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 16 Apr 2016 16:49:18 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "GeoProximitySensor";
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
MetadataSet11.value[1] = MetadataSet13;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "NavigationInfo";
MetadataSet14.DEF = "NavigationInfo";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataString MetadataString15 = createNode("MetadataString");
MetadataString15.name = "type";
MetadataString15.DEF = "type";
MetadataString15.reference = "http://titania.create3000.de";
MetadataString15.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataString15;

MetadataSet10.value[1] = MetadataSet14;

MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "Viewpoint";
MetadataSet16.DEF = "Viewpoint";
MetadataSet16.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble17 = createNode("MetadataDouble");
MetadataDouble17.name = "position";
MetadataDouble17.DEF = "position";
MetadataDouble17.reference = "http://titania.create3000.de";
MetadataDouble17.value = new MFDouble(new double[18311186,0.212975323200226,67.55078125]);
MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataDouble17;

MetadataDouble MetadataDouble18 = createNode("MetadataDouble");
MetadataDouble18.name = "orientation";
MetadataDouble18.DEF = "orientation";
MetadataDouble18.reference = "http://titania.create3000.de";
MetadataDouble18.value = new MFDouble(new double[0.577349568034159,0.57734956282642,0.577351676705725,2.09439298330876]);
MetadataSet16.value[1] = MetadataDouble18;

MetadataDouble MetadataDouble19 = createNode("MetadataDouble");
MetadataDouble19.name = "centerOfRotation";
MetadataDouble19.DEF = "centerOfRotation";
MetadataDouble19.reference = "http://titania.create3000.de";
MetadataDouble19.value = new MFDouble(new double[-21384.685546875,0,-2.6100881438812e-12]);
MetadataSet16.value[2] = MetadataDouble19;

MetadataSet10.value[2] = MetadataSet16;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

NavigationInfo NavigationInfo20 = createNode("NavigationInfo");
children[1] = NavigationInfo20;

Background Background21 = createNode("Background");
Background21.DEF = "Gray";
Background21.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[2] = Background21;

GeoViewpoint GeoViewpoint22 = createNode("GeoViewpoint");
GeoViewpoint22.description = "GeoViewpoint";
GeoViewpoint22.position = new SFVec3d(new double[0.00021186068633906,6.66400681047296e-7,11933049.8535792]);
GeoViewpoint22.orientation = new SFRotation(new float[-1,-1.03254873842571e-8,1.03254445992368e-8,1.57079629047246]);
GeoViewpoint22.centerOfRotation = new SFVec3d(new double[180,0,-6356752.31424518]);
children[3] = GeoViewpoint22;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "GeoElevationGrid";
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Appearance25.material = Material26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../images/earth.png"]);
Appearance25.texture = ImageTexture27;

Shape24.appearance = Appearance25;

GeoElevationGrid GeoElevationGrid28 = createNode("GeoElevationGrid");
GeoElevationGrid28.geoGridOrigin = new SFVec3d(new double[-90,180,0]);
GeoElevationGrid28.xDimension = 361;
GeoElevationGrid28.zDimension = 181;
GeoElevationGrid28.creaseAngle = 3.14159;
Shape24.geometry = GeoElevationGrid28;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

children[4] = Transform23;

Transform Transform29 = createNode("Transform");
Transform29.DEF = "Axes";
Transform29.scale = new SFVec3f(new float[10000000,10000000,10000000]);
Shape Shape30 = createNode("Shape");
IndexedLineSet IndexedLineSet31 = createNode("IndexedLineSet");
IndexedLineSet31.colorPerVertex = False;
IndexedLineSet31.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet31.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color32 = createNode("Color");
Color32.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet31.color = Color32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet31.coord = Coordinate33;

Shape30.geometry = IndexedLineSet31;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

children[5] = Transform29;

Script Script34 = createNode("Script");
Script34.DEF = "DebugScript";
field field35 = createNode("field");
field35.name = "set_hitGeoCoord";
field35.accessType = "inputOnly";
field35.type = "SFVec3d";
Script34.field = new MFNode();

Script34.field[0] = field35;


Script34.setSourceCode(`ecmascript:\n"+
"\n"+
"function set_hitGeoCoord (value)\n"+
"{\n"+
"	print (value);\n"+
"}`)
children[6] = Script34;

GeoProximitySensor GeoProximitySensor36 = createNode("GeoProximitySensor");
GeoProximitySensor36.DEF = "_1";
GeoProximitySensor36.size = new SFVec3f(new float[100000000,100000000,100000000]);
children[7] = GeoProximitySensor36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "_1";
ROUTE37.fromField = "geoCoord_changed";
ROUTE37.toNode = "DebugScript";
ROUTE37.toField = "set_hitGeoCoord";
children[8] = ROUTE37;

}
