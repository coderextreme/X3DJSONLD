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
meta3.setContent(CString("Sun, 15 Mar 2015 09:35:18 GMT"));
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
meta6.setContent(CString("Sun, 15 Mar 2015 09:35:18 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("wins"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("left"));
Shape& Shape11 =  Shape();
Shape11.setDEF(CString("_1"));
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setDEF(CString("_2"));
Material13.setDiffuseColor(new float[]{1,0.946965,0.745643});
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setDEF(CString("_3"));
ImageTexture14.setUrl(new CString[]{CString("w_win_grid.jpg")}, 1);
Appearance12.addChild(&ImageTexture14);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1}, 8);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{0.0214319,0.986819,0.629956,0.974442,0.648521,0.0255575,0.0049296,0.021432}, 8);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{-1.142,3.274,-7.786,-1.144,3.275,-9.158,-1.143,2.221,-9.158,-1.142,2.221,-7.784}, 12);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet15);

Transform10.addChild(&Shape11);

Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{0.025,-0.00100017,1.5535});
Shape& Shape19 =  Shape();
Shape19.setUSE(CString("_1"));
Transform18.addChild(&Shape19);

Transform10.addChild(&Transform18);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{0.0270001,-0.00250006,3.4015});
Shape& Shape21 =  Shape();
Shape21.setUSE(CString("_1"));
Transform20.addChild(&Shape21);

Transform10.addChild(&Transform20);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{0.0300001,-0.00400019,5.344});
Shape& Shape23 =  Shape();
Shape23.setUSE(CString("_1"));
Transform22.addChild(&Shape23);

Transform10.addChild(&Transform22);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{0.0330001,-0.00500011,7.366});
Shape& Shape25 =  Shape();
Shape25.setUSE(CString("_1"));
Transform24.addChild(&Shape25);

Transform10.addChild(&Transform24);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{0.035,-0.00600004,8.8935});
Shape& Shape27 =  Shape();
Shape27.setUSE(CString("_1"));
Transform26.addChild(&Shape27);

Transform10.addChild(&Transform26);

Transform9.addChild(&Transform10);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("mid"));
Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{0.0419999,-0.00950003,13.868});
Shape& Shape30 =  Shape();
Shape30.setUSE(CString("_1"));
Transform29.addChild(&Shape30);

Transform28.addChild(&Transform29);

Transform& Transform31 =  Transform();
Transform31.setTranslation(new float[]{0.044,-0.0105,15.475});
Shape& Shape32 =  Shape();
Shape32.setUSE(CString("_1"));
Transform31.addChild(&Shape32);

Transform28.addChild(&Transform31);

Transform& Transform33 =  Transform();
Transform33.setTranslation(new float[]{0.0470001,-0.0120001,17.301});
Shape& Shape34 =  Shape();
Shape34.setUSE(CString("_1"));
Transform33.addChild(&Shape34);

Transform28.addChild(&Transform33);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{0.0500001,-0.013,19.1965});
Shape& Shape36 =  Shape();
Shape36.setUSE(CString("_1"));
Transform35.addChild(&Shape36);

Transform28.addChild(&Transform35);

Transform& Transform37 =  Transform();
Transform37.setTranslation(new float[]{0.0519999,-0.0140002,20.892});
Shape& Shape38 =  Shape();
Shape38.setUSE(CString("_1"));
Transform37.addChild(&Shape38);

Transform28.addChild(&Transform37);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("tx"));
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setUSE(CString("_2"));
Appearance41.addChild(&Material42);

ImageTexture& ImageTexture43 =  ImageTexture();
ImageTexture43.setUSE(CString("_3"));
Appearance41.addChild(&ImageTexture43);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet44 =  IndexedFaceSet();
IndexedFaceSet44.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1}, 8);
TextureCoordinate& TextureCoordinate45 =  TextureCoordinate();
TextureCoordinate45.setPoint(new float[]{0.649836,0.0123979,0.353507,0.00640266,0.349685,0.971128,0.629519,0.977444}, 8);
IndexedFaceSet44.setTexCoord(&TextureCoordinate45);

Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{-1.089,2.207,13.548,-1.089,2.206,14.228,-1.089,3.259,14.237,-1.09,3.26,13.539}, 12);
IndexedFaceSet44.setCoord(&Coordinate46);

Shape40.setGeometry(&IndexedFaceSet44);

Transform39.addChild(&Shape40);

Transform28.addChild(&Transform39);

Transform9.addChild(&Transform28);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("right"));
Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[]{0.056,-0.0160003,23.924});
Shape& Shape49 =  Shape();
Shape49.setUSE(CString("_1"));
Transform48.addChild(&Shape49);

Transform47.addChild(&Transform48);

Transform& Transform50 =  Transform();
Transform50.setTranslation(new float[]{0.059,-0.0170002,25.8105});
Shape& Shape51 =  Shape();
Shape51.setUSE(CString("_1"));
Transform50.addChild(&Shape51);

Transform47.addChild(&Transform50);

Transform& Transform52 =  Transform();
Transform52.setTranslation(new float[]{0.0619999,-0.0190001,27.846});
Shape& Shape53 =  Shape();
Shape53.setUSE(CString("_1"));
Transform52.addChild(&Shape53);

Transform47.addChild(&Transform52);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.064,-0.02,29.518});
Shape& Shape55 =  Shape();
Shape55.setUSE(CString("_1"));
Transform54.addChild(&Shape55);

Transform47.addChild(&Transform54);

Transform& Transform56 =  Transform();
Transform56.setTranslation(new float[]{0.0660001,-0.0210001,30.999});
Shape& Shape57 =  Shape();
Shape57.setUSE(CString("_1"));
Transform56.addChild(&Shape57);

Transform47.addChild(&Transform56);

Transform& Transform58 =  Transform();
Transform58.setTranslation(new float[]{0.068,-0.0220003,32.625});
Shape& Shape59 =  Shape();
Shape59.setUSE(CString("_1"));
Transform58.addChild(&Shape59);

Transform47.addChild(&Transform58);

Transform9.addChild(&Transform47);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
