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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:59 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:59 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString("Packaged by CosmoPackage")}, 1);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("close"));
Transform9.setTranslation(new float[]{0.18781,0.0763948,-0.29764});
Transform9.setScale(new float[]{0.0336106,0.0850584,1.06768});
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
Material& Material12 =  Material();
Material12.setAmbientIntensity(0);
Material12.setDiffuseColor(new float[]{0,0,0});
Material12.setEmissiveColor(new float[]{1,0.0552964,0});
Material12.setShininess(0);
Material12.setTransparency(0.734043);
Appearance11.addChild(&Material12);

ImageTexture& ImageTexture13 =  ImageTexture();
ImageTexture13.setUrl(new CString[]{CString("reflect2.png")}, 1);
Appearance11.addChild(&ImageTexture13);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet14 =  IndexedFaceSet();
IndexedFaceSet14.setCreaseAngle(0.5);
IndexedFaceSet14.setCoordIndex(new int32_t[]{1,0,3,2,-1}, 5);
TextureCoordinate& TextureCoordinate15 =  TextureCoordinate();
TextureCoordinate15.setPoint(new float[]{0.00516611,202.718,0.00516611,158.648,0.247524,-35.8107,0.491422,-21.6497,0.457532,202.718,0.457532,158.648,0.00516611,198.23,0.909898,163.137,0.879118,202.718,0.247524,-35.8107,0.0157531,-35.81}, 22);
IndexedFaceSet14.setTexCoord(&TextureCoordinate15);

Coordinate& Coordinate16 =  Coordinate();
Coordinate16.setPoint(new float[]{-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0}, 12);
IndexedFaceSet14.setCoord(&Coordinate16);

Shape10.setGeometry(&IndexedFaceSet14);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
