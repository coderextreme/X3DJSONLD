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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:17 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:17 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString("Packaged by CosmoPackage")}, 1);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("buildings-right"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("fw"));
Transform10.setTranslation(new float[]{-1.82041,-1.79794,39.2256});
Transform10.setRotation(new float[]{0,1,0,4.71164});
Transform10.setScale(new float[]{4.16081,0.202305,1.13301});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setUrl(new CString[]{CString("fussweg.png")}, 1);
Appearance12.addChild(&ImageTexture14);

TextureTransform& TextureTransform15 =  TextureTransform();
TextureTransform15.setScale(new float[]{60,16});
Appearance12.setTextureTransform(TextureTransform15);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setCreaseAngle(0.5);
IndexedFaceSet16.setTexCoordIndex(new int32_t[]{2,19,20,30,22,-1,19,8,23,35,21,-1,28,24,38,40,-1,38,22,31,40,-1,32,10,41,43,-1,41,24,29,43,-1,20,44,39,31,-1,44,25,28,39,-1,25,46,42,29,-1,46,18,32,42,-1,23,50,48,36,-1,50,27,33,48,-1,27,53,51,34,-1,53,15,37,51,-1,33,26,45,49,-1,45,21,36,49,-1,37,18,47,52,-1,47,26,34,52,-1}, 92);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,5,6,13,7,-1,5,1,8,16,6,-1,12,9,18,19,-1,18,7,13,19,-1,14,2,20,21,-1,20,9,12,21,-1,6,22,19,13,-1,22,10,12,19,-1,10,23,21,12,-1,23,4,14,21,-1,8,25,24,16,-1,25,11,15,24,-1,11,27,26,15,-1,27,3,17,26,-1,15,10,22,24,-1,22,6,16,24,-1,17,4,23,26,-1,23,10,15,26,-1}, 92);
TextureCoordinate& TextureCoordinate17 =  TextureCoordinate();
TextureCoordinate17.setPoint(new float[]{0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184,0.078125,1.2184,0.078125,2.98896,0.078125,2.10368,0.078125,2.10368,0.15625,2.10368,0,2.10368,0.15625,1.66104,0.078125,1.66104,0.078125,1.66104,0,1.66104,0.117188,1.66104,0.117188,1.66104,0.117188,2.10368,0.117188,2.10368,0.117188,1.2184,0.0390625,1.66104,0.0390625,1.66104,0.0390625,2.10368,0.0390625,2.10368,0.0390625,1.2184,0.15625,1.88236,0.117188,1.88236,0.117188,1.88236,0.15625,1.43972,0.117188,1.43972,0.117188,1.43972,0.078125,1.88236,0.078125,1.88236,0.078125,1.43972,0.078125,1.43972,0.0390625,1.88236,0.0390625,1.88236,0,1.88236,0.0390625,1.43972,0.0390625,1.43972,0,1.43972}, 108);
IndexedFaceSet16.setTexCoord(&TextureCoordinate17);

Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setPoint(new float[]{-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681,-8.4375,10,-24.3681,-8.4375,10,-59.7793,-8.4375,10,-42.0737,-6.875,10,-42.0737,-10,10,-42.0737,-6.875,10,-33.2209,-8.4375,10,-33.2209,-10,10,-33.2209,-7.65625,10,-33.2209,-7.65625,10,-42.0737,-7.65625,10,-24.3681,-9.21875,10,-33.2209,-9.21875,10,-42.0737,-9.21875,10,-24.3681,-6.875,10,-37.6473,-7.65625,10,-37.6473,-6.875,10,-28.7945,-7.65625,10,-28.7945,-8.4375,10,-37.6473,-8.4375,10,-28.7945,-9.21875,10,-37.6473,-10,10,-37.6473,-9.21875,10,-28.7945,-10,10,-28.7945}, 84);
IndexedFaceSet16.setCoord(&Coordinate18);

Shape11.setGeometry(&IndexedFaceSet16);

Transform10.addChild(&Shape11);

