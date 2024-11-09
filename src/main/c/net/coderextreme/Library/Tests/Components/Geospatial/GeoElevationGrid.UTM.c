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
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoElevationGrid.UTM.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 16 Apr 2016 16:50:33 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "GeoElevationGrid.UTM";
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
MetadataDouble14.value = new MFDouble(new double[-7234615.07024952,-12259154.7395488,10094150.4329588]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0.862673463069908,-0.242562620482203,-0.443799359237684,1.07653185497723]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[-35164.6857548207,0,-9.22524835922619e-13]);
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

Transform Transform20 = createNode("Transform");
Transform20.rotation = new SFRotation(new float[1,0,0,1.5707963267949]);
Background Background21 = createNode("Background");
Background21.skyAngle = new MFFloat(new float[1.56287]);
Background21.skyColor = new MFColor(new float[0.0343751,0.034375,0.275,0.702145,0.702145,1]);
Background21.groundAngle = new MFFloat(new float[1.5708]);
Background21.groundColor = new MFColor(new float[0.0343751,0.034375,0.275,0.702145,0.702145,1]);
Transform20.children = new MFNode();

Transform20.children[0] = Background21;

children[1] = Transform20;

GeoViewpoint GeoViewpoint22 = createNode("GeoViewpoint");
GeoViewpoint22.description = "Initial GeoViewpoint";
GeoViewpoint22.position = new SFVec3d(new double[35.1149156947289,-119.999998674153,11079190.0771837]);
GeoViewpoint22.orientation = new SFRotation(new float[-1,-1.32396391064704e-9,2.31940358896155e-10,1.56899698076057]);
GeoViewpoint22.centerOfRotation = new SFVec3d(new double[180,0,-6342972.31424518]);
children[2] = GeoViewpoint22;

Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.DEF = "Metal18";
Material25.ambientIntensity = 0.00746438;
Material25.diffuseColor = new SFColor(new float[0.456,0.03648,0.134863]);
Material25.specularColor = new SFColor(new float[0.641609,0.651044,0.979592]);
Material25.shininess = 0.0612245;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

GeoElevationGrid GeoElevationGrid26 = createNode("GeoElevationGrid");
GeoElevationGrid26.geoGridOrigin = new SFVec3d(new double[-90,-180,0]);
GeoElevationGrid26.xDimension = 21;
GeoElevationGrid26.zDimension = 11;
GeoElevationGrid26.xSpacing = 18;
GeoElevationGrid26.zSpacing = 18;
GeoElevationGrid26.yScale = 20;
GeoElevationGrid26.height = new MFDouble(new double[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0]);
Shape23.geometry = GeoElevationGrid26;

children[3] = Shape23;

Shape Shape27 = createNode("Shape");
Shape27.DEF = "california_northing_first";
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.9,0,0]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

GeoElevationGrid GeoElevationGrid30 = createNode("GeoElevationGrid");
GeoElevationGrid30.geoSystem = new MFString(new java.lang.String[", ","UTM, ","Z11, ","Nnorthing_first"]);
GeoElevationGrid30.geoGridOrigin = new SFVec3d(new double[3600000,0,0]);
GeoElevationGrid30.xDimension = 2;
GeoElevationGrid30.zDimension = 2;
GeoElevationGrid30.xSpacing = 400000;
GeoElevationGrid30.zSpacing = 500000;
GeoElevationGrid30.yScale = 200;
GeoElevationGrid30.height = new MFDouble(new double[1000,1000,1000,1000]);
Shape27.geometry = GeoElevationGrid30;

children[4] = Shape27;

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

children[5] = Shape31;

}
