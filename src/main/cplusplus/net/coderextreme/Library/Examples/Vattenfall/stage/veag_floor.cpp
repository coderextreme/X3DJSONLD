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
WorldInfo8.setInfo(new CString[]{CString("Packaged by CosmoPackage")}, 1);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("veag-floor"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("front"));
Transform& Transform11 =  Transform();
Transform11.setTranslation(new float[]{1.47039,-1.73798,10.4054});
Transform11.setScale(new float[]{3.58919,0.202305,1.03599});
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDEF(CString("_1"));
Appearance13.addChild(&Material14);

ImageTexture& ImageTexture15 =  ImageTexture();
ImageTexture15.setDEF(CString("_2"));
ImageTexture15.setUrl(new CString[]{CString("fussweg.png")}, 1);
Appearance13.addChild(&ImageTexture15);

TextureTransform& TextureTransform16 =  TextureTransform();
TextureTransform16.setDEF(CString("_3"));
TextureTransform16.setScale(new float[]{60,16});
Appearance13.setTextureTransform(TextureTransform16);

Shape12.addChild(&Appearance13);

IndexedFaceSet& IndexedFaceSet17 =  IndexedFaceSet();
IndexedFaceSet17.setCreaseAngle(0.5);
IndexedFaceSet17.setTexCoordIndex(new int32_t[]{11,5,13,12,-1,13,3,10,12,-1,2,14,12,10,-1,14,7,11,12,-1,15,3,13,17,-1,13,5,16,17,-1,6,18,17,16,-1,18,1,15,17,-1,21,4,23,22,-1,23,5,11,22,-1,7,24,22,11,-1,24,47,21,22,-1,19,6,16,25,-1,16,5,23,25,-1,4,26,25,23,-1,26,0,19,25,-1,46,44,29,28,-1,29,9,27,28,-1,4,21,28,27,-1,21,47,46,28,-1,27,9,31,30,-1,31,8,20,30,-1,0,26,30,20,-1,26,4,27,30,-1,34,9,29,33,-1,44,35,33,29,-1,32,8,31,36,-1,31,9,34,36,-1,38,39,45,42,-1,37,38,42,43,-1,45,39,35,44,-1,40,41,45,44,-1,45,46,47,-1,45,44,46,-1}, 168);
IndexedFaceSet17.setCoordIndex(new int32_t[]{13,6,15,14,-1,15,4,12,14,-1,3,16,14,12,-1,16,8,13,14,-1,17,4,15,19,-1,15,6,18,19,-1,7,20,19,18,-1,20,2,17,19,-1,23,5,25,24,-1,25,6,13,24,-1,8,26,24,13,-1,26,0,23,24,-1,21,7,18,27,-1,18,6,25,27,-1,5,28,27,25,-1,28,1,21,27,-1,29,10,32,31,-1,32,11,30,31,-1,5,23,31,30,-1,23,0,29,31,-1,30,11,34,33,-1,34,9,22,33,-1,1,28,33,22,-1,28,5,30,33,-1,37,11,32,36,-1,10,38,36,32,-1,35,9,34,39,-1,34,11,37,39,-1,41,42,43,44,-1,40,41,44,45,-1,43,42,38,10,-1,10,43,47,46,-1,43,29,0,-1,43,10,29,-1}, 168);
TextureCoordinate& TextureCoordinate18 =  TextureCoordinate();
TextureCoordinate18.setPoint(new float[]{0.25,0,0.375,0,0.375,0.628218,0.375,0.25,0.25,0.25,0.3125,0.25,0.3125,0,0.3125,0.628218,0.1875,0,0.1875,0.25,0.375,0.375,0.3125,0.375,0.34375,0.375,0.34375,0.25,0.34375,0.628218,0.375,0.125,0.3125,0.125,0.34375,0.125,0.34375,0,0.28125,0,0.21875,0,0.25,0.375,0.28125,0.375,0.28125,0.25,0.28125,0.628218,0.28125,0.125,0.25,0.125,0.21875,0.25,0.21875,0.375,0.1875,0.375,0.21875,0.125,0.1875,0.125,0.15625,0,0.15625,0.375,0.15625,0.25,0.15625,0.628218,0.15625,0.125,0.15625,1.2184,0.15625,0.923311,0.15625,0.775764,0.1875,0.628218,0.203312,0.744405,0.203312,0.923311,0.203312,1.2184,0.1875,0.628218,0.203312,0.744405,0.21875,0.628218,0.25,0.628218}, 96);
IndexedFaceSet17.setTexCoord(&TextureCoordinate18);

Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setPoint(new float[]{-5,10,-12.5644,-5,10,0,-2.5,10,0,-2.5,10,-12.5644,-2.5,10,-5,-5,10,-5,-3.75,10,-5,-3.75,10,0,-3.75,10,-12.5644,-6.25,10,0,-6.25,10,-12.5644,-6.25,10,-5,-2.5,10,-7.5,-3.75,10,-7.5,-3.125,10,-7.5,-3.125,10,-5,-3.125,10,-12.5644,-2.5,10,-2.5,-3.75,10,-2.5,-3.125,10,-2.5,-3.125,10,0,-4.375,10,0,-5.625,10,0,-5,10,-7.5,-4.375,10,-7.5,-4.375,10,-5,-4.375,10,-12.5644,-4.375,10,-2.5,-5,10,-2.5,-5.625,10,-12.5644,-5.625,10,-5,-5.625,10,-7.5,-6.25,10,-7.5,-5.625,10,-2.5,-6.25,10,-2.5,-6.875,10,0,-6.875,10,-7.5,-6.875,10,-5,-6.875,10,-12.5644,-6.875,10,-2.5,-6.875,10,-24.3681,-6.875,10,-18.4662,-6.875,10,-15.5153,-5.93375,10,-14.8881,-5.93375,10,-18.4662,-5.93375,10,-24.3681,-6.25,10,-12.5644,-5.93375,10,-14.8881}, 144);
IndexedFaceSet17.setCoord(&Coordinate19);

