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
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:56 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:56 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Group8.addChild(&WorldInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("level1"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("Glow1"));
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("Glow"));
Billboard& Billboard13 =  Billboard();
Billboard13.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("glow"));
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
ImageTexture& ImageTexture17 =  ImageTexture();
ImageTexture17.setUrl(new CString[]{CString("bt-glow.png")}, 1);
Appearance16.addChild(&ImageTexture17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setColorIndex(new int[]{1,1,1,-1,1,1,1,-1}, 8);
IndexedFaceSet18.setCoordIndex(new int32_t[]{1,2,0,-1,2,3,0,-1}, 8);
CColor& Color19 =  CColor();
Color19.setColor(new float[]{0.8,0.198115,0.0,1.0,0.0603581,0.0}, 6);
IndexedFaceSet18.setColor(&Color19);

TextureCoordinate& TextureCoordinate20 =  TextureCoordinate();
TextureCoordinate20.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.5,0.0,0.5,0.5,1.0,0.5,0.0}, 16);
IndexedFaceSet18.setTexCoord(&TextureCoordinate20);

Coordinate& Coordinate21 =  Coordinate();
Coordinate21.setPoint(new float[]{-0.5,-0.502186,0.0,0.5,-0.502186,0.0,0.5,0.497814,0.0,-0.5,0.497814,0.0}, 12);
IndexedFaceSet18.setCoord(&Coordinate21);

Shape15.setGeometry(&IndexedFaceSet18);

Transform14.addChild(&Shape15);

Billboard13.addChild(&Transform14);

Transform12.addChild(&Billboard13);

Transform11.addChild(&Transform12);

Transform10.addChild(&Transform11);

Group8.addChild(&Transform10);

Scene7.addChild(&Group8);

X3D0.setScene(&Scene7);

//}
