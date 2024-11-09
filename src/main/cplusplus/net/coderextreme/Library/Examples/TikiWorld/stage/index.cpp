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
meta3.setContent(CString("Fri, 13 Nov 2015 10:12:58 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 13 Nov 2015 10:12:58 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Tikiworld"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene8.addChild(&WorldInfo9);

DirectionalLight& DirectionalLight10 =  DirectionalLight();
DirectionalLight10.setDEF(CString("Light1"));
DirectionalLight10.setAmbientIntensity(0.44);
DirectionalLight10.setDirection(new float[]{-0.342887,-0.849953,0.400012});
Scene8.addChild(&DirectionalLight10);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("umgebung"));
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("e"));
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("ne"));
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("himmel"));
Transform14.setTranslation(new float[]{0.00187206,960.104,0});
Transform14.setRotation(new float[]{0,1,0,1.5708});
Transform14.setScale(new float[]{114.992,114.994,114.992});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
ImageTexture& ImageTexture17 =  ImageTexture();
ImageTexture17.setDEF(CString("_1"));
ImageTexture17.setUrl(new CString[]{CString("himmelszelt.png")}, 1);
Appearance16.addChild(&ImageTexture17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setCcw(False);
IndexedFaceSet18.setCreaseAngle(0.5);
IndexedFaceSet18.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,7,8,9,-1,6,7,10,-1,10,7,9,-1,10,9,11,-1,1,12,3,-1,3,12,13,-1,3,13,5,-1,5,13,14,-1,5,14,7,-1,7,14,8,-1,14,15,8,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,14,17,15,-1,17,18,15,-1,16,19,17,-1,17,19,18,-1,18,19,20,-1}, 100);
IndexedFaceSet18.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,7,8,9,-1,6,7,10,-1,10,7,9,-1,10,9,11,-1,1,12,3,-1,3,12,13,-1,3,13,5,-1,5,13,14,-1,5,14,7,-1,7,14,8,-1,14,15,8,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,14,17,15,-1,17,18,15,-1,16,19,17,-1,17,19,18,-1,18,19,20,-1}, 100);
TextureCoordinate& TextureCoordinate19 =  TextureCoordinate();
TextureCoordinate19.setPoint(new float[]{1,0.506943,0.985071,0.506943,0.985071,0.383991,0.952267,0.354093,0.916024,0.225741,0.833332,0.16898,0.777349,0.0851401,0.650754,0.0483953,0.499998,0.0851411,0.499998,0.0151361,0.621266,0.0151356,0.499998,0,0.916025,0.506943,0.833333,0.337962,0.666665,0.168981,0.499999,0.225742,0.77735,0.506943,0.650755,0.354094,0.5,0.383992,0.621268,0.506944,0.5,0.506944}, 42);
IndexedFaceSet18.setTexCoord(&TextureCoordinate19);

Coordinate& Coordinate20 =  Coordinate();
Coordinate20.setPoint(new float[]{4.40577,-10.552,0.0000162815,4.27423,-9.4835,0.0000157954,4.27422,-10.552,1.06857,3.98517,-9.22367,1.32841,3.66582,-10.552,2.4439,2.93717,-9.08347,2.93719,2.44387,-10.552,3.66583,1.32838,-9.22367,3.98518,-0.000013547,-8.1082,3.66583,-0.0000157954,-9.4835,4.27423,1.06854,-10.552,4.27423,-0.0000162815,-10.552,4.40577,3.66583,-8.1082,0.000013547,2.93718,-7.61491,1.4686,1.46858,-7.61491,2.93719,-0.00000903134,-6.88628,2.44388,2.44388,-6.88628,0.00000903134,1.32839,-6.56694,1.3284,-0.00000394884,-6.27789,1.06856,1.06856,-6.27789,0.00000394884,0,-6.14634,0}, 63);
IndexedFaceSet18.setCoord(&Coordinate20);

Shape15.setGeometry(&IndexedFaceSet18);

Transform14.addChild(&Shape15);

Transform13.addChild(&Transform14);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("vulkan"));
Transform21.setTranslation(new float[]{0,26.2066,-0.162065});
Transform21.setRotation(new float[]{0,-1,0,1.5708});
Transform21.setScale(new float[]{2.5,1.10441,2.5});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDEF(CString("_2"));
Material24.setAmbientIntensity(0.433333);
Material24.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance23.addChild(&Material24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setDEF(CString("_3"));
ImageTexture25.setUrl(new CString[]{CString("terrain.png")}, 1);
Appearance23.addChild(&ImageTexture25);

TextureTransform& TextureTransform26 =  TextureTransform();
TextureTransform26.setDEF(CString("_4"));
TextureTransform26.setScale(new float[]{5.66125,1.24856});
Appearance23.setTextureTransform(TextureTransform26);

Shape22.addChild(&Appearance23);

IndexedFaceSet& IndexedFaceSet27 =  IndexedFaceSet();
IndexedFaceSet27.setCcw(False);
IndexedFaceSet27.setCreaseAngle(0.5);
IndexedFaceSet27.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,10,7,9,-1,10,0,3,-1,10,3,5,-1,10,5,7,-1}, 36);
IndexedFaceSet27.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,10,7,9,-1,10,0,3,-1,10,3,5,-1,10,5,7,-1}, 36);
TextureCoordinate& TextureCoordinate28 =  TextureCoordinate();
TextureCoordinate28.setPoint(new float[]{0.118876,1.09306,0,1.09306,0.0189622,1.51136,0.128789,1.31175,0.0729614,1.86598,0.15702,1.49713,0.153777,2.10292,0.199269,1.62101,0.249106,2.18613,0.249106,1.66451,0.24253,1.09112}, 22);
IndexedFaceSet27.setTexCoord(&TextureCoordinate28);

Coordinate& Coordinate29 =  Coordinate();
Coordinate29.setPoint(new float[]{-52.2789,-100,0,-100,100,-0.00000119249,-92.3879,100,-38.2684,-48.2994,-100,-20.0063,-70.7107,100,-70.7107,-36.9668,-100,-36.9668,-38.2683,100,-92.388,-20.0063,-100,-48.2995,0,100,-100,0,-100,-52.2789,-2.63974,-268.489,0.17755}, 33);
IndexedFaceSet27.setCoord(&Coordinate29);

Shape22.setGeometry(&IndexedFaceSet27);

Transform21.addChild(&Shape22);

Transform13.addChild(&Transform21);

Transform& Transform30 =  Transform();
Transform& Transform31 =  Transform();
Transform31.setTranslation(new float[]{0,-248.468,0});
Transform31.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setDEF(CString("_5"));
Material34.setAmbientIntensity(0.16);
Material34.setDiffuseColor(new float[]{1,1,1});
Material34.setTransparency(0.12766);
Appearance33.addChild(&Material34);

ImageTexture& ImageTexture35 =  ImageTexture();
ImageTexture35.setDEF(CString("_6"));
ImageTexture35.setUrl(new CString[]{CString("wasser01.png")}, 1);
Appearance33.addChild(&ImageTexture35);

TextureTransform& TextureTransform36 =  TextureTransform();
TextureTransform36.setDEF(CString("_7"));
TextureTransform36.setScale(new float[]{5,5});
Appearance33.setTextureTransform(TextureTransform36);

Shape32.addChild(&Appearance33);

IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setCreaseAngle(0.5);
IndexedFaceSet37.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet37.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate38 =  TextureCoordinate();
TextureCoordinate38.setPoint(new float[]{1,0.75,1,1,0.75,1,0.75,0.75}, 8);
IndexedFaceSet37.setTexCoord(&TextureCoordinate38);

Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setPoint(new float[]{100,100,-50,100,100,-100,50,100,-100,50,100,-50}, 12);
IndexedFaceSet37.setCoord(&Coordinate39);

Shape32.setGeometry(&IndexedFaceSet37);

Transform31.addChild(&Shape32);

Transform30.addChild(&Transform31);

Transform& Transform40 =  Transform();
Transform40.setTranslation(new float[]{0,-248.468,0});
Transform40.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setUSE(CString("_5"));
Appearance42.addChild(&Material43);

ImageTexture& ImageTexture44 =  ImageTexture();
ImageTexture44.setUSE(CString("_6"));
Appearance42.addChild(&ImageTexture44);

TextureTransform& TextureTransform45 =  TextureTransform();
TextureTransform45.setUSE(CString("_7"));
Appearance42.setTextureTransform(TextureTransform45);

Shape41.addChild(&Appearance42);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setCreaseAngle(0.5);
IndexedFaceSet46.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet46.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate47 =  TextureCoordinate();
TextureCoordinate47.setPoint(new float[]{0.75,1,0.5,1,0.5,0.75,0.75,0.75}, 8);
IndexedFaceSet46.setTexCoord(&TextureCoordinate47);

Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setPoint(new float[]{50,100,-100,0,100,-100,0,100,-50,50,100,-50}, 12);
IndexedFaceSet46.setCoord(&Coordinate48);

Shape41.setGeometry(&IndexedFaceSet46);

Transform40.addChild(&Shape41);

Transform30.addChild(&Transform40);

Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{0,-248.468,0});
Transform49.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setUSE(CString("_5"));
Appearance51.addChild(&Material52);

ImageTexture& ImageTexture53 =  ImageTexture();
ImageTexture53.setUSE(CString("_6"));
Appearance51.addChild(&ImageTexture53);

TextureTransform& TextureTransform54 =  TextureTransform();
TextureTransform54.setUSE(CString("_7"));
Appearance51.setTextureTransform(TextureTransform54);

Shape50.addChild(&Appearance51);

IndexedFaceSet& IndexedFaceSet55 =  IndexedFaceSet();
IndexedFaceSet55.setCreaseAngle(0.5);
IndexedFaceSet55.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet55.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate56 =  TextureCoordinate();
TextureCoordinate56.setPoint(new float[]{0.5,0.75,0.5,0.5,0.75,0.5,0.75,0.75}, 8);
IndexedFaceSet55.setTexCoord(&TextureCoordinate56);

Coordinate& Coordinate57 =  Coordinate();
Coordinate57.setPoint(new float[]{0,100,-50,0,100,0,50,100,0,50,100,-50}, 12);
IndexedFaceSet55.setCoord(&Coordinate57);

Shape50.setGeometry(&IndexedFaceSet55);

Transform49.addChild(&Shape50);

Transform30.addChild(&Transform49);

Transform& Transform58 =  Transform();
Transform58.setTranslation(new float[]{0,-248.468,0});
Transform58.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Material61.setUSE(CString("_5"));
Appearance60.addChild(&Material61);

ImageTexture& ImageTexture62 =  ImageTexture();
ImageTexture62.setUSE(CString("_6"));
Appearance60.addChild(&ImageTexture62);

TextureTransform& TextureTransform63 =  TextureTransform();
TextureTransform63.setUSE(CString("_7"));
Appearance60.setTextureTransform(TextureTransform63);

Shape59.addChild(&Appearance60);

IndexedFaceSet& IndexedFaceSet64 =  IndexedFaceSet();
IndexedFaceSet64.setCreaseAngle(0.5);
IndexedFaceSet64.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet64.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate65 =  TextureCoordinate();
TextureCoordinate65.setPoint(new float[]{1,0.5,1,0.75,0.75,0.75,0.75,0.5}, 8);
IndexedFaceSet64.setTexCoord(&TextureCoordinate65);

Coordinate& Coordinate66 =  Coordinate();
Coordinate66.setPoint(new float[]{100,100,0,100,100,-50,50,100,-50,50,100,0}, 12);
IndexedFaceSet64.setCoord(&Coordinate66);

Shape59.setGeometry(&IndexedFaceSet64);

Transform58.addChild(&Shape59);

Transform30.addChild(&Transform58);

Transform13.addChild(&Transform30);

Transform12.addChild(&Transform13);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("se"));
Transform& Transform68 =  Transform();
Transform68.setDEF(CString("himmel_1"));
Transform68.setTranslation(new float[]{0.00187206,960.104,0.00000101022});
Transform68.setRotation(new float[]{0,1,0,1.5708});
Transform68.setScale(new float[]{114.992,114.994,114.992});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
ImageTexture& ImageTexture71 =  ImageTexture();
ImageTexture71.setUSE(CString("_1"));
Appearance70.addChild(&ImageTexture71);

Shape69.addChild(&Appearance70);

IndexedFaceSet& IndexedFaceSet72 =  IndexedFaceSet();
IndexedFaceSet72.setCcw(False);
IndexedFaceSet72.setCreaseAngle(0.5);
IndexedFaceSet72.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1}, 100);
IndexedFaceSet72.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1}, 100);
TextureCoordinate& TextureCoordinate73 =  TextureCoordinate();
TextureCoordinate73.setPoint(new float[]{0.499998,0,0.499998,0.0151361,0.37873,0.0151365,0.349243,0.0483965,0.222648,0.0851421,0.166665,0.168983,0.0839738,0.225744,0.0477324,0.354097,0.0149283,0.383994,0.0149287,0.506946,0,0.506946,0.499998,0.0851411,0.333332,0.168982,0.166666,0.337964,0.0839748,0.506946,0.499999,0.225742,0.349244,0.354096,0.22265,0.506945,0.5,0.383992,0.378732,0.506945,0.5,0.506944}, 42);
IndexedFaceSet72.setTexCoord(&TextureCoordinate73);

Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setPoint(new float[]{-0.0000162815,-10.552,4.40577,-0.0000157954,-9.4835,4.27423,-1.06857,-10.552,4.27422,-1.32841,-9.22367,3.98517,-2.4439,-10.552,3.66582,-2.93719,-9.08347,2.93717,-3.66583,-10.552,2.44387,-3.98518,-9.22367,1.32838,-4.27423,-10.552,1.06854,-4.27423,-9.4835,-0.0000157954,-4.40577,-10.552,-0.0000162815,-0.000013547,-8.1082,3.66583,-1.4686,-7.61491,2.93718,-2.93719,-7.61491,1.46858,-3.66583,-8.1082,-0.000013547,-0.00000903134,-6.88628,2.44388,-1.3284,-6.56694,1.32839,-2.44388,-6.88628,-0.00000903134,-0.00000394884,-6.27789,1.06856,-1.06856,-6.27789,-0.00000394884,0,-6.14634,0}, 63);
IndexedFaceSet72.setCoord(&Coordinate74);

Shape69.setGeometry(&IndexedFaceSet72);

Transform68.addChild(&Shape69);

Transform67.addChild(&Transform68);

Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{0,26.2066,-0.162065});
Transform75.setRotation(new float[]{0,-1,0,1.5708});
Transform75.setScale(new float[]{2.5,1.10441,2.5});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
Material& Material78 =  Material();
Material78.setUSE(CString("_2"));
Appearance77.addChild(&Material78);

ImageTexture& ImageTexture79 =  ImageTexture();
ImageTexture79.setUSE(CString("_3"));
Appearance77.addChild(&ImageTexture79);

TextureTransform& TextureTransform80 =  TextureTransform();
TextureTransform80.setUSE(CString("_4"));
Appearance77.setTextureTransform(TextureTransform80);

Shape76.addChild(&Appearance77);

IndexedFaceSet& IndexedFaceSet81 =  IndexedFaceSet();
IndexedFaceSet81.setCcw(False);
IndexedFaceSet81.setCreaseAngle(0.5);
IndexedFaceSet81.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,10,0,3,-1,10,3,5,-1,10,5,7,-1,10,7,9,-1}, 36);
IndexedFaceSet81.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,10,0,3,-1,10,3,5,-1,10,5,7,-1,10,7,9,-1}, 36);
TextureCoordinate& TextureCoordinate82 =  TextureCoordinate();
TextureCoordinate82.setPoint(new float[]{0.249106,1.66451,0.249106,2.18613,0.344435,2.10292,0.298943,1.62101,0.425251,1.86598,0.341193,1.49713,0.47925,1.51136,0.369423,1.31175,0.498212,1.09306,0.379336,1.09306,0.24253,1.09112}, 22);
IndexedFaceSet81.setTexCoord(&TextureCoordinate82);

Coordinate& Coordinate83 =  Coordinate();
Coordinate83.setPoint(new float[]{0,-100,-52.2789,0,100,-100,38.2683,100,-92.388,20.0063,-100,-48.2995,70.7107,100,-70.7107,36.9668,-100,-36.9668,92.388,100,-38.2683,48.2995,-100,-20.0063,100,100,0.00000437114,52.2789,-100,0.00000762939,-2.63974,-268.489,0.17755}, 33);
IndexedFaceSet81.setCoord(&Coordinate83);

Shape76.setGeometry(&IndexedFaceSet81);

Transform75.addChild(&Shape76);

Transform67.addChild(&Transform75);

Transform& Transform84 =  Transform();
Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{0,-248.468,0});
Transform85.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Material& Material88 =  Material();
Material88.setUSE(CString("_5"));
Appearance87.addChild(&Material88);

ImageTexture& ImageTexture89 =  ImageTexture();
ImageTexture89.setUSE(CString("_6"));
Appearance87.addChild(&ImageTexture89);

TextureTransform& TextureTransform90 =  TextureTransform();
TextureTransform90.setUSE(CString("_7"));
Appearance87.setTextureTransform(TextureTransform90);

Shape86.addChild(&Appearance87);

IndexedFaceSet& IndexedFaceSet91 =  IndexedFaceSet();
IndexedFaceSet91.setCreaseAngle(0.5);
IndexedFaceSet91.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet91.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate92 =  TextureCoordinate();
TextureCoordinate92.setPoint(new float[]{0.75,0,1,0,1,0.25,0.75,0.25}, 8);
IndexedFaceSet91.setTexCoord(&TextureCoordinate92);

Coordinate& Coordinate93 =  Coordinate();
Coordinate93.setPoint(new float[]{50,100,100,100,100,100,100,100,50,50,100,50}, 12);
IndexedFaceSet91.setCoord(&Coordinate93);

Shape86.setGeometry(&IndexedFaceSet91);

Transform85.addChild(&Shape86);

Transform84.addChild(&Transform85);

Transform& Transform94 =  Transform();
Transform94.setTranslation(new float[]{0,-248.468,0});
Transform94.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Material97.setUSE(CString("_5"));
Appearance96.addChild(&Material97);

ImageTexture& ImageTexture98 =  ImageTexture();
ImageTexture98.setUSE(CString("_6"));
Appearance96.addChild(&ImageTexture98);

TextureTransform& TextureTransform99 =  TextureTransform();
TextureTransform99.setUSE(CString("_7"));
Appearance96.setTextureTransform(TextureTransform99);

Shape95.addChild(&Appearance96);

IndexedFaceSet& IndexedFaceSet100 =  IndexedFaceSet();
IndexedFaceSet100.setCreaseAngle(0.5);
IndexedFaceSet100.setTexCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
IndexedFaceSet100.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate101 =  TextureCoordinate();
TextureCoordinate101.setPoint(new float[]{0.5,0,0.5,0.25,0.75,0.25,0.75,0}, 8);
IndexedFaceSet100.setTexCoord(&TextureCoordinate101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{0,100,100,0,100,50,50,100,50,50,100,100}, 12);
IndexedFaceSet100.setCoord(&Coordinate102);

Shape95.setGeometry(&IndexedFaceSet100);

Transform94.addChild(&Shape95);

Transform84.addChild(&Transform94);

Transform& Transform103 =  Transform();
Transform103.setTranslation(new float[]{0,-248.468,0});
Transform103.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Material106.setUSE(CString("_5"));
Appearance105.addChild(&Material106);

ImageTexture& ImageTexture107 =  ImageTexture();
ImageTexture107.setUSE(CString("_6"));
Appearance105.addChild(&ImageTexture107);

TextureTransform& TextureTransform108 =  TextureTransform();
TextureTransform108.setUSE(CString("_7"));
Appearance105.setTextureTransform(TextureTransform108);

Shape104.addChild(&Appearance105);

IndexedFaceSet& IndexedFaceSet109 =  IndexedFaceSet();
IndexedFaceSet109.setCreaseAngle(0.5);
IndexedFaceSet109.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet109.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate110 =  TextureCoordinate();
TextureCoordinate110.setPoint(new float[]{0.75,0.5,0.5,0.5,0.5,0.25,0.75,0.25}, 8);
IndexedFaceSet109.setTexCoord(&TextureCoordinate110);

Coordinate& Coordinate111 =  Coordinate();
Coordinate111.setPoint(new float[]{50,100,0,0,100,0,0,100,50,50,100,50}, 12);
IndexedFaceSet109.setCoord(&Coordinate111);

Shape104.setGeometry(&IndexedFaceSet109);

Transform103.addChild(&Shape104);

Transform84.addChild(&Transform103);

Transform& Transform112 =  Transform();
Transform112.setTranslation(new float[]{0,-248.468,0});
Transform112.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape113 =  Shape();
Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setUSE(CString("_5"));
Appearance114.addChild(&Material115);

ImageTexture& ImageTexture116 =  ImageTexture();
ImageTexture116.setUSE(CString("_6"));
Appearance114.addChild(&ImageTexture116);

TextureTransform& TextureTransform117 =  TextureTransform();
TextureTransform117.setUSE(CString("_7"));
Appearance114.setTextureTransform(TextureTransform117);

Shape113.addChild(&Appearance114);

IndexedFaceSet& IndexedFaceSet118 =  IndexedFaceSet();
IndexedFaceSet118.setCreaseAngle(0.5);
IndexedFaceSet118.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet118.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate119 =  TextureCoordinate();
TextureCoordinate119.setPoint(new float[]{1,0.25,1,0.5,0.75,0.5,0.75,0.25}, 8);
IndexedFaceSet118.setTexCoord(&TextureCoordinate119);

Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[]{100,100,50,100,100,0,50,100,0,50,100,50}, 12);
IndexedFaceSet118.setCoord(&Coordinate120);

Shape113.setGeometry(&IndexedFaceSet118);

Transform112.addChild(&Shape113);

Transform84.addChild(&Transform112);

Transform67.addChild(&Transform84);

Transform12.addChild(&Transform67);

Transform11.addChild(&Transform12);

Transform& Transform121 =  Transform();
Transform121.setDEF(CString("w"));
Transform& Transform122 =  Transform();
Transform122.setDEF(CString("sw"));
Transform& Transform123 =  Transform();
Transform123.setDEF(CString("himmel_2"));
Transform123.setTranslation(new float[]{0.00187206,960.104,-0.0000152588});
Transform123.setRotation(new float[]{0,1,0,1.5708});
Transform123.setScale(new float[]{114.992,114.994,114.992});
Shape& Shape124 =  Shape();
Appearance& Appearance125 =  Appearance();
ImageTexture& ImageTexture126 =  ImageTexture();
ImageTexture126.setUSE(CString("_1"));
Appearance125.addChild(&ImageTexture126);

Shape124.addChild(&Appearance125);

IndexedFaceSet& IndexedFaceSet127 =  IndexedFaceSet();
IndexedFaceSet127.setCcw(False);
IndexedFaceSet127.setCreaseAngle(0.5);
IndexedFaceSet127.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,1,4,3,-1,2,3,5,-1,5,3,6,-1,5,6,7,-1,7,6,8,-1,7,8,9,-1,9,8,10,-1,9,10,11,-1,3,4,12,-1,4,13,12,-1,3,12,6,-1,6,12,14,-1,6,14,8,-1,8,14,15,-1,8,15,10,-1,12,13,16,-1,13,17,16,-1,12,16,14,-1,14,16,18,-1,14,18,15,-1,16,17,19,-1,19,17,20,-1,16,19,18,-1}, 100);
IndexedFaceSet127.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,1,4,3,-1,2,3,5,-1,5,3,6,-1,5,6,7,-1,7,6,8,-1,7,8,9,-1,9,8,10,-1,9,10,11,-1,3,4,12,-1,4,13,12,-1,3,12,6,-1,6,12,14,-1,6,14,8,-1,8,14,15,-1,8,15,10,-1,12,13,16,-1,13,17,16,-1,12,16,14,-1,14,16,18,-1,14,18,15,-1,16,17,19,-1,19,17,20,-1,16,19,18,-1}, 100);
TextureCoordinate& TextureCoordinate128 =  TextureCoordinate();
TextureCoordinate128.setPoint(new float[]{0,0.506946,0.0149287,0.506946,0.0149291,0.629898,0.0477335,0.659796,0.0839748,0.506946,0.0839758,0.788148,0.166668,0.844909,0.222651,0.928749,0.349246,0.965494,0.378734,0.998753,0.500002,0.998753,0.500002,1.01389,0.166667,0.675927,0.22265,0.506945,0.333335,0.844908,0.500001,0.928748,0.349245,0.659794,0.378732,0.506945,0.500001,0.788147,0.5,0.629897,0.5,0.506944}, 42);
IndexedFaceSet127.setTexCoord(&TextureCoordinate128);

Coordinate& Coordinate129 =  Coordinate();
Coordinate129.setPoint(new float[]{-4.40577,-10.552,-0.0000162815,-4.27423,-9.4835,-0.0000157954,-4.27422,-10.552,-1.06857,-3.98517,-9.22367,-1.32841,-3.66583,-8.1082,-0.000013547,-3.66582,-10.552,-2.4439,-2.93717,-9.08347,-2.93719,-2.44387,-10.552,-3.66583,-1.32838,-9.22367,-3.98518,-1.06854,-10.552,-4.27423,0.0000157954,-9.4835,-4.27423,0.0000162815,-10.552,-4.40577,-2.93718,-7.61491,-1.4686,-2.44388,-6.88628,-0.00000903134,-1.46858,-7.61491,-2.93719,0.000013547,-8.1082,-3.66583,-1.32839,-6.56694,-1.3284,-1.06856,-6.27789,-0.00000394884,0.00000903134,-6.88628,-2.44388,0.00000394884,-6.27789,-1.06856,0,-6.14634,0}, 63);
IndexedFaceSet127.setCoord(&Coordinate129);

Shape124.setGeometry(&IndexedFaceSet127);

Transform123.addChild(&Shape124);

Transform122.addChild(&Transform123);

Transform& Transform130 =  Transform();
Transform130.setDEF(CString("vulkan_1"));
Transform130.setTranslation(new float[]{0,26.2066,-0.162065});
Transform130.setRotation(new float[]{0,-1,0,1.5708});
Transform130.setScale(new float[]{2.5,1.10441,2.5});
Shape& Shape131 =  Shape();
Appearance& Appearance132 =  Appearance();
Material& Material133 =  Material();
Material133.setUSE(CString("_2"));
Appearance132.addChild(&Material133);

ImageTexture& ImageTexture134 =  ImageTexture();
ImageTexture134.setUSE(CString("_3"));
Appearance132.addChild(&ImageTexture134);

TextureTransform& TextureTransform135 =  TextureTransform();
TextureTransform135.setUSE(CString("_4"));
Appearance132.setTextureTransform(TextureTransform135);

Shape131.addChild(&Appearance132);

IndexedFaceSet& IndexedFaceSet136 =  IndexedFaceSet();
IndexedFaceSet136.setCcw(False);
IndexedFaceSet136.setCreaseAngle(0.5);
IndexedFaceSet136.setTexCoordIndex(new int32_t[]{8,0,1,9,-1,9,1,2,6,-1,6,2,3,7,-1,7,3,4,10,-1,5,8,9,-1,5,9,6,-1,5,6,7,-1,5,7,10,-1}, 36);
IndexedFaceSet136.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,10,0,2,-1,10,2,4,-1,10,4,6,-1,10,6,8,-1}, 36);
TextureCoordinate& TextureCoordinate137 =  TextureCoordinate();
TextureCoordinate137.setPoint(new float[]{0.498212,1.09306,0.572947,0.400053,0.425251,0.320151,0.344435,0.083204,0.249106,0,0.24253,1.09112,0.341193,0.688993,0.298943,0.56512,0.379336,1.09306,0.46312,0.599669,0.249106,0.521622}, 22);
IndexedFaceSet136.setTexCoord(&TextureCoordinate137);

Coordinate& Coordinate138 =  Coordinate();
Coordinate138.setPoint(new float[]{52.2789,-100,0.00000762939,100,100,0.00000437114,85.9127,-110.587,45.1387,130.001,89.4134,63.4008,36.9668,-100,36.9668,70.7107,100,70.7107,20.0063,-100,48.2995,38.2683,100,92.388,0.00000572205,-100,52.2789,0.0000150996,100,100,-2.63974,-268.489,0.17755}, 33);
IndexedFaceSet136.setCoord(&Coordinate138);

Shape131.setGeometry(&IndexedFaceSet136);

Transform130.addChild(&Shape131);

Transform122.addChild(&Transform130);

Transform& Transform139 =  Transform();
Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{0,-248.468,0});
Transform140.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape141 =  Shape();
Appearance& Appearance142 =  Appearance();
Material& Material143 =  Material();
Material143.setUSE(CString("_5"));
Appearance142.addChild(&Material143);

ImageTexture& ImageTexture144 =  ImageTexture();
ImageTexture144.setUSE(CString("_6"));
Appearance142.addChild(&ImageTexture144);

TextureTransform& TextureTransform145 =  TextureTransform();
TextureTransform145.setUSE(CString("_7"));
Appearance142.setTextureTransform(TextureTransform145);

Shape141.addChild(&Appearance142);

IndexedFaceSet& IndexedFaceSet146 =  IndexedFaceSet();
IndexedFaceSet146.setCreaseAngle(0.5);
IndexedFaceSet146.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet146.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate147 =  TextureCoordinate();
TextureCoordinate147.setPoint(new float[]{0,0.5,0,0.25,0.25,0.25,0.25,0.5}, 8);
IndexedFaceSet146.setTexCoord(&TextureCoordinate147);

Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{-100,100,0,-100,100,50,-50,100,50,-50,100,0}, 12);
IndexedFaceSet146.setCoord(&Coordinate148);

Shape141.setGeometry(&IndexedFaceSet146);

Transform140.addChild(&Shape141);

Transform139.addChild(&Transform140);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{0,-248.468,0});
Transform149.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Material& Material152 =  Material();
Material152.setUSE(CString("_5"));
Appearance151.addChild(&Material152);

ImageTexture& ImageTexture153 =  ImageTexture();
ImageTexture153.setUSE(CString("_6"));
Appearance151.addChild(&ImageTexture153);

TextureTransform& TextureTransform154 =  TextureTransform();
TextureTransform154.setUSE(CString("_7"));
Appearance151.setTextureTransform(TextureTransform154);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet155 =  IndexedFaceSet();
IndexedFaceSet155.setCreaseAngle(0.5);
IndexedFaceSet155.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet155.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate156 =  TextureCoordinate();
TextureCoordinate156.setPoint(new float[]{0.5,0.25,0.5,0.5,0.25,0.5,0.25,0.25}, 8);
IndexedFaceSet155.setTexCoord(&TextureCoordinate156);

Coordinate& Coordinate157 =  Coordinate();
Coordinate157.setPoint(new float[]{0,100,50,0,100,0,-50,100,0,-50,100,50}, 12);
IndexedFaceSet155.setCoord(&Coordinate157);

Shape150.setGeometry(&IndexedFaceSet155);

Transform149.addChild(&Shape150);

Transform139.addChild(&Transform149);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{0,-248.468,0});
Transform158.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape159 =  Shape();
Appearance& Appearance160 =  Appearance();
Material& Material161 =  Material();
Material161.setUSE(CString("_5"));
Appearance160.addChild(&Material161);

ImageTexture& ImageTexture162 =  ImageTexture();
ImageTexture162.setUSE(CString("_6"));
Appearance160.addChild(&ImageTexture162);

TextureTransform& TextureTransform163 =  TextureTransform();
TextureTransform163.setUSE(CString("_7"));
Appearance160.setTextureTransform(TextureTransform163);

Shape159.addChild(&Appearance160);

IndexedFaceSet& IndexedFaceSet164 =  IndexedFaceSet();
IndexedFaceSet164.setCreaseAngle(0.5);
IndexedFaceSet164.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet164.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate165 =  TextureCoordinate();
TextureCoordinate165.setPoint(new float[]{0.25,0,0.5,0,0.5,0.25,0.25,0.25}, 8);
IndexedFaceSet164.setTexCoord(&TextureCoordinate165);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{-50,100,100,0,100,100,0,100,50,-50,100,50}, 12);
IndexedFaceSet164.setCoord(&Coordinate166);

Shape159.setGeometry(&IndexedFaceSet164);

Transform158.addChild(&Shape159);

Transform139.addChild(&Transform158);

Transform& Transform167 =  Transform();
Transform167.setTranslation(new float[]{0,-248.468,0});
Transform167.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape168 =  Shape();
Appearance& Appearance169 =  Appearance();
Material& Material170 =  Material();
Material170.setUSE(CString("_5"));
Appearance169.addChild(&Material170);

ImageTexture& ImageTexture171 =  ImageTexture();
ImageTexture171.setUSE(CString("_6"));
Appearance169.addChild(&ImageTexture171);

TextureTransform& TextureTransform172 =  TextureTransform();
TextureTransform172.setUSE(CString("_7"));
Appearance169.setTextureTransform(TextureTransform172);

Shape168.addChild(&Appearance169);

IndexedFaceSet& IndexedFaceSet173 =  IndexedFaceSet();
IndexedFaceSet173.setCreaseAngle(0.5);
IndexedFaceSet173.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet173.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate174 =  TextureCoordinate();
TextureCoordinate174.setPoint(new float[]{0,0.25,0,0,0.25,0,0.25,0.25}, 8);
IndexedFaceSet173.setTexCoord(&TextureCoordinate174);

Coordinate& Coordinate175 =  Coordinate();
Coordinate175.setPoint(new float[]{-100,100,50,-100,100,100,-50,100,100,-50,100,50}, 12);
IndexedFaceSet173.setCoord(&Coordinate175);

Shape168.setGeometry(&IndexedFaceSet173);

Transform167.addChild(&Shape168);

Transform139.addChild(&Transform167);

Transform122.addChild(&Transform139);

Transform121.addChild(&Transform122);

Transform& Transform176 =  Transform();
Transform176.setDEF(CString("nw"));
Transform& Transform177 =  Transform();
Transform177.setDEF(CString("himmel_3"));
Transform177.setTranslation(new float[]{0.00187206,960.105,-0.0000152588});
Transform177.setRotation(new float[]{0,1,0,1.5708});
Transform177.setScale(new float[]{114.992,114.994,114.992});
Shape& Shape178 =  Shape();
Appearance& Appearance179 =  Appearance();
ImageTexture& ImageTexture180 =  ImageTexture();
ImageTexture180.setUSE(CString("_1"));
Appearance179.addChild(&ImageTexture180);

Shape178.addChild(&Appearance179);

IndexedFaceSet& IndexedFaceSet181 =  IndexedFaceSet();
IndexedFaceSet181.setCcw(False);
IndexedFaceSet181.setCreaseAngle(0.5);
IndexedFaceSet181.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,4,6,-1,4,7,6,-1,5,6,8,-1,8,6,9,-1,8,9,10,-1,10,9,11,-1,11,12,13,-1,10,11,14,-1,14,11,13,-1,14,13,15,-1,6,7,16,-1,7,17,16,-1,6,16,9,-1,9,16,18,-1,9,18,11,-1,11,18,12,-1,18,19,12,-1,16,17,20,-1,17,1,20,-1,16,20,18,-1,20,1,0,-1,18,20,19,-1,20,0,19,-1}, 100);
IndexedFaceSet181.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,4,6,-1,4,7,6,-1,5,6,8,-1,8,6,9,-1,8,9,10,-1,10,9,11,-1,11,12,13,-1,10,11,14,-1,14,11,13,-1,14,13,15,-1,6,7,16,-1,7,17,16,-1,6,16,9,-1,9,16,18,-1,9,18,11,-1,11,18,12,-1,18,19,12,-1,16,17,20,-1,17,1,20,-1,16,20,18,-1,20,1,0,-1,18,20,19,-1,20,0,19,-1}, 100);
TextureCoordinate& TextureCoordinate182 =  TextureCoordinate();
TextureCoordinate182.setPoint(new float[]{0.621268,0.506944,0.5,0.629897,0.5,0.506944,0.500002,1.01389,0.500002,0.998753,0.62127,0.998752,0.650757,0.965492,0.500001,0.928748,0.777352,0.928747,0.833335,0.844906,0.916026,0.788145,0.952268,0.659792,0.916025,0.506943,0.985071,0.506943,0.985072,0.629895,1,0.506943,0.666668,0.844907,0.500001,0.788147,0.833334,0.675925,0.77735,0.506943,0.650756,0.659793}, 42);
IndexedFaceSet181.setTexCoord(&TextureCoordinate182);

Coordinate& Coordinate183 =  Coordinate();
Coordinate183.setPoint(new float[]{1.06856,-6.27789,0.00000394884,0.00000394884,-6.27789,-1.06856,0,-6.14634,0,0.0000162815,-10.552,-4.40577,0.0000157954,-9.4835,-4.27423,1.06857,-10.552,-4.27422,1.32841,-9.22367,-3.98517,0.000013547,-8.1082,-3.66583,2.4439,-10.552,-3.66582,2.93719,-9.08347,-2.93717,3.66583,-10.552,-2.44387,3.98518,-9.22367,-1.32838,3.66583,-8.1082,0.000013547,4.27423,-9.4835,0.0000157954,4.27423,-10.552,-1.06854,4.40577,-10.552,0.0000162815,1.4686,-7.61491,-2.93718,0.00000903134,-6.88628,-2.44388,2.93719,-7.61491,-1.46858,2.44388,-6.88628,0.00000903134,1.3284,-6.56694,-1.32839}, 63);
IndexedFaceSet181.setCoord(&Coordinate183);

Shape178.setGeometry(&IndexedFaceSet181);

Transform177.addChild(&Shape178);

Transform176.addChild(&Transform177);

Transform& Transform184 =  Transform();
Transform184.setDEF(CString("vulkan_2"));
Transform184.setTranslation(new float[]{0,26.2066,-0.162065});
Transform184.setRotation(new float[]{0,-1,0,1.5708});
Transform184.setScale(new float[]{2.5,1.10441,2.5});
Shape& Shape185 =  Shape();
Appearance& Appearance186 =  Appearance();
Material& Material187 =  Material();
Material187.setUSE(CString("_2"));
Appearance186.addChild(&Material187);

ImageTexture& ImageTexture188 =  ImageTexture();
ImageTexture188.setUSE(CString("_3"));
Appearance186.addChild(&ImageTexture188);

TextureTransform& TextureTransform189 =  TextureTransform();
TextureTransform189.setUSE(CString("_4"));
Appearance186.setTextureTransform(TextureTransform189);

Shape185.addChild(&Appearance186);

IndexedFaceSet& IndexedFaceSet190 =  IndexedFaceSet();
IndexedFaceSet190.setCcw(False);
IndexedFaceSet190.setCreaseAngle(0.5);
IndexedFaceSet190.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,10,0,3,-1,10,3,5,-1,10,5,7,-1,10,7,9,-1}, 36);
IndexedFaceSet190.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,10,0,3,-1,10,3,5,-1,10,5,7,-1,10,7,9,-1}, 36);
TextureCoordinate& TextureCoordinate191 =  TextureCoordinate();
TextureCoordinate191.setPoint(new float[]{0.249106,0.521622,0.249106,0,0.153777,0.083204,0.199269,0.56512,0.0729614,0.320151,0.15702,0.688993,0.018962,0.674766,0.128789,0.874382,0,1.09306,0.118876,1.09306,0.24253,1.09112}, 22);
IndexedFaceSet190.setTexCoord(&TextureCoordinate191);

Coordinate& Coordinate192 =  Coordinate();
Coordinate192.setPoint(new float[]{0.00000572205,-100,52.2789,0.0000150996,100,100,-38.2683,100,92.388,-20.0063,-100,48.2995,-70.7107,100,70.7107,-36.9668,-100,36.9668,-92.388,100,38.2684,-48.2995,-100,20.0063,-100,100,-0.00000119249,-52.2789,-100,0,-2.63974,-268.489,0.17755}, 33);
IndexedFaceSet190.setCoord(&Coordinate192);

Shape185.setGeometry(&IndexedFaceSet190);

Transform184.addChild(&Shape185);

Transform176.addChild(&Transform184);

Transform& Transform193 =  Transform();
Transform& Transform194 =  Transform();
Transform194.setTranslation(new float[]{0,-248.468,0});
Transform194.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape195 =  Shape();
Appearance& Appearance196 =  Appearance();
Material& Material197 =  Material();
Material197.setUSE(CString("_5"));
Appearance196.addChild(&Material197);

ImageTexture& ImageTexture198 =  ImageTexture();
ImageTexture198.setUSE(CString("_6"));
Appearance196.addChild(&ImageTexture198);

TextureTransform& TextureTransform199 =  TextureTransform();
TextureTransform199.setUSE(CString("_7"));
Appearance196.setTextureTransform(TextureTransform199);

Shape195.addChild(&Appearance196);

IndexedFaceSet& IndexedFaceSet200 =  IndexedFaceSet();
IndexedFaceSet200.setCreaseAngle(0.5);
IndexedFaceSet200.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet200.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate201 =  TextureCoordinate();
TextureCoordinate201.setPoint(new float[]{0,1,0,0.75,0.25,0.75,0.25,1}, 8);
IndexedFaceSet200.setTexCoord(&TextureCoordinate201);

Coordinate& Coordinate202 =  Coordinate();
Coordinate202.setPoint(new float[]{-100,100,-100,-100,100,-50,-50,100,-50,-50,100,-100}, 12);
IndexedFaceSet200.setCoord(&Coordinate202);

Shape195.setGeometry(&IndexedFaceSet200);

Transform194.addChild(&Shape195);

Transform193.addChild(&Transform194);

Transform& Transform203 =  Transform();
Transform203.setTranslation(new float[]{0,-248.468,0});
Transform203.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
Material& Material206 =  Material();
Material206.setUSE(CString("_5"));
Appearance205.addChild(&Material206);

ImageTexture& ImageTexture207 =  ImageTexture();
ImageTexture207.setUSE(CString("_6"));
Appearance205.addChild(&ImageTexture207);

TextureTransform& TextureTransform208 =  TextureTransform();
TextureTransform208.setUSE(CString("_7"));
Appearance205.setTextureTransform(TextureTransform208);

Shape204.addChild(&Appearance205);

IndexedFaceSet& IndexedFaceSet209 =  IndexedFaceSet();
IndexedFaceSet209.setCreaseAngle(0.5);
IndexedFaceSet209.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet209.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate210 =  TextureCoordinate();
TextureCoordinate210.setPoint(new float[]{0.5,0.75,0.5,1,0.25,1,0.25,0.75}, 8);
IndexedFaceSet209.setTexCoord(&TextureCoordinate210);

Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setPoint(new float[]{0,100,-50,0,100,-100,-50,100,-100,-50,100,-50}, 12);
IndexedFaceSet209.setCoord(&Coordinate211);

Shape204.setGeometry(&IndexedFaceSet209);

Transform203.addChild(&Shape204);

Transform193.addChild(&Transform203);

Transform& Transform212 =  Transform();
Transform212.setTranslation(new float[]{0,-248.468,0});
Transform212.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape213 =  Shape();
Appearance& Appearance214 =  Appearance();
Material& Material215 =  Material();
Material215.setUSE(CString("_5"));
Appearance214.addChild(&Material215);

ImageTexture& ImageTexture216 =  ImageTexture();
ImageTexture216.setUSE(CString("_6"));
Appearance214.addChild(&ImageTexture216);

TextureTransform& TextureTransform217 =  TextureTransform();
TextureTransform217.setUSE(CString("_7"));
Appearance214.setTextureTransform(TextureTransform217);

Shape213.addChild(&Appearance214);

IndexedFaceSet& IndexedFaceSet218 =  IndexedFaceSet();
IndexedFaceSet218.setCreaseAngle(0.5);
IndexedFaceSet218.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet218.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate219 =  TextureCoordinate();
TextureCoordinate219.setPoint(new float[]{0.25,0.5,0.5,0.5,0.5,0.75,0.25,0.75}, 8);
IndexedFaceSet218.setTexCoord(&TextureCoordinate219);

Coordinate& Coordinate220 =  Coordinate();
Coordinate220.setPoint(new float[]{-50,100,0,0,100,0,0,100,-50,-50,100,-50}, 12);
IndexedFaceSet218.setCoord(&Coordinate220);

Shape213.setGeometry(&IndexedFaceSet218);

Transform212.addChild(&Shape213);

Transform193.addChild(&Transform212);

Transform& Transform221 =  Transform();
Transform221.setTranslation(new float[]{0,-248.468,0});
Transform221.setScale(new float[]{2.51656,2.51655,2.51656});
Shape& Shape222 =  Shape();
Appearance& Appearance223 =  Appearance();
Material& Material224 =  Material();
Material224.setUSE(CString("_5"));
Appearance223.addChild(&Material224);

ImageTexture& ImageTexture225 =  ImageTexture();
ImageTexture225.setUSE(CString("_6"));
Appearance223.addChild(&ImageTexture225);

TextureTransform& TextureTransform226 =  TextureTransform();
TextureTransform226.setUSE(CString("_7"));
Appearance223.setTextureTransform(TextureTransform226);

Shape222.addChild(&Appearance223);

IndexedFaceSet& IndexedFaceSet227 =  IndexedFaceSet();
IndexedFaceSet227.setCreaseAngle(0.5);
IndexedFaceSet227.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet227.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate228 =  TextureCoordinate();
TextureCoordinate228.setPoint(new float[]{0,0.75,0,0.5,0.25,0.5,0.25,0.75}, 8);
IndexedFaceSet227.setTexCoord(&TextureCoordinate228);

Coordinate& Coordinate229 =  Coordinate();
Coordinate229.setPoint(new float[]{-100,100,-50,-100,100,0,-50,100,0,-50,100,-50}, 12);
IndexedFaceSet227.setCoord(&Coordinate229);

Shape222.setGeometry(&IndexedFaceSet227);

Transform221.addChild(&Shape222);

Transform193.addChild(&Transform221);

Transform176.addChild(&Transform193);

Transform121.addChild(&Transform176);

Transform11.addChild(&Transform121);

Scene8.addChild(&Transform11);

Transform& Transform230 =  Transform();
Transform230.setDEF(CString("wasser"));
Scene8.addChild(&Transform230);

Transform& Transform231 =  Transform();
Transform231.setDEF(CString("translation"));
Transform231.setTranslation(new float[]{-178.007,3.09955,-99.6622});
Transform& Transform232 =  Transform();
Transform232.setDEF(CString("models"));
Transform& Transform233 =  Transform();
Transform233.setDEF(CString("north"));
Transform& Transform234 =  Transform();
Transform234.setDEF(CString("tikis"));
Transform& Transform235 =  Transform();
Transform235.setTranslation(new float[]{75.003,-0.000440893,-16.1442});
Transform235.setRotation(new float[]{0,1,0,1.38236});
Transform235.setScale(new float[]{16.352,18.5798,16.352});
Inline& Inline236 =  Inline();
Inline236.setUrl(new CString[]{CString("tikimod1.x3d")}, 1);
Inline236.setBboxSize(new float[]{2.23577,7.27344,2.23095});
Inline236.setBboxCenter(new float[]{-0.108955,3.63672,0.173414});
Transform235.addChild(&Inline236);

Transform234.addChild(&Transform235);

Transform& Transform237 =  Transform();
Transform237.setTranslation(new float[]{169.568,-0.000442243,-61.7538});
Transform237.setRotation(new float[]{0,1,0,0.77748});
Transform237.setScale(new float[]{21.6958,21.6958,21.6958});
Inline& Inline238 =  Inline();
Inline238.setUrl(new CString[]{CString("tikimod1.x3d")}, 1);
Inline238.setBboxSize(new float[]{2.23577,7.27344,2.23095});
Inline238.setBboxCenter(new float[]{-0.108955,3.63672,0.173414});
Transform237.addChild(&Inline238);

Transform234.addChild(&Transform237);

Transform& Transform239 =  Transform();
Transform239.setTranslation(new float[]{268.499,-0.000426165,-15.3742});
Transform239.setRotation(new float[]{0,1,0,0.139424});
Transform239.setScale(new float[]{21.98,14.6648,21.98});
Inline& Inline240 =  Inline();
Inline240.setUrl(new CString[]{CString("tikimod1.x3d")}, 1);
Inline240.setBboxSize(new float[]{2.23577,7.27344,2.23095});
Inline240.setBboxCenter(new float[]{-0.108955,3.63672,0.173414});
Transform239.addChild(&Inline240);

Transform234.addChild(&Transform239);

Transform233.addChild(&Transform234);

Transform232.addChild(&Transform233);

Transform& Transform241 =  Transform();
Transform241.setDEF(CString("west"));
Transform& Transform242 =  Transform();
Transform242.setDEF(CString("b1"));
Transform& Transform243 =  Transform();
Transform243.setDEF(CString("b1_walls"));
Transform& Transform244 =  Transform();
Transform244.setDEF(CString("b1_grasrand"));
Transform244.setTranslation(new float[]{39.5735,10.0005,214.03});
Transform244.setRotation(new float[]{-0.0000020698,1,-6.81641e-8,2.30307});
Transform244.setScale(new float[]{3.40854,0.999999,1});
Shape& Shape245 =  Shape();
Appearance& Appearance246 =  Appearance();
Material& Material247 =  Material();
Material247.setAmbientIntensity(0.433333);
Material247.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance246.addChild(&Material247);

ImageTexture& ImageTexture248 =  ImageTexture();
ImageTexture248.setDEF(CString("_8"));
ImageTexture248.setUrl(new CString[]{CString("grasrand.png")}, 1);
ImageTexture248.setRepeatT(False);
Appearance246.addChild(&ImageTexture248);

Shape245.addChild(&Appearance246);

IndexedFaceSet& IndexedFaceSet249 =  IndexedFaceSet();
IndexedFaceSet249.setCreaseAngle(3.14159);
IndexedFaceSet249.setTexCoordIndex(new int32_t[]{13,12,6,-1,13,6,16,15,-1,16,5,15,-1,5,11,15,-1,14,10,3,18,-1,17,3,2,20,-1,19,2,4,22,-1,9,23,21,4,-1,7,24,1,-1,8,0,25,-1,7,8,24,-1,8,25,24,-1}, 53);
IndexedFaceSet249.setCoordIndex(new int32_t[]{11,2,8,-1,11,8,13,12,-1,13,7,12,-1,7,1,12,-1,12,1,5,14,-1,14,5,4,15,-1,15,4,6,16,-1,0,17,16,6,-1,9,17,0,-1,10,3,18,-1,9,10,17,-1,10,18,17,-1}, 53);
TextureCoordinate& TextureCoordinate250 =  TextureCoordinate();
TextureCoordinate250.setPoint(new float[]{-0.186481,0.873406,3.47816,0.892441,4.44112,0.906017,6.11718,0.906017,2.07396,0.903331,8.51384,0.989967,8.86061,0.900193,1.81709,0.933255,1.06575,0.843481,-0.175543,0.898233,8.05615,0.97683,8.10927,0.989967,9.2716,0.989967,9.27179,-0.0094738,8.05943,-0.481345,8.11255,-0.479938,8.68722,0.94508,6.11794,-0.646267,6.11794,-0.646267,4.43984,-0.687973,4.43984,-0.687973,2.07438,-0.720455,2.07438,-0.720455,-0.175543,-0.653567,3.4806,-0.654913,-0.182497,-0.926554}, 52);
IndexedFaceSet249.setTexCoord(&TextureCoordinate250);

Coordinate& Coordinate251 =  Coordinate();
Coordinate251.setPoint(new float[]{-7.15632,10,27.1512,10.1606,10,12.0087,10,10.873,5.78127,-10.2742,10.873,15.0666,1.54746,10,11.1533,5.53831,10,10.4374,-3.15923,10,13.8711,10.0755,10,9.8902,10.0874,10,7.92933,-8.39885,10,22.3353,-8.98339,10,20.0698,10.0691,9.31879,5.80476,10.2129,7.83356,12.2115,10.0815,10,8.90977,5.60322,7.67737,10.689,1.59888,7.60512,11.3526,-3.17456,7.51538,14.1292,-7.23676,7.66602,27.8499,-10.4653,8.01866,15.7014}, 57);
IndexedFaceSet249.setCoord(&Coordinate251);

Shape245.setGeometry(&IndexedFaceSet249);

Transform244.addChild(&Shape245);

Transform243.addChild(&Transform244);

Transform& Transform252 =  Transform();
Transform252.setDEF(CString("b1_gras"));
Transform252.setTranslation(new float[]{39.5735,10.0005,214.03});
Transform252.setRotation(new float[]{-0.0000020698,1,-6.81639e-8,2.30307});
Transform252.setScale(new float[]{3.40854,0.999999,1});
Shape& Shape253 =  Shape();
Appearance& Appearance254 =  Appearance();
Material& Material255 =  Material();
Material255.setAmbientIntensity(0.358095);
Material255.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance254.addChild(&Material255);

ImageTexture& ImageTexture256 =  ImageTexture();
ImageTexture256.setDEF(CString("_9"));
ImageTexture256.setUrl(new CString[]{CString("grass.png")}, 1);
Appearance254.addChild(&ImageTexture256);

TextureTransform& TextureTransform257 =  TextureTransform();
TextureTransform257.setScale(new float[]{3,3});
Appearance254.setTextureTransform(TextureTransform257);

Shape253.addChild(&Appearance254);

IndexedFaceSet& IndexedFaceSet258 =  IndexedFaceSet();
IndexedFaceSet258.setCreaseAngle(0.5);
IndexedFaceSet258.setColorIndex(new int[]{6,7,2,2,-1,2,12,11,3,-1,3,11,6,2,-1,2,0,8,2,-1,11,12,2,8,-1,9,7,6,10,-1,2,2,9,10,-1,6,11,8,10,-1,10,8,0,2,-1,2,2,13,13,-1,13,14,13,-1,2,13,13,-1,13,4,5,13,-1,15,13,13,5,-1,13,2,13,-1,15,13,13,-1,13,3,2,13,-1,15,1,13,13,-1,13,2,3,13,-1}, 91);
IndexedFaceSet258.setTexCoordIndex(new int32_t[]{8,9,5,4,-1,2,10,11,3,-1,3,11,8,4,-1,19,20,21,18,-1,11,10,12,13,-1,15,9,8,14,-1,16,17,15,14,-1,8,11,13,14,-1,23,21,20,22,-1,4,5,24,25,-1,24,6,25,-1,4,26,28,-1,26,6,7,28,-1,0,30,27,7,-1,30,4,27,-1,0,32,29,-1,32,3,4,29,-1,0,1,33,31,-1,33,2,3,31,-1}, 91);
IndexedFaceSet258.setCoordIndex(new int32_t[]{8,9,5,4,-1,2,10,11,3,-1,3,11,8,4,-1,16,17,18,12,-1,11,10,12,18,-1,13,9,8,19,-1,14,15,13,19,-1,8,11,18,19,-1,19,18,17,14,-1,4,5,20,21,-1,20,6,21,-1,4,21,22,-1,21,6,7,22,-1,0,23,22,7,-1,23,4,22,-1,0,24,23,-1,24,3,4,23,-1,0,1,25,24,-1,25,2,3,24,-1}, 91);
CColor& Color259 =  CColor();
Color259.setColor(new float[]{0.946524,0.70454,0.0610661,0.00619225,0.26738,0,0.0131276,0.566845,0,0.946524,0.524385,0.0483908,0.00544918,0.235294,0,0.316315,0.652406,0,0.0049538,0.213904,0,0.00148614,0.0641711,0,0.791444,0.404844,0.0487535,0.00470611,0.203209,0,0.230754,0.475936,0,0.764706,0.569205,0.0493359,0.0122607,0.529412,0,0.00371535,0.160428,0,0.00954527,0.412162,0,0.0154806,0.668449,0}, 48);
IndexedFaceSet258.setColor(&Color259);

TextureCoordinate& TextureCoordinate260 =  TextureCoordinate();
TextureCoordinate260.setPoint(new float[]{0.398899,0.261941,0.663188,0,1.51338,0.722322,1.38682,0.785236,1.32298,0.864508,1.21675,0.961277,0,0.657296,0.274567,0.385168,2.33828,1.08689,2.25028,1.19514,2.51451,0.870144,2.43017,0.973874,3.36337,0.909082,3.32821,1.02154,3.2966,1.12265,3.26094,1.23671,4.33097,1.0455,4.31238,1.16233,3.36337,0.909082,4.34654,0.823616,4.32845,0.938845,3.32821,1.02154,4.33097,1.0455,3.2966,1.12265,0.676897,0.826405,0.705751,0.767834,0.705751,0.767834,0.793315,0.622342,0.793315,0.622342,0.850114,0.556165,0.850114,0.556165,0.88514,0.5195,0.88514,0.5195,1.06615,0.342353}, 68);
IndexedFaceSet258.setTexCoord(&TextureCoordinate260);

Coordinate& Coordinate261 =  Coordinate();
Coordinate261.setPoint(new float[]{-8.39885,10,22.3353,-7.15632,10,27.1512,-3.15923,10,13.8711,-3.75422,10,12.7144,-4.05437,10,11.2569,-4.5538,10.873,9.47777,-10.2742,10.873,15.0666,-8.98339,10,20.0698,0.718962,10,7.16826,0.305222,10.873,5.1782,1.54746,10,11.1533,1.15097,10,9.24618,5.53831,10,10.4374,5.05676,10.873,4.41385,10.0874,10,7.92933,10,10.873,5.78127,10.1606,10,12.0087,10.0755,10,9.8902,5.37302,10,8.36984,5.22441,10,6.51093,-7.09185,10.873,11.9574,-6.9562,10.4073,13.0343,-6.54454,10,15.7092,-6.27751,10,16.9259,-6.11283,10,17.6,-5.26185,10,20.8569}, 78);
IndexedFaceSet258.setCoord(&Coordinate261);

Shape253.setGeometry(&IndexedFaceSet258);

Transform252.addChild(&Shape253);

Transform243.addChild(&Transform252);

Transform& Transform262 =  Transform();
Transform262.setDEF(CString("b1_bottom"));
Transform262.setTranslation(new float[]{39.6724,10.007,213.955});
Transform262.setRotation(new float[]{-0.0000020698,1,-6.81641e-8,2.30307});
Transform262.setScale(new float[]{3.39719,0.985035,0.985037});
Shape& Shape263 =  Shape();
Appearance& Appearance264 =  Appearance();
Material& Material265 =  Material();
Material265.setAmbientIntensity(0.433333);
Material265.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance264.addChild(&Material265);

ImageTexture& ImageTexture266 =  ImageTexture();
ImageTexture266.setDEF(CString("_10"));
ImageTexture266.setUrl(new CString[]{CString("fels1.png")}, 1);
Appearance264.addChild(&ImageTexture266);

Shape263.addChild(&Appearance264);

IndexedFaceSet& IndexedFaceSet267 =  IndexedFaceSet();
IndexedFaceSet267.setCreaseAngle(3.14159);
IndexedFaceSet267.setColorIndex(new int[]{0,3,1,0,-1,3,5,0,1,-1,0,0,6,1,-1,6,0,0,1,-1,0,0,4,6,-1,4,0,0,6,-1,0,2,6,4,-1,6,0,0,4,-1,7,5,3,-1,0,3,7,-1,3,0,7,-1,0,7,0,-1,7,3,0,-1,6,2,0,-1,6,0,0,-1,0,6,0,-1,0,0,6,-1,0,0,6,-1}, 80);
IndexedFaceSet267.setTexCoordIndex(new int32_t[]{14,23,24,9,-1,23,15,8,24,-1,8,4,27,25,-1,27,5,9,25,-1,4,7,28,26,-1,28,6,5,26,-1,7,16,31,29,-1,31,17,6,29,-1,1,3,22,-1,12,13,1,-1,13,0,1,-1,12,1,2,-1,1,22,2,-1,30,19,20,-1,30,20,21,-1,11,30,21,-1,11,10,30,-1,10,18,30,-1}, 80);
IndexedFaceSet267.setCoordIndex(new int32_t[]{0,18,19,13,-1,18,1,12,19,-1,12,8,20,19,-1,20,9,13,19,-1,8,11,21,20,-1,21,10,9,20,-1,11,3,22,21,-1,22,2,10,21,-1,7,1,18,-1,16,17,7,-1,17,6,7,-1,16,7,0,-1,7,18,0,-1,22,3,5,-1,22,5,4,-1,15,22,4,-1,15,14,22,-1,14,2,22,-1}, 80);
CColor& Color268 =  CColor();
Color268.setColor(new float[]{0.957447,0.642839,0.0227095,0.128442,0.336898,0,0.388912,0.802139,0,0.773545,0.802139,0.20616,0.74776,0.775401,0.199288,0.775401,0.697777,0.160037,0.363636,0.243857,0,0.213904,0.197594,0.00814011}, 24);
IndexedFaceSet267.setColor(&Color268);

TextureCoordinate& TextureCoordinate269 =  TextureCoordinate();
TextureCoordinate269.setPoint(new float[]{0.0180547,1.25277,0.0181567,0.322064,1.01534,1.23969,1.02108,0.318701,1.27763,0.318701,1.27763,1.2327,1.74007,1.2327,1.74007,0.318701,0.630607,0.322064,0.630607,1.2457,2.39736,1.23361,2.49652,1.23361,0.562737,1.25277,0.359515,1.25277,0.0131664,1.2401,0.0131664,0.316458,2.27567,0.318701,2.27567,1.2327,2.29024,1.23361,2.29024,0.312077,2.60513,0.312077,2.60513,1.27383,1.01841,0.747473,0.0131664,0.746462,0.630607,0.827804,0.630607,0.827804,1.27763,0.660038,1.27763,0.660038,1.74007,0.792818,1.74007,0.792818,2.29024,0.720204,2.27567,0.72349}, 64);
IndexedFaceSet267.setTexCoord(&TextureCoordinate269);

Coordinate& Coordinate270 =  Coordinate();
Coordinate270.setPoint(new float[]{-7.15632,10,27.1512,-7.22276,-10,36.9523,10.1606,10,12.0087,11.4915,-10,17.1672,10,10.873,5.78127,10.9279,-10,6.09672,-10.2742,10.873,15.0666,-11.6716,-10,19.7092,2.87838,-10,16.3118,1.54746,10,11.1533,5.53831,10,10.4374,6.86922,-10,15.5959,-1.82831,-10,19.0295,-3.15923,10,13.8711,10.0755,10,9.8902,10.0874,10,7.92933,-8.39885,10,22.3353,-8.98339,10,20.0698,-6.88731,-0.68891,28.1939,-3.21519,0.929817,14.8133,1.81647,-2.53088,12.1959,5.80732,0.374598,11.48,10.4296,-1.14244,13.0514}, 69);
IndexedFaceSet267.setCoord(&Coordinate270);

Shape263.setGeometry(&IndexedFaceSet267);

Transform262.addChild(&Shape263);

Transform243.addChild(&Transform262);

Transform& Transform271 =  Transform();
Transform271.setDEF(CString("b1_top"));
Transform271.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform271.setScale(new float[]{0.99823,0.99823,0.998232});
Transform271.setScaleOrientation(new float[]{5.44647e-8,-2.28843e-9,1,4.71239});
Shape& Shape272 =  Shape();
Appearance& Appearance273 =  Appearance();
Material& Material274 =  Material();
Material274.setDEF(CString("_11"));
Material274.setAmbientIntensity(0.433333);
Material274.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance273.addChild(&Material274);

ImageTexture& ImageTexture275 =  ImageTexture();
ImageTexture275.setUSE(CString("_10"));
Appearance273.addChild(&ImageTexture275);

Shape272.addChild(&Appearance273);

IndexedFaceSet& IndexedFaceSet276 =  IndexedFaceSet();
IndexedFaceSet276.setCreaseAngle(3.14159);
IndexedFaceSet276.setColorIndex(new int[]{0,2,3,0,-1,1,2,0,-1,4,5,6,-1,7,8,6,-1,5,7,6,-1,9,8,7,0,-1,7,5,0,0,-1,8,10,6,-1,8,1,10,-1,0,6,10,-1,1,0,10,-1,0,0,0,-1,0,1,0,-1,1,12,17,11,-1,0,11,13,6,-1,0,1,11,-1,16,14,4,6,13,-1,4,4,4,4,-1,4,4,13,24,-1,4,4,23,23,-1,4,4,24,17,-1,12,18,17,-1,12,14,18,-1,14,15,18,-1,18,15,20,-1,18,22,17,-1,18,20,22,-1,4,19,17,-1,4,4,21,19,-1,4,0,21,-1}, 132);
IndexedFaceSet276.setTexCoordIndex(new int32_t[]{2,4,5,3,-1,6,4,7,-1,8,9,10,-1,12,13,10,-1,9,12,10,-1,14,13,15,16,-1,15,9,17,16,-1,13,18,10,-1,13,6,18,-1,7,11,19,-1,6,7,19,-1,0,2,3,-1,0,1,2,-1,1,22,28,20,-1,7,21,24,11,-1,7,1,21,-1,27,25,8,11,23,-1,26,23,20,29,-1,26,23,23,26,-1,20,23,23,20,-1,29,20,20,29,-1,22,30,29,-1,22,25,31,-1,25,26,31,-1,30,26,33,-1,30,35,29,-1,30,33,35,-1,29,32,29,-1,29,2,34,32,-1,2,2,34,-1}, 132);
IndexedFaceSet276.setCoordIndex(new int32_t[]{2,4,5,3,-1,6,4,2,-1,7,8,9,-1,10,11,9,-1,8,10,9,-1,12,11,10,13,-1,10,8,14,13,-1,11,15,9,-1,11,6,15,-1,2,9,15,-1,6,2,15,-1,0,2,3,-1,0,1,2,-1,1,17,21,16,-1,2,16,18,9,-1,2,1,16,-1,20,19,7,9,18,-1,23,22,24,25,-1,22,23,20,18,-1,24,22,18,16,-1,25,24,16,21,-1,17,26,21,-1,17,19,26,-1,19,20,26,-1,26,20,27,-1,26,28,21,-1,26,27,28,-1,23,27,20,-1,23,25,28,27,-1,25,21,28,-1}, 132);
CColor& Color277 =  CColor();
Color277.setColor(new float[]{0.957447,0.642839,0.0227095,0.663102,0.445213,0.015728,0.636364,0.570859,0.235544,0.379679,0.25492,0.00900552,0,0,0,0.620321,0.416489,0.0147133,0.470588,0.212791,0.00214725,0.235294,0.157979,0.00558089,0.323812,0.470588,0.0313431,0.545455,0.366223,0.0129375,0.537273,0.2933,0.00685148,0.531588,0.286436,0.00645042,0.268362,0.18018,0.00636522,0.511796,0.262542,0.00505424,0.109788,0.0737125,0.00260403,0.318547,0.17177,0.00387641,0.318547,0.17177,0.00387641,0.42357,0.242833,0.00641546,0.302745,0.174418,0.00466004,0.651953,0.413948,0.0133858,0.363474,0.202169,0.00496257,0.784424,0.513202,0.0174288,0.389533,0.219802,0.00559258,0.187166,0.0989905,0,0.144385,0.0763641,0}, 75);
IndexedFaceSet276.setColor(&Color277);

TextureCoordinate& TextureCoordinate278 =  TextureCoordinate();
TextureCoordinate278.setPoint(new float[]{-0.0213852,0.274177,1.0865,0.274177,1.09615,0.627927,-0.0165679,0.450814,1.10992,1.13297,0.00203609,1.13297,2.05098,1.13297,1.09615,0.627927,2.02756,0.274177,2.9478,0.274177,2.03369,0.498978,2.03369,0.498979,2.96065,0.745379,2.97122,1.13297,3.92859,1.13297,2.96065,0.745379,3.91425,0.607143,3.90517,0.274177,2.03968,0.718587,2.03968,0.718587,1.73357,0.427749,1.73357,0.427749,1.64671,0.274177,1.83094,0.45086,1.83094,0.45086,1.87175,0.274177,1.85056,0.365927,1.85056,0.365927,1.69792,0.364729,1.69792,0.364729,1.78637,0.337038,1.78637,0.337038,1.4405,0.47732,1.78526,0.365414,1.29118,0.542628,1.74739,0.365117}, 72);
IndexedFaceSet276.setTexCoord(&TextureCoordinate278);

Coordinate& Coordinate279 =  Coordinate();
Coordinate279.setPoint(new float[]{57.983,10.8364,66.2377,41.1081,10.7547,55.7602,41.5911,19.2577,58.3775,58.4987,15.3701,69.0324,40.7409,31.779,53.9463,57.8576,31.7791,64.7365,24.9602,32.285,45.1943,26.8974,10.7546,46.2994,15.5256,10.7545,34.7784,30.0467,19.3133,44.8287,16.0412,22.8487,37.5731,15.1584,31.7788,32.9646,4.91467,31.7788,19.552,4.33657,18.7945,22.2477,5.28185,10.7545,21.3659,25.8347,20.671,46.73,33.5516,16.6014,48.2924,32.6486,10.7546,50.1282,32.4144,17.4813,47.1686,29.2502,10.7546,47.8658,30.8934,14.2477,47.5038,33.181,14.2021,49.0458,30.7719,16.3709,49.6819,30.1344,14.3142,50.1147,31.6737,16.3174,50.3046,31.3049,14.2909,50.9037,31.6705,13.3336,48.1905,32.6131,14.2513,47.2066,33.2008,14.2159,47.7917}, 87);
IndexedFaceSet276.setCoord(&Coordinate279);

Shape272.setGeometry(&IndexedFaceSet276);

Transform271.addChild(&Shape272);

Transform243.addChild(&Transform271);

Transform242.addChild(&Transform243);

Transform& Transform280 =  Transform();
Transform280.setDEF(CString("b1_deco"));
Transform& Transform281 =  Transform();
Transform281.setDEF(CString("b1_stonewall"));
Transform& Transform282 =  Transform();
Transform282.setTranslation(new float[]{65.7996,21.5188,221.147});
Transform282.setRotation(new float[]{-0.00000193039,1,-0.00000147407,4.41356});
Transform282.setScale(new float[]{8.54858,4.41498,0.798366});
Shape& Shape283 =  Shape();
Appearance& Appearance284 =  Appearance();
Material& Material285 =  Material();
Material285.setAmbientIntensity(0.505319);
Appearance284.addChild(&Material285);

ImageTexture& ImageTexture286 =  ImageTexture();
ImageTexture286.setDEF(CString("_12"));
ImageTexture286.setUrl(new CString[]{CString("steinhaufen1m.png")}, 1);
Appearance284.addChild(&ImageTexture286);

TextureTransform& TextureTransform287 =  TextureTransform();
TextureTransform287.setScale(new float[]{4.32034,1.74911});
Appearance284.setTextureTransform(TextureTransform287);

Shape283.addChild(&Appearance284);

IndexedFaceSet& IndexedFaceSet288 =  IndexedFaceSet();
IndexedFaceSet288.setCreaseAngle(3.14159);
IndexedFaceSet288.setTexCoordIndex(new int32_t[]{30,31,32,33,-1,26,27,28,29,-1,16,23,11,-1,16,22,23,-1,15,11,6,-1,15,16,11,-1,20,15,7,-1,15,6,7,-1,24,20,7,-1,24,25,20,-1,9,2,8,-1,9,3,2,-1,0,1,12,-1,1,10,12,-1,4,8,5,-1,4,9,8,-1,10,5,12,-1,10,4,5,-1,0,1,21,-1,1,19,21,-1,18,2,17,-1,18,3,2,-1,13,17,14,-1,13,18,17,-1,19,14,21,-1,19,13,14,-1}, 106);
IndexedFaceSet288.setCoordIndex(new int32_t[]{6,7,1,0,-1,2,3,5,4,-1,16,4,13,-1,16,2,4,-1,15,13,9,-1,15,16,13,-1,19,15,10,-1,15,9,10,-1,6,19,10,-1,6,0,19,-1,11,6,10,-1,11,7,6,-1,4,5,13,-1,5,12,13,-1,8,10,9,-1,8,11,10,-1,12,9,13,-1,12,8,9,-1,0,1,19,-1,1,18,19,-1,17,2,16,-1,17,3,2,-1,14,16,15,-1,14,17,16,-1,18,15,19,-1,18,14,15,-1}, 106);
TextureCoordinate& TextureCoordinate289 =  TextureCoordinate();
TextureCoordinate289.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,0.5,1,0.482259,0.80204,0.239841,0.798703,0.75,1,0.75,0,0.25,0,0.766306,0.80204,0.25,1,0.5,0,0.5,1,0.482259,0.609748,0.764393,0.609748,0.75,1,0.75,0,0.25,0,0.239841,0.60641,0.25,1,0.984571,0.60641,0.984571,0.798703,-0.00840165,0.798703,-0.00840165,0.60641,0.0233022,1.06167,0,0,0.0892171,0,0.0713023,0.949632,0.0988773,1.10633,0.12372,0,0,0,0.0323139,1.10633}, 68);
IndexedFaceSet288.setTexCoord(&TextureCoordinate289);

Coordinate& Coordinate290 =  Coordinate();
Coordinate290.setPoint(new float[]{-0.343948,0.343942,0.343925,-0.343948,-0.343942,0.67785,0.343948,0.343942,0.343925,0.343948,-0.343942,0.67785,0.343948,0.271348,-0.343925,0.343948,-0.343942,-0.600646,-0.343948,0.343942,-0.343925,-0.343948,-0.343942,-0.600646,0.00578679,-0.247399,-1.03823,0.00175127,0.38312,-0.793451,-0.171974,0.337429,-0.343925,-0.171974,-0.343942,-0.600646,0.172476,-0.329952,-0.86126,0.192742,0.349089,-0.355863,0.0015527,-0.318038,0.375874,-0.00248282,0.312481,0.030012,0.191416,0.312163,0.331988,0.171974,-0.343942,0.67785,-0.171974,-0.343942,0.67785,-0.171974,0.370476,0.343925}, 60);
IndexedFaceSet288.setCoord(&Coordinate290);

Shape283.setGeometry(&IndexedFaceSet288);

Transform282.addChild(&Shape283);

Transform281.addChild(&Transform282);

Transform& Transform291 =  Transform();
Transform291.setTranslation(new float[]{67.2607,21.4911,214.139});
Transform291.setRotation(new float[]{-0.00000170401,1,-8.21211e-7,3.1354});
Transform291.setScale(new float[]{0.355969,2.13323,0.900791});
Shape& Shape292 =  Shape();
Appearance& Appearance293 =  Appearance();
Material& Material294 =  Material();
Material294.setAmbientIntensity(0.505319);
Appearance293.addChild(&Material294);

ImageTexture& ImageTexture295 =  ImageTexture();
ImageTexture295.setUSE(CString("_12"));
Appearance293.addChild(&ImageTexture295);

TextureTransform& TextureTransform296 =  TextureTransform();
TextureTransform296.setScale(new float[]{1.00693,1.95335});
Appearance293.setTextureTransform(TextureTransform296);

Shape292.addChild(&Appearance293);

IndexedFaceSet& IndexedFaceSet297 =  IndexedFaceSet();
IndexedFaceSet297.setCreaseAngle(3.14159);
IndexedFaceSet297.setTexCoordIndex(new int32_t[]{13,3,4,-1,6,13,4,-1,6,1,13,-1,14,15,17,-1,15,16,17,-1,0,6,2,-1,6,4,2,-1,5,3,9,-1,5,1,3,-1,0,9,2,-1,0,5,9,-1,11,1,7,-1,1,3,7,-1,0,10,2,-1,0,8,10,-1,0,11,2,-1,11,7,2,-1,8,3,10,-1,8,1,12,3,-1}, 77);
IndexedFaceSet297.setCoordIndex(new int32_t[]{13,3,8,-1,9,13,8,-1,9,1,13,-1,6,0,4,-1,0,2,4,-1,0,9,2,-1,9,8,2,-1,8,5,10,-1,8,3,5,-1,2,10,4,-1,2,8,10,-1,11,7,9,-1,7,1,9,-1,4,11,6,-1,4,10,11,-1,6,11,0,-1,11,9,0,-1,10,7,11,-1,10,5,12,7,-1}, 77);
TextureCoordinate& TextureCoordinate298 =  TextureCoordinate();
TextureCoordinate298.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,1,0.5,0,0.5,0.5,0,0.5,0,0.0103354,0.330009,0,0,0.663577,0,0.669086,0.330009}, 36);
IndexedFaceSet297.setTexCoord(&TextureCoordinate298);

Coordinate& Coordinate299 =  Coordinate();
Coordinate299.setPoint(new float[]{-0.720676,0.586764,0.698715,-1.7129,-0.69873,0.698715,0.687065,0.639059,0.698715,1.51602,-0.69873,0.698715,0.69875,0.69873,-0.698715,1.51602,-0.69873,-0.698715,-0.69875,0.69873,-0.698715,-1.7129,-0.69873,-0.698715,0.69875,0,0.698715,-0.83558,0,0.698715,0.69875,0,-0.698715,-0.83558,0,-0.598488,0,-0.69873,-0.698715,0,-0.69873,0.698715}, 42);
IndexedFaceSet297.setCoord(&Coordinate299);

Shape292.setGeometry(&IndexedFaceSet297);

Transform291.addChild(&Shape292);

Transform281.addChild(&Transform291);

Transform280.addChild(&Transform281);

Transform& Transform300 =  Transform();
Transform300.setDEF(CString("b1-baum"));
Transform& Transform301 =  Transform();
Transform301.setDEF(CString("_13"));
Transform301.setTranslation(new float[]{70.8295,20.1933,220.921});
Transform301.setRotation(new float[]{-0.937535,-1.78012e-7,-0.347892,0.0361333});
Transform301.setScaleOrientation(new float[]{0.357407,-0.862856,0.357407,0.771624});
Inline& Inline302 =  Inline();
Inline302.setUrl(new CString[]{CString("baum1.x3d")}, 1);
Inline302.setBboxSize(new float[]{9.10599,4.72347,8.30301});
Inline302.setBboxCenter(new float[]{0.648559,2.35412,-0.0245941});
Transform301.addChild(&Inline302);

Transform300.addChild(&Transform301);

Transform280.addChild(&Transform300);

Transform& Transform303 =  Transform();
Transform303.setDEF(CString("b1_halme"));
Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[]{-45.7836,-14.6795,-165.17});
Transform304.setScale(new float[]{1.73234,1.73233,1.73231});
Collision& Collision305 =  Collision();
Collision305.setEnabled(False);
Transform& Transform306 =  Transform();
Transform306.setDEF(CString("_14"));
Transform& Transform307 =  Transform();
Transform307.setTranslation(new float[]{66.1246,19.1128,218.934});
Transform307.setRotation(new float[]{-0.00000281204,1,0.00000146456,1.27834});
Transform307.setScale(new float[]{2.73212,2.73206,2.73207});
Shape& Shape308 =  Shape();
Appearance& Appearance309 =  Appearance();
Material& Material310 =  Material();
Appearance309.addChild(&Material310);

ImageTexture& ImageTexture311 =  ImageTexture();
ImageTexture311.setDEF(CString("_15"));
ImageTexture311.setUrl(new CString[]{CString("shadow.png")}, 1);
Appearance309.addChild(&ImageTexture311);

Shape308.addChild(&Appearance309);

IndexedFaceSet& IndexedFaceSet312 =  IndexedFaceSet();
IndexedFaceSet312.setCreaseAngle(0.5);
IndexedFaceSet312.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet312.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate313 =  TextureCoordinate();
TextureCoordinate313.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet312.setTexCoord(&TextureCoordinate313);

Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setPoint(new float[]{-0.331971,0.331919,-0.33197,-0.331971,0.331919,0.33197,0.331971,0.331919,0.33197,0.331971,0.331919,-0.33197}, 12);
IndexedFaceSet312.setCoord(&Coordinate314);

Shape308.setGeometry(&IndexedFaceSet312);

Transform307.addChild(&Shape308);

Transform306.addChild(&Transform307);

Transform& Transform315 =  Transform();
Transform315.setTranslation(new float[]{66.1557,20.5052,218.918});
Transform315.setScale(new float[]{0.492113,0.492113,0.49213});
Shape& Shape316 =  Shape();
Appearance& Appearance317 =  Appearance();
ImageTexture& ImageTexture318 =  ImageTexture();
ImageTexture318.setDEF(CString("_16"));
ImageTexture318.setUrl(new CString[]{CString("halm1.png")}, 1);
Appearance317.addChild(&ImageTexture318);

TextureTransform& TextureTransform319 =  TextureTransform();
TextureTransform319.setScale(new float[]{1,-1});
Appearance317.setTextureTransform(TextureTransform319);

Shape316.addChild(&Appearance317);

IndexedFaceSet& IndexedFaceSet320 =  IndexedFaceSet();
IndexedFaceSet320.setSolid(False);
IndexedFaceSet320.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
IndexedFaceSet320.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate321 =  TextureCoordinate();
TextureCoordinate321.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet320.setTexCoord(&TextureCoordinate321);

Coordinate& Coordinate322 =  Coordinate();
Coordinate322.setPoint(new float[]{-0.5,-1.125,0,0.5,-1.125,0,0.5,1.125,0,-0.5,1.125,0,0.0000382587,-1.125,-0.500076,0.0000380352,-1.125,0.499924,0.0000380352,1.125,0.499924,0.0000382587,1.125,-0.500076}, 24);
IndexedFaceSet320.setCoord(&Coordinate322);

Shape316.setGeometry(&IndexedFaceSet320);

Transform315.addChild(&Shape316);

Transform306.addChild(&Transform315);

Collision305.addChildren(&Transform306);

Transform304.addChild(&Collision305);

Transform303.addChild(&Transform304);

Collision& Collision323 =  Collision();
Collision323.setEnabled(False);
Transform& Transform324 =  Transform();
Transform324.setTranslation(new float[]{98.1087,-4.1992,438.15});
Transform324.setRotation(new float[]{-0.00000174848,1,-7.29661e-7,3.02791});
Transform324.setScale(new float[]{1,1.20908,1});
Transform324.setScaleOrientation(new float[]{3.87677e-12,1,-9.23042e-13,1.5708});
Transform& Transform325 =  Transform();
Transform325.setUSE(CString("_14"));
Transform324.addChild(&Transform325);

Collision323.addChildren(&Transform324);

Transform303.addChild(&Collision323);

Transform& Transform326 =  Transform();
Transform326.setTranslation(new float[]{-80.1907,-13.4344,454.498});
Transform326.setRotation(new float[]{-0.00000197258,1,-2.68305e-7,2.5076});
Transform326.setScale(new float[]{1.39402,1.66629,1.39401});
Transform326.setScaleOrientation(new float[]{-7.71007e-10,-1,1.67523e-9,0.00218366});
Collision& Collision327 =  Collision();
Collision327.setEnabled(False);
Transform& Transform328 =  Transform();
Transform328.setTranslation(new float[]{-175.597,0.0488834,289.452});
Transform328.setRotation(new float[]{0,1,0,1.69949});
Transform& Transform329 =  Transform();
Transform& Transform330 =  Transform();
Transform330.setTranslation(new float[]{66.1246,19.1128,218.934});
Transform330.setRotation(new float[]{-0.00000281204,1,0.00000146456,1.27834});
Transform330.setScale(new float[]{2.73212,2.73206,2.73207});
Shape& Shape331 =  Shape();
Appearance& Appearance332 =  Appearance();
Material& Material333 =  Material();
Appearance332.addChild(&Material333);

ImageTexture& ImageTexture334 =  ImageTexture();
ImageTexture334.setUSE(CString("_15"));
Appearance332.addChild(&ImageTexture334);

Shape331.addChild(&Appearance332);

IndexedFaceSet& IndexedFaceSet335 =  IndexedFaceSet();
IndexedFaceSet335.setCreaseAngle(0.5);
IndexedFaceSet335.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet335.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate336 =  TextureCoordinate();
TextureCoordinate336.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet335.setTexCoord(&TextureCoordinate336);

Coordinate& Coordinate337 =  Coordinate();
Coordinate337.setPoint(new float[]{-0.331971,0.331919,-0.33197,-0.331971,0.331919,0.33197,0.331971,0.331919,0.33197,0.331971,0.331919,-0.33197}, 12);
IndexedFaceSet335.setCoord(&Coordinate337);

Shape331.setGeometry(&IndexedFaceSet335);

Transform330.addChild(&Shape331);

Transform329.addChild(&Transform330);

Transform& Transform338 =  Transform();
Transform338.setTranslation(new float[]{66.1557,20.5052,218.918});
Transform338.setScale(new float[]{0.492113,0.492113,0.49213});
Shape& Shape339 =  Shape();
Appearance& Appearance340 =  Appearance();
ImageTexture& ImageTexture341 =  ImageTexture();
ImageTexture341.setUSE(CString("_16"));
Appearance340.addChild(&ImageTexture341);

TextureTransform& TextureTransform342 =  TextureTransform();
TextureTransform342.setScale(new float[]{1,-1});
Appearance340.setTextureTransform(TextureTransform342);

Shape339.addChild(&Appearance340);

IndexedFaceSet& IndexedFaceSet343 =  IndexedFaceSet();
IndexedFaceSet343.setSolid(False);
IndexedFaceSet343.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
IndexedFaceSet343.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate344 =  TextureCoordinate();
TextureCoordinate344.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet343.setTexCoord(&TextureCoordinate344);

Coordinate& Coordinate345 =  Coordinate();
Coordinate345.setPoint(new float[]{-0.5,-1.125,0,0.5,-1.125,0,0.5,1.125,0,-0.5,1.125,0,0.0000382587,-1.125,-0.500076,0.0000380352,-1.125,0.499924,0.0000380352,1.125,0.499924,0.0000382587,1.125,-0.500076}, 24);
IndexedFaceSet343.setCoord(&Coordinate345);

Shape339.setGeometry(&IndexedFaceSet343);

Transform338.addChild(&Shape339);

Transform329.addChild(&Transform338);

Transform328.addChild(&Transform329);

Collision327.addChildren(&Transform328);

Transform326.addChild(&Collision327);

Transform303.addChild(&Transform326);

Transform& Transform346 =  Transform();
Transform346.setTranslation(new float[]{2.281,0,-0.507965});
Collision& Collision347 =  Collision();
Collision347.setEnabled(False);
Transform& Transform348 =  Transform();
Transform348.setTranslation(new float[]{-175.597,0.0488834,289.452});
Transform348.setRotation(new float[]{0,1,0,1.69949});
Transform& Transform349 =  Transform();
Transform349.setUSE(CString("_14"));
Transform348.addChild(&Transform349);

Collision347.addChildren(&Transform348);

Transform346.addChild(&Collision347);

Transform303.addChild(&Transform346);

Transform280.addChild(&Transform303);

Transform& Transform350 =  Transform();
Transform350.setDEF(CString("b1-baum_1"));
Transform350.setTranslation(new float[]{30.1809,20.0344,187.815});
Transform350.setRotation(new float[]{0.00408193,0.999991,0.00138807,2.84896});
Transform350.setScale(new float[]{0.999999,1,1});
Transform350.setScaleOrientation(new float[]{-0.173714,-0.966014,-0.191417,0.0397349});
Inline& Inline351 =  Inline();
Inline351.setUrl(new CString[]{CString("baum1.x3d")}, 1);
Inline351.setBboxSize(new float[]{9.10599,4.72347,8.30301});
Inline351.setBboxCenter(new float[]{0.648559,2.35412,-0.0245941});
Transform350.addChild(&Inline351);

Transform280.addChild(&Transform350);

Transform& Transform352 =  Transform();
Transform352.setDEF(CString("b1-brett"));
Transform352.setTranslation(new float[]{21.4491,20.052,177.726});
Transform352.setRotation(new float[]{-0.00000485289,1,0.00000566118,0.512967});
Transform352.setScale(new float[]{0.0513791,0.00507984,0.544402});
Shape& Shape353 =  Shape();
Appearance& Appearance354 =  Appearance();
Material& Material355 =  Material();
Material355.setAmbientIntensity(0.273455);
Material355.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance354.addChild(&Material355);

ImageTexture& ImageTexture356 =  ImageTexture();
ImageTexture356.setDEF(CString("_17"));
ImageTexture356.setUrl(new CString[]{CString("bretter_swl.png")}, 1);
Appearance354.addChild(&ImageTexture356);

TextureTransform& TextureTransform357 =  TextureTransform();
TextureTransform357.setScale(new float[]{0.688847,2.33733});
Appearance354.setTextureTransform(TextureTransform357);

Shape353.addChild(&Appearance354);

Box& Box358 =  Box();
Box358.setSize(new float[]{20,20,20});
Shape353.setGeometry(&Box358);

Transform352.addChild(&Shape353);

Transform280.addChild(&Transform352);

Transform& Transform359 =  Transform();
Transform359.setDEF(CString("b1_plant"));
Collision& Collision360 =  Collision();
Collision360.setEnabled(False);
Transform& Transform361 =  Transform();
Transform361.setTranslation(new float[]{43.9341,26.9219,210.173});
Transform361.setRotation(new float[]{0,1,0,0.858495});
Transform361.setScale(new float[]{0.248062,0.248035,0.0469959});
Shape& Shape362 =  Shape();
Appearance& Appearance363 =  Appearance();
Material& Material364 =  Material();
Appearance363.addChild(&Material364);

ImageTexture& ImageTexture365 =  ImageTexture();
ImageTexture365.setUrl(new CString[]{CString("rank1.png")}, 1);
Appearance363.addChild(&ImageTexture365);

Shape362.addChild(&Appearance363);

IndexedFaceSet& IndexedFaceSet366 =  IndexedFaceSet();
IndexedFaceSet366.setCreaseAngle(0.5);
IndexedFaceSet366.setTexCoordIndex(new int32_t[]{0,1,4,5,-1,4,2,3,5,-1}, 10);
IndexedFaceSet366.setCoordIndex(new int32_t[]{0,1,4,5,-1,4,2,3,5,-1}, 10);
TextureCoordinate& TextureCoordinate367 =  TextureCoordinate();
TextureCoordinate367.setPoint(new float[]{0,1,0,0,1,0,1,1,0.5,0,0.5,1}, 12);
IndexedFaceSet366.setTexCoord(&TextureCoordinate367);

Coordinate& Coordinate368 =  Coordinate();
Coordinate368.setPoint(new float[]{10,10,10,10,-10,10,10,-10,-10,10,10,-10,11.0617,-10,0,11.0617,10,0}, 18);
IndexedFaceSet366.setCoord(&Coordinate368);

Shape362.setGeometry(&IndexedFaceSet366);

Transform361.addChild(&Shape362);

Collision360.addChildren(&Transform361);

Transform359.addChild(&Collision360);

Transform280.addChild(&Transform359);

Transform242.addChild(&Transform280);

Transform& Transform369 =  Transform();
Transform369.setDEF(CString("b1_functions"));
Transform& Transform370 =  Transform();
Transform370.setDEF(CString("b1_gate"));
Transform370.setTranslation(new float[]{67.0316,20.0324,216.539});
Transform370.setRotation(new float[]{0,1,0,1.412});
Transform370.setScale(new float[]{2.3074,2.30741,2.30746});
Transform370.setScaleOrientation(new float[]{0,1,0,0.00218366});
Inline& Inline371 =  Inline();
Inline371.setUrl(new CString[]{CString("tikigitter.x3d")}, 1);
Inline371.setBboxSize(new float[]{1.99887,3.79993,0.620143});
Inline371.setBboxCenter(new float[]{0.017874,0.288345,-0.0515845});
Transform370.addChild(&Inline371);

Transform369.addChild(&Transform370);

Transform& Transform372 =  Transform();
Transform372.setDEF(CString("b1_skull"));
Transform372.setTranslation(new float[]{24.6183,20.0179,182.877});
Transform372.setRotation(new float[]{-0.00340094,0.999958,-0.00849883,0.666388});
Transform372.setScale(new float[]{0.999999,1,0.999999});
Transform372.setScaleOrientation(new float[]{0.00102973,0.999999,0.000454526,0.392701});
Inline& Inline373 =  Inline();
Inline373.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline373.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline373.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform372.addChild(&Inline373);

Transform369.addChild(&Transform372);

Transform& Transform374 =  Transform();
Transform374.setDEF(CString("b1-indio"));
Transform374.setTranslation(new float[]{48.433,24.1999,211.485});
Transform374.setRotation(new float[]{0,1,0,2.45325});
Inline& Inline375 =  Inline();
Inline375.setUrl(new CString[]{CString("indio_wurf.x3d")}, 1);
Inline375.setBboxSize(new float[]{1.15579,9.73061,9.37082});
Inline375.setBboxCenter(new float[]{0.00164762,-1.36784,-1.49606});
Transform374.addChild(&Inline375);

Transform369.addChild(&Transform374);

Transform242.addChild(&Transform369);

Transform241.addChild(&Transform242);

Transform& Transform376 =  Transform();
Transform376.setDEF(CString("b2"));
Transform& Transform377 =  Transform();
Transform377.setDEF(CString("b2_walls"));
Transform& Transform378 =  Transform();
Transform378.setDEF(CString("b2_top"));
Transform378.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform378.setScale(new float[]{0.998229,0.998229,0.998232});
Transform378.setScaleOrientation(new float[]{4.74032e-8,-7.51914e-9,1,4.71239});
Shape& Shape379 =  Shape();
Appearance& Appearance380 =  Appearance();
Material& Material381 =  Material();
Material381.setUSE(CString("_11"));
Appearance380.addChild(&Material381);

ImageTexture& ImageTexture382 =  ImageTexture();
ImageTexture382.setUSE(CString("_10"));
Appearance380.addChild(&ImageTexture382);

Shape379.addChild(&Appearance380);

IndexedFaceSet& IndexedFaceSet383 =  IndexedFaceSet();
IndexedFaceSet383.setCreaseAngle(3.14159);
IndexedFaceSet383.setColorIndex(new int[]{0,0,1,0,-1,1,0,0,0,-1,0,0,0,2,-1,0,0,0,2,-1,0,0,2,0,-1,2,0,3,0,-1,0,0,0,1,-1,0,0,0,0,-1,0,0,0,1,-1,0,3,0,0,-1,4,5,4,-1,0,0,6,-1,4,4,6,-1,0,4,6,-1,0,0,0,7,-1,0,0,0,7,-1,5,8,21,25,4,4,-1,4,0,0,-1,0,4,0,-1,0,0,4,-1,0,6,4,-1,6,0,4,-1,4,0,0,-1,0,0,4,-1,7,0,4,-1,7,7,0,-1,6,7,0,-1,7,7,4,0,-1,7,6,4,-1,4,4,6,-1,6,4,4,-1,4,4,4,-1,4,5,4,4,-1,4,4,5,4,-1,0,7,4,-1,7,0,0,-1,7,0,0,-1,0,4,20,0,-1,0,0,0,-1,7,0,0,0,-1,9,10,11,12,-1,13,10,10,14,-1,0,7,17,16,-1,7,0,19,18,-1,18,19,4,16,-1,19,18,18,19,-1,4,19,19,4,-1,16,0,0,16,-1,26,22,24,-1,15,28,24,-1,28,4,26,24,-1,16,4,27,16,-1,4,4,27,-1,8,0,15,22,-1,15,23,22,-1}, 251);
IndexedFaceSet383.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,2,4,5,3,-1,6,7,8,9,-1,8,10,11,9,-1,12,6,9,13,-1,9,11,14,13,-1,1,15,16,2,-1,15,12,13,16,-1,16,17,4,2,-1,13,14,17,16,-1,18,19,20,-1,21,22,23,-1,24,25,23,-1,26,24,23,-1,27,28,29,30,-1,29,31,32,30,-1,19,33,69,73,34,20,-1,37,10,8,-1,7,37,8,-1,7,26,37,-1,26,23,37,-1,23,22,37,-1,37,38,10,-1,22,38,37,-1,39,40,41,-1,42,39,21,-1,23,42,21,-1,39,42,43,40,-1,42,23,43,-1,25,44,23,-1,23,44,43,-1,44,45,43,-1,46,47,48,49,-1,50,51,52,53,-1,54,39,41,-1,39,55,21,-1,39,54,55,-1,54,36,68,55,-1,55,56,21,-1,30,32,56,55,-1,57,58,60,59,-1,60,58,61,62,-1,27,30,65,64,-1,30,55,67,66,-1,66,67,36,64,-1,67,66,66,67,-1,36,67,67,36,-1,64,0,0,64,-1,74,70,72,-1,63,76,72,-1,76,36,74,72,-1,64,36,75,64,-1,36,36,75,-1,35,27,63,70,-1,63,71,70,-1}, 251);
IndexedFaceSet383.setCoordIndex(new int32_t[]{0,1,2,3,-1,2,4,5,3,-1,6,7,8,9,-1,8,10,11,9,-1,12,6,9,13,-1,9,11,14,13,-1,1,15,16,2,-1,15,12,13,16,-1,16,17,4,2,-1,13,14,17,16,-1,18,19,20,-1,21,22,23,-1,18,20,23,-1,24,18,23,-1,25,26,27,28,-1,27,29,30,28,-1,19,31,55,57,32,20,-1,33,10,8,-1,7,33,8,-1,7,24,33,-1,24,23,33,-1,23,22,33,-1,33,34,10,-1,22,34,33,-1,35,36,37,-1,38,35,21,-1,23,38,21,-1,35,38,39,36,-1,38,23,39,-1,20,40,23,-1,23,40,39,-1,40,41,39,-1,32,42,40,20,-1,41,40,42,37,-1,42,35,37,-1,35,43,21,-1,35,42,43,-1,42,32,50,43,-1,43,44,21,-1,28,30,44,43,-1,45,46,3,5,-1,3,46,47,0,-1,25,28,49,48,-1,28,43,50,49,-1,51,52,53,54,-1,52,51,49,50,-1,53,52,50,32,-1,51,54,48,49,-1,57,55,56,-1,48,58,56,-1,58,32,57,56,-1,54,53,58,48,-1,53,32,58,-1,31,25,48,55,-1,48,56,55,-1}, 251);
CColor& Color384 =  CColor();
Color384.setColor(new float[]{0.957447,0.642839,0.0227095,0.567578,0.957447,0.0596433,0.957447,0.912025,0.0193749,0.957447,0.433379,0.0524999,0.245989,0.16516,0.00583457,0.224599,0.150798,0.00532721,0.39671,0.486631,0.0324116,0.0690423,0.245989,0.0149146,0,0,0,0.545455,0.366223,0.0129375,0.957447,0.642839,0.0227095,0.957447,0.642839,0.0227095,0.545455,0.366223,0.0129375,0.957447,0.642839,0.0227095,0.957447,0.642839,0.0227095,0.371066,0.249138,0.00880125,0.371066,0.249138,0.00880125,0.204422,0.184148,0.00796756,0.204422,0.184148,0.00796756,0.554856,0.372536,0.0131605,0.554856,0.372536,0.0131605,0.168097,0.112862,0.00398707,0.168097,0.112862,0.00398707,0.28041,0.188271,0.006651,0.28041,0.188271,0.006651,0.211604,0.142074,0.005019,0.211604,0.142074,0.005019,0.327468,0.219865,0.00776714,0.327468,0.219865,0.00776714}, 87);
IndexedFaceSet383.setColor(&Color384);

TextureCoordinate& TextureCoordinate385 =  TextureCoordinate();
TextureCoordinate385.setPoint(new float[]{-0.362921,0.757328,-0.887226,0.68742,-1.09984,1.14213,-0.497764,1.25782,-0.887226,1.53065,-0.362921,1.53437,1.32921,0.675489,1.85263,0.741365,1.61052,1.12804,1.23515,1.12804,1.85263,1.51473,1.32921,1.51473,0.749031,0.60457,0.808653,0.932944,0.749031,1.51473,0.313322,0.60457,0.121013,1.12804,0.313322,1.51473,0,0,0.422293,0,0.0939785,0.455908,2.1069,1.52218,2.09437,1.51473,2.32762,1.30197,2.09437,0.741365,2.21769,0.906865,2.02163,0.741365,1.5928,0.741365,1.20618,0.741365,1.23634,1.12805,1.61533,1.12805,1.20618,1.51473,1.5928,1.51473,1,0,0.885292,0.457176,2.08893,0.741365,2.19072,0.907326,2.16401,1.30197,2.02163,1.51473,2.54035,1.18846,2.54035,0.739662,2.36931,0.741365,2.64225,1.20055,2.64332,0.741365,2.31595,0.89344,2.3911,0.741365,-0.00921768,0.570153,0.922699,0.722248,1,0,0.215376,0.0952763,0,0,0.0508529,0.319838,0.840459,0.320322,1,0,2.29899,0.89367,2.15157,1.14094,2.08893,1.51473,-1.32014,1.59099,-1.62096,1.06752,-0.880602,1.51825,-1.09321,1.1532,-1.52255,0.743374,-0.880602,0.675647,2.0856,0.878149,2.0856,0.878149,2.05556,0.959176,2.05556,0.959176,2.17372,1.00875,2.17372,1.00875,0.921614,0.312412,2.15849,0.854775,2.11816,0.867709,2.11816,0.867709,0.901326,0.393271,2.17649,0.884128,2.12224,0.88832,2.12224,0.88832}, 154);
IndexedFaceSet383.setTexCoord(&TextureCoordinate385);

Coordinate& Coordinate386 =  Coordinate();
Coordinate386.setPoint(new float[]{-0.421432,10.0354,11.6708,-4.79417,8.25514,1.71649,-8.26037,20.4855,1.18818,-2.61975,23.4973,13.3147,-4.79418,30.9356,1.71649,-0.421442,30.9356,11.6708,15.6975,8.25515,-24.2016,25.1316,10.0354,-30.3935,20.7679,20.4855,-31.2253,14.0021,20.4855,-26.7847,25.1316,30.9356,-30.3935,15.6975,30.9356,-24.2016,5.24026,6.33854,-19.5846,6.31488,15.2129,-17.1506,5.24025,30.9356,-19.5846,-2.61301,6.33854,-12.594,-6.07921,20.4855,-13.1223,-2.61302,30.9356,-12.594,29.4889,10.0354,-35.0953,29.4475,10.0354,-39.2382,31.7116,14.5081,-36.0173,29.4475,30.9356,-39.2382,29.4889,30.9356,-35.0953,33.6929,25.1859,-34.868,28.1777,10.0354,-33.5425,20.4484,10.0354,-44.8164,13.48,10.0354,-41.4959,14.0236,20.4855,-38.9477,20.8545,20.4856,-42.1895,13.48,30.9356,-41.4959,20.4484,30.9356,-44.8164,29.3908,10.0354,-44.9057,31.2122,14.0997,-45.6471,30.744,25.1859,-31.3756,28.1777,30.9356,-33.5425,39.3262,22.445,-46.1734,39.2559,10,-46.1842,34.3828,10,-48.0061,39.3638,22.445,-42.4178,39.3127,10,-40.5041,33.4827,14.1453,-35.8022,34.7747,10,-35.1791,33.177,14.1515,-45.9485,30.5198,20.834,-44.2132,29.3908,30.9356,-44.9057,4.91467,31.7788,19.552,4.33657,18.7945,22.2477,5.28185,10.7545,21.3659,28.9228,14.2635,-45.1421,28.4675,15.5893,-44.7242,30.8963,16.8771,-45.0144,25.4625,16.0659,-38.1546,27.8913,17.3537,-38.4448,28.2004,14.1055,-39.1024,26.1071,14.1439,-38.7535,30.5996,12.819,-45.363,29.9621,13.6257,-46.2935,30.9649,13.5303,-45.5536,29.9839,14.0988,-46.3498}, 177);
IndexedFaceSet383.setCoord(&Coordinate386);

Shape379.setGeometry(&IndexedFaceSet383);

Transform378.addChild(&Shape379);

Transform377.addChild(&Transform378);

Transform& Transform387 =  Transform();
Transform387.setDEF(CString("b2_bottom"));
Transform387.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform387.setScale(new float[]{0.99823,0.99823,0.998232});
Transform387.setScaleOrientation(new float[]{5.94992e-8,5.0423e-9,1,4.71239});
Shape& Shape388 =  Shape();
Appearance& Appearance389 =  Appearance();
Material& Material390 =  Material();
Material390.setUSE(CString("_11"));
Appearance389.addChild(&Material390);

ImageTexture& ImageTexture391 =  ImageTexture();
ImageTexture391.setUSE(CString("_10"));
Appearance389.addChild(&ImageTexture391);

Shape388.addChild(&Appearance389);

IndexedFaceSet& IndexedFaceSet392 =  IndexedFaceSet();
IndexedFaceSet392.setCreaseAngle(3.14159);
IndexedFaceSet392.setColorIndex(new int[]{8,7,1,0,-1,0,1,0,0,-1,0,0,0,0,-1,0,2,0,0,-1,0,0,2,0,-1,3,0,0,0,-1,0,0,0,3,-1,0,4,0,0,-1,4,0,0,0,-1,0,0,0,0,-1,5,0,0,0,-1,0,5,0,0,-1,0,0,0,4,-1,0,0,4,0,-1,0,6,4,-1,0,0,6,0,-1,6,0,4,-1,6,4,4,-1,8,8,7,7,-1}, 92);
IndexedFaceSet392.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,6,7,5,4,-1,8,9,7,6,-1,10,11,9,8,-1,12,13,11,10,-1,14,15,13,12,-1,16,17,15,14,-1,18,19,20,21,-1,22,23,21,20,-1,24,25,23,22,-1,25,24,26,27,-1,28,29,19,18,-1,29,28,30,31,-1,16,32,17,-1,29,31,32,19,-1,32,31,30,-1,32,30,17,-1,33,34,35,36,-1}, 92);
IndexedFaceSet392.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,6,7,5,4,-1,8,9,7,6,-1,10,11,9,8,-1,12,13,11,10,-1,14,15,13,12,-1,16,17,15,14,-1,18,19,20,21,-1,22,23,21,20,-1,24,25,23,22,-1,25,24,26,27,-1,28,29,19,18,-1,29,28,30,31,-1,16,32,17,-1,29,31,32,19,-1,32,31,30,-1,32,30,17,-1,33,34,35,36,-1}, 92);
CColor& Color393 =  CColor();
Color393.setColor(new float[]{0.957447,0.642839,0.0227095,0.259946,0.438503,0.0273161,0.217972,0.26738,0.0178086,0.158504,0.26738,0.0166562,0.245989,0.16516,0.00583457,0.0690423,0.245989,0.0149146,0,0,0,0.160428,0.118109,0.0121229,0.363636,0.267713,0.0274785}, 27);
IndexedFaceSet392.setColor(&Color393);

TextureCoordinate& TextureCoordinate394 =  TextureCoordinate();
TextureCoordinate394.setPoint(new float[]{-0.362921,0.757328,-0.362921,0.0124328,0.123125,0.0124328,0.123125,0.757328,-0.347972,0.0124328,-0.347972,0.691138,0.510349,0,0.510349,0.60457,0.87517,0,0.87517,0.60457,1.45535,0,1.45535,0.675489,1.97877,0,1.97877,0.741365,2.19339,0,2.19339,0.741365,2.3911,0,2.3911,0.741365,2.36931,0.741365,2.52589,0,2.08535,0,2.08535,0.741365,1.59111,0,1.59111,0.741365,1.20449,0,1.20449,0.741365,1.20618,0,1.20618,0.741365,2.54035,0.739662,2.87407,0.0070076,2.64332,0.741365,3.01431,0,2.37414,0,0.985409,1.54457,0.170663,1.58203,0.0482383,0.340119,1.19485,0.287405}, 74);
IndexedFaceSet392.setTexCoord(&TextureCoordinate394);

Coordinate& Coordinate395 =  Coordinate();
Coordinate395.setPoint(new float[]{-0.421426,10,11.5577,0.136294,-10,12.7092,8.04614,-10,8.878,7.43541,9.98963,7.79092,1.30047,-10,-0.589979,-0.23116,8.21248,1.19235,7.7762,-10,-6.85384,0.935822,6.30965,-10.3238,9.03038,-10,-12.7178,7.49978,6.30965,-16.1845,19.4691,-10,-17.3267,17.9385,8.22286,-20.7934,31.544,-10,-22.9231,27.3559,10,-26.9743,35.8121,-10,-27.0865,31.2175,10,-30.9662,38.0205,-10,-35.4187,34.7747,10,-35.1791,34.3828,10,-48.0061,37.1999,-10,-52.2887,29.2737,-10,-51.367,29.2855,10,-51.3421,20.393,-10,-47.8413,20.393,10,-47.8413,13.4369,-10,-44.5267,13.6116,10,-44.5278,13.4554,-10,-41.515,13.6301,10,-41.5161,39.2559,10,-46.1842,45.9502,-10,-46.2512,39.3127,10,-40.5041,45.9877,-10,-42.5021,37.7154,-10,-39.5516,-0.421422,10.0354,11.6708,5.28185,10.7545,21.3659,9.98625,-13.0856,22.8227,1.95987,-14.0976,9.1785}, 111);
IndexedFaceSet392.setCoord(&Coordinate395);

Shape388.setGeometry(&IndexedFaceSet392);

Transform387.addChild(&Shape388);

Transform377.addChild(&Transform387);

Transform& Transform396 =  Transform();
Transform396.setDEF(CString("b2_grasrand"));
Transform396.setTranslation(new float[]{15.9232,9.99943,163.649});
Shape& Shape397 =  Shape();
Appearance& Appearance398 =  Appearance();
Material& Material399 =  Material();
Material399.setAmbientIntensity(0.433333);
Material399.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance398.addChild(&Material399);

ImageTexture& ImageTexture400 =  ImageTexture();
ImageTexture400.setUSE(CString("_8"));
Appearance398.addChild(&ImageTexture400);

Shape397.addChild(&Appearance398);

IndexedFaceSet& IndexedFaceSet401 =  IndexedFaceSet();
IndexedFaceSet401.setColorIndex(new int[]{0,0,1,0,-1,0,1,0,0,-1,0,0,0,0,-1,0,2,0,0,-1,0,0,2,0,-1,3,0,0,0,-1,0,0,0,3,-1,0,4,0,0,-1,4,0,0,0,-1,0,0,0,0,-1,5,0,0,0,-1,0,5,0,0,-1,0,6,4,-1,0,0,6,0,-1}, 69);
IndexedFaceSet401.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,6,7,5,4,-1,8,9,7,6,-1,10,11,9,8,-1,12,13,11,10,-1,14,15,13,12,-1,16,17,15,14,-1,18,19,20,21,-1,22,23,21,20,-1,24,25,23,22,-1,25,24,26,27,-1,16,30,17,-1,28,29,30,19,-1}, 69);
IndexedFaceSet401.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,6,7,5,4,-1,8,9,7,6,-1,10,11,9,8,-1,12,13,11,10,-1,14,15,13,12,-1,16,17,15,14,-1,18,19,20,21,-1,22,23,21,20,-1,24,25,23,22,-1,25,24,26,27,-1,16,30,17,-1,28,29,30,19,-1}, 69);
CColor& Color402 =  CColor();
Color402.setColor(new float[]{0.957447,0.642839,0.0227095,0.259946,0.438503,0.0273161,0.217972,0.26738,0.0178086,0.158504,0.26738,0.0166562,0.245989,0.16516,0.00583457,0.0690423,0.245989,0.0149146,0,0,0}, 21);
IndexedFaceSet401.setColor(&Color402);

TextureCoordinate& TextureCoordinate403 =  TextureCoordinate();
TextureCoordinate403.setPoint(new float[]{-0.338604,0.960985,-0.325079,-5.37536,1.47293,-5.37536,1.4594,0.960985,-0.269778,-5.37536,-0.315246,0.892861,2.90536,-5.47859,2.83332,0.947048,4.25493,-5.47859,4.18288,0.947048,6.40116,-5.47859,6.36254,0.905461,8.33741,-5.47859,8.33073,0.970979,9.13135,-5.47859,9.12467,0.970979,9.86274,-5.47859,9.85606,0.970979,9.77546,0.970979,10.3614,-5.47859,8.7317,-5.47859,8.72502,0.970979,6.90338,-5.47859,6.8967,0.970979,5.47318,-5.47859,5.45966,0.828443,5.47942,-5.47859,5.4659,0.828443,11.6494,-5.42041,12.1681,-5.47859,9.80001,-5.47859}, 62);
IndexedFaceSet401.setTexCoord(&TextureCoordinate403);

Coordinate& Coordinate404 =  Coordinate();
Coordinate404.setPoint(new float[]{-0.421426,10,11.5577,0.136294,-10,12.7092,8.04614,-10,8.878,7.48842,10,7.72653,1.30047,-10,-0.589979,-0.178145,8.22286,1.12796,7.7762,-10,-6.85384,0.935822,6.30965,-10.3238,9.03038,-10,-12.7178,7.49978,6.30965,-16.1845,19.4691,-10,-17.3267,17.9385,8.22286,-20.7934,31.544,-10,-22.9231,27.3559,10,-26.9743,35.8121,-10,-27.0865,31.2175,10,-30.9662,38.0205,-10,-35.4187,34.7747,10,-35.1791,34.3828,10,-48.0061,37.1999,-10,-52.2887,29.2737,-10,-51.367,29.2737,10,-51.367,20.3812,-10,-47.8662,20.3812,10,-47.8662,13.4251,-10,-44.5516,13.4251,10,-44.5516,13.4554,-10,-41.515,13.4554,10,-41.515,45.9502,-10,-46.2512,45.9877,-10,-42.5021,37.7154,-10,-39.5516}, 93);
IndexedFaceSet401.setCoord(&Coordinate404);

Shape397.setGeometry(&IndexedFaceSet401);

Transform396.addChild(&Shape397);

Transform377.addChild(&Transform396);

Transform& Transform405 =  Transform();
Transform405.setDEF(CString("b2_grass"));
Transform405.setTranslation(new float[]{15.9232,9.99943,163.649});
Shape& Shape406 =  Shape();
Appearance& Appearance407 =  Appearance();
Material& Material408 =  Material();
Material408.setAmbientIntensity(0.358095);
Material408.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance407.addChild(&Material408);

ImageTexture& ImageTexture409 =  ImageTexture();
ImageTexture409.setUSE(CString("_9"));
Appearance407.addChild(&ImageTexture409);

Shape406.addChild(&Appearance407);

IndexedFaceSet& IndexedFaceSet410 =  IndexedFaceSet();
IndexedFaceSet410.setCreaseAngle(3.14159);
IndexedFaceSet410.setColorIndex(new int[]{0,0,1,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,2,1,1,0,-1,1,2,0,1,-1,0,1,1,0,-1,1,0,2,1,-1,0,1,1,0,-1,1,0,0,1,-1,2,2,3,5,-1,3,2,5,-1,2,4,5,2,-1,4,2,2,5,-1,2,0,1,1,-1,1,2,1,-1}, 118);
IndexedFaceSet410.setTexCoordIndex(new int32_t[]{0,1,24,25,-1,24,2,3,25,-1,4,27,26,3,-1,27,5,0,26,-1,6,29,28,4,-1,29,7,5,28,-1,12,33,32,10,-1,33,13,11,32,-1,8,35,30,6,-1,35,9,7,30,-1,10,31,36,8,-1,31,11,9,36,-1,21,37,34,12,-1,37,22,13,34,-1,17,42,39,19,-1,42,16,18,39,-1,14,43,41,17,-1,43,15,16,41,-1,23,22,38,44,-1,38,21,44,-1,20,47,45,21,-1,47,18,23,45,-1,20,19,40,46,-1,40,18,46,-1}, 118);
IndexedFaceSet410.setCoordIndex(new int32_t[]{0,1,24,25,-1,24,2,3,25,-1,4,26,25,3,-1,26,5,0,25,-1,6,27,26,4,-1,27,7,5,26,-1,12,29,28,10,-1,29,13,11,28,-1,8,30,27,6,-1,30,9,7,27,-1,10,28,30,8,-1,28,11,9,30,-1,21,31,29,12,-1,31,22,13,29,-1,17,33,32,19,-1,33,16,18,32,-1,14,34,33,17,-1,34,15,16,33,-1,23,22,31,35,-1,31,21,35,-1,20,36,35,21,-1,36,18,23,35,-1,20,19,32,36,-1,32,18,36,-1}, 118);
CColor& Color411 =  CColor();
Color411.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095,0.139037,0.033809,0.00574304,0.347594,0.233378,0.00824449,0.320856,0.215426,0.0076103,0.40107,0.295272,0.0303071}, 18);
IndexedFaceSet410.setColor(&Color411);

TextureCoordinate& TextureCoordinate412 =  TextureCoordinate();
TextureCoordinate412.setPoint(new float[]{-0.466394,1.1921,0.0787997,-0.0490006,1.06675,0.429516,0.109186,1.25368,0.248321,2.68402,-0.194447,2.97634,1.06817,3.41602,0.784699,3.84792,2.37197,3.99168,2.08851,4.42358,3.54822,4.76368,3.26475,5.19558,4.03053,5.26228,3.64455,5.5882,1.80824,6.9591,1.81203,6.57983,2.68085,6.99382,2.67706,7.3731,3.7958,7.00497,3.78775,7.81035,4.42588,7.39058,4.47484,5.78846,3.80802,5.7818,3.80286,6.29833,0.572774,0.190257,-0.178604,1.22289,-0.178604,1.22289,0.0269373,2.83018,0.0269372,2.83018,0.926433,3.63197,0.926433,3.63197,3.40649,4.97963,3.40649,4.97963,3.83754,5.42524,3.83754,5.42524,2.23024,4.20763,2.23024,4.20763,4.14143,5.78513,4.14143,5.78513,3.79177,7.40766,3.79177,7.40766,2.67896,7.18346,2.67896,7.18346,1.81013,6.76946,4.13885,6.0434,4.13885,6.0434,4.11084,7.19777,4.11084,7.19777}, 96);
IndexedFaceSet410.setTexCoord(&TextureCoordinate412);

Coordinate& Coordinate413 =  Coordinate();
Coordinate413.setPoint(new float[]{-4.78643,8.22286,1.62099,-0.421426,10,11.5577,7.48842,10,7.72653,-0.178145,8.22286,1.12796,0.935822,6.30965,-10.3238,-2.60913,6.30965,-12.6642,7.49978,6.30965,-16.1845,5.23025,6.30965,-19.6424,17.9385,8.22286,-20.7934,15.669,8.22286,-24.2513,27.3559,10,-26.9743,25.0864,10,-30.4322,31.2175,10,-30.9662,28.1272,10,-33.5757,13.4251,10,-44.5516,13.4554,10,-41.515,20.4115,10,-44.8296,20.3812,10,-47.8662,29.3381,10,-44.9188,29.2737,10,-51.367,34.3828,10,-48.0061,34.7747,10,-35.1791,29.436,10,-35.1257,29.3947,10,-39.2612,3.5335,10,9.64211,-2.48229,8.22286,1.37448,-0.836654,6.30965,-11.494,6.36502,6.30965,-17.9134,26.2212,10,-28.7033,29.6723,10,-32.2709,16.8037,8.22286,-22.5223,32.1054,10,-35.1524,29.3059,10,-48.1429,20.3963,10,-46.3479,13.4402,10,-43.0333,32.0847,10,-37.2202,31.8604,10,-46.4625}, 111);
IndexedFaceSet410.setCoord(&Coordinate413);

Shape406.setGeometry(&IndexedFaceSet410);

Transform405.addChild(&Shape406);

Transform377.addChild(&Transform405);

Transform376.addChild(&Transform377);

Transform& Transform414 =  Transform();
Transform414.setDEF(CString("b2_functions"));
Transform& Transform415 =  Transform();
Transform415.setDEF(CString("skulls"));
Transform& Transform416 =  Transform();
Transform416.setTranslation(new float[]{17.2949,16.3194,150.286});
Transform416.setRotation(new float[]{0.00000812889,-1,-8.95943e-8,0.911449});
Transform416.setScale(new float[]{0.93102,1.00009,1.00006});
Inline& Inline417 =  Inline();
Inline417.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline417.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline417.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform416.addChild(&Inline417);

Transform415.addChild(&Transform416);

Transform& Transform418 =  Transform();
Transform418.setTranslation(new float[]{24.297,16.6807,145.082});
Transform418.setRotation(new float[]{-0.0347137,0.995528,0.087856,2.05606});
Transform418.setScale(new float[]{0.839943,1.0063,1.00006});
Inline& Inline419 =  Inline();
Inline419.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline419.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline419.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform418.addChild(&Inline419);

Transform415.addChild(&Transform418);

Transform& Transform420 =  Transform();
Transform420.setTranslation(new float[]{32.702,18.2403,141.133});
Transform420.setRotation(new float[]{0.110242,-0.992265,0.0570775,1.03119});
Transform420.setScale(new float[]{0.928917,1.10045,1.00006});
Inline& Inline421 =  Inline();
Inline421.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline421.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline421.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform420.addChild(&Inline421);

Transform415.addChild(&Transform420);

Transform414.addChild(&Transform415);

Transform& Transform422 =  Transform();
Transform422.setDEF(CString("b2_indio"));
Transform422.setTranslation(new float[]{46.1336,24.0431,118.322});
Transform422.setRotation(new float[]{0,1,0,2.68014});
Transform422.setScale(new float[]{1,0.999999,1});
Inline& Inline423 =  Inline();
Inline423.setUrl(new CString[]{CString("indio_wurf.x3d")}, 1);
Inline423.setBboxSize(new float[]{1.15579,9.73061,9.37082});
Inline423.setBboxCenter(new float[]{0.00164762,-1.36784,-1.49606});
Transform422.addChild(&Inline423);

Transform414.addChild(&Transform422);

Transform376.addChild(&Transform414);

Transform241.addChild(&Transform376);

Transform& Transform424 =  Transform();
Transform424.setDEF(CString("b3"));
Transform& Transform425 =  Transform();
Transform425.setDEF(CString("b3_walls"));
Transform& Transform426 =  Transform();
Transform426.setDEF(CString("bretter"));
Transform& Transform427 =  Transform();
Transform427.setDEF(CString("us"));
Transform427.setTranslation(new float[]{5.61128,1.27333,70.6093});
Transform427.setRotation(new float[]{-0.00000105968,1,6.67399e-7,2.91857});
Transform427.setScale(new float[]{0.0188561,0.00704867,0.695484});
Transform427.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape428 =  Shape();
Appearance& Appearance429 =  Appearance();
Material& Material430 =  Material();
Material430.setAmbientIntensity(0.273455);
Material430.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance429.addChild(&Material430);

ImageTexture& ImageTexture431 =  ImageTexture();
ImageTexture431.setUSE(CString("_17"));
Appearance429.addChild(&ImageTexture431);

TextureTransform& TextureTransform432 =  TextureTransform();
TextureTransform432.setScale(new float[]{0.688847,2.33733});
Appearance429.setTextureTransform(TextureTransform432);

Shape428.addChild(&Appearance429);

Box& Box433 =  Box();
Box433.setSize(new float[]{20,20,20});
Shape428.setGeometry(&Box433);

Transform427.addChild(&Shape428);

Transform426.addChild(&Transform427);

Transform& Transform434 =  Transform();
Transform434.setDEF(CString("ud"));
Transform434.setTranslation(new float[]{8.8056,3.15532,83.3728});
Transform434.setRotation(new float[]{-0.132427,0.977771,0.162563,1.79637});
Transform434.setScale(new float[]{0.0416039,0.00300221,0.305293});
Transform434.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape435 =  Shape();
Appearance& Appearance436 =  Appearance();
Material& Material437 =  Material();
Material437.setAmbientIntensity(0.273455);
Material437.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance436.addChild(&Material437);

ImageTexture& ImageTexture438 =  ImageTexture();
ImageTexture438.setUSE(CString("_17"));
Appearance436.addChild(&ImageTexture438);

TextureTransform& TextureTransform439 =  TextureTransform();
TextureTransform439.setScale(new float[]{0.688847,2.33733});
Appearance436.setTextureTransform(TextureTransform439);

Shape435.addChild(&Appearance436);

Box& Box440 =  Box();
Box440.setSize(new float[]{20,20,20});
Shape435.setGeometry(&Box440);

Transform434.addChild(&Shape435);

Transform426.addChild(&Transform434);

Transform& Transform441 =  Transform();
Transform441.setDEF(CString("ub"));
Transform441.setTranslation(new float[]{11.4688,3.2333,81.8866});
Transform441.setRotation(new float[]{-0.503436,-0.855908,0.118211,0.442598});
Transform441.setScale(new float[]{0.0861612,0.0048367,0.450895});
Transform441.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape442 =  Shape();
Appearance& Appearance443 =  Appearance();
Material& Material444 =  Material();
Material444.setAmbientIntensity(0.273455);
Material444.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance443.addChild(&Material444);

ImageTexture& ImageTexture445 =  ImageTexture();
ImageTexture445.setUSE(CString("_17"));
Appearance443.addChild(&ImageTexture445);

TextureTransform& TextureTransform446 =  TextureTransform();
TextureTransform446.setScale(new float[]{0.688847,2.33733});
Appearance443.setTextureTransform(TextureTransform446);

Shape442.addChild(&Appearance443);

Box& Box447 =  Box();
Box447.setSize(new float[]{20,20,20});
Shape442.setGeometry(&Box447);

Transform441.addChild(&Shape442);

Transform426.addChild(&Transform441);

Transform& Transform448 =  Transform();
Transform448.setDEF(CString("m"));
Transform448.setTranslation(new float[]{10.3729,3.25419,85.2939});
Transform448.setRotation(new float[]{-8.81487e-7,1,0.00000103578,2.31127});
Transform448.setScale(new float[]{0.103345,0.00507983,0.344952});
Transform448.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape449 =  Shape();
Appearance& Appearance450 =  Appearance();
Material& Material451 =  Material();
Material451.setAmbientIntensity(0.273455);
Material451.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance450.addChild(&Material451);

ImageTexture& ImageTexture452 =  ImageTexture();
ImageTexture452.setUSE(CString("_17"));
Appearance450.addChild(&ImageTexture452);

TextureTransform& TextureTransform453 =  TextureTransform();
TextureTransform453.setScale(new float[]{0.688847,2.33733});
Appearance450.setTextureTransform(TextureTransform453);

Shape449.addChild(&Appearance450);

Box& Box454 =  Box();
Box454.setSize(new float[]{20,20,20});
Shape449.setGeometry(&Box454);

Transform448.addChild(&Shape449);

Transform426.addChild(&Transform448);

Transform& Transform455 =  Transform();
Transform455.setDEF(CString("o"));
Transform455.setTranslation(new float[]{-2.72217,12.9192,100.539});
Transform455.setRotation(new float[]{-0.650301,-0.751589,-0.110557,0.597476});
Transform455.setScale(new float[]{0.111663,0.00507982,0.564045});
Transform455.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape456 =  Shape();
Appearance& Appearance457 =  Appearance();
Material& Material458 =  Material();
Material458.setAmbientIntensity(0.273455);
Material458.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance457.addChild(&Material458);

ImageTexture& ImageTexture459 =  ImageTexture();
ImageTexture459.setUSE(CString("_17"));
Appearance457.addChild(&ImageTexture459);

TextureTransform& TextureTransform460 =  TextureTransform();
TextureTransform460.setScale(new float[]{0.688847,2.33733});
Appearance457.setTextureTransform(TextureTransform460);

Shape456.addChild(&Appearance457);

Box& Box461 =  Box();
Box461.setSize(new float[]{20,20,20});
Shape456.setGeometry(&Box461);

Transform455.addChild(&Shape456);

Transform426.addChild(&Transform455);

Transform425.addChild(&Transform426);

Transform& Transform462 =  Transform();
Transform462.setDEF(CString("b3_fels"));
Transform462.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform462.setScale(new float[]{0.998231,0.998231,0.998232});
Transform462.setScaleOrientation(new float[]{7.472e-8,1.93718e-8,1,4.71239});
Shape& Shape463 =  Shape();
Appearance& Appearance464 =  Appearance();
Material& Material465 =  Material();
Material465.setDEF(CString("_18"));
Material465.setAmbientIntensity(0.433333);
Material465.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance464.addChild(&Material465);

ImageTexture& ImageTexture466 =  ImageTexture();
ImageTexture466.setUSE(CString("_10"));
Appearance464.addChild(&ImageTexture466);

Shape463.addChild(&Appearance464);

IndexedFaceSet& IndexedFaceSet467 =  IndexedFaceSet();
IndexedFaceSet467.setSolid(False);
IndexedFaceSet467.setCreaseAngle(3.14159);
IndexedFaceSet467.setTexCoordIndex(new int32_t[]{44,2,46,-1,44,46,3,-1,46,4,3,-1,8,5,4,-1,5,6,4,-1,46,2,1,45,-1,45,1,48,47,-1,63,9,10,2,46,-1,47,48,10,9,-1,10,48,1,2,-1,9,10,49,14,-1,51,12,50,52,-1,53,15,54,58,-1,56,16,55,57,-1,12,51,14,49,-1,50,12,49,15,-1,52,50,15,53,-1,16,56,58,54,-1,55,16,54,20,-1,57,55,20,18,-1,18,20,22,21,-1,21,22,26,24,-1,30,31,29,27,-1,27,59,32,30,-1,34,60,59,27,33,-1,34,33,35,-1,40,34,35,39,-1,38,26,37,-1,38,36,26,-1,39,36,38,-1,39,35,36,-1,60,34,40,0,-1,28,41,61,59,-1,43,28,59,60,-1,42,43,60,0,-1,41,42,0,61,-1,41,28,42,-1,28,43,42,-1,24,36,35,-1,24,26,36,-1,11,66,69,13,-1,13,70,71,17,-1,70,53,58,85,71,-1,73,19,17,72,-1,21,75,74,84,18,-1,75,23,19,74,-1,24,77,76,21,-1,77,25,23,76,-1,29,25,78,-1,35,78,24,-1,35,33,78,-1,33,29,78,-1,33,27,29,-1,81,62,68,-1,62,9,68,-1,67,9,65,-1,9,14,65,-1,7,64,68,-1,64,81,68,-1,7,65,11,-1,7,67,65,-1,4,46,79,-1,82,64,5,8,-1,46,82,80,-1,46,62,82,-1,83,73,72,-1,58,92,86,-1,94,18,83,-1,83,96,93,-1,99,86,92,-1,99,101,86,-1,83,72,95,-1,72,100,95,-1,72,86,100,-1,120,121,122,123,-1,116,117,118,119,-1,112,113,114,115,-1,108,109,110,111,-1,18,102,58,-1,102,91,58,-1,18,94,103,-1,94,105,103,-1,124,125,126,127,-1,92,107,93,-1,107,104,93,-1,105,106,103,-1,106,91,103,-1,129,130,131,-1,128,129,132,-1,129,131,132,-1,148,143,142,146,-1,145,66,148,-1,66,14,148,-1,66,145,141,69,-1,69,142,144,53,-1,14,149,147,-1,14,53,149,-1,53,144,150,-1,142,143,143,142,-1,146,142,142,146,-1,146,44,44,146,-1,148,152,148,-1,143,143,154,-1,148,154,152,-1,148,143,154,-1,144,151,150,-1,151,153,150,-1,153,147,150,-1}, 482);
IndexedFaceSet467.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,2,4,3,-1,5,6,4,-1,6,7,4,-1,2,1,10,11,-1,11,10,13,12,-1,62,9,14,1,2,-1,12,13,14,9,-1,14,13,10,1,-1,9,14,17,16,-1,27,28,29,30,-1,19,20,22,21,-1,31,32,33,34,-1,28,27,16,17,-1,29,28,17,20,-1,30,29,20,19,-1,32,31,21,22,-1,33,32,22,26,-1,34,33,26,24,-1,24,26,36,35,-1,35,36,40,38,-1,44,45,43,41,-1,41,42,46,44,-1,49,57,42,41,48,-1,49,48,50,-1,53,49,50,52,-1,55,40,47,-1,55,51,40,-1,52,51,55,-1,52,50,51,-1,57,49,53,56,-1,58,59,54,42,-1,60,58,42,57,-1,61,60,57,56,-1,59,61,56,54,-1,59,58,61,-1,58,60,61,-1,38,51,50,-1,38,40,51,-1,15,64,66,18,-1,18,66,67,23,-1,66,19,21,73,67,-1,68,25,23,67,-1,35,69,68,72,24,-1,69,37,25,68,-1,38,70,69,35,-1,70,39,37,69,-1,43,39,70,-1,50,70,38,-1,50,48,70,-1,48,43,70,-1,48,41,43,-1,71,62,65,-1,62,9,65,-1,65,9,64,-1,9,16,64,-1,8,63,65,-1,63,71,65,-1,8,64,15,-1,8,65,64,-1,4,2,5,-1,71,63,6,5,-1,2,71,5,-1,2,62,71,-1,72,68,67,-1,21,74,73,-1,75,24,72,-1,72,76,75,-1,77,73,74,-1,77,78,73,-1,72,67,76,-1,67,78,76,-1,67,73,78,-1,80,79,76,78,-1,81,80,78,77,-1,82,81,77,74,-1,79,83,75,76,-1,24,84,21,-1,84,74,21,-1,24,75,84,-1,75,85,84,-1,83,82,74,75,-1,74,86,75,-1,86,85,75,-1,85,86,84,-1,86,74,84,-1,80,81,82,-1,79,80,83,-1,80,82,83,-1,93,92,94,95,-1,89,64,90,-1,64,16,90,-1,64,89,87,66,-1,66,87,88,19,-1,16,91,90,-1,16,19,91,-1,19,88,91,-1,94,92,88,87,-1,95,94,87,89,-1,93,95,89,90,-1,92,96,88,-1,93,90,97,-1,92,97,96,-1,92,93,97,-1,88,96,91,-1,96,97,91,-1,97,90,91,-1}, 482);
TextureCoordinate& TextureCoordinate468 =  TextureCoordinate();
TextureCoordinate468.setPoint(new float[]{0.899894,-0.341165,2.04066,-0.360951,2.04066,-0.360951,2.25593,0.485339,2.27458,0.929027,2.04066,1.32848,2.24881,1.37122,1.65906,1.32848,2.04066,0.933061,1.65906,0.476059,1.65906,-0.360951,1.48565,1.32848,1.51126,-0.360951,1.01869,1.32848,1.48565,0.356242,1.01869,-0.360951,0.823583,-0.360951,0.651106,1.32848,0.415529,0.18692,0.415529,1.32848,0.415529,-0.360951,0.00274736,0.187288,0.00274736,-0.362763,0.00274736,1.33339,0.381361,0.179353,0.381361,1.36261,0.381361,-0.388529,0.904341,0.179354,0.835622,-0.388529,0.904341,1.36261,1.24506,0.179354,1.10492,1.36261,1.23757,-0.388529,0.816104,0.179354,0.842616,0.00874418,0.712521,0.102856,0.552724,-0.154917,0.458432,-0.388529,0.553173,-0.0799689,0.67945,0.00475916,0.828326,-0.164135,0.768864,-0.388529,0.785516,-0.341165,0.847066,-0.320956,2.24765,-0.360951,2.04066,0.476059,2.04066,0.476059,1.65906,0.476059,1.65906,-0.360951,1.48565,-0.360951,1.14904,-0.360951,1.46204,0.356242,1.09982,0.356242,1.01869,0.356242,0.651106,-0.360951,0.659652,-0.360951,0.823583,0.18692,0.659652,0.18692,0.651106,0.18692,0.985778,-0.388529,0.961444,-0.320956,0.919019,-0.388529,1.84986,0.476059,1.84986,0.476059,1.84986,1.32848,1.48565,0.842363,1.48565,0.842363,1.65906,0.902272,1.65906,0.902272,1.01869,0.842363,1.01869,0.842363,0.651106,0.757702,0.651106,0.757702,0.415529,0.757702,0.415529,0.757702,0.00274736,0.760341,0.00274736,0.760341,0.381361,0.770984,0.381361,0.770984,2.04066,0.902272,2.04066,0.902272,1.84986,0.902272,1.84986,0.902272,0.415529,0.444532,0.415529,0.444532,0.651106,0.472311,0.651106,0.472311,0.651106,0.367041,0.651106,0.367041,0.415529,0.357525,0.415529,0.357525,0.542782,0.362665,0.542782,0.362665,0.496294,0.360788,0.496294,0.360788,0.491479,0.453488,0.491479,0.453488,0.574385,0.463264,0.574385,0.463264,0.564192,0.430815,0.536655,0.458815,0.536655,0.458815,0.507965,0.31458,0.507965,0.31458,0.516405,0.3616,0.516405,0.3616,0.527312,0.362041,0.527312,0.362041,0.0902252,0.437778,0,0.0105957,0.909774,0,1,0.427183,0,0,0.0813406,0.37411,1,0.397358,0.958504,0.0141761,0.124245,0,0,0.169409,0.959567,0.177998,1,0.0221626,0.167437,0,0,0.250841,0.938426,1.02,1,0.725361,0,0.300797,0.275204,0,1,0.621637,0.85793,1.00398,0.910063,1.0245,0.346499,1.02544,0,0.695205,0.260794,0,1,0.0345263,1.48565,0.634734,1.48565,0.634734,1.01869,0.628481,1.01869,0.628481,1.48565,0.536423,1.48565,0.536423,1.01869,0.530792,1.01869,0.530792,1.1723,0.630538,1.1723,0.630538,1.14888,0.532362,1.14888,0.532362,1.26006,0.631713,1.26006,0.631713,1.28425,0.533994,1.28425,0.533994,1.22316,0.493107,1.22316,0.493107,1.20571,0.533047,1.22742,0.533309,1.23552,0.533407,1.19761,0.532949}, 310);
IndexedFaceSet467.setTexCoord(&TextureCoordinate468);

Coordinate& Coordinate469 =  Coordinate();
Coordinate469.setPoint(new float[]{13.4554,-10,-41.515,9.08885,-9.99874,-39.24,9.08885,9.78069,-39.24,13.6301,10,-41.5161,14.0236,20.4855,-38.9477,9.08885,20.5808,-35.0526,9.08885,29.9257,-39.24,13.48,30.9356,-41.4959,1.03864,29.9257,-39.24,1.03864,9.78069,-39.24,9.08885,-9.99874,-44.7253,9.08885,9.78069,-42.4191,1.03864,9.78069,-42.4191,1.03864,-9.99874,-44.7253,1.03864,-9.99874,-39.24,-2.61954,29.9257,-39.3944,-2.61953,6.94911,-39.3944,-2.61953,-9.99874,-39.3944,-12.4705,29.9257,-39.24,-12.4705,6.94911,-42.3064,-12.4705,-9.99874,-42.3064,-20.2249,2.94759,-46.6766,-20.2249,-9.99875,-46.6766,-20.2249,29.9257,-43.6101,-25.1946,2.94759,-53.4575,-25.1946,29.9257,-50.3911,-25.1946,-9.99875,-53.4575,-3.11755,6.94911,-43.5501,-2.07925,-9.99874,-45.6749,-9.72066,-9.99874,-47.9338,-10.759,6.94911,-45.809,-16.5864,2.94759,-51.1,-16.5864,-9.99874,-51.1,-20.0446,-9.99875,-55.0335,-20.0446,2.94759,-55.0335,-29.2798,2.94759,-65.1567,-29.2798,-9.99875,-65.1567,-29.2798,29.9257,-62.0902,-18.1941,2.94759,-76.3467,-18.1941,29.9257,-73.2802,-18.1941,-9.99874,-76.3467,-2.85756,2.9476,-78.0891,-0.469399,-9.99874,-80.4997,-2.85756,29.9257,-75.0226,7.13419,2.9476,-85.7219,3.02459,29.9257,-79.5161,6.91453,-9.99874,-80.4043,-15.934,-9.99874,-93.967,-5.44514,2.9476,-77.7951,-4.66767,-0.942262,-77.8834,-8.48277,1.20346,-77.6483,-13.1689,-4.6737,-76.5813,-9.45258,-1.03312,-91.3015,-5.08673,-4.88387,-88.8567,-2.42711,-9.99874,-89.699,-13.1557,-2.9649,-92.6969,-2.98798,-8.92011,-89.5214,-1.183,-8.45936,-80.055,-4.87276,-9.99874,-80.5566,-6.83047,-9.99874,-89.7559,-4.53719,-8.45936,-80.0984,-6.34216,-8.92011,-89.5647,5.06374,9.78069,-39.24,5.06374,29.9257,-39.24,-2.61954,18.4374,-39.3944,1.2092,19.8532,-43.2809,-12.4705,18.4374,-40.7732,-20.2249,16.4366,-45.1433,-17.9292,16.7475,-54.6591,-25.2295,16.2008,-63.5232,-18.5971,13.2208,-78.6103,5.06374,19.8532,-39.24,-22.9513,9.15114,-53.7817,-21.2607,9.6673,-45.6919,-22.0781,7.0358,-49.1823,-22.8963,6.99743,-51.3844,-22.4063,9.31755,-51.1736,-21.8974,8.70461,-48.6026,-22.0821,9.41654,-49.6222,-27.3475,9.3751,-47.1237,-26.4658,9.3773,-45.8029,-25.8982,8.60336,-44.9909,-26.2525,6.97406,-45.6021,-27.8375,7.05498,-47.3345,-22.9308,5.91724,-50.352,-22.2507,7.00082,-51.2591,-21.5059,7.02551,-50.3549,-9.22994,13.4314,-40.7723,-9.72217,11.0259,-41.0994,-7.37852,13.4592,-40.3864,-6.86593,11.0187,-40.415,-8.06357,10.2412,-41.2378,-10.7502,11.001,-36.1824,-7.89464,11.0396,-35.4979,-10.2562,13.3101,-35.8573,-8.4048,13.3379,-35.4714,-8.51896,11.0313,-42.1995,-7.49726,11.0287,-41.9546}, 294);
IndexedFaceSet467.setCoord(&Coordinate469);

Shape463.setGeometry(&IndexedFaceSet467);

Transform462.addChild(&Shape463);

Transform425.addChild(&Transform462);

Transform& Transform470 =  Transform();
Transform470.setDEF(CString("b3_grasrand"));
Transform470.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform470.setScale(new float[]{0.998231,0.998231,0.998232});
Transform470.setScaleOrientation(new float[]{7.99934e-8,2.5783e-8,1,4.71239});
Shape& Shape471 =  Shape();
Appearance& Appearance472 =  Appearance();
Material& Material473 =  Material();
Material473.setDEF(CString("_19"));
Material473.setAmbientIntensity(0.358095);
Material473.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance472.addChild(&Material473);

ImageTexture& ImageTexture474 =  ImageTexture();
ImageTexture474.setUSE(CString("_8"));
Appearance472.addChild(&ImageTexture474);

Shape471.addChild(&Appearance472);

IndexedFaceSet& IndexedFaceSet475 =  IndexedFaceSet();
IndexedFaceSet475.setSolid(False);
IndexedFaceSet475.setColorIndex(new int[]{0,0,3,2,-1,0,1,4,3,-1,1,1,5,4,-1,0,1,5,2,-1,0,1,4,6,-1,0,0,7,6,-1,0,1,5,7,-1,0,0,9,8,-1,0,1,10,9,-1,1,1,11,10,-1,0,1,11,8,-1,0,1,10,12,-1,0,0,13,12,-1,0,1,11,13,-1,0,1,15,14,-1,0,0,16,14,-1,1,1,15,17,-1,0,1,17,16,-1,18,15,1,0,-1,0,1,17,19,-1,0,0,19,18,-1}, 105);
IndexedFaceSet475.setTexCoordIndex(new int32_t[]{44,45,46,47,-1,9,66,67,19,-1,16,17,21,20,-1,8,64,65,18,-1,10,66,67,22,-1,48,49,50,51,-1,11,64,65,23,-1,40,41,42,43,-1,5,68,69,25,-1,14,15,27,26,-1,4,62,63,24,-1,6,68,69,28,-1,52,53,54,55,-1,7,62,63,29,-1,1,71,70,30,-1,56,57,58,59,-1,12,13,31,33,-1,2,60,61,32,-1,34,70,71,0,-1,3,60,61,35,-1,36,37,38,39,-1}, 105);
IndexedFaceSet475.setCoordIndex(new int32_t[]{8,9,19,18,-1,9,16,20,19,-1,16,17,21,20,-1,8,17,21,18,-1,10,16,20,22,-1,10,11,23,22,-1,11,17,21,23,-1,4,5,25,24,-1,5,14,26,25,-1,14,15,27,26,-1,4,15,27,24,-1,6,14,26,28,-1,6,7,29,28,-1,7,15,27,29,-1,1,13,31,30,-1,1,2,32,30,-1,12,13,31,33,-1,2,12,33,32,-1,34,31,13,0,-1,3,12,33,35,-1,0,3,35,34,-1}, 105);
CColor& Color476 =  CColor();
Color476.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095,0,0.446809,0.132331,0,0.446809,0.132331,0.957447,0.642839,0.0227095,0.957447,0.642839,0.0227095,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0.957447,0.642839,0.0227095,0.957447,0.642839,0.0227095,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0.957447,0.642839,0.0227095,0,0.446809,0.132331,0.957447,0.642839,0.0227095,0,0.446809,0.132331,0,0.446809,0.132331}, 60);
IndexedFaceSet475.setColor(&Color476);

TextureCoordinate& TextureCoordinate477 =  TextureCoordinate();
TextureCoordinate477.setPoint(new float[]{0.947215,0.880417,0.0553954,0.880417,0.040631,0.923426,0.892027,0.923426,1.16078,0.952034,1.04557,0.856395,0.0598011,0.856395,0.0441997,0.952034,1.23389,0.923429,0.513261,0.890311,0.0670124,0.89031,0.0380952,0.923428,0.998868,0.112802,0.762322,0.112802,0.395104,0.340242,0.652939,0.156167,0.0763751,1.0568,0.201363,0.673051,1.24127,0.0846024,0.520986,0.147125,0.0775075,1.05876,0.202495,0.675005,0.0747368,0.147125,0.0454697,0.0846024,1.20084,0.11321,1.08753,0.11321,0.396237,0.342196,0.654072,0.158121,0.0675256,0.11321,0.0515742,0.11321,0.0631198,0.137233,0.763455,0.114756,0.0480054,0.0846024,1,0.114756,0.984895,0.137233,0.927999,0.0846024,0.0791879,0.992826,1.67202,0.992828,1.67965,0.12456,0.086813,0.12456,1.94124,0.908399,0.424358,0.908398,0.443786,0.0401313,1.96067,0.040132,1.79469,0.901837,1.10399,0.901836,1.11162,0.0335689,1.80231,0.0335689,0.0754133,0.901835,1.06798,0.901836,1.07561,0.0335689,0.0830386,0.0335689,0.0846021,0.908398,2.0401,0.908399,2.04772,0.040132,0.0922274,0.0401313,0.0791879,0.992826,1.67202,0.992828,1.67965,0.12456,0.086813,0.12456,0.466329,0.923426,0.473703,0.0846024,0.602488,0.952034,0.609863,0.11321,0.635992,0.923428,0.643366,0.0846024,0.290137,0.890311,0.297861,0.147125,0.552682,0.856395,0.560407,0.11321,0.50903,0.137233,0.501305,0.880417}, 144);
IndexedFaceSet475.setTexCoord(&TextureCoordinate477);

Coordinate& Coordinate478 =  Coordinate();
Coordinate478.setPoint(new float[]{0.983053,9.78069,-42.4399,0.983053,9.78069,-39.2191,9.13882,9.78069,-39.2191,9.13882,9.78069,-42.4399,-3.04143,6.94911,-43.5606,-10.8083,6.94911,-45.8566,-12.5479,6.94911,-42.2965,-2.53523,6.94911,-39.3366,-16.4976,2.94759,-51.0896,-20.0342,2.94759,-55.1122,-25.3008,2.94759,-53.5005,-20.2185,2.94759,-46.566,9.13882,9.78069,-40.8295,0.983053,9.78069,-40.8295,-11.6781,6.94911,-44.0765,-2.78833,6.94911,-41.4486,-22.6675,2.94759,-54.3064,-18.3581,2.94759,-48.8278,-16.4586,1.82671,-51.1175,-19.9951,1.82671,-55.1401,-22.6284,1.82671,-54.3343,-18.319,1.82671,-48.8557,-25.2618,1.82671,-53.5284,-20.1795,1.82671,-46.5939,-2.94195,5.82822,-43.7122,-10.7088,5.82822,-46.0081,-11.6391,5.82822,-44.1044,-2.74929,5.82822,-41.4765,-12.5089,5.82822,-42.3244,-2.49619,5.82822,-39.3645,1.0221,8.65981,-39.247,1.0221,8.65981,-40.8574,9.17787,8.65981,-39.247,9.17787,8.65981,-40.8574,1.0221,8.65981,-42.576,9.17787,8.65981,-42.576}, 108);
IndexedFaceSet475.setCoord(&Coordinate478);

Shape471.setGeometry(&IndexedFaceSet475);

Transform470.addChild(&Shape471);

Transform425.addChild(&Transform470);

Transform& Transform479 =  Transform();
Transform479.setDEF(CString("b3_gras"));
Transform479.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform479.setScale(new float[]{0.998231,0.998231,0.998232});
Transform479.setScaleOrientation(new float[]{7.33824e-8,1.65276e-8,1,4.71239});
Shape& Shape480 =  Shape();
Appearance& Appearance481 =  Appearance();
Material& Material482 =  Material();
Material482.setUSE(CString("_19"));
Appearance481.addChild(&Material482);

ImageTexture& ImageTexture483 =  ImageTexture();
ImageTexture483.setUSE(CString("_9"));
Appearance481.addChild(&ImageTexture483);

Shape480.addChild(&Appearance481);

IndexedFaceSet& IndexedFaceSet484 =  IndexedFaceSet();
IndexedFaceSet484.setSolid(False);
IndexedFaceSet484.setCreaseAngle(3.14159);
IndexedFaceSet484.setColorIndex(new int[]{0,1,1,0,-1,1,0,0,1,-1,1,0,0,1,-1,0,0,1,1,-1,0,0,1,1,-1,1,0,0,1,-1}, 30);
IndexedFaceSet484.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,6,7,8,9,-1,10,11,6,9,-1,12,13,14,15,-1,14,16,17,15,-1}, 30);
IndexedFaceSet484.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,6,7,8,9,-1,10,11,6,9,-1,12,13,14,15,-1,14,16,17,15,-1}, 30);
CColor& Color485 =  CColor();
Color485.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet484.setColor(&Color485);

TextureCoordinate& TextureCoordinate486 =  TextureCoordinate();
TextureCoordinate486.setPoint(new float[]{4.21979,2.28935,4.21979,2.54314,5.50511,2.54314,5.50511,2.28935,4.21979,2.79693,5.50511,2.79693,2.19953,2.02772,2.06289,2.30733,3.63572,2.77228,3.59596,2.44052,3.55621,2.10876,2.33616,1.7481,1.40574,0.903325,0.853587,0.275301,0.442459,0.401109,1.11527,1.25645,0.0313299,0.526917,0.824803,1.60958}, 36);
IndexedFaceSet484.setTexCoord(&TextureCoordinate486);

Coordinate& Coordinate487 =  Coordinate();
Coordinate487.setPoint(new float[]{0.983053,9.78069,-42.4399,0.983053,9.78069,-40.8295,9.13882,9.78069,-40.8295,9.13882,9.78069,-42.4399,0.983053,9.78069,-39.2191,9.13882,9.78069,-39.2191,-11.6781,6.94911,-44.0765,-12.5479,6.94911,-42.2965,-2.53523,6.94911,-39.3366,-2.78833,6.94911,-41.4486,-3.04143,6.94911,-43.5606,-10.8083,6.94911,-45.8566,-16.4976,2.94759,-51.0896,-20.0342,2.94759,-55.1122,-22.6675,2.94759,-54.3064,-18.3581,2.94759,-48.8278,-25.3008,2.94759,-53.5005,-20.2185,2.94759,-46.566}, 54);
IndexedFaceSet484.setCoord(&Coordinate487);

Shape480.setGeometry(&IndexedFaceSet484);

Transform479.addChild(&Shape480);

Transform425.addChild(&Transform479);

Transform& Transform488 =  Transform();
Transform488.setDEF(CString("b3_inseln"));
Transform& Transform489 =  Transform();
Transform489.setDEF(CString("b3_insel1"));
Transform489.setTranslation(new float[]{1.96995,0.593032,93.0581});
Transform489.setScale(new float[]{0.139279,0.0716362,0.139382});
Shape& Shape490 =  Shape();
Appearance& Appearance491 =  Appearance();
Material& Material492 =  Material();
Material492.setAmbientIntensity(0.433333);
Material492.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance491.addChild(&Material492);

ImageTexture& ImageTexture493 =  ImageTexture();
ImageTexture493.setUSE(CString("_10"));
Appearance491.addChild(&ImageTexture493);

Shape490.addChild(&Appearance491);

Box& Box494 =  Box();
Box494.setSize(new float[]{20,20,20});
Shape490.setGeometry(&Box494);

Transform489.addChild(&Shape490);

Transform488.addChild(&Transform489);

Transform& Transform495 =  Transform();
Transform495.setDEF(CString("b3_insel2"));
Transform& Transform496 =  Transform();
Transform496.setDEF(CString("fels"));
Transform496.setTranslation(new float[]{9.91147,1.60135,92.7054});
Transform496.setRotation(new float[]{-1.25602e-12,-1,9.06926e-13,0.329019});
Transform496.setScale(new float[]{0.243262,0.16007,0.204023});
Shape& Shape497 =  Shape();
Appearance& Appearance498 =  Appearance();
Material& Material499 =  Material();
Material499.setAmbientIntensity(0.433333);
Material499.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance498.addChild(&Material499);

ImageTexture& ImageTexture500 =  ImageTexture();
ImageTexture500.setUSE(CString("_10"));
Appearance498.addChild(&ImageTexture500);

Shape497.addChild(&Appearance498);

IndexedFaceSet& IndexedFaceSet501 =  IndexedFaceSet();
IndexedFaceSet501.setCreaseAngle(0.5);
IndexedFaceSet501.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,8,5,2,-1,0,1,4,6,-1,4,9,7,6,-1,9,2,7,-1,9,3,2,-1}, 40);
IndexedFaceSet501.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,1,7,5,11,8,3,-1,2,3,8,9,-1,8,11,10,9,-1,11,4,10,-1,11,5,4,-1}, 40);
TextureCoordinate& TextureCoordinate502 =  TextureCoordinate();
TextureCoordinate502.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,0.75,1,1,0.25,0.75,0}, 20);
IndexedFaceSet501.setTexCoord(&TextureCoordinate502);

Coordinate& Coordinate503 =  Coordinate();
Coordinate503.setPoint(new float[]{-7.92546,10,10,-11.4443,-10,18.856,10,10,10,10,-10,16.3986,4.71453,10,-14.345,2.701,-10,-17.2282,-11.3901,10,-3.09819,-16.9225,-10,-3.52402,26.6602,-10,-2.19934,20.8845,-0.0727615,0,17.4736,-0.0727615,-3.13371,21.218,-10,-11.0701}, 36);
IndexedFaceSet501.setCoord(&Coordinate503);

Shape497.setGeometry(&IndexedFaceSet501);

Transform496.addChild(&Shape497);

Transform495.addChild(&Transform496);

Transform& Transform504 =  Transform();
Transform504.setDEF(CString("gras"));
Transform504.setTranslation(new float[]{9.91147,1.60135,92.7054});
Transform504.setRotation(new float[]{-1.25602e-12,-1,9.06926e-13,0.329019});
Transform504.setScale(new float[]{0.243262,0.16007,0.204023});
Shape& Shape505 =  Shape();
Appearance& Appearance506 =  Appearance();
Material& Material507 =  Material();
Material507.setAmbientIntensity(0.358095);
Material507.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance506.addChild(&Material507);

ImageTexture& ImageTexture508 =  ImageTexture();
ImageTexture508.setUSE(CString("_9"));
Appearance506.addChild(&ImageTexture508);

Shape505.addChild(&Appearance506);

IndexedFaceSet& IndexedFaceSet509 =  IndexedFaceSet();
IndexedFaceSet509.setCreaseAngle(0.5);
IndexedFaceSet509.setColorIndex(new int[]{0,0,0,-1,0,0,1,-1,0,0,1,-1,0,1,0,-1,0,0,1,-1,0,0,1,-1}, 24);
IndexedFaceSet509.setTexCoordIndex(new int32_t[]{2,5,4,-1,2,4,7,-1,4,3,7,-1,0,6,3,-1,0,1,6,-1,1,2,6,-1}, 24);
IndexedFaceSet509.setCoordIndex(new int32_t[]{2,5,4,-1,2,4,6,-1,4,3,6,-1,0,6,3,-1,0,1,6,-1,1,2,6,-1}, 24);
CColor& Color510 =  CColor();
Color510.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet509.setColor(&Color510);

TextureCoordinate& TextureCoordinate511 =  TextureCoordinate();
TextureCoordinate511.setPoint(new float[]{-0.000105572,0.50212,0.137915,-0.00130193,0.852009,-0.00130193,0.641452,0.934383,1.14973,0.503485,1.28561,0.383042,0.764248,0.388698,0.764248,0.388698}, 16);
IndexedFaceSet509.setTexCoord(&TextureCoordinate511);

Coordinate& Coordinate512 =  Coordinate();
Coordinate512.setPoint(new float[]{-11.3901,10,-3.09819,-7.92546,10,10,10,10,10,4.71453,10,-14.345,17.4736,-0.0727615,-3.13371,20.8845,-0.0727615,0,7.79698,10,-0.147155}, 21);
IndexedFaceSet509.setCoord(&Coordinate512);

Shape505.setGeometry(&IndexedFaceSet509);

Transform504.addChild(&Shape505);

Transform495.addChild(&Transform504);

Transform488.addChild(&Transform495);

Transform425.addChild(&Transform488);

Transform424.addChild(&Transform425);

Transform& Transform513 =  Transform();
Transform513.setDEF(CString("b3_functions"));
Transform& Transform514 =  Transform();
Transform514.setDEF(CString("Lift2_anim"));
Transform& Transform515 =  Transform();
Transform515.setCenter(new float[]{26.7826,11.8861,119.411});
LOD& LOD516 =  LOD();
LOD516.setRange(new float[]{150}, 1);
Transform& Transform517 =  Transform();
Transform517.setDEF(CString("l2hiVSens"));
Transform517.setCenter(new float[]{26.7826,11.8861,119.411});
Transform& Transform518 =  Transform();
Transform518.setDEF(CString("lift2_anim"));
Transform518.setCenter(new float[]{26.7826,11.8861,119.411});
Group& Group519 =  Group();
Group& Group520 =  Group();
Group520.setDEF(CString("lift2"));
TimeSensor& TimeSensor521 =  TimeSensor();
TimeSensor521.setDEF(CString("Time"));
TimeSensor521.setEnabled(False);
TimeSensor521.setCycleInterval(30);
TimeSensor521.setLoop(True);
TimeSensor521.setStartTime(958609000);
TimeSensor521.setStopTime(1);
Group520.addChild(&TimeSensor521);

Group519.addChild(&Group520);

PositionInterpolator& PositionInterpolator522 =  PositionInterpolator();
PositionInterpolator522.setDEF(CString("lift2TranslationInterp"));
PositionInterpolator522.setKey(new float[]{0,0.00333333,0.00666667,0.01,0.0133333,0.0166667,0.02,0.0233333,0.0266667,0.03,0.0333333,0.0366667,0.04,0.0433333,0.0466667,0.05,0.0533333,0.0566667,0.06,0.0633333,0.0666667,0.07,0.0733333,0.0766667,0.08,0.0833333,0.0866667,0.09,0.0933333,0.0966666,0.1,0.103333,0.106667,0.11,0.113333,0.116667,0.12,0.123333,0.126667,0.13,0.133333,0.136667,0.14,0.143333,0.146667,0.15,0.153333,0.156667,0.16,0.163333,0.166667,0.17,0.173333,0.176667,0.18,0.183333,0.186667,0.19,0.193333,0.196667,0.2,0.203333,0.206667,0.21,0.213333,0.216667,0.22,0.223333,0.226667,0.23,0.233333,0.236667,0.24,0.243333,0.246667,0.25,0.253333,0.256667,0.26,0.263333,0.266667,0.27,0.273333,0.276667,0.28,0.283333,0.286667,0.29,0.293333,0.296667,0.3,0.303333,0.306667,0.31,0.313333,0.316667,0.32,0.323333,0.326667,0.33,0.36,0.363409,0.366818,0.370227,0.373636,0.377045,0.380455,0.383864,0.387273,0.390682,0.394091,0.3975,0.400909,0.404318,0.407727,0.411136,0.414545,0.417955,0.421364,0.424773,0.428182,0.431591,0.435,0.438409,0.441818,0.445227,0.448636,0.452045,0.455454,0.458864,0.462273,0.465682,0.469091,0.4725,0.475909,0.479318,0.482727,0.486136,0.489545,0.492954,0.496364,0.499773,0.503182,0.506591,0.51,0.513333,0.516667,0.52,0.523333,0.526667,0.53,0.533333,0.536667,0.54,0.543333,0.546667,0.55,0.553333,0.556667,0.56,0.563333,0.566667,0.57,0.573333,0.576667,0.58,0.583333,0.586667,0.59,0.593333,0.596667,0.6,0.603333,0.606667,0.61,0.613333,0.616667,0.62,0.623333,0.626667,0.63,0.633333,0.636667,0.64,0.643333,0.646667,0.65,0.653333,0.656667,0.66,0.663333,0.666667,0.67,0.73,0.73375,0.7375,0.74125,0.745,0.74875,0.7525,0.75625,0.76,0.763333,0.766667,0.77,0.773333,0.776667,0.78,0.783333,0.786667,0.79,0.793333,0.796667,0.8,0.803333,0.806667,0.81,0.813333,0.816667,0.82,0.823333,0.826667,0.83,0.833333,0.836667,0.84,0.843333,0.846667,0.85,0.853333,0.856667,0.86,0.863333,0.866667,0.87,0.873333,0.876667,0.88,0.883333,0.886667,0.89,0.893333,0.896667,0.9,0.903333,0.906667,0.91,0.913333,0.916667,0.92,0.923333,0.926667,0.93,0.933333,0.936667,0.94,0.943333,0.946667,0.95,0.953333,0.956667,0.96,0.963333,0.966667,0.97,0.973333,0.976667,0.98,0.983333,0.986667,0.99,0.993333,0.996667,1}, 274);
PositionInterpolator522.setKeyValue(new float[]{0,0,0,0,-0.550832,0,0,-1.12035,0,0,-1.70738,0,0,-2.31077,0,0,-2.92933,0,0,-3.56191,0,0,-4.20733,0,0,-4.86443,0,0,-5.53205,0,0,-6.209,0,0,-6.89413,0,0,-7.58627,0,0,-8.28424,0,0,-8.98689,0,0,-9.69304,0,0,-10.4015,0,0,-11.1112,0,0,-11.8208,0,0,-12.5293,0,0,-13.2355,0,0,-13.9381,0,0,-14.6361,0,0,-15.3282,0,0,-16.0134,0,0,-16.6903,0,0,-17.3579,0,0,-18.015,0,0,-18.6604,0,0,-19.293,0,0,-19.9116,0,0,-20.515,0,0,-21.102,0,0,-21.6715,0,0,-22.2224,0,0,-22.7533,0,0,-23.2633,0,0,-23.7511,0,0,-24.2155,0,0,-24.6554,0,0,-25.0696,0,0,-25.4569,0,0,-25.8162,0,0,-26.1463,0,0,-26.4461,0,0,-26.7143,0,0,-26.9498,0,0,-27.1515,0,0,-27.3181,0,0,-27.4485,0,0,-27.5416,0,0,-27.5961,0,0,-27.6088,0,0,-27.578,0,0,-27.5053,0,0,-27.3919,0,0,-27.2393,0,0,-27.0488,0,0,-26.822,0,0,-26.5601,0,0,-26.2646,0,0,-25.9369,0,0,-25.5784,0,0,-25.1905,0,0,-24.7745,0,0,-24.332,0,0,-23.8642,0,0,-23.3726,0,0,-22.8586,0,0,-22.3236,0,0,-21.769,0,0,-21.1961,0,0,-20.6065,0,0,-20.0015,0,0,-19.3824,0,0,-18.7507,0,0,-18.1079,0,0,-17.4552,0,0,-16.7941,0,0,-16.126,0,0,-15.4524,0,0,-14.7745,0,0,-14.0938,0,0,-13.4117,0,0,-12.7296,0,0,-12.0489,0,0,-11.371,0,0,-10.6973,0,0,-10.0293,0,0,-9.36818,0,0,-8.71551,0,0,-8.07264,0,0,-7.44097,0,0,-6.82192,0,0,-6.21687,0,0,-5.62723,0,0,-5.0544,0,0,-4.49977,0,0,-3.96476,0,0,-3.45074,0,0,-3.48698,0,0,-3.96235,0,0,-4.4689,0,0,-5.00467,0,0,-5.56768,0,0,-6.15593,0,0,-6.76746,0,0,-7.40028,0,0,-8.05242,0,0,-8.72189,0,0,-9.40671,0,0,-10.1049,0,0,-10.8145,0,0,-11.5335,0,0,-12.26,0,0,-12.9919,0,0,-13.7272,0,0,-14.4641,0,0,-15.2005,0,0,-15.9344,0,0,-16.6639,0,0,-17.387,0,0,-18.1016,0,0,-18.8059,0,0,-19.4978,0,0,-20.1754,0,0,-20.8367,0,0,-21.4796,0,0,-22.1023,0,0,-22.7027,0,0,-23.2789,0,0,-23.8289,0,0,-24.3507,0,0,-24.8422,0,0,-25.3017,0,0,-25.727,0,0,-26.1161,0,0,-26.4672,0,0,-26.7782,0,0,-27.0472,0,0,-27.2721,0,0,-27.451,0,0,-27.5819,0,0,-27.6628,0,0,-27.6918,0,0,-27.6734,0,0,-27.6144,0,0,-27.5162,0,0,-27.3801,0,0,-27.2074,0,0,-26.9994,0,0,-26.7574,0,0,-26.4827,0,0,-26.1766,0,0,-25.8404,0,0,-25.4754,0,0,-25.083,0,0,-24.6645,0,0,-24.2211,0,0,-23.7542,0,0,-23.265,0,0,-22.7549,0,0,-22.2252,0,0,-21.6772,0,0,-21.1122,0,0,-20.5315,0,0,-19.9364,0,0,-19.3283,0,0,-18.7084,0,0,-18.078,0,0,-17.4384,0,0,-16.791,0,0,-16.1371,0,0,-15.478,0,0,-14.8149,0,0,-14.1492,0,0,-13.4822,0,0,-12.8152,0,0,-12.1495,0,0,-11.4864,0,0,-10.8273,0,0,-10.1734,0,0,-9.52598,0,0,-8.88644,0,0,-8.25606,0,0,-7.63613,0,0,-7.02797,0,0,-6.43289,0,0,-5.8522,0,0,-5.28719,0,0,-4.73918,0,0,-4.20949,0,0,-3.69937,0,0,-3.69937,0,0,-3.42117,0,0,-2.93484,0,0,-2.32108,0,0,-1.66062,0,0,-1.03416,0,0,-0.522425,0,0,-0.20613,0,0,-0.165997,0,0,-0.292551,0,0,-0.448805,0,0,-0.632621,0,0,-0.841863,0,0,-1.07439,0,0,-1.32807,0,0,-1.60076,0,0,-1.89032,0,0,-2.19462,0,0,-2.51152,0,0,-2.83889,0,0,-3.17457,0,0,-3.51644,0,0,-3.86236,0,0,-4.21019,0,0,-4.5578,0,0,-4.90304,0,0,-5.24378,0,0,-5.57787,0,0,-5.90319,0,0,-6.2176,0,0,-6.51895,0,0,-6.80512,0,0,-7.07395,0,0,-7.32332,0,0,-7.55109,0,0,-7.75512,0,0,-7.93326,0,0,-8.0834,0,0,-8.20337,0,0,-8.29106,0,0,-8.34432,0,0,-8.36101,0,0,-8.34797,0,0,-8.31401,0,0,-8.25997,0,0,-8.1867,0,0,-8.09502,0,0,-7.98576,0,0,-7.85978,0,0,-7.7179,0,0,-7.56096,0,0,-7.3898,0,0,-7.20526,0,0,-7.00816,0,0,-6.79936,0,0,-6.57967,0,0,-6.34995,0,0,-6.11103,0,0,-5.86374,0,0,-5.60891,0,0,-5.3474,0,0,-5.08003,0,0,-4.80764,0,0,-4.53107,0,0,-4.25115,0,0,-3.96872,0,0,-3.68462,0,0,-3.39968,0,0,-3.11475,0,0,-2.83064,0,0,-2.54821,0,0,-2.2683,0,0,-1.99172,0,0,-1.71933,0,0,-1.45197,0,0,-1.19045,0,0,-0.935633,0,0,-0.68834,0,0,-0.449414,0,0,-0.219694,0,0,0,0}, 822);
Group519.addChild(&PositionInterpolator522);

Transform518.addChild(&Group519);

Transform& Transform523 =  Transform();
Transform523.setTranslation(new float[]{-27.3288,-9.53674e-7,11.4885});
Transform523.setRotation(new float[]{0,1,0,0.26526});
Transform523.setScale(new float[]{0.881178,1,1});
Transform& Transform524 =  Transform();
Transform524.setTranslation(new float[]{27.1521,11.8861,118.334});
Transform524.setRotation(new float[]{0.00000303633,1,-0.00000260908,3.20191});
Transform524.setScale(new float[]{0.22077,1.18861,0.207314});
Shape& Shape525 =  Shape();
Appearance& Appearance526 =  Appearance();
Material& Material527 =  Material();
Material527.setDEF(CString("_20"));
Material527.setAmbientIntensity(0.358095);
Material527.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance526.addChild(&Material527);

ImageTexture& ImageTexture528 =  ImageTexture();
ImageTexture528.setUSE(CString("_9"));
Appearance526.addChild(&ImageTexture528);

Shape525.addChild(&Appearance526);

IndexedFaceSet& IndexedFaceSet529 =  IndexedFaceSet();
IndexedFaceSet529.setCreaseAngle(0.5);
IndexedFaceSet529.setColorIndex(new int[]{0,0,1,-1,0,0,1,-1,0,1,0,-1,0,0,1,-1}, 16);
IndexedFaceSet529.setTexCoordIndex(new int32_t[]{1,2,5,-1,2,3,5,-1,0,4,3,-1,0,1,4,-1}, 16);
IndexedFaceSet529.setCoordIndex(new int32_t[]{1,2,4,-1,2,3,4,-1,0,4,3,-1,0,1,4,-1}, 16);
CColor& Color530 =  CColor();
Color530.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet529.setColor(&Color530);

TextureCoordinate& TextureCoordinate531 =  TextureCoordinate();
TextureCoordinate531.setPoint(new float[]{0,1,0,0,1,0,1,1,0.5,0.5,0.5,0.5}, 12);
IndexedFaceSet529.setTexCoord(&TextureCoordinate531);

Coordinate& Coordinate532 =  Coordinate();
Coordinate532.setPoint(new float[]{-10.0713,10,-10.0713,-10.0713,10,10.0713,10.0713,10,10.0713,10.0713,10,-10.0713,-3.07561e-7,10,3.07561e-7}, 15);
IndexedFaceSet529.setCoord(&Coordinate532);

Shape525.setGeometry(&IndexedFaceSet529);

Transform524.addChild(&Shape525);

Transform523.addChild(&Transform524);

Transform& Transform533 =  Transform();
Transform533.setTranslation(new float[]{27.1521,11.8861,118.334});
Transform533.setRotation(new float[]{0.00000303633,1,-0.00000260908,3.20191});
Transform533.setScale(new float[]{0.22077,1.18861,0.207314});
Shape& Shape534 =  Shape();
Appearance& Appearance535 =  Appearance();
Material& Material536 =  Material();
Material536.setUSE(CString("_20"));
Appearance535.addChild(&Material536);

ImageTexture& ImageTexture537 =  ImageTexture();
ImageTexture537.setUSE(CString("_8"));
Appearance535.addChild(&ImageTexture537);

Shape534.addChild(&Appearance535);

IndexedFaceSet& IndexedFaceSet538 =  IndexedFaceSet();
IndexedFaceSet538.setCreaseAngle(0.5);
IndexedFaceSet538.setColorIndex(new int[]{0,1,2,2,-1,3,0,2,2,-1,4,3,2,2,-1,2,2,1,4,-1}, 20);
IndexedFaceSet538.setTexCoordIndex(new int32_t[]{0,14,15,3,-1,4,12,13,5,-1,8,9,10,11,-1,7,2,1,6,-1}, 20);
IndexedFaceSet538.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,7,2,1,6,-1}, 20);
CColor& Color539 =  CColor();
Color539.setColor(new float[]{0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331}, 15);
IndexedFaceSet538.setColor(&Color539);

TextureCoordinate& TextureCoordinate540 =  TextureCoordinate();
TextureCoordinate540.setPoint(new float[]{0,0,1,0,0.997594,0.991433,8.89471e-7,0.991433,0,0,8.89471e-7,0.991433,0,0,8.89471e-7,0.991433,1,0,0,0,8.89471e-7,0.991433,0.997594,0.991433,1,0,0.997594,0.991433,1,0,0.997594,0.991433}, 32);
IndexedFaceSet538.setTexCoord(&TextureCoordinate540);

Coordinate& Coordinate541 =  Coordinate();
Coordinate541.setPoint(new float[]{10.0713,8.93162,10.0713,10.0713,8.93162,-10.0713,10.0713,10,-10.0713,10.0713,10,10.0713,-10.0713,8.93162,10.0713,-10.0713,10,10.0713,-10.0713,8.93162,-10.0713,-10.0713,10,-10.0713}, 24);
IndexedFaceSet538.setCoord(&Coordinate541);

Shape534.setGeometry(&IndexedFaceSet538);

Transform533.addChild(&Shape534);

Transform523.addChild(&Transform533);

Transform& Transform542 =  Transform();
Transform542.setTranslation(new float[]{27.1521,11.8861,118.334});
Transform542.setRotation(new float[]{0.00000303633,1,-0.00000260908,3.20191});
Transform542.setScale(new float[]{0.22077,1.18861,0.207314});
Shape& Shape543 =  Shape();
Appearance& Appearance544 =  Appearance();
Material& Material545 =  Material();
Material545.setAmbientIntensity(0.433333);
Material545.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance544.addChild(&Material545);

ImageTexture& ImageTexture546 =  ImageTexture();
ImageTexture546.setUSE(CString("_10"));
Appearance544.addChild(&ImageTexture546);

TextureTransform& TextureTransform547 =  TextureTransform();
TextureTransform547.setScale(new float[]{1.0139,2.19655});
Appearance544.setTextureTransform(TextureTransform547);

Shape543.addChild(&Appearance544);

IndexedFaceSet& IndexedFaceSet548 =  IndexedFaceSet();
IndexedFaceSet548.setCreaseAngle(0.5);
IndexedFaceSet548.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 25);
IndexedFaceSet548.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,1,7,5,3,-1}, 25);
TextureCoordinate& TextureCoordinate549 =  TextureCoordinate();
TextureCoordinate549.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet548.setTexCoord(&TextureCoordinate549);

Coordinate& Coordinate550 =  Coordinate();
Coordinate550.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10,-10,10,-10,-10,-10,-10}, 24);
IndexedFaceSet548.setCoord(&Coordinate550);

Shape543.setGeometry(&IndexedFaceSet548);

Transform542.addChild(&Shape543);

Transform523.addChild(&Transform542);

Transform518.addChild(&Transform523);

Transform517.addChild(&Transform518);

Transform& Transform551 =  Transform();
Transform551.setDEF(CString("vSens"));
Transform551.setTranslation(new float[]{26.6755,13.1165,119.625});
Transform551.setScale(new float[]{5.67193,27.0072,5.67193});
VisibilitySensor& VisibilitySensor552 =  VisibilitySensor();
VisibilitySensor552.setDEF(CString("_21"));
VisibilitySensor552.setSize(new float[]{1,1,1});
Transform551.addChild(&VisibilitySensor552);

Transform517.addChild(&Transform551);

LOD516.addChildren(&Transform517);

Transform& Transform553 =  Transform();
Transform553.setDEF(CString("lift2_1"));
Transform553.setCenter(new float[]{26.7826,11.8861,119.411});
Group& Group554 =  Group();
Group& Group555 =  Group();
Group555.setDEF(CString("UnnamedAnimation1"));
TimeSensor& TimeSensor556 =  TimeSensor();
TimeSensor556.setDEF(CString("Time_1"));
TimeSensor556.setCycleInterval(30);
TimeSensor556.setLoop(True);
TimeSensor556.setStopTime(1);
Group555.addChild(&TimeSensor556);

Group554.addChild(&Group555);

Transform553.addChild(&Group554);

Transform& Transform557 =  Transform();
Transform557.setTranslation(new float[]{-27.3288,-9.53674e-7,11.4885});
Transform557.setRotation(new float[]{0,1,0,0.26526});
Transform557.setScale(new float[]{0.881178,1,1});
Transform& Transform558 =  Transform();
Transform558.setTranslation(new float[]{27.1521,11.8861,118.334});
Transform558.setRotation(new float[]{0.00000303633,1,-0.00000260908,3.20191});
Transform558.setScale(new float[]{0.22077,1.18861,0.207314});
Shape& Shape559 =  Shape();
Appearance& Appearance560 =  Appearance();
Material& Material561 =  Material();
Material561.setDEF(CString("_22"));
Material561.setAmbientIntensity(0.358095);
Material561.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance560.addChild(&Material561);

ImageTexture& ImageTexture562 =  ImageTexture();
ImageTexture562.setUSE(CString("_9"));
Appearance560.addChild(&ImageTexture562);

Shape559.addChild(&Appearance560);

IndexedFaceSet& IndexedFaceSet563 =  IndexedFaceSet();
IndexedFaceSet563.setCreaseAngle(0.5);
IndexedFaceSet563.setColorIndex(new int[]{0,0,1,-1,0,0,1,-1,0,1,0,-1,0,0,1,-1}, 16);
IndexedFaceSet563.setTexCoordIndex(new int32_t[]{1,2,5,-1,2,3,5,-1,0,4,3,-1,0,1,4,-1}, 16);
IndexedFaceSet563.setCoordIndex(new int32_t[]{1,2,4,-1,2,3,4,-1,0,4,3,-1,0,1,4,-1}, 16);
CColor& Color564 =  CColor();
Color564.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet563.setColor(&Color564);

TextureCoordinate& TextureCoordinate565 =  TextureCoordinate();
TextureCoordinate565.setPoint(new float[]{0,1,0,0,1,0,1,1,0.5,0.5,0.5,0.5}, 12);
IndexedFaceSet563.setTexCoord(&TextureCoordinate565);

Coordinate& Coordinate566 =  Coordinate();
Coordinate566.setPoint(new float[]{-10.0713,10,-10.0713,-10.0713,10,10.0713,10.0713,10,10.0713,10.0713,10,-10.0713,-3.07561e-7,10,3.07561e-7}, 15);
IndexedFaceSet563.setCoord(&Coordinate566);

Shape559.setGeometry(&IndexedFaceSet563);

Transform558.addChild(&Shape559);

Transform557.addChild(&Transform558);

Transform& Transform567 =  Transform();
Transform567.setTranslation(new float[]{27.1521,11.8861,118.334});
Transform567.setRotation(new float[]{0.00000303633,1,-0.00000260908,3.20191});
Transform567.setScale(new float[]{0.22077,1.18861,0.207314});
Shape& Shape568 =  Shape();
Appearance& Appearance569 =  Appearance();
Material& Material570 =  Material();
Material570.setUSE(CString("_22"));
Appearance569.addChild(&Material570);

ImageTexture& ImageTexture571 =  ImageTexture();
ImageTexture571.setUSE(CString("_8"));
Appearance569.addChild(&ImageTexture571);

Shape568.addChild(&Appearance569);

IndexedFaceSet& IndexedFaceSet572 =  IndexedFaceSet();
IndexedFaceSet572.setCreaseAngle(0.5);
IndexedFaceSet572.setColorIndex(new int[]{0,1,2,2,-1,3,0,2,2,-1,4,3,2,2,-1,2,2,1,4,-1}, 20);
IndexedFaceSet572.setTexCoordIndex(new int32_t[]{0,14,15,3,-1,4,12,13,5,-1,8,9,10,11,-1,7,2,1,6,-1}, 20);
IndexedFaceSet572.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,7,2,1,6,-1}, 20);
CColor& Color573 =  CColor();
Color573.setColor(new float[]{0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331,0,0.446809,0.132331}, 15);
IndexedFaceSet572.setColor(&Color573);

TextureCoordinate& TextureCoordinate574 =  TextureCoordinate();
TextureCoordinate574.setPoint(new float[]{0,0,1,0,0.997594,0.991433,8.89471e-7,0.991433,0,0,8.89471e-7,0.991433,0,0,8.89471e-7,0.991433,1,0,0,0,8.89471e-7,0.991433,0.997594,0.991433,1,0,0.997594,0.991433,1,0,0.997594,0.991433}, 32);
IndexedFaceSet572.setTexCoord(&TextureCoordinate574);

Coordinate& Coordinate575 =  Coordinate();
Coordinate575.setPoint(new float[]{10.0713,8.93162,10.0713,10.0713,8.93162,-10.0713,10.0713,10,-10.0713,10.0713,10,10.0713,-10.0713,8.93162,10.0713,-10.0713,10,10.0713,-10.0713,8.93162,-10.0713,-10.0713,10,-10.0713}, 24);
IndexedFaceSet572.setCoord(&Coordinate575);

Shape568.setGeometry(&IndexedFaceSet572);

Transform567.addChild(&Shape568);

Transform557.addChild(&Transform567);

Transform& Transform576 =  Transform();
Transform576.setTranslation(new float[]{27.1521,11.8861,118.334});
Transform576.setRotation(new float[]{0.00000303633,1,-0.00000260908,3.20191});
Transform576.setScale(new float[]{0.22077,1.18861,0.207314});
Shape& Shape577 =  Shape();
Appearance& Appearance578 =  Appearance();
Material& Material579 =  Material();
Material579.setAmbientIntensity(0.433333);
Material579.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance578.addChild(&Material579);

ImageTexture& ImageTexture580 =  ImageTexture();
ImageTexture580.setUSE(CString("_10"));
Appearance578.addChild(&ImageTexture580);

TextureTransform& TextureTransform581 =  TextureTransform();
TextureTransform581.setScale(new float[]{1.0139,2.19655});
Appearance578.setTextureTransform(TextureTransform581);

Shape577.addChild(&Appearance578);

IndexedFaceSet& IndexedFaceSet582 =  IndexedFaceSet();
IndexedFaceSet582.setCreaseAngle(0.5);
IndexedFaceSet582.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 25);
IndexedFaceSet582.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,1,7,5,3,-1}, 25);
TextureCoordinate& TextureCoordinate583 =  TextureCoordinate();
TextureCoordinate583.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet582.setTexCoord(&TextureCoordinate583);

Coordinate& Coordinate584 =  Coordinate();
Coordinate584.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10,-10,10,-10,-10,-10,-10}, 24);
IndexedFaceSet582.setCoord(&Coordinate584);

Shape577.setGeometry(&IndexedFaceSet582);

Transform576.addChild(&Shape577);

Transform557.addChild(&Transform576);

Transform553.addChild(&Transform557);

LOD516.addChildren(&Transform553);

Transform515.addChild(&LOD516);

Transform514.addChild(&Transform515);

Transform513.addChild(&Transform514);

Transform& Transform585 =  Transform();
Transform585.setDEF(CString("b3_indio"));
Transform585.setTranslation(new float[]{7.70298,20.9728,122.278});
Transform585.setRotation(new float[]{0,1,0,2.9289});
Transform585.setScale(new float[]{1,0.999999,1});
Inline& Inline586 =  Inline();
Inline586.setUrl(new CString[]{CString("indio_wurf.x3d")}, 1);
Inline586.setBboxSize(new float[]{1.15579,9.73061,9.37082});
Inline586.setBboxCenter(new float[]{0.00164762,-1.36784,-1.49606});
Transform585.addChild(&Inline586);

Transform513.addChild(&Transform585);

Transform& Transform587 =  Transform();
Transform587.setDEF(CString("b3-jump_platform"));
Transform& Transform588 =  Transform();
Transform588.setDEF(CString("jp1"));
Transform588.setTranslation(new float[]{0,-21.7267,-2.71599});
Transform588.setCenter(new float[]{18.0618,21.0385,119.846});
Group& Group589 =  Group();
Group& Group590 =  Group();
Group590.setDEF(CString("jump_platform_anim"));
TimeSensor& TimeSensor591 =  TimeSensor();
TimeSensor591.setDEF(CString("Time_2"));
TimeSensor591.setCycleInterval(16);
TimeSensor591.setStopTime(1);
Group590.addChild(&TimeSensor591);

Group589.addChild(&Group590);

PositionInterpolator& PositionInterpolator592 =  PositionInterpolator();
PositionInterpolator592.setDEF(CString("jp1TranslationInterp"));
PositionInterpolator592.setKey(new float[]{0,0.0125,0.125,0.73125,0.90625,1}, 6);
PositionInterpolator592.setKeyValue(new float[]{0,-21.7267,-2.71599,0,-21.7267,-2.71599,-0.0254707,0.0197601,-0.231201,-0.0254707,0.0197601,-0.231201,0,-21.7267,-2.71599,0,-21.7267,-2.71599}, 18);
Group589.addChild(&PositionInterpolator592);

Transform588.addChild(&Group589);

Transform& Transform593 =  Transform();
Transform593.setTranslation(new float[]{18.0046,19.6348,119.757});
Transform593.setRotation(new float[]{0,1,0,2.79426});
Transform593.setScale(new float[]{1,0.999999,1});
Inline& Inline594 =  Inline();
Inline594.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline594.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline594.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform593.addChild(&Inline594);

Transform588.addChild(&Transform593);

Transform587.addChild(&Transform588);

Transform& Transform595 =  Transform();
Transform595.setDEF(CString("jp2"));
Transform595.setTranslation(new float[]{0,-20.821,0});
Transform595.setCenter(new float[]{15.6873,20.1328,118.993});
Group& Group596 =  Group();
Group& Group597 =  Group();
Group597.setUSE(CString("jump_platform_anim"));
Group596.addChild(&Group597);

PositionInterpolator& PositionInterpolator598 =  PositionInterpolator();
PositionInterpolator598.setDEF(CString("jp2TranslationInterp"));
PositionInterpolator598.setKey(new float[]{0,0.0375,0.15,0.75,0.91875,1}, 6);
PositionInterpolator598.setKeyValue(new float[]{0,-20.821,0,0,-20.821,0,0,-0.0310459,0,0,-0.0310459,0,0,-20.821,0,0,-20.821,0}, 18);
Group596.addChild(&PositionInterpolator598);

Transform595.addChild(&Group596);

Transform& Transform599 =  Transform();
Transform599.setTranslation(new float[]{15.5849,18.7291,119.021});
Transform599.setRotation(new float[]{0,1,0,4.05249});
Transform599.setScale(new float[]{1,0.999999,1});
Inline& Inline600 =  Inline();
Inline600.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline600.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline600.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform599.addChild(&Inline600);

Transform595.addChild(&Transform599);

Transform587.addChild(&Transform595);

Transform& Transform601 =  Transform();
Transform601.setDEF(CString("jp3"));
Transform601.setTranslation(new float[]{0.851343,-19.6903,-2.54462});
Transform601.setCenter(new float[]{12.6919,19.0021,118.568});
Group& Group602 =  Group();
Group& Group603 =  Group();
Group603.setUSE(CString("jump_platform_anim"));
Group602.addChild(&Group603);

PositionInterpolator& PositionInterpolator604 =  PositionInterpolator();
PositionInterpolator604.setDEF(CString("jp3TranslationInterp"));
PositionInterpolator604.setKey(new float[]{0,0.0625,0.175,0.76875,0.93125,1}, 6);
PositionInterpolator604.setKeyValue(new float[]{0.851343,-19.6903,-2.54462,0.851343,-19.6903,-2.54462,0.11757,0.361732,0.0751266,0.11757,0.361732,0.0751266,0.851343,-19.6903,-2.54462,0.851343,-19.6903,-2.54462}, 18);
Group602.addChild(&PositionInterpolator604);

Transform601.addChild(&Group602);

Transform& Transform605 =  Transform();
Transform605.setTranslation(new float[]{12.6109,17.5984,118.637});
Transform605.setRotation(new float[]{0,1,0,4.495});
Transform605.setScale(new float[]{1,0.999998,1});
Inline& Inline606 =  Inline();
Inline606.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline606.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline606.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform605.addChild(&Inline606);

Transform601.addChild(&Transform605);

Transform587.addChild(&Transform601);

Transform& Transform607 =  Transform();
Transform607.setDEF(CString("jp4"));
Transform607.setTranslation(new float[]{0,-19.0444,0});
Transform607.setCenter(new float[]{3.78782,18.3562,117.343});
Group& Group608 =  Group();
Group& Group609 =  Group();
Group609.setUSE(CString("jump_platform_anim"));
Group608.addChild(&Group609);

PositionInterpolator& PositionInterpolator610 =  PositionInterpolator();
PositionInterpolator610.setDEF(CString("jp4TranslationInterp"));
PositionInterpolator610.setKey(new float[]{0,0.0875,0.2,0.7875,0.94375,1}, 6);
PositionInterpolator610.setKeyValue(new float[]{0,-19.0444,0,0,-19.0444,0,0,-0.360624,0,0,-0.360624,0,0,-19.0444,0,0,-19.0444,0}, 18);
Group608.addChild(&PositionInterpolator610);

Transform607.addChild(&Group608);

Transform& Transform611 =  Transform();
Transform611.setTranslation(new float[]{3.83,16.9525,117.44});
Transform611.setRotation(new float[]{0,-1,0,0.508924});
Transform611.setScale(new float[]{1,0.999998,1});
Inline& Inline612 =  Inline();
Inline612.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline612.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline612.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform611.addChild(&Inline612);

Transform607.addChild(&Transform611);

Transform587.addChild(&Transform607);

Transform& Transform613 =  Transform();
Transform613.setDEF(CString("jp5"));
Transform613.setTranslation(new float[]{0,-18.6498,0});
Transform613.setCenter(new float[]{4.12029,17.9616,114.799});
Group& Group614 =  Group();
Group& Group615 =  Group();
Group615.setUSE(CString("jump_platform_anim"));
Group614.addChild(&Group615);

PositionInterpolator& PositionInterpolator616 =  PositionInterpolator();
PositionInterpolator616.setDEF(CString("jp5TranslationInterp"));
PositionInterpolator616.setKey(new float[]{0,0.1125,0.225,0.80625,0.95625,1}, 6);
PositionInterpolator616.setKeyValue(new float[]{0,-18.6498,0,0,-18.6498,0,0,-0.501989,0,0,-0.501989,0,0,-18.6498,0,0,-18.6498,0}, 18);
Group614.addChild(&PositionInterpolator616);

Transform613.addChild(&Group614);

Transform& Transform617 =  Transform();
Transform617.setTranslation(new float[]{4.01613,16.5579,114.818});
Transform617.setRotation(new float[]{0,1,0,3.97879});
Transform617.setScale(new float[]{1,0.999997,1});
Inline& Inline618 =  Inline();
Inline618.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline618.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline618.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform617.addChild(&Inline618);

Transform613.addChild(&Transform617);

Transform587.addChild(&Transform613);

Transform& Transform619 =  Transform();
Transform619.setDEF(CString("jp6"));
Transform619.setTranslation(new float[]{0,-18.0285,0});
Transform619.setCenter(new float[]{2.02326,17.3403,113.134});
Group& Group620 =  Group();
Group& Group621 =  Group();
Group621.setUSE(CString("jump_platform_anim"));
Group620.addChild(&Group621);

PositionInterpolator& PositionInterpolator622 =  PositionInterpolator();
PositionInterpolator622.setDEF(CString("jp6TranslationInterp"));
PositionInterpolator622.setKey(new float[]{0,0.1375,0.25,0.825,0.96875,1}, 6);
PositionInterpolator622.setKeyValue(new float[]{0,-18.0285,0,0,-18.0285,0,0,-0.448267,0,0,-0.448267,0,0,-18.0285,0,0,-18.0285,0}, 18);
Group620.addChild(&PositionInterpolator622);

Transform619.addChild(&Group620);

Transform& Transform623 =  Transform();
Transform623.setTranslation(new float[]{2.05027,15.9367,113.031});
Transform623.setRotation(new float[]{0,1,0,1.96552});
Transform623.setScale(new float[]{1,0.999997,1});
Inline& Inline624 =  Inline();
Inline624.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline624.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline624.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform623.addChild(&Inline624);

Transform619.addChild(&Transform623);

Transform587.addChild(&Transform619);

Transform& Transform625 =  Transform();
Transform625.setDEF(CString("jp7"));
Transform625.setTranslation(new float[]{0,-17.416,0});
Transform625.setCenter(new float[]{-0.0539,16.7278,114.496});
Group& Group626 =  Group();
Group& Group627 =  Group();
Group627.setUSE(CString("jump_platform_anim"));
Group626.addChild(&Group627);

PositionInterpolator& PositionInterpolator628 =  PositionInterpolator();
PositionInterpolator628.setDEF(CString("jp7TranslationInterp"));
PositionInterpolator628.setKey(new float[]{0,0.1625,0.275,0.84375,0.98125,1}, 6);
PositionInterpolator628.setKeyValue(new float[]{0,-17.416,0,0,-17.416,0,0,-0.495193,0,0,-0.495193,0,0,-17.416,0,0,-17.416,0}, 18);
Group626.addChild(&PositionInterpolator628);

Transform625.addChild(&Group626);

Transform& Transform629 =  Transform();
Transform629.setTranslation(new float[]{-0.0801978,15.3241,114.598});
Transform629.setRotation(new float[]{0,-1,0,1.16914});
Transform629.setScale(new float[]{1,0.999997,1});
Inline& Inline630 =  Inline();
Inline630.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline630.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline630.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform629.addChild(&Inline630);

Transform625.addChild(&Transform629);

Transform587.addChild(&Transform625);

Transform& Transform631 =  Transform();
Transform631.setDEF(CString("jp8"));
Transform631.setTranslation(new float[]{0,-16.6605,0});
Transform631.setCenter(new float[]{-2.07358,15.9722,116.344});
Group& Group632 =  Group();
Group& Group633 =  Group();
Group633.setUSE(CString("jump_platform_anim"));
Group632.addChild(&Group633);

PositionInterpolator& PositionInterpolator634 =  PositionInterpolator();
PositionInterpolator634.setDEF(CString("jp8TranslationInterp"));
PositionInterpolator634.setKey(new float[]{0,0.1875,0.3,0.8625,0.99375,1}, 6);
PositionInterpolator634.setKeyValue(new float[]{0,-16.6605,0,0,-16.6605,0,0,-0.617318,0,0,-0.617318,0,0,-16.6605,0,0,-16.6605,0}, 18);
Group632.addChild(&PositionInterpolator634);

Transform631.addChild(&Group632);

Transform& Transform635 =  Transform();
Transform635.setTranslation(new float[]{-2.17952,14.5686,116.346});
Transform635.setRotation(new float[]{0,1,0,3.81517});
Transform635.setScale(new float[]{1,0.999997,1});
Inline& Inline636 =  Inline();
Inline636.setUrl(new CString[]{CString("jump_pf.x3d")}, 1);
Inline636.setBboxSize(new float[]{4.40433,5.41358,4.59533});
Inline636.setBboxCenter(new float[]{-0.0841987,1.40367,-0.0643344});
Transform635.addChild(&Inline636);

Transform631.addChild(&Transform635);

Transform587.addChild(&Transform631);

Transform& Transform637 =  Transform();
Transform637.setDEF(CString("switchShape"));
Transform637.setTranslation(new float[]{17.0488,19.9627,121.675});
Transform637.setRotation(new float[]{0.595374,0.595373,-0.539501,4.13109});
Transform637.setScale(new float[]{0.649759,0.230878,0.215001});
TouchSensor& TouchSensor638 =  TouchSensor();
TouchSensor638.setDEF(CString("touchSensorTrigger"));
Transform637.addChild(&TouchSensor638);

Shape& Shape639 =  Shape();
Appearance& Appearance640 =  Appearance();
Material& Material641 =  Material();
Material641.setAmbientIntensity(0.25);
Material641.setDiffuseColor(new float[]{0.62178,0.0209168,0.880181});
Material641.setSpecularColor(new float[]{0.0877258,0.0694377,0.0955906});
Material641.setShininess(0.078125);
Appearance640.addChild(&Material641);

Shape639.addChild(&Appearance640);

Box& Box642 =  Box();
Box642.setSize(new float[]{0.669806,0.669795,0.669812});
Shape639.setGeometry(&Box642);

Transform637.addChild(&Shape639);

Transform587.addChild(&Transform637);

Transform513.addChild(&Transform587);

Transform& Transform643 =  Transform();
Transform643.setDEF(CString("b3_lift2"));
Transform643.setTranslation(new float[]{0,0.803294,0});
Transform643.setScale(new float[]{1,2.77927,1});
Transform643.setCenter(new float[]{2.69941,4.47007,100.242});
Group& Group644 =  Group();
Group& Group645 =  Group();
Group645.setDEF(CString("lift1"));
TimeSensor& TimeSensor646 =  TimeSensor();
TimeSensor646.setDEF(CString("Time_3"));
TimeSensor646.setCycleInterval(20);
TimeSensor646.setLoop(True);
TimeSensor646.setStopTime(1);
Group645.addChild(&TimeSensor646);

Group644.addChild(&Group645);

PositionInterpolator& PositionInterpolator647 =  PositionInterpolator();
PositionInterpolator647.setDEF(CString("UnnamedTransformTranslationInterp"));
PositionInterpolator647.setKey(new float[]{0,0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.3,0.305294,0.310588,0.315882,0.321176,0.326471,0.331765,0.337059,0.342353,0.347647,0.352941,0.358235,0.363529,0.368823,0.374118,0.379412,0.384706,0.39,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.995,1}, 188);
PositionInterpolator647.setKeyValue(new float[]{0,0.803294,0,0,0.81124,0,0,0.833406,0,0,0.867281,0,0,0.910357,0,0,0.960125,0,0,1.01408,0,0,1.0697,0,0,1.12448,0,0,1.17592,0,0,1.22151,0,0,1.25873,0,0,1.28508,0,0,1.29804,0,0,1.29512,0,0,1.27379,0,0,1.23155,0,0,1.16589,0,0,1.0743,0,0,0.95427,0,0,0.803294,0,0,0.629575,0,0,0.443399,0,0,0.245379,0,0,0.0361276,0,0,-0.183743,0,0,-0.413619,0,0,-0.652888,0,0,-0.900939,0,0,-1.15716,0,0,-1.42093,0,0,-1.69165,0,0,-1.9687,0,0,-2.25146,0,0,-2.53933,0,0,-2.8317,0,0,-3.12794,0,0,-3.42745,0,0,-3.72961,0,0,-4.03382,0,0,-4.33946,0,0,-4.64591,0,0,-4.95257,0,0,-5.25882,0,0,-5.56405,0,0,-5.86764,0,0,-6.16899,0,0,-6.46748,0,0,-6.7625,0,0,-7.05343,0,0,-7.33967,0,0,-7.6206,0,0,-7.89561,0,0,-7.89561,0,0,-8.13613,0,0,-8.39847,0,0,-8.68053,0,0,-8.98018,0,0,-9.29533,0,0,-9.62385,0,0,-9.96364,0,0,-10.3126,0,0,-10.6686,0,0,-11.0295,0,0,-11.3932,0,0,-11.7576,0,0,-12.1206,0,0,-12.4801,0,0,-12.834,0,0,-13.1801,0,0,-13.5164,0,0,-13.5164,0,0,-13.7437,0,0,-14.0274,0,0,-14.3566,0,0,-14.7205,0,0,-15.1081,0,0,-15.5084,0,0,-15.9107,0,0,-16.3039,0,0,-16.6772,0,0,-17.0197,0,0,-17.3204,0,0,-17.5684,0,0,-17.7529,0,0,-17.8629,0,0,-17.8876,0,0,-17.8159,0,0,-17.6912,0,0,-17.564,0,0,-17.4344,0,0,-17.3024,0,0,-17.1681,0,0,-17.0314,0,0,-16.8924,0,0,-16.7512,0,0,-16.6078,0,0,-16.4622,0,0,-16.3145,0,0,-16.1647,0,0,-16.0128,0,0,-15.8589,0,0,-15.703,0,0,-15.5452,0,0,-15.3855,0,0,-15.2239,0,0,-15.0604,0,0,-14.8952,0,0,-14.7282,0,0,-14.5595,0,0,-14.3891,0,0,-14.2171,0,0,-14.0435,0,0,-13.8683,0,0,-13.6915,0,0,-13.5133,0,0,-13.3336,0,0,-13.1525,0,0,-12.97,0,0,-12.7862,0,0,-12.6011,0,0,-12.4147,0,0,-12.227,0,0,-12.0382,0,0,-11.8483,0,0,-11.6572,0,0,-11.465,0,0,-11.2718,0,0,-11.0776,0,0,-10.8824,0,0,-10.6863,0,0,-10.4893,0,0,-10.2914,0,0,-10.0927,0,0,-9.89328,0,0,-9.69309,0,0,-9.4922,0,0,-9.29064,0,0,-9.08846,0,0,-8.88568,0,0,-8.68235,0,0,-8.47851,0,0,-8.27419,0,0,-8.06943,0,0,-7.86427,0,0,-7.65875,0,0,-7.4529,0,0,-7.24676,0,0,-7.04037,0,0,-6.83377,0,0,-6.62699,0,0,-6.42007,0,0,-6.21305,0,0,-6.00597,0,0,-5.79887,0,0,-5.59178,0,0,-5.38474,0,0,-5.17778,0,0,-4.97095,0,0,-4.76429,0,0,-4.55782,0,0,-4.35159,0,0,-4.14564,0,0,-3.94,0,0,-3.73472,0,0,-3.52983,0,0,-3.32535,0,0,-3.12135,0,0,-2.91785,0,0,-2.71488,0,0,-2.51249,0,0,-2.31072,0,0,-2.10961,0,0,-1.90917,0,0,-1.70947,0,0,-1.51054,0,0,-1.31241,0,0,-1.11511,0,0,-0.918699,0,0,-0.723202,0,0,-0.528658,0,0,-0.335108,0,0,-0.142584,0,0,0.0488721,0,0,0.239223,0,0,0.428433,0,0,0.616461,0,0,0.803294,0}, 564);
Group644.addChild(&PositionInterpolator647);

Transform643.addChild(&Group644);

Transform& Transform648 =  Transform();
Transform648.setDEF(CString("lift1_1"));
Transform& Transform649 =  Transform();
Transform649.setTranslation(new float[]{2.69941,4.47007,100.242});
Transform649.setRotation(new float[]{-3.81553e-13,-1,4.89988e-13,0.822025});
Transform649.setScale(new float[]{0.243262,0.446942,0.204023});
Shape& Shape650 =  Shape();
Appearance& Appearance651 =  Appearance();
Material& Material652 =  Material();
Material652.setAmbientIntensity(0.433333);
Material652.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance651.addChild(&Material652);

ImageTexture& ImageTexture653 =  ImageTexture();
ImageTexture653.setUSE(CString("_10"));
Appearance651.addChild(&ImageTexture653);

TextureTransform& TextureTransform654 =  TextureTransform();
TextureTransform654.setScale(new float[]{1.04228,2.97605});
Appearance651.setTextureTransform(TextureTransform654);

Shape650.addChild(&Appearance651);

Box& Box655 =  Box();
Box655.setSize(new float[]{20,20,20});
Shape650.setGeometry(&Box655);

Transform649.addChild(&Shape650);

Transform648.addChild(&Transform649);

Transform643.addChild(&Transform648);

Transform513.addChild(&Transform643);

Transform& Transform656 =  Transform();
Transform656.setDEF(CString("indio"));
Transform656.setTranslation(new float[]{-6.55596,16.9613,113.425});
Transform656.setRotation(new float[]{0,1,0,2.27248});
Inline& Inline657 =  Inline();
Inline657.setUrl(new CString[]{CString("indio_wurf.x3d")}, 1);
Inline657.setBboxSize(new float[]{1.15579,9.73061,9.37082});
Inline657.setBboxCenter(new float[]{0.00164762,-1.36784,-1.49606});
Transform656.addChild(&Inline657);

Transform513.addChild(&Transform656);

Transform424.addChild(&Transform513);

Transform& Transform658 =  Transform();
Transform658.setDEF(CString("b3_deco"));
Transform& Transform659 =  Transform();
Transform659.setTranslation(new float[]{-59.6405,-17.04,-128.252});
Transform& Transform660 =  Transform();
Transform660.setUSE(CString("_13"));
Transform659.addChild(&Transform660);

Transform658.addChild(&Transform659);

Transform424.addChild(&Transform658);

Transform241.addChild(&Transform424);

Transform& Transform661 =  Transform();
Transform661.setDEF(CString("b4"));
Transform& Transform662 =  Transform();
Transform662.setDEF(CString("b4_walls"));
Transform& Transform663 =  Transform();
Transform663.setDEF(CString("b4_fels"));
Transform663.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform663.setScale(new float[]{0.998231,0.998231,0.998232});
Transform663.setScaleOrientation(new float[]{5.05364e-8,3.55869e-8,1,3.92699});
Shape& Shape664 =  Shape();
Appearance& Appearance665 =  Appearance();
Material& Material666 =  Material();
Material666.setUSE(CString("_18"));
Appearance665.addChild(&Material666);

ImageTexture& ImageTexture667 =  ImageTexture();
ImageTexture667.setUSE(CString("_10"));
Appearance665.addChild(&ImageTexture667);

Shape664.addChild(&Appearance665);

IndexedFaceSet& IndexedFaceSet668 =  IndexedFaceSet();
IndexedFaceSet668.setCreaseAngle(3.14159);
IndexedFaceSet668.setColorIndex(new int[]{0,0,0,0,-1,0,0,0,0,-1,0,3,4,0,0,-1,0,0,6,6,0,-1,3,0,6,-1,3,6,6,-1,0,6,6,6,-1,3,3,4,3,-1,6,3,6,-1,3,6,5,3,-1,3,3,6,5,-1,0,6,3,5,-1,8,0,0,0,-1,0,7,0,8,-1,0,6,0,6,-1,6,0,7,0,-1,0,0,0,0,-1,0,0,7,0,-1,0,7,0,0,-1,9,0,0,-1,6,0,9,-1,9,0,0,-1,9,0,0,-1,7,0,7,-1,7,7,7,-1,7,2,2,-1,7,3,7,-1,0,0,0,0,-1,7,0,0,-1,7,7,1,-1,7,7,0,-1,7,2,7,-1,7,1,1,-1,0,6,6,0,-1,8,0,0,7,-1,0,7,0,0,-1,7,0,0,8,-1,0,0,7,6,-1,0,6,7,-1,7,6,7,-1,7,6,0,-1,5,9,0,-1,5,6,9,-1,0,0,0,-1,0,9,0,-1,0,7,21,-1,7,0,24,21,-1,6,18,22,6,-1,6,23,24,0,-1,18,6,0,20,-1,39,0,19,37,-1,20,20,25,25,-1,25,25,23,23,-1,7,40,34,-1,7,7,40,-1,7,34,6,-1,36,41,0,0,-1,40,7,0,42,-1,36,0,6,35,-1,23,23,38,-1,23,19,38,-1}, 278);
IndexedFaceSet668.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,3,4,5,0,-1,8,6,7,1,0,-1,0,5,13,9,8,-1,6,8,9,-1,6,9,10,-1,5,11,12,13,-1,39,38,7,6,-1,16,6,10,-1,6,16,40,39,-1,38,39,15,14,-1,17,15,39,40,-1,49,48,20,21,-1,21,23,46,49,-1,17,45,27,15,-1,44,51,50,41,-1,28,33,43,42,-1,28,41,50,33,-1,31,29,41,28,-1,30,31,28,-1,15,27,30,-1,30,27,32,-1,30,32,31,-1,34,33,50,-1,61,62,63,-1,57,58,59,-1,61,60,62,-1,35,47,43,33,-1,34,35,33,-1,53,54,55,-1,34,36,35,-1,57,59,56,-1,54,52,55,-1,51,44,45,24,-1,49,46,22,18,-1,35,18,22,47,-1,18,19,48,49,-1,24,19,18,26,-1,35,26,18,-1,37,26,36,-1,36,26,35,-1,14,30,25,-1,14,15,30,-1,42,25,28,-1,25,30,28,-1,41,29,75,-1,29,27,78,75,-1,44,72,76,45,-1,45,77,78,27,-1,72,44,41,74,-1,93,0,73,91,-1,74,74,79,79,-1,79,79,77,77,-1,37,94,88,-1,37,50,94,-1,37,88,26,-1,90,95,51,24,-1,94,50,51,96,-1,90,24,26,89,-1,77,77,92,-1,77,73,92,-1}, 278);
IndexedFaceSet668.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,4,5,0,-1,6,7,8,1,0,-1,0,5,9,10,6,-1,7,6,10,-1,7,10,11,-1,5,12,13,9,-1,15,14,8,7,-1,16,7,11,-1,7,16,17,15,-1,14,15,19,18,-1,20,19,15,17,-1,21,22,23,24,-1,24,26,25,21,-1,20,27,28,19,-1,29,30,31,32,-1,36,35,34,33,-1,36,32,31,35,-1,38,37,32,36,-1,39,38,36,-1,19,28,39,-1,39,28,41,-1,39,41,38,-1,42,35,31,-1,37,42,31,-1,42,38,41,-1,37,38,42,-1,44,43,34,35,-1,42,44,35,-1,45,46,28,-1,42,46,44,-1,42,41,46,-1,46,41,28,-1,30,29,27,47,-1,21,25,49,48,-1,44,48,49,43,-1,48,50,22,21,-1,47,50,48,51,-1,44,51,48,-1,45,51,46,-1,46,51,44,-1,18,39,40,-1,18,19,39,-1,33,40,36,-1,40,39,36,-1,32,37,53,-1,37,28,55,53,-1,29,52,54,27,-1,27,54,55,28,-1,52,29,32,53,-1,59,52,53,58,-1,58,53,55,56,-1,56,55,54,57,-1,45,58,56,-1,45,31,58,-1,45,56,51,-1,57,59,30,47,-1,58,31,30,59,-1,57,47,51,56,-1,57,54,59,-1,54,52,59,-1}, 278);
CColor& Color669 =  CColor();
Color669.setColor(new float[]{0.957447,0.642839,0.0227095,0.40107,0.269282,0.00951288,0.181818,0.122074,0.0043125,0.417112,0.280053,0.00989339,0.16309,0.417112,0.0646339,0.385061,0.417112,0.00783197,0.0691136,0.0748663,0.00140573,0.347594,0.16832,0,0,0.347594,0.0191792,0.0588235,0.0284849,0,0.202255,0.159992,0.00459868,0.202255,0.159993,0.00459868,0.211416,0.16585,0.00481838,0.211416,0.16585,0.00481838,0.700256,0.478399,0.0165416,0.700256,0.478399,0.0165416,0.666107,0.456565,0.0157227,0.666107,0.456565,0.0157227,0.205335,0.161962,0.00467255,0.205335,0.161962,0.00467255,0.679829,0.465338,0.0160517,0.679829,0.465338,0.0160517,0.208375,0.163906,0.00474547,0.208375,0.163906,0.00474547,0.687744,0.470399,0.0162416,0.687744,0.470399,0.0162416,0.844912,0.570888,0.0200107,0.844912,0.570888,0.0200107,0.882494,0.584519,0.0199184,0.882494,0.584519,0.0199184,0.313102,0.230865,0.007257,0.313102,0.230865,0.007257,0.564008,0.336709,0.00805875,0.564008,0.336709,0.00805876,0.384216,0.260864,0.00748424,0.384216,0.260864,0.00748424,0.854487,0.57436,0.0199872,0.205335,0.161962,0.00467255,0.205335,0.161962,0.00467255,0.957447,0.642839,0.0227095,0.462308,0.293807,0.00773378,0.869177,0.579689,0.0199511,0.869177,0.579689,0.0199511}, 129);
IndexedFaceSet668.setColor(&Color669);

TextureCoordinate& TextureCoordinate670 =  TextureCoordinate();
TextureCoordinate670.setPoint(new float[]{2.69054,0.551528,2.69054,1.74744,2.80712,1.74744,2.83865,0.553696,2.82758,-0.0202014,2.69054,-0.0223701,1.76434,0.553696,1.76434,1.74961,2.28365,0.551527,2.17799,0.375066,1.99127,0.289433,2.53224,-0.0223702,2.50396,0.0254444,2.39813,0.204367,2.08294,1.78122,1.43943,0.526347,1.67549,-0.0202017,1.36235,0.0284658,1.04486,0.533382,0.967844,0.0358815,-0.000532313,0.0528249,0.0883154,0.626723,1.11081,1.72929,0.0883154,1.82263,1.71155,0.0168469,1.44525,1.71334,1.78589,0.497057,2.09321,0.473401,2.64672,0.780695,2.72381,0.499639,1.9909,0.910848,2.51297,0.718658,2.25727,0.720779,2.27755,0.807686,2.18775,0.761221,1.78589,0.761683,1.9926,0.730841,1.94638,0.499866,1.13567,1.75806,1.13567,0.562154,1.05368,0.0325178,2.43773,0.512163,2.14465,1.7039,1.79029,1.70442,2.72222,0.0189834,2.0175,-0.0156448,0.807043,1.7651,1.78589,1.69297,0.72327,0.0280694,0.807043,0.569189,2.44011,0.508508,2.36577,0.0282988,-0.202229,1.05009,0.999666,0.0609254,0.790125,1.05276,-0.163197,-0.0121762,0.328576,1.39305,1,0.966468,0.879746,0,0,0.0160471,-0.624405,0.606769,0.109448,-0.260322,0.12165,1.00048,0.375595,-0.262589,2.67958,0.0928998,2.67958,0.0928998,2.02963,0.0626954,2.02963,0.0626954,2.07129,0.331812,2.07129,0.331812,2.53103,0.350419,2.53103,0.350419,2.46105,0.0827441,2.46105,0.0827441,2.3463,0.342942,2.3463,0.342942,2.24534,0.0727198,2.24534,0.0727198,2.23973,0.338629,2.23973,0.338629,1.72097,0.0776804,1.72097,0.0776804,2.37491,0.0873184,2.37491,0.0873184,1.76547,0.365163,1.76547,0.365163,2.41373,0.3381,2.41373,0.3381,1.94921,0.357493,1.94921,0.357493,1.88757,0.0801359,2.46105,0.0827441,2.46105,0.0827441,2.69054,0.551528,2.15097,0.349069,2.14319,0.0839033,2.14319,0.0839033}, 194);
IndexedFaceSet668.setTexCoord(&TextureCoordinate670);

Coordinate& Coordinate671 =  Coordinate();
Coordinate671.setPoint(new float[]{0.712338,2.9476,-85.6094,0.712338,29.9257,-82.5429,3.02459,29.9257,-79.5161,7.13419,2.9476,-85.7219,6.91453,-9.99874,-80.4043,0.712342,-9.99874,-85.6094,-7.35719,2.9476,-90.1281,-14.1719,2.9476,-93.9442,-14.1719,29.9257,-90.8777,-5.08673,-4.88387,-88.8567,-9.45258,-1.03312,-91.3015,-13.1557,-2.9649,-92.6969,-2.42711,-9.99874,-89.699,-2.98798,-8.92011,-89.5214,-15.2923,29.0298,-103.291,-15.2923,2.05171,-106.358,-15.934,-9.99874,-93.967,-16.9185,-9.89616,-106.379,-9.26798,28.222,-110.219,-9.26798,1.24395,-113.286,-10.7966,-9.98756,-113.305,-21.8098,2.21041,-112.044,-23.4712,-9.9965,-112.065,-37.8259,-9.43805,-106.979,-36.0639,3.50828,-106.956,-21.8098,29.1885,-108.977,-36.0639,30.4864,-103.89,-4.94663,-10.7696,-118.409,-3.4451,0.26254,-118.389,9.02981,-9.98848,-118.679,9.10348,-9.99133,-121.558,10.5779,0.841536,-121.539,10.5306,0.923988,-118.66,-2.42493,28.0208,-115.256,-2.30957,27.8196,-122.282,7.35387,7.59057,-121.724,7.53248,7.19467,-117.872,9.06136,0.854451,-118.631,4.87981,5.7952,-117.984,-5.47415,10.1307,-117.982,-9.15262,28.0208,-117.245,-0.191238,5.84305,-118.077,5.57298,6.54238,-123.555,-2.39686,27.5613,-126.623,-2.39686,6.55281,-129.011,0.785985,0.64657,-127.69,1.70275,5.85705,-126.014,-3.87127,-10.2497,-129.709,-17.0932,1.40265,-122.717,-15.7854,28.3807,-115.905,-18.6207,-9.82027,-122.737,-2.39686,0.583197,-129.69,6.96715,-9.24024,-118.429,6.20442,-5.025,-118.506,2.38338,-9.26352,-118.576,3.90397,-4.9031,-118.632,3.52637,-4.63813,-127.524,2.14277,-9.08348,-127.702,6.60212,-5.01415,-124.798,7.03568,-9.30144,-124.231}, 180);
IndexedFaceSet668.setCoord(&Coordinate671);

Shape664.setGeometry(&IndexedFaceSet668);

Transform663.addChild(&Shape664);

Transform662.addChild(&Transform663);

Transform& Transform672 =  Transform();
Transform672.setDEF(CString("b4_grasrand"));
Transform672.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform672.setScale(new float[]{0.998231,0.998231,0.998232});
Transform672.setScaleOrientation(new float[]{7.99934e-8,2.5783e-8,1,4.71239});
Shape& Shape673 =  Shape();
Appearance& Appearance674 =  Appearance();
Material& Material675 =  Material();
Material675.setDEF(CString("_23"));
Material675.setAmbientIntensity(0.358095);
Material675.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance674.addChild(&Material675);

ImageTexture& ImageTexture676 =  ImageTexture();
ImageTexture676.setUSE(CString("_8"));
Appearance674.addChild(&ImageTexture676);

Shape673.addChild(&Appearance674);

IndexedFaceSet& IndexedFaceSet677 =  IndexedFaceSet();
IndexedFaceSet677.setCreaseAngle(3.14159);
IndexedFaceSet677.setColorIndex(new int[]{1,7,0,-1,7,6,0,-1,1,6,5,-1,1,0,6,-1,1,0,2,-1,0,3,2,-1,1,3,0,-1,1,4,3,-1}, 32);
IndexedFaceSet677.setTexCoordIndex(new int32_t[]{1,11,5,-1,11,10,5,-1,2,10,9,-1,2,5,10,-1,3,4,6,-1,4,7,6,-1,0,7,4,-1,0,8,7,-1}, 32);
IndexedFaceSet677.setCoordIndex(new int32_t[]{1,11,5,-1,11,10,5,-1,2,10,9,-1,2,5,10,-1,3,4,6,-1,4,7,6,-1,0,7,4,-1,0,8,7,-1}, 32);
CColor& Color678 =  CColor();
Color678.setColor(new float[]{0.395722,0.265691,0.00938604,0,0.149733,0.0443462,0,0.149733,0.0443462,0.395722,0.265691,0.00938604,0,0.149733,0.0443462,0,0.149733,0.0443462,0.395722,0.265691,0.00938604,0,0.149733,0.0443462}, 24);
IndexedFaceSet677.setColor(&Color678);

TextureCoordinate& TextureCoordinate679 =  TextureCoordinate();
TextureCoordinate679.setPoint(new float[]{-1.98302,0.89347,0.992243,0.994153,-1.04859,0.961465,0.659208,0.995506,-0.593339,0.947136,-0.028172,0.977809,0.668316,0.10197,-0.58423,0.0535994,-1.97392,-0.0000669342,-1.04412,0.053804,-0.0236996,0.0701483,0.996715,0.0864925}, 24);
IndexedFaceSet677.setTexCoord(&TextureCoordinate679);

Coordinate& Coordinate680 =  Coordinate();
Coordinate680.setPoint(new float[]{-3.56563,0.254493,-118.101,10.6469,0.846142,-121.704,0.898069,0.654054,-127.958,9.05601,0.854093,-118.618,3.07274,0.569853,-118.373,5.77248,0.750098,-124.831,9.12229,-0.550942,-118.63,3.13902,-0.835182,-118.385,-3.49935,-1.15054,-118.112,0.942199,-0.833979,-127.982,5.81661,-0.737935,-124.854,10.691,-0.641891,-121.727}, 36);
IndexedFaceSet677.setCoord(&Coordinate680);

Shape673.setGeometry(&IndexedFaceSet677);

Transform672.addChild(&Shape673);

Transform662.addChild(&Transform672);

Transform& Transform681 =  Transform();
Transform681.setDEF(CString("b4_gras"));
Transform681.setTranslation(new float[]{15.9225,9.98174,163.556});
Transform681.setScale(new float[]{0.998231,0.998231,0.998232});
Transform681.setScaleOrientation(new float[]{7.08927e-8,2.02551e-8,1,4.71239});
Shape& Shape682 =  Shape();
Appearance& Appearance683 =  Appearance();
Material& Material684 =  Material();
Material684.setUSE(CString("_23"));
Appearance683.addChild(&Material684);

ImageTexture& ImageTexture685 =  ImageTexture();
ImageTexture685.setUSE(CString("_10"));
Appearance683.addChild(&ImageTexture685);

Shape682.addChild(&Appearance683);

IndexedFaceSet& IndexedFaceSet686 =  IndexedFaceSet();
IndexedFaceSet686.setCreaseAngle(3.14159);
IndexedFaceSet686.setColorIndex(new int[]{0,1,0,-1,0,1,1,-1,1,0,1,-1,1,0,0,-1}, 16);
IndexedFaceSet686.setTexCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,3,4,1,-1,3,5,4,-1}, 16);
IndexedFaceSet686.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,3,4,1,-1,3,5,4,-1}, 16);
CColor& Color687 =  CColor();
Color687.setColor(new float[]{0,0.149733,0.0443462,0.395722,0.265691,0.00938604}, 6);
IndexedFaceSet686.setColor(&Color687);

TextureCoordinate& TextureCoordinate688 =  TextureCoordinate();
TextureCoordinate688.setPoint(new float[]{2.44011,0.508508,2.42488,0.487201,2.72381,0.499639,2.19325,0.504187,2.09321,0.473401,1.94638,0.499866}, 12);
IndexedFaceSet686.setTexCoord(&TextureCoordinate688);

Coordinate& Coordinate689 =  Coordinate();
Coordinate689.setPoint(new float[]{10.6469,0.846142,-121.704,3.07274,0.569853,-118.373,9.05601,0.854093,-118.618,5.77248,0.750098,-124.831,-3.56563,0.254493,-118.101,0.898069,0.654054,-127.958}, 18);
IndexedFaceSet686.setCoord(&Coordinate689);

Shape682.setGeometry(&IndexedFaceSet686);

Transform681.addChild(&Shape682);

Transform662.addChild(&Transform681);

Transform& Transform690 =  Transform();
Transform690.setDEF(CString("insel"));
Transform& Transform691 =  Transform();
Transform691.setDEF(CString("gras_1"));
Transform691.setTranslation(new float[]{7.76189,0.601843,62.0371});
Transform691.setScale(new float[]{0.348113,0.0601187,0.757793});
Shape& Shape692 =  Shape();
Appearance& Appearance693 =  Appearance();
Material& Material694 =  Material();
Material694.setAmbientIntensity(0.358095);
Material694.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance693.addChild(&Material694);

ImageTexture& ImageTexture695 =  ImageTexture();
ImageTexture695.setUSE(CString("_9"));
Appearance693.addChild(&ImageTexture695);

Shape692.addChild(&Appearance693);

IndexedFaceSet& IndexedFaceSet696 =  IndexedFaceSet();
IndexedFaceSet696.setCreaseAngle(0.5);
IndexedFaceSet696.setColorIndex(new int[]{0,0,1,-1,0,0,1,-1,0,1,0,-1,0,0,1,-1,0,1,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,1,1,-1}, 36);
IndexedFaceSet696.setTexCoordIndex(new int32_t[]{0,1,8,-1,2,0,8,-1,3,6,4,-1,5,4,6,-1,2,8,6,-1,3,2,6,-1,7,5,6,-1,1,7,8,-1,7,6,8,-1}, 36);
IndexedFaceSet696.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,7,6,5,-1,3,2,5,-1,4,3,5,-1,8,7,5,-1,1,8,2,-1,8,5,2,-1}, 36);
CColor& Color697 =  CColor();
Color697.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet696.setColor(&Color697);

TextureCoordinate& TextureCoordinate698 =  TextureCoordinate();
TextureCoordinate698.setPoint(new float[]{0.102145,0,0.744906,0,-0.000079981,0.736152,0.162699,1.51724,0.571703,1.51724,0.944591,1.51724,0.658237,1.12306,1.21638,0.779293,0.773164,0.599528}, 18);
IndexedFaceSet696.setTexCoord(&TextureCoordinate698);

Coordinate& Coordinate699 =  Coordinate();
Coordinate699.setPoint(new float[]{-6.42181,10,9.52627,9.85954,10,9.52627,7.09208,10,2.18101,-9.00918,10,0.523408,-5.61965,10,-8.95318,4.69894,10,-4.17072,2.89706,10,-8.95318,10.6617,10,-8.95318,16.3211,10,0}, 27);
IndexedFaceSet696.setCoord(&Coordinate699);

Shape692.setGeometry(&IndexedFaceSet696);

Transform691.addChild(&Shape692);

Transform690.addChild(&Transform691);

Transform& Transform700 =  Transform();
Transform700.setDEF(CString("fels_1"));
Transform700.setTranslation(new float[]{7.76189,0.601843,62.0371});
Transform700.setScale(new float[]{0.348113,0.0601187,0.757793});
Shape& Shape701 =  Shape();
Appearance& Appearance702 =  Appearance();
Material& Material703 =  Material();
Material703.setAmbientIntensity(0.433333);
Material703.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance702.addChild(&Material703);

ImageTexture& ImageTexture704 =  ImageTexture();
ImageTexture704.setUSE(CString("_10"));
Appearance702.addChild(&ImageTexture704);

Shape701.addChild(&Appearance702);

IndexedFaceSet& IndexedFaceSet705 =  IndexedFaceSet();
IndexedFaceSet705.setCreaseAngle(0.5);
IndexedFaceSet705.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,8,1,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,7,9,-1,7,3,2,9,-1,3,2,10,-1,0,1,10,-1,1,3,10,-1}, 44);
IndexedFaceSet705.setCoordIndex(new int32_t[]{0,1,3,2,-1,1,10,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,6,7,10,11,-1,10,1,0,11,-1,7,6,12,-1,4,5,12,-1,5,7,12,-1}, 44);
TextureCoordinate& TextureCoordinate706 =  TextureCoordinate();
TextureCoordinate706.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,0.5,0,0,0.5,0.5,1,0.476904,1}, 22);
IndexedFaceSet705.setTexCoord(&TextureCoordinate706);

Coordinate& Coordinate707 =  Coordinate();
Coordinate707.setPoint(new float[]{-6.42181,10,9.52627,-9.70368,-10,11.0437,9.85954,10,9.52627,10.2963,-10,11.0437,10.6617,10,-8.95318,10,-10,-10,-5.61965,10,-8.95318,-10,-10,-10,20.5764,-10,0,16.3211,10,0,-12.8393,-10,0,-9.00918,10,0.523408,2.89706,10,-8.95318}, 39);
IndexedFaceSet705.setCoord(&Coordinate707);

Shape701.setGeometry(&IndexedFaceSet705);

Transform700.addChild(&Shape701);

Transform690.addChild(&Transform700);

Transform662.addChild(&Transform690);

Transform661.addChild(&Transform662);

Transform& Transform708 =  Transform();
Transform708.setDEF(CString("b4_deco"));
Transform& Transform709 =  Transform();
Transform709.setDEF(CString("baum"));
Transform709.setTranslation(new float[]{-176.834,-24.033,248.029});
Transform709.setRotation(new float[]{0.0379984,0.998974,-0.0246406,2.04456});
Transform709.setScale(new float[]{1.13491,1.98762,1.13491});
Transform709.setScaleOrientation(new float[]{7.97021e-8,-1,7.82615e-8,0.6867});
Transform& Transform710 =  Transform();
Transform710.setUSE(CString("_13"));
Transform709.addChild(&Transform710);

Transform708.addChild(&Transform709);

Transform& Transform711 =  Transform();
Transform711.setDEF(CString("steine"));
Transform711.setTranslation(new float[]{7.45529,1.83767,60.8982});
Transform711.setRotation(new float[]{0.0161271,0.999643,-0.0212834,0.587113});
Transform711.setScale(new float[]{1.912,1,1});
Transform711.setScaleOrientation(new float[]{-1,-0.0000536254,-4.97506e-7,0.00292969});
Shape& Shape712 =  Shape();
Appearance& Appearance713 =  Appearance();
Material& Material714 =  Material();
Appearance713.addChild(&Material714);

ImageTexture& ImageTexture715 =  ImageTexture();
ImageTexture715.setUSE(CString("_12"));
Appearance713.addChild(&ImageTexture715);

Shape712.addChild(&Appearance713);

IndexedFaceSet& IndexedFaceSet716 =  IndexedFaceSet();
IndexedFaceSet716.setCreaseAngle(0.5);
IndexedFaceSet716.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet716.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate717 =  TextureCoordinate();
TextureCoordinate717.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet716.setTexCoord(&TextureCoordinate717);

Coordinate& Coordinate718 =  Coordinate();
Coordinate718.setPoint(new float[]{-0.85103,0.351358,0.541522,-0.85103,-0.541544,0.541522,0.541553,0.351358,0.541522,0.541553,-0.541544,0.541522,0.541553,0.351358,-0.541522,0.541553,-0.541544,-0.541522,-0.85103,0.351358,-0.541522,-0.85103,-0.541544,-0.541522}, 24);
IndexedFaceSet716.setCoord(&Coordinate718);

Shape712.setGeometry(&IndexedFaceSet716);

Transform711.addChild(&Shape712);

Transform708.addChild(&Transform711);

Transform& Transform719 =  Transform();
Transform719.setDEF(CString("bretter_1"));
Transform& Transform720 =  Transform();
Transform720.setTranslation(new float[]{11.1587,1.25418,59.52});
Transform720.setRotation(new float[]{0.00286884,0.999851,0.0170099,3.47586});
Transform720.setScale(new float[]{0.103345,0.00507983,0.33637});
Transform720.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape721 =  Shape();
Appearance& Appearance722 =  Appearance();
Material& Material723 =  Material();
Material723.setAmbientIntensity(0.273455);
Material723.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance722.addChild(&Material723);

ImageTexture& ImageTexture724 =  ImageTexture();
ImageTexture724.setUSE(CString("_17"));
Appearance722.addChild(&ImageTexture724);

TextureTransform& TextureTransform725 =  TextureTransform();
TextureTransform725.setScale(new float[]{0.688847,2.33733});
Appearance722.setTextureTransform(TextureTransform725);

Shape721.addChild(&Appearance722);

Box& Box726 =  Box();
Box726.setSize(new float[]{20,20,20});
Shape721.setGeometry(&Box726);

Transform720.addChild(&Shape721);

Transform719.addChild(&Transform720);

Transform& Transform727 =  Transform();
Transform727.setTranslation(new float[]{9.32321,1.27336,58.771});
Transform727.setRotation(new float[]{-0.00000105968,1,6.67399e-7,2.91857});
Transform727.setScale(new float[]{0.0188561,0.00704867,0.695484});
Transform727.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape728 =  Shape();
Appearance& Appearance729 =  Appearance();
Material& Material730 =  Material();
Material730.setAmbientIntensity(0.273455);
Material730.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance729.addChild(&Material730);

ImageTexture& ImageTexture731 =  ImageTexture();
ImageTexture731.setUSE(CString("_17"));
Appearance729.addChild(&ImageTexture731);

TextureTransform& TextureTransform732 =  TextureTransform();
TextureTransform732.setScale(new float[]{0.688847,2.33733});
Appearance729.setTextureTransform(TextureTransform732);

Shape728.addChild(&Appearance729);

Box& Box733 =  Box();
Box733.setSize(new float[]{20,20,20});
Shape728.setGeometry(&Box733);

Transform727.addChild(&Shape728);

Transform719.addChild(&Transform727);

Transform708.addChild(&Transform719);

Transform661.addChild(&Transform708);

Transform& Transform734 =  Transform();
Transform734.setDEF(CString("b4_functions"));
Transform& Transform735 =  Transform();
Transform735.setDEF(CString("lift"));
Transform& Transform736 =  Transform();
Transform736.setDEF(CString("lift4"));
Transform736.setCenter(new float[]{19.7482,-3.22195,47.7549});
Group& Group737 =  Group();
Group& Group738 =  Group();
Group738.setDEF(CString("UnnamedAnimation3"));
TimeSensor& TimeSensor739 =  TimeSensor();
TimeSensor739.setDEF(CString("Time_4"));
TimeSensor739.setCycleInterval(5);
TimeSensor739.setStopTime(1);
Group738.addChild(&TimeSensor739);

Group737.addChild(&Group738);

PositionInterpolator& PositionInterpolator740 =  PositionInterpolator();
PositionInterpolator740.setDEF(CString("lift4TranslationInterp"));
PositionInterpolator740.setKey(new float[]{0,0.49999,0.5,0.521053,0.542105,0.563158,0.584211,0.605263,0.626316,0.647369,0.668421,0.689474,0.710527,0.731579,0.752632,0.773685,0.794737,0.81579,0.836843,0.857895,0.878948,0.9}, 22);
PositionInterpolator740.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,-0.249256,0,0,-0.552066,0,0,-0.90384,0,0,-1.29999,0,0,-1.73592,0,0,-2.20704,0,0,-2.70877,0,0,-3.2365,0,0,-3.78566,0,0,-4.35165,0,0,-4.92988,0,0,-5.51577,0,0,-6.10471,0,0,-6.69212,0,0,-7.27341,0,0,-7.84399,0,0,-8.39927,0,0,-8.93466,0,0,-9.44555,0}, 66);
Group737.addChild(&PositionInterpolator740);

Transform736.addChild(&Group737);

Transform& Transform741 =  Transform();
Transform741.setDEF(CString("l4"));
Transform& Transform742 =  Transform();
Transform742.setTranslation(new float[]{19.7718,-3.22195,48.0719});
Transform742.setRotation(new float[]{0,1,0,0.321671});
Transform742.setScale(new float[]{0.791804,6.24709,0.916288});
Shape& Shape743 =  Shape();
Appearance& Appearance744 =  Appearance();
Material& Material745 =  Material();
Material745.setDEF(CString("_24"));
Material745.setAmbientIntensity(0.358095);
Material745.setDiffuseColor(new float[]{0,0.446809,0.132331});
Appearance744.addChild(&Material745);

ImageTexture& ImageTexture746 =  ImageTexture();
ImageTexture746.setUSE(CString("_9"));
Appearance744.addChild(&ImageTexture746);

TextureTransform& TextureTransform747 =  TextureTransform();
TextureTransform747.setDEF(CString("_25"));
TextureTransform747.setScale(new float[]{1,2.28943});
Appearance744.setTextureTransform(TextureTransform747);

Shape743.addChild(&Appearance744);

IndexedFaceSet& IndexedFaceSet748 =  IndexedFaceSet();
IndexedFaceSet748.setCreaseAngle(0.5);
IndexedFaceSet748.setColorIndex(new int[]{0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,1,0,-1,1,0,0,-1}, 24);
IndexedFaceSet748.setTexCoordIndex(new int32_t[]{3,4,6,-1,1,2,6,-1,2,3,6,-1,0,1,6,-1,0,6,5,-1,6,4,5,-1}, 24);
IndexedFaceSet748.setCoordIndex(new int32_t[]{3,4,6,-1,1,2,6,-1,2,3,6,-1,0,1,6,-1,0,6,5,-1,6,4,5,-1}, 24);
CColor& Color749 =  CColor();
Color749.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet748.setColor(&Color749);

TextureCoordinate& TextureCoordinate750 =  TextureCoordinate();
TextureCoordinate750.setPoint(new float[]{0.341704,0.813388,0,0.333571,0.131526,0,0.567557,0,1,0.352694,0.836927,0.705388,0.437855,0.341944}, 14);
IndexedFaceSet748.setTexCoord(&TextureCoordinate750);

Coordinate& Coordinate751 =  Coordinate();
Coordinate751.setPoint(new float[]{-0.887864,2.19717,-2.86995,-3.01655,2.19717,0.119128,-2.19719,2.19717,2.19715,0.519112,2.19717,2.19715,3.21307,2.19717,0,2.19719,2.19717,-2.19715,-0.288882,2.19717,0.0669673}, 21);
IndexedFaceSet748.setCoord(&Coordinate751);

Shape743.setGeometry(&IndexedFaceSet748);

Transform742.addChild(&Shape743);

Transform741.addChild(&Transform742);

Transform& Transform752 =  Transform();
Transform752.setTranslation(new float[]{19.7718,-3.22195,48.0719});
Transform752.setRotation(new float[]{0,1,0,0.321671});
Transform752.setScale(new float[]{0.791804,6.24709,0.916288});
Shape& Shape753 =  Shape();
Appearance& Appearance754 =  Appearance();
Material& Material755 =  Material();
Material755.setDEF(CString("_26"));
Material755.setAmbientIntensity(0.433333);
Material755.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance754.addChild(&Material755);

ImageTexture& ImageTexture756 =  ImageTexture();
ImageTexture756.setUSE(CString("_10"));
Appearance754.addChild(&ImageTexture756);

TextureTransform& TextureTransform757 =  TextureTransform();
TextureTransform757.setUSE(CString("_25"));
Appearance754.setTextureTransform(TextureTransform757);

Shape753.addChild(&Appearance754);

IndexedFaceSet& IndexedFaceSet758 =  IndexedFaceSet();
IndexedFaceSet758.setCreaseAngle(0.5);
IndexedFaceSet758.setColorIndex(new int[]{1,0,0,1,-1,1,0,0,1,-1,0,0,0,0,0,0,-1,1,0,0,1,-1,0,0,1,1,-1,1,0,0,1,-1,0,0,1,1,-1}, 37);
IndexedFaceSet758.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,8,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,7,9,-1,7,3,2,9,-1}, 37);
IndexedFaceSet758.setCoordIndex(new int32_t[]{0,1,3,2,-1,6,7,1,0,-1,1,7,10,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,4,5,10,11,-1,10,7,6,11,-1}, 37);
CColor& Color759 =  CColor();
Color759.setColor(new float[]{0.957447,0.642839,0.0227095,0,0.446809,0.132331}, 6);
IndexedFaceSet758.setColor(&Color759);

TextureCoordinate& TextureCoordinate760 =  TextureCoordinate();
TextureCoordinate760.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,0.5,0,0.5,0,0.5,1}, 20);
IndexedFaceSet758.setTexCoord(&TextureCoordinate760);

Coordinate& Coordinate761 =  Coordinate();
Coordinate761.setPoint(new float[]{-2.19719,2.19717,2.19715,-2.19719,-2.19717,2.19715,0.519112,2.19717,2.19715,0.519112,-2.19717,2.19715,2.19719,2.19717,-2.19715,2.19719,-2.19717,-2.19715,-3.01655,2.19717,0.119128,-3.01655,-2.19717,0.119128,3.21307,-2.19717,0,3.21307,2.19717,0,-0.887864,-2.19717,-2.86995,-0.887864,2.19717,-2.86995}, 36);
IndexedFaceSet758.setCoord(&Coordinate761);

Shape753.setGeometry(&IndexedFaceSet758);

Transform752.addChild(&Shape753);

Transform741.addChild(&Transform752);

Transform736.addChild(&Transform741);

Transform735.addChild(&Transform736);

Transform& Transform762 =  Transform();
Transform762.setDEF(CString("lift3"));
Transform762.setCenter(new float[]{20.3218,-4.30213,52.3337});
Group& Group763 =  Group();
Group& Group764 =  Group();
Group764.setUSE(CString("UnnamedAnimation3"));
Group763.addChild(&Group764);

PositionInterpolator& PositionInterpolator765 =  PositionInterpolator();
PositionInterpolator765.setDEF(CString("lift3TranslationInterp"));
PositionInterpolator765.setKey(new float[]{0,0.39999,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8}, 23);
PositionInterpolator765.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,-0.265648,0,0,-0.576075,0,0,-0.927649,0,0,-1.31674,0,0,-1.73972,0,0,-2.19296,0,0,-2.67282,0,0,-3.17567,0,0,-3.69789,0,0,-4.23584,0,0,-4.78589,0,0,-5.34442,0,0,-5.90778,0,0,-6.47236,0,0,-7.03451,0,0,-7.59062,0,0,-8.13704,0,0,-8.67015,0,0,-9.18632,0,0,-9.68192,0}, 69);
Group763.addChild(&PositionInterpolator765);

Transform762.addChild(&Group763);

Transform& Transform766 =  Transform();
Transform766.setDEF(CString("l3"));
Transform766.setTranslation(new float[]{0,1.32928,-0.0000038147});
Transform766.setScale(new float[]{1,1.10734,1});
Transform766.setCenter(new float[]{20.3218,-4.30213,52.3337});
Transform& Transform767 =  Transform();
Transform767.setTranslation(new float[]{20.0123,-4.30212,52.4579});
Transform767.setRotation(new float[]{-0.00000820545,-1,-0.00000305167,0.94955});
Transform767.setScale(new float[]{0.805866,5.6363,0.963108});
Shape& Shape768 =  Shape();
Appearance& Appearance769 =  Appearance();
Material& Material770 =  Material();
Material770.setUSE(CString("_24"));
Appearance769.addChild(&Material770);

ImageTexture& ImageTexture771 =  ImageTexture();
ImageTexture771.setUSE(CString("_9"));
Appearance769.addChild(&ImageTexture771);

TextureTransform& TextureTransform772 =  TextureTransform();
TextureTransform772.setDEF(CString("_27"));
TextureTransform772.setScale(new float[]{1,2.28943});
Appearance769.setTextureTransform(TextureTransform772);

Shape768.addChild(&Appearance769);

IndexedFaceSet& IndexedFaceSet773 =  IndexedFaceSet();
IndexedFaceSet773.setCreaseAngle(0.5);
IndexedFaceSet773.setColorIndex(new int[]{0,0,1,-1,0,1,1,0,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,1,-1}, 26);
IndexedFaceSet773.setTexCoordIndex(new int32_t[]{1,2,6,-1,0,6,7,5,-1,0,1,6,-1,4,5,7,-1,2,3,6,-1,3,4,7,6,-1}, 26);
IndexedFaceSet773.setCoordIndex(new int32_t[]{1,2,6,-1,0,6,7,5,-1,0,1,6,-1,4,5,7,-1,2,3,6,-1,3,4,7,6,-1}, 26);
CColor& Color774 =  CColor();
Color774.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet773.setColor(&Color774);

TextureCoordinate& TextureCoordinate775 =  TextureCoordinate();
TextureCoordinate775.setPoint(new float[]{0.341704,0.813388,0,0.333571,0.131526,0,0.567557,0,1,0.352694,0.836927,0.705388,0.456677,0.325144,0.457302,0.32577}, 16);
IndexedFaceSet773.setTexCoord(&TextureCoordinate775);

Coordinate& Coordinate776 =  Coordinate();
Coordinate776.setPoint(new float[]{-0.887864,2.19717,-2.86995,-3.01655,2.19717,0.119128,-2.19719,2.19717,2.19715,0.519112,2.19717,2.19715,3.21307,2.19717,0,2.19719,2.19717,-2.19715,-0.171627,2.19717,0.171624,-0.16773,2.19717,0.167727}, 24);
IndexedFaceSet773.setCoord(&Coordinate776);

Shape768.setGeometry(&IndexedFaceSet773);

Transform767.addChild(&Shape768);

Transform766.addChild(&Transform767);

Transform& Transform777 =  Transform();
Transform777.setTranslation(new float[]{20.2235,-4.30213,52.6701});
Transform777.setRotation(new float[]{-0.00000820545,-1,-0.00000305167,0.94955});
Transform777.setScale(new float[]{0.805866,5.6363,0.963108});
Transform777.setCenter(new float[]{0.0982599,0,-0.3364});
Shape& Shape778 =  Shape();
Appearance& Appearance779 =  Appearance();
Material& Material780 =  Material();
Material780.setUSE(CString("_26"));
Appearance779.addChild(&Material780);

ImageTexture& ImageTexture781 =  ImageTexture();
ImageTexture781.setUSE(CString("_10"));
Appearance779.addChild(&ImageTexture781);

TextureTransform& TextureTransform782 =  TextureTransform();
TextureTransform782.setUSE(CString("_27"));
Appearance779.setTextureTransform(TextureTransform782);

Shape778.addChild(&Appearance779);

IndexedFaceSet& IndexedFaceSet783 =  IndexedFaceSet();
IndexedFaceSet783.setCreaseAngle(0.5);
IndexedFaceSet783.setColorIndex(new int[]{1,0,0,1,-1,1,0,0,1,-1,0,0,0,0,0,0,-1,1,0,0,1,-1,0,0,1,1,-1,1,0,0,1,-1,0,0,1,1,-1}, 37);
IndexedFaceSet783.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,8,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,7,9,-1,7,3,2,9,-1}, 37);
IndexedFaceSet783.setCoordIndex(new int32_t[]{0,1,3,2,-1,6,7,1,0,-1,1,7,10,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,4,5,10,11,-1,10,7,6,11,-1}, 37);
CColor& Color784 =  CColor();
Color784.setColor(new float[]{0.957447,0.642839,0.0227095,0,0.446809,0.132331}, 6);
IndexedFaceSet783.setColor(&Color784);

TextureCoordinate& TextureCoordinate785 =  TextureCoordinate();
TextureCoordinate785.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,0.5,0,0.5,0,0.5,1}, 20);
IndexedFaceSet783.setTexCoord(&TextureCoordinate785);

Coordinate& Coordinate786 =  Coordinate();
Coordinate786.setPoint(new float[]{-2.19719,2.19717,2.19715,-2.19719,-2.19717,2.19715,0.519112,2.19717,2.19715,0.519112,-2.19717,2.19715,2.19719,2.19717,-2.19715,2.19719,-2.19717,-2.19715,-3.01655,2.19717,0.119128,-3.01655,-2.19717,0.119128,3.21307,-2.19717,0,3.21307,2.19717,0,-0.887864,-2.19717,-2.86995,-0.887864,2.19717,-2.86995}, 36);
IndexedFaceSet783.setCoord(&Coordinate786);

Shape778.setGeometry(&IndexedFaceSet783);

Transform777.addChild(&Shape778);

Transform766.addChild(&Transform777);

Transform762.addChild(&Transform766);

Transform735.addChild(&Transform762);

Transform& Transform787 =  Transform();
Transform787.setDEF(CString("lift2_2"));
Transform787.setTranslation(new float[]{0,0.0402713,0});
Transform787.setCenter(new float[]{16.6308,-5.17088,55.1004});
Group& Group788 =  Group();
Group& Group789 =  Group();
Group789.setUSE(CString("UnnamedAnimation3"));
Group788.addChild(&Group789);

PositionInterpolator& PositionInterpolator790 =  PositionInterpolator();
PositionInterpolator790.setDEF(CString("lift2TranslationInterp_1"));
PositionInterpolator790.setKey(new float[]{0,0.29999,0.3,0.321053,0.342105,0.363158,0.384211,0.405263,0.426316,0.447368,0.468421,0.489474,0.510526,0.531579,0.552632,0.573684,0.594737,0.61579,0.636842,0.657895,0.678948,0.7}, 22);
PositionInterpolator790.setKeyValue(new float[]{0,0.0402713,0,0,0.0402713,0,0,0.0402713,0,0,-0.268939,0,0,-0.619908,0,0,-1.00906,0,0,-1.4328,0,0,-1.88757,0,0,-2.36978,0,0,-2.87585,0,0,-3.4022,0,0,-3.94526,0,0,-4.50144,0,0,-5.06717,0,0,-5.63886,0,0,-6.21294,0,0,-6.78582,0,0,-7.35394,0,0,-7.9137,0,0,-8.46153,0,0,-8.99385,0,0,-9.50707,0}, 66);
Group788.addChild(&PositionInterpolator790);

Transform787.addChild(&Group788);

Transform& Transform791 =  Transform();
Transform791.setDEF(CString("l2"));
Transform791.setTranslation(new float[]{0,2.14658,0});
Transform791.setScale(new float[]{1,1.18759,1});
Transform791.setCenter(new float[]{16.6308,-5.17088,55.1004});
Transform& Transform792 =  Transform();
Transform792.setTranslation(new float[]{16.6522,-5.17088,55.3874});
Transform792.setRotation(new float[]{0,1,0,0.321672});
Transform792.setScale(new float[]{0.716699,5.20816,0.829377});
Shape& Shape793 =  Shape();
Appearance& Appearance794 =  Appearance();
Material& Material795 =  Material();
Material795.setUSE(CString("_24"));
Appearance794.addChild(&Material795);

ImageTexture& ImageTexture796 =  ImageTexture();
ImageTexture796.setUSE(CString("_9"));
Appearance794.addChild(&ImageTexture796);

TextureTransform& TextureTransform797 =  TextureTransform();
TextureTransform797.setDEF(CString("_28"));
TextureTransform797.setScale(new float[]{1,2.28943});
Appearance794.setTextureTransform(TextureTransform797);

Shape793.addChild(&Appearance794);

IndexedFaceSet& IndexedFaceSet798 =  IndexedFaceSet();
IndexedFaceSet798.setCreaseAngle(0.5);
IndexedFaceSet798.setColorIndex(new int[]{0,0,1,-1,1,0,0,-1,0,1,0,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1}, 24);
IndexedFaceSet798.setTexCoordIndex(new int32_t[]{3,4,6,-1,6,4,5,-1,0,6,5,-1,0,1,6,-1,1,2,6,-1,2,3,6,-1}, 24);
IndexedFaceSet798.setCoordIndex(new int32_t[]{3,4,6,-1,6,4,5,-1,0,6,5,-1,0,1,6,-1,1,2,6,-1,2,3,6,-1}, 24);
CColor& Color799 =  CColor();
Color799.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet798.setColor(&Color799);

TextureCoordinate& TextureCoordinate800 =  TextureCoordinate();
TextureCoordinate800.setPoint(new float[]{0.341704,0.813388,0,0.333571,0.131526,0,0.567557,0,1,0.352694,0.836927,0.705388,0.454229,0.342257}, 14);
IndexedFaceSet798.setTexCoord(&TextureCoordinate800);

Coordinate& Coordinate801 =  Coordinate();
Coordinate801.setPoint(new float[]{-0.887864,2.19717,-2.86995,-3.01655,2.19717,0.119128,-2.19719,2.19717,2.19715,0.519112,2.19717,2.19715,3.21307,2.19717,0,2.19719,2.19717,-2.19715,-0.186873,2.19717,0.0650166}, 21);
IndexedFaceSet798.setCoord(&Coordinate801);

Shape793.setGeometry(&IndexedFaceSet798);

Transform792.addChild(&Shape793);

Transform791.addChild(&Transform792);

Transform& Transform802 =  Transform();
Transform802.setTranslation(new float[]{16.5325,-5.17088,55.4368});
Transform802.setRotation(new float[]{0,1,0,0.321672});
Transform802.setScale(new float[]{0.716699,5.20816,0.829377});
Transform802.setCenter(new float[]{0.0982599,0,-0.3364});
Shape& Shape803 =  Shape();
Appearance& Appearance804 =  Appearance();
Material& Material805 =  Material();
Material805.setUSE(CString("_26"));
Appearance804.addChild(&Material805);

ImageTexture& ImageTexture806 =  ImageTexture();
ImageTexture806.setUSE(CString("_10"));
Appearance804.addChild(&ImageTexture806);

TextureTransform& TextureTransform807 =  TextureTransform();
TextureTransform807.setUSE(CString("_28"));
Appearance804.setTextureTransform(TextureTransform807);

Shape803.addChild(&Appearance804);

IndexedFaceSet& IndexedFaceSet808 =  IndexedFaceSet();
IndexedFaceSet808.setCreaseAngle(0.5);
IndexedFaceSet808.setColorIndex(new int[]{1,0,0,1,-1,1,0,0,1,-1,0,0,0,0,0,0,-1,1,0,0,1,-1,0,0,1,1,-1,1,0,0,1,-1,0,0,1,1,-1}, 37);
IndexedFaceSet808.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,8,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,7,9,-1,7,3,2,9,-1}, 37);
IndexedFaceSet808.setCoordIndex(new int32_t[]{0,1,3,2,-1,6,7,1,0,-1,1,7,10,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,4,5,10,11,-1,10,7,6,11,-1}, 37);
CColor& Color809 =  CColor();
Color809.setColor(new float[]{0.957447,0.642839,0.0227095,0,0.446809,0.132331}, 6);
IndexedFaceSet808.setColor(&Color809);

TextureCoordinate& TextureCoordinate810 =  TextureCoordinate();
TextureCoordinate810.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,0.5,0,0.5,0,0.5,1}, 20);
IndexedFaceSet808.setTexCoord(&TextureCoordinate810);

Coordinate& Coordinate811 =  Coordinate();
Coordinate811.setPoint(new float[]{-2.19719,2.19717,2.19715,-2.19719,-2.19717,2.19715,0.519112,2.19717,2.19715,0.519112,-2.19717,2.19715,2.19719,2.19717,-2.19715,2.19719,-2.19717,-2.19715,-3.01655,2.19717,0.119128,-3.01655,-2.19717,0.119128,3.21307,-2.19717,0,3.21307,2.19717,0,-0.887864,-2.19717,-2.86995,-0.887864,2.19717,-2.86995}, 36);
IndexedFaceSet808.setCoord(&Coordinate811);

Shape803.setGeometry(&IndexedFaceSet808);

Transform802.addChild(&Shape803);

Transform791.addChild(&Transform802);

Transform787.addChild(&Transform791);

Transform735.addChild(&Transform787);

Transform& Transform812 =  Transform();
Transform812.setDEF(CString("lift1_2"));
Transform812.setCenter(new float[]{13.3085,-6.91695,53.6293});
Group& Group813 =  Group();
Group& Group814 =  Group();
Group814.setUSE(CString("UnnamedAnimation3"));
Group813.addChild(&Group814);

PositionInterpolator& PositionInterpolator815 =  PositionInterpolator();
PositionInterpolator815.setDEF(CString("lift1TranslationInterp"));
PositionInterpolator815.setKey(new float[]{0,0.19999,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6}, 23);
PositionInterpolator815.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,-0.333759,0,0,-0.696956,0,0,-1.0872,0,0,-1.50212,0,0,-1.93931,0,0,-2.39639,0,0,-2.87097,0,0,-3.36067,0,0,-3.8631,0,0,-4.37587,0,0,-4.8966,0,0,-5.4229,0,0,-5.95238,0,0,-6.48265,0,0,-7.01134,0,0,-7.53604,0,0,-8.05439,0,0,-8.56398,0,0,-9.06242,0,0,-9.54735,0}, 69);
Group813.addChild(&PositionInterpolator815);

Transform812.addChild(&Group813);

Transform& Transform816 =  Transform();
Transform816.setDEF(CString("l1"));
Transform816.setTranslation(new float[]{-9.53674e-7,3.85483,-0.0000038147});
Transform816.setScale(new float[]{1,1.39283,1});
Transform816.setCenter(new float[]{13.3085,-6.91695,53.6293});
Transform& Transform817 =  Transform();
Transform817.setTranslation(new float[]{13.0904,-6.91695,53.8143});
Transform817.setRotation(new float[]{0,-1,0,0.646213});
Transform817.setScale(new float[]{0.638381,4.46623,0.829377});
Shape& Shape818 =  Shape();
Appearance& Appearance819 =  Appearance();
Material& Material820 =  Material();
Material820.setUSE(CString("_24"));
Appearance819.addChild(&Material820);

ImageTexture& ImageTexture821 =  ImageTexture();
ImageTexture821.setUSE(CString("_9"));
Appearance819.addChild(&ImageTexture821);

TextureTransform& TextureTransform822 =  TextureTransform();
TextureTransform822.setDEF(CString("_29"));
TextureTransform822.setScale(new float[]{1,2.28943});
Appearance819.setTextureTransform(TextureTransform822);

Shape818.addChild(&Appearance819);

IndexedFaceSet& IndexedFaceSet823 =  IndexedFaceSet();
IndexedFaceSet823.setCreaseAngle(0.5);
IndexedFaceSet823.setColorIndex(new int[]{0,1,0,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1}, 24);
IndexedFaceSet823.setTexCoordIndex(new int32_t[]{0,6,5,-1,0,1,6,-1,1,2,6,-1,4,5,6,-1,2,3,6,-1,3,4,6,-1}, 24);
IndexedFaceSet823.setCoordIndex(new int32_t[]{0,6,5,-1,0,1,6,-1,1,2,6,-1,4,5,6,-1,2,3,6,-1,3,4,6,-1}, 24);
CColor& Color824 =  CColor();
Color824.setColor(new float[]{0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet823.setColor(&Color824);

TextureCoordinate& TextureCoordinate825 =  TextureCoordinate();
TextureCoordinate825.setPoint(new float[]{0.341704,0.813388,0,0.333571,0.131526,0,0.567557,0,1,0.352694,0.836927,0.705388,0.484227,0.352694}, 14);
IndexedFaceSet823.setTexCoord(&TextureCoordinate825);

Coordinate& Coordinate826 =  Coordinate();
Coordinate826.setPoint(new float[]{-0.887864,2.19717,-2.86995,-3.01655,2.19717,0.119128,-2.19719,2.19717,2.19715,0.519112,2.19717,2.19715,3.21307,2.19717,0,2.19719,2.19717,-2.19715,0,2.19717,0}, 21);
IndexedFaceSet823.setCoord(&Coordinate826);

Shape818.setGeometry(&IndexedFaceSet823);

Transform817.addChild(&Shape818);

Transform816.addChild(&Transform817);

Transform& Transform827 =  Transform();
Transform827.setTranslation(new float[]{13.2102,-6.91695,53.9657});
Transform827.setRotation(new float[]{0,-1,0,0.646213});
Transform827.setScale(new float[]{0.638381,4.46623,0.829377});
Transform827.setCenter(new float[]{0.0982599,0,-0.3364});
Shape& Shape828 =  Shape();
Appearance& Appearance829 =  Appearance();
Material& Material830 =  Material();
Material830.setUSE(CString("_26"));
Appearance829.addChild(&Material830);

ImageTexture& ImageTexture831 =  ImageTexture();
ImageTexture831.setUSE(CString("_10"));
Appearance829.addChild(&ImageTexture831);

TextureTransform& TextureTransform832 =  TextureTransform();
TextureTransform832.setUSE(CString("_29"));
Appearance829.setTextureTransform(TextureTransform832);

Shape828.addChild(&Appearance829);

IndexedFaceSet& IndexedFaceSet833 =  IndexedFaceSet();
IndexedFaceSet833.setCreaseAngle(0.5);
IndexedFaceSet833.setColorIndex(new int[]{1,0,0,1,-1,1,0,0,1,-1,0,0,0,0,0,0,-1,1,0,0,1,-1,0,0,1,1,-1,1,0,0,1,-1,0,0,1,1,-1}, 37);
IndexedFaceSet833.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,8,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,7,9,-1,7,3,2,9,-1}, 37);
IndexedFaceSet833.setCoordIndex(new int32_t[]{0,1,3,2,-1,6,7,1,0,-1,1,7,10,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,4,5,10,11,-1,10,7,6,11,-1}, 37);
CColor& Color834 =  CColor();
Color834.setColor(new float[]{0.957447,0.642839,0.0227095,0,0.446809,0.132331}, 6);
IndexedFaceSet833.setColor(&Color834);

TextureCoordinate& TextureCoordinate835 =  TextureCoordinate();
TextureCoordinate835.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,0.5,0,0.5,0,0.5,1}, 20);
IndexedFaceSet833.setTexCoord(&TextureCoordinate835);

Coordinate& Coordinate836 =  Coordinate();
Coordinate836.setPoint(new float[]{-2.19719,2.19717,2.19715,-2.19719,-2.19717,2.19715,0.519112,2.19717,2.19715,0.519112,-2.19717,2.19715,2.19719,2.19717,-2.19715,2.19719,-2.19717,-2.19715,-3.01655,2.19717,0.119128,-3.01655,-2.19717,0.119128,3.21307,-2.19717,0,3.21307,2.19717,0,-0.887864,-2.19717,-2.86995,-0.887864,2.19717,-2.86995}, 36);
IndexedFaceSet833.setCoord(&Coordinate836);

Shape828.setGeometry(&IndexedFaceSet833);

Transform827.addChild(&Shape828);

Transform816.addChild(&Transform827);

Transform812.addChild(&Transform816);

Transform735.addChild(&Transform812);

Transform& Transform837 =  Transform();
Transform837.setDEF(CString("switch1"));
Transform837.setTranslation(new float[]{0.0108709,0,-0.349468});
Transform837.setCenter(new float[]{7.68766,2.53632,61.1767});
Group& Group838 =  Group();
Group& Group839 =  Group();
Group839.setUSE(CString("UnnamedAnimation3"));
Group838.addChild(&Group839);

PositionInterpolator& PositionInterpolator840 =  PositionInterpolator();
PositionInterpolator840.setDEF(CString("switch1TranslationInterp"));
PositionInterpolator840.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14}, 8);
PositionInterpolator840.setKeyValue(new float[]{0.0108709,0,-0.349468,0.0108709,-0.12431,-0.349468,0.0108709,-0.254054,-0.349468,0.0108709,-0.381081,-0.349468,0.0108709,-0.49724,-0.349468,0.0108709,-0.594378,-0.349468,0.0108709,-0.615606,-0.349468,0.0108709,-0.594378,-0.349468}, 24);
Group838.addChild(&PositionInterpolator840);

Transform837.addChild(&Group838);

TouchSensor& TouchSensor841 =  TouchSensor();
TouchSensor841.setDEF(CString("DefaultTouchSensor"));
Transform837.addChild(&TouchSensor841);

Transform& Transform842 =  Transform();
Transform842.setTranslation(new float[]{7.68766,2.53632,61.1767});
Transform842.setRotation(new float[]{0.0161268,0.999643,-0.0212833,0.587113});
Transform842.setScale(new float[]{1,2.49037,1});
Transform842.setScaleOrientation(new float[]{1.06803e-9,1,-1.31767e-9,0.525825});
Shape& Shape843 =  Shape();
Appearance& Appearance844 =  Appearance();
Material& Material845 =  Material();
Appearance844.addChild(&Material845);

ImageTexture& ImageTexture846 =  ImageTexture();
ImageTexture846.setUrl(new CString[]{CString("tikigitter_pfahl2_mh.png")}, 1);
Appearance844.addChild(&ImageTexture846);

Shape843.addChild(&Appearance844);

Box& Box847 =  Box();
Box847.setSize(new float[]{0.282726,0.282753,0.282793});
Shape843.setGeometry(&Box847);

Transform842.addChild(&Shape843);

Transform837.addChild(&Transform842);

Transform735.addChild(&Transform837);

Transform734.addChild(&Transform735);

Transform& Transform848 =  Transform();
Transform848.setDEF(CString("skull"));
Transform848.setTranslation(new float[]{19.6674,10.608,44.7973});
Transform848.setRotation(new float[]{0.086278,0.419043,0.903858,0.0566636});
Transform848.setScale(new float[]{1,1,0.999999});
Transform848.setScaleOrientation(new float[]{-0.00410353,-0.0570957,0.99836,0.225626});
Inline& Inline849 =  Inline();
Inline849.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline849.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline849.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform848.addChild(&Inline849);

Transform734.addChild(&Transform848);

Transform661.addChild(&Transform734);

Transform241.addChild(&Transform661);

Transform& Transform850 =  Transform();
Transform850.setDEF(CString("b5"));
Transform& Transform851 =  Transform();
Transform851.setDEF(CString("b5_walls"));
Transform& Transform852 =  Transform();
Transform852.setDEF(CString("inseln"));
Transform& Transform853 =  Transform();
Transform853.setTranslation(new float[]{26.2554,-1.08447,35.7776});
Transform853.setRotation(new float[]{0,1,0,1.22781});
Transform853.setScale(new float[]{0.484112,1.43421,0.484111});
Transform853.setScaleOrientation(new float[]{0,-1,0,0.0241787});
Shape& Shape854 =  Shape();
Appearance& Appearance855 =  Appearance();
Material& Material856 =  Material();
Material856.setAmbientIntensity(0.433333);
Material856.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance855.addChild(&Material856);

ImageTexture& ImageTexture857 =  ImageTexture();
ImageTexture857.setUSE(CString("_10"));
Appearance855.addChild(&ImageTexture857);

Shape854.addChild(&Appearance855);

IndexedFaceSet& IndexedFaceSet858 =  IndexedFaceSet();
IndexedFaceSet858.setCreaseAngle(0.5);
IndexedFaceSet858.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,11,1,3,7,2,-1,0,9,1,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,8,10,-1,8,3,2,10,-1}, 44);
IndexedFaceSet858.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,11,0,2,9,4,-1,1,10,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,6,7,10,11,-1,10,1,0,11,-1}, 44);
TextureCoordinate& TextureCoordinate859 =  TextureCoordinate();
TextureCoordinate859.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,1,0.5,0.5,0,0,0.5,0.5,1,0,0.5}, 24);
IndexedFaceSet858.setTexCoord(&TextureCoordinate859);

Coordinate& Coordinate860 =  Coordinate();
Coordinate860.setPoint(new float[]{-0.867412,1.03359,2.72768,-0.867412,-2.72767,2.72768,2.72768,1.03359,2.72768,2.72768,-2.72767,2.72768,2.72768,1.03359,-2.72768,2.72768,-2.72767,-2.72768,-2.16018,1.03359,-4.06679,-2.16018,-2.72767,-4.06679,4.16122,-2.72767,0,4.16122,1.03359,0,-3.88363,-2.72767,0,-3.88363,1.03359,0}, 36);
IndexedFaceSet858.setCoord(&Coordinate860);

Shape854.setGeometry(&IndexedFaceSet858);

Transform853.addChild(&Shape854);

Transform852.addChild(&Transform853);

Transform& Transform861 =  Transform();
Transform861.setTranslation(new float[]{36.3858,-0.772878,43.1218});
Transform861.setRotation(new float[]{0,1,0,0.741183});
Transform861.setScale(new float[]{0.484113,1.01667,0.484111});
Transform861.setScaleOrientation(new float[]{0,-1,0,0.0192237});
Shape& Shape862 =  Shape();
Appearance& Appearance863 =  Appearance();
Material& Material864 =  Material();
Material864.setAmbientIntensity(0.433333);
Material864.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance863.addChild(&Material864);

ImageTexture& ImageTexture865 =  ImageTexture();
ImageTexture865.setUSE(CString("_10"));
Appearance863.addChild(&ImageTexture865);

Shape862.addChild(&Appearance863);

IndexedFaceSet& IndexedFaceSet866 =  IndexedFaceSet();
IndexedFaceSet866.setCreaseAngle(0.5);
IndexedFaceSet866.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,11,1,3,7,2,-1,0,9,1,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,8,10,-1,8,3,2,10,-1}, 44);
IndexedFaceSet866.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,11,0,2,9,4,-1,1,10,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,6,7,10,11,-1,10,1,0,11,-1}, 44);
TextureCoordinate& TextureCoordinate867 =  TextureCoordinate();
TextureCoordinate867.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,1,0.5,0.5,0,0,0.5,0.5,1,0,0.5}, 24);
IndexedFaceSet866.setTexCoord(&TextureCoordinate867);

Coordinate& Coordinate868 =  Coordinate();
Coordinate868.setPoint(new float[]{-1.68373,2.2959,2.72768,-1.68373,-2.72767,2.72768,3.25796,2.2959,2.53001,3.25796,-2.72767,2.53001,1.62929,2.2959,-3.04771,1.62929,-2.72767,-3.04771,-4.54911,2.2959,-3.60779,-4.54911,-2.72767,-3.60779,4.40537,-2.72767,0,4.40537,2.2959,0,-5.12128,-2.72767,-1.61526,-5.20324,2.2959,-1.32985}, 36);
IndexedFaceSet866.setCoord(&Coordinate868);

Shape862.setGeometry(&IndexedFaceSet866);

Transform861.addChild(&Shape862);

Transform852.addChild(&Transform861);

Transform& Transform869 =  Transform();
Transform869.setTranslation(new float[]{45.084,-3.18145,52.4934});
Transform869.setRotation(new float[]{0,1,0,0.670777});
Transform869.setScale(new float[]{1,1.86163,1});
Shape& Shape870 =  Shape();
Appearance& Appearance871 =  Appearance();
Material& Material872 =  Material();
Material872.setAmbientIntensity(0.433333);
Material872.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance871.addChild(&Material872);

ImageTexture& ImageTexture873 =  ImageTexture();
ImageTexture873.setUSE(CString("_10"));
Appearance871.addChild(&ImageTexture873);

Shape870.addChild(&Appearance871);

IndexedFaceSet& IndexedFaceSet874 =  IndexedFaceSet();
IndexedFaceSet874.setCreaseAngle(0.5);
IndexedFaceSet874.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,11,1,15,3,7,2,-1,13,0,9,1,3,5,2,-1,0,1,4,6,-1,4,3,2,6,-1,0,1,8,10,-1,8,3,2,10,-1,0,1,12,14,-1,12,3,2,14,-1}, 51);
IndexedFaceSet874.setCoordIndex(new int32_t[]{4,5,7,6,-1,6,11,0,13,2,9,4,-1,12,1,10,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1,6,7,10,11,-1,10,1,0,11,-1,0,1,12,13,-1,12,3,2,13,-1}, 51);
TextureCoordinate& TextureCoordinate875 =  TextureCoordinate();
TextureCoordinate875.setPoint(new float[]{0,1,0,0,1,1,1,0,0.5,0,1,0.5,0.5,1,1,0.5,0.5,0,0,0.5,0.5,1,0,0.5,0.5,0,0.5,1,0.5,1,0.5,0}, 32);
IndexedFaceSet874.setTexCoord(&TextureCoordinate875);

Coordinate& Coordinate876 =  Coordinate();
Coordinate876.setPoint(new float[]{-2.43689,2.72767,2.71092,-2.43689,-2.72767,2.71092,3.2231,2.72767,4.1469,3.2231,-2.72767,4.1469,1.07343,2.72767,-3.0203,1.07343,-2.72767,-3.0203,-0.263572,2.72767,-2.90991,-0.263572,-2.72767,-2.90991,3.92723,-2.72767,0,3.92723,2.72767,0,-2.66501,-2.72767,-1.24772,-2.66501,2.72767,-1.24772,0.495421,-2.72767,5.09908,0.495421,2.72767,5.09908}, 42);
IndexedFaceSet874.setCoord(&Coordinate876);

Shape870.setGeometry(&IndexedFaceSet874);

Transform869.addChild(&Shape870);

Transform852.addChild(&Transform869);

Transform851.addChild(&Transform852);

Transform850.addChild(&Transform851);

Transform& Transform877 =  Transform();
Transform877.setDEF(CString("b5_functions"));
Transform& Transform878 =  Transform();
Transform878.setDEF(CString("skulls_1"));
Transform& Transform879 =  Transform();
Transform879.setTranslation(new float[]{36.0282,1.56702,43.0231});
Transform879.setRotation(new float[]{0,1,0,0.340091});
Transform879.setScale(new float[]{1,0.999999,1});
Inline& Inline880 =  Inline();
Inline880.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline880.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline880.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform879.addChild(&Inline880);

Transform878.addChild(&Transform879);

Transform& Transform881 =  Transform();
Transform881.setTranslation(new float[]{44.0938,1.90526,51.8952});
Transform881.setRotation(new float[]{0,1,0,4.29935});
Transform881.setScale(new float[]{1.09524,1,1});
Inline& Inline882 =  Inline();
Inline882.setUrl(new CString[]{CString("skulljump.x3d")}, 1);
Inline882.setBboxSize(new float[]{4.39647,2.428,1.37241});
Inline882.setBboxCenter(new float[]{-2.38419e-7,0.91374,0});
Transform881.addChild(&Inline882);

Transform878.addChild(&Transform881);

Transform877.addChild(&Transform878);

Transform& Transform883 =  Transform();
Transform883.setDEF(CString("kisten"));
Transform& Transform884 =  Transform();
Transform884.setDEF(CString("k4"));
Transform884.setTranslation(new float[]{41.6712,0.0024054,50.7951});
Transform884.setRotation(new float[]{0,-1,0,0.301705});
Inline& Inline885 =  Inline();
Inline885.setUrl(new CString[]{CString("wasserkiste.x3d")}, 1);
Inline885.setBboxSize(new float[]{1.99999,5.6602,1.99999});
Inline885.setBboxCenter(new float[]{-0.00000113249,2.82745,-8.9407e-8});
Transform884.addChild(&Inline885);

Transform883.addChild(&Transform884);

Transform& Transform886 =  Transform();
Transform886.setDEF(CString("k3"));
Transform886.setTranslation(new float[]{40.1974,0.0024054,48.8638});
Transform886.setRotation(new float[]{0,-1,0,0.546025});
Inline& Inline887 =  Inline();
Inline887.setUrl(new CString[]{CString("wasserkiste.x3d")}, 1);
Inline887.setBboxSize(new float[]{1.99999,5.6602,1.99999});
Inline887.setBboxCenter(new float[]{-0.00000113249,2.82745,-8.9407e-8});
Transform886.addChild(&Inline887);

Transform883.addChild(&Transform886);

Transform& Transform888 =  Transform();
Transform888.setDEF(CString("k2"));
Transform888.setTranslation(new float[]{37.7909,0.00240587,47.9031});
Transform888.setRotation(new float[]{0,-1,0,1.16743});
Transform888.setScale(new float[]{0.999999,1,0.999999});
Inline& Inline889 =  Inline();
Inline889.setUrl(new CString[]{CString("wasserkiste.x3d")}, 1);
Inline889.setBboxSize(new float[]{1.99999,5.6602,1.99999});
Inline889.setBboxCenter(new float[]{-0.00000113249,2.82745,-8.9407e-8});
Transform888.addChild(&Inline889);

Transform883.addChild(&Transform888);

Transform& Transform890 =  Transform();
Transform890.setDEF(CString("k1"));
Transform890.setTranslation(new float[]{37.5434,0.0024054,45.3692});
Transform890.setRotation(new float[]{0,-1,0,0.818647});
Inline& Inline891 =  Inline();
Inline891.setUrl(new CString[]{CString("wasserkiste.x3d")}, 1);
Inline891.setBboxSize(new float[]{1.99999,5.6602,1.99999});
Inline891.setBboxCenter(new float[]{-0.00000113249,2.82745,-8.9407e-8});
Transform890.addChild(&Inline891);

Transform883.addChild(&Transform890);

Transform877.addChild(&Transform883);

Transform850.addChild(&Transform877);

Transform& Transform892 =  Transform();
Transform892.setDEF(CString("b5_deco"));
Transform& Transform893 =  Transform();
Transform893.setDEF(CString("bretter_2"));
Transform& Transform894 =  Transform();
Transform894.setTranslation(new float[]{26.161,0.510221,26.8038});
Transform894.setRotation(new float[]{0.0239347,0.998996,-0.0378789,2.01546});
Transform894.setScale(new float[]{0.0406873,0.00701239,0.291055});
Transform894.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape895 =  Shape();
Appearance& Appearance896 =  Appearance();
Material& Material897 =  Material();
Material897.setAmbientIntensity(0.273455);
Material897.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance896.addChild(&Material897);

ImageTexture& ImageTexture898 =  ImageTexture();
ImageTexture898.setUSE(CString("_17"));
Appearance896.addChild(&ImageTexture898);

TextureTransform& TextureTransform899 =  TextureTransform();
TextureTransform899.setScale(new float[]{0.688847,2.33733});
Appearance896.setTextureTransform(TextureTransform899);

Shape895.addChild(&Appearance896);

Box& Box900 =  Box();
Box900.setSize(new float[]{20,20,20});
Shape895.setGeometry(&Box900);

Transform894.addChild(&Shape895);

Transform893.addChild(&Transform894);

Transform& Transform901 =  Transform();
Transform901.setTranslation(new float[]{36.6801,1.53969,33.0292});
Transform901.setRotation(new float[]{-0.108186,0.992597,0.0551994,0.949619});
Transform901.setScale(new float[]{0.0370509,0.00507982,0.52513});
Transform901.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape902 =  Shape();
Appearance& Appearance903 =  Appearance();
Material& Material904 =  Material();
Material904.setAmbientIntensity(0.273455);
Material904.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance903.addChild(&Material904);

ImageTexture& ImageTexture905 =  ImageTexture();
ImageTexture905.setUSE(CString("_17"));
Appearance903.addChild(&ImageTexture905);

TextureTransform& TextureTransform906 =  TextureTransform();
TextureTransform906.setScale(new float[]{0.688847,2.33733});
Appearance903.setTextureTransform(TextureTransform906);

Shape902.addChild(&Appearance903);

Box& Box907 =  Box();
Box907.setSize(new float[]{20,20,20});
Shape902.setGeometry(&Box907);

Transform901.addChild(&Shape902);

Transform893.addChild(&Transform901);

Transform892.addChild(&Transform893);

Transform850.addChild(&Transform892);

Transform241.addChild(&Transform850);

Transform232.addChild(&Transform241);

Transform& Transform908 =  Transform();
Transform908.setDEF(CString("south"));
Transform& Transform909 =  Transform();
Transform909.setDEF(CString("wasserfall"));
Transform909.setTranslation(new float[]{265.602,-207.303,32.419});
Group& Group910 =  Group();
Transform& Transform911 =  Transform();
Transform911.setDEF(CString("bruecke_oben"));
Transform911.setTranslation(new float[]{-202.108,287.777,214.736});
Transform911.setRotation(new float[]{-0.263939,0.682032,0.682033,2.62548});
Transform911.setScale(new float[]{0.545301,0.00381014,0.0940006});
Shape& Shape912 =  Shape();
Appearance& Appearance913 =  Appearance();
Material& Material914 =  Material();
Material914.setAmbientIntensity(0.258506);
Material914.setDiffuseColor(new float[]{0.723404,0.343175,0.110421});
Material914.setShininess(0);
Appearance913.addChild(&Material914);

ImageTexture& ImageTexture915 =  ImageTexture();
ImageTexture915.setUSE(CString("_9"));
Appearance913.addChild(&ImageTexture915);

TextureTransform& TextureTransform916 =  TextureTransform();
TextureTransform916.setScale(new float[]{178.358,1});
Appearance913.setTextureTransform(TextureTransform916);

Shape912.addChild(&Appearance913);

IndexedFaceSet& IndexedFaceSet917 =  IndexedFaceSet();
IndexedFaceSet917.setSolid(False);
IndexedFaceSet917.setTexCoordIndex(new int32_t[]{0,37,36,3,-1,37,21,20,36,-1,21,40,39,20,-1,40,1,2,39,-1,4,42,38,0,-1,42,23,22,38,-1,23,44,41,22,-1,44,5,1,41,-1,6,46,43,4,-1,46,25,24,43,-1,25,48,45,24,-1,48,7,5,45,-1,8,50,47,6,-1,50,27,26,47,-1,27,52,49,26,-1,52,9,7,49,-1,10,54,51,13,-1,54,29,28,51,-1,29,56,53,28,-1,56,11,12,53,-1,14,58,55,10,-1,58,31,30,55,-1,31,60,57,30,-1,60,15,11,57,-1,16,64,62,19,-1,64,35,33,62,-1,35,67,65,33,-1,67,17,18,65,-1,19,63,59,14,-1,63,34,32,59,-1,34,66,61,32,-1,66,18,15,61,-1}, 160);
IndexedFaceSet917.setCoordIndex(new int32_t[]{0,28,27,3,-1,28,19,18,27,-1,19,30,29,18,-1,30,1,2,29,-1,4,31,28,0,-1,31,20,19,28,-1,20,32,30,19,-1,32,5,1,30,-1,6,33,31,4,-1,33,21,20,31,-1,21,34,32,20,-1,34,7,5,32,-1,8,35,33,6,-1,35,22,21,33,-1,22,36,34,21,-1,36,9,7,34,-1,10,37,35,8,-1,37,23,22,35,-1,23,38,36,22,-1,38,11,9,36,-1,12,39,37,10,-1,39,24,23,37,-1,24,40,38,23,-1,40,13,11,38,-1,14,42,41,17,-1,42,26,25,41,-1,26,44,43,25,-1,44,15,16,43,-1,17,41,39,12,-1,41,25,24,39,-1,25,43,40,24,-1,43,16,13,40,-1}, 160);
TextureCoordinate& TextureCoordinate918 =  TextureCoordinate();
TextureCoordinate918.setPoint(new float[]{0.8125,0,0.8125,1,0.75,1,0.75,0,0.875,0,0.875,1,0.9375,0,0.9375,1,1,0,1,1,0.0625,0,0.0625,1,0,1,0,0,0.125,0,0.125,1,0.25,0,0.25,1,0.1875,1,0.1875,0,0.75,0.5,0.8125,0.5,0.8125,0.5,0.875,0.5,0.875,0.5,0.9375,0.5,0.9375,0.5,1,0.5,0,0.5,0.0625,0.5,0.0625,0.5,0.125,0.5,0.125,0.5,0.1875,0.5,0.1875,0.5,0.25,0.5,0.75,0.25,0.8125,0.25,0.8125,0.25,0.75,0.75,0.8125,0.75,0.8125,0.75,0.875,0.25,0.875,0.25,0.875,0.75,0.875,0.75,0.9375,0.25,0.9375,0.25,0.9375,0.75,0.9375,0.75,1,0.25,0,0.25,1,0.75,0,0.75,0.0625,0.25,0.0625,0.25,0.0625,0.75,0.0625,0.75,0.125,0.25,0.125,0.25,0.125,0.75,0.125,0.75,0.1875,0.25,0.1875,0.25,0.25,0.25,0.1875,0.75,0.1875,0.75,0.25,0.75}, 136);
IndexedFaceSet917.setTexCoord(&TextureCoordinate918);

Coordinate& Coordinate919 =  Coordinate();
Coordinate919.setPoint(new float[]{92.388,-100,-38.2683,92.388,100,-38.2683,100,100,0.00000437114,100,-100,0.00000437114,70.7107,-100,-70.7107,70.7107,100,-70.7107,38.2683,-100,-92.388,38.2683,100,-92.388,0,-100,-100,0,100,-100,-38.2683,-100,-92.388,-38.2683,100,-92.388,-70.7107,-100,-70.7107,-70.7107,100,-70.7107,-100.256,-89.8007,-5.32383,-98.7121,109.966,-4.56519,-92.3879,100,-38.2684,-92.3879,-100,-38.2684,100,0,0.00000437114,92.3879,0.000980317,-45.1825,70.7106,0.000980317,-77.6249,38.2682,0.000980317,-99.3022,-0.0000612567,0.000980317,-106.914,-38.2684,0.000980317,-99.3022,-70.7108,0.000980317,-77.6249,-92.388,0.000980317,-45.1826,-99.4841,10.0825,-4.94451,100,-50,0.00000437114,92.388,-50,-42.3333,100,50,0.00000437114,92.388,50,-42.3333,70.7107,-50,-74.7757,70.7107,50,-74.7757,38.2683,-50,-96.4529,38.2683,50,-96.4529,-0.0000307391,-50,-104.065,-0.0000307391,50,-104.065,-38.2683,-50,-96.4529,-38.2683,50,-96.4529,-70.7107,-50,-74.7757,-70.7107,50,-74.7757,-92.3879,-50,-42.3334,-99.8701,-39.8591,-5.13417,-92.3879,50,-42.3334,-99.0981,60.0242,-4.75485}, 135);
IndexedFaceSet917.setCoord(&Coordinate919);

Shape912.setGeometry(&IndexedFaceSet917);

Transform911.addChild(&Shape912);

Group910.addChild(&Transform911);

Transform& Transform920 =  Transform();
Transform920.setDEF(CString("bruecke_unten"));
Transform920.setTranslation(new float[]{-262.099,207.179,207.287});
Transform920.setRotation(new float[]{-0.397221,0.673666,0.623209,2.78323});
Transform920.setScale(new float[]{0.243105,0.00381013,0.0337026});
Transform920.setCenter(new float[]{98.6816,4.95404,-7.58358});
Shape& Shape921 =  Shape();
Appearance& Appearance922 =  Appearance();
Material& Material923 =  Material();
Material923.setAmbientIntensity(0.258506);
Material923.setDiffuseColor(new float[]{0.723404,0.343175,0.110421});
Material923.setShininess(0);
Appearance922.addChild(&Material923);

ImageTexture& ImageTexture924 =  ImageTexture();
ImageTexture924.setUSE(CString("_9"));
Appearance922.addChild(&ImageTexture924);

TextureTransform& TextureTransform925 =  TextureTransform();
TextureTransform925.setScale(new float[]{154.291,1});
Appearance922.setTextureTransform(TextureTransform925);

Shape921.addChild(&Appearance922);

IndexedFaceSet& IndexedFaceSet926 =  IndexedFaceSet();
IndexedFaceSet926.setSolid(False);
IndexedFaceSet926.setTexCoordIndex(new int32_t[]{0,37,36,3,-1,37,21,20,36,-1,21,40,39,20,-1,40,1,2,39,-1,4,42,38,0,-1,42,23,22,38,-1,23,44,41,22,-1,44,5,1,41,-1,6,46,43,4,-1,46,25,24,43,-1,25,48,45,24,-1,48,7,5,45,-1,8,50,47,6,-1,50,27,26,47,-1,27,52,49,26,-1,52,9,7,49,-1,10,54,51,13,-1,54,29,28,51,-1,29,56,53,28,-1,56,11,12,53,-1,14,58,55,10,-1,58,31,30,55,-1,31,60,57,30,-1,60,15,11,57,-1,16,64,62,19,-1,64,35,33,62,-1,35,67,65,33,-1,67,17,18,65,-1,19,63,59,14,-1,63,34,32,59,-1,34,66,61,32,-1,66,18,15,61,-1}, 160);
IndexedFaceSet926.setCoordIndex(new int32_t[]{0,28,27,3,-1,28,19,18,27,-1,19,30,29,18,-1,30,1,2,29,-1,4,31,28,0,-1,31,20,19,28,-1,20,32,30,19,-1,32,5,1,30,-1,6,33,31,4,-1,33,21,20,31,-1,21,34,32,20,-1,34,7,5,32,-1,8,35,33,6,-1,35,22,21,33,-1,22,36,34,21,-1,36,9,7,34,-1,10,37,35,8,-1,37,23,22,35,-1,23,38,36,22,-1,38,11,9,36,-1,12,39,37,10,-1,39,24,23,37,-1,24,40,38,23,-1,40,13,11,38,-1,14,42,41,17,-1,42,26,25,41,-1,26,44,43,25,-1,44,15,16,43,-1,17,41,39,12,-1,41,25,24,39,-1,25,43,40,24,-1,43,16,13,40,-1}, 160);
TextureCoordinate& TextureCoordinate927 =  TextureCoordinate();
TextureCoordinate927.setPoint(new float[]{0.8125,0,0.8125,1,0.75,1,0.75,0,0.875,0,0.875,1,0.9375,0,0.9375,1,1,0,1,1,0.0625,0,0.0625,1,0,1,0,0,0.125,0,0.125,1,0.25,0,0.25,1,0.1875,1,0.1875,0,0.75,0.5,0.8125,0.5,0.8125,0.5,0.875,0.5,0.875,0.5,0.9375,0.5,0.9375,0.5,1,0.5,0,0.5,0.0625,0.5,0.0625,0.5,0.125,0.5,0.125,0.5,0.1875,0.5,0.1875,0.5,0.25,0.5,0.75,0.25,0.8125,0.25,0.8125,0.25,0.75,0.75,0.8125,0.75,0.8125,0.75,0.875,0.25,0.875,0.25,0.875,0.75,0.875,0.75,0.9375,0.25,0.9375,0.25,0.9375,0.75,0.9375,0.75,1,0.25,0,0.25,1,0.75,0,0.75,0.0625,0.25,0.0625,0.25,0.0625,0.75,0.0625,0.75,0.125,0.25,0.125,0.25,0.125,0.75,0.125,0.75,0.1875,0.25,0.1875,0.25,0.25,0.25,0.1875,0.75,0.1875,0.75,0.25,0.75}, 136);
IndexedFaceSet926.setTexCoord(&TextureCoordinate927);

Coordinate& Coordinate928 =  Coordinate();
Coordinate928.setPoint(new float[]{92.388,-100,-38.2683,92.388,100,-38.2683,100,100,0.00000437114,100,-100,0.00000437114,70.7107,-100,-70.7107,70.7107,100,-70.7107,38.2683,-100,-92.388,38.2683,100,-92.388,0,-100,-100,0,100,-100,-38.2683,-100,-92.388,-38.2683,100,-92.388,-70.7107,-100,-70.7107,-70.7107,100,-70.7107,-100.256,-89.8007,-5.32383,-98.7121,109.966,-4.56519,-92.3879,100,-38.2684,-92.3879,-100,-38.2684,100,0,0.00000437114,92.3879,0.000980317,-45.1825,70.7106,0.000980317,-77.6249,38.2682,0.000980317,-99.3022,-0.0000612567,0.000980317,-106.914,-38.2684,0.000980317,-99.3022,-70.7108,0.000980317,-77.6249,-92.388,0.000980317,-45.1826,-99.4841,10.0825,-4.94451,100,-50,0.00000437114,92.388,-50,-42.3333,100,50,0.00000437114,92.388,50,-42.3333,70.7107,-50,-74.7757,70.7107,50,-74.7757,38.2683,-50,-96.4529,38.2683,50,-96.4529,-0.0000307391,-50,-104.065,-0.0000307391,50,-104.065,-38.2683,-50,-96.4529,-38.2683,50,-96.4529,-70.7107,-50,-74.7757,-70.7107,50,-74.7757,-92.3879,-50,-42.3334,-99.8701,-39.8591,-5.13417,-92.3879,50,-42.3334,-99.0981,60.0242,-4.75485}, 135);
IndexedFaceSet926.setCoord(&Coordinate928);

Shape921.setGeometry(&IndexedFaceSet926);

Transform920.addChild(&Shape921);

Group910.addChild(&Transform920);

Transform& Transform929 =  Transform();
Transform929.setDEF(CString("gelaender"));
Transform929.setTranslation(new float[]{-265.602,207.303,-32.419});
Transform& Transform930 =  Transform();
Transform930.setDEF(CString("skulls_2"));
Transform& Transform931 =  Transform();
Transform931.setDEF(CString("skull3"));
Transform931.setTranslation(new float[]{108.149,0.738007,248.653});
Billboard& Billboard932 =  Billboard();
Transform& Transform933 =  Transform();
Transform933.setTranslation(new float[]{-0.0286102,0.345093,0.0853882});
Shape& Shape934 =  Shape();
Appearance& Appearance935 =  Appearance();
Material& Material936 =  Material();
Material936.setAmbientIntensity(0.280899);
Material936.setDiffuseColor(new float[]{0.946809,0.89016,0.600177});
Material936.setSpecularColor(new float[]{1,1,1});
Material936.setShininess(0.702128);
Appearance935.addChild(&Material936);

ImageTexture& ImageTexture937 =  ImageTexture();
ImageTexture937.setDEF(CString("_30"));
ImageTexture937.setUrl(new CString[]{CString("paper.3.png")}, 1);
Appearance935.addChild(&ImageTexture937);

Shape934.addChild(&Appearance935);

IndexedFaceSet& IndexedFaceSet938 =  IndexedFaceSet();
IndexedFaceSet938.setCreaseAngle(3.14159);
IndexedFaceSet938.setTexCoordIndex(new int32_t[]{47,32,56,-1,47,39,32,-1,39,40,32,-1,40,38,32,-1,47,56,41,-1,56,42,41,-1,56,90,42,-1,6,70,72,-1,6,15,70,-1,15,17,70,-1,15,11,17,-1,85,63,66,-1,85,66,68,-1,54,85,68,-1,34,35,54,-1,35,55,54,-1,34,54,68,-1,69,70,17,-1,34,69,17,-1,34,68,69,-1,95,9,102,104,92,-1,95,92,71,-1,92,72,71,-1,95,71,60,-1,85,95,63,-1,95,60,63,-1,72,91,6,-1,56,51,52,-1,56,36,51,-1,36,37,51,-1,37,50,51,-1,56,52,90,-1,52,44,90,-1,0,98,78,-1,98,97,78,-1,25,26,78,-1,26,0,78,-1,81,25,78,-1,81,24,25,-1,81,84,24,-1,89,54,21,-1,89,86,54,-1,84,21,24,-1,84,89,21,-1,94,86,89,-1,94,89,87,-1,94,87,76,-1,94,76,96,-1,76,78,96,-1,4,10,96,-1,10,94,96,-1,55,31,53,-1,31,20,53,-1,95,10,99,-1,95,100,9,-1,103,9,101,-1,93,105,107,-1,72,106,91,-1,72,93,106,-1,98,110,97,-1,97,111,113,-1,2,4,112,-1,4,97,112,-1,114,115,115,114,-1,116,114,114,116,-1,117,116,116,117,-1,118,117,117,118,-1,119,118,118,119,-1,120,119,119,120,-1,121,120,120,121,-1,122,121,121,122,-1,123,122,122,123,-1,124,123,123,124,-1,125,115,115,125,-1,126,124,124,126,-1,127,126,126,127,-1,128,127,127,128,-1,129,128,128,129,-1,130,128,128,130,-1,131,130,130,131,-1,132,131,131,132,-1,133,132,132,133,-1,134,133,133,134,-1,135,134,134,135,-1,136,135,135,136,-1,137,136,136,137,-1,138,137,137,138,-1,139,138,138,139,-1,140,139,139,140,-1,140,129,129,140,-1,141,128,130,131,132,133,134,135,136,137,138,139,140,129,-1,142,115,114,116,117,118,119,120,121,122,123,124,-1,125,115,143,144,129,-1,143,124,126,127,128,144,-1}, 430);
IndexedFaceSet938.setCoordIndex(new int32_t[]{23,13,28,-1,23,18,13,-1,18,19,13,-1,19,17,13,-1,23,28,20,-1,28,21,20,-1,28,44,21,-1,3,34,36,-1,3,7,34,-1,7,8,34,-1,7,6,8,-1,41,30,31,-1,41,31,32,-1,27,41,32,-1,14,15,27,-1,15,28,27,-1,14,27,32,-1,33,34,8,-1,14,33,8,-1,14,32,33,-1,47,4,53,54,46,-1,47,46,35,-1,46,36,35,-1,47,35,29,-1,41,47,30,-1,47,29,30,-1,36,45,3,-1,28,25,26,-1,28,15,25,-1,15,16,25,-1,16,24,25,-1,28,26,44,-1,26,22,44,-1,0,49,38,-1,49,48,38,-1,11,12,38,-1,12,0,38,-1,39,11,38,-1,39,10,11,-1,39,40,10,-1,43,27,9,-1,43,41,27,-1,40,9,10,-1,40,43,9,-1,47,41,43,-1,47,43,42,-1,47,42,37,-1,47,37,48,-1,37,38,48,-1,2,5,48,-1,5,47,48,-1,28,13,27,-1,13,9,27,-1,47,5,50,-1,47,51,4,-1,53,4,52,-1,46,54,55,-1,36,55,45,-1,36,46,55,-1,49,56,48,-1,48,56,57,-1,1,2,57,-1,2,48,57,-1,58,59,60,61,-1,62,58,61,63,-1,64,62,63,65,-1,66,64,65,67,-1,68,66,67,69,-1,70,68,69,71,-1,72,70,71,73,-1,74,72,73,75,-1,76,74,75,77,-1,78,76,77,79,-1,59,80,81,60,-1,82,78,79,83,-1,84,82,83,85,-1,86,84,85,87,-1,80,88,89,81,-1,90,86,87,91,-1,92,90,91,93,-1,94,92,93,95,-1,96,94,95,97,-1,98,96,97,99,-1,100,98,99,101,-1,102,100,101,103,-1,104,102,103,105,-1,106,104,105,107,-1,108,106,107,109,-1,110,108,109,111,-1,88,110,111,89,-1,112,86,90,92,94,96,98,100,102,104,106,108,110,88,-1,113,59,58,62,64,66,68,70,72,74,76,78,-1,80,59,113,112,88,-1,113,78,82,84,86,112,-1}, 430);
TextureCoordinate& TextureCoordinate939 =  TextureCoordinate();
TextureCoordinate939.setPoint(new float[]{0.731304,0.343331,0.749136,0.572871,0.739636,0.450583,0.350922,0.564252,0.677726,0.53535,0,0.428742,0.333023,0.340719,0.758425,0.479845,0.758425,0.479845,0.410545,0.480469,0.540528,0.513769,0.330511,0.244083,0.736216,0.214212,0.372553,0.240987,0.372553,0.240987,0.352788,0.290853,0.651623,0,0.379074,0.20717,0.737993,0.167525,0.737993,0.167525,0.606846,0.182011,0.606846,0.182011,0.627809,0.222193,0.627809,0.222193,0.617328,0.202102,0.690097,0.18125,0.736338,0.211014,0.32887,0.180928,0.32887,0.180928,0.738983,0.141511,0.738983,0.141511,0.597637,0.155096,0.597637,0.155096,0.405726,0.204226,0.405726,0.204226,0.413045,0.172838,0.413045,0.172838,0.404085,0.128949,0.626193,0.0942718,0.554059,0.105534,0.581606,0.0804937,0.531054,0.109126,0.535504,0.0662472,0.473929,0.118045,0.498435,0.0547921,0.512933,0.163238,0.512933,0.163238,0.538903,0.126799,0.45142,0.16915,0.45142,0.16915,0.44535,0.122507,0.453515,0.13418,0.46891,0.12944,0.485979,0.195361,0.485979,0.195361,0.491911,0.165258,0.491911,0.165258,0.331672,0.398592,0.498272,0.267116,0.498272,0.267116,0.452766,0.303028,0.493458,0.239018,0.493458,0.239018,0.475156,0.267807,0.427475,0.201823,0.467199,0.256796,0.467199,0.256796,0.358169,0.22306,0.429127,0.245015,0.406402,0.258661,0.38411,0.308883,0.411155,0.335866,0.387429,0.34053,0.734017,0.378259,0.500614,0.280787,0.500614,0.280787,0.617316,0.329523,0.732294,0.356085,0.66744,0.341103,0.574504,0.185583,0.574504,0.185583,0.633507,0.284318,0.512388,0.192444,0.512388,0.192444,0.608829,0.265599,0.495865,0.253067,0.495865,0.253067,0.57818,0.31318,0.513631,0.255038,0.513631,0.255038,0.516969,0.0605196,0.331628,0.400478,0.396832,0.397453,0.396832,0.397453,0.519589,0.391545,0.519589,0.391545,0.670962,0.407604,0.670962,0.407604,0.736544,0.410789,0.494411,0.501954,0.478219,0.497806,0.368391,0.437742,0.402098,0.429335,0.402098,0.429335,0.399859,0.41578,0.399859,0.41578,0.35169,0.399547,0.35169,0.399547,0.686004,0.417017,0.686004,0.417017,0.706354,0.41451,0.706354,0.41451,0.697912,0.42447,0.697912,0.42447,0.749593,0.37518,0.73121,0.404872,0.810657,0.373674,0.871039,0.400143,0.868778,0.417543,0.829902,0.430412,0.872155,0.441346,0.901368,0.458018,0.862443,0.477177,0.807803,0.472513,0.778839,0.443636,0.334768,0.394313,0.734937,0.444713,0.333214,0.431468,0.303359,0.431468,0.294629,0.391802,0.263284,0.456767,0.231493,0.458344,0.203366,0.446707,0.21326,0.431468,0.248715,0.414184,0.218516,0.406705,0.198501,0.385788,0.196661,0.364513,0.220942,0.351936,0.258443,0.356417,0.295422,0.373161,0.298994,0.411635,0.755024,0.424254,0.755024,0.424254,0.298994,0.411635}, 290);
IndexedFaceSet938.setTexCoord(&TextureCoordinate939);

Coordinate& Coordinate940 =  Coordinate();
Coordinate940.setPoint(new float[]{0.170026,-0.29082,-0.138926,0.177845,-0.0822688,-0.135483,0.164052,0.0428365,-0.148122,-0.116749,-0.299233,-0.121659,-0.0847451,-0.0439277,-0.159551,0.050647,0.0124539,-0.122678,-0.128439,-0.481132,-0.116393,-0.113224,-0.392876,-0.100175,-0.110432,-0.550097,-0.0702548,0.0893682,-0.598395,-0.0632217,0.11901,-0.561706,-0.0493969,0.14611,-0.597806,-0.11872,0.165451,-0.53975,-0.158059,0.0808115,-0.649237,-0.0608612,-0.0834451,-0.55635,-0.0596806,-0.0687735,-0.585381,-0.0461837,-0.0933362,-0.653601,-0.0871765,0.0839554,-0.745749,-0.129137,0.0227983,-0.730015,-0.0883081,0.0384024,-0.769243,-0.123075,0.00329405,-0.724997,-0.0752869,-0.00869914,-0.793535,-0.116806,-0.055535,-0.817658,-0.0988327,0.0170119,-0.696439,-0.0622573,-0.0706434,-0.689185,-0.076699,-0.05538,-0.667021,-0.0568455,-0.0461814,-0.681678,-0.0526634,-0.0175316,-0.574183,-0.0143187,-0.0121578,-0.631016,-0.0158694,-0.0398591,-0.370657,-0.0355259,-0.0230286,-0.437396,-0.0221038,-0.0301301,-0.458054,-0.0263232,-0.0621604,-0.479744,-0.0474687,-0.0802949,-0.453692,-0.0605742,-0.0970417,-0.358616,-0.0736657,-0.072691,-0.308145,-0.0597071,-0.0920802,-0.29902,-0.0731656,0.101938,-0.32026,-0.0556229,0.145231,-0.297792,-0.0803364,0.129316,-0.406192,-0.0552954,0.0931016,-0.440841,-0.0568882,-0.006613,-0.465484,-0.010107,0.0679598,-0.351564,-0.0369701,0.0111578,-0.46197,-0.00894701,-0.0269991,-0.806842,-0.108319,-0.111413,-0.197389,-0.126987,-0.0815984,-0.191791,-0.0692076,0.0195887,-0.204637,-1.13621e-7,0.149869,-0.172419,-0.0762956,0.174521,-0.183906,-0.136774,0.00261076,-0.0075499,-0.13576,-0.0142549,-0.0145733,-0.140354,-0.0986929,-0.120232,-0.142454,-0.0828069,-0.135005,-0.103903,-0.079978,-0.162921,-0.0840122,-0.0995393,-0.192094,-0.104453,0.161215,-0.17289,-0.103547,0.158099,-0.140077,-0.095143,0.259798,-0.214404,-0.109916,0.24709,-0.154915,-0.109916,0.23121,-0.179488,-0.144279,0.249593,-0.23551,-0.144279,0.307948,-0.216644,-0.109916,0.310657,-0.238351,-0.144279,0.355559,-0.177266,-0.109916,0.371039,-0.18841,-0.144279,0.353776,-0.151378,-0.109916,0.368778,-0.155579,-0.144279,0.323123,-0.132233,-0.109916,0.329902,-0.131299,-0.144279,0.356439,-0.115966,-0.109916,0.372155,-0.110668,-0.144279,0.379474,-0.0911624,-0.109916,0.401368,-0.0792117,-0.144279,0.348781,-0.0626583,-0.109916,0.362443,-0.0430621,-0.144279,0.305697,-0.069597,-0.109916,0.307803,-0.0518619,-0.144279,0.282859,-0.112559,-0.109916,0.278839,-0.106347,-0.144279,-0.163446,-0.184095,-0.109916,-0.165232,-0.19941,-0.144279,0.233294,-0.118401,-0.109916,0.234937,-0.104315,-0.144279,-0.168429,-0.143393,-0.109916,-0.166786,-0.129307,-0.144279,-0.205069,-0.138172,-0.109916,-0.196641,-0.129307,-0.144279,-0.212075,-0.198243,-0.109916,-0.205371,-0.204148,-0.144279,-0.237234,-0.0998582,-0.109916,-0.236716,-0.0815712,-0.144279,-0.262751,-0.097471,-0.109916,-0.268507,-0.0785969,-0.144279,-0.285326,-0.115094,-0.109916,-0.296634,-0.100553,-0.144279,-0.277385,-0.138172,-0.109916,-0.28674,-0.129307,-0.144279,-0.248928,-0.164346,-0.109916,-0.251285,-0.161917,-0.144279,-0.273167,-0.175673,-0.109916,-0.281484,-0.176028,-0.144279,-0.289231,-0.20735,-0.109916,-0.301499,-0.215494,-0.144279,-0.290708,-0.23957,-0.109916,-0.303339,-0.255637,-0.144279,-0.271219,-0.258616,-0.109916,-0.279058,-0.279367,-0.144279,-0.24112,-0.25183,-0.109916,-0.241557,-0.270913,-0.144279,-0.211439,-0.226473,-0.109916,-0.204578,-0.23932,-0.144279,-0.208444,-0.167111,-0.0932287,0.262034,-0.135532,-0.104945}, 342);
IndexedFaceSet938.setCoord(&Coordinate940);

Shape934.setGeometry(&IndexedFaceSet938);

Transform933.addChild(&Shape934);

Billboard932.addChild(&Transform933);

Transform931.addChild(&Billboard932);

Transform930.addChild(&Transform931);

Transform& Transform941 =  Transform();
Transform941.setDEF(CString("skull2"));
Transform941.setTranslation(new float[]{358.882,-206.751,328.855});
Transform941.setRotation(new float[]{0,-1,0,1.25291});
Transform& Transform942 =  Transform();
Transform942.setDEF(CString("skull_1"));
Transform& Transform943 =  Transform();
Transform943.setTranslation(new float[]{-156.15,207.522,216.007});
Billboard& Billboard944 =  Billboard();
Transform& Transform945 =  Transform();
Transform945.setTranslation(new float[]{0.0328271,-0.570084,0.111307});
Transform945.setScale(new float[]{0.703027,0.703027,0.703027});
Transform945.setCenter(new float[]{-0.0326739,0.747591,-0.128511});
Shape& Shape946 =  Shape();
Appearance& Appearance947 =  Appearance();
Material& Material948 =  Material();
Material948.setAmbientIntensity(0.280899);
Material948.setDiffuseColor(new float[]{0.946809,0.89016,0.600177});
Material948.setSpecularColor(new float[]{1,1,1});
Material948.setShininess(0.702128);
Appearance947.addChild(&Material948);

ImageTexture& ImageTexture949 =  ImageTexture();
ImageTexture949.setUSE(CString("_30"));
Appearance947.addChild(&ImageTexture949);

Shape946.addChild(&Appearance947);

IndexedFaceSet& IndexedFaceSet950 =  IndexedFaceSet();
IndexedFaceSet950.setSolid(False);
IndexedFaceSet950.setCreaseAngle(3.14159);
IndexedFaceSet950.setTexCoordIndex(new int32_t[]{46,37,49,-1,37,36,49,-1,46,49,51,-1,3,50,2,-1,47,38,4,-1,45,6,10,-1,42,45,10,-1,42,10,40,-1,10,33,40,-1,33,36,40,-1,11,12,22,-1,32,22,16,-1,32,11,22,-1,15,26,27,-1,15,23,26,-1,23,24,25,-1,23,12,24,-1,50,49,2,-1,49,34,2,-1,3,38,51,-1,38,46,51,-1,45,4,6,-1,45,47,4,-1,58,53,48,-1,58,48,35,-1,33,58,35,-1,7,62,60,-1,7,8,62,-1,8,63,62,-1,33,60,58,-1,33,7,60,-1,53,66,48,-1,53,64,66,-1,66,34,48,-1,66,0,34,-1,18,17,7,-1,18,32,16,-1,18,7,32,-1,17,19,21,-1,19,20,21,-1,65,1,0,-1,64,63,9,-1,63,8,9,-1,65,64,1,-1,64,9,1,-1,67,68,68,67,-1,69,67,67,69,-1,70,69,69,70,-1,71,70,70,71,-1,72,71,71,72,-1,73,72,72,73,-1,74,73,73,74,-1,75,74,74,75,-1,76,75,75,76,-1,75,76,77,-1,72,73,77,-1,74,75,77,-1,73,74,77,-1,77,76,76,77,-1,78,68,68,78,-1,79,77,77,79,-1,80,79,79,80,-1,81,80,80,81,-1,82,81,81,82,-1,83,81,81,83,-1,84,83,83,84,-1,85,84,84,85,-1,86,85,85,86,-1,87,86,86,87,-1,88,87,87,88,-1,89,88,88,89,-1,90,89,89,90,-1,91,90,90,91,-1,92,91,91,92,-1,93,92,92,93,-1,93,82,82,93,-1,94,93,82,-1,94,81,83,-1,94,87,88,-1,94,86,87,-1,94,88,89,-1,94,89,90,-1,94,90,91,-1,94,91,92,-1,94,92,93,-1,94,85,86,-1,94,84,85,-1,94,83,84,-1,78,68,95,96,82,-1,95,77,79,80,81,96,-1,97,72,77,-1,97,69,70,-1,97,70,71,-1,97,71,72,-1,28,29,15,-1,29,19,15,-1,67,69,68,-1,69,97,68,-1}, 424);
IndexedFaceSet950.setCoordIndex(new int32_t[]{31,26,32,-1,26,25,32,-1,31,32,33,-1,3,33,2,-1,31,27,4,-1,30,5,9,-1,29,30,9,-1,29,9,28,-1,9,23,28,-1,23,25,28,-1,9,10,16,-1,23,16,11,-1,23,9,16,-1,11,19,20,-1,11,16,19,-1,16,17,18,-1,16,10,17,-1,33,32,2,-1,32,24,2,-1,3,27,33,-1,27,31,33,-1,30,4,5,-1,30,31,4,-1,35,34,32,-1,35,32,25,-1,23,35,25,-1,6,37,36,-1,6,7,37,-1,7,38,37,-1,23,36,35,-1,23,6,36,-1,34,40,32,-1,34,39,40,-1,40,24,32,-1,40,0,24,-1,13,12,6,-1,13,23,11,-1,13,6,23,-1,12,13,15,-1,13,14,15,-1,40,1,0,-1,39,38,8,-1,38,7,8,-1,40,39,1,-1,39,8,1,-1,41,42,43,44,-1,45,41,44,46,-1,47,45,46,48,-1,49,47,48,50,-1,51,49,50,52,-1,53,51,52,54,-1,55,53,54,56,-1,57,55,56,58,-1,59,57,58,60,-1,57,59,61,-1,51,53,61,-1,55,57,61,-1,53,55,61,-1,61,59,60,62,-1,42,63,64,43,-1,65,61,62,66,-1,67,65,66,68,-1,69,67,68,70,-1,63,71,72,64,-1,73,69,70,74,-1,75,73,74,76,-1,77,75,76,78,-1,79,77,78,80,-1,81,79,80,82,-1,83,81,82,84,-1,85,83,84,86,-1,87,85,86,88,-1,89,87,88,90,-1,91,89,90,92,-1,93,91,92,94,-1,71,93,94,72,-1,95,93,71,-1,95,69,73,-1,95,81,83,-1,95,79,81,-1,95,83,85,-1,95,85,87,-1,95,87,89,-1,95,89,91,-1,95,91,93,-1,95,77,79,-1,95,75,77,-1,95,73,75,-1,63,42,96,95,71,-1,96,61,65,67,69,95,-1,96,51,61,-1,96,45,47,-1,96,47,49,-1,96,49,51,-1,21,22,11,-1,22,13,11,-1,41,45,42,-1,45,96,42,-1}, 424);
TextureCoordinate& TextureCoordinate951 =  TextureCoordinate();
TextureCoordinate951.setPoint(new float[]{0.625471,0.962222,0.812735,0.885793,0.324709,0.959695,0.0710967,0.845171,0.0939856,0.772855,0.450894,0.566416,0.229922,0.694228,0.580161,0.706635,0.648257,0.692177,0.847468,0.758627,0.333465,0.697896,0.333465,0.697896,0.332838,0.684864,0.578735,0.652995,0.578735,0.652995,0.468042,0.667341,0.468042,0.667341,0.57936,0.676519,0.539984,0.673273,0.539984,0.673273,0.553002,0.642463,0.578629,0.649016,0.384786,0.678132,0.384786,0.678132,0.330957,0.645779,0.364728,0.638418,0.390491,0.604096,0.455984,0.595073,0.490472,0.61755,0.531303,0.628863,0.187534,0.897751,0.732009,0.91874,0.456813,0.702266,0.456813,0.702266,0.47509,0.960958,0.459566,0.741228,0.459566,0.741228,0.325125,0.777201,0.0794491,0.818783,0.186509,0.719339,0.392261,0.735833,0.0890324,0.788504,0.322949,0.747872,0.172776,0.802987,0.172776,0.802987,0.290762,0.759685,0.274509,0.785768,0.274509,0.785768,0.46813,0.862446,0.46813,0.862446,0.285602,0.854504,0.285602,0.854504,0.816662,0.871418,0.564237,0.779389,0.828471,0.828183,0.458534,0.72663,0.458534,0.72663,0.505281,0.749963,0.505281,0.749963,0.712198,0.713506,0.543162,0.743289,0.837969,0.793405,0.600042,0.752958,0.63832,0.773986,0.640311,0.793437,0.632891,0.87783,0.632891,0.87783,0.749593,0.37518,0.73121,0.404872,0.810657,0.373674,0.871039,0.400143,0.868778,0.417543,0.829902,0.430412,0.872155,0.441346,0.901368,0.458018,0.862443,0.477177,0.807803,0.472513,0.778839,0.443636,0.334768,0.394313,0.734937,0.444713,0.333214,0.431468,0.303359,0.431468,0.294629,0.391802,0.263284,0.456767,0.231493,0.458344,0.203366,0.446707,0.21326,0.431468,0.248715,0.414184,0.218516,0.406705,0.198501,0.385788,0.196661,0.364513,0.220942,0.351936,0.258443,0.356417,0.295422,0.373161,0.298994,0.411635,0.755024,0.424254,0.298994,0.411635,0.755024,0.424254}, 196);
IndexedFaceSet950.setTexCoord(&TextureCoordinate951);

Coordinate& Coordinate952 =  Coordinate();
Coordinate952.setPoint(new float[]{0.110405,0.841788,-0.237501,0.21585,0.731281,-0.227798,-0.154585,0.835635,-0.233615,-0.265114,0.691961,-0.230242,-0.288793,0.509673,-0.245409,-0.235711,0.404156,-0.141072,0.0674488,0.358012,-0.0515823,0.127557,0.364806,-0.0921264,0.237717,0.491609,-0.257022,-0.181029,0.371436,-0.0695539,-0.151542,0.350471,-0.0543398,-0.0292647,0.31706,-0.000579407,0.0672483,0.329411,-0.0451259,0.0325478,0.317369,-0.0296691,0.0484802,0.26256,-0.046725,0.070443,0.278584,-0.0551211,-0.105209,0.337145,-0.0311992,-0.14777,0.277962,-0.067387,-0.117235,0.26376,-0.0532698,-0.0899637,0.19965,-0.051412,-0.0317591,0.181868,-0.0358799,-0.00398623,0.22976,-0.0481929,0.0311702,0.256889,-0.0477668,-0.0404813,0.382955,7.47313e-9,-0.021432,0.838709,-0.165185,-0.0377285,0.45647,7.6821e-9,-0.141338,0.539613,-0.052842,-0.273755,0.625443,-0.235776,-0.0980858,0.446029,-0.0296912,-0.14112,0.455766,-0.0511925,-0.185125,0.49778,-0.0682051,-0.183779,0.558297,-0.0742021,-0.0291645,0.685182,-1.25592e-9,-0.170736,0.690484,-0.0701952,0.0543608,0.528943,-0.0490673,0.00242253,0.473158,-0.0216999,0.0355712,0.460742,-0.0401538,0.0855176,0.479246,-0.067194,0.12043,0.519083,-0.0836102,0.121171,0.555795,-0.0851941,0.115402,0.714964,-0.0787549,-0.274161,0.397509,-0.0759497,-0.258126,0.344094,-0.0760598,-0.241332,0.368051,-0.110422,-0.257591,0.424726,-0.110422,-0.309989,0.396351,-0.0753589,-0.311879,0.418144,-0.109721,-0.332971,0.367755,-0.0760598,-0.34802,0.379475,-0.110422,-0.332164,0.341819,-0.0760598,-0.346997,0.346582,-0.110422,-0.315219,0.322627,-0.0760598,-0.322029,0.321948,-0.110422,-0.333408,0.306626,-0.075989,-0.349312,0.301925,-0.110351,-0.331727,0.290716,-0.0759741,-0.354056,0.279599,-0.110337,-0.316053,0.264959,-0.075947,-0.330444,0.245891,-0.110309,-0.277865,0.270282,-0.075656,-0.280637,0.252638,-0.110018,-0.259482,0.301926,-0.075656,-0.255699,0.295567,-0.110018,0.138441,0.355145,-0.0762625,0.140803,0.370382,-0.110625,-0.225975,0.305419,-0.0760598,-0.228147,0.291405,-0.110422,0.141887,0.314284,-0.0762625,0.139715,0.300269,-0.110625,0.166443,0.307338,-0.0765573,0.157688,0.298797,-0.11092,0.171443,0.364492,-0.0770387,0.164966,0.370646,-0.111401,0.179997,0.272009,-0.0762625,0.17879,0.253754,-0.110625,0.224875,0.243447,-0.0784859,0.229916,0.22437,-0.112848,0.257635,0.2816,-0.0762625,0.268387,0.266644,-0.110625,0.248452,0.322473,-0.0737841,0.257466,0.313261,-0.108147,0.223118,0.332189,-0.0762625,0.225383,0.329673,-0.110625,0.229813,0.338609,-0.0719985,0.238138,0.338651,-0.106361,0.247059,0.369658,-0.0719985,0.259625,0.377335,-0.106361,0.247404,0.383719,-0.0716961,0.260631,0.399299,-0.106059,0.237191,0.409732,-0.0732986,0.245806,0.430173,-0.107661,0.214892,0.411247,-0.0745307,0.216048,0.4303,-0.108893,0.190738,0.394235,-0.0770387,0.184366,0.407331,-0.111401,0.182767,0.336477,-0.059575,-0.254049,0.323621,-0.0710882}, 291);
IndexedFaceSet950.setCoord(&Coordinate952);

Shape946.setGeometry(&IndexedFaceSet950);

Transform945.addChild(&Shape946);

Billboard944.addChild(&Transform945);

Transform943.addChild(&Billboard944);

Transform942.addChild(&Transform943);

Transform941.addChild(&Transform942);

Transform930.addChild(&Transform941);

Transform& Transform953 =  Transform();
Transform953.setDEF(CString("skull1"));
Transform953.setTranslation(new float[]{242.959,-206.535,479.612});
Transform953.setRotation(new float[]{0,1,0,4.28856});
Transform& Transform954 =  Transform();
Transform954.setUSE(CString("skull_1"));
Transform953.addChild(&Transform954);

Transform930.addChild(&Transform953);

Transform929.addChild(&Transform930);

Transform& Transform955 =  Transform();
Transform955.setDEF(CString("stangen"));
Transform& Transform956 =  Transform();
Transform956.setDEF(CString("s15"));
Transform956.setTranslation(new float[]{111.015,-0.0429993,248.87});
Transform956.setRotation(new float[]{0.0970337,-0.870924,-0.481742,1.21221});
Transform956.setScale(new float[]{0.25,9.22852,0.25});
Transform956.setScaleOrientation(new float[]{-1.27332e-8,-1,-1.90302e-8,0.553574});
Shape& Shape957 =  Shape();
Appearance& Appearance958 =  Appearance();
Material& Material959 =  Material();
Material959.setAmbientIntensity(0);
Material959.setDiffuseColor(new float[]{1,1,1});
Material959.setShininess(0);
Appearance958.addChild(&Material959);

ImageTexture& ImageTexture960 =  ImageTexture();
ImageTexture960.setDEF(CString("_31"));
ImageTexture960.setUrl(new CString[]{CString("tikirinde1l.png")}, 1);
Appearance958.addChild(&ImageTexture960);

TextureTransform& TextureTransform961 =  TextureTransform();
TextureTransform961.setScale(new float[]{0.0524773,2.93525});
Appearance958.setTextureTransform(TextureTransform961);

Shape957.addChild(&Appearance958);

IndexedFaceSet& IndexedFaceSet962 =  IndexedFaceSet();
IndexedFaceSet962.setCreaseAngle(3.14159);
IndexedFaceSet962.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet962.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet962.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color963 =  CColor();
Color963.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet962.setColor(&Color963);

TextureCoordinate& TextureCoordinate964 =  TextureCoordinate();
TextureCoordinate964.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet962.setTexCoord(&TextureCoordinate964);

Coordinate& Coordinate965 =  Coordinate();
Coordinate965.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet962.setCoord(&Coordinate965);

Shape957.setGeometry(&IndexedFaceSet962);

Transform956.addChild(&Shape957);

Transform955.addChild(&Transform956);

Transform& Transform966 =  Transform();
Transform966.setDEF(CString("s14"));
Transform966.setTranslation(new float[]{110.286,0.146011,248.416});
Transform966.setRotation(new float[]{-0.000477086,-1,-0.000345267,1.25291});
Transform966.setScale(new float[]{0.25,11.4246,0.25});
Transform966.setScaleOrientation(new float[]{-2.30542e-11,-1,3.58408e-12,0.662909});
Shape& Shape967 =  Shape();
Appearance& Appearance968 =  Appearance();
Material& Material969 =  Material();
Material969.setAmbientIntensity(0);
Material969.setDiffuseColor(new float[]{1,1,1});
Material969.setShininess(0);
Appearance968.addChild(&Material969);

ImageTexture& ImageTexture970 =  ImageTexture();
ImageTexture970.setUSE(CString("_31"));
Appearance968.addChild(&ImageTexture970);

TextureTransform& TextureTransform971 =  TextureTransform();
TextureTransform971.setScale(new float[]{0.0524773,2.93525});
Appearance968.setTextureTransform(TextureTransform971);

Shape967.addChild(&Appearance968);

IndexedFaceSet& IndexedFaceSet972 =  IndexedFaceSet();
IndexedFaceSet972.setCreaseAngle(3.14159);
IndexedFaceSet972.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet972.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet972.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color973 =  CColor();
Color973.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet972.setColor(&Color973);

TextureCoordinate& TextureCoordinate974 =  TextureCoordinate();
TextureCoordinate974.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet972.setTexCoord(&TextureCoordinate974);

Coordinate& Coordinate975 =  Coordinate();
Coordinate975.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet972.setCoord(&Coordinate975);

Shape967.setGeometry(&IndexedFaceSet972);

Transform966.addChild(&Shape967);

Transform955.addChild(&Transform966);

Transform& Transform976 =  Transform();
Transform976.setDEF(CString("s13"));
Transform976.setTranslation(new float[]{109.411,-0.409988,248.47});
Transform976.setRotation(new float[]{0.125417,-0.987944,0.0907641,1.26446});
Transform976.setScale(new float[]{0.25,9.22853,0.25});
Transform976.setScaleOrientation(new float[]{-6.0055e-9,-1,7.54959e-9,0.109332});
Shape& Shape977 =  Shape();
Appearance& Appearance978 =  Appearance();
Material& Material979 =  Material();
Material979.setAmbientIntensity(0);
Material979.setDiffuseColor(new float[]{1,1,1});
Material979.setShininess(0);
Appearance978.addChild(&Material979);

ImageTexture& ImageTexture980 =  ImageTexture();
ImageTexture980.setUSE(CString("_31"));
Appearance978.addChild(&ImageTexture980);

TextureTransform& TextureTransform981 =  TextureTransform();
TextureTransform981.setScale(new float[]{0.0524773,2.93525});
Appearance978.setTextureTransform(TextureTransform981);

Shape977.addChild(&Appearance978);

IndexedFaceSet& IndexedFaceSet982 =  IndexedFaceSet();
IndexedFaceSet982.setCreaseAngle(3.14159);
IndexedFaceSet982.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet982.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet982.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color983 =  CColor();
Color983.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet982.setColor(&Color983);

TextureCoordinate& TextureCoordinate984 =  TextureCoordinate();
TextureCoordinate984.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet982.setTexCoord(&TextureCoordinate984);

Coordinate& Coordinate985 =  Coordinate();
Coordinate985.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet982.setCoord(&Coordinate985);

Shape977.setGeometry(&IndexedFaceSet982);

Transform976.addChild(&Shape977);

Transform955.addChild(&Transform976);

Transform& Transform986 =  Transform();
Transform986.setDEF(CString("s12"));
Transform986.setTranslation(new float[]{108.136,-0.423996,248.581});
Transform986.setRotation(new float[]{0.00263429,-0.999995,0.00190653,1.25292});
Transform986.setScale(new float[]{0.25,13.3369,0.25});
Transform986.setScaleOrientation(new float[]{-2.76447e-9,-1,1.53502e-9,0.553574});
Shape& Shape987 =  Shape();
Appearance& Appearance988 =  Appearance();
Material& Material989 =  Material();
Material989.setAmbientIntensity(0);
Material989.setDiffuseColor(new float[]{1,1,1});
Material989.setShininess(0);
Appearance988.addChild(&Material989);

ImageTexture& ImageTexture990 =  ImageTexture();
ImageTexture990.setUSE(CString("_31"));
Appearance988.addChild(&ImageTexture990);

TextureTransform& TextureTransform991 =  TextureTransform();
TextureTransform991.setScale(new float[]{0.0524773,2.93525});
Appearance988.setTextureTransform(TextureTransform991);

Shape987.addChild(&Appearance988);

IndexedFaceSet& IndexedFaceSet992 =  IndexedFaceSet();
IndexedFaceSet992.setCreaseAngle(3.14159);
IndexedFaceSet992.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet992.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet992.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color993 =  CColor();
Color993.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet992.setColor(&Color993);

TextureCoordinate& TextureCoordinate994 =  TextureCoordinate();
TextureCoordinate994.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet992.setTexCoord(&TextureCoordinate994);

Coordinate& Coordinate995 =  Coordinate();
Coordinate995.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet992.setCoord(&Coordinate995);

Shape987.setGeometry(&IndexedFaceSet992);

Transform986.addChild(&Shape987);

Transform955.addChild(&Transform986);

Transform& Transform996 =  Transform();
Transform996.setDEF(CString("s11"));
Transform996.setTranslation(new float[]{107.1,-0.480988,248.477});
Transform996.setRotation(new float[]{0.136341,-0.972394,-0.189371,1.27972});
Transform996.setScale(new float[]{0.25,8.96201,0.25});
Transform996.setScaleOrientation(new float[]{-2.87236e-8,-1,-5.88685e-8,0.0621774});
Shape& Shape997 =  Shape();
Appearance& Appearance998 =  Appearance();
Material& Material999 =  Material();
Material999.setAmbientIntensity(0);
Material999.setDiffuseColor(new float[]{1,1,1});
Material999.setShininess(0);
Appearance998.addChild(&Material999);

ImageTexture& ImageTexture1000 =  ImageTexture();
ImageTexture1000.setUSE(CString("_31"));
Appearance998.addChild(&ImageTexture1000);

TextureTransform& TextureTransform1001 =  TextureTransform();
TextureTransform1001.setScale(new float[]{0.0524773,2.93525});
Appearance998.setTextureTransform(TextureTransform1001);

Shape997.addChild(&Appearance998);

IndexedFaceSet& IndexedFaceSet1002 =  IndexedFaceSet();
IndexedFaceSet1002.setCreaseAngle(3.14159);
IndexedFaceSet1002.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1002.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1002.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1003 =  CColor();
Color1003.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1002.setColor(&Color1003);

TextureCoordinate& TextureCoordinate1004 =  TextureCoordinate();
TextureCoordinate1004.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1002.setTexCoord(&TextureCoordinate1004);

Coordinate& Coordinate1005 =  Coordinate();
Coordinate1005.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1002.setCoord(&Coordinate1005);

Shape997.setGeometry(&IndexedFaceSet1002);

Transform996.addChild(&Shape997);

Transform955.addChild(&Transform996);

Transform& Transform1006 =  Transform();
Transform1006.setDEF(CString("s10"));
Transform1006.setTranslation(new float[]{106.088,-0.272995,248.266});
Transform1006.setRotation(new float[]{-0.000477086,-1,-0.000345267,1.25291});
Transform1006.setScale(new float[]{0.25,7.41234,0.25});
Transform1006.setScaleOrientation(new float[]{-3.71526e-11,-1,8.47748e-12,0.662909});
Shape& Shape1007 =  Shape();
Appearance& Appearance1008 =  Appearance();
Material& Material1009 =  Material();
Material1009.setAmbientIntensity(0);
Material1009.setDiffuseColor(new float[]{1,1,1});
Material1009.setShininess(0);
Appearance1008.addChild(&Material1009);

ImageTexture& ImageTexture1010 =  ImageTexture();
ImageTexture1010.setUSE(CString("_31"));
Appearance1008.addChild(&ImageTexture1010);

TextureTransform& TextureTransform1011 =  TextureTransform();
TextureTransform1011.setScale(new float[]{0.0524773,2.93525});
Appearance1008.setTextureTransform(TextureTransform1011);

Shape1007.addChild(&Appearance1008);

IndexedFaceSet& IndexedFaceSet1012 =  IndexedFaceSet();
IndexedFaceSet1012.setCreaseAngle(3.14159);
IndexedFaceSet1012.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1012.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1012.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1013 =  CColor();
Color1013.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1012.setColor(&Color1013);

TextureCoordinate& TextureCoordinate1014 =  TextureCoordinate();
TextureCoordinate1014.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1012.setTexCoord(&TextureCoordinate1014);

Coordinate& Coordinate1015 =  Coordinate();
Coordinate1015.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1012.setCoord(&Coordinate1015);

Shape1007.setGeometry(&IndexedFaceSet1012);

Transform1006.addChild(&Shape1007);

Transform955.addChild(&Transform1006);

Transform& Transform1016 =  Transform();
Transform1016.setDEF(CString("s9"));
Transform1016.setTranslation(new float[]{104.903,-0.0979919,248.02});
Transform1016.setRotation(new float[]{-0.000477086,-1,-0.000345267,1.25291});
Transform1016.setScale(new float[]{0.25,11.5886,0.25});
Transform1016.setScaleOrientation(new float[]{-1.16413e-11,-1,6.57426e-13,0.740068});
Shape& Shape1017 =  Shape();
Appearance& Appearance1018 =  Appearance();
Material& Material1019 =  Material();
Material1019.setAmbientIntensity(0);
Material1019.setDiffuseColor(new float[]{1,1,1});
Material1019.setShininess(0);
Appearance1018.addChild(&Material1019);

ImageTexture& ImageTexture1020 =  ImageTexture();
ImageTexture1020.setUSE(CString("_31"));
Appearance1018.addChild(&ImageTexture1020);

TextureTransform& TextureTransform1021 =  TextureTransform();
TextureTransform1021.setScale(new float[]{0.0524773,2.93525});
Appearance1018.setTextureTransform(TextureTransform1021);

Shape1017.addChild(&Appearance1018);

IndexedFaceSet& IndexedFaceSet1022 =  IndexedFaceSet();
IndexedFaceSet1022.setCreaseAngle(3.14159);
IndexedFaceSet1022.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1022.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1022.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1023 =  CColor();
Color1023.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1022.setColor(&Color1023);

TextureCoordinate& TextureCoordinate1024 =  TextureCoordinate();
TextureCoordinate1024.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1022.setTexCoord(&TextureCoordinate1024);

Coordinate& Coordinate1025 =  Coordinate();
Coordinate1025.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1022.setCoord(&Coordinate1025);

Shape1017.setGeometry(&IndexedFaceSet1022);

Transform1016.addChild(&Shape1017);

Transform955.addChild(&Transform1016);

Transform& Transform1026 =  Transform();
Transform1026.setDEF(CString("s8"));
Transform1026.setTranslation(new float[]{104.564,0.126007,247.568});
Transform1026.setRotation(new float[]{0.536706,-0.470327,-0.700528,1.30867});
Transform1026.setScale(new float[]{0.25,8.45175,0.25});
Transform1026.setScaleOrientation(new float[]{2.94248e-9,-1,-9.19549e-8,0.301143});
Shape& Shape1027 =  Shape();
Appearance& Appearance1028 =  Appearance();
Material& Material1029 =  Material();
Material1029.setAmbientIntensity(0);
Material1029.setDiffuseColor(new float[]{1,1,1});
Material1029.setShininess(0);
Appearance1028.addChild(&Material1029);

ImageTexture& ImageTexture1030 =  ImageTexture();
ImageTexture1030.setUSE(CString("_31"));
Appearance1028.addChild(&ImageTexture1030);

TextureTransform& TextureTransform1031 =  TextureTransform();
TextureTransform1031.setScale(new float[]{0.0524773,2.93525});
Appearance1028.setTextureTransform(TextureTransform1031);

Shape1027.addChild(&Appearance1028);

IndexedFaceSet& IndexedFaceSet1032 =  IndexedFaceSet();
IndexedFaceSet1032.setCreaseAngle(3.14159);
IndexedFaceSet1032.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1032.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1032.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1033 =  CColor();
Color1033.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1032.setColor(&Color1033);

TextureCoordinate& TextureCoordinate1034 =  TextureCoordinate();
TextureCoordinate1034.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1032.setTexCoord(&TextureCoordinate1034);

Coordinate& Coordinate1035 =  Coordinate();
Coordinate1035.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1032.setCoord(&Coordinate1035);

Shape1027.setGeometry(&IndexedFaceSet1032);

Transform1026.addChild(&Shape1027);

Transform955.addChild(&Transform1026);

Transform& Transform1036 =  Transform();
Transform1036.setDEF(CString("s7"));
Transform1036.setTranslation(new float[]{111.181,0.0200043,249.042});
Transform1036.setRotation(new float[]{-0.324203,-0.328509,0.887116,1.33799});
Transform1036.setScale(new float[]{0.249999,13.4407,0.25});
Transform1036.setScaleOrientation(new float[]{3.46671e-8,-1,-2.52424e-7,0.04856});
Shape& Shape1037 =  Shape();
Appearance& Appearance1038 =  Appearance();
Material& Material1039 =  Material();
Material1039.setAmbientIntensity(0);
Material1039.setDiffuseColor(new float[]{1,1,1});
Material1039.setShininess(0);
Appearance1038.addChild(&Material1039);

ImageTexture& ImageTexture1040 =  ImageTexture();
ImageTexture1040.setUSE(CString("_31"));
Appearance1038.addChild(&ImageTexture1040);

TextureTransform& TextureTransform1041 =  TextureTransform();
TextureTransform1041.setScale(new float[]{0.0524773,2.93525});
Appearance1038.setTextureTransform(TextureTransform1041);

Shape1037.addChild(&Appearance1038);

IndexedFaceSet& IndexedFaceSet1042 =  IndexedFaceSet();
IndexedFaceSet1042.setCreaseAngle(3.14159);
IndexedFaceSet1042.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1042.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1042.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1043 =  CColor();
Color1043.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1042.setColor(&Color1043);

TextureCoordinate& TextureCoordinate1044 =  TextureCoordinate();
TextureCoordinate1044.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1042.setTexCoord(&TextureCoordinate1044);

Coordinate& Coordinate1045 =  Coordinate();
Coordinate1045.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1042.setCoord(&Coordinate1045);

Shape1037.setGeometry(&IndexedFaceSet1042);

Transform1036.addChild(&Shape1037);

Transform955.addChild(&Transform1036);

Transform& Transform1046 =  Transform();
Transform1046.setDEF(CString("s6"));
Transform1046.setTranslation(new float[]{108.973,-0.838989,248.51});
Transform1046.setRotation(new float[]{-0.00337497,-0.0308345,0.999519,1.8306});
Transform1046.setScale(new float[]{0.25,10.7322,0.25});
Transform1046.setScaleOrientation(new float[]{4.74508e-7,1,-1.45031e-7,0.0187465});
Shape& Shape1047 =  Shape();
Appearance& Appearance1048 =  Appearance();
Material& Material1049 =  Material();
Material1049.setAmbientIntensity(0);
Material1049.setDiffuseColor(new float[]{1,1,1});
Material1049.setShininess(0);
Appearance1048.addChild(&Material1049);

ImageTexture& ImageTexture1050 =  ImageTexture();
ImageTexture1050.setUSE(CString("_31"));
Appearance1048.addChild(&ImageTexture1050);

TextureTransform& TextureTransform1051 =  TextureTransform();
TextureTransform1051.setScale(new float[]{0.0524773,2.93525});
Appearance1048.setTextureTransform(TextureTransform1051);

Shape1047.addChild(&Appearance1048);

IndexedFaceSet& IndexedFaceSet1052 =  IndexedFaceSet();
IndexedFaceSet1052.setCreaseAngle(3.14159);
IndexedFaceSet1052.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1052.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1052.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1053 =  CColor();
Color1053.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1052.setColor(&Color1053);

TextureCoordinate& TextureCoordinate1054 =  TextureCoordinate();
TextureCoordinate1054.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1052.setTexCoord(&TextureCoordinate1054);

Coordinate& Coordinate1055 =  Coordinate();
Coordinate1055.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1052.setCoord(&Coordinate1055);

Shape1047.setGeometry(&IndexedFaceSet1052);

Transform1046.addChild(&Shape1047);

Transform955.addChild(&Transform1046);

Transform& Transform1056 =  Transform();
Transform1056.setDEF(CString("s5"));
Transform1056.setTranslation(new float[]{108.82,-0.0769958,248.532});
Transform1056.setRotation(new float[]{-0.00337496,-0.0308346,0.999519,1.8306});
Transform1056.setScale(new float[]{0.25,7.86152,0.25});
Shape& Shape1057 =  Shape();
Appearance& Appearance1058 =  Appearance();
Material& Material1059 =  Material();
Material1059.setAmbientIntensity(0);
Material1059.setDiffuseColor(new float[]{1,1,1});
Material1059.setShininess(0);
Appearance1058.addChild(&Material1059);

ImageTexture& ImageTexture1060 =  ImageTexture();
ImageTexture1060.setUSE(CString("_31"));
Appearance1058.addChild(&ImageTexture1060);

TextureTransform& TextureTransform1061 =  TextureTransform();
TextureTransform1061.setScale(new float[]{0.0524773,2.93525});
Appearance1058.setTextureTransform(TextureTransform1061);

Shape1057.addChild(&Appearance1058);

IndexedFaceSet& IndexedFaceSet1062 =  IndexedFaceSet();
IndexedFaceSet1062.setCreaseAngle(3.14159);
IndexedFaceSet1062.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1062.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1062.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1063 =  CColor();
Color1063.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1062.setColor(&Color1063);

TextureCoordinate& TextureCoordinate1064 =  TextureCoordinate();
TextureCoordinate1064.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1062.setTexCoord(&TextureCoordinate1064);

Coordinate& Coordinate1065 =  Coordinate();
Coordinate1065.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1062.setCoord(&Coordinate1065);

Shape1057.setGeometry(&IndexedFaceSet1062);

Transform1056.addChild(&Shape1057);

Transform955.addChild(&Transform1056);

Transform& Transform1066 =  Transform();
Transform1066.setDEF(CString("s4"));
Transform1066.setTranslation(new float[]{109.856,0.289001,248.481});
Transform1066.setRotation(new float[]{0.0196136,-0.0106051,0.999751,1.66753});
Transform1066.setScale(new float[]{0.25,9.04104,0.25});
Transform1066.setScaleOrientation(new float[]{4.91341e-7,1,-9.1091e-7,0.0227144});
Shape& Shape1067 =  Shape();
Appearance& Appearance1068 =  Appearance();
Material& Material1069 =  Material();
Material1069.setAmbientIntensity(0);
Material1069.setDiffuseColor(new float[]{1,1,1});
Material1069.setShininess(0);
Appearance1068.addChild(&Material1069);

ImageTexture& ImageTexture1070 =  ImageTexture();
ImageTexture1070.setUSE(CString("_31"));
Appearance1068.addChild(&ImageTexture1070);

TextureTransform& TextureTransform1071 =  TextureTransform();
TextureTransform1071.setScale(new float[]{0.0524773,2.93525});
Appearance1068.setTextureTransform(TextureTransform1071);

Shape1067.addChild(&Appearance1068);

IndexedFaceSet& IndexedFaceSet1072 =  IndexedFaceSet();
IndexedFaceSet1072.setCreaseAngle(3.14159);
IndexedFaceSet1072.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1072.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1072.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1073 =  CColor();
Color1073.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1072.setColor(&Color1073);

TextureCoordinate& TextureCoordinate1074 =  TextureCoordinate();
TextureCoordinate1074.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1072.setTexCoord(&TextureCoordinate1074);

Coordinate& Coordinate1075 =  Coordinate();
Coordinate1075.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1072.setCoord(&Coordinate1075);

Shape1067.setGeometry(&IndexedFaceSet1072);

Transform1066.addChild(&Shape1067);

Transform955.addChild(&Transform1066);

Transform& Transform1076 =  Transform();
Transform1076.setDEF(CString("s3"));
Transform1076.setTranslation(new float[]{107.644,-0.604996,248.473});
Transform1076.setRotation(new float[]{-0.00025454,-0.0338256,0.999428,1.62772});
Transform1076.setScale(new float[]{0.25,9.04104,0.25});
Shape& Shape1077 =  Shape();
Appearance& Appearance1078 =  Appearance();
Material& Material1079 =  Material();
Material1079.setAmbientIntensity(0);
Material1079.setDiffuseColor(new float[]{1,1,1});
Material1079.setShininess(0);
Appearance1078.addChild(&Material1079);

ImageTexture& ImageTexture1080 =  ImageTexture();
ImageTexture1080.setUSE(CString("_31"));
Appearance1078.addChild(&ImageTexture1080);

TextureTransform& TextureTransform1081 =  TextureTransform();
TextureTransform1081.setScale(new float[]{0.0524773,2.93525});
Appearance1078.setTextureTransform(TextureTransform1081);

Shape1077.addChild(&Appearance1078);

IndexedFaceSet& IndexedFaceSet1082 =  IndexedFaceSet();
IndexedFaceSet1082.setCreaseAngle(3.14159);
IndexedFaceSet1082.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1082.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1082.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1083 =  CColor();
Color1083.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1082.setColor(&Color1083);

TextureCoordinate& TextureCoordinate1084 =  TextureCoordinate();
TextureCoordinate1084.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1082.setTexCoord(&TextureCoordinate1084);

Coordinate& Coordinate1085 =  Coordinate();
Coordinate1085.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1082.setCoord(&Coordinate1085);

Shape1077.setGeometry(&IndexedFaceSet1082);

Transform1076.addChild(&Shape1077);

Transform955.addChild(&Transform1076);

Transform& Transform1086 =  Transform();
Transform1086.setDEF(CString("s2"));
Transform1086.setTranslation(new float[]{105.455,0.200012,248.206});
Transform1086.setRotation(new float[]{-0.0945558,-0.108685,0.989569,1.41835});
Transform1086.setScale(new float[]{0.25,9.04105,0.25});
Transform1086.setScaleOrientation(new float[]{2.76292e-8,1,-4.11479e-8,0.132245});
Shape& Shape1087 =  Shape();
Appearance& Appearance1088 =  Appearance();
Material& Material1089 =  Material();
Material1089.setAmbientIntensity(0);
Material1089.setDiffuseColor(new float[]{1,1,1});
Material1089.setShininess(0);
Appearance1088.addChild(&Material1089);

ImageTexture& ImageTexture1090 =  ImageTexture();
ImageTexture1090.setUSE(CString("_31"));
Appearance1088.addChild(&ImageTexture1090);

TextureTransform& TextureTransform1091 =  TextureTransform();
TextureTransform1091.setScale(new float[]{0.0524773,2.93525});
Appearance1088.setTextureTransform(TextureTransform1091);

Shape1087.addChild(&Appearance1088);

IndexedFaceSet& IndexedFaceSet1092 =  IndexedFaceSet();
IndexedFaceSet1092.setCreaseAngle(3.14159);
IndexedFaceSet1092.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1092.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1092.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1093 =  CColor();
Color1093.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1092.setColor(&Color1093);

TextureCoordinate& TextureCoordinate1094 =  TextureCoordinate();
TextureCoordinate1094.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1092.setTexCoord(&TextureCoordinate1094);

Coordinate& Coordinate1095 =  Coordinate();
Coordinate1095.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1092.setCoord(&Coordinate1095);

Shape1087.setGeometry(&IndexedFaceSet1092);

Transform1086.addChild(&Shape1087);

Transform955.addChild(&Transform1086);

Transform& Transform1096 =  Transform();
Transform1096.setDEF(CString("s1"));
Transform1096.setTranslation(new float[]{106.684,-0.169998,248.44});
Transform1096.setRotation(new float[]{-0.0945555,-0.108491,0.98959,1.4201});
Transform1096.setScale(new float[]{0.25,9.04105,0.25});
Transform1096.setScaleOrientation(new float[]{-8.62739e-9,-1,-1.85514e-8,0.225534});
Shape& Shape1097 =  Shape();
Appearance& Appearance1098 =  Appearance();
Material& Material1099 =  Material();
Material1099.setAmbientIntensity(0);
Material1099.setDiffuseColor(new float[]{1,1,1});
Material1099.setShininess(0);
Appearance1098.addChild(&Material1099);

ImageTexture& ImageTexture1100 =  ImageTexture();
ImageTexture1100.setUSE(CString("_31"));
Appearance1098.addChild(&ImageTexture1100);

TextureTransform& TextureTransform1101 =  TextureTransform();
TextureTransform1101.setScale(new float[]{0.0524773,2.93525});
Appearance1098.setTextureTransform(TextureTransform1101);

Shape1097.addChild(&Appearance1098);

IndexedFaceSet& IndexedFaceSet1102 =  IndexedFaceSet();
IndexedFaceSet1102.setCreaseAngle(3.14159);
IndexedFaceSet1102.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,0,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,3,0,-1,0,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,3,3,3,-1,0,3,1,-1,3,3,1,-1,1,3,0,-1,1,3,3,-1,0,0,2,-1,0,1,2,-1,2,0,0,-1,2,1,0,-1,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,-1,0,2,0,-1}, 140);
IndexedFaceSet1102.setTexCoordIndex(new int32_t[]{19,5,16,-1,5,9,16,-1,5,23,9,-1,23,20,9,-1,23,1,20,-1,1,26,14,24,3,20,-1,0,19,2,30,10,28,-1,19,16,2,-1,0,18,2,-1,0,32,18,-1,32,4,18,-1,32,6,4,-1,6,22,4,-1,6,34,22,-1,34,3,22,-1,34,1,3,-1,21,1,36,-1,1,3,36,-1,37,3,35,-1,37,1,25,15,27,3,-1,8,21,12,-1,21,36,12,-1,13,35,7,-1,13,37,35,-1,17,8,38,-1,8,12,38,-1,39,7,33,-1,39,13,7,-1,0,17,2,-1,17,38,2,-1,0,33,2,29,11,31,-1,0,39,33,-1}, 140);
IndexedFaceSet1102.setCoordIndex(new int32_t[]{17,8,16,-1,8,10,16,-1,8,19,10,-1,19,18,10,-1,19,3,18,-1,3,22,14,20,5,18,-1,2,17,4,26,11,24,-1,17,16,4,-1,0,17,2,-1,0,28,17,-1,28,8,17,-1,28,9,8,-1,9,19,8,-1,9,29,19,-1,29,3,19,-1,29,1,3,-1,18,5,30,-1,5,7,30,-1,30,1,29,-1,30,7,21,15,23,1,-1,10,18,13,-1,18,30,13,-1,13,29,9,-1,13,30,29,-1,16,10,31,-1,10,13,31,-1,31,9,28,-1,31,13,9,-1,4,16,6,-1,16,31,6,-1,6,28,0,25,12,27,-1,6,31,28,-1}, 140);
CColor& Color1103 =  CColor();
Color1103.setColor(new float[]{0.807487,0.564059,0.370649,0.465241,0.442101,0.250624,0.705882,0.384836,0.297124,0.388915,0.529412,0.297443}, 12);
IndexedFaceSet1102.setColor(&Color1103);

TextureCoordinate& TextureCoordinate1104 =  TextureCoordinate();
TextureCoordinate1104.setPoint(new float[]{0,1,0,0,1,1,1,0,1,0.5,0,0.5,0,0.5,1,0.5,0,0.5,1,0.5,0.5,1,0.5,1,1,0.5,0,0.5,0.5,0,0.5,0,1,0.75,0,0.75,1,0.75,0,0.75,1,0.25,0,0.25,1,0.25,0,0.25,0.75,0,0.25,0,0.25,0,0.75,0,0.25,1,0.75,1,0.75,1,0.25,1,0,0.75,1,0.75,0,0.25,1,0.25,1,0.25,0,0.25,1,0.75,0,0.75}, 80);
IndexedFaceSet1102.setTexCoord(&TextureCoordinate1104);

Coordinate& Coordinate1105 =  Coordinate();
Coordinate1105.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.0812499,-0.0119546,0.0241572,0.0396564,-0.0119546,0.219784,-0.114377,-0.0119546,-0.0174362,0.1,0.1,0,-0.1,0.1,0,-0.155971,-0.0119546,0.178191,0.1,-0.1,0,-0.1,-0.1,0,0.200592,0.0414629,-0.190371,0.31512,0.0414629,-0.0264098,-0.0524649,-0.0767684,-0.17882,0.0631774,-0.0767684,-0.0156423,0.1,-0.1,-0.05,-0.1,-0.1,-0.05,0.1,-0.1,0.05,-0.1,-0.1,0.05,0.1,0.1,0.05,-0.1,0.1,0.05,0.1,0.1,-0.05,-0.1,0.1,-0.05,0.151159,0.0414629,0.0881188,-0.1,-0.0767684,0.1,-0.215642,-0.0767684,-0.0631774,0.0366308,0.0414629,-0.0758422}, 96);
IndexedFaceSet1102.setCoord(&Coordinate1105);

Shape1097.setGeometry(&IndexedFaceSet1102);

Transform1096.addChild(&Shape1097);

Transform955.addChild(&Transform1096);

Transform929.addChild(&Transform955);

Group910.addChild(&Transform929);

Transform& Transform1106 =  Transform();
Transform1106.setDEF(CString("fels_2"));
Transform1106.setTranslation(new float[]{-1.52411,0,2.83789});
Transform1106.setScale(new float[]{100.841,100.841,100.841});
Shape& Shape1107 =  Shape();
Appearance& Appearance1108 =  Appearance();
Material& Material1109 =  Material();
Material1109.setAmbientIntensity(0.433333);
Material1109.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance1108.addChild(&Material1109);

ImageTexture& ImageTexture1110 =  ImageTexture();
ImageTexture1110.setUSE(CString("_10"));
Appearance1108.addChild(&ImageTexture1110);

TextureTransform& TextureTransform1111 =  TextureTransform();
TextureTransform1111.setScale(new float[]{4,4});
Appearance1108.setTextureTransform(TextureTransform1111);

Shape1107.addChild(&Appearance1108);

IndexedFaceSet& IndexedFaceSet1112 =  IndexedFaceSet();
IndexedFaceSet1112.setCreaseAngle(3.14159);
IndexedFaceSet1112.setColorIndex(new int[]{19,19,19,-1,19,19,19,-1,19,19,3,-1,19,19,3,-1,3,19,7,-1,29,4,19,-1,4,19,19,-1,19,19,19,-1,19,19,7,-1,19,7,7,-1,19,0,19,-1,0,7,19,-1,7,0,0,-1,7,0,6,-1,7,7,6,6,-1,19,7,19,-1,19,3,7,-1,1,1,1,-1,19,19,19,-1,19,19,19,-1,19,3,19,-1,8,8,8,26,-1,19,19,19,-1,1,8,1,-1,8,2,2,-1,8,19,6,-1,19,19,19,-1,19,19,19,-1,19,19,19,-1,19,19,2,-1,19,19,2,19,-1,2,26,8,-1,19,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,19,-1,2,2,2,2,-1,2,2,2,-1,19,2,2,19,-1,2,2,2,2,-1,2,2,2,2,-1,2,8,8,-1,2,2,2,2,-1,2,8,2,-1,2,2,2,2,-1,2,2,8,2,-1,8,8,19,8,-1,8,19,19,19,-1,19,2,2,19,-1,2,8,8,19,-1,19,19,6,-1,19,19,7,6,-1,19,19,7,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,19,19,19,-1,19,19,3,19,-1,3,19,19,-1,19,3,19,19,19,-1,3,19,3,-1,29,3,19,19,-1,3,3,19,-1,3,3,19,3,-1,3,3,3,-1,3,29,19,-1,1,1,1,1,-1,1,1,3,-1,19,19,19,-1,3,19,19,-1,1,1,3,-1,19,19,3,-1,3,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,14,14,14,-1,13,19,19,-1,19,19,19,-1,22,22,22,-1,25,25,25,25,-1,20,20,20,-1,19,19,19,-1,20,20,20,-1,19,19,19,-1,0,0,0,-1,20,20,20,-1,15,15,15,-1,14,14,14,-1,17,17,18,-1,17,18,17,-1,13,13,19,-1,13,13,13,-1,13,13,13,-1,13,13,13,-1,13,13,13,-1,18,18,17,-1,18,17,18,-1,0,0,0,-1,0,0,0,-1,17,17,17,-1,17,17,18,-1,12,12,12,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,13,11,-1,13,13,11,-1,13,11,11,-1,11,27,13,-1,27,27,13,-1,12,12,12,-1,11,11,11,-1,11,11,11,-1,12,12,12,-1,12,12,12,-1,27,13,13,-1,13,11,11,13,13,-1,13,13,12,12,-1,13,13,13,-1,13,13,13,-1,10,10,10,-1,10,10,10,-1,13,10,10,-1,12,12,12,-1,12,12,12,-1,13,10,10,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,13,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,13,9,-1,9,9,9,-1,9,9,13,-1,9,9,13,-1,14,14,14,-1,16,16,16,-1,19,19,13,-1,19,19,19,-1,23,23,23,-1,19,19,19,-1,21,21,21,-1,24,24,24,24,-1,19,19,19,-1,20,20,20,-1,20,20,20,-1,12,12,12,-1,20,20,20,-1,14,14,14,-1,12,12,12,-1,18,17,17,-1,17,18,17,-1,19,13,13,-1,13,13,13,-1,13,13,13,-1,13,13,13,-1,13,13,13,-1,17,18,18,-1,0,0,0,-1,18,17,18,-1,0,0,0,-1,17,17,17,-1,17,18,17,-1,12,12,12,-1,11,11,11,-1,12,12,12,-1,12,12,12,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,11,11,-1,11,13,11,-1,11,11,13,-1,11,13,13,-1,13,13,11,-1,13,13,13,-1,12,12,12,-1,12,12,12,-1,11,11,11,-1,11,11,11,-1,10,10,10,-1,13,13,13,-1,13,13,11,11,13,-1,12,12,13,13,-1,13,13,13,-1,13,13,13,-1,10,10,13,-1,10,10,10,-1,12,12,12,-1,12,12,12,-1,12,12,12,-1,10,10,13,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,13,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,9,9,-1,9,13,9,-1,9,9,9,9,9,9,-1,9,9,9,-1,9,9,9,-1,13,9,9,-1,13,9,9,-1,8,8,8,8,8,-1,26,2,26,-1,11,11,26,-1,11,11,26,-1,11,11,26,-1,11,11,26,-1,11,11,26,-1,11,11,26,-1,11,11,26,-1,11,11,26,-1,27,27,27,-1,13,13,27,-1,13,13,27,-1,13,27,27,-1,11,11,26,-1,27,11,26,-1,27,27,26,-1,19,8,8,-1,19,19,8,-1,19,19,8,-1,8,8,8,8,-1,8,27,8,-1,19,13,8,-1,8,19,8,-1,13,27,8,-1,8,8,8,-1,19,8,8,-1,19,19,8,-1,19,19,8,-1,8,19,8,8,-1,8,8,8,-1,8,26,8,-1,13,19,8,-1,19,19,8,-1,19,8,8,-1,13,13,26,-1,13,13,26,-1,13,13,26,-1,13,13,26,-1,13,8,26,-1,11,11,26,-1,11,13,26,-1,13,26,26,-1,12,12,12,-1,11,11,11,-1,12,12,12,-1,12,12,12,-1,11,11,11,-1,11,11,11,-1,12,12,12,-1,9,9,9,-1,9,9,9,-1,9,9,9,9,9,-1,12,12,12,-1,9,9,9,-1,9,9,9,-1,11,11,11,-1,11,11,11,-1,12,12,12,-1,26,28,29,-1,26,2,8,-1,26,6,6,-1,26,8,6,-1,0,0,0,28,-1,0,0,28,-1,0,0,6,-1,0,28,6,-1,28,5,29,-1,5,8,29,-1,27,26,29,-1,27,8,8,-1,27,29,8,-1,5,28,19,-1,3,19,3,3,-1,19,3,3,19,-1,19,19,19,19,-1,19,19,19,3,-1,19,3,19,19,-1,3,3,19,3,-1,19,19,19,3,-1,19,3,3,3,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,19,19,-1,19,19,3,19,-1,19,19,3,19,-1,19,19,19,19,-1,26,6,26,-1,26,26,26,-1,26,26,26,-1,11,11,26,-1,11,11,26,-1,26,11,26,-1,11,26,26,-1,26,26,28,-1,26,6,28,-1,19,0,0,19,19,-1,19,0,19,19,-1,19,19,19,19,-1,19,19,19,-1,19,19,19,-1,19,19,19,-1,19,19,19,19,-1,28,0,19,-1,0,0,19,-1,0,0,0,-1,0,0,0,-1,0,19,0,-1,19,19,19,-1,1,1,1,-1,1,1,1,-1,1,1,1,1,-1,1,1,1,-1,0,19,19,-1,0,19,19,-1,1,1,1,-1,1,1,1,-1,0,0,19,-1,19,19,19,-1,19,19,0,-1,19,19,0,0,-1,19,19,0,-1,0,0,0,-1,4,29,19,19,-1,4,19,19,19,-1,19,19,19,-1,19,19,19,19,-1,19,19,19,-1,19,19,19,-1,19,0,0,-1,19,19,19,19,-1,19,19,19,-1,19,19,19,-1,0,0,19,19,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,19,0,-1,0,0,19,-1,0,0,0,-1,0,0,0,0,-1,19,0,0,0,-1,19,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,19,28,19,-1,28,19,19,-1}, 1715);
IndexedFaceSet1112.setTexCoordIndex(new int32_t[]{10,23,11,-1,14,19,15,-1,225,260,16,-1,260,20,16,-1,16,20,17,-1,317,21,14,-1,21,22,14,-1,14,22,19,-1,20,26,17,-1,26,25,17,-1,20,230,26,-1,230,25,26,-1,25,230,226,-1,25,226,27,-1,17,25,27,28,-1,12,17,13,-1,12,16,17,-1,303,305,304,-1,227,224,12,-1,224,225,12,-1,225,16,12,-1,157,1,32,149,-1,6,31,4,-1,308,309,310,-1,18,30,33,-1,18,34,28,-1,6,227,35,-1,227,12,35,-1,6,36,31,-1,35,12,37,-1,6,35,37,36,-1,30,149,32,-1,12,264,37,-1,12,263,264,-1,12,261,263,-1,37,264,265,36,-1,38,39,41,40,-1,39,29,41,-1,36,265,267,31,-1,40,41,43,42,-1,41,29,52,43,-1,30,32,44,-1,53,33,30,45,-1,30,44,45,-1,267,266,46,47,-1,46,45,44,47,-1,1,49,48,32,-1,49,4,31,48,-1,31,267,47,48,-1,47,44,32,48,-1,34,50,28,-1,50,51,17,28,-1,51,13,17,-1,304,305,306,311,-1,306,307,312,311,-1,307,308,310,312,-1,266,262,201,-1,199,53,45,-1,46,266,201,-1,46,199,45,-1,46,201,199,-1,197,33,53,199,-1,262,261,196,201,-1,23,15,11,-1,23,55,54,15,-1,54,14,15,-1,58,57,55,23,56,-1,54,55,57,-1,317,59,58,56,-1,59,62,58,-1,63,57,58,62,-1,54,57,63,-1,59,317,14,-1,325,323,324,326,-1,324,323,322,-1,60,61,14,-1,54,60,14,-1,325,326,327,-1,14,61,59,-1,316,63,62,320,-1,318,54,316,-1,54,63,316,-1,59,320,62,-1,59,319,320,-1,90,106,105,-1,99,70,76,-1,64,65,70,-1,65,64,66,-1,70,65,159,76,-1,159,67,76,-1,166,159,65,-1,159,166,67,-1,166,65,66,-1,105,166,66,-1,166,110,67,-1,90,68,106,-1,90,91,68,-1,105,66,69,-1,88,69,93,-1,99,94,70,-1,94,93,71,-1,94,71,70,-1,71,64,70,-1,71,66,64,-1,69,72,93,-1,69,66,72,-1,93,72,71,-1,72,66,71,-1,88,87,69,-1,87,105,69,-1,87,90,105,-1,253,248,73,-1,253,120,248,-1,120,102,248,-1,102,246,248,-1,102,101,246,-1,247,95,74,-1,101,250,246,-1,250,247,74,-1,101,103,250,-1,250,103,104,-1,250,104,247,-1,95,78,74,-1,78,84,160,-1,78,160,74,-1,95,97,78,-1,97,96,78,-1,110,112,67,-1,126,79,77,-1,112,126,77,-1,76,67,77,-1,112,77,67,-1,96,100,78,-1,80,77,79,84,78,-1,80,99,76,77,-1,100,80,78,-1,80,100,99,-1,126,170,79,-1,170,162,79,-1,84,79,162,-1,250,74,161,-1,74,160,161,-1,84,162,163,-1,83,169,85,-1,83,133,169,-1,133,83,81,-1,81,162,170,-1,128,133,81,-1,128,81,170,-1,82,160,84,-1,82,86,160,-1,86,161,160,-1,81,75,162,-1,75,163,162,-1,75,84,163,-1,82,164,75,-1,164,82,84,-1,75,164,84,-1,138,105,106,-1,138,106,68,-1,125,114,167,-1,114,109,107,-1,108,107,109,-1,108,109,166,-1,108,166,105,-1,125,165,109,114,-1,109,165,166,-1,125,111,165,-1,165,111,166,-1,111,112,110,-1,111,110,166,-1,139,138,68,-1,139,68,91,-1,113,108,105,-1,143,113,141,-1,114,142,167,-1,115,143,142,-1,114,115,142,-1,114,107,115,-1,107,108,115,-1,143,116,113,-1,115,116,143,-1,116,108,113,-1,115,108,116,-1,113,140,141,-1,140,113,105,-1,138,140,105,-1,253,73,117,-1,73,85,117,-1,85,169,117,-1,255,120,253,-1,255,118,120,-1,122,145,147,-1,122,147,121,-1,121,152,151,-1,153,152,121,-1,147,153,121,-1,122,129,145,-1,122,171,129,-1,171,178,129,-1,129,148,145,-1,129,150,148,-1,124,111,125,-1,111,124,112,-1,124,126,112,-1,124,127,126,-1,127,170,126,-1,129,130,150,-1,129,178,127,124,131,-1,124,125,167,131,-1,129,131,130,-1,167,130,131,-1,173,127,178,-1,127,173,170,-1,168,117,169,-1,172,122,121,-1,172,171,122,-1,174,173,178,-1,176,168,132,-1,132,168,169,-1,132,169,133,-1,173,175,170,-1,175,132,133,-1,175,133,128,-1,175,128,170,-1,178,171,134,-1,171,136,134,-1,171,172,136,-1,173,177,175,-1,173,174,177,-1,174,178,177,-1,132,175,177,134,136,135,-1,176,132,135,-1,177,123,134,-1,178,123,177,-1,178,134,123,-1,251,252,137,89,156,-1,257,258,146,-1,101,102,154,-1,104,103,154,-1,247,104,154,-1,103,101,154,-1,118,151,278,-1,151,152,278,-1,152,153,278,-1,153,147,278,-1,96,97,273,-1,94,99,273,-1,99,100,273,-1,100,96,273,-1,95,247,154,-1,97,95,154,-1,273,97,154,-1,87,88,272,-1,90,87,272,-1,91,90,272,-1,89,92,155,156,-1,92,98,155,-1,93,94,274,-1,88,93,274,-1,94,273,274,-1,272,88,274,-1,138,139,275,-1,140,138,275,-1,141,140,275,-1,139,91,272,275,-1,252,144,137,-1,252,257,144,-1,142,143,277,-1,143,141,277,-1,141,275,277,-1,148,150,276,-1,150,130,276,-1,167,142,276,-1,130,167,276,-1,142,277,276,-1,147,145,278,-1,145,148,278,-1,148,276,278,-1,172,121,176,-1,253,117,255,-1,117,168,255,-1,168,176,255,-1,118,255,121,-1,151,118,121,-1,255,176,121,-1,135,136,176,-1,136,172,176,-1,82,75,81,83,86,-1,85,73,161,-1,83,85,161,-1,86,83,161,-1,73,248,250,-1,248,246,250,-1,161,73,250,-1,249,0,179,-1,146,258,256,-1,146,245,244,-1,146,256,245,-1,236,356,237,0,-1,237,238,0,-1,243,236,244,-1,236,0,244,-1,240,229,242,-1,229,241,242,-1,98,249,179,-1,98,228,155,-1,98,179,228,-1,229,240,234,-1,181,182,193,187,-1,180,181,187,189,-1,202,180,189,192,-1,182,202,192,193,-1,190,191,192,189,-1,194,193,192,191,-1,188,190,189,187,-1,188,187,193,194,-1,206,203,200,195,-1,205,206,195,198,-1,204,205,198,158,-1,203,204,158,200,-1,199,268,270,197,-1,201,269,268,199,-1,311,312,313,314,-1,196,271,269,201,-1,184,183,180,202,-1,184,203,206,183,-1,185,184,202,182,-1,185,204,203,184,-1,185,186,205,204,-1,185,182,181,186,-1,183,186,181,180,-1,183,206,205,186,-1,146,244,207,-1,249,254,207,-1,254,146,207,-1,102,120,119,-1,120,118,119,-1,154,102,119,-1,118,278,119,-1,249,207,0,-1,207,244,0,-1,213,210,209,215,214,-1,287,210,213,289,-1,213,214,288,289,-1,286,288,214,-1,286,214,215,-1,286,215,216,-1,295,286,216,217,-1,240,239,235,-1,24,218,279,-1,285,283,218,-1,212,285,218,-1,283,279,218,-1,295,217,293,-1,300,298,299,-1,300,299,301,-1,292,290,291,211,-1,300,301,302,-1,210,220,294,-1,210,287,220,-1,300,297,298,-1,297,296,298,-1,285,212,284,-1,260,221,20,-1,20,221,230,-1,221,260,259,230,-1,231,232,233,-1,208,24,8,-1,21,317,328,329,-1,21,330,331,22,-1,330,321,331,-1,22,332,333,19,-1,332,321,333,-1,315,19,334,-1,223,336,222,-1,281,339,337,282,-1,281,280,338,-1,284,340,280,-1,212,343,341,284,-1,342,212,219,345,-1,344,219,346,-1,9,5,347,348,-1,347,219,348,-1,222,335,351,3,-1,335,5,351,-1,9,353,350,5,-1,353,3,350,-1,2,352,9,-1,2,3,352,-1,7,2,354,-1,2,9,354,-1,8,357,355,9,-1,357,7,355,-1,24,358,218,-1,24,208,358,-1,208,360,363,-1,360,219,212,363,-1,359,362,212,218,-1,359,208,362,-1,208,8,364,361,-1,364,219,361,-1,8,9,349,365,-1,349,219,365,-1,234,240,366,-1,240,235,366,-1}, 1715);
IndexedFaceSet1112.setCoordIndex(new int32_t[]{14,1,15,-1,18,23,19,-1,19,23,20,-1,23,24,20,-1,20,24,21,-1,0,25,18,-1,25,26,18,-1,18,26,23,-1,24,28,21,-1,28,27,21,-1,24,7,28,-1,7,27,28,-1,27,7,5,-1,27,5,29,-1,21,27,29,30,-1,16,21,17,-1,16,20,21,-1,16,17,31,-1,14,15,16,-1,15,19,16,-1,19,20,16,-1,189,4,35,34,-1,10,33,8,-1,37,22,36,-1,22,32,36,-1,22,37,30,-1,10,14,38,-1,14,16,38,-1,10,39,33,-1,38,16,40,-1,10,38,40,39,-1,32,34,35,-1,16,41,40,-1,16,42,41,-1,16,31,42,-1,40,41,43,39,-1,41,42,44,43,-1,42,31,44,-1,39,43,45,33,-1,43,44,46,45,-1,44,31,57,46,-1,32,35,47,-1,58,36,32,48,-1,32,47,48,-1,45,46,49,50,-1,49,48,47,50,-1,4,52,51,35,-1,52,8,33,51,-1,33,45,50,51,-1,50,47,35,51,-1,37,53,30,-1,53,54,21,30,-1,54,17,21,-1,31,17,54,55,-1,54,53,56,55,-1,53,37,36,56,-1,46,57,59,-1,60,58,48,-1,49,46,59,-1,49,60,48,-1,49,59,60,-1,56,36,58,60,-1,57,31,55,59,-1,1,19,15,-1,1,62,61,19,-1,61,18,19,-1,65,64,62,1,63,-1,61,62,64,-1,0,66,65,63,-1,66,69,65,-1,70,64,65,69,-1,61,64,70,-1,66,0,18,-1,71,72,67,68,-1,67,72,61,-1,72,71,18,-1,61,72,18,-1,71,68,66,-1,18,71,66,-1,74,70,69,73,-1,67,61,74,-1,61,70,74,-1,66,73,69,-1,66,68,73,-1,75,76,77,-1,78,79,80,-1,81,82,79,-1,82,81,83,-1,79,82,84,80,-1,84,85,80,-1,86,84,82,-1,84,86,85,-1,86,82,83,-1,77,86,83,-1,86,87,85,-1,75,88,76,-1,75,89,88,-1,77,83,90,-1,91,90,92,-1,78,93,79,-1,93,92,94,-1,93,94,79,-1,94,81,79,-1,94,83,81,-1,90,95,92,-1,90,83,95,-1,92,95,94,-1,95,83,94,-1,91,96,90,-1,96,77,90,-1,96,75,77,-1,97,98,99,-1,97,100,98,-1,100,101,98,-1,101,102,98,-1,101,103,102,-1,104,105,106,-1,103,107,102,-1,107,104,106,-1,103,108,107,-1,107,108,109,-1,107,109,104,-1,105,110,106,-1,110,111,112,-1,110,112,106,-1,105,113,110,-1,113,114,110,-1,87,115,85,-1,116,117,118,-1,115,116,118,-1,80,85,118,-1,115,118,85,-1,114,119,110,-1,120,118,117,111,110,-1,120,78,80,118,-1,119,120,110,-1,120,119,78,-1,116,121,117,-1,121,122,117,-1,111,117,122,-1,107,106,123,-1,106,112,123,-1,111,122,125,-1,126,127,124,-1,126,128,127,-1,128,126,129,-1,129,122,121,-1,130,128,129,-1,130,129,121,-1,131,112,111,-1,131,132,112,-1,132,123,112,-1,129,133,122,-1,133,125,122,-1,133,111,125,-1,131,134,133,-1,134,131,111,-1,133,134,111,-1,135,77,76,-1,135,76,88,-1,136,137,138,-1,137,139,140,-1,141,140,139,-1,141,139,86,-1,141,86,77,-1,136,142,139,137,-1,139,142,86,-1,136,143,142,-1,142,143,86,-1,143,115,87,-1,143,87,86,-1,144,135,88,-1,144,88,89,-1,145,141,77,-1,146,145,147,-1,137,148,138,-1,149,146,148,-1,137,149,148,-1,137,140,149,-1,140,141,149,-1,146,150,145,-1,149,150,146,-1,150,141,145,-1,149,141,150,-1,145,151,147,-1,151,145,77,-1,135,151,77,-1,97,99,152,-1,99,124,152,-1,124,127,152,-1,153,100,97,-1,153,154,100,-1,156,157,158,-1,156,158,159,-1,159,160,155,-1,161,160,159,-1,158,161,159,-1,156,162,157,-1,156,163,162,-1,163,164,162,-1,162,165,157,-1,162,166,165,-1,167,143,136,-1,143,167,115,-1,167,116,115,-1,167,168,116,-1,168,121,116,-1,162,169,166,-1,162,164,168,167,170,-1,167,136,138,170,-1,162,170,169,-1,138,169,170,-1,171,168,164,-1,168,171,121,-1,172,152,127,-1,173,156,159,-1,173,163,156,-1,175,171,164,-1,174,172,176,-1,176,172,127,-1,176,127,128,-1,171,177,121,-1,177,176,128,-1,177,128,130,-1,177,130,121,-1,164,163,178,-1,163,179,178,-1,163,173,179,-1,171,180,177,-1,171,175,180,-1,175,164,180,-1,176,177,180,178,179,181,-1,174,176,181,-1,180,182,178,-1,164,182,180,-1,164,178,182,-1,4,189,190,188,186,-1,34,32,191,-1,103,101,184,-1,109,108,184,-1,104,109,184,-1,108,103,184,-1,154,155,191,-1,155,160,191,-1,160,161,191,-1,161,158,191,-1,114,113,187,-1,93,78,187,-1,78,119,187,-1,119,114,187,-1,105,104,184,-1,113,105,184,-1,187,113,184,-1,96,91,188,-1,75,96,188,-1,89,75,188,-1,188,192,185,186,-1,192,187,185,-1,92,93,192,-1,91,92,192,-1,93,187,192,-1,188,91,192,-1,135,144,190,-1,151,135,190,-1,147,151,190,-1,144,89,188,190,-1,189,193,190,-1,189,34,193,-1,148,146,193,-1,146,147,193,-1,147,190,193,-1,165,166,34,-1,166,169,34,-1,138,148,34,-1,169,138,34,-1,148,193,34,-1,158,157,191,-1,157,165,191,-1,165,34,191,-1,173,159,174,-1,97,152,153,-1,152,172,153,-1,172,174,153,-1,154,153,159,-1,155,154,159,-1,153,174,159,-1,181,179,174,-1,179,173,174,-1,131,133,129,126,132,-1,124,99,123,-1,126,124,123,-1,132,126,123,-1,99,98,107,-1,98,102,107,-1,123,99,107,-1,184,194,183,-1,191,32,22,-1,191,30,29,-1,191,22,30,-1,11,257,12,194,-1,12,2,194,-1,5,11,29,-1,11,194,29,-1,194,195,183,-1,195,3,183,-1,187,184,183,-1,187,3,185,-1,187,183,3,-1,195,194,196,-1,204,203,205,206,-1,198,204,206,207,-1,197,198,207,208,-1,203,197,208,205,-1,67,74,208,207,-1,73,205,208,74,-1,68,67,207,206,-1,68,206,205,73,-1,199,200,210,209,-1,201,199,209,211,-1,202,201,211,212,-1,200,202,212,210,-1,60,212,211,56,-1,59,210,212,60,-1,55,56,211,209,-1,55,209,210,59,-1,214,213,198,197,-1,214,200,199,213,-1,215,214,197,203,-1,215,202,200,214,-1,215,216,201,202,-1,215,203,204,216,-1,213,216,204,198,-1,213,199,201,216,-1,191,29,217,-1,184,218,217,-1,218,191,217,-1,101,100,218,-1,100,154,218,-1,184,101,218,-1,154,191,218,-1,184,217,194,-1,217,29,194,-1,228,225,222,227,229,-1,226,225,228,230,-1,228,229,231,230,-1,232,231,229,-1,232,229,227,-1,232,227,235,-1,233,232,235,236,-1,194,2,224,-1,2,237,224,-1,222,225,237,-1,221,222,237,-1,225,224,237,-1,233,236,234,-1,224,230,231,-1,224,231,232,-1,224,233,234,223,-1,224,232,233,-1,225,238,224,-1,225,226,238,-1,224,238,230,-1,238,226,230,-1,222,221,227,-1,23,239,24,-1,24,239,7,-1,239,23,240,7,-1,23,241,240,-1,219,2,12,-1,25,0,242,243,-1,25,243,244,26,-1,243,6,244,-1,26,244,245,23,-1,244,6,245,-1,241,23,245,-1,241,246,240,-1,236,248,247,234,-1,236,235,248,-1,227,249,235,-1,221,250,249,227,-1,250,221,220,251,-1,251,220,252,-1,13,9,252,253,-1,252,220,253,-1,240,246,254,7,-1,246,9,254,-1,13,255,254,9,-1,255,7,254,-1,5,255,13,-1,5,7,255,-1,11,5,256,-1,5,13,256,-1,12,257,256,13,-1,257,11,256,-1,2,258,237,-1,2,219,258,-1,219,259,260,-1,259,220,221,260,-1,258,260,221,237,-1,258,219,260,-1,219,12,261,259,-1,261,220,259,-1,12,13,253,261,-1,253,220,261,-1,196,194,223,-1,194,224,223,-1}, 1715);
CColor& Color1113 =  CColor();
Color1113.setColor(new float[]{1,1,1,0,0.657754,0.117251,0.342246,0.21031,0,0.374332,0.25133,0.00887869,0.764706,0.360696,0,0.764706,0.516213,0,1,0.928158,0.66906,0.49397,1,0.330888,0.169059,0.342246,0.113245,0.0534759,0.0359043,0.00126838,0.860963,0.578058,0.020421,0.454545,0.305186,0.0107813,0.860963,0.773137,0.800121,0.957219,0.642686,0.022704,0.631016,0.566647,0.586424,0.256684,0.2305,0.238545,0.352941,0.316938,0.328,0.438503,0.393771,0.407515,0,0,0,1,0.671409,0.0237188,0.604278,0.405718,0.0143327,0.604278,0.604278,0.604278,0.775401,0.520612,0.0183915,0.721925,0.484707,0.0171232,0.882353,0.59242,0.0209283,0.818182,0.549335,0.0194063,0.00355024,0.0588235,0.0122353,0.0125872,0.208556,0.0433798,0.0138782,0.229947,0.047829,0.0267882,0.44385,0.0923212}, 90);
IndexedFaceSet1112.setColor(&Color1113);

TextureCoordinate& TextureCoordinate1114 =  TextureCoordinate();
TextureCoordinate1114.setPoint(new float[]{0.446288,0.302347,0.76052,1.01583,0.939266,0.0193115,0.953212,0.217511,0.419139,1.01326,0.907896,0.303382,0.339252,0.998993,0.89251,0.0273437,0.852277,0.0481018,0.920674,0.170041,0.795776,0.989841,0.947922,0.679904,0.257527,0.695703,0.36573,0.722538,0.79405,0.52373,0.972079,0.558625,0.268135,0.51448,0.369772,0.520516,0.735748,0.722538,0.779169,0.372708,0.159162,0.299425,0.579343,0.295042,0.71788,0.232743,0.713767,0.981326,0.815308,0.0860902,0.403827,0.298036,0.258696,0.289323,0.715403,0.33454,0.725231,0.565174,0.435571,0.722769,0.736124,0.811601,0.392171,0.842477,0.616623,0.878927,0.635563,0.772933,0.616416,0.760981,0.318173,0.859128,0.371572,0.824897,0.348778,0.799037,0.480195,0.772439,0.462065,0.759206,0.460778,0.791041,0.448761,0.774069,0.444631,0.809155,0.432624,0.793333,0.617943,0.859994,0.630409,0.846681,0.514432,0.839438,0.502757,0.854284,0.515215,0.880172,0.589834,1.01454,0.487549,0.733722,0.452524,0.728347,0.434658,0.744623,0.634423,0.789232,0.759062,0.723152,0.738062,0.842849,0.364117,0.864483,0.560757,0.853104,0.427045,0.860838,0.224878,0.753343,0.587043,0.753015,0.54841,0.753905,0.439488,0.818663,0.543269,0.812843,0.776529,0.481978,0.804543,0.471338,0.795333,0.524064,0.771039,0.447398,0.831125,0.55364,0.756294,0.542698,0.76118,0.472042,0.745402,0.509973,0.731882,0.527816,0.762877,0.361486,0.685183,0.402853,0.55313,0.436916,0.744427,0.454155,0.783009,0.438066,0.678423,0.447153,0.768648,0.431351,0.698939,0.45499,0.618219,0.423889,0.53682,0.434198,0.611017,0.387598,0.687766,0.443803,0.754375,0.38176,0.556908,0.391696,0.752309,0.570765,0.724414,0.557911,0.586805,0.98278,0.759718,0.583619,0.783466,0.600931,0.561812,0.948713,0.706407,0.53121,0.67956,0.491381,0.654867,0.398885,0.651266,0.449411,0.643517,0.437922,0.509095,0.876841,0.666305,0.471726,0.658778,0.460568,0.716458,0.346302,0.744162,0.346302,0.701271,0.346302,0.688755,0.346302,0.822476,0.522698,0.812233,0.537896,0.847862,0.481978,0.829324,0.524064,0.86423,0.471338,0.812233,0.440827,0.850666,0.447398,0.82466,0.431035,0.868363,0.542698,0.863492,0.472042,0.879255,0.509973,0.859433,0.527816,0.826623,0.370703,0.880495,0.346302,0.770183,0.317546,0.812233,0.346302,0.941304,0.357158,0.964344,0.402853,0.913615,0.443803,0.866518,0.438066,0.877278,0.454155,0.812233,0.421257,0.856024,0.431351,0.668874,0.421473,0.971118,0.447153,0.965879,0.460568,0.950588,0.45499,0.726952,0.387598,0.672682,0.387425,0.801148,0.434198,0.754006,0.386994,0.78106,0.391696,0.636594,0.983445,0.864954,0.583619,0.841191,0.600931,0.892849,0.570765,0.900258,0.557911,0.945112,0.491381,0.918265,0.53121,0.686545,0.943026,0.96979,0.398885,0.696571,0.794998,0.959325,0.382637,0.981155,0.437922,0.736492,0.899132,0.973406,0.449411,0.908213,0.346302,0.923401,0.346302,0.935917,0.346302,0.637156,0.312758,0.473833,0.998645,0.602851,1.00466,0.754744,0.987745,0.477138,0.767335,0.795894,0.452142,0.680165,0.423069,0.699706,0.380437,0.761563,0.406764,0.696489,0.419805,0.66449,0.443803,0.875521,0.452142,0.848157,0.444608,0.958352,0.471726,0.870296,0.38176,0.816026,0.381587,0.812233,0.404363,0.944507,0.423069,0.924405,0.380567,0.863094,0.406764,0.928183,0.419805,0.71975,0.423889,0.897351,0.38117,0.784839,0.436916,0.936906,0.443803,0.446288,0.798915,0.516627,0.759644,0.519387,0.75943,0.519454,0.767896,0.507045,0.759771,0.507113,0.768236,0.508616,0.767312,0.508548,0.758846,0.527099,0.75943,0.536333,0.757657,0.524339,0.759644,0.529929,0.757569,0.525769,0.767941,0.524406,0.768109,0.527166,0.767896,0.536713,0.767952,0.47702,0.760505,0.522461,0.750545,0.567954,0.756291,0.477071,0.75887,0.572864,0.787238,0.477088,0.76897,0.522819,0.78584,0.516694,0.768109,0.497361,0.76897,0.497412,0.767335,0.497344,0.75887,0.497294,0.760505,0.609717,0.6435,0.851044,0.209235,0.78572,0.0445017,0.768671,0.0839398,0.601738,0.215572,0.867411,0.32883,0.924881,0.0930379,1,0.0930379,0.851978,0.0140033,0.703639,0,0.50178,0.0415346,0.863961,0.290729,0.889863,0.311777,0.600712,0.184968,0.193706,0.170646,0.930951,0.292439,0.991594,0.282559,0.197956,0.655879,0.153508,0.545826,0.736916,0.0069589,0.291157,1.00898,0.446288,0.997361,0.753147,0.749675,0.29078,0.0257295,0.540728,0.350371,0.68726,0.0265171,0.765134,0.0376574,0.997876,0.175372,0.939328,0.0565203,0.614386,0.0139369,0.512729,0.00835112,0.446288,0.00846577,0.447418,0.01113,0.447418,0.30376,0.447418,0.995815,0.447418,0.798214,0.743988,0.00846577,0.695744,0.334734,0.727637,0.564444,0.726022,0.352356,0.665346,0.382637,0.758479,0.352873,0.52416,0.788619,0.708223,0.357158,0.788072,1.0133,0.777309,0.985322,0.82466,0.360652,0.605132,0.791611,0.891048,0.352873,0.742191,0.721177,0.743341,0.897064,0.742766,0.809884,0.100363,0.0225545,0.304123,0.34614,0.399605,0.731485,0.400434,0.754099,0.375549,0.769189,0.359087,0.782882,0.376717,0.80213,0.402281,0.804503,0.391379,0.820874,0.585961,0.778444,0.556147,0.783685,0.583738,0.751275,0.553914,0.756525,0.740074,0.623505,0.612404,0.453954,0.699013,0.568982,0.82187,0.624569,0.997243,0.48632,0.903933,0.559881,0.920405,0.322966,0.828035,0.313449,0.845334,0.368084,0.82691,0.376426,0.786553,0.381278,0.863721,0.329049,0.859716,0.359493,0.863043,0.334867,0.734256,0.174802,0.844383,0.192998,0.986234,0.174802,0.924565,0.182792,0.8349,0.25027,0.646033,0.298654,0.730947,0.0135443,0,0.174802,0.23659,0.182041,0.526226,0.174802,0.912383,0.107184,0.789426,0.0811756,0.952843,0.177346,0.983962,0.235751,0.605688,0.100218,0.856813,0.346991,0.75184,0.433042,0.964799,0.610227,0.95674,0.445523,0.913941,0.484793,0.761095,0.384176,0.734061,0.343574,0.720443,0.194185,0.655484,0.0558501,0.781615,0.171988,0.9376,0.303103,0.912832,0.250364,0.959938,0.232067,0.959725,0.26664,0.949583,0.0607018,0.521098,0.777009,0.0440849,0.757533,0.512457,0.74602,0.462431,0.74628,0.441491,0.777042,0.746312,0.0182099,0.818315,0.584133,0.910796,0.380229,0.794,0.364971,0.916203,0.341598,0.7972,0.31672,0.888506,0.052109,0.403145,0.0476196,0.723617,0.0558382,0.723617,0.0558382,0.742125,0.0498057,0.742125,0.0498057,0.749788,0.0557129,0.749788,0.0557129,0.918546,0.298327,0.918546,0.298327,0.80063,0.388084,0.827186,0.379604,0.827186,0.379604,0.859024,0.361012,0.859024,0.361012,0.865954,0.333763,0.865954,0.333763,0.888374,0.316041,0.888374,0.316041,0.895637,0.309089,0.895637,0.309089,0.896778,0.279966,0.896778,0.279966,0.925294,0.270413,0.925294,0.270413,0.936943,0.193776,0.936943,0.193776,0.898947,0.0599596,0.898947,0.0599596,0.59534,0.0128904,0.884972,0.0312328,0.861044,0.272323,0.861044,0.272323,0.882882,0.293335,0.882882,0.293335,0.865143,0.312254,0.865143,0.312254,0.882816,0.262343,0.882816,0.262343,0.972038,0.122922}, 734);
IndexedFaceSet1112.setTexCoord(&TextureCoordinate1114);

Coordinate& Coordinate1115 =  Coordinate();
Coordinate1115.setPoint(new float[]{-1.0015,2.887,2.972,-1.42893,3.15348,2.41712,-2.08721,2.05274,2.55482,-2.08721,3.15348,2.55482,-1.70677,3.17122,2.84728,-1.75584,2.05274,2.82223,-1.22723,2.00913,2.2445,-1.48753,2.07355,2.34877,-1.51204,3.16837,2.48499,-1.53965,2.03947,2.10057,-1.51146,3.15255,2.40021,-1.9001,2.05883,2.76336,-2.00868,2.02683,2.67881,-1.64751,2.03253,2.43768,-1.46141,3.16362,2.34917,-1.4373,2.77216,2.25026,-1.49571,2.81631,2.31348,-1.53881,2.84606,2.42831,-1.34362,2.6086,2.3506,-1.38241,2.65015,2.20309,-1.48114,2.60709,2.27583,-1.50603,2.62209,2.4326,-1.75784,2.84606,2.82099,-1.37564,2.42877,2.36293,-1.50137,2.37698,2.20909,-1.13954,2.33629,2.5285,-1.19471,2.30926,2.33201,-1.58146,2.37544,2.46874,-1.54179,2.36578,2.31472,-1.80954,2.41591,2.7994,-1.77404,2.6716,2.80983,-1.50254,2.85598,2.46426,-1.7572,2.9448,2.82139,-1.53377,2.97903,2.45637,-1.75656,3.04184,2.82178,-1.67002,3.01944,2.69457,-1.65095,2.90193,2.71467,-1.70279,2.88868,2.69435,-1.48719,2.99749,2.37784,-1.52545,2.95954,2.43451,-1.51392,2.93087,2.41032,-1.51586,2.91296,2.42126,-1.498,2.89778,2.43873,-1.52469,2.9343,2.43997,-1.50431,2.91483,2.45155,-1.53188,2.95508,2.45553,-1.50894,2.93693,2.4671,-1.67045,2.99845,2.69597,-1.64929,2.98369,2.7092,-1.57799,2.97566,2.58612,-1.60004,2.99212,2.57373,-1.60285,3.02082,2.58695,-1.6094,3.16979,2.66614,-1.69125,2.85846,2.55759,-1.66834,2.8525,2.52042,-1.51876,2.87711,2.59464,-1.53975,2.88348,2.64292,-1.50452,2.88105,2.46514,-1.65058,2.92,2.71346,-1.52008,2.91624,2.59502,-1.5435,2.91779,2.64813,-1.3808,2.84606,2.37959,-1.40311,2.98859,2.39699,-1.20576,3.01435,2.70683,-1.30954,3.0008,2.5439,-1.23897,3.01001,2.65469,-1.09868,2.88201,2.8222,-1.31177,2.87329,2.58392,-1.28899,2.8736,2.62537,-1.27602,2.95979,2.64438,-1.33084,2.95286,2.55839,-1.19378,2.88268,2.55413,-1.21454,2.88162,2.52212,-1.28764,2.91023,2.64272,-1.32657,2.91019,2.57676,-1.91749,3.10951,2.65771,-1.88191,3.07771,2.68268,-1.87497,3.06714,2.67278,-1.98078,3.03169,2.61331,-1.9165,3.03191,2.65841,-1.92785,3.01947,2.65258,-1.9061,3.03882,2.6659,-1.88712,3.03142,2.64725,-1.89336,3.06809,2.67465,-1.89298,3.01807,2.64123,-1.90982,3.01477,2.66523,-1.85757,3.01283,2.64798,-1.88191,3.0102,2.68268,-1.86911,3.08866,2.66443,-1.9014,3.12155,2.66901,-1.91981,3.08105,2.65609,-1.94141,3.09163,2.64093,-1.95361,3.07306,2.63237,-1.9718,3.04536,2.61961,-1.92719,3.05829,2.65091,-1.93635,3.0707,2.6685,-1.92251,3.10057,2.63942,-1.87349,2.95444,2.67067,-1.91833,2.94903,2.63921,-1.91535,2.95502,2.63879,-1.88191,2.94446,2.68268,-1.92803,2.94446,2.65032,-1.94032,2.94867,2.62378,-1.9468,2.94446,2.63715,-1.98143,2.96973,2.61285,-1.98853,2.98103,2.60787,-1.96799,2.98379,2.60436,-1.95238,2.95201,2.61532,-1.95709,2.94446,2.62993,-1.96557,2.94446,2.62398,-1.97257,3.0146,2.60115,-1.96624,3.01227,2.62351,-1.97139,2.99785,2.61989,-1.99622,3.00818,2.60247,-1.99097,3.01617,2.60615,-1.87349,3.00339,2.67067,-1.88191,2.99659,2.68268,-1.91144,3.00361,2.66196,-1.90171,3.00828,2.65087,-1.98588,3.02393,2.60973,-1.95867,3.02005,2.6109,-1.88191,2.98484,2.68268,-1.91624,2.98651,2.65859,-1.95815,2.9682,2.62922,-1.92111,2.96912,2.65517,-1.96033,2.99558,2.62765,-2.01824,2.97318,2.79359,-1.87934,2.969,2.67909,-1.97646,2.97306,2.8175,-2.01336,2.99842,2.79701,-1.97904,2.99674,2.82109,-2.06851,3.00559,2.75831,-2.0549,2.97603,2.76786,-2.05746,3.00748,2.76607,-1.98201,3.01227,2.64599,-1.84619,3.10951,2.70775,-1.83784,3.01947,2.71574,-1.84718,3.03191,2.70705,-1.78291,3.03169,2.75215,-1.84668,3.03142,2.67562,-1.85777,3.03882,2.69982,-1.87033,3.06809,2.69081,-1.83903,3.01807,2.67909,-1.85587,3.01477,2.70309,-1.86229,3.12155,2.69645,-1.84388,3.08105,2.70937,-1.81007,3.07306,2.73309,-1.82227,3.09163,2.72453,-1.79188,3.04536,2.74585,-1.8365,3.05829,2.71455,-1.84993,3.0707,2.72914,-1.82729,3.10057,2.70624,-1.87216,2.96143,2.66909,-1.82851,2.94903,2.70223,-1.83566,2.94446,2.71514,-1.81688,2.94446,2.72831,-1.77885,2.98379,2.73708,-1.77516,2.98103,2.75759,-1.78225,2.96973,2.75261,-1.79446,2.95201,2.72613,-1.80659,2.94446,2.73553,-1.79811,2.94446,2.74148,-1.77426,3.0146,2.7403,-1.79229,2.99785,2.74556,-1.79744,3.01227,2.74195,-1.76746,3.00818,2.76299,-1.77271,3.01617,2.7593,-1.84513,3.00828,2.69057,-1.85224,3.00361,2.7035,-1.77781,3.02393,2.75573,-1.78817,3.02005,2.73054,-1.84745,2.98651,2.70686,-1.84257,2.96912,2.71028,-1.80591,2.96829,2.73601,-1.82424,2.96871,2.72315,-1.80335,2.99558,2.7378,-1.93969,2.97318,2.8487,-1.94457,2.99842,2.84528,-1.88942,3.00559,2.88398,-1.90303,2.97603,2.87442,-1.90047,3.00748,2.87622,-1.92136,2.97276,2.86156,-1.81322,3.01227,2.76443,-2.08721,2.93259,2.55482,-2.00053,2.92113,2.63991,-2.05655,3.15491,2.57839,-1.91294,3.16161,2.68879,-2.0173,3.01933,2.61083,-1.9308,3.13725,2.67544,-1.71875,3.14008,2.84115,-1.87538,3.13799,2.71876,-1.80862,2.92823,2.79493,-1.95862,3.09933,2.65467,-1.81978,3.093,2.76697,-2.08721,2.37986,2.55482,-2.14531,2.87833,2.21556,-2.11696,2.23634,1.94399,-1.35886,2.91079,2.62044,-1.3591,2.88067,2.61807,-1.42788,2.88374,2.64709,-1.42764,2.91385,2.64946,-1.4277,2.87792,2.67874,-1.42746,2.90804,2.68111,-1.34904,2.91003,2.65298,-1.34928,2.87991,2.65062,-1.3216,2.91003,2.64179,-1.32184,2.87991,2.63942,-1.33166,2.88067,2.60688,-1.33142,2.91079,2.60924,-1.50001,2.88374,2.62802,-1.49977,2.91385,2.63039,-1.49983,2.87792,2.65967,-1.49959,2.90804,2.66203,-1.39319,2.88112,2.63942,-1.39295,2.91124,2.64179,-1.3876,2.90795,2.67256,-1.38784,2.87784,2.6702,-2.00373,2.75927,2.75983,-1.9104,2.92446,2.71272,-1.83176,2.02555,2.28335,-1.58934,2.05883,2.0649,-1.64379,2.05713,2.00433,-1.65133,2.06871,1.98589,-1.81046,2.09411,1.94512,-1.79015,2.10348,2.00896,-1.65564,2.07868,2.0007,-1.6365,2.10625,2.00547,-1.63458,2.061,1.92282,-1.61615,2.08098,1.97023,-1.59716,2.08098,1.93459,-1.61623,2.10367,1.97032,-1.60064,2.10165,1.94106,-1.66434,2.10165,1.88533,-1.71693,2.10165,1.84222,-1.78122,2.10165,1.82575,-1.67241,2.05274,1.88719,-1.72311,2.06796,1.85386,-1.69789,2.06025,2.0947,-1.6981,2.10422,2.0185,-1.47032,2.23421,2.24575,-1.47636,2.07003,2.14669,-1.28759,2.05274,2.22001,-0.853222,2.05264,2.43467,-1.21531,2.0536,2.2831,-1.22244,2.05333,2.25739,-1.24293,2.05352,2.25703,-1.51042,2.05359,2.12187,-1.77637,2.05184,1.80835,-1.71864,2.05335,1.84631,-1.63514,2.053,1.91852,-1.64303,2.05199,1.99103,-1.58943,2.05281,2.05321,-1.57343,2.05263,2.07632,-1.60264,2.05282,2.15016,-1.51964,2.05255,2.19586,-1.56752,2.05304,2.39322,-1.84237,2.05282,2.68892,-1.92044,2.05283,2.74752,-1.72813,2.05241,2.13731,-1.63294,2.05284,2.10419,-1.66984,2.05275,2.043,-1.66796,2.05283,2.18}, 786);
IndexedFaceSet1112.setCoord(&Coordinate1115);

Shape1107.setGeometry(&IndexedFaceSet1112);

Transform1106.addChild(&Shape1107);

Group910.addChild(&Transform1106);

Transform& Transform1116 =  Transform();
Transform1116.setDEF(CString("transparencies"));
Transform1116.setTranslation(new float[]{-265.602,207.303,-32.419});
Transform& Transform1117 =  Transform();
Transform1117.setDEF(CString("schaum-horizontal_Inline"));
Transform1117.setTranslation(new float[]{75.883,-0.702988,291.591});
Transform1117.setRotation(new float[]{-0.933505,-0.253544,-0.253542,1.63955});
Transform1117.setScale(new float[]{50.9481,30.2756,1.35958});
Inline& Inline1118 =  Inline();
Inline1118.setUrl(new CString[]{CString("schaum.x3d")}, 1);
Inline1118.setBboxSize(new float[]{1,1,1});
Transform1117.addChild(&Inline1118);

Transform1116.addChild(&Transform1117);

Transform& Transform1119 =  Transform();
Transform1119.setDEF(CString("nebel-vertikal_Inline"));
Transform1119.setTranslation(new float[]{80.236,6.425,290.575});
Transform1119.setRotation(new float[]{0,-1,0,0.530409});
Transform1119.setScale(new float[]{54.1403,113.174,1.44475});
Inline& Inline1120 =  Inline();
Inline1120.setUrl(new CString[]{CString("schaum.x3d")}, 1);
Inline1120.setBboxSize(new float[]{1,1,1});
Transform1119.addChild(&Inline1120);

Transform1116.addChild(&Transform1119);

Transform& Transform1121 =  Transform();
Transform1121.setDEF(CString("wasserfall_Inline"));
Transform1121.setTranslation(new float[]{354.521,-208.66,127.839});
Transform1121.setRotation(new float[]{0,-1,0,0.399536});
Transform1121.setScale(new float[]{1,0.999999,1});
Inline& Inline1122 =  Inline();
Inline1122.setUrl(new CString[]{CString("wasserfall.x3d")}, 1);
Inline1122.setBboxSize(new float[]{55.4813,102.5,24.0402});
Inline1122.setBboxCenter(new float[]{-194.196,252.561,268.546});
Transform1121.addChild(&Inline1122);

Transform1116.addChild(&Transform1121);

Group910.addChild(&Transform1116);

Transform909.addChild(&Group910);

Transform908.addChild(&Transform909);

Transform& Transform1123 =  Transform();
Transform1123.setDEF(CString("b_entry"));
Transform& Transform1124 =  Transform();
Transform1124.setTranslation(new float[]{91.6805,-5.70725,195.744});
Transform1124.setRotation(new float[]{-4.25794e-7,1,-0.00000466103,3.03735});
Transform1124.setScale(new float[]{1.15035,2.98121,1.64852});
Shape& Shape1125 =  Shape();
Appearance& Appearance1126 =  Appearance();
Material& Material1127 =  Material();
Material1127.setAmbientIntensity(0.433333);
Material1127.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance1126.addChild(&Material1127);

ImageTexture& ImageTexture1128 =  ImageTexture();
ImageTexture1128.setUSE(CString("_10"));
Appearance1126.addChild(&ImageTexture1128);

TextureTransform& TextureTransform1129 =  TextureTransform();
TextureTransform1129.setScale(new float[]{1,2.16643});
Appearance1126.setTextureTransform(TextureTransform1129);

Shape1125.addChild(&Appearance1126);

Box& Box1130 =  Box();
Box1130.setSize(new float[]{6.48477,6.4846,6.48468});
Shape1125.setGeometry(&Box1130);

Transform1124.addChild(&Shape1125);

Transform1123.addChild(&Transform1124);

Transform& Transform1131 =  Transform();
Transform1131.setTranslation(new float[]{93.2855,3.9895,192.288});
Transform1131.setRotation(new float[]{0.0022525,0.999865,-0.0162815,2.8665});
Transform1131.setScale(new float[]{0.102731,0.00507982,1.09038});
Transform1131.setCenter(new float[]{-1.37683,0.000259834,9.02278});
Shape& Shape1132 =  Shape();
Appearance& Appearance1133 =  Appearance();
Material& Material1134 =  Material();
Material1134.setAmbientIntensity(0.273455);
Material1134.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance1133.addChild(&Material1134);

ImageTexture& ImageTexture1135 =  ImageTexture();
ImageTexture1135.setUSE(CString("_17"));
Appearance1133.addChild(&ImageTexture1135);

TextureTransform& TextureTransform1136 =  TextureTransform();
TextureTransform1136.setScale(new float[]{0.688847,2.33733});
Appearance1133.setTextureTransform(TextureTransform1136);

Shape1132.addChild(&Appearance1133);

Box& Box1137 =  Box();
Box1137.setSize(new float[]{20,20,20});
Shape1132.setGeometry(&Box1137);

Transform1131.addChild(&Shape1132);

Transform1123.addChild(&Transform1131);

Transform& Transform1138 =  Transform();
Transform1138.setTranslation(new float[]{94.1963,5.75693,217.451});
Transform1138.setRotation(new float[]{-9.51568e-8,1,-0.00000467393,3.17884});
Transform1138.setScale(new float[]{1.15035,4.3798,1.09205});
Shape& Shape1139 =  Shape();
Appearance& Appearance1140 =  Appearance();
Material& Material1141 =  Material();
Material1141.setAmbientIntensity(0.433333);
Material1141.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance1140.addChild(&Material1141);

ImageTexture& ImageTexture1142 =  ImageTexture();
ImageTexture1142.setUSE(CString("_10"));
Appearance1140.addChild(&ImageTexture1142);

TextureTransform& TextureTransform1143 =  TextureTransform();
TextureTransform1143.setScale(new float[]{1,2.16643});
Appearance1140.setTextureTransform(TextureTransform1143);

Shape1139.addChild(&Appearance1140);

Box& Box1144 =  Box();
Box1144.setSize(new float[]{6.48477,6.4846,6.48468});
Shape1139.setGeometry(&Box1144);

Transform1138.addChild(&Shape1139);

Transform1123.addChild(&Transform1138);

Transform& Transform1145 =  Transform();
Transform1145.setTranslation(new float[]{82.6885,20.0298,217});
Transform1145.setRotation(new float[]{-0.00000256668,1,9.54686e-7,1.52502});
Transform1145.setScale(new float[]{0.0471032,0.00744665,0.8994});
Shape& Shape1146 =  Shape();
Appearance& Appearance1147 =  Appearance();
Material& Material1148 =  Material();
Material1148.setAmbientIntensity(0.273455);
Material1148.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance1147.addChild(&Material1148);

ImageTexture& ImageTexture1149 =  ImageTexture();
ImageTexture1149.setUSE(CString("_17"));
Appearance1147.addChild(&ImageTexture1149);

TextureTransform& TextureTransform1150 =  TextureTransform();
TextureTransform1150.setScale(new float[]{0.688847,2.33733});
Appearance1147.setTextureTransform(TextureTransform1150);

Shape1146.addChild(&Appearance1147);

Box& Box1151 =  Box();
Box1151.setSize(new float[]{20,20,20});
Shape1146.setGeometry(&Box1151);

Transform1145.addChild(&Shape1146);

Transform1123.addChild(&Transform1145);

Transform& Transform1152 =  Transform();
Transform1152.setTranslation(new float[]{83.0657,20.0298,218.376});
Transform1152.setRotation(new float[]{-0.00000256668,1,9.54686e-7,1.52502});
Transform1152.setScale(new float[]{0.0340772,0.00744665,0.8994});
Shape& Shape1153 =  Shape();
Appearance& Appearance1154 =  Appearance();
Material& Material1155 =  Material();
Material1155.setAmbientIntensity(0.273455);
Material1155.setDiffuseColor(new float[]{0.585106,0.380055,0.217136});
Appearance1154.addChild(&Material1155);

ImageTexture& ImageTexture1156 =  ImageTexture();
ImageTexture1156.setUSE(CString("_17"));
Appearance1154.addChild(&ImageTexture1156);

TextureTransform& TextureTransform1157 =  TextureTransform();
TextureTransform1157.setScale(new float[]{0.688847,2.33733});
Appearance1154.setTextureTransform(TextureTransform1157);

Shape1153.addChild(&Appearance1154);

Box& Box1158 =  Box();
Box1158.setSize(new float[]{20,20,20});
Shape1153.setGeometry(&Box1158);

Transform1152.addChild(&Shape1153);

Transform1123.addChild(&Transform1152);

Transform& Transform1159 =  Transform();
Transform1159.setDEF(CString("dauerlift1"));
Transform1159.setCenter(new float[]{102.133,5.75701,225.35});
Group& Group1160 =  Group();
Group& Group1161 =  Group();
Group1161.setDEF(CString("dauerlift1_1"));
TimeSensor& TimeSensor1162 =  TimeSensor();
TimeSensor1162.setDEF(CString("Time_5"));
TimeSensor1162.setCycleInterval(10);
TimeSensor1162.setLoop(True);
TimeSensor1162.setStopTime(1);
Group1161.addChild(&TimeSensor1162);

Group1160.addChild(&Group1161);

PositionInterpolator& PositionInterpolator1163 =  PositionInterpolator();
PositionInterpolator1163.setDEF(CString("dauerlift1TranslationInterp"));
PositionInterpolator1163.setKey(new float[]{0,0.17,0.5,0.67,1}, 5);
PositionInterpolator1163.setKeyValue(new float[]{0,0,0,0,0,0,0,-15.3318,0,0,-15.3318,0,0,0,0}, 15);
Group1160.addChild(&PositionInterpolator1163);

Transform1159.addChild(&Group1160);

Transform& Transform1164 =  Transform();
Transform1164.setTranslation(new float[]{102.133,5.75701,225.35});
Transform1164.setRotation(new float[]{-0.00000174875,1,-0.00000460944,2.49433});
Transform1164.setScale(new float[]{1.15035,4.3798,1.09205});
Shape& Shape1165 =  Shape();
Appearance& Appearance1166 =  Appearance();
Material& Material1167 =  Material();
Material1167.setAmbientIntensity(0.433333);
Material1167.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance1166.addChild(&Material1167);

ImageTexture& ImageTexture1168 =  ImageTexture();
ImageTexture1168.setUSE(CString("_10"));
Appearance1166.addChild(&ImageTexture1168);

TextureTransform& TextureTransform1169 =  TextureTransform();
TextureTransform1169.setScale(new float[]{1,2.16643});
Appearance1166.setTextureTransform(TextureTransform1169);

Shape1165.addChild(&Appearance1166);

Box& Box1170 =  Box();
Box1170.setSize(new float[]{6.48477,6.4846,6.48468});
Shape1165.setGeometry(&Box1170);

Transform1164.addChild(&Shape1165);

Transform1159.addChild(&Transform1164);

Transform1123.addChild(&Transform1159);

Transform908.addChild(&Transform1123);

Transform& Transform1171 =  Transform();
Transform1171.setDEF(CString("bootssteg"));
Transform& Transform1172 =  Transform();
Transform1172.setTranslation(new float[]{175.331,0.322837,233.657});
Transform1172.setRotation(new float[]{-1.82567e-10,1,-1.06296e-10,1.5708});
Transform1172.setScale(new float[]{0.312803,0.0437602,5.80202});
Shape& Shape1173 =  Shape();
Appearance& Appearance1174 =  Appearance();
Material& Material1175 =  Material();
Material1175.setAmbientIntensity(0.258506);
Material1175.setDiffuseColor(new float[]{0.723404,0.343175,0.110421});
Material1175.setShininess(0);
Appearance1174.addChild(&Material1175);

ImageTexture& ImageTexture1176 =  ImageTexture();
ImageTexture1176.setDEF(CString("_32"));
ImageTexture1176.setUrl(new CString[]{CString("bretter_swm.png")}, 1);
Appearance1174.addChild(&ImageTexture1176);

TextureTransform& TextureTransform1177 =  TextureTransform();
TextureTransform1177.setScale(new float[]{1,4.50303});
Appearance1174.setTextureTransform(TextureTransform1177);

Shape1173.addChild(&Appearance1174);

Box& Box1178 =  Box();
Box1178.setSize(new float[]{4.42119,4.42203,4.42157});
Shape1173.setGeometry(&Box1178);

Transform1172.addChild(&Shape1173);

Transform1171.addChild(&Transform1172);

Transform& Transform1179 =  Transform();
Transform1179.setTranslation(new float[]{174.129,0.322837,247.175});
Transform1179.setScale(new float[]{0.312803,0.0437602,5.80202});
Shape& Shape1180 =  Shape();
Appearance& Appearance1181 =  Appearance();
Material& Material1182 =  Material();
Material1182.setAmbientIntensity(0.258506);
Material1182.setDiffuseColor(new float[]{0.723404,0.343175,0.110421});
Material1182.setShininess(0);
Appearance1181.addChild(&Material1182);

ImageTexture& ImageTexture1183 =  ImageTexture();
ImageTexture1183.setUSE(CString("_32"));
Appearance1181.addChild(&ImageTexture1183);

TextureTransform& TextureTransform1184 =  TextureTransform();
TextureTransform1184.setScale(new float[]{1,4.50303});
Appearance1181.setTextureTransform(TextureTransform1184);

Shape1180.addChild(&Appearance1181);

Box& Box1185 =  Box();
Box1185.setSize(new float[]{4.42119,4.42203,4.42157});
Shape1180.setGeometry(&Box1185);

Transform1179.addChild(&Shape1180);

Transform1171.addChild(&Transform1179);

Transform908.addChild(&Transform1171);

Transform232.addChild(&Transform908);

Transform& Transform1186 =  Transform();
Transform1186.setDEF(CString("east"));
Transform& Transform1187 =  Transform();
Transform1187.setDEF(CString("werbung"));
Transform& Transform1188 =  Transform();
Transform1188.setDEF(CString("logo"));
Transform1188.setTranslation(new float[]{336.657,49.6731,-29.0324});
Transform1188.setRotation(new float[]{0,1,0,4.57365});
Transform1188.setScale(new float[]{0.443845,0.6994,0.324211});
Shape& Shape1189 =  Shape();
Appearance& Appearance1190 =  Appearance();
Material& Material1191 =  Material();
Material1191.setAmbientIntensity(0.984043);
Appearance1190.addChild(&Material1191);

ImageTexture& ImageTexture1192 =  ImageTexture();
ImageTexture1192.setUSE(CString("_32"));
Appearance1190.addChild(&ImageTexture1192);

TextureTransform& TextureTransform1193 =  TextureTransform();
TextureTransform1193.setTranslation(new float[]{-0.02,-0.5});
Appearance1190.setTextureTransform(TextureTransform1193);

Shape1189.addChild(&Appearance1190);

IndexedFaceSet& IndexedFaceSet1194 =  IndexedFaceSet();
IndexedFaceSet1194.setCreaseAngle(0.5);
IndexedFaceSet1194.setTexCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,0,10,-1,10,0,2,-1,11,12,6,-1,11,6,8,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,7,-1,23,24,25,-1,23,25,13,-1,23,13,15,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,25,32,-1,32,25,24,-1,16,14,33,-1,21,7,6,-1,34,35,36,-1,34,36,37,-1,34,37,38,-1,34,38,39,-1,40,41,42,-1,40,42,37,-1,40,37,36,-1,43,44,45,-1,43,45,46,-1,43,46,47,-1,43,47,48,-1,49,50,51,-1,49,51,52,-1,49,52,48,-1,49,48,47,-1,50,53,54,-1,50,54,51,-1,55,56,57,-1,56,58,57,-1,57,58,59,-1,58,60,59,-1,59,60,61,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,58,-1,67,68,58,-1,58,68,60,-1,69,70,71,-1,69,71,72,-1,69,72,62,-1,69,62,64,-1,73,74,75,-1,74,76,75,-1,75,76,77,-1,76,78,77,-1,77,78,70,-1,78,71,70,-1,79,80,81,-1,79,81,59,-1,79,59,61,-1,82,73,83,-1,82,83,81,-1,82,81,80,-1,84,85,86,-1,84,86,77,-1,84,77,70,-1,73,75,83,-1,87,88,89,-1,87,89,90,-1,87,90,91,-1,87,91,92,-1,93,94,95,-1,94,96,95,-1,95,96,97,-1,96,98,97,-1,97,98,99,-1,100,101,102,-1,101,103,102,-1,102,103,104,-1,103,105,104,-1,104,105,96,-1,105,106,96,-1,96,106,98,-1,107,108,109,-1,107,109,110,-1,107,110,100,-1,107,100,102,-1,111,112,113,-1,112,114,113,-1,113,114,115,-1,114,116,115,-1,115,116,108,-1,116,109,108,-1,117,118,119,-1,117,119,97,-1,117,97,99,-1,120,111,121,-1,120,121,119,-1,120,119,118,-1,122,123,124,-1,122,124,115,-1,122,115,108,-1,111,113,121,-1,125,126,127,-1,126,128,127,-1,127,128,129,-1,128,130,129,-1,129,130,131,-1,130,132,131,-1,133,134,135,-1,133,135,136,-1,133,136,125,-1,133,125,127,-1,137,138,139,-1,138,140,139,-1,139,140,141,-1,140,142,141,-1,141,142,143,-1,142,144,143,-1,143,144,145,-1,144,146,145,-1,145,146,147,-1,146,148,147,-1,147,148,134,-1,148,135,134,-1,149,150,137,-1,149,137,139,-1,149,139,151,-1,149,151,152,-1,153,154,155,-1,153,155,147,-1,153,147,134,-1,137,150,156,-1,157,158,159,-1,157,159,160,-1,161,162,163,-1,162,164,163,-1,163,164,165,-1,164,166,165,-1,165,166,167,-1,166,168,167,-1,167,168,169,-1,168,170,169,-1,171,172,173,-1,172,174,173,-1,173,174,175,-1,174,176,175,-1,175,176,177,-1,176,178,177,-1,177,178,179,-1,178,180,179,-1,179,180,181,-1,180,182,181,-1,181,182,183,-1,182,184,183,-1,183,184,185,-1,184,161,185,-1,185,161,163,-1,186,183,185,-1,186,185,187,-1,186,187,188,-1}, 700);
IndexedFaceSet1194.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,0,10,-1,10,0,2,-1,11,12,6,-1,11,6,8,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,7,-1,23,24,25,-1,23,25,13,-1,23,13,15,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,25,32,-1,32,25,24,-1,16,14,33,-1,21,7,6,-1,34,35,36,-1,34,36,37,-1,34,37,38,-1,34,38,39,-1,40,41,42,-1,40,42,37,-1,40,37,36,-1,43,44,45,-1,43,45,46,-1,43,46,47,-1,43,47,48,-1,49,50,51,-1,49,51,52,-1,49,52,48,-1,49,48,47,-1,50,53,54,-1,50,54,51,-1,55,56,57,-1,56,58,57,-1,57,58,59,-1,58,60,59,-1,59,60,61,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,58,-1,67,68,58,-1,58,68,60,-1,69,70,71,-1,69,71,72,-1,69,72,62,-1,69,62,64,-1,73,74,75,-1,74,76,75,-1,75,76,77,-1,76,78,77,-1,77,78,70,-1,78,71,70,-1,79,80,81,-1,79,81,59,-1,79,59,61,-1,82,73,83,-1,82,83,81,-1,82,81,80,-1,84,85,86,-1,84,86,77,-1,84,77,70,-1,73,75,83,-1,87,88,89,-1,87,89,90,-1,87,90,91,-1,87,91,92,-1,93,94,95,-1,94,96,95,-1,95,96,97,-1,96,98,97,-1,97,98,99,-1,100,101,102,-1,101,103,102,-1,102,103,104,-1,103,105,104,-1,104,105,96,-1,105,106,96,-1,96,106,98,-1,107,108,109,-1,107,109,110,-1,107,110,100,-1,107,100,102,-1,111,112,113,-1,112,114,113,-1,113,114,115,-1,114,116,115,-1,115,116,108,-1,116,109,108,-1,117,118,119,-1,117,119,97,-1,117,97,99,-1,120,111,121,-1,120,121,119,-1,120,119,118,-1,122,123,124,-1,122,124,115,-1,122,115,108,-1,111,113,121,-1,125,126,127,-1,126,128,127,-1,127,128,129,-1,128,130,129,-1,129,130,131,-1,130,132,131,-1,133,134,135,-1,133,135,136,-1,133,136,125,-1,133,125,127,-1,137,138,139,-1,138,140,139,-1,139,140,141,-1,140,142,141,-1,141,142,143,-1,142,144,143,-1,143,144,145,-1,144,146,145,-1,145,146,147,-1,146,148,147,-1,147,148,134,-1,148,135,134,-1,149,150,137,-1,149,137,139,-1,149,139,151,-1,149,151,152,-1,153,154,155,-1,153,155,147,-1,153,147,134,-1,137,150,156,-1,157,158,159,-1,157,159,160,-1,161,162,163,-1,162,164,163,-1,163,164,165,-1,164,166,165,-1,165,166,167,-1,166,168,167,-1,167,168,169,-1,168,170,169,-1,171,172,173,-1,172,174,173,-1,173,174,175,-1,174,176,175,-1,175,176,177,-1,176,178,177,-1,177,178,179,-1,178,180,179,-1,179,180,181,-1,180,182,181,-1,181,182,183,-1,182,184,183,-1,183,184,185,-1,184,161,185,-1,185,161,163,-1,186,183,185,-1,186,185,187,-1,186,187,188,-1}, 700);
TextureCoordinate& TextureCoordinate1195 =  TextureCoordinate();
TextureCoordinate1195.setPoint(new float[]{0.331,0.654,0.449,0.623,0.469,0.712,0.509,0.508,0.553,0.652,0.6,0.508,0.132,0.388,0.167,0.528,0.208,0.718,0.226,0.632,0.32,0.737,0.131,0.668,0.073,0.515,0.526,0.026,0.593,0.092,0.526,0.185,0.573,0.329,0.494,0.266,0.457,0.39,0.373,0.312,0.252,0.437,0.226,0.346,0.194,0.463,0.458,0.086,0.338,0.064,0.339,-0.019,0.049,0.232,0.063,0.137,0.14,0.232,0.122,0.05,0.158,0.151,0.193,0.005,0.205,0.099,0.62,0.198,0.952,0.289,0.952,0,1.049,0,1,0.373,0.794,0.718,0.681,0.718,1.049,0.289,1.32,0.718,1.206,0.718,1.98,0,1.98,0.718,1.886,0.718,1.886,0.138,1.884,0.138,1.871,0,1.525,0.718,1.41,0.718,1.504,0.58,1.506,0.58,1.41,0,1.504,0,2.795,0.359,2.778,0.483,2.778,0.235,2.721,0.606,2.721,0.112,2.695,0.359,2.678,0.242,2.34,0.629,2.445,0.651,2.445,0.737,2.55,0.629,2.613,0.7,2.629,0.568,2.678,0.476,2.277,0.7,2.17,0.606,2.212,0.476,2.262,0.568,2.34,0.089,2.262,0.15,2.277,0.018,2.212,0.242,2.17,0.112,2.195,0.359,2.629,0.15,2.55,0.089,2.613,0.018,2.445,0.067,2.445,-0.019,2.112,0.483,2.095,0.359,2.112,0.235,3.007,0.086,3.007,0.718,2.91,0.718,2.91,0,3.371,0,3.371,0.086,4.129,0.359,4.112,0.483,4.112,0.235,4.055,0.606,4.055,0.112,4.029,0.359,4.012,0.242,3.674,0.629,3.779,0.651,3.779,0.737,3.884,0.629,3.947,0.7,3.963,0.568,4.012,0.476,3.611,0.7,3.504,0.606,3.546,0.476,3.596,0.568,3.674,0.089,3.596,0.15,3.611,0.018,3.546,0.242,3.504,0.112,3.529,0.359,3.963,0.15,3.884,0.089,3.947,0.018,3.779,0.067,3.779,-0.019,3.446,0.483,3.429,0.359,3.446,0.235,4.46,0.632,4.551,0.651,4.556,0.737,4.677,0.622,4.75,0.679,4.766,0.5,4.822,0.605,4.86,0.5,4.404,0.703,4.298,0.617,4.335,0.485,4.385,0.576,4.781,0.301,4.765,0.195,4.786,0.093,4.702,0.11,4.686,0.012,4.555,0.064,4.549,-0.019,4.437,0.09,4.407,0.008,4.364,0.157,4.329,0.062,4.316,0.36,4.872,0.384,4.557,0.384,4.809,0,4.872,0,4.236,0.497,4.216,0.365,4.231,0.224,4.557,0.301,5.037,0.718,5.037,0,5.134,0,5.134,0.718,5.386,0.49,5.437,0.579,5.462,0.71,5.603,0.651,5.603,0.737,5.719,0.624,5.725,0.717,5.804,0.502,5.815,0.665,5.898,0.502,5.905,0.264,5.811,0.264,5.847,0.105,5.774,0.163,5.753,0.021,5.72,0.103,5.657,-0.013,5.606,0.067,5.591,-0.019,5.494,0.09,5.472,0.002,5.42,0.153,5.368,0.069,5.368,0.366,5.357,0.633,5.296,0.187,5.291,0.515,5.268,0.363}, 378);
IndexedFaceSet1194.setTexCoord(&TextureCoordinate1195);

Coordinate& Coordinate1196 =  Coordinate();
Coordinate1196.setPoint(new float[]{25.5701,109.611,-69.349,36.8981,106.635,-69.349,38.8181,115.179,-69.349,42.6581,95.5945,-69.349,46.8821,109.419,-69.349,51.3941,95.5945,-69.349,6.46607,84.0745,-69.349,9.82607,97.5145,-69.349,13.7621,115.755,-69.349,15.4901,107.499,-69.349,24.5141,117.579,-69.349,6.37007,110.955,-69.349,0.802068,96.2665,-69.349,44.2901,49.3225,-69.349,50.7221,55.6585,-69.349,44.2901,64.5865,-69.349,48.8021,78.4105,-69.349,41.2181,72.3625,-69.349,37.6661,84.2665,-69.349,29.6021,76.7785,-69.349,17.9861,88.7785,-69.349,15.4901,80.0425,-69.349,12.4181,91.2745,-69.349,37.7621,55.0825,-69.349,26.2421,52.9705,-69.349,26.3381,45.0025,-69.349,-1.50193,69.0985,-69.349,-0.157932,59.9785,-69.349,7.23407,69.0985,-69.349,5.50607,51.6265,-69.349,8.96207,61.3225,-69.349,12.3221,47.3065,-69.349,13.4741,56.3305,-69.349,53.3141,65.8345,-69.349,78.7427,56.0949,-115.899,78.7427,28.3509,-115.899,88.0547,28.3509,-115.899,83.3507,64.1589,-115.899,63.5747,97.2789,-115.899,52.7267,97.2789,-115.899,88.0547,56.0949,-115.899,114.071,97.2789,-115.899,103.127,97.2789,-115.899,176.11,20.2497,-137.901,176.11,89.1777,-137.901,167.086,89.1777,-137.901,167.086,33.4977,-137.901,166.894,33.4977,-137.901,165.646,20.2497,-137.901,132.43,89.1777,-137.901,121.39,89.1777,-137.901,130.414,75.9297,-137.901,130.606,75.9297,-137.901,121.39,20.2497,-137.901,130.414,20.2497,-137.901,268.32,56.411,-168.074,266.688,68.3149,-168.074,266.688,44.507,-168.074,261.216,80.123,-168.074,261.216,32.699,-168.074,258.72,56.411,-168.074,257.088,45.179,-168.074,224.64,82.3309,-168.074,234.72,84.4429,-168.074,234.72,92.699,-168.074,244.8,82.3309,-168.074,250.848,89.147,-168.074,252.384,76.4749,-168.074,257.088,67.6429,-168.074,218.592,89.147,-168.074,208.32,80.123,-168.074,212.352,67.6429,-168.074,217.152,76.4749,-168.074,224.64,30.4909,-168.074,217.152,36.347,-168.074,218.592,23.6749,-168.074,212.352,45.179,-168.074,208.32,32.699,-168.074,210.72,56.411,-168.074,252.384,36.347,-168.074,244.8,30.4909,-168.074,250.848,23.6749,-168.074,234.72,28.3789,-168.074,234.72,20.1229,-168.074,202.752,68.3149,-168.074,201.12,56.411,-168.074,202.752,44.507,-168.074,288.672,20.8245,-169.058,288.672,81.4965,-169.058,279.36,81.4965,-169.058,279.36,12.5685,-169.058,323.616,12.5685,-169.058,323.616,20.8245,-169.058,393.93,59.5084,-177.585,392.298,71.4124,-177.585,392.298,47.6044,-177.585,386.826,83.2204,-177.585,386.826,35.7964,-177.585,384.33,59.5084,-177.585,382.698,48.2764,-177.585,350.25,85.4285,-177.585,360.33,87.5405,-177.585,360.33,95.7964,-177.585,370.41,85.4285,-177.585,376.458,92.2444,-177.585,377.994,79.5724,-177.585,382.698,70.7404,-177.585,344.202,92.2444,-177.585,333.93,83.2204,-177.585,337.962,70.7404,-177.585,342.762,79.5724,-177.585,350.25,33.5884,-177.585,342.762,39.4444,-177.585,344.202,26.7724,-177.585,337.962,48.2764,-177.585,333.93,35.7964,-177.585,336.33,59.5084,-177.585,377.994,39.4444,-177.585,370.41,33.5884,-177.585,376.458,26.7724,-177.585,360.33,31.4764,-177.585,360.33,23.2204,-177.585,328.362,71.4124,-177.585,326.73,59.5084,-177.585,328.362,47.6044,-177.585,424.46,77.9771,-148.777,433.196,79.8011,-148.777,433.676,88.0571,-148.777,445.292,77.0171,-148.777,452.3,82.4891,-148.777,453.836,65.3051,-148.777,459.212,75.3851,-148.777,462.86,65.3051,-148.777,419.084,84.7931,-148.777,408.908,76.5371,-148.777,412.46,63.8651,-148.777,417.26,72.6011,-148.777,455.276,46.2011,-148.777,453.74,36.0251,-148.777,455.756,26.2331,-148.777,447.692,27.8651,-148.777,446.156,18.4571,-148.777,433.58,23.4491,-148.777,433.004,15.4811,-148.777,422.252,25.9451,-148.777,419.372,18.0731,-148.777,415.244,32.3771,-148.777,411.884,23.2571,-148.777,410.636,51.8651,-148.777,464.012,54.1691,-148.777,433.772,54.1691,-148.777,457.964,17.3051,-148.777,464.012,17.3051,-148.777,402.956,65.0171,-148.777,401.036,52.3451,-148.777,402.476,38.8091,-148.777,433.772,46.2011,-148.777,483.552,80.7619,-119.535,483.552,11.8339,-119.535,492.864,11.8339,-119.535,492.864,80.7619,-119.535,516.771,61.6694,-82.5411,521.667,70.2134,-82.5411,524.067,82.7894,-82.5411,537.603,77.1254,-82.5411,537.603,85.3814,-82.5411,548.739,74.5334,-82.5411,549.315,83.4614,-82.5411,556.899,62.8214,-82.5411,557.955,78.4694,-82.5411,565.923,62.8214,-82.5411,566.595,39.9734,-82.5411,557.571,39.9734,-82.5411,561.027,24.7094,-82.5411,554.019,30.2774,-82.5411,552.003,16.6454,-82.5411,548.835,24.5174,-82.5411,542.787,13.3814,-82.5411,537.891,21.0614,-82.5411,536.451,12.8054,-82.5411,527.139,23.2694,-82.5411,525.027,14.8214,-82.5411,520.035,29.3174,-82.5411,515.043,21.2534,-82.5411,515.043,49.7654,-82.5411,513.987,75.3974,-82.5411,508.131,32.5814,-82.5411,507.651,64.0694,-82.5411,505.443,49.4774,-82.5411}, 567);
IndexedFaceSet1194.setCoord(&Coordinate1196);

Shape1189.setGeometry(&IndexedFaceSet1194);

Transform1188.addChild(&Shape1189);

Transform1187.addChild(&Transform1188);

Transform& Transform1197 =  Transform();
Transform1197.setDEF(CString("gitter"));
Transform& Transform1198 =  Transform();
Transform1198.setTranslation(new float[]{355.757,84.2448,195.774});
Transform1198.setRotation(new float[]{0,1,0,1.00737});
Transform1198.setScale(new float[]{5.72455,0.543546,1});
Shape& Shape1199 =  Shape();
Appearance& Appearance1200 =  Appearance();
Material& Material1201 =  Material();
Material1201.setDEF(CString("_33"));
Material1201.setAmbientIntensity(0.851064);
Appearance1200.addChild(&Material1201);

ImageTexture& ImageTexture1202 =  ImageTexture();
ImageTexture1202.setDEF(CString("_34"));
ImageTexture1202.setUrl(new CString[]{CString("gitter01.png")}, 1);
Appearance1200.addChild(&ImageTexture1202);

TextureTransform& TextureTransform1203 =  TextureTransform();
TextureTransform1203.setScale(new float[]{4.14507,1});
Appearance1200.setTextureTransform(TextureTransform1203);

Shape1199.addChild(&Appearance1200);

Box& Box1204 =  Box();
Box1204.setSize(new float[]{16.0301,16.0301,16.0302});
Shape1199.setGeometry(&Box1204);

Transform1198.addChild(&Shape1199);

Transform1197.addChild(&Transform1198);

Transform& Transform1205 =  Transform();
Transform1205.setTranslation(new float[]{385.895,103.855,106.69});
Transform1205.setRotation(new float[]{0,1,0,1.39262});
Transform1205.setScale(new float[]{5.95207,0.543546,1});
Shape& Shape1206 =  Shape();
Appearance& Appearance1207 =  Appearance();
Material& Material1208 =  Material();
Material1208.setUSE(CString("_33"));
Appearance1207.addChild(&Material1208);

ImageTexture& ImageTexture1209 =  ImageTexture();
ImageTexture1209.setUSE(CString("_34"));
Appearance1207.addChild(&ImageTexture1209);

TextureTransform& TextureTransform1210 =  TextureTransform();
TextureTransform1210.setScale(new float[]{4.14507,1});
Appearance1207.setTextureTransform(TextureTransform1210);

Shape1206.addChild(&Appearance1207);

Box& Box1211 =  Box();
Box1211.setSize(new float[]{16.0301,16.0301,16.0302});
Shape1206.setGeometry(&Box1211);

Transform1205.addChild(&Shape1206);

Transform1197.addChild(&Transform1205);

Transform& Transform1212 =  Transform();
Transform1212.setTranslation(new float[]{385.103,114.057,18.1791});
Transform1212.setRotation(new float[]{0,1,0,1.77551});
Transform1212.setScale(new float[]{6.80678,0.543546,1});
Shape& Shape1213 =  Shape();
Appearance& Appearance1214 =  Appearance();
Material& Material1215 =  Material();
Material1215.setUSE(CString("_33"));
Appearance1214.addChild(&Material1215);

ImageTexture& ImageTexture1216 =  ImageTexture();
ImageTexture1216.setUSE(CString("_34"));
Appearance1214.addChild(&ImageTexture1216);

TextureTransform& TextureTransform1217 =  TextureTransform();
TextureTransform1217.setScale(new float[]{4.14507,1});
Appearance1214.setTextureTransform(TextureTransform1217);

Shape1213.addChild(&Appearance1214);

Box& Box1218 =  Box();
Box1218.setSize(new float[]{16.0301,16.0301,16.0302});
Shape1213.setGeometry(&Box1218);

Transform1212.addChild(&Shape1213);

Transform1197.addChild(&Transform1212);

Transform1187.addChild(&Transform1197);

Transform1186.addChild(&Transform1187);

Transform232.addChild(&Transform1186);

Transform& Transform1219 =  Transform();
Transform1219.setDEF(CString("animated"));
Transform& Transform1220 =  Transform();
Transform1220.setDEF(CString("tikiboat"));
Transform& Transform1221 =  Transform();
Transform1221.setDEF(CString("_35"));
Transform1221.setScale(new float[]{0.999999,0.999998,0.999999});
Transform1221.setCenter(new float[]{189.39,1.45083,234.499});
Group& Group1222 =  Group();
Group& Group1223 =  Group();
Group1223.setDEF(CString("UnnamedAnimation4"));
TimeSensor& TimeSensor1224 =  TimeSensor();
TimeSensor1224.setDEF(CString("Time_6"));
TimeSensor1224.setCycleInterval(70);
TimeSensor1224.setLoop(True);
TimeSensor1224.setStartTime(958607000);
TimeSensor1224.setStopTime(1);
Group1223.addChild(&TimeSensor1224);

Group1222.addChild(&Group1223);

PositionInterpolator& PositionInterpolator1225 =  PositionInterpolator();
PositionInterpolator1225.setDEF(CString("UnnamedTransformTranslationInterp_1"));
PositionInterpolator1225.setKey(new float[]{0,0.0014935,0.00298701,0.00448051,0.00597402,0.00746752,0.00896103,0.0104545,0.011948,0.0134415,0.014935,0.0164285,0.0179221,0.0194156,0.0209091,0.0224026,0.0238961,0.0253896,0.0268831,0.0283766,0.0298701,0.0313636,0.0328571,0.0342857,0.0357142,0.0371428,0.0385714,0.04,0.0414285,0.0428571,0.0442857,0.0457143,0.0471428,0.0485714,0.05,0.0514286,0.0528571,0.0542857,0.0557143,0.0571429,0.0585714,0.06,0.0614286,0.0628572,0.0642857,0.0657143,0.0671429,0.0685715,0.07,0.0714286,0.0728572,0.0742858,0.0757143,0.0771429,0.0785715,0.0800001,0.0814286,0.0828572,0.0842858,0.0857143,0.0871429,0.0885715,0.0900001,0.0914286,0.0928572,0.0942858,0.0957144,0.0971429,0.0985715,0.1,0.101429,0.102857,0.104286,0.105714,0.107143,0.108571,0.11,0.111429,0.112857,0.114286,0.115714,0.117143,0.118571,0.12,0.121429,0.122857,0.124286,0.125714,0.127143,0.128571,0.13,0.131429,0.132857,0.134286,0.135714,0.137143,0.138572,0.14,0.141429,0.142857,0.144286,0.145714,0.147143,0.148572,0.15,0.151429,0.152857,0.154286,0.155714,0.157143,0.158572,0.16,0.161429,0.162857,0.164286,0.165714,0.167143,0.168587,0.170031,0.171475,0.172919,0.174364,0.175808,0.177252,0.178696,0.18014,0.181584,0.183028,0.184472,0.185916,0.18736,0.188805,0.190249,0.191693,0.193137,0.194581,0.196025,0.197469,0.198913,0.200357,0.201801,0.203246,0.20469,0.206134,0.207578,0.209022,0.210466,0.21191,0.213354,0.214798,0.216242,0.217687,0.219131,0.220575,0.222019,0.223463,0.224907,0.226351,0.227795,0.229239,0.230683,0.232128,0.233572,0.235016,0.23646,0.237904,0.239348,0.240792,0.242236,0.24368,0.245124,0.246569,0.248013,0.249457,0.250901,0.252345,0.253789,0.255233,0.256677,0.258121,0.259565,0.26101,0.262454,0.263898,0.265342,0.266786,0.26823,0.269674,0.271118,0.272562,0.274006,0.275451,0.276895,0.278339,0.279783,0.281227,0.282671,0.284115,0.285559,0.287003,0.288447,0.289892,0.291336,0.29278,0.294224,0.295668,0.297112,0.298556,0.3,0.301494,0.302987,0.304481,0.305974,0.307468,0.308961,0.310455,0.311948,0.313442,0.314935,0.316429,0.317922,0.319416,0.320909,0.322403,0.323896,0.32539,0.326883,0.328377,0.32987,0.331364,0.332857,0.334286,0.335714,0.337143,0.338571,0.34,0.341428,0.342857,0.344286,0.345714,0.347143,0.348571,0.35,0.351428,0.352857,0.354286,0.355714,0.357143,0.358571,0.36,0.361428,0.362857,0.364286,0.365714,0.367143,0.368637,0.37013,0.371624,0.373117,0.374611,0.376104,0.377598,0.379091,0.380585,0.382078,0.383572,0.385065,0.386559,0.388052,0.389546,0.391039,0.392533,0.394026,0.39552,0.397013,0.398507,0.4,0.401494,0.402987,0.404481,0.405974,0.407468,0.408961,0.410455,0.411948,0.413442,0.414935,0.416429,0.417922,0.419416,0.420909,0.422403,0.423896,0.42539,0.426883,0.428377,0.42987,0.431364,0.432857,0.434286,0.435714,0.437143,0.438571,0.44,0.441428,0.442857,0.444286,0.445714,0.447143,0.448571,0.45,0.451428,0.452857,0.454286,0.455714,0.457143,0.458571,0.46,0.461428,0.462857,0.464286,0.465714,0.467143,0.468594,0.470045,0.471496,0.472947,0.474397,0.475848,0.477299,0.47875,0.480201,0.481652,0.483103,0.484554,0.486005,0.487456,0.488906,0.490357,0.491808,0.493259,0.49471,0.496161,0.497612,0.499063,0.500514,0.501965,0.503415,0.504866,0.506317,0.507768,0.509219,0.51067,0.512121,0.513572,0.515023,0.516473,0.517924,0.519375,0.520826,0.522277,0.523728,0.525179,0.52663,0.528081,0.529532,0.530982,0.532433,0.533884,0.535335,0.536786,0.538237,0.539688,0.541139,0.54259,0.544041,0.545491,0.546942,0.548393,0.549844,0.551295,0.552746,0.554197,0.555648,0.557099,0.558549,0.56,0.561429,0.562857,0.564286,0.565714,0.567143,0.568572,0.57,0.571429,0.572857,0.574286,0.575715,0.577143,0.578572,0.58,0.581429,0.582858,0.584286,0.585715,0.587143,0.588583,0.590022,0.591462,0.592902,0.594341,0.595781,0.59722,0.59866,0.6001,0.601539,0.602979,0.604419,0.605858,0.607298,0.608737,0.610177,0.611617,0.613056,0.614496,0.615936,0.617375,0.618815,0.620255,0.621694,0.623134,0.624573,0.626013,0.627453,0.628892,0.630332,0.631772,0.633211,0.634651,0.63609,0.63753,0.63897,0.640409,0.641849,0.643289,0.644728,0.646168,0.647608,0.649047,0.650487,0.651926,0.653366,0.654806,0.656245,0.657685,0.659125,0.660564,0.662004,0.663443,0.664883,0.666323,0.667762,0.669202,0.670642,0.672081,0.673521,0.67496,0.6764,0.67784,0.679279,0.680719,0.682159,0.683598,0.685038,0.686478,0.687917,0.689357,0.690796,0.692236,0.693676,0.695115,0.696555,0.697995,0.699434,0.700874,0.702313,0.703753,0.705193,0.706632,0.708072,0.709512,0.710951,0.712391,0.713831,0.71527,0.71671,0.718149,0.719589,0.721029,0.722468,0.723908,0.725348,0.726787,0.728227,0.729666,0.731106,0.732546,0.733985,0.735425,0.736865,0.738304,0.739744,0.741184,0.742623,0.744063,0.745502,0.746942,0.748382,0.749821,0.751261,0.752701,0.75414,0.75558,0.757019,0.758459,0.759899,0.761338,0.762778,0.764218,0.765657,0.767097,0.768537,0.769976,0.771416,0.772857,0.774286,0.775714,0.777143,0.778571,0.78,0.781428,0.782857,0.784285,0.785714,0.787142,0.788571,0.79,0.791428,0.792857,0.794285,0.795714,0.797142,0.798571,0.799999,0.801428,0.802856,0.804285,0.805714,0.807142,0.808571,0.809999,0.811428,0.812856,0.814285,0.815713,0.817142,0.81857,0.819999,0.821428,0.822856,0.824285,0.825713,0.827142,0.82857,0.829999,0.831427,0.832857,0.834286,0.835714,0.837143,0.838571,0.84,0.841429,0.842857,0.844286,0.845714,0.847143,0.848572,0.85,0.851429,0.852857,0.854286,0.855715,0.857143,0.858572,0.86,0.861429,0.862858,0.864286,0.865715,0.867143,0.868603,0.870064,0.871524,0.872984,0.874445,0.875905,0.877365,0.878825,0.880286,0.881746,0.883206,0.884667,0.886127,0.887587,0.889048,0.890508,0.891968,0.893429,0.894889,0.896349,0.89781,0.89927,0.90073,0.902191,0.903651,0.905111,0.906571,0.908032,0.909492,0.910952,0.912413,0.913873,0.915333,0.916794,0.918254,0.919714,0.921175,0.922635,0.924095,0.925556,0.927016,0.928476,0.929936,0.931397,0.932857,0.934286,0.935714,0.937143,0.938571,0.94,0.941429,0.942857,0.944286,0.945714,0.947143,0.948572,0.95,0.951429,0.952857,0.954286,0.955715,0.957143,0.958572,0.96,0.961429,0.962858,0.964286,0.965715,0.967143,0.968572,0.970001,0.971429,0.972858,0.974286,0.975715,0.977144,0.978572,0.980001,0.98143,0.982858,0.984287,0.985715,0.987144,0.988573,0.990001,0.99143,0.992858,0.994287,0.995716,0.997144,0.998573,1}, 693);
PositionInterpolator1225.setKeyValue(new float[]{0,0,0,0,0,0.0288186,0,0,0.109785,0,0,0.234666,0,0,0.395227,0,0,0.583234,0,0,0.790453,0,0,1.00865,0,0,1.22959,0,0,1.44505,0,0,1.64678,0,0,1.82655,0,0,1.97613,0,0,2.08729,0,0,2.15179,0,0,2.1614,0,0,2.10788,0,0,1.983,0,0,1.77852,0,0,1.48622,0,0,1.09785,0,0,0.605193,0,0,0,0.00195812,4.75353e-10,-0.655283,0.00766221,1.86008e-9,-1.34933,0.0168569,4.09218e-9,-2.08039,0.0292867,7.10965e-9,-2.84674,0.0446963,1.08505e-8,-3.64662,0.0628303,1.52527e-8,-4.4783,0.0834331,2.02542e-8,-5.34004,0.10625,2.57932e-8,-6.2301,0.131024,3.18074e-8,-7.14673,0.157501,3.82351e-8,-8.08819,0.185426,4.5014e-8,-9.05275,0.214542,5.20824e-8,-10.0387,0.244595,5.9378e-8,-11.0442,0.275329,6.6839e-8,-12.0676,0.306489,7.44034e-8,-13.1071,0.337819,8.2009e-8,-14.161,0.369064,8.9594e-8,-15.2276,0.399968,9.70964e-8,-16.3051,0.430277,1.04454e-7,-17.3917,0.459733,1.11605e-7,-18.4858,0.488084,1.18487e-7,-19.5856,0.515072,1.25039e-7,-20.6893,0.540442,1.31198e-7,-21.7952,0.56394,1.36902e-7,-22.9016,0.585309,1.4209e-7,-24.0066,0.604294,1.46698e-7,-25.1087,0.62064,1.50667e-7,-26.2061,0.634091,1.53932e-7,-27.2969,0.644392,1.56433e-7,-28.3795,0.651288,1.58107e-7,-29.4521,0.654523,1.58892e-7,-30.513,0.653842,1.58727e-7,-31.5604,0.648989,1.57549e-7,-32.5926,0.639709,1.55296e-7,-33.6079,0.625747,1.51906e-7,-34.6045,0.606846,1.47318e-7,-35.5806,0.582753,1.41469e-7,-36.5347,0.55321,1.34297e-7,-37.4647,0.517964,1.25741e-7,-38.3692,0.476758,1.15738e-7,-39.2463,0.429337,1.04226e-7,-40.0942,0.375445,9.11432e-8,-40.9113,0.314828,7.64278e-8,-41.6957,0.24723,6.00175e-8,-42.4458,0.172395,4.18507e-8,-43.1599,0.0900681,2.18649e-8,-43.836,0,0,-44.4726,-0.0795913,-2.44199e-8,-45.0653,-0.13173,-5.19288e-8,-45.6123,-0.15856,-8.23822e-8,-46.1157,-0.162227,-1.15636e-7,-46.5778,-0.144875,-1.51545e-7,-47.0006,-0.108649,-1.89966e-7,-47.3864,-0.055693,-2.30754e-7,-47.7373,0.0118482,-2.73764e-7,-48.0554,0.0918298,-3.18853e-7,-48.343,0.182107,-3.65875e-7,-48.6021,0.280537,-4.14687e-7,-48.8349,0.384972,-4.65145e-7,-49.0437,0.49327,-5.17102e-7,-49.2304,0.603286,-5.70417e-7,-49.3974,0.712874,-6.24943e-7,-49.5468,0.819891,-6.80537e-7,-49.6806,0.922191,-7.37055e-7,-49.8012,1.01763,-7.94351e-7,-49.9105,1.10407,-8.52282e-7,-50.0109,1.17935,-9.10702e-7,-50.1044,1.24134,-9.69469e-7,-50.1933,1.28789,-0.00000102844,-50.2796,1.31685,-0.00000108746,-50.3655,1.32609,-0.0000011464,-50.4532,1.31346,-0.0000012051,-50.5449,1.2768,-0.00000126343,-50.6426,1.21399,-0.00000132124,-50.7486,1.12287,-0.00000137839,-50.8651,1.0013,-0.00000143472,-50.9941,0.847127,-0.0000014901,-51.1378,0.658217,-0.00000154439,-51.2985,0.432423,-0.00000159743,-51.4781,0.167597,-0.00000164908,-51.679,-0.138404,-0.0000016992,-51.9033,-0.487722,-0.00000174765,-52.1531,-0.882504,-0.00000179428,-52.4306,-1.32489,-0.00000183894,-52.7379,-1.81703,-0.00000188149,-53.0772,-2.36108,-0.0000019218,-53.4507,-2.95916,-0.0000019597,-53.8605,-3.61343,-0.00000199506,-54.3087,-4.32603,-0.00000202774,-54.7976,-5.0991,-0.00000205758,-55.3293,-5.9348,-0.00000208445,-55.9059,-6.83526,-0.0000021082,-56.5297,-7.80263,-0.00000212869,-57.2027,-8.83905,-0.00000214577,-57.9271,-9.93411,-0.00000216063,-58.6924,-11.0524,-0.00000217423,-59.4699,-12.1933,-0.00000218661,-60.2595,-13.3566,-0.00000219781,-61.0609,-14.5417,-0.00000220784,-61.874,-15.7482,-0.00000221674,-62.6983,-16.9756,-0.00000222455,-63.5337,-18.2235,-0.00000223128,-64.38,-19.4914,-0.00000223698,-65.2369,-20.7789,-0.00000224168,-66.1042,-22.0855,-0.0000022454,-66.9816,-23.4108,-0.00000224818,-67.8689,-24.7543,-0.00000225004,-68.7659,-26.1157,-0.00000225102,-69.6723,-27.4943,-0.00000225115,-70.5878,-28.8898,-0.00000225046,-71.5123,-30.3017,-0.00000224899,-72.4454,-31.7296,-0.00000224675,-73.387,-33.1731,-0.00000224378,-74.3369,-34.6316,-0.00000224012,-75.2946,-36.1047,-0.00000223579,-76.2601,-37.592,-0.00000223083,-77.2332,-39.093,-0.00000222526,-78.2134,-40.6073,-0.00000221912,-79.2006,-42.1344,-0.00000221243,-80.1946,-43.6738,-0.00000220523,-81.1952,-45.2252,-0.00000219756,-82.202,-46.7881,-0.00000218943,-83.2149,-48.3619,-0.00000218089,-84.2335,-49.9464,-0.00000217195,-85.2577,-51.5409,-0.00000216266,-86.2873,-53.1451,-0.00000215304,-87.3219,-54.7585,-0.00000214313,-88.3614,-56.3807,-0.00000213295,-89.4054,-58.0112,-0.00000212254,-90.4538,-59.6496,-0.00000211192,-91.5064,-61.2953,-0.00000210113,-92.5628,-62.948,-0.0000020902,-93.6228,-64.6073,-0.00000207916,-94.6863,-66.2726,-0.00000206804,-95.7529,-67.9434,-0.00000205688,-96.8224,-69.6195,-0.00000204569,-97.8946,-71.3002,-0.00000203452,-98.9692,-72.9852,-0.00000202339,-100.046,-74.674,-0.00000201233,-101.125,-76.3662,-0.00000200139,-102.205,-78.0612,-0.00000199057,-103.287,-79.7588,-0.00000197993,-104.37,-81.4583,-0.00000196948,-105.454,-83.1593,-0.00000195926,-106.539,-84.8615,-0.00000194931,-107.625,-86.5643,-0.00000193964,-108.71,-88.2673,-0.00000193029,-109.796,-89.9701,-0.0000019213,-110.882,-91.6721,-0.00000191269,-111.967,-93.373,-0.0000019045,-113.051,-95.0723,-0.00000189675,-114.134,-96.7695,-0.00000188947,-115.217,-98.4642,-0.00000188271,-116.297,-100.156,-0.00000187648,-117.377,-101.844,-0.00000187082,-118.454,-103.529,-0.00000186576,-119.529,-105.209,-0.00000186133,-120.602,-106.884,-0.00000185756,-121.672,-108.555,-0.00000185448,-122.739,-110.219,-0.00000185212,-123.803,-111.878,-0.00000185052,-124.864,-113.53,-0.00000184971,-125.921,-115.174,-0.00000184971,-126.974,-116.812,-0.00000185055,-128.024,-118.441,-0.00000185228,-129.069,-120.062,-0.00000185491,-130.109,-121.675,-0.00000185848,-131.145,-123.278,-0.00000186302,-132.176,-124.871,-0.00000186856,-133.201,-126.454,-0.00000187513,-134.221,-128.027,-0.00000188277,-135.235,-129.588,-0.00000189149,-136.243,-131.138,-0.00000190135,-137.245,-132.676,-0.00000191235,-138.24,-134.201,-0.00000192455,-139.229,-135.714,-0.00000193796,-140.211,-137.213,-0.00000195262,-141.185,-138.699,-0.00000196855,-142.153,-140.17,-0.0000019858,-143.112,-141.627,-0.00000200438,-144.064,-143.068,-0.00000202434,-145.007,-144.494,-0.0000020457,-145.942,-145.904,-0.00000206849,-146.868,-147.298,-0.00000209275,-147.786,-148.674,-0.0000021185,-148.694,-150.033,-0.00000214577,-149.593,-151.375,-0.00000218545,-150.47,-152.612,-0.00000224545,-151.258,-153.75,-0.00000232426,-151.965,-154.794,-0.00000242034,-152.598,-155.749,-0.00000253216,-153.165,-156.622,-0.00000265821,-153.675,-157.417,-0.00000279696,-154.136,-158.14,-0.00000294688,-154.555,-158.796,-0.00000310644,-154.94,-159.392,-0.00000327413,-155.3,-159.932,-0.00000344841,-155.643,-160.422,-0.00000362776,-155.976,-160.868,-0.00000381065,-156.307,-161.275,-0.00000399556,-156.645,-161.648,-0.00000418097,-156.998,-161.993,-0.00000436534,-157.373,-162.316,-0.00000454715,-157.778,-162.622,-0.00000472488,-158.222,-162.916,-0.000004897,-158.713,-163.205,-0.00000506199,-159.258,-163.493,-0.00000521831,-159.865,-163.786,-0.00000536442,-160.543,-164.056,-0.00000549456,-161.262,-164.296,-0.00000561683,-162.044,-164.507,-0.00000573229,-162.883,-164.69,-0.00000584201,-163.772,-164.845,-0.00000594704,-164.704,-164.974,-0.00000604844,-165.674,-165.076,-0.00000614729,-166.673,-165.153,-0.00000624463,-167.695,-165.204,-0.00000634153,-168.734,-165.231,-0.00000643905,-169.784,-165.235,-0.00000653826,-170.836,-165.215,-0.00000664021,-171.885,-165.173,-0.00000674596,-172.924,-165.109,-0.00000685657,-173.947,-165.023,-0.00000697312,-174.945,-164.917,-0.00000709665,-175.914,-164.792,-0.00000722823,-176.846,-164.646,-0.00000736892,-177.735,-164.483,-0.00000751979,-178.573,-164.301,-0.00000768189,-179.354,-164.101,-0.00000785628,-180.072,-163.885,-0.00000804402,-180.72,-163.653,-0.00000824619,-181.291,-163.405,-0.00000846386,-181.778,-163.111,-0.00000871192,-182.204,-162.764,-0.00000898273,-182.557,-162.37,-0.0000092742,-182.842,-161.932,-0.00000958427,-183.064,-161.456,-0.00000991084,-183.228,-160.946,-0.0000102518,-183.337,-160.406,-0.0000106052,-183.396,-159.841,-0.0000109688,-183.41,-159.255,-0.0000113406,-183.383,-158.653,-0.0000117186,-183.319,-158.039,-0.0000121005,-183.224,-157.418,-0.0000124845,-183.102,-156.793,-0.0000128683,-182.957,-156.171,-0.0000132499,-182.794,-155.554,-0.0000136272,-182.617,-154.948,-0.0000139982,-182.431,-154.357,-0.0000143607,-182.24,-153.786,-0.0000147127,-182.048,-153.239,-0.0000150521,-181.862,-152.72,-0.0000153769,-181.684,-152.234,-0.0000156849,-181.519,-151.785,-0.000015974,-181.372,-151.369,-0.0000162518,-181.219,-150.975,-0.0000165266,-181.034,-150.602,-0.0000167981,-180.821,-150.248,-0.0000170658,-180.584,-149.91,-0.0000173293,-180.324,-149.586,-0.0000175882,-180.047,-149.274,-0.0000178419,-179.754,-148.972,-0.0000180902,-179.45,-148.677,-0.0000183325,-179.136,-148.388,-0.0000185684,-178.818,-148.102,-0.0000187975,-178.498,-147.817,-0.0000190193,-178.179,-147.532,-0.0000192334,-177.864,-147.243,-0.0000194394,-177.557,-146.948,-0.0000196369,-177.261,-146.646,-0.0000198253,-176.98,-146.335,-0.0000200043,-176.716,-146.011,-0.0000201734,-176.473,-145.673,-0.0000203322,-176.254,-145.319,-0.0000204803,-176.062,-144.947,-0.0000206171,-175.901,-144.554,-0.0000207424,-175.774,-144.23,-0.00002085,-175.655,-144.021,-0.0000209449,-175.51,-143.908,-0.000021028,-175.345,-143.876,-0.0000210999,-175.165,-143.906,-0.0000211614,-174.974,-143.982,-0.0000212132,-174.779,-144.086,-0.0000212561,-174.585,-144.202,-0.0000212909,-174.396,-144.312,-0.0000213182,-174.219,-144.399,-0.0000213387,-174.058,-144.446,-0.0000213534,-173.918,-144.436,-0.0000213628,-173.805,-144.351,-0.0000213677,-173.725,-144.175,-0.0000213689,-173.682,-143.891,-0.0000213671,-173.681,-143.481,-0.0000213631,-173.729,-142.929,-0.0000213575,-173.83,-142.216,-0.0000213512,-173.989,-141.327,-0.0000213448,-174.212,-140.243,-0.0000213392,-174.504,-138.948,-0.000021335,-174.87,-137.425,-0.000021333,-175.316,-135.656,-0.0000213339,-175.846,-133.624,-0.0000213385,-176.467,-131.395,-0.0000213442,-177.156,-129.115,-0.0000213479,-177.866,-126.784,-0.0000213495,-178.596,-124.405,-0.0000213492,-179.347,-121.979,-0.0000213472,-180.117,-119.508,-0.0000213434,-180.905,-116.992,-0.0000213379,-181.711,-114.435,-0.000021331,-182.535,-111.836,-0.0000213226,-183.375,-109.199,-0.0000213128,-184.231,-106.523,-0.0000213018,-185.102,-103.812,-0.0000212896,-185.987,-101.066,-0.0000212764,-186.887,-98.2867,-0.0000212621,-187.799,-95.4762,-0.000021247,-188.724,-92.6358,-0.0000212311,-189.661,-89.767,-0.0000212145,-190.609,-86.8714,-0.0000211972,-191.568,-83.9506,-0.0000211795,-192.536,-81.0061,-0.0000211613,-193.513,-78.0394,-0.0000211427,-194.498,-75.0522,-0.000021124,-195.492,-72.0459,-0.0000211051,-196.492,-69.0221,-0.0000210861,-197.499,-65.9824,-0.0000210671,-198.511,-62.9283,-0.0000210483,-199.528,-59.8613,-0.0000210297,-200.55,-56.7831,-0.0000210114,-201.575,-53.6952,-0.0000209935,-202.603,-50.599,-0.0000209762,-203.634,-47.4963,-0.0000209594,-204.666,-44.3885,-0.0000209432,-205.699,-41.2772,-0.0000209279,-206.732,-38.1639,-0.0000209134,-207.765,-35.0502,-0.0000208999,-208.797,-31.9376,-0.0000208874,-209.826,-28.8277,-0.000020876,-210.854,-25.7221,-0.0000208659,-211.878,-22.6223,-0.0000208571,-212.898,-19.5298,-0.0000208498,-213.914,-16.4462,-0.0000208439,-214.925,-13.3731,-0.0000208397,-215.929,-10.312,-0.0000208371,-216.928,-7.26441,-0.0000208364,-217.918,-4.23199,-0.0000208375,-218.901,-1.2162,-0.0000208406,-219.876,1.78135,-0.0000208457,-220.841,4.75916,-0.000020853,-221.796,7.71561,-0.0000208626,-222.74,10.6492,-0.0000208745,-223.674,13.5584,-0.0000208888,-224.595,16.4416,-0.0000209056,-225.503,19.2973,-0.0000209251,-226.398,22.1238,-0.0000209473,-227.279,24.9198,-0.0000209723,-228.146,27.6835,-0.0000210002,-228.997,30.4136,-0.000021031,-229.832,33.1082,-0.000021065,-230.65,35.7661,-0.0000211021,-231.45,38.3857,-0.0000211425,-232.233,40.9652,-0.0000211862,-232.997,43.5032,-0.0000212334,-233.741,45.9982,-0.0000212841,-234.465,48.4479,-0.0000213385,-235.168,50.755,-0.0000214239,-235.847,52.8979,-0.0000215649,-236.513,54.8796,-0.0000217549,-237.153,56.7031,-0.0000219872,-237.755,58.3716,-0.0000222549,-238.305,59.888,-0.0000225516,-238.793,61.2554,-0.0000228704,-239.205,62.4769,-0.0000232047,-239.53,63.5555,-0.0000235477,-239.754,64.4942,-0.0000238929,-239.865,65.2962,-0.0000242334,-239.851,65.9643,-0.0000245625,-239.7,66.5018,-0.0000248737,-239.399,66.9117,-0.0000251602,-238.936,67.1969,-0.0000254153,-238.298,67.3606,-0.0000256322,-237.472,67.4057,-0.0000258044,-236.448,67.3354,-0.0000259251,-235.211,67.1528,-0.0000259876,-233.751,66.9097,-0.0000260184,-232.155,66.6599,-0.0000260481,-230.547,66.4035,-0.0000260766,-228.926,66.1406,-0.000026104,-227.293,65.8712,-0.0000261303,-225.648,65.5955,-0.0000261554,-223.991,65.3135,-0.0000261794,-222.322,65.0254,-0.0000262024,-220.641,64.7313,-0.0000262243,-218.95,64.4311,-0.0000262452,-217.248,64.1251,-0.000026265,-215.534,63.8133,-0.0000262838,-213.81,63.4958,-0.0000263017,-212.076,63.1728,-0.0000263185,-210.332,62.8442,-0.0000263344,-208.578,62.5102,-0.0000263494,-206.814,62.1709,-0.0000263634,-205.041,61.8264,-0.0000263765,-203.259,61.4768,-0.0000263887,-201.467,61.1221,-0.0000264,-199.667,60.7625,-0.0000264104,-197.859,60.3981,-0.0000264201,-196.042,60.0289,-0.0000264288,-194.217,59.655,-0.0000264368,-192.384,59.2766,-0.000026444,-190.543,58.8937,-0.0000264503,-188.695,58.5064,-0.000026456,-186.84,58.1148,-0.0000264608,-184.977,57.7191,-0.000026465,-183.108,57.3192,-0.0000264684,-181.233,56.9153,-0.0000264711,-179.351,56.5076,-0.0000264731,-177.463,56.096,-0.0000264745,-175.569,55.6807,-0.0000264752,-173.67,55.2617,-0.0000264753,-171.765,54.8392,-0.0000264748,-169.855,54.4133,-0.0000264736,-167.939,53.984,-0.0000264719,-166.02,53.5515,-0.0000264696,-164.095,53.1158,-0.0000264667,-162.166,52.677,-0.0000264634,-160.234,52.2352,-0.0000264595,-158.297,51.7906,-0.000026455,-156.356,51.3431,-0.0000264501,-154.413,50.893,-0.0000264448,-152.466,50.4403,-0.000026439,-150.516,49.985,-0.0000264327,-148.563,49.5274,-0.000026426,-146.607,49.0674,-0.0000264189,-144.65,48.6052,-0.0000264114,-142.69,48.1408,-0.0000264036,-140.729,47.6744,-0.0000263954,-138.765,47.2061,-0.0000263868,-136.801,46.7359,-0.000026378,-134.835,46.2639,-0.0000263688,-132.868,45.7902,-0.0000263593,-130.9,45.315,-0.0000263496,-128.932,44.8383,-0.0000263396,-126.963,44.3602,-0.0000263293,-124.995,43.8808,-0.0000263189,-123.026,43.4002,-0.0000263082,-121.058,42.9186,-0.0000262973,-119.091,42.4358,-0.0000262863,-117.124,41.9522,-0.000026275,-115.158,41.4677,-0.0000262637,-113.194,40.9825,-0.0000262522,-111.231,40.4967,-0.0000262406,-109.269,40.0103,-0.0000262289,-107.31,39.5234,-0.0000262172,-105.352,39.0362,-0.0000262053,-103.397,38.5487,-0.0000261935,-101.445,38.061,-0.0000261816,-99.4955,37.5733,-0.0000261697,-97.5488,37.0855,-0.0000261578,-95.6055,36.5979,-0.0000261459,-93.6656,36.1105,-0.000026134,-91.7294,35.6233,-0.0000261222,-89.797,35.1365,-0.0000261105,-87.8688,34.6503,-0.0000260988,-85.945,34.1645,-0.0000260873,-84.0257,33.6795,-0.0000260759,-82.1112,33.1952,-0.0000260646,-80.2018,32.7118,-0.0000260535,-78.2976,32.2293,-0.0000260425,-76.3988,31.7478,-0.0000260317,-74.5057,31.2675,-0.0000260211,-72.6186,30.7884,-0.0000260107,-70.7375,30.3106,-0.0000260006,-68.8628,29.8342,-0.0000259907,-66.9947,29.3594,-0.0000259811,-65.1334,28.8861,-0.0000259717,-63.2791,28.4145,-0.0000259627,-61.432,27.9447,-0.000025954,-59.5924,27.4768,-0.0000259456,-57.7605,27.0109,-0.0000259375,-55.9365,26.547,-0.0000259298,-54.1205,26.0853,-0.0000259225,-52.313,25.6258,-0.0000259156,-50.5141,25.1687,-0.0000259091,-48.7239,24.714,-0.0000259031,-46.9427,24.2619,-0.0000258975,-45.1708,23.8123,-0.0000258923,-43.4084,23.3655,-0.0000258876,-41.6556,22.9215,-0.0000258834,-39.9127,22.4804,-0.0000258798,-38.18,22.0424,-0.0000258766,-36.4576,21.6074,-0.000025874,-34.7459,21.1756,-0.000025872,-33.0449,20.747,-0.0000258705,-31.3548,20.3219,-0.0000258696,-29.6761,19.9002,-0.0000258694,-28.0088,19.4821,-0.0000258698,-26.3532,19.0676,-0.0000258708,-24.7095,18.6569,-0.0000258724,-23.0779,18.25,-0.0000258748,-21.4587,17.847,-0.0000258778,-19.8521,17.4481,-0.0000258815,-18.2582,17.0533,-0.000025886,-16.6774,16.6627,-0.0000258912,-15.1098,16.2764,-0.0000258972,-13.5557,15.8945,-0.0000259039,-12.0153,15.5171,-0.0000259114,-10.4888,15.1443,-0.0000259198,-8.97635,14.7762,-0.0000259289,-7.47836,14.4128,-0.0000259389,-5.9949,14.0543,-0.0000259498,-4.52622,13.7008,-0.0000259615,-3.07257,13.3523,-0.0000259741,-1.63414,13.0086,-0.0000259876,-0.209656,12.6811,-0.000026004,1.13905,12.3744,-0.0000260252,2.37933,12.0877,-0.000026051,3.51507,11.8203,-0.0000260813,4.55017,11.5716,-0.0000261158,5.48851,11.3408,-0.0000261542,6.33401,11.1272,-0.0000261965,7.09054,10.9301,-0.0000262423,7.76201,10.7488,-0.0000262914,8.3523,10.5826,-0.0000263436,8.86531,10.4308,-0.0000263988,9.30494,10.2926,-0.0000264567,9.67507,10.1675,-0.000026517,9.97961,10.0546,-0.0000265796,10.2224,9.9532,-0.0000266442,10.4075,9.86269,-0.0000267107,10.5386,9.78232,-0.0000267787,10.6197,9.71139,-0.0000268482,10.6546,9.64917,-0.0000269188,10.6473,9.59498,-0.0000269904,10.6017,9.5481,-0.0000270628,10.5216,9.50782,-0.0000271357,10.411,9.47344,-0.0000272089,10.2738,9.44425,-0.0000272822,10.1137,9.41954,-0.0000273553,9.9348,9.3986,-0.0000274282,9.74091,9.38074,-0.0000275005,9.53593,9.36523,-0.000027572,9.32377,9.35137,-0.0000276425,9.10831,9.33847,-0.0000277119,8.89345,9.3258,-0.0000277798,8.68307,9.31266,-0.0000278461,8.48109,9.29834,-0.0000279105,8.29139,9.28215,-0.0000279729,8.11786,9.26336,-0.000028033,7.9644,9.24127,-0.0000280906,7.8349,9.21518,-0.0000281455,7.73325,9.18438,-0.0000281975,7.66336,9.14816,-0.0000282463,7.62911,9.10581,-0.0000282918,7.63439,9.05662,-0.0000283337,7.68311,8.99985,-0.0000283718,7.77924,8.94896,-0.0000284044,7.89312,8.9165,-0.0000284302,7.99302,8.90055,-0.0000284497,8.07951,8.89921,-0.0000284636,8.15314,8.91057,-0.0000284724,8.21446,8.93271,-0.0000284765,8.26403,8.96374,-0.0000284765,8.3024,9.00174,-0.000028473,8.33013,9.0448,-0.0000284665,8.34777,9.09101,-0.0000284575,8.35588,9.13847,-0.0000284465,8.35501,9.18526,-0.0000284342,8.34572,9.22947,-0.000028421,8.32856,9.2692,-0.0000284074,8.30409,9.30254,-0.0000283941,8.27286,9.32757,-0.0000283815,8.23543,9.34239,-0.0000283702,8.19235,9.34509,-0.0000283607,8.14417,9.33375,-0.0000283536,8.09146,9.30648,-0.0000283493,8.03476,9.26136,-0.0000283484,7.97463,9.19648,-0.0000283516,7.91163,9.10993,-0.0000283592,7.8463,8.99985,-0.0000283718,7.77924,8.86973,-0.0000283951,7.70793,8.73018,-0.0000284331,7.63268,8.58168,-0.0000284846,7.55367,8.4247,-0.0000285488,7.47106,8.25969,-0.0000286245,7.38501,8.08712,-0.0000287108,7.2957,7.90746,-0.0000288066,7.20328,7.72117,-0.0000289109,7.10793,7.52872,-0.0000290227,7.0098,7.33058,-0.000029141,6.90907,7.1272,-0.0000292647,6.80591,6.91906,-0.0000293929,6.70047,6.70661,-0.0000295245,6.59293,6.49033,-0.0000296585,6.48345,6.27069,-0.0000297939,6.37219,6.04813,-0.0000299297,6.25933,5.82314,-0.0000300648,6.14503,5.59617,-0.0000301982,6.02945,5.3677,-0.0000303289,5.91277,5.13818,-0.0000304559,5.79514,4.90808,-0.0000305782,5.67674,4.67787,-0.0000306948,5.55773,4.44802,-0.0000308045,5.43827,4.21898,-0.0000309065,5.31854,3.99122,-0.0000309997,5.1987,3.76522,-0.000031083,5.07891,3.54142,-0.0000311555,4.95934,3.32031,-0.0000312162,4.84016,3.10234,-0.0000312639,4.72154,2.88798,-0.0000312978,4.60363,2.6777,-0.0000313167,4.48661,2.47195,-0.0000313197,4.37064,2.27122,-0.0000313058,4.25589,2.07595,-0.0000312738,4.14253,1.88662,-0.0000312229,4.03071,1.70369,-0.0000311519,3.92061,1.52763,-0.00003106,3.8124,1.3589,-0.0000309459,3.70623,1.19797,-0.0000308088,3.60228,1.04531,-0.0000306476,3.50072,0.901368,-0.0000304613,3.40169,0.766623,-0.0000302489,3.30539,0.641537,-0.0000300093,3.21196,0.526574,-0.0000297416,3.12158,0.422211,-0.0000294447,3.03442,0.329132,-0.0000291261,2.95157,0.243287,-0.000028781,2.8703,0.164436,-0.0000284103,2.79055,0.092342,-0.0000280149,2.71226,0.0267656,-0.0000275955,2.6354,-0.0325313,-0.0000271533,2.55989,-0.0857871,-0.0000266888,2.48571,-0.133241,-0.0000262032,2.41278,-0.17513,-0.0000256972,2.34106,-0.211694,-0.0000251717,2.2705,-0.24317,-0.0000246275,2.20105,-0.269798,-0.0000240656,2.13265,-0.291816,-0.0000234868,2.06525,-0.309462,-0.0000228921,1.99881,-0.322975,-0.0000222821,1.93326,-0.332593,-0.000021658,1.86856,-0.338555,-0.0000210204,1.80465,-0.341099,-0.0000203703,1.74149,-0.340463,-0.0000197086,1.67901,-0.336887,-0.0000190361,1.61718,-0.330608,-0.0000183538,1.55594,-0.321865,-0.0000176624,1.49523,-0.310897,-0.0000169628,1.435,-0.297942,-0.000016256,1.37521,-0.283237,-0.0000155428,1.31579,-0.267023,-0.0000148241,1.25671,-0.249538,-0.0000141007,1.1979,-0.231019,-0.0000133735,1.13931,-0.211705,-0.0000126434,1.0809,-0.191835,-0.0000119112,1.02261,-0.171647,-0.0000111779,0.96439,-0.15138,-0.0000104444,0.906186,-0.131272,-0.00000971136,0.847947,-0.111561,-0.00000897981,0.789621,-0.0924869,-0.00000825059,0.731158,-0.074287,-0.00000752458,0.672504,-0.0572002,-0.00000680263,0.613608,-0.0414648,-0.00000608564,0.554419,-0.0273194,-0.00000537447,0.494884,-0.0150021,-0.00000466998,0.434951,-0.00475178,-0.00000397307,0.374569,0.00319317,-0.00000328461,0.313687,0.00859409,-0.00000260544,0.25225,0.0112129,-0.00000193647,0.190209,0.0108112,-0.00000127856,0.127511,0.00715038,-6.32578e-7,0.0641052,0,0,0}, 2079);
Group1222.addChild(&PositionInterpolator1225);

OrientationInterpolator& OrientationInterpolator1226 =  OrientationInterpolator();
OrientationInterpolator1226.setDEF(CString("UnnamedTransformRotationInterp"));
OrientationInterpolator1226.setKey(new float[]{0,0.00142857,0.00285714,0.00428571,0.00571429,0.00714286,0.00857143,0.01,0.0114286,0.0128571,0.0142857,0.0157143,0.0171429,0.0185714,0.02,0.0214286,0.0228571,0.0242857,0.0257143,0.0271429,0.0285714,0.03,0.0314286,0.0328571,0.0342857,0.0357143,0.0371428,0.0385714,0.04,0.0414286,0.0428571,0.0442857,0.0457143,0.0471428,0.0485714,0.05,0.0514286,0.0528571,0.0542857,0.0557143,0.0571428,0.0585714,0.06,0.0614285,0.0628571,0.0642857,0.0657143,0.0671428,0.0685714,0.07,0.0714286,0.0728571,0.0742857,0.0757143,0.0771429,0.0785714,0.08,0.0814286,0.0828572,0.0842857,0.0857143,0.0871429,0.0885715,0.09,0.0914286,0.0928572,0.0942858,0.0957143,0.0971429,0.0985715,0.1,0.101429,0.102857,0.104286,0.105714,0.107143,0.108571,0.11,0.111429,0.112857,0.114286,0.115714,0.117143,0.118571,0.12,0.121429,0.122857,0.124286,0.125714,0.127143,0.128571,0.13,0.131429,0.132857,0.134286,0.135714,0.137143,0.138572,0.14,0.141429,0.142857,0.144286,0.145714,0.147143,0.148572,0.15,0.151429,0.152857,0.154286,0.155714,0.157143,0.158572,0.16,0.161429,0.162857,0.164286,0.165714,0.167143,0.168587,0.170031,0.171475,0.172919,0.174364,0.175808,0.177252,0.178696,0.18014,0.181584,0.183028,0.184472,0.185916,0.18736,0.188805,0.190249,0.191693,0.193137,0.194581,0.196025,0.197469,0.198913,0.200357,0.201801,0.203246,0.20469,0.206134,0.207578,0.209022,0.210466,0.21191,0.213354,0.214798,0.216242,0.217687,0.219131,0.220575,0.222019,0.223463,0.224907,0.226351,0.227795,0.229239,0.230683,0.232128,0.233572,0.235016,0.23646,0.237904,0.239348,0.240792,0.242236,0.24368,0.245124,0.246569,0.248013,0.249457,0.250901,0.252345,0.253789,0.255233,0.256677,0.258121,0.259565,0.26101,0.262454,0.263898,0.265342,0.266786,0.26823,0.269674,0.271118,0.272562,0.274006,0.275451,0.276895,0.278339,0.279783,0.281227,0.282671,0.284115,0.285559,0.287003,0.288447,0.289892,0.291336,0.29278,0.294224,0.295668,0.297112,0.298556,0.3,0.301494,0.302987,0.304481,0.305974,0.307468,0.308961,0.310455,0.311948,0.313442,0.314935,0.316429,0.317922,0.319416,0.320909,0.322403,0.323896,0.32539,0.326883,0.328377,0.32987,0.331364,0.332857,0.334286,0.335714,0.337143,0.338571,0.34,0.341428,0.342857,0.344286,0.345714,0.347143,0.348571,0.35,0.351428,0.352857,0.354286,0.355714,0.357143,0.358571,0.36,0.361428,0.362857,0.364286,0.365714,0.367143,0.368637,0.37013,0.371624,0.373117,0.374611,0.376104,0.377598,0.379091,0.380585,0.382078,0.383572,0.385065,0.386559,0.388052,0.389546,0.391039,0.392533,0.394026,0.39552,0.397013,0.398507,0.4,0.401494,0.402987,0.404481,0.405974,0.407468,0.408961,0.410455,0.411948,0.413442,0.414935,0.416429,0.417922,0.419416,0.420909,0.422403,0.423896,0.42539,0.426883,0.428377,0.42987,0.431364,0.432857,0.434286,0.435714,0.437143,0.438571,0.44,0.441428,0.442857,0.444286,0.445714,0.447143,0.448571,0.45,0.451428,0.452857,0.454286,0.455714,0.457143,0.458571,0.46,0.461428,0.462857,0.464286,0.465714,0.467143,0.468594,0.470045,0.471496,0.472947,0.474397,0.475848,0.477299,0.47875,0.480201,0.481652,0.483103,0.484554,0.486005,0.487456,0.488906,0.490357,0.491808,0.493259,0.49471,0.496161,0.497612,0.499063,0.500514,0.501965,0.503415,0.504866,0.506317,0.507768,0.509219,0.51067,0.512121,0.513572,0.515023,0.516473,0.517924,0.519375,0.520826,0.522277,0.523728,0.525179,0.52663,0.528081,0.529532,0.530982,0.532433,0.533884,0.535335,0.536786,0.538237,0.539688,0.541139,0.54259,0.544041,0.545491,0.546942,0.548393,0.549844,0.551295,0.552746,0.554197,0.555648,0.557099,0.558549,0.56,0.561429,0.562857,0.564286,0.565714,0.567143,0.568572,0.57,0.571429,0.572857,0.574286,0.575715,0.577143,0.578572,0.58,0.581429,0.582858,0.584286,0.585715,0.587143,0.588583,0.590022,0.591462,0.592902,0.594341,0.595781,0.59722,0.59866,0.6001,0.601539,0.602979,0.604419,0.605858,0.607298,0.608737,0.610177,0.611617,0.613056,0.614496,0.615936,0.617375,0.618815,0.620255,0.621694,0.623134,0.624573,0.626013,0.627453,0.628892,0.630332,0.631772,0.633211,0.634651,0.63609,0.63753,0.63897,0.640409,0.641849,0.643289,0.644728,0.646168,0.647608,0.649047,0.650487,0.651926,0.653366,0.654806,0.656245,0.657685,0.659125,0.660564,0.662004,0.663443,0.664883,0.666323,0.667762,0.669202,0.670642,0.672081,0.673521,0.67496,0.6764,0.67784,0.679279,0.680719,0.682159,0.683598,0.685038,0.686478,0.687917,0.689357,0.690796,0.692236,0.693676,0.695115,0.696555,0.697995,0.699434,0.700874,0.702313,0.703753,0.705193,0.706632,0.708072,0.709512,0.710951,0.712391,0.713831,0.71527,0.71671,0.718149,0.719589,0.721029,0.722468,0.723908,0.725348,0.726787,0.728227,0.729666,0.731106,0.732546,0.733985,0.735425,0.736865,0.738304,0.739744,0.741184,0.742623,0.744063,0.745502,0.746942,0.748382,0.749821,0.751261,0.752701,0.75414,0.75558,0.757019,0.758459,0.759899,0.761338,0.762778,0.764218,0.765657,0.767097,0.768537,0.769976,0.771416,0.772857,0.774286,0.775714,0.777143,0.778571,0.78,0.781428,0.782857,0.784285,0.785714,0.787142,0.788571,0.79,0.791428,0.792857,0.794285,0.795714,0.797142,0.798571,0.799999,0.801428,0.802856,0.804285,0.805714,0.807142,0.808571,0.809999,0.811428,0.812856,0.814285,0.815713,0.817142,0.81857,0.819999,0.821428,0.822856,0.824285,0.825713,0.827142,0.82857,0.829999,0.831427,0.832857,0.834286,0.835714,0.837143,0.838571,0.84,0.841429,0.842857,0.844286,0.845714,0.847143,0.848572,0.85,0.851429,0.852857,0.854286,0.855715,0.857143,0.858572,0.86,0.861429,0.862858,0.864286,0.865715,0.867143,0.868603,0.870064,0.871524,0.872984,0.874445,0.875905,0.877365,0.878825,0.880286,0.881746,0.883206,0.884667,0.886127,0.887587,0.889048,0.890508,0.891968,0.893429,0.894889,0.896349,0.89781,0.89927,0.90073,0.902191,0.903651,0.905111,0.906571,0.908032,0.909492,0.910952,0.912413,0.913873,0.915333,0.916794,0.918254,0.919714,0.921175,0.922635,0.924095,0.925556,0.927016,0.928476,0.929936,0.931397,0.932857,0.934286,0.935714,0.937143,0.938571,0.94,0.941429,0.942857,0.944286,0.945714,0.947143,0.948572,0.95,0.951429,0.952857,0.954286,0.955715,0.957143,0.958572,0.96,0.961429,0.962858,0.964286,0.965715,0.967143,0.968572,0.970001,0.971429,0.972858,0.974286,0.975715,0.977144,0.978572,0.980001,0.98143,0.982858,0.984287,0.985715,0.987144,0.988573,0.990001,0.99143,0.992858,0.994287,0.995716,0.997144,0.998573,1}, 694);
OrientationInterpolator1226.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0.000976562,0,-1,0,0.00154408,0,-1,0,0.00239208,0,-1,0,0.00331169,0,-1,0,0.00447517,0,-1,0,0.00573601,0,-1,0,0.00717624,0,-1,0,0.00870731,0,-1,0,0.010358,0,-1,0,0.0121188,0,-1,0,0.0139652,0,-1,0,0.0159123,0,-1,0,0.0179539,0,-1,0,0.0200494,0,-1,0,0.0222156,0,-1,0,0.0244337,0,-1,0,0.0266999,0,-1,0,0.0290109,0,-1,0,0.0313417,0,-1,0,0.0336953,0,-1,0,0.0360606,0,-1,0,0.0384293,0,-1,0,0.0407948,0,-1,0,0.0431413,0,-1,0,0.0454662,0,-1,0,0.0477579,0,-1,0,0.0500114,0,-1,0,0.0522133,0,-1,0,0.0543612,0,-1,0,0.0564401,0,-1,0,0.058441,0,-1,0,0.0603599,0,-1,0,0.0621851,0,-1,0,0.0639098,0,-1,0,0.0655237,0,-1,0,0.0670205,0,-1,0,0.0683871,0,-1,0,0.0696174,0,-1,0,0.0707051,0,-1,0,0.0716365,0,-1,0,0.072408,0,-1,0,0.0730082,0,-1,0,0.0734284,0,-1,0,0.0736586,0,-1,0,0.073691,0,-1,0,0.0735193,0,-1,0,0.073129,0,-1,0,0.0725199,0,-1,0,0.0716765,0,-1,0,0.0705937,0,-1,0,0.0692603,0,-1,0,0.067665,0,-1,0,0.0658105,0,-1,0,0.063678,0,-1,0,0.0612617,0,-1,0,0.0585511,0,-1,0,0.0555372,0,-1,0,0.0522088,0,-1,0,0.0485698,0,-1,0,0.0446032,0,-1,0,0.040295,0,-1,0,0.0356483,0,-1,0,0.0306417,0,-1,0,0.0252779,0,-1,0,0.0195313,0,-1,0,0.0134078,0,-1,0,0.00690534,0,0,1,0,0,1,0,0.0112411,0,1,0,0.023791,0,1,0,0.037576,0,1,0,0.0525366,0,1,0,0.0686169,0,1,0,0.0857608,0,1,0,0.103914,0,1,0,0.123012,0,1,0,0.143003,0,1,0,0.163828,0,1,0,0.185427,0,1,0,0.207748,0,1,0,0.230729,0,1,0,0.254314,0,1,0,0.278445,0,1,0,0.303064,0,1,0,0.328115,0,1,0,0.35354,0,1,0,0.37928,0,1,0,0.405281,0,1,0,0.431481,0,1,0,0.457826,0,1,0,0.484257,0,1,0,0.510716,0,1,0,0.537147,0,1,0,0.563492,0,1,0,0.589693,0,1,0,0.615692,0,1,0,0.641433,0,1,0,0.666858,0,1,0,0.691909,0,1,0,0.716529,0,1,0,0.740659,0,1,0,0.764244,0,1,0,0.787225,0,1,0,0.809545,0,1,0,0.831146,0,1,0,0.85197,0,1,0,0.871961,0,1,0,0.891061,0,1,0,0.909211,0,1,0,0.926356,0,1,0,0.942437,0,1,0,0.957397,0,1,0,0.971178,0,1,0,0.983722,0,1,0,0.994973,0,1,0,1.00028,0,1,0,1.00541,0,1,0,1.01034,0,1,0,1.01509,0,1,0,1.01965,0,1,0,1.02403,0,1,0,1.02824,0,1,0,1.03227,0,1,0,1.03613,0,1,0,1.03981,0,1,0,1.04333,0,1,0,1.04668,0,1,0,1.04987,0,1,0,1.0529,0,1,0,1.05577,0,1,0,1.05848,0,1,0,1.06104,0,1,0,1.06345,0,1,0,1.06571,0,1,0,1.06782,0,1,0,1.06979,0,1,0,1.07162,0,1,0,1.07331,0,1,0,1.07486,0,1,0,1.07628,0,1,0,1.07757,0,1,0,1.07873,0,1,0,1.07976,0,1,0,1.08067,0,1,0,1.08146,0,1,0,1.08212,0,1,0,1.08267,0,1,0,1.08311,0,1,0,1.08343,0,1,0,1.08365,0,1,0,1.08376,0,1,0,1.08376,0,1,0,1.08366,0,1,0,1.08346,0,1,0,1.08317,0,1,0,1.08278,0,1,0,1.0823,0,1,0,1.08173,0,1,0,1.08107,0,1,0,1.08032,0,1,0,1.0795,0,1,0,1.07859,0,1,0,1.07761,0,1,0,1.07655,0,1,0,1.07542,0,1,0,1.07422,0,1,0,1.07295,0,1,0,1.07162,0,1,0,1.07022,0,1,0,1.06877,0,1,0,1.06725,0,1,0,1.06568,0,1,0,1.06406,0,1,0,1.06239,0,1,0,1.06067,0,1,0,1.0589,0,1,0,1.05709,0,1,0,1.05524,0,1,0,1.05335,0,1,0,1.05143,0,1,0,1.04947,0,1,0,1.04748,0,1,0,1.04547,0,1,0,1.04343,0,1,0,1.04136,0,1,0,1.03927,0,1,0,1.03717,0,1,0,1.03505,0,1,0,1.03291,0,1,0,1.03077,0,1,0,1.02861,0,1,0,1.02645,0,1,0,1.02429,0,1,0,1.02212,0,1,0,1.01996,0,1,0,1.0178,0,1,0,1.01564,0,1,0,1.0135,0,1,0,1.01136,0,1,0,1.00924,0,1,0,1.00714,0,1,0,1.00505,0,1,0,1.00298,0,1,0,1.00094,0,1,0,0.998921,0,1,0,0.996931,0,1,0,0.994973,0,1,0,0.987005,0,1,0,0.97925,0,1,0,0.971556,0,1,0,0.963774,0,1,0,0.955754,0,1,0,0.947346,0,1,0,0.938399,0,1,0,0.928764,0,1,0,0.91829,0,1,0,0.906827,0,1,0,0.894226,0,1,0,0.880336,0,1,0,0.865007,0,1,0,0.848088,0,1,0,0.829431,0,1,0,0.808884,0,1,0,0.786297,0,1,0,0.761522,0,1,0,0.734406,0,1,0,0.704802,0,1,0,0.672557,0,1,0,0.637529,0,1,0,0.603043,0,1,0,0.566511,0,1,0,0.528003,0,1,0,0.487593,0,1,0,0.44535,0,1,0,0.401347,0,1,0,0.355655,0,1,0,0.308347,0,1,0,0.259493,0,1,0,0.209165,0,1,0,0.157435,0,1,0,0.104374,0,1,0,0.0500543,0,-1,0,0.00543727,0,-1,0,0.0620776,0,-1,0,0.119743,0,-1,0,0.178383,0,-1,0,0.237925,0,-1,0,0.298295,0,-1,0,0.359424,0,-1,0,0.421239,0,-1,0,0.483668,0,-1,0,0.546641,0,-1,0,0.610095,0,-1,0,0.683168,0,-1,0,0.762918,0,-1,0,0.848473,0,-1,0,0.938962,0,-1,0,1.03351,0,-1,0,1.13126,0,-1,0,1.23132,0,-1,0,1.33283,0,-1,0,1.43491,0,-1,0,1.53671,0,-1,0,1.63733,0,-1,0,1.73592,0,-1,0,1.8316,0,-1,0,1.92349,0,-1,0,2.01074,0,-1,0,2.09246,0,-1,0,2.16779,0,-1,0,2.23585,0,-1,0,2.29577,0,-1,0,2.34669,0,-1,0,2.38772,0,1,0,3.86519,0,-1,0,2.43721,0,-1,0,2.44616,0,-1,0,2.44563,0,-1,0,2.43642,0,-1,0,2.41932,0,-1,0,2.39514,0,-1,0,2.36467,0,-1,0,2.32869,0,-1,0,2.28802,0,-1,0,2.24343,0,-1,0,2.19574,0,-1,0,2.14573,0,-1,0,2.09419,0,-1,0,2.04194,0,-1,0,1.98975,0,-1,0,1.93843,0,-1,0,1.88876,0,-1,0,1.84156,0,-1,0,1.79761,0,-1,0,1.7577,0,-1,0,1.72264,0,1,0,4.58997,0,1,0,4.61399,0,1,0,4.63771,0,1,0,4.66113,0,1,0,4.68419,0,1,0,4.70687,0,1,0,4.72915,0,1,0,4.75098,0,1,0,4.77234,0,1,0,4.79319,0,1,0,4.81351,0,1,0,4.83327,0,1,0,4.85242,0,1,0,4.87095,0,1,0,4.88881,0,1,0,4.90598,0,1,0,4.92243,0,1,0,4.93813,0,1,0,4.95304,0,1,0,4.96714,0,1,0,4.98038,0,1,0,4.99275,0,1,0,5.00421,0,1,0,5.01473,0,-1,0,1.25891,0,1,0,5.02782,0,1,0,5.03164,0,1,0,5.03573,0,1,0,5.04007,0,1,0,5.04463,0,1,0,5.0494,0,1,0,5.05436,0,1,0,5.05948,0,1,0,5.06476,0,1,0,5.07017,0,1,0,5.07569,0,1,0,5.0813,0,1,0,5.08698,0,1,0,5.09272,0,1,0,5.09849,0,1,0,5.10428,0,1,0,5.11006,0,1,0,5.11582,0,1,0,5.12154,0,1,0,5.1272,0,1,0,5.13278,0,1,0,5.13825,0,1,0,5.14361,0,1,0,5.14883,0,1,0,5.1539,0,1,0,5.15878,0,1,0,5.16347,0,1,0,5.16795,0,1,0,5.17219,0,1,0,5.17618,0,1,0,5.1799,0,1,0,5.18333,0,1,0,5.18644,0,1,0,5.18923,0,1,0,5.19166,0,1,0,5.19373,0,1,0,5.19541,0,1,0,5.19669,0,1,0,5.19754,0,1,0,5.19794,0,1,0,5.19788,0,1,0,5.19733,0,1,0,5.19629,0,1,0,5.19472,0,1,0,5.19261,0,1,0,5.18994,0,1,0,5.18669,0,1,0,5.18285,0,1,0,5.17838,0,1,0,5.17328,0,1,0,5.16753,0,1,0,5.16109,0,1,0,5.15397,0,1,0,5.14613,0,1,0,5.13756,0,1,0,5.12823,0,1,0,5.11814,0,1,0,5.10725,0,1,0,5.09556,0,1,0,5.08303,0,1,0,5.06966,0,1,0,5.05543,0,1,0,5.0403,0,-1,0,1.25891,0,-1,0,1.32291,0,-1,0,1.40261,0,-1,0,1.49615,0,-1,0,1.60169,0,-1,0,1.71739,0,-1,0,1.84139,0,-1,0,1.97186,0,-1,0,2.10694,0,-1,0,2.24479,0,-1,0,2.38357,0,-1,0,2.52142,0,-1,0,2.6565,0,-1,0,2.78696,0,-1,0,2.91097,0,-1,0,3.02666,0,-1,0,3.1322,0,-1,0,3.22574,0,-1,0,3.30543,0,1,0,2.91378,0,-1,0,3.3774,0,-1,0,3.38505,0,-1,0,3.39234,0,-1,0,3.39928,0,-1,0,3.40588,0,-1,0,3.41215,0,-1,0,3.41809,0,-1,0,3.4237,0,-1,0,3.42899,0,-1,0,3.43397,0,-1,0,3.43865,0,-1,0,3.44301,0,-1,0,3.44709,0,-1,0,3.45087,0,-1,0,3.45436,0,-1,0,3.45758,0,-1,0,3.46051,0,-1,0,3.46318,0,-1,0,3.46559,0,-1,0,3.46774,0,-1,0,3.46963,0,-1,0,3.47127,0,-1,0,3.47268,0,-1,0,3.47385,0,-1,0,3.47478,0,-1,0,3.47549,0,-1,0,3.47598,0,-1,0,3.47626,0,-1,0,3.47632,0,-1,0,3.47618,0,-1,0,3.47585,0,-1,0,3.47532,0,-1,0,3.4746,0,-1,0,3.47371,0,-1,0,3.47263,0,-1,0,3.47139,0,-1,0,3.46998,0,-1,0,3.46841,0,-1,0,3.46668,0,-1,0,3.46481,0,-1,0,3.46279,0,-1,0,3.46064,0,-1,0,3.45835,0,-1,0,3.45594,0,-1,0,3.45341,0,-1,0,3.45076,0,-1,0,3.448,0,-1,0,3.44513,0,-1,0,3.44217,0,-1,0,3.43911,0,-1,0,3.43596,0,-1,0,3.43273,0,-1,0,3.42942,0,-1,0,3.42604,0,-1,0,3.4226,0,-1,0,3.41909,0,-1,0,3.41553,0,-1,0,3.41192,0,-1,0,3.40826,0,-1,0,3.40457,0,-1,0,3.40084,0,-1,0,3.39708,0,-1,0,3.3933,0,-1,0,3.3895,0,-1,0,3.3857,0,-1,0,3.38188,0,-1,0,3.37807,0,-1,0,3.37426,0,-1,0,3.37046,0,-1,0,3.36668,0,-1,0,3.36292,0,-1,0,3.35918,0,-1,0,3.35548,0,-1,0,3.35181,0,-1,0,3.34819,0,-1,0,3.34462,0,-1,0,3.34111,0,-1,0,3.33765,0,-1,0,3.33426,0,-1,0,3.33093,0,-1,0,3.32769,0,-1,0,3.32453,0,-1,0,3.32145,0,-1,0,3.31847,0,-1,0,3.31558,0,-1,0,3.3128,0,-1,0,3.31013,0,-1,0,3.30758,0,-1,0,3.30514,0,-1,0,3.30283,0,-1,0,3.30065,0,-1,0,3.29861,0,-1,0,3.29671,0,-1,0,3.29496,0,-1,0,3.29336,0,-1,0,3.29192,0,-1,0,3.29064,0,-1,0,3.28954,0,-1,0,3.2886,0,-1,0,3.28785,0,-1,0,3.28729,0,-1,0,3.28692,0,-1,0,3.28674,0,-1,0,3.28677,0,-1,0,3.28701,0,-1,0,3.28746,0,-1,0,3.28812,0,-1,0,3.28902,0,-1,0,3.29014,0,-1,0,3.2915,0,-1,0,3.2931,0,-1,0,3.29495,0,-1,0,3.29705,0,-1,0,3.2994,0,-1,0,3.30202,0,-1,0,3.30491,0,-1,0,3.30807,0,-1,0,3.31151,0,-1,0,3.31524,0,-1,0,3.31926,0,-1,0,3.32357,0,-1,0,3.32819,0,-1,0,3.33311,0,-1,0,3.33834,0,-1,0,3.3439,0,-1,0,3.34977,0,-1,0,3.35598,0,-1,0,3.36252,0,1,0,2.91378,0,1,0,2.8906,0,1,0,2.86447,0,1,0,2.83554,0,1,0,2.80396,0,1,0,2.76988,0,1,0,2.73344,0,1,0,2.69478,0,1,0,2.65407,0,1,0,2.61144,0,1,0,2.56704,0,1,0,2.52102,0,1,0,2.47353,0,1,0,2.42471,0,1,0,2.37471,0,1,0,2.32368,0,1,0,2.27177,0,1,0,2.21912,0,1,0,2.16588,0,1,0,2.1122,0,1,0,2.05822,0,1,0,2.0041,0,1,0,1.94998,0,1,0,1.896,0,1,0,1.84232,0,1,0,1.78908,0,1,0,1.73643,0,1,0,1.68452,0,1,0,1.63349,0,1,0,1.58349,0,1,0,1.53467,0,1,0,1.48718,0,1,0,1.44116,0,1,0,1.39676,0,1,0,1.35412,0,1,0,1.31341,0,1,0,1.27475,0,1,0,1.23831,0,1,0,1.20422,0,1,0,1.17264,0,1,0,1.14371,0,1,0,1.11758,0,1,0,1.09438,0,1,0,1.06009,0,1,0,1.03266,0,1,0,1.01157,0,1,0,0.996282,0,1,0,0.986276,0,1,0,0.981018,0,1,0,0.979978,0,1,0,0.982626,0,1,0,0.988433,0,1,0,0.996869,0,1,0,1.0074,0,1,0,1.01951,0,1,0,1.03265,0,1,0,1.04631,0,1,0,1.05994,0,1,0,1.07303,0,1,0,1.08504,0,1,0,1.09544,0,1,0,1.10369,0,1,0,1.10929,0,1,0,1.11168,0,1,0,1.11035,0,1,0,1.10475,0,1,0,1.09438,0,1,0,1.08714,0,1,0,1.07923,0,1,0,1.07069,0,1,0,1.06153,0,1,0,1.0518,0,1,0,1.0415,0,1,0,1.03066,0,1,0,1.01932,0,1,0,1.00749,0,1,0,0.995202,0,1,0,0.98248,0,1,0,0.969351,0,1,0,0.955839,0,1,0,0.941969,0,1,0,0.927767,0,1,0,0.913258,0,1,0,0.898468,0,1,0,0.883421,0,1,0,0.868144,0,1,0,0.852661,0,1,0,0.836998,0,1,0,0.82118,0,1,0,0.805233,0,1,0,0.789181,0,1,0,0.773051,0,1,0,0.756867,0,1,0,0.740656,0,1,0,0.724441,0,1,0,0.70825,0,1,0,0.692106,0,1,0,0.676036,0,1,0,0.660064,0,1,0,0.644216,0,1,0,0.628518,0,1,0,0.612994,0,1,0,0.597671,0,1,0,0.582572,0,1,0,0.567725,0,1,0,0.553154,0,1,0,0.538884,0,1,0,0.524941,0,1,0,0.51135,0,1,0,0.498137,0,1,0,0.485326,0,1,0,0.472945,0,1,0,0.461264,0,1,0,0.449513,0,1,0,0.437701,0,1,0,0.425838,0,1,0,0.413932,0,1,0,0.401993,0,1,0,0.390031,0,1,0,0.378055,0,1,0,0.366075,0,1,0,0.354099,0,1,0,0.342137,0,1,0,0.330199,0,1,0,0.318293,0,1,0,0.30643,0,1,0,0.294619,0,1,0,0.282867,0,1,0,0.271188,0,1,0,0.259587,0,1,0,0.24807,0,1,0,0.236662,0,1,0,0.225357,0,1,0,0.214169,0,1,0,0.203108,0,1,0,0.192183,0,1,0,0.181401,0,1,0,0.170777,0,1,0,0.160317,0,1,0,0.150029,0,1,0,0.139923,0,1,0,0.130012,0,1,0,0.1203,0,1,0,0.110797,0,1,0,0.101522,0,1,0,0.0924702,0,1,0,0.0836605,0,1,0,0.0750982,0,1,0,0.0667924,0,1,0,0.0587584,0,1,0,0.0509981,0,1,0,0.0435209,0,1,0,0.0363438,0,1,0,0.0294675,0,1,0,0.022913,0,1,0,0.0166733,0,1,0,0.0107644,0,1,0,0.00521342,0,0,1,0}, 2776);
Group1222.addChild(&OrientationInterpolator1226);

Transform1221.addChild(&Group1222);

Transform& Transform1227 =  Transform();
Transform1227.setTranslation(new float[]{189.346,0.115033,233.732});
Inline& Inline1228 =  Inline();
Inline1228.setUrl(new CString[]{CString("tikiboat.x3d")}, 1);
Inline1228.setBboxSize(new float[]{3.13158,3.13158,5.1827});
Inline1228.setBboxCenter(new float[]{0.0439634,1.3358,0.767748});
Transform1227.addChild(&Inline1228);

Transform1221.addChild(&Transform1227);

Viewpoint& Viewpoint1229 =  Viewpoint();
Viewpoint1229.setDEF(CString("VP4"));
Viewpoint1229.setDescription(CString("tikiboat"));
Viewpoint1229.setPosition(new float[]{189.425,1.37924,234.186});
Viewpoint1229.setOrientation(new float[]{-0.996664,0.0804776,-0.0136063,0.324511});
Transform1221.addChild(&Viewpoint1229);

Transform1220.addChild(&Transform1221);

Transform1219.addChild(&Transform1220);

Transform232.addChild(&Transform1219);

Transform& Transform1230 =  Transform();
Transform1230.setDEF(CString("views"));
Viewpoint& Viewpoint1231 =  Viewpoint();
Viewpoint1231.setDEF(CString("VP1"));
Viewpoint1231.setDescription(CString("entry"));
Viewpoint1231.setPosition(new float[]{139.185,84.3153,292.639});
Viewpoint1231.setOrientation(new float[]{0.0789426,0.993326,-0.0840937,2.18245});
Transform1230.addChild(&Viewpoint1231);

Viewpoint& Viewpoint1232 =  Viewpoint();
Viewpoint1232.setDEF(CString("VP2"));
Viewpoint1232.setDescription(CString("falls"));
Viewpoint1232.setPosition(new float[]{88.1954,11.6154,225.496});
Viewpoint1232.setOrientation(new float[]{0.0467413,0.959897,-0.27643,2.96918});
Transform1230.addChild(&Viewpoint1232);

Viewpoint& Viewpoint1233 =  Viewpoint();
Viewpoint1233.setDEF(CString("VP3"));
Viewpoint1233.setDescription(CString("b1"));
Viewpoint1233.setPosition(new float[]{96.2916,22.4949,217.633});
Viewpoint1233.setOrientation(new float[]{0.0143133,0.999897,0.000515865,1.54535});
Transform1230.addChild(&Viewpoint1233);

Viewpoint& Viewpoint1234 =  Viewpoint();
Viewpoint1234.setDEF(CString("VP5"));
Viewpoint1234.setDescription(CString("b2"));
Viewpoint1234.setPosition(new float[]{14.8388,21.4549,171.551});
Viewpoint1234.setOrientation(new float[]{-0.58275,0.101634,0.806271,0.161465});
Transform1230.addChild(&Viewpoint1234);

Viewpoint& Viewpoint1235 =  Viewpoint();
Viewpoint1235.setDEF(CString("VP6"));
Viewpoint1235.setDescription(CString("b3"));
Viewpoint1235.setPosition(new float[]{48.3433,21.9386,129.092});
Viewpoint1235.setOrientation(new float[]{0.926071,0.323744,0.193859,0.0671343});
Transform1230.addChild(&Viewpoint1235);

Viewpoint& Viewpoint1236 =  Viewpoint();
Viewpoint1236.setDEF(CString("VP7"));
Viewpoint1236.setDescription(CString("b4"));
Viewpoint1236.setPosition(new float[]{7.75157,2.99904,65.9639});
Viewpoint1236.setOrientation(new float[]{0.439971,-0.84776,0.296189,0.980581});
Transform1230.addChild(&Viewpoint1236);

Viewpoint& Viewpoint1237 =  Viewpoint();
Viewpoint1237.setDEF(CString("VP8"));
Viewpoint1237.setDescription(CString("b5"));
Viewpoint1237.setPosition(new float[]{25.2776,1.8539,35.1395});
Viewpoint1237.setOrientation(new float[]{-0.0452008,0.994706,-0.0922894,4.1499});
Transform1230.addChild(&Viewpoint1237);

Viewpoint& Viewpoint1238 =  Viewpoint();
Viewpoint1238.setDEF(CString("VP9"));
Viewpoint1238.setDescription(CString("bootssteg"));
Viewpoint1238.setPosition(new float[]{172.37,1.97243,233.614});
Viewpoint1238.setOrientation(new float[]{0.0552581,0.997637,0.0408232,4.66352});
Transform1230.addChild(&Viewpoint1238);

Transform232.addChild(&Transform1230);

Transform231.addChild(&Transform232);

Transform& Transform1239 =  Transform();
Transform1239.setDEF(CString("p_env"));
NavigationInfo& NavigationInfo1240 =  NavigationInfo();
NavigationInfo1240.setDEF(CString("_walk"));
NavigationInfo1240.setType(new CString[]{CString(", "), CString("ANYWALK")}, 2);
NavigationInfo1240.setSpeed(2);
NavigationInfo1240.setHeadlight(False);
Transform1239.addChild(&NavigationInfo1240);

TimeSensor& TimeSensor1241 =  TimeSensor();
TimeSensor1241.setDEF(CString("enterWorldTimeSensor"));
TimeSensor1241.setLoop(True);
TimeSensor1241.setStartTime(1);
Transform1239.addChild(&TimeSensor1241);

Script& Script1242 =  Script();
Script1242.setDEF(CString("enterWorldScript"));
field& field1243 =  field();
field1243.setName(CString("startTime"));
field1243.setAccessType(CString("outputOnly"));
field1243.setType(CString("SFTime"));
Script1242.addChild(&field1243);

field& field1244 =  field();
field1244.setName(CString("firstTime"));
field1244.setAccessType(CString("outputOnly"));
field1244.setType(CString("SFBool"));
Script1242.addChild(&field1244);

field& field1245 =  field();
field1245.setName(CString("triggerIn"));
field1245.setAccessType(CString("inputOnly"));
field1245.setType(CString("SFTime"));
Script1242.addChild(&field1245);


Script1242.setSourceCode(CString("vrmlscript:function triggerIn(value, time) {")+
_T("         // fire off a single round                                     ")+
_T("         startTime = value;                                             ")+
_T("         firstTime = FALSE;                                             ")+
_T("       }"));
Transform1239.addChild(&Script1242);

PointLight& PointLight1246 =  PointLight();
PointLight1246.setDEF(CString("Light2"));
PointLight1246.setColor(new float[]{0.789474,1,1});
PointLight1246.setIntensity(0.718447);
PointLight1246.setLocation(new float[]{87.1141,62.196,270.663});
Transform1239.addChild(&PointLight1246);

Transform231.addChild(&Transform1239);

Scene8.addChild(&Transform231);

ROUTE& ROUTE1247 =  ROUTE();
ROUTE1247.setFromNode(CString("_21"));
ROUTE1247.setFromField(CString("isActive"));
ROUTE1247.setToNode(CString("Time"));
ROUTE1247.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1247);

ROUTE& ROUTE1248 =  ROUTE();
ROUTE1248.setFromNode(CString("_21"));
ROUTE1248.setFromField(CString("enterTime"));
ROUTE1248.setToNode(CString("Time"));
ROUTE1248.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1248);

ROUTE& ROUTE1249 =  ROUTE();
ROUTE1249.setFromNode(CString("Time"));
ROUTE1249.setFromField(CString("fraction_changed"));
ROUTE1249.setToNode(CString("lift2TranslationInterp"));
ROUTE1249.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1249);

ROUTE& ROUTE1250 =  ROUTE();
ROUTE1250.setFromNode(CString("lift2TranslationInterp"));
ROUTE1250.setFromField(CString("value_changed"));
ROUTE1250.setToNode(CString("lift2_anim"));
ROUTE1250.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1250);

ROUTE& ROUTE1251 =  ROUTE();
ROUTE1251.setFromNode(CString("enterWorldScript"));
ROUTE1251.setFromField(CString("startTime"));
ROUTE1251.setToNode(CString("Time_1"));
ROUTE1251.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1251);

ROUTE& ROUTE1252 =  ROUTE();
ROUTE1252.setFromNode(CString("touchSensorTrigger"));
ROUTE1252.setFromField(CString("touchTime"));
ROUTE1252.setToNode(CString("Time_2"));
ROUTE1252.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1252);

ROUTE& ROUTE1253 =  ROUTE();
ROUTE1253.setFromNode(CString("Time_2"));
ROUTE1253.setFromField(CString("fraction_changed"));
ROUTE1253.setToNode(CString("jp1TranslationInterp"));
ROUTE1253.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1253);

ROUTE& ROUTE1254 =  ROUTE();
ROUTE1254.setFromNode(CString("jp1TranslationInterp"));
ROUTE1254.setFromField(CString("value_changed"));
ROUTE1254.setToNode(CString("jp1"));
ROUTE1254.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1254);

ROUTE& ROUTE1255 =  ROUTE();
ROUTE1255.setFromNode(CString("Time_2"));
ROUTE1255.setFromField(CString("fraction_changed"));
ROUTE1255.setToNode(CString("jp2TranslationInterp"));
ROUTE1255.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1255);

ROUTE& ROUTE1256 =  ROUTE();
ROUTE1256.setFromNode(CString("jp2TranslationInterp"));
ROUTE1256.setFromField(CString("value_changed"));
ROUTE1256.setToNode(CString("jp2"));
ROUTE1256.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1256);

ROUTE& ROUTE1257 =  ROUTE();
ROUTE1257.setFromNode(CString("Time_2"));
ROUTE1257.setFromField(CString("fraction_changed"));
ROUTE1257.setToNode(CString("jp3TranslationInterp"));
ROUTE1257.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1257);

ROUTE& ROUTE1258 =  ROUTE();
ROUTE1258.setFromNode(CString("jp3TranslationInterp"));
ROUTE1258.setFromField(CString("value_changed"));
ROUTE1258.setToNode(CString("jp3"));
ROUTE1258.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1258);

ROUTE& ROUTE1259 =  ROUTE();
ROUTE1259.setFromNode(CString("Time_2"));
ROUTE1259.setFromField(CString("fraction_changed"));
ROUTE1259.setToNode(CString("jp4TranslationInterp"));
ROUTE1259.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1259);

ROUTE& ROUTE1260 =  ROUTE();
ROUTE1260.setFromNode(CString("jp4TranslationInterp"));
ROUTE1260.setFromField(CString("value_changed"));
ROUTE1260.setToNode(CString("jp4"));
ROUTE1260.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1260);

ROUTE& ROUTE1261 =  ROUTE();
ROUTE1261.setFromNode(CString("Time_2"));
ROUTE1261.setFromField(CString("fraction_changed"));
ROUTE1261.setToNode(CString("jp5TranslationInterp"));
ROUTE1261.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1261);

ROUTE& ROUTE1262 =  ROUTE();
ROUTE1262.setFromNode(CString("jp5TranslationInterp"));
ROUTE1262.setFromField(CString("value_changed"));
ROUTE1262.setToNode(CString("jp5"));
ROUTE1262.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1262);

ROUTE& ROUTE1263 =  ROUTE();
ROUTE1263.setFromNode(CString("Time_2"));
ROUTE1263.setFromField(CString("fraction_changed"));
ROUTE1263.setToNode(CString("jp6TranslationInterp"));
ROUTE1263.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1263);

ROUTE& ROUTE1264 =  ROUTE();
ROUTE1264.setFromNode(CString("jp6TranslationInterp"));
ROUTE1264.setFromField(CString("value_changed"));
ROUTE1264.setToNode(CString("jp6"));
ROUTE1264.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1264);

ROUTE& ROUTE1265 =  ROUTE();
ROUTE1265.setFromNode(CString("Time_2"));
ROUTE1265.setFromField(CString("fraction_changed"));
ROUTE1265.setToNode(CString("jp7TranslationInterp"));
ROUTE1265.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1265);

ROUTE& ROUTE1266 =  ROUTE();
ROUTE1266.setFromNode(CString("jp7TranslationInterp"));
ROUTE1266.setFromField(CString("value_changed"));
ROUTE1266.setToNode(CString("jp7"));
ROUTE1266.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1266);

ROUTE& ROUTE1267 =  ROUTE();
ROUTE1267.setFromNode(CString("Time_2"));
ROUTE1267.setFromField(CString("fraction_changed"));
ROUTE1267.setToNode(CString("jp8TranslationInterp"));
ROUTE1267.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1267);

ROUTE& ROUTE1268 =  ROUTE();
ROUTE1268.setFromNode(CString("jp8TranslationInterp"));
ROUTE1268.setFromField(CString("value_changed"));
ROUTE1268.setToNode(CString("jp8"));
ROUTE1268.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1268);

ROUTE& ROUTE1269 =  ROUTE();
ROUTE1269.setFromNode(CString("enterWorldScript"));
ROUTE1269.setFromField(CString("startTime"));
ROUTE1269.setToNode(CString("Time_3"));
ROUTE1269.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1269);

ROUTE& ROUTE1270 =  ROUTE();
ROUTE1270.setFromNode(CString("Time_3"));
ROUTE1270.setFromField(CString("fraction_changed"));
ROUTE1270.setToNode(CString("UnnamedTransformTranslationInterp"));
ROUTE1270.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1270);

ROUTE& ROUTE1271 =  ROUTE();
ROUTE1271.setFromNode(CString("UnnamedTransformTranslationInterp"));
ROUTE1271.setFromField(CString("value_changed"));
ROUTE1271.setToNode(CString("b3_lift2"));
ROUTE1271.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1271);

ROUTE& ROUTE1272 =  ROUTE();
ROUTE1272.setFromNode(CString("DefaultTouchSensor"));
ROUTE1272.setFromField(CString("touchTime"));
ROUTE1272.setToNode(CString("Time_4"));
ROUTE1272.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1272);

ROUTE& ROUTE1273 =  ROUTE();
ROUTE1273.setFromNode(CString("Time_4"));
ROUTE1273.setFromField(CString("fraction_changed"));
ROUTE1273.setToNode(CString("lift4TranslationInterp"));
ROUTE1273.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1273);

ROUTE& ROUTE1274 =  ROUTE();
ROUTE1274.setFromNode(CString("lift4TranslationInterp"));
ROUTE1274.setFromField(CString("value_changed"));
ROUTE1274.setToNode(CString("lift4"));
ROUTE1274.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1274);

ROUTE& ROUTE1275 =  ROUTE();
ROUTE1275.setFromNode(CString("Time_4"));
ROUTE1275.setFromField(CString("fraction_changed"));
ROUTE1275.setToNode(CString("lift3TranslationInterp"));
ROUTE1275.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1275);

ROUTE& ROUTE1276 =  ROUTE();
ROUTE1276.setFromNode(CString("lift3TranslationInterp"));
ROUTE1276.setFromField(CString("value_changed"));
ROUTE1276.setToNode(CString("lift3"));
ROUTE1276.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1276);

ROUTE& ROUTE1277 =  ROUTE();
ROUTE1277.setFromNode(CString("Time_4"));
ROUTE1277.setFromField(CString("fraction_changed"));
ROUTE1277.setToNode(CString("lift2TranslationInterp_1"));
ROUTE1277.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1277);

ROUTE& ROUTE1278 =  ROUTE();
ROUTE1278.setFromNode(CString("lift2TranslationInterp_1"));
ROUTE1278.setFromField(CString("value_changed"));
ROUTE1278.setToNode(CString("lift2_2"));
ROUTE1278.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1278);

ROUTE& ROUTE1279 =  ROUTE();
ROUTE1279.setFromNode(CString("Time_4"));
ROUTE1279.setFromField(CString("fraction_changed"));
ROUTE1279.setToNode(CString("lift1TranslationInterp"));
ROUTE1279.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1279);

ROUTE& ROUTE1280 =  ROUTE();
ROUTE1280.setFromNode(CString("lift1TranslationInterp"));
ROUTE1280.setFromField(CString("value_changed"));
ROUTE1280.setToNode(CString("lift1_2"));
ROUTE1280.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1280);

ROUTE& ROUTE1281 =  ROUTE();
ROUTE1281.setFromNode(CString("Time_4"));
ROUTE1281.setFromField(CString("fraction_changed"));
ROUTE1281.setToNode(CString("switch1TranslationInterp"));
ROUTE1281.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1281);

ROUTE& ROUTE1282 =  ROUTE();
ROUTE1282.setFromNode(CString("switch1TranslationInterp"));
ROUTE1282.setFromField(CString("value_changed"));
ROUTE1282.setToNode(CString("switch1"));
ROUTE1282.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1282);

ROUTE& ROUTE1283 =  ROUTE();
ROUTE1283.setFromNode(CString("enterWorldScript"));
ROUTE1283.setFromField(CString("startTime"));
ROUTE1283.setToNode(CString("Time_5"));
ROUTE1283.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1283);

ROUTE& ROUTE1284 =  ROUTE();
ROUTE1284.setFromNode(CString("Time_5"));
ROUTE1284.setFromField(CString("fraction_changed"));
ROUTE1284.setToNode(CString("dauerlift1TranslationInterp"));
ROUTE1284.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1284);

ROUTE& ROUTE1285 =  ROUTE();
ROUTE1285.setFromNode(CString("dauerlift1TranslationInterp"));
ROUTE1285.setFromField(CString("value_changed"));
ROUTE1285.setToNode(CString("dauerlift1"));
ROUTE1285.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1285);

ROUTE& ROUTE1286 =  ROUTE();
ROUTE1286.setFromNode(CString("VP4"));
ROUTE1286.setFromField(CString("bindTime"));
ROUTE1286.setToNode(CString("Time_6"));
ROUTE1286.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1286);

ROUTE& ROUTE1287 =  ROUTE();
ROUTE1287.setFromNode(CString("Time_6"));
ROUTE1287.setFromField(CString("fraction_changed"));
ROUTE1287.setToNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE1287.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1287);

ROUTE& ROUTE1288 =  ROUTE();
ROUTE1288.setFromNode(CString("Time_6"));
ROUTE1288.setFromField(CString("fraction_changed"));
ROUTE1288.setToNode(CString("UnnamedTransformRotationInterp"));
ROUTE1288.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1288);

ROUTE& ROUTE1289 =  ROUTE();
ROUTE1289.setFromNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE1289.setFromField(CString("value_changed"));
ROUTE1289.setToNode(CString("_35"));
ROUTE1289.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1289);

ROUTE& ROUTE1290 =  ROUTE();
ROUTE1290.setFromNode(CString("UnnamedTransformRotationInterp"));
ROUTE1290.setFromField(CString("value_changed"));
ROUTE1290.setToNode(CString("_35"));
ROUTE1290.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1290);

ROUTE& ROUTE1291 =  ROUTE();
ROUTE1291.setFromNode(CString("enterWorldScript"));
ROUTE1291.setFromField(CString("firstTime"));
ROUTE1291.setToNode(CString("enterWorldTimeSensor"));
ROUTE1291.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1291);

ROUTE& ROUTE1292 =  ROUTE();
ROUTE1292.setFromNode(CString("enterWorldTimeSensor"));
ROUTE1292.setFromField(CString("time"));
ROUTE1292.setToNode(CString("enterWorldScript"));
ROUTE1292.setToField(CString("triggerIn"));
Scene8.addChild(&ROUTE1292);

X3D0.setScene(&Scene8);

}