Shape12.setGeometry(&IndexedFaceSet17);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{1.47039,-1.73798,10.4054});
Transform20.setScale(new float[]{3.58919,0.202305,1.03599});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setUSE(CString("_1"));
Appearance22.addChild(&Material23);

ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUSE(CString("_2"));
Appearance22.addChild(&ImageTexture24);

TextureTransform& TextureTransform25 =  TextureTransform();
TextureTransform25.setUSE(CString("_3"));
Appearance22.setTextureTransform(TextureTransform25);

Shape21.addChild(&Appearance22);

IndexedFaceSet& IndexedFaceSet26 =  IndexedFaceSet();
IndexedFaceSet26.setCreaseAngle(0.5);
IndexedFaceSet26.setCoordIndex(new int32_t[]{0,1,2,3,-1,2,1,5,4,-1,6,7,4,5,-1,8,9,10,11,-1,10,1,0,11,-1,9,8,12,13,-1,14,15,13,12,-1,16,6,5,17,-1,5,1,10,17,-1,9,18,17,10,-1,18,19,16,17,-1,18,9,13,20,-1,19,18,20,21,-1,13,15,22,20,-1,22,23,21,20,-1,24,25,26,27,-1,26,15,14,27,-1,28,29,30,31,-1,30,25,24,31,-1,32,23,22,33,-1,22,15,26,33,-1,25,34,33,26,-1,34,35,32,33,-1,34,25,30,36,-1,30,29,37,36,-1,38,39,36,37,-1,39,35,34,36,-1,40,41,42,43,-1,42,29,28,43,-1,41,40,44,45,-1,46,47,45,44,-1,48,38,37,49,-1,37,29,42,49,-1,41,50,49,42,-1,50,51,48,49,-1,50,41,45,52,-1,51,50,52,53,-1,45,47,54,52,-1,54,55,53,52,-1,56,47,46,57,-1,58,55,54,59,-1,54,47,56,59,-1,60,61,56,57,-1,61,62,59,56,-1,62,63,58,59,-1}, 225);
TextureCoordinate& TextureCoordinate27 =  TextureCoordinate();
TextureCoordinate27.setPoint(new float[]{0.8125,0.375,0.8125,0.25,0.84375,0.25,0.84375,0.375,0.84375,0.125,0.8125,0.125,0.8125,0,0.84375,0,0.75,0.375,0.75,0.25,0.78125,0.25,0.78125,0.375,0.71875,0.375,0.71875,0.25,0.6875,0.375,0.6875,0.25,0.78125,0,0.78125,0.125,0.75,0.125,0.75,0,0.71875,0.125,0.71875,0,0.6875,0.125,0.6875,0,0.625,0.375,0.625,0.25,0.65625,0.25,0.65625,0.375,0.5625,0.375,0.5625,0.25,0.59375,0.25,0.59375,0.375,0.65625,0,0.65625,0.125,0.625,0.125,0.625,0,0.59375,0.125,0.5625,0.125,0.5625,0,0.59375,0,0.5,0.375,0.5,0.25,0.53125,0.25,0.53125,0.375,0.46875,0.375,0.46875,0.25,0.4375,0.375,0.4375,0.25,0.53125,0,0.53125,0.125,0.5,0.125,0.5,0,0.46875,0.125,0.46875,0,0.4375,0.125,0.4375,0,0.40625,0.25,0.40625,0.375,0.40625,0,0.40625,0.125,0.375,0.375,0.375,0.25,0.375,0.125,0.375,0}, 128);
IndexedFaceSet26.setTexCoord(&TextureCoordinate27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setPoint(new float[]{6.25,10,-7.5,6.25,10,-5,6.875,10,-5,6.875,10,-7.5,6.875,10,-2.5,6.25,10,-2.5,6.25,10,0,6.875,10,0,5,10,-7.5,5,10,-5,5.625,10,-5,5.625,10,-7.5,4.375,10,-7.5,4.375,10,-5,3.75,10,-7.5,3.75,10,-5,5.625,10,0,5.625,10,-2.5,5,10,-2.5,5,10,0,4.375,10,-2.5,4.375,10,0,3.75,10,-2.5,3.75,10,0,2.5,10,-7.5,2.5,10,-5,3.125,10,-5,3.125,10,-7.5,1.25,10,-7.5,1.25,10,-5,1.875,10,-5,1.875,10,-7.5,3.125,10,0,3.125,10,-2.5,2.5,10,-2.5,2.5,10,0,1.875,10,-2.5,1.25,10,-2.5,1.25,10,0,1.875,10,0,0,10,-7.5,0,10,-5,0.625,10,-5,0.625,10,-7.5,-0.625,10,-7.5,-0.625,10,-5,-1.25,10,-7.5,-1.25,10,-5,0.625,10,0,0.625,10,-2.5,0,10,-2.5,0,10,0,-0.625,10,-2.5,-0.625,10,0,-1.25,10,-2.5,-1.25,10,0,-1.875,10,-5,-1.875,10,-7.5,-1.875,10,0,-1.875,10,-2.5,-2.5,10,-7.5,-2.5,10,-5,-2.5,10,-2.5,-2.5,10,0}, 192);
IndexedFaceSet26.setCoord(&Coordinate28);

Shape21.setGeometry(&IndexedFaceSet26);

Transform20.addChild(&Shape21);

Transform10.addChild(&Transform20);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("rasenkante"));
Transform& Transform30 =  Transform();
Transform30.setTranslation(new float[]{-7.49087,0.319543,1.19471});
Transform30.setRotation(new float[]{0,-1,0,1.57079});
Transform30.setScale(new float[]{1.38761,0.0680928,0.054399});
Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Appearance32.addChild(&Material33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setDEF(CString("_4"));
ImageTexture34.setUrl(new CString[]{CString("concrete.jpg")}, 1);
Appearance32.addChild(&ImageTexture34);

TextureTransform& TextureTransform35 =  TextureTransform();
TextureTransform35.setScale(new float[]{3.32357,0.309305});
Appearance32.setTextureTransform(TextureTransform35);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setCreaseAngle(0.5);
IndexedFaceSet36.setTexCoordIndex(new int32_t[]{4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1,16,17,22,21,-1,24,25,19,18,-1,23,22,17,20,-1,20,19,25,23,-1,26,1,0,27,-1,2,3,28,29,-1}, 70);
IndexedFaceSet36.setCoordIndex(new int32_t[]{6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1,15,16,13,4,-1,5,14,18,17,-1,8,13,16,19,-1,19,18,14,8,-1,1,0,5,17,-1,4,2,3,15,-1}, 70);
TextureCoordinate& TextureCoordinate37 =  TextureCoordinate();
TextureCoordinate37.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1,1,0,0.75,0,0,0,0.25,0,0.5,0,1,0.862508,0.75,0.862508,0.5,0.862508,0,0.862508,0.25,0.862508,0,0,0,1,1,0,1,1}, 60);
IndexedFaceSet36.setTexCoord(&TextureCoordinate37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1,1,-0.725017,-1,0.5,-0.725017,-1,-1,-0.725017,-1,-0.5,-0.725017,-1,0,-0.725017,-1}, 60);
IndexedFaceSet36.setCoord(&Coordinate38);

