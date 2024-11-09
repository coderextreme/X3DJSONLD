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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:23 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:23 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setTranslation(new float[]{0.192385,0.223635,-0.299671});
Transform9.setScale(new float[]{0.0495934,0.198373,0.0387454});
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
ImageTexture& ImageTexture12 =  ImageTexture();
ImageTexture12.setUrl(new CString[]{CString("filme-on.png")}, 1);
Appearance11.addChild(&ImageTexture12);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setSolid(False);
IndexedFaceSet13.setColorPerVertex(False);
IndexedFaceSet13.setColorIndex(new int[]{0}, 1);
IndexedFaceSet13.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
CColor& Color14 =  CColor();
Color14.setColor(new float[]{1,1,1}, 3);
IndexedFaceSet13.setColor(&Color14);

TextureCoordinate& TextureCoordinate15 =  TextureCoordinate();
TextureCoordinate15.setPoint(new float[]{1,0.4437,1,0.590405,0,0.590405,0,0.4437}, 8);
IndexedFaceSet13.setTexCoord(&TextureCoordinate15);

Coordinate& Coordinate16 =  Coordinate();
Coordinate16.setPoint(new float[]{0.5,-0.0562996,0,0.5,0.0904053,0,-0.5,0.0904054,0,-0.5,-0.0562996,0}, 12);
IndexedFaceSet13.setCoord(&Coordinate16);

Shape10.setGeometry(&IndexedFaceSet13);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
