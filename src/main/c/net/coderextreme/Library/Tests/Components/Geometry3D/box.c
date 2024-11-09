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
meta3.content = "Fri, 04 Sep 2015 10:01:40 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/box.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Wed, 27 Jul 2016 04:17:50 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "box";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Selection";
MetadataSet11.DEF = "Selection";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "children";
MetadataSet12.DEF = "children";
MetadataSet12.reference = "http://titania.create3000.de";
IndexedFaceSet IndexedFaceSet13 = createNode("IndexedFaceSet");
IndexedFaceSet13.DEF = "IndexedFaceSet";
IndexedFaceSet13.creaseAngle = 3.14159;
IndexedFaceSet13.colorIndex = new MFInt32(new int[1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1,5,0,0,6,-1,6,0,0,0,5,-1]);
IndexedFaceSet13.coordIndex = new MFInt32(new int[74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1,99,40,45,100,-1,100,45,34,30,99,-1]);
Color Color14 = createNode("Color");
Color14.color = new MFColor(new float[0,0,0,1,0.917647,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet13.color = Color14;

Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.DEF = "coords_ME_Cube";
Coordinate15.point = new MFVec3f(new float[-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994,0.959917,0.849807,0.00000399351,0.959917,0.849806,0.143814,0.959917,0.849807,0.00000399351,0.959922,-0.8498,0.643484,0.904863,-0.904859,0.700002]);
IndexedFaceSet13.coord = Coordinate15;

MetadataSet12.value = IndexedFaceSet13;

MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataSet12;

MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "previous";
MetadataSet16.DEF = "previous";
MetadataSet16.reference = "http://titania.create3000.de";
Transform Transform17 = createNode("Transform");
Transform17.DEF = "_1";
Transform17.translation = new SFVec3f(new float[0.104653,-0.00510326,0]);
Shape Shape18 = createNode("Shape");
Shape18.DEF = "YellowBox";
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[0,0,0]);
Material20.specularColor = new SFColor(new float[0.415,0.415,0.415]);
Material20.shininess = 0.102564;
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

IndexedFaceSet IndexedFaceSet21 = createNode("IndexedFaceSet");
IndexedFaceSet21.USE = "IndexedFaceSet";
Shape18.geometry = IndexedFaceSet21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

MetadataSet16.value = Transform17;

MetadataSet11.value[1] = MetadataSet16;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet22 = createNode("MetadataSet");
MetadataSet22.name = "NavigationInfo";
MetadataSet22.DEF = "NavigationInfo";
MetadataSet22.reference = "http://titania.create3000.de";
MetadataString MetadataString23 = createNode("MetadataString");
MetadataString23.name = "type";
MetadataString23.DEF = "type";
MetadataString23.reference = "http://titania.create3000.de";
MetadataString23.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet22.value = new MFNode();

MetadataSet22.value[0] = MetadataString23;

MetadataSet10.value[1] = MetadataSet22;

MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "Viewpoint";
MetadataSet24.DEF = "Viewpoint";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble25 = createNode("MetadataDouble");
MetadataDouble25.name = "position";
MetadataDouble25.DEF = "position";
MetadataDouble25.reference = "http://titania.create3000.de";
MetadataDouble25.value = new MFDouble(new double[1.93247723579407,1.14236581325531,1.62229800224304]);
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataDouble25;

MetadataDouble MetadataDouble26 = createNode("MetadataDouble");
MetadataDouble26.name = "orientation";
MetadataDouble26.DEF = "orientation";
MetadataDouble26.reference = "http://titania.create3000.de";
MetadataDouble26.value = new MFDouble(new double[0.0381748969524162,-0.665694256695067,-0.745247498382836,5.14184345423998]);
MetadataSet24.value[1] = MetadataDouble26;

MetadataDouble MetadataDouble27 = createNode("MetadataDouble");
MetadataDouble27.name = "centerOfRotation";
MetadataDouble27.DEF = "centerOfRotation";
MetadataDouble27.reference = "http://titania.create3000.de";
MetadataDouble27.value = new MFDouble(new double[0.427072137594223,0.313123226165771,-0.271519124507904]);
MetadataSet24.value[2] = MetadataDouble27;

MetadataSet10.value[2] = MetadataSet24;

MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "AngleGrid";
MetadataSet28.DEF = "AngleGrid";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean29 = createNode("MetadataBoolean");
MetadataBoolean29.name = "enabled";
MetadataBoolean29.DEF = "enabled";
MetadataBoolean29.reference = "http://titania.create3000.de";
MetadataBoolean29.value = new MFBool(new boolean[False]);
MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataBoolean29;

MetadataSet10.value[3] = MetadataSet28;

MetadataSet MetadataSet30 = createNode("MetadataSet");
MetadataSet30.name = "Grid";
MetadataSet30.DEF = "Grid";
MetadataSet30.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean31 = createNode("MetadataBoolean");
MetadataBoolean31.name = "enabled";
MetadataBoolean31.DEF = "enabled_1";
MetadataBoolean31.reference = "http://titania.create3000.de";
MetadataBoolean31.value = new MFBool(new boolean[True]);
MetadataSet30.value = new MFNode();

MetadataSet30.value[0] = MetadataBoolean31;

MetadataSet10.value[4] = MetadataSet30;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Transform Transform32 = createNode("Transform");
Transform32.USE = "_1";
children[1] = Transform32;

}
