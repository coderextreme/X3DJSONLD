#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Thu, 12 Mar 2015 07:10:41 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 12 Mar 2015 07:10:41 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform& Transform10 =  Transform();
Transform10.setTranslation(new float[]{-0.000230302,0.155625,0.0887065});
Transform10.setRotation(new float[]{1,0.00000511572,3.72711e-9,1.5708});
Transform10.setScale(new float[]{1.53182,0.0858728,1.21022});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setAmbientIntensity(0);
Material13.setDiffuseColor(new float[]{0,0.0905258,0.0957447});
Material13.setSpecularColor(new float[]{1,1,1});
Material13.setEmissiveColor(new float[]{0,0.050292,0.0531915});
Material13.setShininess(0.12766);
Material13.setTransparency(0.787234);
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet14 =  IndexedFaceSet();
IndexedFaceSet14.setCreaseAngle(3.14159);
IndexedFaceSet14.setCoordIndex(new int32_t[]{1,40,26,39,7,12,13,-1,12,8,10,13,-1,8,15,14,10,-1,15,5,28,21,30,3,14,-1,10,14,16,11,-1,14,3,2,16,-1,0,1,13,17,-1,13,10,11,17,-1,8,12,18,9,-1,12,7,6,18,-1,4,5,15,19,-1,15,8,9,19,-1,21,28,27,20,-1,28,5,4,27,-1,3,30,29,2,-1,30,21,20,29,-1,23,32,31,24,-1,32,17,11,31,-1,9,18,33,34,-1,33,23,24,34,-1,4,19,35,27,-1,35,25,20,27,-1,19,9,34,35,-1,34,24,25,35,-1,25,36,29,20,-1,36,16,2,29,-1,24,31,36,25,-1,31,11,16,36,-1,18,6,37,33,-1,37,22,23,33,-1,22,38,32,23,-1,38,0,17,32,-1,7,39,37,6,-1,39,26,22,37,-1,26,40,38,22,-1,40,1,0,38,-1}, 186);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{-0.0861493,0.1,0.0861492,-0.1,-0.1,0.1,0.0861493,0.1,0.0861492,0.1,-0.1,0.1,0.0861493,0.1,-0.0861493,0.1,-0.1,-0.1,-0.0861493,0.1,-0.0861493,-0.1,-0.1,-0.1,0,-0.1,-0.1,0,0.1,-0.0861493,0,-0.1,0.1,0,0.1,0.0861492,-0.05,-0.1,-0.1,-0.05,-0.1,0.1,0.05,-0.1,0.1,0.05,-0.1,-0.1,0.0430746,0.1,0.0861492,-0.0430746,0.1,0.0861492,-0.0430746,0.1,-0.0861493,0.0430746,0.1,-0.0861493,0.0861493,0.1,-5.21541e-8,0.1,-0.1,0,-0.0861493,0.1,-5.21541e-8,-0.0430746,0.1,-4.47035e-8,0,0.1,-4.47035e-8,0.0430746,0.1,-5.21541e-8,-0.1,-0.1,0,0.0861493,0.1,-0.0430747,0.1,-0.1,-0.05,0.0861493,0.1,0.0430746,0.1,-0.1,0.05,0,0.1,0.0430746,-0.0430746,0.1,0.0430746,-0.0430746,0.1,-0.0430747,0,0.1,-0.0430747,0.0430746,0.1,-0.0430747,0.0430746,0.1,0.0430746,-0.0861493,0.1,-0.0430747,-0.0861493,0.1,0.0430746,-0.1,-0.1,-0.05,-0.1,-0.1,0.05}, 123);
IndexedFaceSet14.setCoord(&Coordinate15);

Shape11.setGeometry(&IndexedFaceSet14);

Transform10.addChild(&Shape11);

Transform9.addChild(&Transform10);

Transform& Transform16 =  Transform();
Transform16.setTranslation(new float[]{7.89296e-8,0.145567,0.0253585});
Transform16.setScale(new float[]{1.68762,1.45567,0.609064});
Shape& Shape17 =  Shape();
Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Appearance18.addChild(&Material19);

ImageTexture& ImageTexture20 =  ImageTexture();
ImageTexture20.setUrl(new CString[]{CString("oak2.jpg")}, 1);
Appearance18.addChild(&ImageTexture20);

TextureTransform& TextureTransform21 =  TextureTransform();
Appearance18.setTextureTransform(TextureTransform21);

Shape17.addChild(&Appearance18);

Box& Box22 =  Box();
Box22.setSize(new float[]{0.2,0.2,0.2});
Shape17.setGeometry(&Box22);

Transform16.addChild(&Shape17);

Transform9.addChild(&Transform16);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{7.95117e-8,0.145567,-0.0621155});
Transform23.setScale(new float[]{1.68762,1.45567,0.609064});
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Appearance25.addChild(&Material26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("tech.jpg")}, 1);
Appearance25.addChild(&ImageTexture27);

Shape24.addChild(&Appearance25);

IndexedFaceSet& IndexedFaceSet28 =  IndexedFaceSet();
IndexedFaceSet28.setCreaseAngle(0.5);
IndexedFaceSet28.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,1,3,5,-1,3,2,5,-1,0,4,2,-1,0,1,4,-1}, 36);
IndexedFaceSet28.setCoordIndex(new int32_t[]{6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,5,7,8,-1,7,6,8,-1,4,8,6,-1,4,5,8,-1}, 36);
TextureCoordinate& TextureCoordinate29 =  TextureCoordinate();
TextureCoordinate29.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0.5,0.5,0.5}, 12);
IndexedFaceSet28.setTexCoord(&TextureCoordinate29);

Coordinate& Coordinate30 =  Coordinate();
Coordinate30.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.0676223,0.0676223,-0.0577598,0.0676223,-0.0676223,-0.0577598,-0.0676223,0.0676223,-0.0577598,-0.0676223,-0.0676223,-0.0577598,-6.8231e-9,6.8231e-9,-0.0577598}, 27);
IndexedFaceSet28.setCoord(&Coordinate30);

Shape24.setGeometry(&IndexedFaceSet28);

Transform23.addChild(&Shape24);

Transform9.addChild(&Transform23);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
