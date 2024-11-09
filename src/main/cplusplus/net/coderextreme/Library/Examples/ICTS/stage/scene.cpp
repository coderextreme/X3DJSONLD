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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:15 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:15 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("SceneBBox"));
Transform9.setBboxSize(new float[]{400,200,400});
Transform9.setBboxCenter(new float[]{0,40,0});
Scene7.addChild(&Transform9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("scene"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("sky"));
Transform11.setTranslation(new float[]{0,-62.614,0});
Transform11.setScale(new float[]{19.332,19.332,19.332});
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setUrl(new CString[]{CString("sky.jpg")}, 1);
Appearance13.addChild(&ImageTexture14);

Shape12.addChild(&Appearance13);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setCcw(False);
IndexedFaceSet15.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,45,-1,10,9,20,-1,20,9,21,-1,9,14,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,21,14,29,-1,14,17,29,-1,21,29,23,-1,23,29,30,-1,23,30,25,-1,25,30,31,-1,25,31,27,-1,29,17,32,-1,17,19,32,-1,29,32,30,-1,30,32,33,-1,30,33,31,-1,32,19,34,-1,34,19,45,-1,32,34,33,-1,55,53,35,-1,35,53,36,-1,35,36,37,-1,37,36,38,-1,37,38,39,-1,39,38,40,-1,40,11,1,-1,39,40,41,-1,41,40,1,-1,41,1,0,-1,53,52,36,-1,36,52,42,-1,36,42,38,-1,38,42,43,-1,38,43,40,-1,40,43,11,-1,43,15,11,-1,52,58,42,-1,42,58,44,-1,42,44,43,-1,43,44,15,-1,44,18,15,-1,58,60,44,-1,44,60,18,-1,18,60,45,-1,60,34,45,-1,28,27,46,-1,46,27,47,-1,27,31,47,-1,46,47,48,-1,48,47,49,-1,48,49,50,-1,50,49,51,-1,51,52,53,-1,50,51,54,-1,54,51,53,-1,54,53,55,-1,47,31,56,-1,31,33,56,-1,47,56,49,-1,49,56,57,-1,49,57,51,-1,51,57,52,-1,57,58,52,-1,56,33,59,-1,33,34,59,-1,56,59,57,-1,57,59,58,-1,59,60,58,-1,59,34,60,-1}, 400);
IndexedFaceSet15.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,9,14,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,22,14,30,-1,14,17,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,30,17,33,-1,17,19,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,33,19,35,-1,35,19,20,-1,33,35,34,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1,40,41,42,-1,42,41,43,-1,43,11,1,-1,42,43,44,-1,44,43,1,-1,44,1,0,-1,37,45,39,-1,39,45,46,-1,39,46,41,-1,41,46,47,-1,41,47,43,-1,43,47,11,-1,47,15,11,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,47,49,15,-1,49,18,15,-1,48,50,49,-1,49,50,18,-1,18,50,20,-1,50,35,20,-1,29,28,51,-1,51,28,52,-1,28,32,52,-1,51,52,53,-1,53,52,54,-1,53,54,55,-1,55,54,56,-1,56,45,37,-1,55,56,57,-1,57,56,37,-1,57,37,36,-1,52,32,58,-1,32,34,58,-1,52,58,54,-1,54,58,59,-1,54,59,56,-1,56,59,45,-1,59,48,45,-1,58,34,60,-1,34,35,60,-1,58,60,59,-1,59,60,48,-1,60,50,48,-1,60,35,50,-1}, 400);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{1,0.5,0.985071,0.5,0.985071,0.378732,0.952267,0.349244,0.916025,0.22265,0.833333,0.166667,0.77735,0.0839748,0.650756,0.047733,0.621268,0.0149288,0.5,0.0149288,0.5,0,0.916025,0.5,0.833333,0.333333,0.666667,0.166667,0.5,0.0839748,0.77735,0.5,0.650756,0.349244,0.5,0.22265,0.621268,0.5,0.5,0.378732,0.378732,0.0149288,0.349244,0.047733,0.22265,0.0839748,0.166667,0.166667,0.0839748,0.22265,0.047733,0.349244,0.0149288,0.378732,0.0149288,0.5,0,0.5,0.333333,0.166667,0.166667,0.333333,0.0839748,0.5,0.349244,0.349244,0.22265,0.5,0.378732,0.5,0.621268,0.985071,0.650756,0.952267,0.77735,0.916025,0.833333,0.833333,0.916025,0.77735,0.952267,0.650756,0.985071,0.621268,0.666667,0.833333,0.833333,0.666667,0.650756,0.650756,0.5,0.5,0.0149288,0.621268,0.047733,0.650756,0.0839748,0.77735,0.166667,0.833333,0.22265,0.916025,0.349244,0.952267,0.5,0.916025,0.5,0.985071,0.378732,0.985071,0.5,1,0.166667,0.666667,0.333333,0.833333,0.5,0.77735,0.349244,0.650756,0.5,0.621268}, 122);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{10,0,0,9.70142,2.42536,0,9.70142,0,2.42536,9.04534,3.01511,3.01511,8.3205,0,5.547,6.66667,3.33333,6.66667,5.547,0,8.3205,3.01511,3.01511,9.04534,2.42536,0,9.70142,0,2.42536,9.70142,0,0,10,8.3205,5.547,0,6.66667,6.66667,3.33333,3.33333,6.66667,6.66667,0,5.547,8.3205,5.547,8.3205,0,3.01511,9.04534,3.01511,0,8.3205,5.547,2.42536,9.70142,0,0,9.70142,2.42536,0,10,0,-2.42536,0,9.70142,-3.01511,3.01511,9.04534,-5.547,0,8.3205,-6.66667,3.33333,6.66667,-8.3205,0,5.547,-9.04534,3.01511,3.01511,-9.70142,0,2.42536,-9.70142,2.42536,0,-10,0,0,-3.33333,6.66667,6.66667,-6.66667,6.66667,3.33333,-8.3205,5.547,0,-3.01511,9.04534,3.01511,-5.547,8.3205,0,-2.42536,9.70142,0,0,0,-10,0,2.42536,-9.70142,2.42536,0,-9.70142,3.01511,3.01511,-9.04534,5.547,0,-8.3205,6.66667,3.33333,-6.66667,8.3205,0,-5.547,9.04534,3.01511,-3.01511,9.70142,0,-2.42536,0,5.547,-8.3205,3.33333,6.66667,-6.66667,6.66667,6.66667,-3.33333,0,8.3205,-5.547,3.01511,9.04534,-3.01511,0,9.70142,-2.42536,-9.70142,0,-2.42536,-9.04534,3.01511,-3.01511,-8.3205,0,-5.547,-6.66667,3.33333,-6.66667,-5.547,0,-8.3205,-3.01511,3.01511,-9.04534,-2.42536,0,-9.70142,-6.66667,6.66667,-3.33333,-3.33333,6.66667,-6.66667,-3.01511,9.04534,-3.01511}, 183);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape12.setGeometry(&IndexedFaceSet15);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("north"));
Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{-20.6049,8.24763,-50.0241});
Transform19.setScale(new float[]{54.7476,2.52601,2.52601});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setUrl(new CString[]{CString("facade1.jpg")}, 1);
Appearance21.addChild(&ImageTexture22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setSolid(False);
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate24 =  TextureCoordinate();
TextureCoordinate24.setPoint(new float[]{-0.489138,-0.0146378,11.5976,-0.0146378,11.5976,0.997351,-0.489138,0.997351}, 8);
IndexedFaceSet23.setTexCoord(&TextureCoordinate24);

Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{-0.5,-4,0,0.5,-4,0,0.5,4,0,-0.5,4,0}, 12);
IndexedFaceSet23.setCoord(&Coordinate25);

