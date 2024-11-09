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
WorldInfo8.setInfo(new CString[]{CString("Packaged by CosmoPackage")}, 1);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("hauptstrasse"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("fw"));
Transform10.setTranslation(new float[]{-158.311,-2.03119,87.2159});
Transform10.setRotation(new float[]{0.0,1.0,0.0,4.71164});
Transform10.setScale(new float[]{5.43485,0.202305,3.74729});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setUrl(new CString[]{CString("fussweg.png")}, 1);
Appearance12.addChild(&ImageTexture14);

TextureTransform& TextureTransform15 =  TextureTransform();
TextureTransform15.setScale(new float[]{60.0,16.0});
Appearance12.setTextureTransform(TextureTransform15);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setCreaseAngle(0.5);
IndexedFaceSet16.setTexCoordIndex(new int32_t[]{2,19,20,30,22,-1,19,8,23,35,21,-1,28,24,38,40,-1,38,22,31,40,-1,32,10,41,43,-1,41,24,29,43,-1,20,44,39,31,-1,44,25,28,39,-1,25,46,42,29,-1,46,18,32,42,-1,23,50,48,36,-1,50,27,33,48,-1,27,53,51,34,-1,53,15,37,51,-1,33,26,45,49,-1,45,21,36,49,-1,37,18,47,52,-1,47,26,34,52,-1}, 92);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,5,6,13,7,-1,5,1,8,16,6,-1,12,9,18,19,-1,18,7,13,19,-1,14,2,20,21,-1,20,9,12,21,-1,6,22,19,13,-1,22,10,12,19,-1,10,23,21,12,-1,23,4,14,21,-1,8,25,24,16,-1,25,11,15,24,-1,11,27,26,15,-1,27,3,17,26,-1,15,10,22,24,-1,22,6,16,24,-1,17,4,23,26,-1,23,10,15,26,-1}, 92);
TextureCoordinate& TextureCoordinate17 =  TextureCoordinate();
TextureCoordinate17.setPoint(new float[]{0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0.0,2.39878,0.0,1.80859,0.03125,2.98896,0.0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0.0,1.5135,0.0,1.2184,0.0625,1.2184,0.09375,1.2184,0.078125,1.2184,0.078125,2.98896,0.078125,2.10368,0.078125,2.10368,0.15625,2.10368,0.0,2.10368,0.15625,1.66104,0.078125,1.66104,0.078125,1.66104,0.0,1.66104,0.117188,1.66104,0.117188,1.66104,0.117188,2.10368,0.117188,2.10368,0.117188,1.2184,0.0390625,1.66104,0.0390625,1.66104,0.0390625,2.10368,0.0390625,2.10368,0.0390625,1.2184,0.15625,1.88236,0.117188,1.88236,0.117188,1.88236,0.15625,1.43972,0.117188,1.43972,0.117188,1.43972,0.078125,1.88236,0.078125,1.88236,0.078125,1.43972,0.078125,1.43972,0.0390625,1.88236,0.0390625,1.88236,0.0,1.88236,0.0390625,1.43972,0.0390625,1.43972,0.0,1.43972}, 108);
IndexedFaceSet16.setTexCoord(&TextureCoordinate17);

Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setPoint(new float[]{-6.875,10.0,-59.7793,-10.0,10.0,-59.7793,-6.875,10.0,-24.3681,-10.0,10.0,-24.3681,-8.4375,10.0,-24.3681,-8.4375,10.0,-59.7793,-8.4375,10.0,-42.0737,-6.875,10.0,-42.0737,-10.0,10.0,-42.0737,-6.875,10.0,-33.2209,-8.4375,10.0,-33.2209,-10.0,10.0,-33.2209,-7.65625,10.0,-33.2209,-7.65625,10.0,-42.0737,-7.65625,10.0,-24.3681,-9.21875,10.0,-33.2209,-9.21875,10.0,-42.0737,-9.21875,10.0,-24.3681,-6.875,10.0,-37.6473,-7.65625,10.0,-37.6473,-6.875,10.0,-28.7945,-7.65625,10.0,-28.7945,-8.4375,10.0,-37.6473,-8.4375,10.0,-28.7945,-9.21875,10.0,-37.6473,-10.0,10.0,-37.6473,-9.21875,10.0,-28.7945,-10.0,10.0,-28.7945}, 84);
IndexedFaceSet16.setCoord(&Coordinate18);

Shape11.setGeometry(&IndexedFaceSet16);

Transform10.addChild(&Shape11);

Transform9.addChild(&Transform10);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("str_norm"));
Transform19.setTranslation(new float[]{-0.596493,0.392951,22.1721});
Transform19.setRotation(new float[]{-0.577915,-0.577843,-0.576292,2.09122});
Transform19.setScale(new float[]{24.5488,132.656,11.9505});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setAmbientIntensity(0.16);
Material22.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance21.addChild(&Material22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setUrl(new CString[]{CString("str_norm.png")}, 1);
Appearance21.addChild(&ImageTexture23);

TextureTransform& TextureTransform24 =  TextureTransform();
TextureTransform24.setScale(new float[]{2.0,7.0});
Appearance21.setTextureTransform(TextureTransform24);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setCoordIndex(new int32_t[]{0,5,15,16,-1,15,9,10,16,-1,5,1,17,15,-1,17,11,9,15,-1,9,19,18,10,-1,19,6,7,18,-1,11,20,19,9,-1,20,8,6,19,-1,6,22,21,7,-1,22,13,12,21,-1,13,24,23,12,-1,24,4,3,23,-1,8,25,22,6,-1,25,14,13,22,-1,14,26,24,13,-1,26,2,4,24,-1}, 80);
TextureCoordinate& TextureCoordinate26 =  TextureCoordinate();
TextureCoordinate26.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.5,1.0,0.5,0.0,0.5,0.5,0.0,0.5,1.0,0.5,0.5,0.25,0.0,0.25,1.0,0.25,0.0,0.75,0.5,0.75,1.0,0.75,0.5,0.125,0.0,0.125,1.0,0.125,0.0,0.375,0.5,0.375,1.0,0.375,0.0,0.625,0.5,0.625,0.0,0.875,0.5,0.875,1.0,0.625,1.0,0.875}, 54);
IndexedFaceSet25.setTexCoord(&TextureCoordinate26);

Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0,0.0,0.5,0.0,0.0,-0.5,0.0,0.0,0.0,0.0,-0.5,0.0,0.0,0.5,0.0,0.0,0.0,-0.25,0.0,-0.5,-0.25,0.0,0.5,-0.25,0.0,-0.5,0.25,0.0,0.0,0.25,0.0,0.5,0.25,0.0,0.0,-0.375,0.0,-0.5,-0.375,0.0,0.5,-0.375,0.0,-0.5,-0.125,0.0,0.0,-0.125,0.0,0.5,-0.125,0.0,-0.5,0.125,0.0,0.0,0.125,0.0,-0.5,0.375,0.0,0.0,0.375,0.0,0.5,0.125,0.0,0.5,0.375,0.0}, 81);
IndexedFaceSet25.setCoord(&Coordinate27);

Shape20.setGeometry(&IndexedFaceSet25);

Transform19.addChild(&Shape20);

Transform9.addChild(&Transform19);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

//}
