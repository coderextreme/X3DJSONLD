//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:01 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:01 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("bg"));
Transform10.setTranslation(new float[]{0.0699042,0.123244,-0.29999});
Transform10.setScale(new float[]{1.08258,0.948483,0.999968});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
ImageTexture& ImageTexture13 =  ImageTexture();
ImageTexture13.setUrl(new CString[]{CString("reflect2.png")}, 1);
Appearance12.addChild(&ImageTexture13);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet14 =  IndexedFaceSet();
IndexedFaceSet14.setCreaseAngle(0.5);
IndexedFaceSet14.setColorIndex(new int[]{1,1,0,0,-1}, 5);
IndexedFaceSet14.setCoordIndex(new int32_t[]{2,3,0,1,-1}, 5);
CColor& Color15 =  CColor();
Color15.setColor(new float[]{0.112299,0.473076,1.0,0.144385,0.354857,1.0}, 6);
IndexedFaceSet14.setColor(&Color15);

TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{0.00516611,202.718,0.00516611,158.648,0.247524,-35.8107,0.491422,-21.6497,0.457532,202.718,0.457532,158.648,0.00516611,198.23,0.909898,163.137,0.879118,202.718,0.247524,-35.8107,0.0157531,-35.81}, 22);
IndexedFaceSet14.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{-0.230846,-0.066663,0.0,-0.230846,-0.193214,0.0,0.101703,-0.193214,0.0,0.101703,-0.066663,0.0}, 12);
IndexedFaceSet14.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet14);

Transform10.addChild(&Shape11);

Transform9.addChild(&Transform10);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("Else"));
Transform18.setTranslation(new float[]{-0.150525,0.0317122,-0.297743});
Transform18.setScale(new float[]{0.0412843,0.0412938,0.412821});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setUrl(new CString[]{CString("else.gif")}, 1);
Appearance20.addChild(&ImageTexture21);

Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet22 =  IndexedFaceSet();
IndexedFaceSet22.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate23 =  TextureCoordinate();
TextureCoordinate23.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet22.setTexCoord(&TextureCoordinate23);

Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet22.setCoord(&Coordinate24);

Shape19.setGeometry(&IndexedFaceSet22);

Transform18.addChild(&Shape19);

Transform9.addChild(&Transform18);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

//}
