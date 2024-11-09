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
meta3.content = "Fri, 15 Apr 2016 06:14:15 GMT";
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
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoTransform.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 16 Apr 2016 16:49:19 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "GeoTransform";
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
MetadataDouble14.value = new MFDouble(new double[-8069103.5,-13976098,11294733]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[-0.865087914247406,0.231799608004517,0.444850359505334,5.19891519167146]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[-35164.6875,0,-9.22524860322294e-13]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Selection";
MetadataSet17.DEF = "Selection";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "previous";
MetadataSet18.DEF = "previous";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataSet18;

MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "children";
MetadataSet19.DEF = "children";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataSet17.value[1] = MetadataSet19;

MetadataSet10.value[2] = MetadataSet17;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Background Background20 = createNode("Background");
Background20.skyColor = new MFColor(new float[0.1,0.1,0.8]);
Background20.groundColor = new MFColor(new float[0.1,0.1,0.8]);
children[1] = Background20;

GeoViewpoint GeoViewpoint21 = createNode("GeoViewpoint");
GeoViewpoint21.description = "Initial GeoViewpoint";
GeoViewpoint21.position = new SFVec3d(new double[35.0456768585212,-119.99999992177,13326935.0223425]);
GeoViewpoint21.orientation = new SFRotation(new float[1,9.51556969047435e-10,-1.67784993205101e-10,4.71398251875275]);
GeoViewpoint21.centerOfRotation = new SFVec3d(new double[180,0,-6342972.31424518]);
children[2] = GeoViewpoint21;

Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

GeoElevationGrid GeoElevationGrid25 = createNode("GeoElevationGrid");
GeoElevationGrid25.geoGridOrigin = new SFVec3d(new double[-90,-180,0]);
GeoElevationGrid25.xDimension = 21;
GeoElevationGrid25.zDimension = 11;
GeoElevationGrid25.xSpacing = 18;
GeoElevationGrid25.zSpacing = 18;
GeoElevationGrid25.yScale = 20;
GeoElevationGrid25.height = new MFDouble(new double[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0]);
Shape22.geometry = GeoElevationGrid25;

children[3] = Shape22;

Shape Shape26 = createNode("Shape");
Shape26.DEF = "california_northing_first";
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.9,0,0]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

GeoElevationGrid GeoElevationGrid29 = createNode("GeoElevationGrid");
GeoElevationGrid29.geoSystem = new MFString(new java.lang.String[", ","UTM, ","Z10, ","Nnorthing_first"]);
GeoElevationGrid29.geoGridOrigin = new SFVec3d(new double[3600000,0,0]);
GeoElevationGrid29.xDimension = 2;
GeoElevationGrid29.zDimension = 2;
GeoElevationGrid29.xSpacing = 400000;
GeoElevationGrid29.zSpacing = 500000;
GeoElevationGrid29.yScale = 200;
GeoElevationGrid29.height = new MFDouble(new double[1000,1000,1000,1000]);
Shape26.geometry = GeoElevationGrid29;

children[4] = Shape26;

GeoTransform GeoTransform30 = createNode("GeoTransform");
GeoTransform30.translation = new SFVec3f(new float[0,100000,200000]);
GeoTransform30.rotation = new SFRotation(new float[0,1,0,0.5]);
GeoTransform30.scale = new SFVec3f(new float[1,2,3]);
GeoTransform30.geoSystem = new MFString(new java.lang.String[", ","UTM, ","Z10, ","Neasting_first"]);
GeoTransform30.geoCenter = new SFVec3d(new double[0,3600000,0]);
Shape Shape31 = createNode("Shape");
Shape31.DEF = "california_easting_first";
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.diffuseColor = new SFColor(new float[0,0,0.9]);
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

GeoElevationGrid GeoElevationGrid34 = createNode("GeoElevationGrid");
GeoElevationGrid34.geoSystem = new MFString(new java.lang.String[", ","UTM, ","Z10, ","Neasting_first"]);
GeoElevationGrid34.geoGridOrigin = new SFVec3d(new double[0,3600000,0]);
GeoElevationGrid34.xDimension = 2;
GeoElevationGrid34.zDimension = 2;
GeoElevationGrid34.xSpacing = 400000;
GeoElevationGrid34.zSpacing = 500000;
GeoElevationGrid34.yScale = 200;
GeoElevationGrid34.height = new MFDouble(new double[1000,1000,1000,1000]);
Shape31.geometry = GeoElevationGrid34;

GeoTransform30.children = new MFNode();

GeoTransform30.children[0] = Shape31;

children[5] = GeoTransform30;

}
