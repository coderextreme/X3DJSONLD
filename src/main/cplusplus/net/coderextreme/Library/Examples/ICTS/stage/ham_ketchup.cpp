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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:05 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:05 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("ketchup"));
Transform9.setTranslation(new float[]{0,-0.0445648,0});
Transform9.setScale(new float[]{3.78678,3.78678,3.78678});
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
ImageTexture& ImageTexture12 =  ImageTexture();
ImageTexture12.setUrl(new CString[]{CString("ketchup.png")}, 1);
Appearance11.addChild(&ImageTexture12);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setCreaseAngle(0.5);
IndexedFaceSet13.setTexCoordIndex(new int32_t[]{10,8,16,14,-1,4,17,13,11,-1,18,4,12,22,-1,9,23,21,20,-1,24,5,28,26,-1,8,29,25,15,-1,27,5,30,32,-1,33,9,19,31,-1,17,3,13,-1,3,10,13,-1,0,31,30,-1,0,33,31,-1,23,1,21,-1,1,18,21,-1,29,2,25,-1,2,24,25,-1,19,6,32,-1,6,27,32,-1,16,7,14,-1,7,11,14,-1,12,6,22,-1,6,20,22,-1,28,7,26,-1,7,15,26,-1}, 104);
IndexedFaceSet13.setCoordIndex(new int32_t[]{9,7,12,11,-1,4,13,11,10,-1,14,4,10,16,-1,8,17,16,15,-1,18,5,20,19,-1,7,21,19,12,-1,20,5,22,23,-1,24,8,15,23,-1,13,1,11,-1,1,9,11,-1,3,23,22,-1,3,24,23,-1,17,0,16,-1,0,14,16,-1,21,2,19,-1,2,18,19,-1,15,6,23,-1,6,20,23,-1,12,6,11,-1,6,10,11,-1,10,6,16,-1,6,15,16,-1,20,6,19,-1,6,12,19,-1}, 104);
TextureCoordinate& TextureCoordinate14 =  TextureCoordinate();
TextureCoordinate14.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75}, 68);
IndexedFaceSet13.setTexCoord(&TextureCoordinate14);

Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{-0.01,0.01,0.01,0.01,0.01,0.01,0.01,0.01,-0.01,-0.01,0.01,-0.01,0,0.01,0.01,0,0.01,-0.01,0,0.013539,0,0.01,0.01,0,-0.01,0.01,0,0.01,0.01,0.005,0,0.0120447,0.005,0.005,0.0120447,0.005,0.005,0.0120447,0,0.005,0.01,0.01,-0.005,0.01,0.01,-0.005,0.0120447,0,-0.005,0.0120447,0.005,-0.01,0.01,0.005,0.005,0.01,-0.01,0.005,0.0120447,-0.005,0,0.0120447,-0.005,0.01,0.01,-0.005,-0.005,0.01,-0.01,-0.005,0.0120447,-0.005,-0.01,0.01,-0.005}, 75);
IndexedFaceSet13.setCoord(&Coordinate15);

Shape10.setGeometry(&IndexedFaceSet13);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