Shape31.setGeometry(&IndexedFaceSet36);

Transform30.addChild(&Shape31);

Transform29.addChild(&Transform30);

Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{1.63219,2.98023e-8,0});
Transform39.setScale(new float[]{1.21632,1,1});
Transform& Transform40 =  Transform();
Transform40.setDEF(CString("_5"));
Transform40.setTranslation(new float[]{-6.15764,0.319543,2.63679});
Transform40.setScale(new float[]{1.38761,0.0680928,0.054399});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Appearance42.addChild(&Material43);

ImageTexture& ImageTexture44 =  ImageTexture();
ImageTexture44.setUSE(CString("_4"));
Appearance42.addChild(&ImageTexture44);

TextureTransform& TextureTransform45 =  TextureTransform();
TextureTransform45.setScale(new float[]{3.32357,0.309305});
Appearance42.setTextureTransform(TextureTransform45);

Shape41.addChild(&Appearance42);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setCreaseAngle(0.5);
IndexedFaceSet46.setTexCoordIndex(new int32_t[]{4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1,16,17,22,21,-1,24,25,19,18,-1,23,22,17,20,-1,20,19,25,23,-1,26,1,0,27,-1,2,3,28,29,-1}, 70);
IndexedFaceSet46.setCoordIndex(new int32_t[]{6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1,15,16,13,4,-1,5,14,18,17,-1,8,13,16,19,-1,19,18,14,8,-1,1,0,5,17,-1,4,2,3,15,-1}, 70);
TextureCoordinate& TextureCoordinate47 =  TextureCoordinate();
TextureCoordinate47.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1,1,0,0.75,0,0,0,0.25,0,0.5,0,1,0.862508,0.75,0.862508,0.5,0.862508,0,0.862508,0.25,0.862508,0,0,0,1,1,0,1,1}, 60);
IndexedFaceSet46.setTexCoord(&TextureCoordinate47);

Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1,1,-0.725017,-1,0.5,-0.725017,-1,-1,-0.725017,-1,-0.5,-0.725017,-1,0,-0.725017,-1}, 60);
IndexedFaceSet46.setCoord(&Coordinate48);