Shape20.setGeometry(&IndexedFaceSet23);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{-9.04011,-0.272459,-39.3429});
Transform26.setRotation(new float[]{-0.57735,0.57735,0.577351,2.09439});
Transform26.setScale(new float[]{18.1678,127.109,13.3795});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setDEF(CString("_1"));
ImageTexture29.setUrl(new CString[]{CString("street.jpg")}, 1);
Appearance28.addChild(&ImageTexture29);

TextureTransform& TextureTransform30 =  TextureTransform();
TextureTransform30.setScale(new float[]{1,3.92238});
Appearance28.setTextureTransform(TextureTransform30);

Shape27.addChild(&Appearance28);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate32 =  TextureCoordinate();
TextureCoordinate32.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet31.setTexCoord(&TextureCoordinate32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet31.setCoord(&Coordinate33);

Shape27.setGeometry(&IndexedFaceSet31);

Transform26.addChild(&Shape27);

Transform18.addChild(&Transform26);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{-53.6938,-0.502406,-44.0783});
Transform34.setRotation(new float[]{1,2.31149e-9,-3.35969e-9,4.71238});
Transform34.setScale(new float[]{58.4709,58.4714,58.4712});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
ImageTexture& ImageTexture37 =  ImageTexture();
ImageTexture37.setDEF(CString("_2"));
ImageTexture37.setUrl(new CString[]{CString("floor.png")}, 1);
Appearance36.addChild(&ImageTexture37);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setColorPerVertex(False);
IndexedFaceSet38.setColorIndex(new int[]{0}, 1);
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
CColor& Color39 =  CColor();
Color39.setColor(new float[]{0.0496202,0.358289,0.0915849}, 3);
IndexedFaceSet38.setColor(&Color39);

TextureCoordinate& TextureCoordinate40 =  TextureCoordinate();
TextureCoordinate40.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet38.setTexCoord(&TextureCoordinate40);