Transform9.addChild(&Transform10);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("buildings"));
Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{38.1814,12.1006,-10.342});
Transform20.setScale(new float[]{1,1.19228,1});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setAmbientIntensity(0.226064);
Appearance22.addChild(&Material23);

ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setDEF(CString("_1"));
ImageTexture24.setUrl(new CString[]{CString("haus3.jpg")}, 1);
Appearance22.addChild(&ImageTexture24);

TextureTransform& TextureTransform25 =  TextureTransform();
TextureTransform25.setScale(new float[]{3.94955,1});
Appearance22.setTextureTransform(TextureTransform25);

Shape21.addChild(&Appearance22);

IndexedFaceSet& IndexedFaceSet26 =  IndexedFaceSet();
IndexedFaceSet26.setCreaseAngle(0.5);
IndexedFaceSet26.setTexCoordIndex(new int32_t[]{0,7,18,20,-1,18,10,12,20,-1,10,22,21,12,-1,22,6,3,21,-1,13,26,24,15,-1,26,2,8,24,-1,9,1,27,28,-1,27,13,15,28,-1,7,5,30,19,-1,30,16,11,19,-1,5,9,29,31,-1,29,14,17,31,-1,16,32,23,11,-1,32,4,6,23,-1,14,25,33,17,-1,25,8,4,33,-1,34,35,43,42,-1,39,40,37,36,-1,41,43,35,38,-1,38,37,40,41,-1}, 100);
IndexedFaceSet26.setCoordIndex(new int32_t[]{0,7,15,16,-1,15,10,11,16,-1,10,18,17,11,-1,18,6,3,17,-1,12,20,19,13,-1,20,2,8,19,-1,9,1,21,22,-1,21,12,13,22,-1,7,5,23,15,-1,23,14,10,15,-1,5,9,22,23,-1,22,13,14,23,-1,14,24,18,10,-1,24,4,6,18,-1,13,19,24,14,-1,19,8,4,24,-1,25,26,7,0,-1,1,9,28,27,-1,5,7,26,29,-1,29,28,9,5,-1}, 100);
TextureCoordinate& TextureCoordinate27 =  TextureCoordinate();
TextureCoordinate27.setPoint(new float[]{0,1,0,0,1,0,1,1,1,0.5,0,0.5,1,0.75,0,0.75,1,0.25,0,0.25,0.5,0.75,0.5,0.75,0.5,1,0.5,0,0.5,0.25,0.5,0.25,0.5,0.5,0.5,0.5,0.25,0.75,0.25,0.75,0.25,1,0.75,1,0.75,0.75,0.75,0.75,0.75,0.25,0.75,0.25,0.75,0,0.25,0,0.25,0.25,0.25,0.25,0.25,0.5,0.25,0.5,0.75,0.5,0.75,0.5,0,0.999917,0,0.749938,0,0,0,0.249979,0,0.499958,0.0784547,0,0.0784547,0.249979,0.0784547,0.499958,0.0784547,0.999917,0.0784547,0.749938}, 88);
IndexedFaceSet26.setTexCoord(&TextureCoordinate27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setPoint(new float[]{-10,10,8.69979,-10,-10,8.69979,8.01112,-10,13.7097,8.01112,10,13.7097,8.01112,0,13.7097,-10,0,8.69979,8.01112,5,13.7097,-10,5,8.69979,8.01112,-5,13.7097,-10,-5,8.69979,-1.98888,5,13.7097,-1.98888,10,13.7097,-1.98888,-10,13.7097,-1.98888,-5,13.7097,-1.98888,0,13.7097,-6.98888,5,13.7097,-6.98888,10,13.7097,3.01112,10,13.7097,3.01112,5,13.7097,3.01112,-5,13.7097,3.01112,-10,13.7097,-6.98888,-10,13.7097,-6.98888,-5,13.7097,-6.98888,0,13.7097,3.01112,0,13.7097,-14.6541,10,8.69979,-14.6541,5,8.69979,-14.6541,-10,8.69979,-14.6541,-5,8.69979,-14.6541,0,8.69979}, 90);
IndexedFaceSet26.setCoord(&Coordinate28);

Shape21.setGeometry(&IndexedFaceSet26);

Transform20.addChild(&Shape21);

Transform19.addChild(&Transform20);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{57.8741,12.1006,-10.342});
Transform29.setScale(new float[]{1,1.19228,1});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setAmbientIntensity(0.226064);
Appearance31.addChild(&Material32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUSE(CString("_1"));
Appearance31.addChild(&ImageTexture33);

TextureTransform& TextureTransform34 =  TextureTransform();
TextureTransform34.setScale(new float[]{3.94955,1});
Appearance31.setTextureTransform(TextureTransform34);

Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet35 =  IndexedFaceSet();
IndexedFaceSet35.setCreaseAngle(0.5);
IndexedFaceSet35.setTexCoordIndex(new int32_t[]{0,7,18,20,-1,18,10,12,20,-1,10,22,21,12,-1,22,6,3,21,-1,13,26,24,15,-1,26,2,8,24,-1,9,1,27,28,-1,27,13,15,28,-1,7,5,30,19,-1,30,16,11,19,-1,5,9,29,31,-1,29,14,17,31,-1,16,32,23,11,-1,32,4,6,23,-1,14,25,33,17,-1,25,8,4,33,-1,34,35,43,42,-1,39,40,37,36,-1,41,43,35,38,-1,38,37,40,41,-1}, 100);
IndexedFaceSet35.setCoordIndex(new int32_t[]{0,7,15,16,-1,15,10,11,16,-1,10,18,17,11,-1,18,6,3,17,-1,12,20,19,13,-1,20,2,8,19,-1,9,1,21,22,-1,21,12,13,22,-1,7,5,23,15,-1,23,14,10,15,-1,5,9,22,23,-1,22,13,14,23,-1,14,24,18,10,-1,24,4,6,18,-1,13,19,24,14,-1,19,8,4,24,-1,25,26,7,0,-1,1,9,28,27,-1,5,7,26,29,-1,29,28,9,5,-1}, 100);
TextureCoordinate& TextureCoordinate36 =  TextureCoordinate();
TextureCoordinate36.setPoint(new float[]{0,1,0,0,1,0,1,1,1,0.5,0,0.5,1,0.75,0,0.75,1,0.25,0,0.25,0.5,0.75,0.5,0.75,0.5,1,0.5,0,0.5,0.25,0.5,0.25,0.5,0.5,0.5,0.5,0.25,0.75,0.25,0.75,0.25,1,0.75,1,0.75,0.75,0.75,0.75,0.75,0.25,0.75,0.25,0.75,0,0.25,0,0.25,0.25,0.25,0.25,0.25,0.5,0.25,0.5,0.75,0.5,0.75,0.5,0,0.999917,0,0.749938,0,0,0,0.249979,0,0.499958,0.0784547,0,0.0784547,0.249979,0.0784547,0.499958,0.0784547,0.999917,0.0784547,0.749938}, 88);
IndexedFaceSet35.setTexCoord(&TextureCoordinate36);

Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setPoint(new float[]{-10,10,8.69979,-10,-10,8.69979,8.01112,-10,13.7097,8.01112,10,13.7097,8.01112,0,13.7097,-10,0,8.69979,8.01112,5,13.7097,-10,5,8.69979,8.01112,-5,13.7097,-10,-5,8.69979,-1.98888,5,13.7097,-1.98888,10,13.7097,-1.98888,-10,13.7097,-1.98888,-5,13.7097,-1.98888,0,13.7097,-6.98888,5,13.7097,-6.98888,10,13.7097,3.01112,10,13.7097,3.01112,5,13.7097,3.01112,-5,13.7097,3.01112,-10,13.7097,-6.98888,-10,13.7097,-6.98888,-5,13.7097,-6.98888,0,13.7097,3.01112,0,13.7097,-14.6541,10,8.69979,-14.6541,5,8.69979,-14.6541,-10,8.69979,-14.6541,-5,8.69979,-14.6541,0,8.69979}, 90);
IndexedFaceSet35.setCoord(&Coordinate37);

Shape30.setGeometry(&IndexedFaceSet35);

Transform29.addChild(&Shape30);

Transform19.addChild(&Transform29);

Transform9.addChild(&Transform19);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