Shape41.setGeometry(&IndexedFaceSet46);

Transform40.addChild(&Shape41);

Transform39.addChild(&Transform40);

Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{2.77905,0,0});
Transform& Transform50 =  Transform();
Transform50.setUSE(CString("_5"));
Transform49.addChild(&Transform50);

Transform39.addChild(&Transform49);

Transform& Transform51 =  Transform();
Transform51.setTranslation(new float[]{5.55998,0,0});
Transform& Transform52 =  Transform();
Transform52.setUSE(CString("_5"));
Transform51.addChild(&Transform52);

Transform39.addChild(&Transform51);

Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{8.34099,0,0});
Transform& Transform54 =  Transform();
Transform54.setUSE(CString("_5"));
Transform53.addChild(&Transform54);

Transform39.addChild(&Transform53);

Transform& Transform55 =  Transform();
Transform55.setTranslation(new float[]{11.121,0,0});
Transform& Transform56 =  Transform();
Transform56.setUSE(CString("_5"));
Transform55.addChild(&Transform56);

Transform39.addChild(&Transform55);

Transform& Transform57 =  Transform();
Transform57.setTranslation(new float[]{13.8953,0,0});
Transform& Transform58 =  Transform();
Transform58.setUSE(CString("_5"));
Transform57.addChild(&Transform58);

Transform39.addChild(&Transform57);

Transform& Transform59 =  Transform();
Transform59.setTranslation(new float[]{16.6755,0,0});
Transform& Transform60 =  Transform();
Transform60.setUSE(CString("_5"));
Transform59.addChild(&Transform60);

Transform39.addChild(&Transform59);

Transform& Transform61 =  Transform();
Transform61.setTranslation(new float[]{19.4552,0,0});
Transform& Transform62 =  Transform();
Transform62.setUSE(CString("_5"));
Transform61.addChild(&Transform62);

Transform39.addChild(&Transform61);

Transform& Transform63 =  Transform();
Transform63.setTranslation(new float[]{22.233,0,0});
Transform& Transform64 =  Transform();
Transform64.setUSE(CString("_5"));
Transform63.addChild(&Transform64);

Transform39.addChild(&Transform63);

Transform& Transform65 =  Transform();
Transform65.setTranslation(new float[]{25.0138,0,0});
Transform& Transform66 =  Transform();
Transform66.setUSE(CString("_5"));
Transform65.addChild(&Transform66);

Transform39.addChild(&Transform65);

Transform29.addChild(&Transform39);

Transform& Transform67 =  Transform();
Transform67.setTranslation(new float[]{26.2011,0.319543,1.19462});
Transform67.setRotation(new float[]{0,-1,0,1.57079});
Transform67.setScale(new float[]{1.38761,0.0680928,0.054399});
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Material& Material70 =  Material();
Appearance69.addChild(&Material70);

ImageTexture& ImageTexture71 =  ImageTexture();
ImageTexture71.setUSE(CString("_4"));
Appearance69.addChild(&ImageTexture71);

TextureTransform& TextureTransform72 =  TextureTransform();
TextureTransform72.setScale(new float[]{3.32357,0.309305});
Appearance69.setTextureTransform(TextureTransform72);

Shape68.addChild(&Appearance69);

IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setCreaseAngle(0.5);
IndexedFaceSet73.setTexCoordIndex(new int32_t[]{4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1,16,17,22,21,-1,24,25,19,18,-1,23,22,17,20,-1,20,19,25,23,-1,26,1,0,27,-1,2,3,28,29,-1}, 70);
IndexedFaceSet73.setCoordIndex(new int32_t[]{6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1,15,16,13,4,-1,5,14,18,17,-1,8,13,16,19,-1,19,18,14,8,-1,1,0,5,17,-1,4,2,3,15,-1}, 70);
TextureCoordinate& TextureCoordinate74 =  TextureCoordinate();
TextureCoordinate74.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1,1,0,0.75,0,0,0,0.25,0,0.5,0,1,0.862508,0.75,0.862508,0.5,0.862508,0,0.862508,0.25,0.862508,0,0,0,1,1,0,1,1}, 60);
IndexedFaceSet73.setTexCoord(&TextureCoordinate74);

Coordinate& Coordinate75 =  Coordinate();
Coordinate75.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1,1,-0.725017,-1,0.5,-0.725017,-1,-1,-0.725017,-1,-0.5,-0.725017,-1,0,-0.725017,-1}, 60);
IndexedFaceSet73.setCoord(&Coordinate75);

Shape68.setGeometry(&IndexedFaceSet73);