Coordinate& Coordinate41 =  Coordinate();
Coordinate41.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet38.setCoord(&Coordinate41);

Shape35.setGeometry(&IndexedFaceSet38);

Transform34.addChild(&Shape35);

Transform18.addChild(&Transform34);

Transform& Transform42 =  Transform();
Transform42.setDEF(CString("_3"));
Transform42.setTranslation(new float[]{-54.0043,6.12062,-55.7918});
Transform42.setRotation(new float[]{0,1,0,0.640408});
Transform42.setScale(new float[]{12.4865,12.4865,12.4867});
Transform42.setScaleOrientation(new float[]{0,1,0,0.00276214});
Shape& Shape43 =  Shape();
Appearance& Appearance44 =  Appearance();
ImageTexture& ImageTexture45 =  ImageTexture();
ImageTexture45.setDEF(CString("_4"));
ImageTexture45.setUrl(new CString[]{CString("tree.png")}, 1);
Appearance44.addChild(&ImageTexture45);

Shape43.addChild(&Appearance44);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setSolid(False);
IndexedFaceSet46.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate47 =  TextureCoordinate();
TextureCoordinate47.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet46.setTexCoord(&TextureCoordinate47);

Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet46.setCoord(&Coordinate48);

Shape43.setGeometry(&IndexedFaceSet46);

Transform42.addChild(&Shape43);

Transform18.addChild(&Transform42);

Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{-12.8074,0.00000190735,-3.36584});
Transform& Transform50 =  Transform();
Transform50.setUSE(CString("_3"));
Transform49.addChild(&Transform50);

Transform18.addChild(&Transform49);

Shape& Shape51 =  Shape();
Appearance& Appearance52 =  Appearance();
ImageTexture& ImageTexture53 =  ImageTexture();
ImageTexture53.setUrl(new CString[]{CString("haus_01-n.jpg")}, 1);
Appearance52.addChild(&ImageTexture53);

Shape51.addChild(&Appearance52);

IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setCreaseAngle(0.5);
IndexedFaceSet54.setColorIndex(new int[]{0,1,2,2,-1,4,2,1,3,-1}, 10);
IndexedFaceSet54.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,7,4,5,6,-1}, 10);
IndexedFaceSet54.setCoordIndex(new int32_t[]{0,1,2,3,-1,5,2,1,4,-1}, 10);
CColor& Color55 =  CColor();
Color55.setColor(new float[]{0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8}, 15);
IndexedFaceSet54.setColor(&Color55);

TextureCoordinate& TextureCoordinate56 =  TextureCoordinate();
TextureCoordinate56.setPoint(new float[]{2.55739,0.996263,0.0000120211,0.996263,0.0000120211,-0.0015844,2.55739,-0.0015844,0.00000970776,-0.00127949,0.00000970776,0.994097,1.24836,0.994097,1.24836,-0.00127949}, 16);
IndexedFaceSet54.setTexCoord(&TextureCoordinate56);

Coordinate& Coordinate57 =  Coordinate();
Coordinate57.setPoint(new float[]{29.5541,26.4656,-20,-11.4666,26.4656,-20,-11.4666,-0.2263,-20,29.5541,-0.2263,-20,-11.4666,26.4656,-36.7379,-11.4666,-0.2263,-36.7379}, 18);
IndexedFaceSet54.setCoord(&Coordinate57);

Shape51.setGeometry(&IndexedFaceSet54);

Transform18.addChild(&Shape51);

Transform10.addChild(&Transform18);

Transform& Transform58 =  Transform();
Transform58.setDEF(CString("east"));
Transform& Transform59 =  Transform();
Transform59.setDEF(CString("garage1"));
Transform& Transform60 =  Transform();
Transform60.setDEF(CString("_5"));
Transform60.setTranslation(new float[]{19.7371,2.16003,-3.85951});
Transform60.setRotation(new float[]{0,1,0,1.57079});
Transform60.setScale(new float[]{2.31205,2.31205,2.31211});
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
ImageTexture& ImageTexture63 =  ImageTexture();
ImageTexture63.setUrl(new CString[]{CString("door01.png")}, 1);
Appearance62.addChild(&ImageTexture63);

Shape61.addChild(&Appearance62);

IndexedFaceSet& IndexedFaceSet64 =  IndexedFaceSet();
IndexedFaceSet64.setSolid(False);
IndexedFaceSet64.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate65 =  TextureCoordinate();
TextureCoordinate65.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet64.setTexCoord(&TextureCoordinate65);

Coordinate& Coordinate66 =  Coordinate();
Coordinate66.setPoint(new float[]{-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0}, 12);
IndexedFaceSet64.setCoord(&Coordinate66);

Shape61.setGeometry(&IndexedFaceSet64);

Transform60.addChild(&Shape61);

Transform59.addChild(&Transform60);

