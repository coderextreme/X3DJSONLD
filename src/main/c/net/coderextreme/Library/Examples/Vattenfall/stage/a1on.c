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
meta3.content = "Sat, 25 Apr 2015 12:38:15 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 14 Nov 2015 11:32:03 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in CosmoWorldsPackaged by CosmoPackage"]);
MetadataSet MetadataSet9 = createNode("MetadataSet");
MetadataSet9.name = "Titania";
MetadataSet9.DEF = "Titania";
MetadataSet9.reference = "http://titania.create3000.de";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "NavigationInfo";
MetadataSet10.DEF = "NavigationInfo";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataString MetadataString11 = createNode("MetadataString");
MetadataString11.name = "type";
MetadataString11.DEF = "type";
MetadataString11.reference = "http://titania.create3000.de";
MetadataString11.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataString11;

MetadataSet9.value = new MFNode();

MetadataSet9.value[0] = MetadataSet10;

MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "Viewpoint";
MetadataSet12.DEF = "Viewpoint";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble13 = createNode("MetadataDouble");
MetadataDouble13.name = "position";
MetadataDouble13.DEF = "position";
MetadataDouble13.reference = "http://titania.create3000.de";
MetadataDouble13.value = new MFDouble(new double[0,0,10]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataDouble13;

MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "orientation";
MetadataDouble14.DEF = "orientation";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[0,0,1,0]);
MetadataSet12.value[1] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "centerOfRotation";
MetadataDouble15.DEF = "centerOfRotation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0,0,0]);
MetadataSet12.value[2] = MetadataDouble15;

MetadataSet9.value[1] = MetadataSet12;

WorldInfo8.metadata = MetadataSet9;

children = new MFNode();

children[0] = WorldInfo8;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "a1";
Transform16.translation = new SFVec3f(new float[0.0862359,0.114095,-0.299906]);
Transform16.scale = new SFVec3f(new float[0.163145,0.0203932,0.0318644]);
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
ImageTexture ImageTexture19 = createNode("ImageTexture");
ImageTexture19.url = new MFString(new java.lang.String["menu-cam-on.png"]);
Appearance18.texture = ImageTexture19;

Shape17.appearance = Appearance18;

IndexedFaceSet IndexedFaceSet20 = createNode("IndexedFaceSet");
IndexedFaceSet20.solid = False;
IndexedFaceSet20.colorPerVertex = False;
IndexedFaceSet20.colorIndex = new MFInt32(new int[0]);
IndexedFaceSet20.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Color Color21 = createNode("Color");
Color21.color = new MFColor(new float[1,1,1]);
IndexedFaceSet20.color = Color21;

TextureCoordinate TextureCoordinate22 = createNode("TextureCoordinate");
TextureCoordinate22.point = new MFVec2f(new float[0.190368,0,0.28267,0,0.28267,1,0.190368,1]);
IndexedFaceSet20.texCoord = TextureCoordinate22;

Coordinate Coordinate23 = createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[-0.309632,-0.5,0,-0.21733,-0.5,0,-0.21733,0.5,0,-0.309632,0.5,0]);
IndexedFaceSet20.coord = Coordinate23;

Shape17.geometry = IndexedFaceSet20;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

children[1] = Transform16;

}