Transform67.addChild(&Shape68);

Transform29.addChild(&Transform67);

Transform10.addChild(&Transform29);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("rasen"));
Transform76.setTranslation(new float[]{1.46296,-1.69118,8.40168});
Transform76.setScale(new float[]{3.60071,0.202305,0.768248});
Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
Material& Material79 =  Material();
Material79.setUSE(CString("_1"));
Appearance78.addChild(&Material79);

ImageTexture& ImageTexture80 =  ImageTexture();
ImageTexture80.setUrl(new CString[]{CString("gras01.jpg")}, 1);
Appearance78.addChild(&ImageTexture80);

TextureTransform& TextureTransform81 =  TextureTransform();
TextureTransform81.setUSE(CString("_3"));
Appearance78.setTextureTransform(TextureTransform81);

Shape77.addChild(&Appearance78);

IndexedFaceSet& IndexedFaceSet82 =  IndexedFaceSet();
IndexedFaceSet82.setCreaseAngle(0.5);
IndexedFaceSet82.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,7,8,-1,9,10,6,11,-1,12,10,13,14,-1,15,12,14,16,-1,17,15,18,19,-1,20,17,19,21,-1,22,20,23,24,-1,25,22,24,26,-1,27,25,28,29,-1,30,31,27,32,-1,33,34,35,36,-1,37,31,38,39,-1,34,37,39,40,-1}, 75);
IndexedFaceSet82.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,9,6,7,-1,10,9,8,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,20,18,19,21,-1,22,20,21,23,-1,24,25,22,23,-1,26,27,28,29,-1,30,25,24,31,-1,27,30,31,28,-1}, 75);
TextureCoordinate& TextureCoordinate83 =  TextureCoordinate();
TextureCoordinate83.setPoint(new float[]{0.40625,1,0.375,1,0.375,0.875,0.40625,0.875,0.4375,1,0.4375,0.875,0.46875,1,0.4375,0.875,0.46875,0.875,0.5,0.875,0.5,1,0.46875,0.875,0.53125,1,0.5,0.875,0.53125,0.875,0.5625,1,0.5625,0.875,0.59375,1,0.5625,0.875,0.59375,0.875,0.625,1,0.625,0.875,0.65625,1,0.625,0.875,0.65625,0.875,0.6875,1,0.6875,0.875,0.71875,1,0.6875,0.875,0.71875,0.875,0.75,0.875,0.75,1,0.71875,0.875,0.84375,1,0.8125,1,0.8125,0.875,0.84375,0.875,0.78125,1,0.75,0.875,0.78125,0.875,0.8125,0.875}, 82);
IndexedFaceSet82.setTexCoord(&TextureCoordinate83);

Coordinate& Coordinate84 =  Coordinate();
Coordinate84.setPoint(new float[]{-1.875,10,-10,-2.5,10,-10,-2.5,10,-7.5,-1.875,10,-7.5,-1.25,10,-10,-1.25,10,-7.5,-0.625,10,-10,-0.625,10,-7.5,0,10,-7.5,0,10,-10,0.625,10,-10,0.625,10,-7.5,1.25,10,-10,1.25,10,-7.5,1.875,10,-10,1.875,10,-7.5,2.5,10,-10,2.5,10,-7.5,3.125,10,-10,3.125,10,-7.5,3.75,10,-10,3.75,10,-7.5,4.375,10,-10,4.375,10,-7.5,5,10,-7.5,5,10,-10,6.875,10,-10,6.25,10,-10,6.25,10,-7.5,6.875,10,-7.5,5.625,10,-10,5.625,10,-7.5}, 96);
IndexedFaceSet82.setCoord(&Coordinate84);

Shape77.setGeometry(&IndexedFaceSet82);

Transform76.addChild(&Shape77);

Transform10.addChild(&Transform76);

Transform& Transform85 =  Transform();
Transform85.setDEF(CString("kiesbett"));
Transform& Transform86 =  Transform();
Transform86.setTranslation(new float[]{30.6458,0,0});
Transform& Transform87 =  Transform();
Transform87.setDEF(CString("_6"));
Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[]{-5.96811,0.361661,0.522935});
Transform88.setRotation(new float[]{0,1,0,4.71239});
Transform88.setScale(new float[]{0.221293,0.0338355,0.989542});
Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Material91.setUSE(CString("_1"));
Appearance90.addChild(&Material91);

ImageTexture& ImageTexture92 =  ImageTexture();
ImageTexture92.setUrl(new CString[]{CString("kieselstein01.jpg")}, 1);
Appearance90.addChild(&ImageTexture92);

TextureTransform& TextureTransform93 =  TextureTransform();
TextureTransform93.setScale(new float[]{0.796297,3});
Appearance90.setTextureTransform(TextureTransform93);

Shape89.addChild(&Appearance90);