Transform& Transform67 =  Transform();
Transform67.setTranslation(new float[]{0,0,5.95157});
Transform& Transform68 =  Transform();
Transform68.setTranslation(new float[]{27.1026,0,19.0319});
Transform68.setRotation(new float[]{0,1,0,1.5708});
Transform& Transform69 =  Transform();
Transform69.setUSE(CString("_5"));
Transform68.addChild(&Transform69);

Transform67.addChild(&Transform68);

Transform59.addChild(&Transform67);

Shape& Shape70 =  Shape();
Appearance& Appearance71 =  Appearance();
ImageTexture& ImageTexture72 =  ImageTexture();
ImageTexture72.setUrl(new CString[]{CString("wall1.png")}, 1);
Appearance71.addChild(&ImageTexture72);

Shape70.addChild(&Appearance71);

IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setCreaseAngle(0.5);
IndexedFaceSet73.setColorPerVertex(False);
IndexedFaceSet73.setColorIndex(new int[]{0,2,1}, 3);
IndexedFaceSet73.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,6,7,5,4,-1,10,11,9,8,-1}, 15);
IndexedFaceSet73.setCoordIndex(new int32_t[]{0,1,2,3,-1,0,3,5,4,-1,0,4,7,6,-1}, 15);
CColor& Color74 =  CColor();
Color74.setColor(new float[]{0.652406,0.627838,0.525697,0.0641711,0.0155253,0.0155253,1,0.962342,0.805781}, 9);
IndexedFaceSet73.setColor(&Color74);

TextureCoordinate& TextureCoordinate75 =  TextureCoordinate();
TextureCoordinate75.setPoint(new float[]{-0.11259,1.13924,2.48041,1.13924,2.48041,-0.137963,-0.11259,-0.137963,2.48041,1.59824,2.48041,-0.137963,-0.11259,1.2144,-0.11259,-0.137963,0.0332951,0.561523,0.562214,0.561523,0.0332951,0.0583913,0.562214,0.0583913}, 24);
IndexedFaceSet73.setTexCoord(&TextureCoordinate75);

Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setPoint(new float[]{20,8.80568,5.16677,20,8.80568,-13.1701,20,-0.2263,-13.1701,20,-0.2263,5.16677,37.3178,11.3692,5.16677,37.3178,-0.2263,5.16677,20,8.80568,-12.9189,37.3178,11.3692,-12.9189}, 24);
IndexedFaceSet73.setCoord(&Coordinate76);

Shape70.setGeometry(&IndexedFaceSet73);

Transform59.addChild(&Shape70);

Transform58.addChild(&Transform59);

Transform& Transform77 =  Transform();
Transform77.setDEF(CString("polo"));
Transform77.setTranslation(new float[]{28.3424,-0.226299,10.5008});
Transform77.setRotation(new float[]{0,-1,0,1.13355});
Transform77.setScale(new float[]{2.61351,2.6135,2.6135});
Inline& Inline78 =  Inline();
Inline78.setUrl(new CString[]{CString("pololow.x3d")}, 1);
Inline78.setBboxSize(new float[]{2.70251,0.990366,1.34988});
Inline78.setBboxCenter(new float[]{0.0000149608,0.495183,0.00000348687});
Transform77.addChild(&Inline78);

Transform58.addChild(&Transform77);

Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{44.8932,-0.272484,-5.14355});
Transform79.setRotation(new float[]{-1,0,0,1.5708});
Transform79.setScale(new float[]{12.5261,60.9437,13.3795});
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
ImageTexture& ImageTexture82 =  ImageTexture();
ImageTexture82.setUSE(CString("_1"));
Appearance81.addChild(&ImageTexture82);

TextureTransform& TextureTransform83 =  TextureTransform();
TextureTransform83.setScale(new float[]{1,3.92238});
Appearance81.setTextureTransform(TextureTransform83);

Shape80.addChild(&Appearance81);

IndexedFaceSet& IndexedFaceSet84 =  IndexedFaceSet();
IndexedFaceSet84.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate85 =  TextureCoordinate();
TextureCoordinate85.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet84.setTexCoord(&TextureCoordinate85);

Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet84.setCoord(&Coordinate86);

Shape80.setGeometry(&IndexedFaceSet84);

Transform79.addChild(&Shape80);

Transform58.addChild(&Transform79);

Transform& Transform87 =  Transform();
Transform87.setTranslation(new float[]{-20.6717,0.280127,24.7572});
Transform87.setScale(new float[]{2.23786,2.23786,2.23786});
Shape& Shape88 =  Shape();
Appearance& Appearance89 =  Appearance();
ImageTexture& ImageTexture90 =  ImageTexture();
ImageTexture90.setDEF(CString("_6"));
ImageTexture90.setUrl(new CString[]{CString("haus_03-n.jpg")}, 1);
Appearance89.addChild(&ImageTexture90);

Shape88.addChild(&Appearance89);

