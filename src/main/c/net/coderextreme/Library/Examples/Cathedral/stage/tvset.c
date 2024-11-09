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
meta3.content = "Thu, 12 Mar 2015 07:10:41 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 12 Mar 2015 07:10:41 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform Transform10 = createNode("Transform");
Transform10.translation = new SFVec3f(new float[-0.000230302,0.155625,0.0887065]);
Transform10.rotation = new SFRotation(new float[1,0.00000511572,3.72711e-9,1.5708]);
Transform10.scale = new SFVec3f(new float[1.53182,0.0858728,1.21022]);
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.ambientIntensity = 0;
Material13.diffuseColor = new SFColor(new float[0,0.0905258,0.0957447]);
Material13.specularColor = new SFColor(new float[1,1,1]);
Material13.emissiveColor = new SFColor(new float[0,0.050292,0.0531915]);
Material13.shininess = 0.12766;
Material13.transparency = 0.787234;
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet14 = createNode("IndexedFaceSet");
IndexedFaceSet14.creaseAngle = 3.14159;
IndexedFaceSet14.coordIndex = new MFInt32(new int[1,40,26,39,7,12,13,-1,12,8,10,13,-1,8,15,14,10,-1,15,5,28,21,30,3,14,-1,10,14,16,11,-1,14,3,2,16,-1,0,1,13,17,-1,13,10,11,17,-1,8,12,18,9,-1,12,7,6,18,-1,4,5,15,19,-1,15,8,9,19,-1,21,28,27,20,-1,28,5,4,27,-1,3,30,29,2,-1,30,21,20,29,-1,23,32,31,24,-1,32,17,11,31,-1,9,18,33,34,-1,33,23,24,34,-1,4,19,35,27,-1,35,25,20,27,-1,19,9,34,35,-1,34,24,25,35,-1,25,36,29,20,-1,36,16,2,29,-1,24,31,36,25,-1,31,11,16,36,-1,18,6,37,33,-1,37,22,23,33,-1,22,38,32,23,-1,38,0,17,32,-1,7,39,37,6,-1,39,26,22,37,-1,26,40,38,22,-1,40,1,0,38,-1]);
Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[-0.0861493,0.1,0.0861492,-0.1,-0.1,0.1,0.0861493,0.1,0.0861492,0.1,-0.1,0.1,0.0861493,0.1,-0.0861493,0.1,-0.1,-0.1,-0.0861493,0.1,-0.0861493,-0.1,-0.1,-0.1,0,-0.1,-0.1,0,0.1,-0.0861493,0,-0.1,0.1,0,0.1,0.0861492,-0.05,-0.1,-0.1,-0.05,-0.1,0.1,0.05,-0.1,0.1,0.05,-0.1,-0.1,0.0430746,0.1,0.0861492,-0.0430746,0.1,0.0861492,-0.0430746,0.1,-0.0861493,0.0430746,0.1,-0.0861493,0.0861493,0.1,-5.21541e-8,0.1,-0.1,0,-0.0861493,0.1,-5.21541e-8,-0.0430746,0.1,-4.47035e-8,0,0.1,-4.47035e-8,0.0430746,0.1,-5.21541e-8,-0.1,-0.1,0,0.0861493,0.1,-0.0430747,0.1,-0.1,-0.05,0.0861493,0.1,0.0430746,0.1,-0.1,0.05,0,0.1,0.0430746,-0.0430746,0.1,0.0430746,-0.0430746,0.1,-0.0430747,0,0.1,-0.0430747,0.0430746,0.1,-0.0430747,0.0430746,0.1,0.0430746,-0.0861493,0.1,-0.0430747,-0.0861493,0.1,0.0430746,-0.1,-0.1,-0.05,-0.1,-0.1,0.05]);
IndexedFaceSet14.coord = Coordinate15;

Shape11.geometry = IndexedFaceSet14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Transform10;

Transform Transform16 = createNode("Transform");
Transform16.translation = new SFVec3f(new float[7.89296e-8,0.145567,0.0253585]);
Transform16.scale = new SFVec3f(new float[1.68762,1.45567,0.609064]);
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Appearance18.material = Material19;

ImageTexture ImageTexture20 = createNode("ImageTexture");
ImageTexture20.url = new MFString(new java.lang.String["oak2.jpg"]);
Appearance18.texture = ImageTexture20;

TextureTransform TextureTransform21 = createNode("TextureTransform");
Appearance18.textureTransform = TextureTransform21;

Shape17.appearance = Appearance18;

Box Box22 = createNode("Box");
Box22.size = new SFVec3f(new float[0.2,0.2,0.2]);
Shape17.geometry = Box22;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

Transform9.children[1] = Transform16;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[7.95117e-8,0.145567,-0.0621155]);
Transform23.scale = new SFVec3f(new float[1.68762,1.45567,0.609064]);
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Appearance25.material = Material26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["tech.jpg"]);
Appearance25.texture = ImageTexture27;

Shape24.appearance = Appearance25;

IndexedFaceSet IndexedFaceSet28 = createNode("IndexedFaceSet");
IndexedFaceSet28.creaseAngle = 0.5;
IndexedFaceSet28.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,1,3,5,-1,3,2,5,-1,0,4,2,-1,0,1,4,-1]);
IndexedFaceSet28.coordIndex = new MFInt32(new int[6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,5,7,8,-1,7,6,8,-1,4,8,6,-1,4,5,8,-1]);
TextureCoordinate TextureCoordinate29 = createNode("TextureCoordinate");
TextureCoordinate29.point = new MFVec2f(new float[0,1,0,0,1,1,1,0,0.5,0.5,0.5,0.5]);
IndexedFaceSet28.texCoord = TextureCoordinate29;

Coordinate Coordinate30 = createNode("Coordinate");
Coordinate30.point = new MFVec3f(new float[-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.0676223,0.0676223,-0.0577598,0.0676223,-0.0676223,-0.0577598,-0.0676223,0.0676223,-0.0577598,-0.0676223,-0.0676223,-0.0577598,-6.8231e-9,6.8231e-9,-0.0577598]);
IndexedFaceSet28.coord = Coordinate30;

Shape24.geometry = IndexedFaceSet28;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform9.children[2] = Transform23;

children[1] = Transform9;

}