IndexedFaceSet& IndexedFaceSet94 =  IndexedFaceSet();
IndexedFaceSet94.setCreaseAngle(0.5);
IndexedFaceSet94.setCoordIndex(new int32_t[]{5,7,6,4,-1,7,1,2,6,-1,0,9,8,3,-1,9,5,4,8,-1}, 20);
TextureCoordinate& TextureCoordinate95 =  TextureCoordinate();
TextureCoordinate95.setPoint(new float[]{0,1,0,0,1,0,1,1,1,0.5,0,0.5,1,0.25,0,0.25,1,0.75,0,0.75}, 20);
IndexedFaceSet94.setTexCoord(&TextureCoordinate95);

Coordinate& Coordinate96 =  Coordinate();
Coordinate96.setPoint(new float[]{-1,1,-1,-1,1,1,1,1,1,1,1,-1,1,1,0,-1,1,0,1,1,0.5,-1,1,0.5,1,1,-0.5,-1,1,-0.5}, 30);
IndexedFaceSet94.setCoord(&Coordinate96);

Shape89.setGeometry(&IndexedFaceSet94);

Transform88.addChild(&Shape89);

Transform87.addChild(&Transform88);

Transform& Transform97 =  Transform();
Transform97.setTranslation(new float[]{-5.94448,0.309971,0.717207});
Transform97.setScale(new float[]{1.0795,0.100811,0.054399});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Material100.setUSE(CString("_1"));
Appearance99.addChild(&Material100);

ImageTexture& ImageTexture101 =  ImageTexture();
ImageTexture101.setUSE(CString("_4"));
Appearance99.addChild(&ImageTexture101);

TextureTransform& TextureTransform102 =  TextureTransform();
TextureTransform102.setScale(new float[]{3.32357,0.309305});
Appearance99.setTextureTransform(TextureTransform102);

Shape98.addChild(&Appearance99);

IndexedFaceSet& IndexedFaceSet103 =  IndexedFaceSet();
IndexedFaceSet103.setCreaseAngle(0.5);
IndexedFaceSet103.setTexCoordIndex(new int32_t[]{4,10,8,5,-1,10,3,2,8,-1,0,1,11,12,-1,11,4,5,12,-1,6,9,14,7,-1,9,3,2,14,-1,0,1,13,15,-1,13,6,7,15,-1}, 40);
IndexedFaceSet103.setCoordIndex(new int32_t[]{6,10,9,7,-1,10,3,2,9,-1,0,1,11,12,-1,11,6,7,12,-1,7,9,13,8,-1,9,2,4,13,-1,5,0,12,14,-1,12,7,8,14,-1}, 40);
TextureCoordinate& TextureCoordinate104 =  TextureCoordinate();
TextureCoordinate104.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.5,0,0.5,1,0.75,1,0.75,0,0.75,0,0.25,0,0.25,1,0.25,0,0.75,1,0.25,1}, 32);
IndexedFaceSet103.setTexCoord(&TextureCoordinate104);

Coordinate& Coordinate105 =  Coordinate();
Coordinate105.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,-1,1,-1,0,-1,1,0,1,1,0,1,-1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1,0.5,1,-1,-0.5,1,-1}, 45);
IndexedFaceSet103.setCoord(&Coordinate105);

Shape98.setGeometry(&IndexedFaceSet103);

Transform97.addChild(&Shape98);

Transform87.addChild(&Transform97);

Transform86.addChild(&Transform87);

Transform85.addChild(&Transform86);

Transform& Transform106 =  Transform();
Transform106.setTranslation(new float[]{28.1185,0,0});
Transform& Transform107 =  Transform();
Transform107.setUSE(CString("_6"));
Transform106.addChild(&Transform107);

Transform85.addChild(&Transform106);

Transform& Transform108 =  Transform();
Transform108.setTranslation(new float[]{25.5156,0,0});
Transform& Transform109 =  Transform();
Transform109.setUSE(CString("_6"));
Transform108.addChild(&Transform109);

Transform85.addChild(&Transform108);

Transform& Transform110 =  Transform();
Transform110.setTranslation(new float[]{22.9666,0,0});
Transform& Transform111 =  Transform();
Transform111.setUSE(CString("_6"));
Transform110.addChild(&Transform111);

Transform85.addChild(&Transform110);

Transform& Transform112 =  Transform();
Transform112.setTranslation(new float[]{20.3454,0,0});
Transform& Transform113 =  Transform();
Transform113.setUSE(CString("_6"));
Transform112.addChild(&Transform113);

Transform85.addChild(&Transform112);

Transform& Transform114 =  Transform();
Transform114.setTranslation(new float[]{17.9213,0,0});
Transform& Transform115 =  Transform();
Transform115.setUSE(CString("_6"));
Transform114.addChild(&Transform115);

Transform85.addChild(&Transform114);

Transform& Transform116 =  Transform();
Transform116.setTranslation(new float[]{15.3405,0,0});
Transform& Transform117 =  Transform();
Transform117.setUSE(CString("_6"));
Transform116.addChild(&Transform117);

Transform85.addChild(&Transform116);