IndexedFaceSet& IndexedFaceSet91 =  IndexedFaceSet();
IndexedFaceSet91.setCreaseAngle(0.5);
IndexedFaceSet91.setColorIndex(new int[]{2,0,0,1,-1}, 5);
IndexedFaceSet91.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
CColor& Color92 =  CColor();
Color92.setColor(new float[]{0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8}, 9);
IndexedFaceSet91.setColor(&Color92);

TextureCoordinate& TextureCoordinate93 =  TextureCoordinate();
TextureCoordinate93.setPoint(new float[]{5.5278,0.99903,5.5278,-0.00460631,2.8031,-0.00460631,2.76392,0.99903}, 8);
IndexedFaceSet91.setTexCoord(&TextureCoordinate93);

Coordinate& Coordinate94 =  Coordinate();
Coordinate94.setPoint(new float[]{32.0172,14.2987,-20,32.0172,-0.2263,-20,32.0172,-0.2263,-0.28352,32.0172,14.2987,0}, 12);
IndexedFaceSet91.setCoord(&Coordinate94);

Shape88.setGeometry(&IndexedFaceSet91);

Transform87.addChild(&Shape88);

Transform58.addChild(&Transform87);

Transform& Transform95 =  Transform();
Transform95.setDEF(CString("graffity"));
Transform95.setTranslation(new float[]{19.9426,3.61878,1.21196});
Transform95.setRotation(new float[]{0,1,0,4.71239});
Transform95.setScale(new float[]{7.4409,7.4409,7.44095});
Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
ImageTexture& ImageTexture98 =  ImageTexture();
ImageTexture98.setUrl(new CString[]{CString("graffity.png")}, 1);
Appearance97.addChild(&ImageTexture98);

Shape96.addChild(&Appearance97);

IndexedFaceSet& IndexedFaceSet99 =  IndexedFaceSet();
IndexedFaceSet99.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate100 =  TextureCoordinate();
TextureCoordinate100.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet99.setTexCoord(&TextureCoordinate100);

Coordinate& Coordinate101 =  Coordinate();
Coordinate101.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet99.setCoord(&Coordinate101);

Shape96.setGeometry(&IndexedFaceSet99);

Transform95.addChild(&Shape96);

Transform58.addChild(&Transform95);

Transform10.addChild(&Transform58);

Transform& Transform102 =  Transform();
Transform102.setDEF(CString("west"));
Transform& Transform103 =  Transform();
Transform103.setDEF(CString("baum"));
Transform103.setTranslation(new float[]{-24.1792,5.43011,19.6274});
Transform103.setScale(new float[]{11.3128,11.3128,11.3129});
Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
ImageTexture& ImageTexture106 =  ImageTexture();
ImageTexture106.setUSE(CString("_4"));
Appearance105.addChild(&ImageTexture106);

Shape104.addChild(&Appearance105);

IndexedFaceSet& IndexedFaceSet107 =  IndexedFaceSet();
IndexedFaceSet107.setSolid(False);
IndexedFaceSet107.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1}, 20);
TextureCoordinate& TextureCoordinate108 =  TextureCoordinate();
TextureCoordinate108.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 32);
IndexedFaceSet107.setTexCoord(&TextureCoordinate108);

Coordinate& Coordinate109 =  Coordinate();
Coordinate109.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,-0.00000149012,-0.499999,-0.499998,5.9605e-8,-0.499999,0.499998,5.9605e-8,0.499999,0.499998,-0.00000149012,0.499999,-0.499998,-0.387503,-0.499999,0.315972,0.387505,-0.499999,-0.315976,0.387505,0.5,-0.315976,-0.387503,0.5,0.315972,-0.315976,-0.499999,-0.387503,0.315976,-0.499999,0.3875,0.315976,0.499999,0.3875,-0.315976,0.499999,-0.387503}, 48);
IndexedFaceSet107.setCoord(&Coordinate109);

Shape104.setGeometry(&IndexedFaceSet107);

Transform103.addChild(&Shape104);

Transform102.addChild(&Transform103);

Shape& Shape110 =  Shape();
Appearance& Appearance111 =  Appearance();
ImageTexture& ImageTexture112 =  ImageTexture();
ImageTexture112.setUSE(CString("_6"));
Appearance111.addChild(&ImageTexture112);

Shape110.addChild(&Appearance111);

IndexedFaceSet& IndexedFaceSet113 =  IndexedFaceSet();
IndexedFaceSet113.setCreaseAngle(0.5);
IndexedFaceSet113.setColorIndex(new int[]{0,0,2,1,-1,2,4,3,1,-1,4,0,0,3,-1}, 15);
IndexedFaceSet113.setCoordIndex(new int32_t[]{0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1}, 15);
CColor& Color114 =  CColor();
Color114.setColor(new float[]{0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0.8}, 15);
IndexedFaceSet113.setColor(&Color114);

