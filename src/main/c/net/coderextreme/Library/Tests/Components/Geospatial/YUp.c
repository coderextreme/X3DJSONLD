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
meta3.content = "Sun, 10 Apr 2016 01:48:21 GMT";
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
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoCoordinate.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 16 Apr 2016 16:49:21 GMT";
head1.meta[5] = meta7;

head = head1;

Background Background9 = createNode("Background");
Background9.groundColor = new MFColor(new float[0.1,0.1,0.4]);
Background9.skyColor = new MFColor(new float[0.1,0.1,0.4]);
children = new MFNode();

children[0] = Background9;

GeoViewpoint GeoViewpoint10 = createNode("GeoViewpoint");
GeoViewpoint10.description = "Initial GeoViewpoint";
GeoViewpoint10.orientation = new SFRotation(new float[1,0,0,-1.57]);
GeoViewpoint10.position = new SFVec3d(new double[35,-120,10000000]);
GeoViewpoint10.centerOfRotation = new SFVec3d(new double[0,0,-6371000]);
GeoOrigin GeoOrigin11 = createNode("GeoOrigin");
GeoOrigin11.DEF = "GO";
GeoOrigin11.geoCoords = new SFVec3d(new double[45,-80,0]);
GeoOrigin11.rotateYUp = True;
GeoViewpoint10.geoOrigin = GeoOrigin11;

children[1] = GeoViewpoint10;

Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.7,0.1,0.3]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Box Box15 = createNode("Box");
Box15.size = new SFVec3f(new float[100000,800000,200000]);
Shape12.geometry = Box15;

children[2] = Shape12;

Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
Material Material18 = createNode("Material");
Material18.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Material18.transpareny = "0.8";
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

GeoElevationGrid GeoElevationGrid19 = createNode("GeoElevationGrid");
GeoElevationGrid19.geoGridOrigin = new SFVec3d(new double[-90,-180,0]);
GeoElevationGrid19.height = new MFDouble(new double[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0]);
GeoElevationGrid19.xDimension = 21;
GeoElevationGrid19.xSpacing = 18;
GeoElevationGrid19.yScale = 20;
GeoElevationGrid19.zDimension = 11;
GeoElevationGrid19.zSpacing = 18;
GeoOrigin GeoOrigin20 = createNode("GeoOrigin");
GeoOrigin20.USE = "GO";
GeoElevationGrid19.geoOrigin = GeoOrigin20;

Shape16.geometry = GeoElevationGrid19;

children[3] = Shape16;

Shape Shape21 = createNode("Shape");
Shape21.DEF = "california_northing_first";
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.9,0,0]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

GeoElevationGrid GeoElevationGrid24 = createNode("GeoElevationGrid");
GeoElevationGrid24.geoSystem = new MFString(new java.lang.String["UTM","Z10","N","northing_first"]);
GeoElevationGrid24.geoGridOrigin = new SFVec3d(new double[3600000,0,0]);
GeoElevationGrid24.xDimension = 2;
GeoElevationGrid24.xSpacing = 400000;
GeoElevationGrid24.yScale = 200;
GeoElevationGrid24.zDimension = 2;
GeoElevationGrid24.zSpacing = 500000;
GeoElevationGrid24.height = new MFDouble(new double[1000,1000,1000,1000]);
GeoOrigin GeoOrigin25 = createNode("GeoOrigin");
GeoOrigin25.USE = "GO";
GeoElevationGrid24.geoOrigin = GeoOrigin25;

Shape21.geometry = GeoElevationGrid24;

children[4] = Shape21;

GeoTransform GeoTransform26 = createNode("GeoTransform");
GeoTransform26.geoSystem = new MFString(new java.lang.String["UTM","Z10","N","easting_first"]);
GeoTransform26.geoCenter = new SFVec3d(new double[0,3600000,0]);
GeoTransform26.rotation = new SFRotation(new float[0,1,0,0.5]);
GeoTransform26.scale = new SFVec3f(new float[1,2,3]);
GeoTransform26.translation = new SFVec3f(new float[0,100000,200000]);
//GeoTransform
Shape Shape27 = createNode("Shape");
Shape27.DEF = "california_easting_first";
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[0,0,0.9]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

GeoElevationGrid GeoElevationGrid30 = createNode("GeoElevationGrid");
GeoElevationGrid30.geoSystem = new MFString(new java.lang.String["UTM","Z10","N","easting_first"]);
GeoElevationGrid30.geoGridOrigin = new SFVec3d(new double[0,3600000,0]);
GeoElevationGrid30.xDimension = 2;
GeoElevationGrid30.xSpacing = 400000;
GeoElevationGrid30.yScale = 200;
GeoElevationGrid30.zDimension = 2;
GeoElevationGrid30.zSpacing = 500000;
GeoElevationGrid30.height = new MFDouble(new double[1000,1000,1000,1000]);
GeoOrigin GeoOrigin31 = createNode("GeoOrigin");
GeoOrigin31.USE = "GO";
GeoElevationGrid30.geoOrigin = GeoOrigin31;

Shape27.geometry = GeoElevationGrid30;

GeoTransform26.children = new MFNode();

GeoTransform26.children[0] = Shape27;

GeoOrigin GeoOrigin32 = createNode("GeoOrigin");
GeoOrigin32.USE = "GO";
GeoTransform26.geoOrigin = GeoOrigin32;

children[5] = GeoTransform26;

}