Transform& Transform118 =  Transform();
Transform118.setTranslation(new float[]{12.8044,0,0});
Transform& Transform119 =  Transform();
Transform119.setUSE(CString("_6"));
Transform118.addChild(&Transform119);

Transform85.addChild(&Transform118);

Transform& Transform120 =  Transform();
Transform120.setTranslation(new float[]{10.2395,0,0});
Transform& Transform121 =  Transform();
Transform121.setUSE(CString("_6"));
Transform120.addChild(&Transform121);

Transform85.addChild(&Transform120);

Transform& Transform122 =  Transform();
Transform122.setTranslation(new float[]{7.69543,0,0});
Transform& Transform123 =  Transform();
Transform123.setUSE(CString("_6"));
Transform122.addChild(&Transform123);

Transform85.addChild(&Transform122);

Transform& Transform124 =  Transform();
Transform124.setTranslation(new float[]{5.10118,0,0});
Transform& Transform125 =  Transform();
Transform125.setUSE(CString("_6"));
Transform124.addChild(&Transform125);

Transform85.addChild(&Transform124);

Transform& Transform126 =  Transform();
Transform126.setTranslation(new float[]{2.55872,0,0});
Transform& Transform127 =  Transform();
Transform127.setUSE(CString("_6"));
Transform126.addChild(&Transform127);

Transform85.addChild(&Transform126);

Transform& Transform128 =  Transform();
Transform128.setUSE(CString("_6"));
Transform85.addChild(&Transform128);

Transform10.addChild(&Transform85);

Transform9.addChild(&Transform10);

Transform& Transform129 =  Transform();
Transform129.setDEF(CString("left"));
Transform& Transform130 =  Transform();
Transform130.setTranslation(new float[]{1.47039,-1.73798,10.4054});
Transform130.setScale(new float[]{3.58919,0.202305,1.03599});
Shape& Shape131 =  Shape();
Appearance& Appearance132 =  Appearance();
Material& Material133 =  Material();
Material133.setUSE(CString("_1"));
Appearance132.addChild(&Material133);

ImageTexture& ImageTexture134 =  ImageTexture();
ImageTexture134.setUSE(CString("_2"));
Appearance132.addChild(&ImageTexture134);

TextureTransform& TextureTransform135 =  TextureTransform();
TextureTransform135.setUSE(CString("_3"));
Appearance132.setTextureTransform(TextureTransform135);

Shape131.addChild(&Appearance132);

IndexedFaceSet& IndexedFaceSet136 =  IndexedFaceSet();
IndexedFaceSet136.setCreaseAngle(0.5);
IndexedFaceSet136.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,0,3,-1,1,6,7,2,-1,6,8,9,7,-1,10,8,6,11,-1,12,10,11,13,-1,6,1,14,11,-1,14,15,13,11,-1,16,12,13,17,-1,13,15,18,17,-1,19,20,17,18,-1,20,21,16,17,-1,0,5,22,23,-1,1,0,23,14,-1,22,24,25,23,-1,25,15,14,23,-1,18,15,25,26,-1,25,24,27,26,-1,28,29,26,27,-1,29,19,18,26,-1,30,31,32,33,-1,34,35,36,37,-1,33,32,38,39,-1,39,38,35,34,-1,5,4,40,41,-1,40,30,33,41,-1,28,27,42,43,-1,42,37,44,43,-1,24,45,42,27,-1,45,34,37,42,-1,24,22,46,45,-1,5,41,46,22,-1,46,39,34,45,-1,41,33,39,46,-1,37,36,47,44,-1}, 175);
TextureCoordinate& TextureCoordinate137 =  TextureCoordinate();
TextureCoordinate137.setPoint(new float[]{0.125,0.375,0.125,0.25,0.15625,0.25,0.15625,0.375,0.15625,0.628218,0.125,0.628218,0.125,0.125,0.15625,0.125,0.125,0,0.15625,0,0.09375,0,0.09375,0.125,0.0625,0,0.0625,0.125,0.09375,0.25,0.0625,0.25,0.03125,0,0.03125,0.125,0.03125,0.25,0,0.25,0,0.125,0,0,0.09375,0.628218,0.09375,0.375,0.0625,0.628218,0.0625,0.375,0.03125,0.375,0.03125,0.628218,0,0.628218,0,0.375,0.15625,0.923311,0.15625,1.2184,0.125,1.2184,0.125,0.923311,0.0625,0.923311,0.0625,1.2184,0.03125,1.2184,0.03125,0.923311,0.09375,1.2184,0.09375,0.923311,0.15625,0.775764,0.125,0.775764,0.03125,0.775764,0,0.775764,0,0.923311,0.0625,0.775764,0.09375,0.775764,0,1.2184}, 96);
IndexedFaceSet136.setTexCoord(&TextureCoordinate137);