TextureCoordinate& TextureCoordinate115 =  TextureCoordinate();
TextureCoordinate115.setPoint(new float[]{0.0000137347,-0.00177666,2.7794,-0.00177666,2.7794,0.996798,0.0000137347,0.996798,0.0000137347,0.908914,2.7794,0.908915,0.0000137347,0.952856,2.7794,0.952856}, 16);
IndexedFaceSet113.setTexCoord(&TextureCoordinate115);

Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setPoint(new float[]{-35.7534,-0.2263,20,-35.7534,-0.2263,-20,-38.6991,30.7826,-20,-38.6991,30.7826,20,-35.7534,26.3015,20,-35.7534,26.3016,-20,-35.9597,26.6154,20,-35.9597,26.6154,-20}, 24);
IndexedFaceSet113.setCoord(&Coordinate116);

Shape110.setGeometry(&IndexedFaceSet113);

Transform102.addChild(&Shape110);

Transform10.addChild(&Transform102);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("center"));
Transform& Transform118 =  Transform();
Transform118.setDEF(CString("feld"));
Transform118.setTranslation(new float[]{-0.0194635,3.20683,-0.660883});
Transform118.setRotation(new float[]{1,0.00000126533,-0.00000117221,1.5708});
Transform118.setScale(new float[]{1.0993,0.658338,0.321448});
Shape& Shape119 =  Shape();
Appearance& Appearance120 =  Appearance();
ImageTexture& ImageTexture121 =  ImageTexture();
ImageTexture121.setUrl(new CString[]{CString("fieldlines.png")}, 1);
Appearance120.addChild(&ImageTexture121);

TextureTransform& TextureTransform122 =  TextureTransform();
Appearance120.setTextureTransform(TextureTransform122);

Shape119.addChild(&Appearance120);

IndexedFaceSet& IndexedFaceSet123 =  IndexedFaceSet();
IndexedFaceSet123.setCreaseAngle(0.5);
IndexedFaceSet123.setColorIndex(new int[]{2,3,0,1,-1,3,2,0,0,-1}, 10);
IndexedFaceSet123.setCoordIndex(new int32_t[]{0,5,4,1,-1,5,2,3,4,-1}, 10);
CColor& Color124 =  CColor();
Color124.setColor(new float[]{0,0.336898,0.0498863,0.0954848,0.336898,0,0,0.0695187,0.010294,0.292576,0.40107,0.134587,0.0162257,0.283422,0}, 15);
IndexedFaceSet123.setColor(&Color124);

TextureCoordinate& TextureCoordinate125 =  TextureCoordinate();
TextureCoordinate125.setPoint(new float[]{0.996149,0.999547,0.999547,0.000452906,1,1,1,0,0.00385121,0.000452906,0.0106477,0.999547,0.5,0.5,0.5,0.5,0,0.5,1,0.5}, 20);
IndexedFaceSet123.setTexCoord(&TextureCoordinate125);

Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,10,10,-10,10,0,-10,10,0,10,10}, 18);
IndexedFaceSet123.setCoord(&Coordinate126);

Shape119.setGeometry(&IndexedFaceSet123);

Transform118.addChild(&Shape119);

Transform117.addChild(&Transform118);

Transform& Transform127 =  Transform();
Transform127.setDEF(CString("ad"));
Inline& Inline128 =  Inline();
Inline128.setUrl(new CString[]{CString("ad.x3d")}, 1);
Inline128.setBboxSize(new float[]{22.025,1.045,12.7965});
Inline128.setBboxCenter(new float[]{-0.00000429153,0.519136,-0.482112});
Transform127.addChild(&Inline128);

Transform117.addChild(&Transform127);

Transform& Transform129 =  Transform();
Transform129.setDEF(CString("floor"));
Transform129.setTranslation(new float[]{-9.41641,0,0});
Transform129.setScale(new float[]{1.24067,1,1});
Shape& Shape130 =  Shape();
Appearance& Appearance131 =  Appearance();
ImageTexture& ImageTexture132 =  ImageTexture();
ImageTexture132.setUSE(CString("_2"));
Appearance131.addChild(&ImageTexture132);

Shape130.addChild(&Appearance131);

