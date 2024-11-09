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
meta3.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Transform& Transform8 =  Transform();
Transform8.setDEF(CString("Background"));
Background& Background9 =  Background();
Background9.setSkyAngle(new float[]{0.8,1.3,1.4,1.5708}, 4);
Background9.setSkyColor(new float[]{0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98}, 15);
Background9.setGroundAngle(new float[]{0.6,1.2,1.3,1.5708}, 4);
Background9.setGroundColor(new float[]{0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98}, 15);
Transform8.addChild(&Background9);

Scene7.addChild(&Transform8);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("schatten_1"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setUrl(new CString[]{CString("pilzshadow.png")}, 1);
Appearance12.addChild(&ImageTexture14);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setCreaseAngle(0.5);
IndexedFaceSet15.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{-3.22547,0.0167124,-3.22547,-3.22547,0.0167124,3.22547,3.22547,0.0167124,3.22547,3.22547,0.0167124,-3.22547}, 12);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet15);

Transform10.addChild(&Shape11);

Scene7.addChild(&Transform10);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("schatten"));
Transform18.setTranslation(new float[]{6,0,0});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Appearance20.addChild(&Material21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setUrl(new CString[]{CString("pilzshadow.png")}, 1);
Appearance20.addChild(&ImageTexture22);

Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setCreaseAngle(0.5);
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate24 =  TextureCoordinate();
TextureCoordinate24.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet23.setTexCoord(&TextureCoordinate24);

Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{-3.22547,0.0167124,-3.22547,-3.22547,0.0167124,3.22547,3.22547,0.0167124,3.22547,3.22547,0.0167124,-3.22547}, 12);
IndexedFaceSet23.setCoord(&Coordinate25);

Shape19.setGeometry(&IndexedFaceSet23);

Transform18.addChild(&Shape19);

Scene7.addChild(&Transform18);

X3D0.setScene(&Scene7);

}
