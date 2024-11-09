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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:55 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:55 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString("Packaged by CosmoPackage")}, 1);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("ad"));
Transform& Transform10 =  Transform();
Transform10.setTranslation(new float[]{-0.00000354004,3.23187,-0.317778});
Transform10.setRotation(new float[]{1,0.00000126533,-0.00000117221,1.5708});
Transform10.setScale(new float[]{1.10125,0.662583,0.323521});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
ImageTexture& ImageTexture13 =  ImageTexture();
ImageTexture13.setDEF(CString("_1"));
ImageTexture13.setUrl(new CString[]{CString("premiere-world.png")}, 1);
Appearance12.addChild(&ImageTexture13);

TextureTransform& TextureTransform14 =  TextureTransform();
TextureTransform14.setScale(new float[]{-2,1});
Appearance12.setTextureTransform(TextureTransform14);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setCreaseAngle(0.5);
IndexedFaceSet15.setTexCoordIndex(new int32_t[]{1,0,5,4,-1,7,6,2,3,-1}, 10);
IndexedFaceSet15.setCoordIndex(new int32_t[]{3,2,1,0,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{0.00230294,0.993997,0.00562096,0.00190586,0.994394,0.993997,0.997712,0.00190586,0.994394,0.00522393,0.994394,0.993997,0.00230294,0.993997,0.00230294,0.00522393}, 16);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{-10,-9.90446,10,-10,-9.90446,6.77007,-10,9.40845,6.77007,-10,9.40845,10,10,-9.90446,10,10,-9.90446,6.77007,10,9.40845,6.77007,10,9.40845,10}, 24);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet15);

Transform10.addChild(&Shape11);

Transform9.addChild(&Transform10);

Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{-0.00000354099,3.21449,-0.318831});
Transform18.setRotation(new float[]{1,0.00000126533,-0.00000117221,1.5708});
Transform18.setScale(new float[]{1.0942,0.658338,0.321449});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setUSE(CString("_1"));
Appearance20.addChild(&ImageTexture21);

TextureTransform& TextureTransform22 =  TextureTransform();
TextureTransform22.setScale(new float[]{2,1});
Appearance20.setTextureTransform(TextureTransform22);

Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setCreaseAngle(0.5);
IndexedFaceSet23.setTexCoordIndex(new int32_t[]{12,13,2,3,-1,7,6,14,15,-1,8,9,1,0,-1,4,5,11,10,-1}, 20);
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,3,-1,7,6,5,4,-1,8,9,1,0,-1,4,5,11,10,-1}, 20);
TextureCoordinate& TextureCoordinate24 =  TextureCoordinate();
TextureCoordinate24.setPoint(new float[]{0.00220408,0.000687301,0.00220408,0.996833,0.00230294,0.993997,0.00562096,0.00190586,0.989256,0.00236673,0.989256,0.998512,0.994394,0.993997,0.997712,0.00190586,0.995439,0.000687301,0.995439,0.996833,0.00624149,0.00236673,0.00624149,0.998513,0.994394,0.00522393,0.994394,0.993997,0.00230294,0.993997,0.00230294,0.00522393}, 32);
IndexedFaceSet23.setTexCoord(&TextureCoordinate24);

Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{-10,-9.90446,10,-10,-9.90446,6.77007,-10,9.40845,6.77007,-10,9.40845,10,10,-9.90446,10,10,-9.90446,6.77007,10,9.40845,6.77007,10,9.40845,10,-4.997,-9.90446,10,-4.997,-9.90446,6.77007,5.04934,-9.90446,10,5.04934,-9.90446,6.77007}, 36);
IndexedFaceSet23.setCoord(&Coordinate25);

Shape19.setGeometry(&IndexedFaceSet23);

Transform18.addChild(&Shape19);

Transform9.addChild(&Transform18);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