IndexedFaceSet& IndexedFaceSet133 =  IndexedFaceSet();
IndexedFaceSet133.setCreaseAngle(0.5);
IndexedFaceSet133.setColorIndex(new int[]{0,0,0,5,-1,0,0,3,5,-1,0,0,5,3,-1,0,0,0,5,-1,0,0,3,4,-1,3,0,2,4,-1,1,1,4,2,-1,1,1,0,4,-1,1,1,1,1,-1,1,0,0,1,-1,0,0,1,0,-1,0,1,1,1,-1,2,0,1,2,-1,1,1,1,2,-1,1,1,2,1,-1,1,1,2,2,-1}, 80);
IndexedFaceSet133.setTexCoordIndex(new int32_t[]{10,8,16,14,-1,16,7,11,14,-1,4,17,13,11,-1,17,3,10,13,-1,18,4,12,22,-1,12,6,20,22,-1,9,23,21,20,-1,23,2,18,21,-1,24,5,28,26,-1,28,7,15,26,-1,8,29,25,15,-1,29,0,24,25,-1,19,6,27,32,-1,27,5,30,32,-1,1,33,31,30,-1,33,9,19,31,-1}, 80);
IndexedFaceSet133.setCoordIndex(new int32_t[]{9,7,12,11,-1,12,6,10,11,-1,4,13,11,10,-1,13,1,9,11,-1,14,4,10,16,-1,10,6,15,16,-1,8,17,16,15,-1,17,3,14,16,-1,18,5,20,19,-1,20,6,12,19,-1,7,21,19,12,-1,21,0,18,19,-1,15,6,20,23,-1,20,5,22,23,-1,2,24,23,22,-1,24,8,15,23,-1}, 80);
CColor& Color134 =  CColor();
Color134.setColor(new float[]{0.957219,0.802136,0.631533,0.256684,0.220422,0.156464,0.238502,0.256684,0.155867,0.854632,0.919786,0.558524,0.472035,0.508021,0.308487,0.754011,0.679117,0.487289}, 18);
IndexedFaceSet133.setColor(&Color134);

TextureCoordinate& TextureCoordinate135 =  TextureCoordinate();
TextureCoordinate135.setPoint(new float[]{1,1,0,1,0,0,1,0,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75}, 68);
IndexedFaceSet133.setTexCoord(&TextureCoordinate135);

Coordinate& Coordinate136 =  Coordinate();
Coordinate136.setPoint(new float[]{39.1252,-0.2263,-30.2671,39.1252,-0.2263,25.1494,-36.2811,-0.2263,-30.2671,-36.2811,-0.2263,25.1494,1.42204,-0.2263,25.1494,1.42204,-0.2263,-30.2671,1.42204,-0.2263,-2.55886,39.1252,-0.2263,-2.55886,-36.2811,-0.2263,-2.55886,39.1252,-0.2263,11.2953,1.42204,-0.2263,11.2953,20.2736,-0.2263,11.2953,20.2736,-0.2263,-2.55886,20.2736,-0.2263,25.1494,-17.4296,-0.2263,25.1494,-17.4296,-0.2263,-2.55886,-17.4296,-0.2263,11.2953,-36.2811,-0.2263,11.2953,20.2736,-0.2263,-30.2671,20.2736,-0.2263,-16.413,1.42204,-0.2263,-16.413,39.1252,-0.2263,-16.413,-17.4296,-0.2263,-30.2671,-17.4296,-0.2263,-16.413,-36.2811,-0.2263,-16.413}, 75);
IndexedFaceSet133.setCoord(&Coordinate136);

Shape130.setGeometry(&IndexedFaceSet133);

Transform129.addChild(&Shape130);

Transform117.addChild(&Transform129);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("garage2"));
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
ImageTexture& ImageTexture140 =  ImageTexture();
ImageTexture140.setUrl(new CString[]{CString("door01.jpg")}, 1);
Appearance139.addChild(&ImageTexture140);

Shape138.addChild(&Appearance139);

IndexedFaceSet& IndexedFaceSet141 =  IndexedFaceSet();
IndexedFaceSet141.setCreaseAngle(0.5);
IndexedFaceSet141.setColorIndex(new int[]{0,0,0,0,-1}, 5);
IndexedFaceSet141.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
CColor& Color142 =  CColor();
Color142.setColor(new float[]{0.641711,0.550595,0.446424}, 3);
IndexedFaceSet141.setColor(&Color142);

TextureCoordinate& TextureCoordinate143 =  TextureCoordinate();
TextureCoordinate143.setPoint(new float[]{-0.00627545,0.987725,1.99156,0.98773,1.99156,0.0000947937,-0.00627545,0.0000947937}, 8);
IndexedFaceSet141.setTexCoord(&TextureCoordinate143);

Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setPoint(new float[]{-11.0737,5.43062,-8.40596,-11.0737,5.43064,-18.8189,-11.0737,0.00509359,-18.8189,-11.0737,0.00506875,-8.40598}, 12);
IndexedFaceSet141.setCoord(&Coordinate144);

Shape138.setGeometry(&IndexedFaceSet141);

Transform137.addChild(&Shape138);

Transform& Transform145 =  Transform();
Transform145.setDEF(CString("schuppen"));
Shape& Shape146 =  Shape();
Appearance& Appearance147 =  Appearance();
ImageTexture& ImageTexture148 =  ImageTexture();
ImageTexture148.setUrl(new CString[]{CString("brick1.png")}, 1);
Appearance147.addChild(&ImageTexture148);

Shape146.addChild(&Appearance147);

