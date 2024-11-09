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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("btn-film"));
Transform9.setTranslation(new float[]{0.208545,0.113851,-0.299736});
Transform9.setScale(new float[]{0.0820083,0.020502,0.0320341});
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
ImageTexture& ImageTexture12 =  ImageTexture();
ImageTexture12.setUrl(new CString[]{CString("btn-film.png")}, 1);
Appearance11.addChild(&ImageTexture12);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setCoordIndex(new int32_t[]{0,2,3,1,-1}, 5);
TextureCoordinate& TextureCoordinate14 =  TextureCoordinate();
TextureCoordinate14.setPoint(new float[]{0.0000980757,0.0145581,0,1,0.38331,0.0145581,0.606851,1}, 8);
IndexedFaceSet13.setTexCoord(&TextureCoordinate14);

Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{-0.5,-0.5,0,-0.5,0.5,0,-0.116788,-0.5,0,0.106851,0.5,0}, 12);
IndexedFaceSet13.setCoord(&Coordinate15);

Shape10.setGeometry(&IndexedFaceSet13);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