Coordinate& Coordinate138 =  Coordinate();
Coordinate138.setPoint(new float[]{-7.5,10,-7.5,-7.5,10,-5,-6.875,10,-5,-6.875,10,-7.5,-6.875,10,-12.5644,-7.5,10,-12.5644,-7.5,10,-2.5,-6.875,10,-2.5,-7.5,10,0,-6.875,10,0,-8.125,10,0,-8.125,10,-2.5,-8.75,10,0,-8.75,10,-2.5,-8.125,10,-5,-8.75,10,-5,-9.375,10,0,-9.375,10,-2.5,-9.375,10,-5,-10,10,-5,-10,10,-2.5,-10,10,0,-8.125,10,-12.5644,-8.125,10,-7.5,-8.75,10,-12.5644,-8.75,10,-7.5,-9.375,10,-7.5,-9.375,10,-12.5644,-10,10,-12.5644,-10,10,-7.5,-6.875,10,-18.4662,-6.875,10,-24.3681,-7.5,10,-24.3681,-7.5,10,-18.4662,-8.75,10,-18.4662,-8.75,10,-24.3681,-9.375,10,-24.3681,-9.375,10,-18.4662,-8.125,10,-24.3681,-8.125,10,-18.4662,-6.875,10,-15.5153,-7.5,10,-15.5153,-9.375,10,-15.5153,-10,10,-15.5153,-10,10,-18.4662,-8.75,10,-15.5153,-8.125,10,-15.5153,-10,10,-24.3681}, 144);
IndexedFaceSet136.setCoord(&Coordinate138);

Shape131.setGeometry(&IndexedFaceSet136);

Transform130.addChild(&Shape131);

Transform129.addChild(&Transform130);

Transform& Transform139 =  Transform();
Transform139.setTranslation(new float[]{1.47039,-1.73798,10.4054});
Transform139.setScale(new float[]{3.58919,0.202305,1.03599});
Shape& Shape140 =  Shape();
Appearance& Appearance141 =  Appearance();
Material& Material142 =  Material();
Material142.setUSE(CString("_1"));
Appearance141.addChild(&Material142);

ImageTexture& ImageTexture143 =  ImageTexture();
ImageTexture143.setUSE(CString("_2"));
Appearance141.addChild(&ImageTexture143);

TextureTransform& TextureTransform144 =  TextureTransform();
TextureTransform144.setUSE(CString("_3"));
Appearance141.setTextureTransform(TextureTransform144);

Shape140.addChild(&Appearance141);

IndexedFaceSet& IndexedFaceSet145 =  IndexedFaceSet();
IndexedFaceSet145.setCreaseAngle(0.5);
IndexedFaceSet145.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,3,2,6,7,-1,2,5,8,6,-1,9,10,11,12,-1,10,13,14,11,-1,7,6,15,16,-1,6,8,17,15,-1,16,15,10,9,-1,15,17,13,10,-1,18,19,20,21,-1,19,0,3,20,-1,22,23,24,25,-1,23,9,12,24,-1,26,27,23,22,-1,27,16,9,23,-1,21,20,28,29,-1,20,3,7,28,-1,29,28,27,26,-1,28,7,16,27,-1}, 100);
TextureCoordinate& TextureCoordinate146 =  TextureCoordinate();
TextureCoordinate146.setPoint(new float[]{0.15625,1.80859,0.15625,2.39878,0.125,2.39878,0.125,1.80859,0.15625,2.98896,0.125,2.98896,0.09375,2.39878,0.09375,1.80859,0.09375,2.98896,0.03125,1.80859,0.03125,2.39878,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.39878,0.0625,1.80859,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.5135,0.125,1.2184,0.03125,1.2184,0.03125,1.5135,0,1.5135,0,1.2184,0.0625,1.2184,0.0625,1.5135,0.09375,1.5135,0.09375,1.2184}, 60);
IndexedFaceSet145.setTexCoord(&TextureCoordinate146);

Coordinate& Coordinate147 =  Coordinate();
Coordinate147.setPoint(new float[]{-6.875,10,-36.1718,-6.875,10,-47.9756,-7.5,10,-47.9755,-7.5,10,-36.1718,-6.875,10,-59.7793,-7.5,10,-59.7793,-8.125,10,-47.9755,-8.125,10,-36.1718,-8.125,10,-59.7793,-9.375,10,-36.1718,-9.375,10,-47.9756,-10,10,-47.9755,-10,10,-36.1718,-9.375,10,-59.7793,-10,10,-59.7793,-8.75,10,-47.9755,-8.75,10,-36.1718,-8.75,10,-59.7793,-6.875,10,-24.3681,-6.875,10,-30.27,-7.5,10,-30.27,-7.5,10,-24.3681,-9.375,10,-24.3681,-9.375,10,-30.27,-10,10,-30.27,-10,10,-24.3681,-8.75,10,-24.3681,-8.75,10,-30.27,-8.125,10,-30.27,-8.125,10,-24.3681}, 90);
IndexedFaceSet145.setCoord(&Coordinate147);

Shape140.setGeometry(&IndexedFaceSet145);

Transform139.addChild(&Shape140);

Transform129.addChild(&Transform139);

Transform9.addChild(&Transform129);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