IndexedFaceSet& IndexedFaceSet149 =  IndexedFaceSet();
IndexedFaceSet149.setCreaseAngle(0.5);
IndexedFaceSet149.setColorIndex(new int[]{0,2,2,-1,0,0,2,-1,2,1,2,2,-1,1,2,0,-1,2,0,0,-1,3,3,3,3,-1,2,2,2,2,-1}, 31);
IndexedFaceSet149.setTexCoordIndex(new int32_t[]{4,6,7,-1,4,5,6,-1,3,2,7,6,-1,2,3,0,-1,3,1,0,-1,8,12,13,14,-1,15,9,11,10,-1}, 31);
IndexedFaceSet149.setCoordIndex(new int32_t[]{5,4,7,-1,5,6,4,-1,1,3,7,4,-1,3,1,0,-1,1,2,0,-1,8,9,7,3,-1,7,9,11,10,-1}, 31);
CColor& Color150 =  CColor();
Color150.setColor(new float[]{0.299465,0.256944,0.208331,0.390374,0.334945,0.271575,0.641711,0.550595,0.446424,0.0641711,0.0155253,0.0155253}, 12);
IndexedFaceSet149.setColor(&Color150);

TextureCoordinate& TextureCoordinate151 =  TextureCoordinate();
TextureCoordinate151.setPoint(new float[]{6.38503,0.0870536,3.42261,0.0870536,6.38503,1.46927,3.42261,0.77816,0.0760661,0.0870536,1.19158,0.0870536,1.19158,0.77816,0.0760661,1.46927,0.717518,1.05635,2.84544,1.46661,0.070678,0.0894595,2.84544,0.0894595,0.724231,0.214736,1.06927,0.216736,1.06256,1.05835,0.070678,1.46661}, 32);
IndexedFaceSet149.setTexCoord(&TextureCoordinate151);

Coordinate& Coordinate152 =  Coordinate();
Coordinate152.setPoint(new float[]{20,0.0000295639,-6.90226,5.47098,3.21451,-6.90222,5.47098,0.0000276566,-6.90223,20,6.429,-6.90224,-5.47102,3.21451,-6.90219,-10.942,0.000026226,-6.90219,-5.47102,0.0000267029,-6.9022,-10.942,6.429,-6.90217,20,6.42903,-20.2345,-10.942,6.42903,-20.2345,-10.942,0.00506508,-6.90219,-10.942,0.00509703,-20.2345}, 36);
IndexedFaceSet149.setCoord(&Coordinate152);

Shape146.setGeometry(&IndexedFaceSet149);

Transform145.addChild(&Shape146);

Transform137.addChild(&Transform145);

Transform117.addChild(&Transform137);

Transform& Transform153 =  Transform();
Transform153.setDEF(CString("elsen"));
Transform& Transform154 =  Transform();
Transform154.setTranslation(new float[]{11.7994,-0.2263,-0.123905});
Inline& Inline155 =  Inline();
Inline155.setUrl(new CString[]{CString("people.x3d")}, 1);
Inline155.setBboxSize(new float[]{5,4.08028,5});
Transform154.addChild(&Inline155);

Transform153.addChild(&Transform154);

Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{11.0723,-0.226301,7.03137});
Inline& Inline157 =  Inline();
Inline157.setUrl(new CString[]{CString("people.x3d")}, 1);
Inline157.setBboxSize(new float[]{5,4.08028,5});
Transform156.addChild(&Inline157);

Transform153.addChild(&Transform156);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{-8.08885,6.429,-7.39652});
Inline& Inline159 =  Inline();
Inline159.setUrl(new CString[]{CString("people.x3d")}, 1);
Inline159.setBboxSize(new float[]{5,4.08028,5});
Transform158.addChild(&Inline159);

Transform153.addChild(&Transform158);

Transform& Transform160 =  Transform();
Transform160.setTranslation(new float[]{-13.3847,-0.217765,6.80872});
Inline& Inline161 =  Inline();
Inline161.setUrl(new CString[]{CString("people.x3d")}, 1);
Inline161.setBboxSize(new float[]{5,4.08028,5});
Transform160.addChild(&Inline161);

Transform153.addChild(&Transform160);

Transform& Transform162 =  Transform();
Transform162.setTranslation(new float[]{-13.2207,-0.226299,5.17212});
Inline& Inline163 =  Inline();
Inline163.setUrl(new CString[]{CString("people.x3d")}, 1);
Inline163.setBboxSize(new float[]{5,4.08028,5});
Transform162.addChild(&Inline163);

Transform153.addChild(&Transform162);

Transform117.addChild(&Transform153);

Transform10.addChild(&Transform117);

Scene7.addChild(&Transform10);

DirectionalLight& DirectionalLight164 =  DirectionalLight();
DirectionalLight164.setDEF(CString("Light2"));
DirectionalLight164.setAmbientIntensity(0.5);
DirectionalLight164.setDirection(new float[]{-0.510897,-0.56047,-0.651811});
Scene7.addChild(&DirectionalLight164);

X3D0.setScene(&Scene7);

}
