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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:58 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:58 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("sceneNC"));
Collision& Collision10 =  Collision();
Collision10.setEnabled(False);
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("scene"));
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("reflection"));
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("room_1"));
Transform& Transform14 =  Transform();
Transform14.setTranslation(new float[]{-6.5536,-8.74551,-0.433264});
Transform14.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setAmbientIntensity(0.390805);
Material17.setDiffuseColor(new float[]{0.925532,0.889742,0.782371});
Material17.setShininess(0.56383);
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setDEF(CString("polySurface5_0Geo_1"));
IndexedFaceSet18.setCcw(False);
IndexedFaceSet18.setConvex(False);
IndexedFaceSet18.setCreaseAngle(1.4776);
IndexedFaceSet18.setCoordIndex(new int32_t[]{1,5,0,-1,3,1,2,-1,1,4,5,-1,1,3,4,-1,7,8,3,2,-1,8,9,4,3,-1,9,10,5,4,-1,10,6,0,5,-1}, 36);
Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setDEF(CString("polySurface5GeoPoints_1"));
Coordinate19.setPoint(new float[]{-23.131,12.014,23.131,-23.131,12.014,-23.131,23.131,12.014,-23.131,-4.508,12.014,-15.082,-10.745,12.014,-10.677,-14.27,12.014,-4.845,-23.131,11.512,23.131,23.131,11.512,-23.131,-4.508,11.512,-15.082,-10.745,11.512,-10.677,-14.27,11.512,-4.845}, 33);
IndexedFaceSet18.setCoord(&Coordinate19);

Shape15.setGeometry(&IndexedFaceSet18);

Transform14.addChild(&Shape15);

Transform13.addChild(&Transform14);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{-6.5536,-11.5174,-0.433264});
Transform20.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("_1"));
ImageTexture23.setUrl(new CString[]{CString("roof.jpg")}, 1);
Appearance22.addChild(&ImageTexture23);

TextureTransform& TextureTransform24 =  TextureTransform();
Appearance22.setTextureTransform(TextureTransform24);

Shape21.addChild(&Appearance22);

IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setDEF(CString("polySurface2_1Geo_1"));
IndexedFaceSet25.setCcw(False);
IndexedFaceSet25.setConvex(False);
IndexedFaceSet25.setTexCoordIndex(new int32_t[]{4,2,7,-1,2,8,7,-1,8,5,7,-1,8,3,5,-1,0,6,5,-1,0,9,6,-1,9,4,6,-1,9,1,4,-1}, 32);
IndexedFaceSet25.setCoordIndex(new int32_t[]{12,6,14,-1,6,15,14,-1,15,13,14,-1,15,5,13,-1,4,14,13,-1,4,16,14,-1,16,12,14,-1,16,7,12,-1}, 32);
TextureCoordinate& TextureCoordinate26 =  TextureCoordinate();
TextureCoordinate26.setPoint(new float[]{-6.03655,5.74129,-6.03655,-5.17825,7.03655,-5.17825,7.03655,5.74129,0.5,-5.17825,0.5,5.74129,0.5,0.28152,0.5,0.28152,7.03655,0.28152,-6.03655,0.28152}, 20);
IndexedFaceSet25.setTexCoord(&TextureCoordinate26);

Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setDEF(CString("polySurface2GeoPoints_1"));
Coordinate27.setPoint(new float[]{59.034,0,-23.131,-23.131,0,-23.131,-23.131,0,23.131,59.034,0,23.131,59.034,18.734,-23.131,-23.131,18.734,-23.131,-23.131,18.734,23.131,59.034,18.734,23.131,-8.211,0.01,23.131,-8.211,4.457,23.131,-3.81,4.457,23.131,-3.81,0.01,23.131,17.9515,18.734,23.131,17.9515,18.734,-23.131,17.9515,18.734,0,-23.131,18.734,0,59.034,18.734,0}, 51);
IndexedFaceSet25.setCoord(&Coordinate27);

Shape21.setGeometry(&IndexedFaceSet25);

Transform20.addChild(&Shape21);

Transform13.addChild(&Transform20);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform28.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Material31.setDEF(CString("_2"));
Material31.setAmbientIntensity(0.390805);
Material31.setDiffuseColor(new float[]{0.925532,0.889742,0.782371});
Material31.setShininess(0.56383);
Appearance30.addChild(&Material31);

Shape29.addChild(&Appearance30);

IndexedFaceSet& IndexedFaceSet32 =  IndexedFaceSet();
IndexedFaceSet32.setDEF(CString("polySurface2_0Geo_1"));
IndexedFaceSet32.setCcw(False);
IndexedFaceSet32.setConvex(False);
IndexedFaceSet32.setCoordIndex(new int32_t[]{4,1,5,-1,4,3,1,-1,0,2,5,-1,2,4,5,-1}, 16);
Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setDEF(CString("polySurface2GeoPoints_2"));
Coordinate33.setPoint(new float[]{-23.131,0.00999832,-23.131,-23.131,0.00999832,23.131,-23.131,-18.724,-23.131,-23.131,-18.724,23.131,-23.131,-18.724,0,-23.131,0.00999832,0}, 18);
IndexedFaceSet32.setCoord(&Coordinate33);

Shape29.setGeometry(&IndexedFaceSet32);

Transform28.addChild(&Shape29);

Transform13.addChild(&Transform28);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform34.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setUSE(CString("_2"));
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setCcw(False);
IndexedFaceSet38.setConvex(False);
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,3,-1,4,3,2,-1}, 16);
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setPoint(new float[]{-23.131,0.00999832,23.131,-23.131,-18.724,23.131,17.9515,-18.724,23.131,17.9515,0.00999832,23.131,59.034,-18.724,23.131,59.034,0.00999832,23.131}, 18);
IndexedFaceSet38.setCoord(&Coordinate39);

Shape35.setGeometry(&IndexedFaceSet38);

Transform34.addChild(&Shape35);

Transform13.addChild(&Transform34);

Transform& Transform40 =  Transform();
Transform40.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform40.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setUSE(CString("_2"));
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

IndexedFaceSet& IndexedFaceSet44 =  IndexedFaceSet();
IndexedFaceSet44.setCcw(False);
IndexedFaceSet44.setConvex(False);
IndexedFaceSet44.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,0,3,-1,5,4,3,-1}, 16);
Coordinate& Coordinate45 =  Coordinate();
Coordinate45.setPoint(new float[]{59.034,-18.724,0,59.034,-18.724,-23.131,59.034,0.00999832,-23.131,59.034,0.00999832,0,59.034,-18.724,23.131,59.034,0.00999832,23.131}, 18);
IndexedFaceSet44.setCoord(&Coordinate45);

Shape41.setGeometry(&IndexedFaceSet44);

Transform40.addChild(&Shape41);

Transform13.addChild(&Transform40);

Transform& Transform46 =  Transform();
Transform46.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform46.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setUSE(CString("_2"));
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

IndexedFaceSet& IndexedFaceSet50 =  IndexedFaceSet();
IndexedFaceSet50.setCcw(False);
IndexedFaceSet50.setConvex(False);
IndexedFaceSet50.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,0,3,-1,5,4,3,-1}, 16);
Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setPoint(new float[]{17.9515,-18.724,-23.131,-23.131,-18.724,-23.131,-23.131,0.00999832,-23.131,17.9515,0.00999832,-23.131,59.034,-18.724,-23.131,59.034,0.00999832,-23.131}, 18);
IndexedFaceSet50.setCoord(&Coordinate51);

Shape47.setGeometry(&IndexedFaceSet50);

Transform46.addChild(&Shape47);

Transform13.addChild(&Transform46);

Transform& Transform52 =  Transform();
Transform52.setTranslation(new float[]{-6.5536,-1.23461,-0.433264});
Transform52.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape53 =  Shape();
Appearance& Appearance54 =  Appearance();
ImageTexture& ImageTexture55 =  ImageTexture();
ImageTexture55.setUSE(CString("_1"));
Appearance54.addChild(&ImageTexture55);

TextureTransform& TextureTransform56 =  TextureTransform();
Appearance54.setTextureTransform(TextureTransform56);

Shape53.addChild(&Appearance54);

IndexedFaceSet& IndexedFaceSet57 =  IndexedFaceSet();
IndexedFaceSet57.setDEF(CString("polySurface2_1Geo"));
IndexedFaceSet57.setConvex(False);
IndexedFaceSet57.setTexCoordIndex(new int32_t[]{4,8,7,-1,4,2,8,-1,9,1,6,-1,1,4,6,-1,8,3,7,-1,3,5,7,-1,0,9,5,-1,9,6,5,-1}, 32);
IndexedFaceSet57.setCoordIndex(new int32_t[]{12,15,14,-1,12,6,15,-1,16,7,14,-1,7,12,14,-1,15,5,14,-1,5,13,14,-1,4,16,13,-1,16,14,13,-1}, 32);
TextureCoordinate& TextureCoordinate58 =  TextureCoordinate();
TextureCoordinate58.setPoint(new float[]{-6.03655,5.74129,-6.03655,-5.17825,7.03655,-5.17825,7.03655,5.74129,0.5,-5.17825,0.5,5.74129,0.5,0.28152,0.5,0.28152,7.03655,0.28152,-6.03655,0.28152}, 20);
IndexedFaceSet57.setTexCoord(&TextureCoordinate58);

Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setDEF(CString("polySurface2GeoPoints_3"));
Coordinate59.setPoint(new float[]{59.034,0,-23.131,-23.131,0,-23.131,-23.131,0,23.131,59.034,0,23.131,59.034,18.734,-23.131,-23.131,18.734,-23.131,-23.131,18.734,23.131,59.034,18.734,23.131,-8.211,0.01,23.131,-8.211,4.457,23.131,-3.81,4.457,23.131,-3.81,0.01,23.131,17.9515,18.734,23.131,17.9515,18.734,-23.131,17.9515,18.734,0,-23.131,18.734,0,59.034,18.734,0}, 51);
IndexedFaceSet57.setCoord(&Coordinate59);

Shape53.setGeometry(&IndexedFaceSet57);

Transform52.addChild(&Shape53);

Transform13.addChild(&Transform52);

Transform12.addChild(&Transform13);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("gal"));
Transform& Transform61 =  Transform();
Transform61.setDEF(CString("plants_ref"));
Transform& Transform62 =  Transform();
Transform62.setTranslation(new float[]{-5.17793,-2.8372,-6.74427});
Transform62.setRotation(new float[]{-0.000265379,0.999999,-0.00127876,0.409254});
Transform62.setScale(new float[]{0.900709,1.03695,0.900715});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setDEF(CString("_3"));
ImageTexture65.setUrl(new CString[]{CString("r1.png")}, 1);
Appearance64.addChild(&ImageTexture65);

Shape63.addChild(&Appearance64);

IndexedFaceSet& IndexedFaceSet66 =  IndexedFaceSet();
IndexedFaceSet66.setSolid(False);
IndexedFaceSet66.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate67 =  TextureCoordinate();
TextureCoordinate67.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet66.setTexCoord(&TextureCoordinate67);

Coordinate& Coordinate68 =  Coordinate();
Coordinate68.setPoint(new float[]{-0.5,1.67704,7.73589e-11,0.5,1.67704,7.7345e-11,0.5,-1.85536,-3.54217e-11,-0.5,-1.85536,-3.54103e-11,0.0000255108,1.67703,-0.500016,0.0000239611,1.67703,0.499978,0.0000240207,-1.85536,0.499978,0.0000255704,-1.85536,-0.500016}, 24);
IndexedFaceSet66.setCoord(&Coordinate68);

Shape63.setGeometry(&IndexedFaceSet66);

Transform62.addChild(&Shape63);

Transform61.addChild(&Transform62);

Transform& Transform69 =  Transform();
Transform69.setTranslation(new float[]{-8.2971,-2.81919,-5.85014});
Transform69.setRotation(new float[]{-0.000265861,0.999999,-0.00121068,0.432338});
Transform69.setScale(new float[]{0.999999,1.15126,1});
Transform69.setScaleOrientation(new float[]{-1.16435e-7,-1,-1.67335e-7,0.0825731});
Shape& Shape70 =  Shape();
Appearance& Appearance71 =  Appearance();
ImageTexture& ImageTexture72 =  ImageTexture();
ImageTexture72.setUSE(CString("_3"));
Appearance71.addChild(&ImageTexture72);

Shape70.addChild(&Appearance71);

IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setSolid(False);
IndexedFaceSet73.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate74 =  TextureCoordinate();
TextureCoordinate74.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet73.setTexCoord(&TextureCoordinate74);

Coordinate& Coordinate75 =  Coordinate();
Coordinate75.setPoint(new float[]{-0.5,1.87751,4.88158e-9,0.5,1.87751,4.88157e-9,0.5,-1.65489,-4.58321e-9,-0.5,-1.65489,-4.58321e-9,-6.25849e-7,1.87751,0.49999,-0.00000616908,1.87751,-0.500011,-0.00000694394,-1.65488,-0.500011,-0.00000140071,-1.65488,0.49999}, 24);
IndexedFaceSet73.setCoord(&Coordinate75);

Shape70.setGeometry(&IndexedFaceSet73);

Transform69.addChild(&Shape70);

Transform61.addChild(&Transform69);

Transform60.addChild(&Transform61);

Transform& Transform76 =  Transform();
Transform76.setTranslation(new float[]{-6.5536,-4.38818,-0.433264});
Transform76.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
Material& Material79 =  Material();
Material79.setDEF(CString("_4"));
Material79.setAmbientIntensity(0.390805);
Material79.setDiffuseColor(new float[]{0.925532,0.889742,0.782371});
Material79.setShininess(0.56383);
Appearance78.addChild(&Material79);

Shape77.addChild(&Appearance78);

IndexedFaceSet& IndexedFaceSet80 =  IndexedFaceSet();
IndexedFaceSet80.setDEF(CString("pCube5_0Geo_1"));
IndexedFaceSet80.setConvex(False);
IndexedFaceSet80.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,1,7,5,3,-1,6,0,2,4,-1,8,9,10,11,-1,12,8,11,13,-1,13,14,15,12,-1,9,15,14,10,-1,16,17,18,19,-1,20,16,19,21,-1,21,22,23,20,-1,17,23,22,18,-1,24,25,26,27,-1,28,24,27,29,-1,29,30,31,28,-1,25,31,30,26,-1}, 80);
Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setDEF(CString("pCube5GeoPoints_1"));
Coordinate81.setPoint(new float[]{3.185,-0.001,-17.978,4.172,-0.001,-18.134,3.185,12.032,-17.978,4.172,12.032,-18.134,3.028,12.032,-18.966,4.016,12.032,-19.122,3.028,-0.001,-18.966,4.016,-0.001,-19.122,-14.925,-0.001,-5.03,-14.422,-0.001,-5.895,-14.422,12.032,-5.895,-14.925,12.032,-5.03,-15.789,-0.001,-5.532,-15.789,12.032,-5.532,-15.287,12.032,-6.397,-15.287,-0.001,-6.397,-11.32,-0.001,-10.8,-10.565,-0.001,-11.457,-10.565,12.032,-11.457,-11.32,12.032,-10.8,-11.976,-0.001,-11.555,-11.976,12.032,-11.555,-11.222,12.032,-12.211,-11.222,-0.001,-12.211,-5.019,-0.001,-15.46,-4.111,-0.001,-15.879,-4.111,12.032,-15.879,-5.019,12.032,-15.46,-5.438,-0.001,-16.368,-5.438,12.032,-16.368,-4.53,12.032,-16.787,-4.53,-0.001,-16.787}, 96);
IndexedFaceSet80.setCoord(&Coordinate81);

Shape77.setGeometry(&IndexedFaceSet80);

Transform76.addChild(&Shape77);

Transform60.addChild(&Transform76);

Transform& Transform82 =  Transform();
Transform82.setTranslation(new float[]{0,-3.60064,0});
Transform& Transform83 =  Transform();
Transform83.setTranslation(new float[]{-6.74039,1.72336,-8.79702});
Transform83.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
ImageTexture& ImageTexture86 =  ImageTexture();
ImageTexture86.setDEF(CString("_5"));
ImageTexture86.setUrl(new CString[]{CString("poster1.jpg")}, 1);
Appearance85.addChild(&ImageTexture86);

TextureTransform& TextureTransform87 =  TextureTransform();
TextureTransform87.setScale(new float[]{1,-1});
Appearance85.setTextureTransform(TextureTransform87);

Shape84.addChild(&Appearance85);

IndexedFaceSet& IndexedFaceSet88 =  IndexedFaceSet();
IndexedFaceSet88.setCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate89 =  TextureCoordinate();
TextureCoordinate89.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet88.setTexCoord(&TextureCoordinate89);

Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet88.setCoord(&Coordinate90);

Shape84.setGeometry(&IndexedFaceSet88);

Transform83.addChild(&Shape84);

Transform82.addChild(&Transform83);

Transform& Transform91 =  Transform();
Transform91.setTranslation(new float[]{-10.0241,1.72336,-8.79703});
Transform91.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape92 =  Shape();
Appearance& Appearance93 =  Appearance();
ImageTexture& ImageTexture94 =  ImageTexture();
ImageTexture94.setDEF(CString("_6"));
ImageTexture94.setUrl(new CString[]{CString("nposter5.jpg")}, 1);
Appearance93.addChild(&ImageTexture94);

TextureTransform& TextureTransform95 =  TextureTransform();
TextureTransform95.setScale(new float[]{1,-1});
Appearance93.setTextureTransform(TextureTransform95);

Shape92.addChild(&Appearance93);

IndexedFaceSet& IndexedFaceSet96 =  IndexedFaceSet();
IndexedFaceSet96.setCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate97 =  TextureCoordinate();
TextureCoordinate97.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet96.setTexCoord(&TextureCoordinate97);

Coordinate& Coordinate98 =  Coordinate();
Coordinate98.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet96.setCoord(&Coordinate98);

Shape92.setGeometry(&IndexedFaceSet96);

Transform91.addChild(&Shape92);

Transform82.addChild(&Transform91);

Transform& Transform99 =  Transform();
Transform99.setTranslation(new float[]{-13.3971,1.72336,-8.79703});
Transform99.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape100 =  Shape();
Appearance& Appearance101 =  Appearance();
ImageTexture& ImageTexture102 =  ImageTexture();
ImageTexture102.setDEF(CString("_7"));
ImageTexture102.setUrl(new CString[]{CString("poster2.jpg")}, 1);
Appearance101.addChild(&ImageTexture102);

TextureTransform& TextureTransform103 =  TextureTransform();
TextureTransform103.setScale(new float[]{1,-1});
Appearance101.setTextureTransform(TextureTransform103);

Shape100.addChild(&Appearance101);

IndexedFaceSet& IndexedFaceSet104 =  IndexedFaceSet();
IndexedFaceSet104.setCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate105 =  TextureCoordinate();
TextureCoordinate105.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet104.setTexCoord(&TextureCoordinate105);

Coordinate& Coordinate106 =  Coordinate();
Coordinate106.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet104.setCoord(&Coordinate106);

Shape100.setGeometry(&IndexedFaceSet104);

Transform99.addChild(&Shape100);

Transform82.addChild(&Transform99);

Transform& Transform107 =  Transform();
Transform107.setTranslation(new float[]{-14.9196,1.72336,-5.32461});
Transform107.setRotation(new float[]{0,-1,0,1.5708});
Transform107.setScale(new float[]{4.00263,2.56721,2.11914});
Shape& Shape108 =  Shape();
Appearance& Appearance109 =  Appearance();
ImageTexture& ImageTexture110 =  ImageTexture();
ImageTexture110.setDEF(CString("_8"));
ImageTexture110.setUrl(new CString[]{CString("nposter4.jpg")}, 1);
Appearance109.addChild(&ImageTexture110);

TextureTransform& TextureTransform111 =  TextureTransform();
TextureTransform111.setScale(new float[]{-1,-1});
Appearance109.setTextureTransform(TextureTransform111);

Shape108.addChild(&Appearance109);

IndexedFaceSet& IndexedFaceSet112 =  IndexedFaceSet();
IndexedFaceSet112.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1}, 8);
TextureCoordinate& TextureCoordinate113 =  TextureCoordinate();
TextureCoordinate113.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet112.setTexCoord(&TextureCoordinate113);

Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet112.setCoord(&Coordinate114);

Shape108.setGeometry(&IndexedFaceSet112);

Transform107.addChild(&Shape108);

Transform82.addChild(&Transform107);

Transform60.addChild(&Transform82);

Transform12.addChild(&Transform60);

Transform11.addChild(&Transform12);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("room"));
Transform& Transform116 =  Transform();
Transform116.setTranslation(new float[]{32.5722,-3.83645,-116.626});
Transform116.setRotation(new float[]{0,-1,0,1.5708});
Transform116.setScale(new float[]{2.78587,2.78671,2.78667});
Shape& Shape117 =  Shape();
Appearance& Appearance118 =  Appearance();
Material& Material119 =  Material();
Material119.setAmbientIntensity(0);
Material119.setDiffuseColor(new float[]{0,0,0});
Material119.setEmissiveColor(new float[]{0.904255,0.837211,0.674252});
Material119.setShininess(0);
Appearance118.addChild(&Material119);

Shape117.addChild(&Appearance118);

IndexedFaceSet& IndexedFaceSet120 =  IndexedFaceSet();
IndexedFaceSet120.setDEF(CString("polySurface4_0Geo_1"));
IndexedFaceSet120.setCcw(False);
IndexedFaceSet120.setConvex(False);
IndexedFaceSet120.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,1,12,13,-1,12,9,14,-1,10,15,16,-1,15,6,17,-1,18,19,20,-1,7,21,22,-1,21,18,23,-1,19,24,25,-1,24,3,26,-1,27,28,29,-1,30,31,32,-1,4,33,34,-1,33,30,35,-1,31,36,37,-1,36,27,38,-1,39,40,41,-1,28,42,43,-1,42,39,44,-1,40,45,46,-1,45,0,47,-1,2,47,0,-1,5,26,3,-1,8,17,6,-1,11,14,9,-1,13,2,1,-1,14,13,12,-1,16,11,10,-1,17,16,15,-1,20,23,18,-1,22,8,7,-1,23,22,21,-1,25,20,19,-1,26,25,24,-1,29,38,27,-1,32,35,30,-1,34,5,4,-1,35,34,33,-1,37,32,31,-1,38,37,36,-1,41,44,39,-1,43,29,28,-1,44,43,42,-1,46,41,40,-1,47,46,45,-1,48,18,49,-1,50,1,51,-1,52,36,53,-1,49,1,50,-1,51,36,52,-1,53,18,48,-1}, 216);
Coordinate& Coordinate121 =  Coordinate();
Coordinate121.setDEF(CString("polySurface4GeoPoints_1"));
Coordinate121.setPoint(new float[]{44.719,2.986,9.083,44.719,3.011,8.893,44.719,3.052,8.893,44.719,1.568,8.703,44.719,1.543,8.893,44.719,1.502,8.893,44.719,2.467,8.184,44.719,2.277,8.159,44.719,2.277,8.118,44.719,2.912,8.526,44.719,2.796,8.374,44.719,2.825,8.345,44.719,2.986,8.703,44.719,3.025,8.693,44.719,2.948,8.506,44.719,2.644,8.258,44.719,2.664,8.222,44.719,2.477,8.145,44.719,1.91,8.258,44.719,1.758,8.374,44.719,1.729,8.345,44.719,2.087,8.184,44.719,2.076,8.145,44.719,1.889,8.222,44.719,1.641,8.526,44.719,1.606,8.506,44.719,1.528,8.693,44.719,2.087,9.602,44.719,2.277,9.627,44.719,2.277,9.668,44.719,1.641,9.26,44.719,1.758,9.412,44.719,1.729,9.441,44.719,1.568,9.083,44.719,1.528,9.094,44.719,1.606,9.281,44.719,1.91,9.529,44.719,1.889,9.564,44.719,2.076,9.642,44.719,2.644,9.529,44.719,2.796,9.412,44.719,2.825,9.441,44.719,2.467,9.602,44.719,2.477,9.642,44.719,2.664,9.564,44.719,2.912,9.26,44.719,2.948,9.281,44.719,3.025,9.094,44.719,2.277,8.893,44.719,2.323,8.801,44.719,2.277,8.893,44.719,2.323,8.986,44.719,2.277,8.893,44.719,2.184,8.893}, 162);
IndexedFaceSet120.setCoord(&Coordinate121);

Shape117.setGeometry(&IndexedFaceSet120);

Transform116.addChild(&Shape117);

Transform115.addChild(&Transform116);

Transform& Transform122 =  Transform();
Transform122.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform122.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape123 =  Shape();
Appearance& Appearance124 =  Appearance();
Material& Material125 =  Material();
Material125.setDEF(CString("_9"));
Material125.setAmbientIntensity(0.390805);
Material125.setDiffuseColor(new float[]{0.925532,0.889742,0.782371});
Material125.setShininess(0.56383);
Appearance124.addChild(&Material125);

Shape123.addChild(&Appearance124);

IndexedFaceSet& IndexedFaceSet126 =  IndexedFaceSet();
IndexedFaceSet126.setDEF(CString("polySurface2_0Geo"));
IndexedFaceSet126.setConvex(False);
IndexedFaceSet126.setColorIndex(new int[]{1,0,2,-1,1,0,0,-1,0,0,2,-1,0,1,2,-1}, 16);
IndexedFaceSet126.setCoordIndex(new int32_t[]{4,0,5,-1,4,2,0,-1,1,3,5,-1,3,4,5,-1}, 16);
CColor& Color127 =  CColor();
Color127.setColor(new float[]{0.925532,0.889742,0.782371,0.925532,0.889742,0.782371,0.925532,0.889742,0.782371}, 9);
IndexedFaceSet126.setColor(&Color127);

Coordinate& Coordinate128 =  Coordinate();
Coordinate128.setDEF(CString("polySurface2GeoPoints"));
Coordinate128.setPoint(new float[]{59.034,0,-23.131,59.034,0,23.131,59.034,18.734,-23.131,59.034,18.734,23.131,59.034,18.734,0,59.034,0,0}, 18);
IndexedFaceSet126.setCoord(&Coordinate128);

Shape123.setGeometry(&IndexedFaceSet126);

Transform122.addChild(&Shape123);

Transform115.addChild(&Transform122);

Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform129.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape130 =  Shape();
Appearance& Appearance131 =  Appearance();
Material& Material132 =  Material();
Material132.setUSE(CString("_9"));
Appearance131.addChild(&Material132);

Shape130.addChild(&Appearance131);

IndexedFaceSet& IndexedFaceSet133 =  IndexedFaceSet();
IndexedFaceSet133.setConvex(False);
IndexedFaceSet133.setColorIndex(new int[]{0,0,0,1,-1,2,0,1,-1,2,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,1,-1,0,2,1,-1}, 29);
IndexedFaceSet133.setCoordIndex(new int32_t[]{5,2,1,8,-1,9,5,8,-1,9,7,5,-1,0,2,3,-1,0,1,2,-1,4,6,8,-1,6,9,8,-1}, 29);
CColor& Color134 =  CColor();
Color134.setColor(new float[]{0.925532,0.889742,0.782371,0.925532,0.889742,0.782371,0.925532,0.889742,0.782371}, 9);
IndexedFaceSet133.setColor(&Color134);

Coordinate& Coordinate135 =  Coordinate();
Coordinate135.setPoint(new float[]{-23.131,0,23.131,-23.131,18.734,23.131,-8.211,8.19475,23.131,-8.211,0.01,23.131,59.034,18.734,23.131,6.59861,8.19475,23.131,59.034,0,23.131,6.59861,0.01,23.131,17.9515,18.734,23.131,17.9479,0.00783556,23.131}, 30);
IndexedFaceSet133.setCoord(&Coordinate135);

Shape130.setGeometry(&IndexedFaceSet133);

Transform129.addChild(&Shape130);

Transform115.addChild(&Transform129);

Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform136.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape137 =  Shape();
Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setUSE(CString("_9"));
Appearance138.addChild(&Material139);

Shape137.addChild(&Appearance138);

IndexedFaceSet& IndexedFaceSet140 =  IndexedFaceSet();
IndexedFaceSet140.setConvex(False);
IndexedFaceSet140.setColorIndex(new int[]{3,2,4,-1,3,2,2,-1,0,1,4,-1,1,3,4,-1}, 16);
IndexedFaceSet140.setCoordIndex(new int32_t[]{4,3,5,-1,4,2,3,-1,0,1,5,-1,1,4,5,-1}, 16);
CColor& Color141 =  CColor();
Color141.setColor(new float[]{0.433155,0.416405,0.366155,0.342246,0.329011,0.289308,0.925532,0.889742,0.782371,0.633889,0.609377,0.535839,0.679343,0.653073,0.574263}, 15);
IndexedFaceSet140.setColor(&Color141);

Coordinate& Coordinate142 =  Coordinate();
Coordinate142.setPoint(new float[]{-23.131,0,-23.131,-23.131,18.734,-23.131,-23.131,18.734,23.131,-23.131,0,23.131,-23.131,18.734,0,-23.131,0,0}, 18);
IndexedFaceSet140.setCoord(&Coordinate142);

Shape137.setGeometry(&IndexedFaceSet140);

Transform136.addChild(&Shape137);

Transform115.addChild(&Transform136);

Transform& Transform143 =  Transform();
Transform143.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform143.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Material& Material146 =  Material();
Material146.setUSE(CString("_9"));
Appearance145.addChild(&Material146);

Shape144.addChild(&Appearance145);

IndexedFaceSet& IndexedFaceSet147 =  IndexedFaceSet();
IndexedFaceSet147.setConvex(False);
IndexedFaceSet147.setColorIndex(new int[]{3,2,4,-1,3,1,2,-1,0,0,4,-1,0,3,4,-1}, 16);
IndexedFaceSet147.setCoordIndex(new int32_t[]{4,3,5,-1,4,2,3,-1,0,1,5,-1,1,4,5,-1}, 16);
CColor& Color148 =  CColor();
Color148.setColor(new float[]{0.925532,0.889742,0.782371,0.342246,0.329011,0.289308,0.433155,0.416405,0.366155,0.633889,0.609376,0.535839,0.679343,0.653073,0.574263}, 15);
IndexedFaceSet147.setColor(&Color148);

Coordinate& Coordinate149 =  Coordinate();
Coordinate149.setPoint(new float[]{59.034,0,-23.131,59.034,18.734,-23.131,-23.131,18.734,-23.131,-23.131,0,-23.131,17.9515,18.734,-23.131,17.9515,0,-23.131}, 18);
IndexedFaceSet147.setCoord(&Coordinate149);

Shape144.setGeometry(&IndexedFaceSet147);

Transform143.addChild(&Shape144);

Transform115.addChild(&Transform143);

Transform11.addChild(&Transform115);

Transform& Transform150 =  Transform();
Transform150.setDEF(CString("floors"));
Transform& Transform151 =  Transform();
Transform151.setDEF(CString("floorB"));
Transform& Transform152 =  Transform();
Transform152.setDEF(CString("nrf"));
Transform& Transform153 =  Transform();
Transform153.setDEF(CString("noref-floor"));
Transform153.setTranslation(new float[]{-6.5536,-0.034449,-0.433264});
Transform153.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape154 =  Shape();
Appearance& Appearance155 =  Appearance();
Material& Material156 =  Material();
Material156.setAmbientIntensity(0);
Material156.setDiffuseColor(new float[]{0.0896695,0.159561,0.468085});
Material156.setShininess(0.606383);
Appearance155.addChild(&Material156);

Shape154.addChild(&Appearance155);

IndexedFaceSet& IndexedFaceSet157 =  IndexedFaceSet();
IndexedFaceSet157.setConvex(False);
IndexedFaceSet157.setCoordIndex(new int32_t[]{16,2,21,-1,2,20,21,-1,20,15,21,-1,20,5,15,-1,6,16,12,-1,16,21,12,-1,21,7,12,-1,21,15,7,-1,3,17,23,-1,17,22,23,-1,22,5,23,-1,22,15,5,-1,17,8,22,-1,8,24,22,-1,8,19,24,-1,19,25,24,-1,25,7,24,-1,25,18,7,-1,19,11,25,-1,11,26,25,-1,26,18,25,-1,26,10,18,-1,11,29,26,-1,29,28,26,-1,29,1,28,-1,1,27,28,-1,27,30,28,-1,27,4,30,-1,30,10,28,-1,10,26,28,-1,12,18,31,-1,12,7,18,-1,18,10,31,-1,10,13,31,-1,9,32,13,-1,32,31,13,-1,32,6,31,-1,6,12,31,-1,33,9,34,-1,9,13,34,-1,30,13,10,-1,30,34,13,-1,14,33,34,-1,14,0,33,-1,30,4,34,-1,4,14,34,-1,24,7,22,-1,7,15,22,-1}, 192);
Coordinate& Coordinate158 =  Coordinate();
Coordinate158.setPoint(new float[]{59.034,0,23.131,23.131,0,23.131,59.034,0,-23.131,23.131,0,-23.131,41.0825,0,23.131,41.0825,0,-23.131,59.034,0,0,41.0825,0,0,23.131,0,0,59.034,0,11.5655,41.0825,0,11.5655,23.131,0,11.5655,50.0583,0,0,50.0583,0,11.5655,50.0583,0,23.131,41.0825,0,-11.5655,59.034,0,-11.5655,23.131,0,-11.5655,41.0825,0,5.78275,23.131,0,5.78275,50.0583,0,-23.131,50.0583,0,-11.5655,32.1068,0,-11.5655,32.1068,0,-23.131,32.1068,0,0,32.1068,0,5.78275,32.1068,0,11.5655,32.1068,0,23.131,32.1068,0,17.3483,23.131,0,17.3483,41.0825,0,17.3483,50.0583,0,5.78275,59.034,0,5.78275,59.034,0,17.3483,50.0583,0,17.3483}, 105);
IndexedFaceSet157.setCoord(&Coordinate158);

Shape154.setGeometry(&IndexedFaceSet157);

Transform153.addChild(&Shape154);

Transform152.addChild(&Transform153);

Transform151.addChild(&Transform152);

Transform& Transform159 =  Transform();
Transform159.setTranslation(new float[]{1.95083,0.00231598,-0.407617});
Transform159.setRotation(new float[]{0,-1,0,1.5708});
Transform159.setScale(new float[]{8.59521,0.0151827,0.144826});
Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setAmbientIntensity(0.390805);
Material162.setDiffuseColor(new float[]{0.925532,0.889742,0.782371});
Material162.setShininess(0.56383);
Appearance161.addChild(&Material162);

Shape160.addChild(&Appearance161);

Box& Box163 =  Box();
Shape160.setGeometry(&Box163);

Transform159.addChild(&Shape160);

Transform151.addChild(&Transform159);

Transform& Transform164 =  Transform();
Transform164.setDEF(CString("starfloor"));
Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[]{3.24541,-1.11759e-8,-10.9982});
Transform& Transform166 =  Transform();
Transform166.setDEF(CString("_10"));
Transform166.setTranslation(new float[]{9.06877,0.014651,4.51087});
Transform166.setRotation(new float[]{-1,0,0,1.5708});
Shape& Shape167 =  Shape();
Appearance& Appearance168 =  Appearance();
ImageTexture& ImageTexture169 =  ImageTexture();
ImageTexture169.setDEF(CString("_11"));
ImageTexture169.setUrl(new CString[]{CString("light9.png")}, 1);
Appearance168.addChild(&ImageTexture169);

Shape167.addChild(&Appearance168);

IndexedFaceSet& IndexedFaceSet170 =  IndexedFaceSet();
IndexedFaceSet170.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate171 =  TextureCoordinate();
TextureCoordinate171.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet170.setTexCoord(&TextureCoordinate171);

Coordinate& Coordinate172 =  Coordinate();
Coordinate172.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet170.setCoord(&Coordinate172);

Shape167.setGeometry(&IndexedFaceSet170);

Transform166.addChild(&Shape167);

Transform165.addChild(&Transform166);

Transform164.addChild(&Transform165);

Transform& Transform173 =  Transform();
Transform173.setTranslation(new float[]{0.416451,-1.22935e-7,-11.5522});
Transform& Transform174 =  Transform();
Transform174.setUSE(CString("_10"));
Transform173.addChild(&Transform174);

Transform164.addChild(&Transform173);

Transform& Transform175 =  Transform();
Transform175.setTranslation(new float[]{-4.74609,1.84402e-7,-10.8872});
Transform& Transform176 =  Transform();
Transform176.setUSE(CString("_10"));
Transform175.addChild(&Transform176);

Transform164.addChild(&Transform175);

Transform& Transform177 =  Transform();
Transform177.setTranslation(new float[]{-1.98544,-2.16067e-7,-10.0091});
Transform& Transform178 =  Transform();
Transform178.setUSE(CString("_10"));
Transform177.addChild(&Transform178);

Transform164.addChild(&Transform177);

Transform& Transform179 =  Transform();
Transform179.setTranslation(new float[]{-0.484684,7.45058e-9,-8.51605});
Transform& Transform180 =  Transform();
Transform180.setUSE(CString("_10"));
Transform179.addChild(&Transform180);

Transform164.addChild(&Transform179);

Transform& Transform181 =  Transform();
Transform181.setTranslation(new float[]{1.72608,-3.91155e-8,-7.18572});
Transform& Transform182 =  Transform();
Transform182.setUSE(CString("_10"));
Transform181.addChild(&Transform182);

Transform164.addChild(&Transform181);

Transform& Transform183 =  Transform();
Transform183.setTranslation(new float[]{-0.440131,-5.40167e-8,-5.95125});
Transform& Transform184 =  Transform();
Transform184.setUSE(CString("_10"));
Transform183.addChild(&Transform184);

Transform164.addChild(&Transform183);

Transform& Transform185 =  Transform();
Transform185.setTranslation(new float[]{-3.06324,-5.40167e-8,-7.46568});
Transform& Transform186 =  Transform();
Transform186.setUSE(CString("_10"));
Transform185.addChild(&Transform186);

Transform164.addChild(&Transform185);

Transform& Transform187 =  Transform();
Transform187.setTranslation(new float[]{-5.82266,1.67638e-8,-8.21252});
Transform& Transform188 =  Transform();
Transform188.setUSE(CString("_10"));
Transform187.addChild(&Transform188);

Transform164.addChild(&Transform187);

Transform& Transform189 =  Transform();
Transform189.setTranslation(new float[]{-4.47513,-5.40167e-8,-5.47814});
Transform& Transform190 =  Transform();
Transform190.setUSE(CString("_10"));
Transform189.addChild(&Transform190);

Transform164.addChild(&Transform189);

Transform& Transform191 =  Transform();
Transform191.setTranslation(new float[]{-6.28408,6.33299e-8,-4.25426});
Transform& Transform192 =  Transform();
Transform192.setUSE(CString("_10"));
Transform191.addChild(&Transform192);

Transform164.addChild(&Transform191);

Transform& Transform193 =  Transform();
Transform193.setTranslation(new float[]{-6.0052,1.67638e-8,-0.417779});
Transform& Transform194 =  Transform();
Transform194.setUSE(CString("_10"));
Transform193.addChild(&Transform194);

Transform164.addChild(&Transform193);

Transform& Transform195 =  Transform();
Transform195.setTranslation(new float[]{-4.40948,-2.30968e-7,-1.8676});
Transform& Transform196 =  Transform();
Transform196.setUSE(CString("_10"));
Transform195.addChild(&Transform196);

Transform164.addChild(&Transform195);

Transform& Transform197 =  Transform();
Transform197.setTranslation(new float[]{-1.54821,2.45869e-7,-3.65906});
Transform& Transform198 =  Transform();
Transform198.setUSE(CString("_10"));
Transform197.addChild(&Transform198);

Transform164.addChild(&Transform197);

Transform& Transform199 =  Transform();
Transform199.setTranslation(new float[]{-2.53489,3.72529e-9,-0.992168});
Transform& Transform200 =  Transform();
Transform200.setUSE(CString("_10"));
Transform199.addChild(&Transform200);

Transform164.addChild(&Transform199);

Transform& Transform201 =  Transform();
Transform201.setTranslation(new float[]{-3.95267,2.45869e-7,1.93201});
Transform& Transform202 =  Transform();
Transform202.setUSE(CString("_10"));
Transform201.addChild(&Transform202);

Transform164.addChild(&Transform201);

Transform& Transform203 =  Transform();
Transform203.setUSE(CString("_10"));
Transform164.addChild(&Transform203);

Transform& Transform204 =  Transform();
Transform204.setTranslation(new float[]{1.32881,-9.31323e-7,2.37374});
Transform& Transform205 =  Transform();
Transform205.setUSE(CString("_10"));
Transform204.addChild(&Transform205);

Transform164.addChild(&Transform204);

Transform151.addChild(&Transform164);

Transform150.addChild(&Transform151);

Transform& Transform206 =  Transform();
Transform206.setDEF(CString("floorR"));
Transform& Transform207 =  Transform();
Transform207.setDEF(CString("star_1"));
Transform& Transform208 =  Transform();
Transform208.setDEF(CString("star"));
Transform208.setTranslation(new float[]{-6.5536,-0.0215012,-0.433849});
Transform208.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape209 =  Shape();
Appearance& Appearance210 =  Appearance();
Material& Material211 =  Material();
Material211.setAmbientIntensity(0);
Material211.setDiffuseColor(new float[]{0.454242,0.785068,1});
Material211.setEmissiveColor(new float[]{0.0676531,0.116925,0.148936});
Material211.setShininess(0.606383);
Material211.setTransparency(0.297872);
Appearance210.addChild(&Material211);

Shape209.addChild(&Appearance210);

IndexedFaceSet& IndexedFaceSet212 =  IndexedFaceSet();
IndexedFaceSet212.setCcw(False);
IndexedFaceSet212.setConvex(False);
IndexedFaceSet212.setCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,4,6,7,-1,7,5,4,-1,8,7,6,-1,6,9,8,-1,9,10,11,-1,11,8,9,-1,10,12,13,-1,13,11,10,-1,14,13,12,-1,12,15,14,-1,15,16,17,-1,17,14,15,-1,18,17,16,-1,16,19,18,-1,19,20,21,-1,21,18,19,-1,22,21,20,-1,20,23,22,-1,24,22,23,-1,23,25,24,-1,26,24,25,-1,25,27,26,-1,28,26,27,-1,27,29,28,-1,29,30,31,-1,31,28,29,-1,32,31,30,-1,30,33,32,-1,34,32,33,-1,33,35,34,-1,35,36,37,-1,37,34,35,-1,38,37,36,-1,36,39,38,-1,39,40,41,-1,41,38,39,-1,40,42,43,-1,43,41,40,-1,44,0,3,-1,3,45,44,-1,46,44,45,-1,42,46,47,-1,45,47,46,-1,47,43,42,-1,48,49,50,-1,50,49,51,-1,51,52,53,-1,53,52,54,-1,55,56,48,-1,54,56,55,-1}, 216);
Coordinate& Coordinate213 =  Coordinate();
Coordinate213.setPoint(new float[]{3.968,0,15.084,5.612,0,13.823,5.925,0,14.136,4.19,0,15.467,6.873,0,12.179,7.257,0,12.4,7.666,0,10.265,8.094,0,10.379,8.38,0,8.211,7.937,0,8.211,7.666,0,6.157,8.094,0,6.042,6.873,0,4.243,7.257,0,4.021,5.925,0,2.285,5.612,0,2.599,3.968,0,1.338,4.19,0,0.954,2.169,0,0.117,2.054,0,0.545,0,0,0.274,0,0,-0.169,-2.169,0,0.117,-2.054,0,0.545,-4.19,0,0.954,-3.968,0,1.338,-5.925,0,2.285,-5.612,0,2.599,-7.257,0,4.021,-6.873,0,4.243,-7.666,0,6.157,-8.094,0,6.042,-8.38,0,8.211,-7.937,0,8.211,-8.094,0,10.379,-7.666,0,10.265,-6.873,0,12.179,-7.257,0,12.4,-5.925,0,14.136,-5.612,0,13.823,-3.968,0,15.084,-4.19,0,15.467,-2.054,0,15.877,-2.169,0,16.305,2.054,0,15.877,2.169,0,16.305,0,0,16.147,0,0,16.591,-1,0,7.711,0,0,0.274,0,0,8.211,1,0,7.711,6.873,0,12.179,0,0,8.211,0,0,9.211,0,0,8.211,-6.873,0,12.179}, 171);
IndexedFaceSet212.setCoord(&Coordinate213);

Shape209.setGeometry(&IndexedFaceSet212);

Transform208.addChild(&Shape209);

Transform207.addChild(&Transform208);

Transform206.addChild(&Transform207);

Transform& Transform214 =  Transform();
Transform214.setDEF(CString("floor"));
Transform& Transform215 =  Transform();
Transform215.setDEF(CString("rfloor"));
Transform215.setTranslation(new float[]{-6.5536,-0.0215012,-0.433264});
Transform215.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape216 =  Shape();
Appearance& Appearance217 =  Appearance();
Material& Material218 =  Material();
Material218.setAmbientIntensity(0);
Material218.setDiffuseColor(new float[]{0.0143484,0.043022,0.287234});
Material218.setShininess(0.606383);
Material218.setTransparency(0.0957447);
Appearance217.addChild(&Material218);

Shape216.addChild(&Appearance217);

IndexedFaceSet& IndexedFaceSet219 =  IndexedFaceSet();
IndexedFaceSet219.setDEF(CString("polySurface1_0Geo"));
IndexedFaceSet219.setCcw(False);
IndexedFaceSet219.setConvex(False);
IndexedFaceSet219.setCoordIndex(new int32_t[]{2,48,2,48,50,-1,48,46,50,-1,46,43,50,-1,43,42,50,-1,42,40,50,-1,40,37,50,-1,37,36,50,-1,36,34,50,-1,34,31,51,-1,31,30,51,-1,30,28,51,-1,28,25,51,-1,25,24,51,-1,24,22,51,-1,22,19,51,-1,19,18,51,-1,18,16,52,-1,16,13,52,-1,13,12,52,-1,12,10,52,-1,10,7,52,-1,7,6,52,-1,6,3,52,-1,3,2,52,-1,49,5,53,-1,47,49,53,-1,44,47,53,-1,45,44,53,-1,41,45,53,-1,38,41,53,-1,39,38,54,-1,35,39,54,-1,32,35,54,-1,33,32,54,-1,29,33,54,-1,26,29,54,-1,27,26,55,-1,23,27,55,-1,20,23,55,-1,21,20,55,-1,17,21,55,-1,14,17,55,-1,15,14,56,-1,11,15,56,-1,8,11,56,-1,9,8,56,-1,4,9,56,-1,5,4,56,-1,74,75,76,-1,1,74,76,-1,1,73,74,-1,75,60,76,-1,75,59,60,-1,26,78,55,-1,26,79,78,-1,26,72,79,-1,26,54,72,-1,56,82,66,-1,82,62,66,-1,82,61,62,-1,5,56,64,-1,56,66,64,-1,53,64,68,-1,53,5,64,-1,53,70,59,-1,53,68,70,-1,70,60,59,-1,70,63,60,-1,38,53,75,-1,53,59,75,-1,54,75,74,-1,54,38,75,-1,73,54,74,-1,73,72,54,-1,71,0,70,-1,0,63,70,-1,69,70,68,-1,69,71,70,-1,65,69,64,-1,69,68,64,-1,67,64,66,-1,67,65,64,-1,62,67,66,-1,62,57,67,-1,81,77,83,-1,83,61,82,-1,14,82,56,-1,14,55,81,-1,81,83,84,-1,83,82,84,-1,14,84,82,-1,14,81,84,-1,78,81,55,-1,78,80,81,-1,80,58,81,-1,58,77,81,-1}, 386);
Coordinate& Coordinate220 =  Coordinate();
Coordinate220.setDEF(CString("polySurface1GeoPoints"));
Coordinate220.setPoint(new float[]{23.131,0,-23.131,23.131,0,23.131,0,0,0.274,-2.054,0,0.545,-2.169,0,0.117,0,0,-0.169,-3.968,0,1.338,-5.612,0,2.599,-5.925,0,2.285,-4.19,0,0.954,-6.873,0,4.243,-7.257,0,4.021,-7.666,0,6.157,-7.937,0,8.211,-8.38,0,8.211,-8.094,0,6.042,-7.666,0,10.265,-8.094,0,10.379,-6.873,0,12.179,-5.612,0,13.823,-5.925,0,14.136,-7.257,0,12.4,-3.968,0,15.084,-4.19,0,15.467,-2.054,0,15.877,0,0,16.147,0,0,16.591,-2.169,0,16.305,2.054,0,15.877,2.169,0,16.305,3.968,0,15.084,5.612,0,13.823,5.925,0,14.136,4.19,0,15.467,6.873,0,12.179,7.257,0,12.4,7.666,0,10.265,7.937,0,8.211,8.38,0,8.211,8.094,0,10.379,7.666,0,6.157,8.094,0,6.042,6.873,0,4.243,5.612,0,2.599,5.925,0,2.285,7.257,0,4.021,3.968,0,1.338,4.19,0,0.954,2.054,0,0.545,2.169,0,0.117,1,0,7.711,0,0,9.211,-1,0,7.711,8.38,0,-0.169,8.38,0,16.591,-8.38,0,16.591,-8.38,0,-0.169,-23.131,0,-23.131,-23.131,0,23.131,14.4499,0,0,23.131,0,0,-23.131,0,-0.169001,-23.131,0,-11.65,23.131,0,-11.5655,0.0208912,0,-11.6077,0.0208931,0,-23.131,-11.5551,0,-11.6289,-11.5551,0,-23.131,8.40087,0,-11.5924,8.40087,0,-23.131,14.4711,0,-11.5813,14.4711,0,-23.131,8.38,0,23.131,14.4499,0,23.131,14.4499,0,16.591,14.4499,0,8.211,23.131,0,11.5655,-23.131,0,16.591,-8.38,0,23.131,0,0,23.131,-15.7555,0,23.131,-15.7555,0,16.591,-15.7555,0,-0.169,-23.131,0,8.211,-15.7555,0,8.211}, 255);
IndexedFaceSet219.setCoord(&Coordinate220);

Shape216.setGeometry(&IndexedFaceSet219);

Transform215.addChild(&Shape216);

Transform214.addChild(&Transform215);

Transform206.addChild(&Transform214);

Transform& Transform221 =  Transform();
Transform221.setDEF(CString("glows"));
Transform221.setTranslation(new float[]{-9.81505,0.00879847,-6.81543});
Transform221.setRotation(new float[]{0,-1,0,0.903278});
Transform221.setScale(new float[]{1,0.999999,1});
Collision& Collision222 =  Collision();
Collision222.setEnabled(False);
Transform& Transform223 =  Transform();
Transform& Transform224 =  Transform();
Transform224.setTranslation(new float[]{3.24541,-1.11759e-8,-10.9982});
Transform& Transform225 =  Transform();
Transform225.setDEF(CString("_12"));
Transform225.setTranslation(new float[]{9.06877,-0.0171127,4.51087});
Transform225.setRotation(new float[]{1,0,0,4.71239});
Shape& Shape226 =  Shape();
Appearance& Appearance227 =  Appearance();
ImageTexture& ImageTexture228 =  ImageTexture();
ImageTexture228.setUSE(CString("_11"));
Appearance227.addChild(&ImageTexture228);

Shape226.addChild(&Appearance227);

IndexedFaceSet& IndexedFaceSet229 =  IndexedFaceSet();
IndexedFaceSet229.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate230 =  TextureCoordinate();
TextureCoordinate230.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet229.setTexCoord(&TextureCoordinate230);

Coordinate& Coordinate231 =  Coordinate();
Coordinate231.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet229.setCoord(&Coordinate231);

Shape226.setGeometry(&IndexedFaceSet229);

Transform225.addChild(&Shape226);

Transform224.addChild(&Transform225);

Transform223.addChild(&Transform224);

Transform& Transform232 =  Transform();
Transform232.setTranslation(new float[]{0.416451,-1.22935e-7,-11.5522});
Transform& Transform233 =  Transform();
Transform233.setUSE(CString("_12"));
Transform232.addChild(&Transform233);

Transform223.addChild(&Transform232);

Transform& Transform234 =  Transform();
Transform234.setTranslation(new float[]{-4.74609,1.84402e-7,-10.8872});
Transform& Transform235 =  Transform();
Transform235.setUSE(CString("_12"));
Transform234.addChild(&Transform235);

Transform223.addChild(&Transform234);

Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{-1.98544,-2.16067e-7,-10.0091});
Transform& Transform237 =  Transform();
Transform237.setUSE(CString("_12"));
Transform236.addChild(&Transform237);

Transform223.addChild(&Transform236);

Transform& Transform238 =  Transform();
Transform238.setTranslation(new float[]{-0.484684,7.45058e-9,-8.51605});
Transform& Transform239 =  Transform();
Transform239.setUSE(CString("_12"));
Transform238.addChild(&Transform239);

Transform223.addChild(&Transform238);

Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{1.72608,-3.91155e-8,-7.18572});
Transform& Transform241 =  Transform();
Transform241.setUSE(CString("_12"));
Transform240.addChild(&Transform241);

Transform223.addChild(&Transform240);

Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{-0.440131,-5.40167e-8,-5.95125});
Transform& Transform243 =  Transform();
Transform243.setUSE(CString("_12"));
Transform242.addChild(&Transform243);

Transform223.addChild(&Transform242);

Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{-3.06324,-5.40167e-8,-7.46568});
Transform& Transform245 =  Transform();
Transform245.setUSE(CString("_12"));
Transform244.addChild(&Transform245);

Transform223.addChild(&Transform244);

Transform& Transform246 =  Transform();
Transform246.setTranslation(new float[]{-5.82266,1.67638e-8,-8.21252});
Transform& Transform247 =  Transform();
Transform247.setUSE(CString("_12"));
Transform246.addChild(&Transform247);

Transform223.addChild(&Transform246);

Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[]{-4.47513,-5.40167e-8,-5.47814});
Transform& Transform249 =  Transform();
Transform249.setUSE(CString("_12"));
Transform248.addChild(&Transform249);

Transform223.addChild(&Transform248);

Transform& Transform250 =  Transform();
Transform250.setTranslation(new float[]{-6.28408,6.33299e-8,-4.25426});
Transform& Transform251 =  Transform();
Transform251.setUSE(CString("_12"));
Transform250.addChild(&Transform251);

Transform223.addChild(&Transform250);

Transform& Transform252 =  Transform();
Transform252.setTranslation(new float[]{-6.0052,1.67638e-8,-0.417779});
Transform& Transform253 =  Transform();
Transform253.setUSE(CString("_12"));
Transform252.addChild(&Transform253);

Transform223.addChild(&Transform252);

Transform& Transform254 =  Transform();
Transform254.setTranslation(new float[]{-4.40948,-2.30968e-7,-1.8676});
Transform& Transform255 =  Transform();
Transform255.setUSE(CString("_12"));
Transform254.addChild(&Transform255);

Transform223.addChild(&Transform254);

Transform& Transform256 =  Transform();
Transform256.setTranslation(new float[]{-1.54821,2.45869e-7,-3.65906});
Transform& Transform257 =  Transform();
Transform257.setUSE(CString("_12"));
Transform256.addChild(&Transform257);

Transform223.addChild(&Transform256);

Transform& Transform258 =  Transform();
Transform258.setTranslation(new float[]{-2.53489,3.72529e-9,-0.992168});
Transform& Transform259 =  Transform();
Transform259.setUSE(CString("_12"));
Transform258.addChild(&Transform259);

Transform223.addChild(&Transform258);

Transform& Transform260 =  Transform();
Transform260.setTranslation(new float[]{-3.95267,2.45869e-7,1.93201});
Transform& Transform261 =  Transform();
Transform261.setUSE(CString("_12"));
Transform260.addChild(&Transform261);

Transform223.addChild(&Transform260);

Transform& Transform262 =  Transform();
Transform262.setUSE(CString("_12"));
Transform223.addChild(&Transform262);

Transform& Transform263 =  Transform();
Transform263.setTranslation(new float[]{1.32881,-9.31323e-7,2.37374});
Transform& Transform264 =  Transform();
Transform264.setUSE(CString("_12"));
Transform263.addChild(&Transform264);

Transform223.addChild(&Transform263);

Collision222.addChildren(&Transform223);

Transform221.addChild(&Collision222);

Transform206.addChild(&Transform221);

Transform150.addChild(&Transform206);

Transform11.addChild(&Transform150);

Transform& Transform265 =  Transform();
Transform265.setDEF(CString("inventory"));
Transform& Transform266 =  Transform();
Transform266.setDEF(CString("entry-h"));
Transform& Transform267 =  Transform();
Transform267.setDEF(CString("info2"));
Transform& Transform268 =  Transform();
Transform268.setDEF(CString("_13"));
Transform268.setTranslation(new float[]{-6.5536,-0.642096,-0.923173});
Transform268.setScale(new float[]{0.365073,0.444861,0.410544});
Shape& Shape269 =  Shape();
Appearance& Appearance270 =  Appearance();
Material& Material271 =  Material();
Material271.setAmbientIntensity(0.590164);
Material271.setDiffuseColor(new float[]{0.648936,0.634597,0.645351});
Material271.setShininess(0.56383);
Appearance270.addChild(&Material271);

ImageTexture& ImageTexture272 =  ImageTexture();
ImageTexture272.setDEF(CString("_14"));
ImageTexture272.setUrl(new CString[]{CString("nposter6.jpg")}, 1);
Appearance270.addChild(&ImageTexture272);

TextureTransform& TextureTransform273 =  TextureTransform();
Appearance270.setTextureTransform(TextureTransform273);

Shape269.addChild(&Appearance270);

IndexedFaceSet& IndexedFaceSet274 =  IndexedFaceSet();
IndexedFaceSet274.setDEF(CString("pCylinder2_0Geo_1"));
IndexedFaceSet274.setCcw(False);
IndexedFaceSet274.setConvex(False);
IndexedFaceSet274.setCreaseAngle(1.09275);
IndexedFaceSet274.setCoordIndex(new int32_t[]{2,3,6,-1,3,7,6,-1,1,2,5,-1,2,6,5,-1,0,1,4,-1,1,5,4,-1}, 24);
TextureCoordinate& TextureCoordinate275 =  TextureCoordinate();
TextureCoordinate275.setPoint(new float[]{1,0,0.655447,0,0.310894,0,0,0,0.997055,0.999547,0.652502,0.999547,0.307949,0.999547,0.000452876,0.996149}, 16);
IndexedFaceSet274.setTexCoord(&TextureCoordinate275);

Coordinate& Coordinate276 =  Coordinate();
Coordinate276.setDEF(CString("pCylinder2GeoPoints_1"));
Coordinate276.setPoint(new float[]{-17.581,2.366,2.485,-18.486,2.366,8.197,-17.581,2.366,13.909,-14.955,2.366,19.063,-17.581,9.681,2.485,-18.486,9.681,8.197,-17.581,9.681,13.909,-14.955,9.681,19.063}, 24);
IndexedFaceSet274.setCoord(&Coordinate276);

Shape269.setGeometry(&IndexedFaceSet274);

Transform268.addChild(&Shape269);

Transform267.addChild(&Transform268);

Transform& Transform277 =  Transform();
Transform277.setTranslation(new float[]{-6.5536,-4.8187,-0.923173});
Transform277.setScale(new float[]{0.365073,0.444861,0.410544});
Shape& Shape278 =  Shape();
Appearance& Appearance279 =  Appearance();
Material& Material280 =  Material();
Material280.setAmbientIntensity(0.590164);
Material280.setDiffuseColor(new float[]{0.648936,0.634597,0.645351});
Material280.setShininess(0.56383);
Appearance279.addChild(&Material280);

ImageTexture& ImageTexture281 =  ImageTexture();
ImageTexture281.setUSE(CString("_14"));
Appearance279.addChild(&ImageTexture281);

TextureTransform& TextureTransform282 =  TextureTransform();
TextureTransform282.setScale(new float[]{1,-1});
Appearance279.setTextureTransform(TextureTransform282);

Shape278.addChild(&Appearance279);

IndexedFaceSet& IndexedFaceSet283 =  IndexedFaceSet();
IndexedFaceSet283.setDEF(CString("pCylinder2_0Geo"));
IndexedFaceSet283.setCcw(False);
IndexedFaceSet283.setConvex(False);
IndexedFaceSet283.setCreaseAngle(1.09275);
IndexedFaceSet283.setCoordIndex(new int32_t[]{2,3,6,-1,3,7,6,-1,1,2,5,-1,2,6,5,-1,0,1,4,-1,1,5,4,-1}, 24);
TextureCoordinate& TextureCoordinate284 =  TextureCoordinate();
TextureCoordinate284.setPoint(new float[]{1,0,0.655447,0,0.310894,0,0,0,0.997055,0.999547,0.652502,0.999547,0.307949,0.999547,0.000452876,0.996149}, 16);
IndexedFaceSet283.setTexCoord(&TextureCoordinate284);

Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setDEF(CString("pCylinder2GeoPoints"));
Coordinate285.setPoint(new float[]{-17.581,2.366,2.485,-18.486,2.366,8.197,-17.581,2.366,13.909,-14.955,2.366,19.063,-17.581,9.681,2.485,-18.486,9.681,8.197,-17.581,9.681,13.909,-14.955,9.681,19.063}, 24);
IndexedFaceSet283.setCoord(&Coordinate285);

Shape278.setGeometry(&IndexedFaceSet283);

Transform277.addChild(&Shape278);

Transform267.addChild(&Transform277);

Transform266.addChild(&Transform267);

Transform& Transform286 =  Transform();
Transform286.setTranslation(new float[]{-0.607358,0,3.91981});
Inline& Inline287 =  Inline();
Inline287.setUrl(new CString[]{CString("infowall.x3d")}, 1);
Inline287.setBboxSize(new float[]{8.65831,7.07873,16.0367});
Inline287.setBboxCenter(new float[]{0.623284,0.119948,0.0731559});
Transform286.addChild(&Inline287);

Transform266.addChild(&Transform286);

Transform& Transform288 =  Transform();
Transform288.setDEF(CString("galerie"));
Transform& Transform289 =  Transform();
Transform289.setTranslation(new float[]{-14.862,3.4142,-1.3688});
Transform289.setRotation(new float[]{0,1,0,1.5708});
Transform289.setScale(new float[]{0.0319162,0.0319162,0.0319162});
Shape& Shape290 =  Shape();
Appearance& Appearance291 =  Appearance();
Material& Material292 =  Material();
Material292.setAmbientIntensity(0);
Material292.setDiffuseColor(new float[]{0,0,0});
Material292.setEmissiveColor(new float[]{0,0.0428694,0.212766});
Material292.setShininess(0);
Appearance291.addChild(&Material292);

Shape290.addChild(&Appearance291);

Text& Text293 =  Text();
Text293.setString(new CString[]{CString("Galerie")}, 1);
Text293.setLength(new float[]{0}, 1);
CFontStyle& FontStyle294 =  CFontStyle();
FontStyle294.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle294.setStyle(CString("ITALIC"));
FontStyle294.setSize(24);
Text293.setFontStyle(&FontStyle294);

Shape290.setGeometry(&Text293);

Transform289.addChild(&Shape290);

Transform288.addChild(&Transform289);

Transform& Transform295 =  Transform();
Transform295.setTranslation(new float[]{-10.9613,3.4142,-8.78084});
Transform295.setScale(new float[]{0.0319162,0.0319162,0.0319162});
Shape& Shape296 =  Shape();
Appearance& Appearance297 =  Appearance();
Material& Material298 =  Material();
Material298.setAmbientIntensity(0);
Material298.setDiffuseColor(new float[]{0,0,0});
Material298.setEmissiveColor(new float[]{0,0.0428694,0.212766});
Material298.setShininess(0);
Appearance297.addChild(&Material298);

Shape296.addChild(&Appearance297);

Text& Text299 =  Text();
Text299.setString(new CString[]{CString("Galerie")}, 1);
Text299.setLength(new float[]{0}, 1);
CFontStyle& FontStyle300 =  CFontStyle();
FontStyle300.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle300.setStyle(CString("ITALIC"));
FontStyle300.setSize(24);
Text299.setFontStyle(&FontStyle300);

Shape296.setGeometry(&Text299);

Transform295.addChild(&Shape296);

Transform288.addChild(&Transform295);

Transform& Transform301 =  Transform();
Transform301.setTranslation(new float[]{-6.74039,1.72336,-8.79702});
Transform301.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape302 =  Shape();
Appearance& Appearance303 =  Appearance();
ImageTexture& ImageTexture304 =  ImageTexture();
ImageTexture304.setUSE(CString("_5"));
Appearance303.addChild(&ImageTexture304);

Shape302.addChild(&Appearance303);

IndexedFaceSet& IndexedFaceSet305 =  IndexedFaceSet();
IndexedFaceSet305.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate306 =  TextureCoordinate();
TextureCoordinate306.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet305.setTexCoord(&TextureCoordinate306);

Coordinate& Coordinate307 =  Coordinate();
Coordinate307.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet305.setCoord(&Coordinate307);

Shape302.setGeometry(&IndexedFaceSet305);

Transform301.addChild(&Shape302);

Transform288.addChild(&Transform301);

Transform& Transform308 =  Transform();
Transform308.setTranslation(new float[]{-10.0241,1.72336,-8.79703});
Transform308.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape309 =  Shape();
Appearance& Appearance310 =  Appearance();
ImageTexture& ImageTexture311 =  ImageTexture();
ImageTexture311.setUSE(CString("_6"));
Appearance310.addChild(&ImageTexture311);

Shape309.addChild(&Appearance310);

IndexedFaceSet& IndexedFaceSet312 =  IndexedFaceSet();
IndexedFaceSet312.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate313 =  TextureCoordinate();
TextureCoordinate313.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet312.setTexCoord(&TextureCoordinate313);

Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet312.setCoord(&Coordinate314);

Shape309.setGeometry(&IndexedFaceSet312);

Transform308.addChild(&Shape309);

Transform288.addChild(&Transform308);

Transform& Transform315 =  Transform();
Transform315.setTranslation(new float[]{-13.3971,1.72336,-8.79703});
Transform315.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape316 =  Shape();
Appearance& Appearance317 =  Appearance();
ImageTexture& ImageTexture318 =  ImageTexture();
ImageTexture318.setUSE(CString("_7"));
Appearance317.addChild(&ImageTexture318);

Shape316.addChild(&Appearance317);

IndexedFaceSet& IndexedFaceSet319 =  IndexedFaceSet();
IndexedFaceSet319.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate320 =  TextureCoordinate();
TextureCoordinate320.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet319.setTexCoord(&TextureCoordinate320);

Coordinate& Coordinate321 =  Coordinate();
Coordinate321.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet319.setCoord(&Coordinate321);

Shape316.setGeometry(&IndexedFaceSet319);

Transform315.addChild(&Shape316);

Transform288.addChild(&Transform315);

Transform& Transform322 =  Transform();
Transform322.setTranslation(new float[]{-14.9196,1.72336,-5.31138});
Transform322.setRotation(new float[]{0,-1,0,1.5708});
Transform322.setScale(new float[]{4.08207,2.56721,2.11914});
Shape& Shape323 =  Shape();
Appearance& Appearance324 =  Appearance();
ImageTexture& ImageTexture325 =  ImageTexture();
ImageTexture325.setUSE(CString("_8"));
Appearance324.addChild(&ImageTexture325);

TextureTransform& TextureTransform326 =  TextureTransform();
TextureTransform326.setScale(new float[]{-1,1});
Appearance324.setTextureTransform(TextureTransform326);

Shape323.addChild(&Appearance324);

IndexedFaceSet& IndexedFaceSet327 =  IndexedFaceSet();
IndexedFaceSet327.setCoordIndex(new int32_t[]{0,3,1,-1,3,2,1,-1}, 8);
TextureCoordinate& TextureCoordinate328 =  TextureCoordinate();
TextureCoordinate328.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet327.setTexCoord(&TextureCoordinate328);

Coordinate& Coordinate329 =  Coordinate();
Coordinate329.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet327.setCoord(&Coordinate329);

Shape323.setGeometry(&IndexedFaceSet327);

Transform322.addChild(&Shape323);

Transform288.addChild(&Transform322);

Transform& Transform330 =  Transform();
Transform330.setTranslation(new float[]{-5.17514,2.89932,-6.74548});
Transform330.setRotation(new float[]{-0.000265379,0.999999,-0.00127876,0.409254});
Transform330.setScale(new float[]{0.900709,1.03695,0.900715});
Shape& Shape331 =  Shape();
Appearance& Appearance332 =  Appearance();
ImageTexture& ImageTexture333 =  ImageTexture();
ImageTexture333.setUSE(CString("_3"));
Appearance332.addChild(&ImageTexture333);

Shape331.addChild(&Appearance332);

IndexedFaceSet& IndexedFaceSet334 =  IndexedFaceSet();
IndexedFaceSet334.setSolid(False);
IndexedFaceSet334.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate335 =  TextureCoordinate();
TextureCoordinate335.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet334.setTexCoord(&TextureCoordinate335);

Coordinate& Coordinate336 =  Coordinate();
Coordinate336.setPoint(new float[]{-0.5,-1.7662,0,0.5,-1.7662,0,0.5,1.7662,0,-0.5,1.7662,0,0.0000255695,-1.76619,-0.500016,0.0000240198,-1.76619,0.499978,0.0000240215,1.7662,0.499978,0.0000255712,1.7662,-0.500016}, 24);
IndexedFaceSet334.setCoord(&Coordinate336);

Shape331.setGeometry(&IndexedFaceSet334);

Transform330.addChild(&Shape331);

Transform288.addChild(&Transform330);

Transform& Transform337 =  Transform();
Transform337.setTranslation(new float[]{-8.29445,2.67552,-5.85136});
Transform337.setRotation(new float[]{-0.000265861,0.999999,-0.00121068,0.432338});
Transform337.setScale(new float[]{0.999999,1.15126,1});
Shape& Shape338 =  Shape();
Appearance& Appearance339 =  Appearance();
ImageTexture& ImageTexture340 =  ImageTexture();
ImageTexture340.setUSE(CString("_3"));
Appearance339.addChild(&ImageTexture340);

Shape338.addChild(&Appearance339);

IndexedFaceSet& IndexedFaceSet341 =  IndexedFaceSet();
IndexedFaceSet341.setSolid(False);
IndexedFaceSet341.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate342 =  TextureCoordinate();
TextureCoordinate342.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet341.setTexCoord(&TextureCoordinate342);

Coordinate& Coordinate343 =  Coordinate();
Coordinate343.setPoint(new float[]{-0.5,-1.7662,0,0.5,-1.7662,0,0.5,1.7662,0,-0.5,1.7662,0,-6.43588e-7,-1.7662,0.49999,-0.00000618682,-1.7662,-0.500011,-0.00000698581,1.76619,-0.500011,-0.00000144257,1.76619,0.49999}, 24);
IndexedFaceSet341.setCoord(&Coordinate343);

Shape338.setGeometry(&IndexedFaceSet341);

Transform337.addChild(&Shape338);

Transform288.addChild(&Transform337);

Transform& Transform344 =  Transform();
Transform344.setDEF(CString("pCube5"));
Transform344.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform344.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape345 =  Shape();
Appearance& Appearance346 =  Appearance();
Material& Material347 =  Material();
Material347.setUSE(CString("_4"));
Appearance346.addChild(&Material347);

Shape345.addChild(&Appearance346);

IndexedFaceSet& IndexedFaceSet348 =  IndexedFaceSet();
IndexedFaceSet348.setDEF(CString("pCube5_0Geo"));
IndexedFaceSet348.setConvex(False);
IndexedFaceSet348.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,1,7,5,3,-1,6,0,2,4,-1,8,9,10,11,-1,12,8,11,13,-1,13,14,15,12,-1,9,15,14,10,-1,16,17,18,19,-1,20,16,19,21,-1,21,22,23,20,-1,17,23,22,18,-1,24,25,26,27,-1,28,24,27,29,-1,29,30,31,28,-1,25,31,30,26,-1}, 80);
Coordinate& Coordinate349 =  Coordinate();
Coordinate349.setDEF(CString("pCube5GeoPoints"));
Coordinate349.setPoint(new float[]{3.185,-0.001,-17.978,4.172,-0.001,-18.134,3.185,12.032,-17.978,4.172,12.032,-18.134,3.028,12.032,-18.966,4.016,12.032,-19.122,3.028,-0.001,-18.966,4.016,-0.001,-19.122,-14.925,-0.001,-5.03,-14.422,-0.001,-5.895,-14.422,12.032,-5.895,-14.925,12.032,-5.03,-15.789,-0.001,-5.532,-15.789,12.032,-5.532,-15.287,12.032,-6.397,-15.287,-0.001,-6.397,-11.32,-0.001,-10.8,-10.565,-0.001,-11.457,-10.565,12.032,-11.457,-11.32,12.032,-10.8,-11.976,-0.001,-11.555,-11.976,12.032,-11.555,-11.222,12.032,-12.211,-11.222,-0.001,-12.211,-5.019,-0.001,-15.46,-4.111,-0.001,-15.879,-4.111,12.032,-15.879,-5.019,12.032,-15.46,-5.438,-0.001,-16.368,-5.438,12.032,-16.368,-4.53,12.032,-16.787,-4.53,-0.001,-16.787}, 96);
IndexedFaceSet348.setCoord(&Coordinate349);

Shape345.setGeometry(&IndexedFaceSet348);

Transform344.addChild(&Shape345);

Transform288.addChild(&Transform344);

Transform& Transform350 =  Transform();
Transform350.setDEF(CString("polySurface5"));
Transform350.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform350.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape351 =  Shape();
Appearance& Appearance352 =  Appearance();
Material& Material353 =  Material();
Material353.setAmbientIntensity(0.390805);
Material353.setDiffuseColor(new float[]{0.925532,0.889742,0.782371});
Material353.setShininess(0.56383);
Appearance352.addChild(&Material353);

Shape351.addChild(&Appearance352);

IndexedFaceSet& IndexedFaceSet354 =  IndexedFaceSet();
IndexedFaceSet354.setDEF(CString("polySurface5_0Geo"));
IndexedFaceSet354.setCcw(False);
IndexedFaceSet354.setConvex(False);
IndexedFaceSet354.setCreaseAngle(1.4776);
IndexedFaceSet354.setCoordIndex(new int32_t[]{0,5,1,-1,2,1,3,-1,5,4,1,-1,4,3,1,-1,2,3,8,7,-1,3,4,9,8,-1,4,5,10,9,-1,5,0,6,10,-1}, 36);
Coordinate& Coordinate355 =  Coordinate();
Coordinate355.setDEF(CString("polySurface5GeoPoints"));
Coordinate355.setPoint(new float[]{-23.131,12.014,23.131,-23.131,12.014,-23.131,23.131,12.014,-23.131,-4.508,12.014,-15.082,-10.745,12.014,-10.677,-14.27,12.014,-4.845,-23.131,12.516,23.131,23.131,12.516,-23.131,-4.508,12.516,-15.082,-10.745,12.516,-10.677,-14.27,12.516,-4.845}, 33);
IndexedFaceSet354.setCoord(&Coordinate355);

Shape351.setGeometry(&IndexedFaceSet354);

Transform350.addChild(&Shape351);

Transform288.addChild(&Transform350);

Transform266.addChild(&Transform288);

Transform265.addChild(&Transform266);

Transform& Transform356 =  Transform();
Transform356.setDEF(CString("welcome"));
Transform& Transform357 =  Transform();
Transform357.setDEF(CString("wallstar"));
Transform357.setTranslation(new float[]{4.53814,0.199842,-36.8756});
Transform357.setRotation(new float[]{0,-1,0,1.5708});
Transform357.setScale(new float[]{0.62637,0.626545,0.626539});
Shape& Shape358 =  Shape();
Appearance& Appearance359 =  Appearance();
Material& Material360 =  Material();
Material360.setAmbientIntensity(0);
Material360.setDiffuseColor(new float[]{0,0,0});
Material360.setEmissiveColor(new float[]{0,0.0428694,0.212766});
Material360.setShininess(0);
Appearance359.addChild(&Material360);

Shape358.addChild(&Appearance359);

IndexedFaceSet& IndexedFaceSet361 =  IndexedFaceSet();
IndexedFaceSet361.setDEF(CString("polySurface4_0Geo"));
IndexedFaceSet361.setConvex(False);
IndexedFaceSet361.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,1,12,13,-1,12,9,14,-1,10,15,16,-1,15,6,17,-1,18,19,20,-1,7,21,22,-1,21,18,23,-1,19,24,25,-1,24,3,26,-1,27,28,29,-1,30,31,32,-1,4,33,34,-1,33,30,35,-1,31,36,37,-1,36,27,38,-1,39,40,41,-1,28,42,43,-1,42,39,44,-1,40,45,46,-1,45,0,47,-1,2,47,0,-1,5,26,3,-1,8,17,6,-1,11,14,9,-1,13,2,1,-1,14,13,12,-1,16,11,10,-1,17,16,15,-1,20,23,18,-1,22,8,7,-1,23,22,21,-1,25,20,19,-1,26,25,24,-1,29,38,27,-1,32,35,30,-1,34,5,4,-1,35,34,33,-1,37,32,31,-1,38,37,36,-1,41,44,39,-1,43,29,28,-1,44,43,42,-1,46,41,40,-1,47,46,45,-1,48,18,49,-1,50,1,51,-1,52,36,53,-1,49,1,50,-1,51,36,52,-1,53,18,48,-1}, 216);
Coordinate& Coordinate362 =  Coordinate();
Coordinate362.setDEF(CString("polySurface4GeoPoints"));
Coordinate362.setPoint(new float[]{44.719,2.986,9.083,44.719,3.011,8.893,44.719,3.052,8.893,44.719,1.568,8.703,44.719,1.543,8.893,44.719,1.502,8.893,44.719,2.467,8.184,44.719,2.277,8.159,44.719,2.277,8.118,44.719,2.912,8.526,44.719,2.796,8.374,44.719,2.825,8.345,44.719,2.986,8.703,44.719,3.025,8.693,44.719,2.948,8.506,44.719,2.644,8.258,44.719,2.664,8.222,44.719,2.477,8.145,44.719,1.91,8.258,44.719,1.758,8.374,44.719,1.729,8.345,44.719,2.087,8.184,44.719,2.076,8.145,44.719,1.889,8.222,44.719,1.641,8.526,44.719,1.606,8.506,44.719,1.528,8.693,44.719,2.087,9.602,44.719,2.277,9.627,44.719,2.277,9.668,44.719,1.641,9.26,44.719,1.758,9.412,44.719,1.729,9.441,44.719,1.568,9.083,44.719,1.528,9.094,44.719,1.606,9.281,44.719,1.91,9.529,44.719,1.889,9.564,44.719,2.076,9.642,44.719,2.644,9.529,44.719,2.796,9.412,44.719,2.825,9.441,44.719,2.467,9.602,44.719,2.477,9.642,44.719,2.664,9.564,44.719,2.912,9.26,44.719,2.948,9.281,44.719,3.025,9.094,44.719,2.277,8.893,44.719,2.323,8.801,44.719,2.277,8.893,44.719,2.323,8.986,44.719,2.277,8.893,44.719,2.184,8.893}, 162);
IndexedFaceSet361.setCoord(&Coordinate362);

Shape358.setGeometry(&IndexedFaceSet361);

Transform357.addChild(&Shape358);

Transform356.addChild(&Transform357);

Transform& Transform363 =  Transform();
Transform363.setDEF(CString("poster2_1"));
Transform363.setTranslation(new float[]{4.24366,1.72336,-8.79701});
Transform363.setScale(new float[]{2.11918,2.5672,2.11914});
Shape& Shape364 =  Shape();
Appearance& Appearance365 =  Appearance();
ImageTexture& ImageTexture366 =  ImageTexture();
ImageTexture366.setUSE(CString("_5"));
Appearance365.addChild(&ImageTexture366);

TextureTransform& TextureTransform367 =  TextureTransform();
TextureTransform367.setScale(new float[]{-1,1});
Appearance365.setTextureTransform(TextureTransform367);

Shape364.addChild(&Appearance365);

IndexedFaceSet& IndexedFaceSet368 =  IndexedFaceSet();
IndexedFaceSet368.setCoordIndex(new int32_t[]{3,2,1,0,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate369 =  TextureCoordinate();
TextureCoordinate369.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet368.setTexCoord(&TextureCoordinate369);

Coordinate& Coordinate370 =  Coordinate();
Coordinate370.setPoint(new float[]{-0.5,-0.822329,0,0.5,-0.822329,0,0.5,-1.84714,0,-0.5,-1.84714,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 24);
IndexedFaceSet368.setCoord(&Coordinate370);

Shape364.setGeometry(&IndexedFaceSet368);

Transform363.addChild(&Shape364);

Transform356.addChild(&Transform363);

Transform& Transform371 =  Transform();
Transform371.setDEF(CString("poster1"));
Transform371.setTranslation(new float[]{9.93874,2.77152,-8.79051});
Transform371.setScale(new float[]{5.9224,3.68132,3.03881});
Shape& Shape372 =  Shape();
Appearance& Appearance373 =  Appearance();
ImageTexture& ImageTexture374 =  ImageTexture();
ImageTexture374.setUrl(new CString[]{CString("nposter3.jpg")}, 1);
Appearance373.addChild(&ImageTexture374);

Shape372.addChild(&Appearance373);

IndexedFaceSet& IndexedFaceSet375 =  IndexedFaceSet();
IndexedFaceSet375.setCoordIndex(new int32_t[]{0,1,2,3,-1,7,6,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate376 =  TextureCoordinate();
TextureCoordinate376.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 16);
IndexedFaceSet375.setTexCoord(&TextureCoordinate376);

Coordinate& Coordinate377 =  Coordinate();
Coordinate377.setPoint(new float[]{-0.5,-0.610461,0,0.5,-0.610461,0,0.5,0.389539,0,-0.5,0.389539,0,-0.5,-0.862765,0,0.5,-0.862765,0,0.5,-1.87165,0,-0.5,-1.87165,0}, 24);
IndexedFaceSet375.setCoord(&Coordinate377);

Shape372.setGeometry(&IndexedFaceSet375);

Transform371.addChild(&Shape372);

Transform356.addChild(&Transform371);

Transform& Transform378 =  Transform();
Transform378.setDEF(CString("tresen"));
Transform356.addChild(&Transform378);

Transform& Transform379 =  Transform();
Transform379.setDEF(CString("text"));
Transform& Transform380 =  Transform();
Transform380.setTranslation(new float[]{-4.32479,3.4142,-8.78084});
Transform380.setScale(new float[]{0.0319162,0.0319162,0.0319162});
Shape& Shape381 =  Shape();
Appearance& Appearance382 =  Appearance();
Material& Material383 =  Material();
Material383.setAmbientIntensity(0);
Material383.setDiffuseColor(new float[]{0,0,0});
Material383.setEmissiveColor(new float[]{0,0.0428694,0.212766});
Material383.setShininess(0);
Appearance382.addChild(&Material383);

Shape381.addChild(&Appearance382);

Text& Text384 =  Text();
Text384.setString(new CString[]{CString("HERZLICH WILLKOMMEN")}, 1);
Text384.setLength(new float[]{0}, 1);
CFontStyle& FontStyle385 =  CFontStyle();
FontStyle385.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle385.setStyle(CString("ITALIC"));
FontStyle385.setSize(24);
Text384.setFontStyle(&FontStyle385);

Shape381.setGeometry(&Text384);

Transform380.addChild(&Shape381);

Transform379.addChild(&Transform380);

Transform& Transform386 =  Transform();
Transform386.setTranslation(new float[]{-4.00191,2.78684,-8.78084});
Transform386.setScale(new float[]{0.0319162,0.0319162,0.0319162});
Shape& Shape387 =  Shape();
Appearance& Appearance388 =  Appearance();
Material& Material389 =  Material();
Material389.setAmbientIntensity(0);
Material389.setDiffuseColor(new float[]{0,0,0});
Material389.setEmissiveColor(new float[]{0,0.0428694,0.212766});
Material389.setShininess(0);
Appearance388.addChild(&Material389);

Shape387.addChild(&Appearance388);

Text& Text390 =  Text();
Text390.setString(new CString[]{CString("bei")}, 1);
Text390.setLength(new float[]{0}, 1);
CFontStyle& FontStyle391 =  CFontStyle();
FontStyle391.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle391.setStyle(CString("ITALIC"));
FontStyle391.setSize(18);
Text390.setFontStyle(&FontStyle391);

Shape387.setGeometry(&Text390);

Transform386.addChild(&Shape387);

Transform379.addChild(&Transform386);

Transform& Transform392 =  Transform();
Transform392.setTranslation(new float[]{-3.04941,2.42656,-8.78084});
Transform392.setScale(new float[]{0.0319162,0.0319162,0.0319162});
Shape& Shape393 =  Shape();
Appearance& Appearance394 =  Appearance();
Material& Material395 =  Material();
Material395.setAmbientIntensity(0);
Material395.setDiffuseColor(new float[]{0,0,0});
Material395.setEmissiveColor(new float[]{0,0.0428694,0.212766});
Material395.setShininess(0);
Appearance394.addChild(&Material395);

Shape393.addChild(&Appearance394);

Text& Text396 =  Text();
Text396.setString(new CString[]{CString("Mercedes-Benz")}, 1);
Text396.setLength(new float[]{0}, 1);
CFontStyle& FontStyle397 =  CFontStyle();
FontStyle397.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle397.setStyle(CString("ITALIC"));
FontStyle397.setSize(25);
Text396.setFontStyle(&FontStyle397);

Shape393.setGeometry(&Text396);

Transform392.addChild(&Shape393);

Transform379.addChild(&Transform392);

Transform356.addChild(&Transform379);

Transform& Transform398 =  Transform();
Transform398.setDEF(CString("tresen1"));
Transform& Transform399 =  Transform();
Transform399.setDEF(CString("_15"));
Transform399.setTranslation(new float[]{-1.47176,-0.0182489,-6.22017});
Inline& Inline400 =  Inline();
Inline400.setUrl(new CString[]{CString("tresen.x3d")}, 1);
Inline400.setBboxSize(new float[]{5.66685,1.61279,3.55296});
Inline400.setBboxCenter(new float[]{-0.00234461,0.00441408,0.236422});
Transform399.addChild(&Inline400);

Transform398.addChild(&Transform399);

Transform356.addChild(&Transform398);

Transform& Transform401 =  Transform();
Transform401.setDEF(CString("tresen2"));
Transform401.setTranslation(new float[]{6.34179,-0.0107709,0.126961});
Transform401.setRotation(new float[]{0,-1,0,0.892094});
Transform& Transform402 =  Transform();
Transform402.setUSE(CString("_15"));
Transform401.addChild(&Transform402);

Transform356.addChild(&Transform401);

Transform& Transform403 =  Transform();
Transform403.setTranslation(new float[]{1.28411,0.00620511,-1.30274});
Transform403.setScale(new float[]{1.0001,1.00006,1.0001});
Transform& Transform404 =  Transform();
Transform404.setDEF(CString("_16"));
Transform404.setTranslation(new float[]{5.47871,0.00438073,-5.93544});
Inline& Inline405 =  Inline();
Inline405.setUrl(new CString[]{CString("prospekt.x3d")}, 1);
Inline405.setBboxSize(new float[]{3.5,3.5,3.5});
Transform404.addChild(&Inline405);

Transform403.addChild(&Transform404);

Transform356.addChild(&Transform403);

Transform265.addChild(&Transform356);

Transform& Transform406 =  Transform();
Transform406.setDEF(CString("aklasse"));
Inline& Inline407 =  Inline();
Inline407.setUrl(new CString[]{CString("infowall2.x3d")}, 1);
Inline407.setBboxSize(new float[]{0.0264416,3.49957,12.3725});
Inline407.setBboxCenter(new float[]{14.8485,2.95436,-2.06621});
Transform406.addChild(&Inline407);

Transform& Transform408 =  Transform();
Transform408.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform408.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape409 =  Shape();
Appearance& Appearance410 =  Appearance();
Material& Material411 =  Material();
Material411.setDEF(CString("_17"));
Material411.setAmbientIntensity(0.42623);
Material411.setDiffuseColor(new float[]{0.648936,0.634597,0.645351});
Material411.setSpecularColor(new float[]{0.62766,0.62766,0.62766});
Material411.setShininess(0.56383);
Appearance410.addChild(&Material411);

ImageTexture& ImageTexture412 =  ImageTexture();
ImageTexture412.setDEF(CString("_18"));
ImageTexture412.setUrl(new CString[]{CString("reflect1.png")}, 1);
Appearance410.addChild(&ImageTexture412);

TextureTransform& TextureTransform413 =  TextureTransform();
TextureTransform413.setTranslation(new float[]{1,-0.56});
TextureTransform413.setRotation(0.879646);
TextureTransform413.setScale(new float[]{0.149839,0.156175});
Appearance410.setTextureTransform(TextureTransform413);

Shape409.addChild(&Appearance410);

IndexedFaceSet& IndexedFaceSet414 =  IndexedFaceSet();
IndexedFaceSet414.setDEF(CString("pCylinder4_0Geo_1"));
IndexedFaceSet414.setSolid(False);
IndexedFaceSet414.setConvex(False);
IndexedFaceSet414.setCreaseAngle(3.14159);
IndexedFaceSet414.setCoordIndex(new int32_t[]{0,9,8,4,-1,9,1,5,8,-1,1,11,10,5,-1,11,2,6,10,-1,2,13,12,6,-1,13,3,7,12,-1}, 30);
Coordinate& Coordinate415 =  Coordinate();
Coordinate415.setDEF(CString("pCylinder4GeoPoints_1"));
Coordinate415.setPoint(new float[]{47.754,1.786,-4.58,50.663,1.786,-3.463,53.085,1.786,-1.502,54.782,1.786,1.111,47.754,7.618,-4.58,50.663,7.618,-3.463,53.085,7.618,-1.502,54.782,7.618,1.111,49.2085,7.618,-4.0215,49.2085,1.786,-4.0215,51.874,7.618,-2.4825,51.874,1.786,-2.4825,53.9335,7.618,-0.1955,53.9335,1.786,-0.1955}, 42);
IndexedFaceSet414.setCoord(&Coordinate415);

Shape409.setGeometry(&IndexedFaceSet414);

Transform408.addChild(&Shape409);

Transform406.addChild(&Transform408);

Transform& Transform416 =  Transform();
Transform416.setTranslation(new float[]{-6.5536,0.00438076,-0.433264});
Transform416.setScale(new float[]{0.365073,0.365073,0.365073});
Shape& Shape417 =  Shape();
Appearance& Appearance418 =  Appearance();
Material& Material419 =  Material();
Material419.setUSE(CString("_17"));
Appearance418.addChild(&Material419);

ImageTexture& ImageTexture420 =  ImageTexture();
ImageTexture420.setUSE(CString("_18"));
Appearance418.addChild(&ImageTexture420);

TextureTransform& TextureTransform421 =  TextureTransform();
TextureTransform421.setTranslation(new float[]{0,0.64});
TextureTransform421.setRotation(1.06814);
TextureTransform421.setScale(new float[]{0.220545,1.07888});
Appearance418.setTextureTransform(TextureTransform421);

Shape417.addChild(&Appearance418);

IndexedFaceSet& IndexedFaceSet422 =  IndexedFaceSet();
IndexedFaceSet422.setDEF(CString("pCylinder3_0Geo_1"));
IndexedFaceSet422.setSolid(False);
IndexedFaceSet422.setConvex(False);
IndexedFaceSet422.setCreaseAngle(3.14159);
IndexedFaceSet422.setCoordIndex(new int32_t[]{2,9,8,6,-1,9,3,7,8,-1,1,11,10,5,-1,11,2,6,10,-1,0,13,12,4,-1,13,1,5,12,-1}, 30);
Coordinate& Coordinate423 =  Coordinate();
Coordinate423.setDEF(CString("pCylinder3GeoPoints_1"));
Coordinate423.setPoint(new float[]{47.754,1.786,14.335,50.663,1.786,13.218,53.085,1.786,11.257,54.782,1.786,8.643,47.754,7.618,14.335,50.663,7.618,13.218,53.085,7.618,11.257,54.782,7.618,8.643,53.9335,7.618,9.95,53.9335,1.786,9.95,51.874,7.618,12.2375,51.874,1.786,12.2375,49.2085,7.618,13.7765,49.2085,1.786,13.7765}, 42);
IndexedFaceSet422.setCoord(&Coordinate423);

Shape417.setGeometry(&IndexedFaceSet422);

Transform416.addChild(&Shape417);

Transform406.addChild(&Transform416);

Transform& Transform424 =  Transform();
Transform406.addChild(&Transform424);

Transform& Transform425 =  Transform();
Transform425.setDEF(CString("stage"));
Transform406.addChild(&Transform425);

Transform& Transform426 =  Transform();
Transform426.setTranslation(new float[]{11.3505,0.231815,1.36072});
Inline& Inline427 =  Inline();
Inline427.setUrl(new CString[]{CString("car.x3d")}, 1);
Inline427.setBboxSize(new float[]{8,8,8});
Transform426.addChild(&Inline427);

Transform406.addChild(&Transform426);

Transform& Transform428 =  Transform();
Transform428.setDEF(CString("akbg"));
Transform& Transform429 =  Transform();
Transform429.setDEF(CString("pCylinder4"));
Transform429.setTranslation(new float[]{-3.11232,0.502149,-0.549688});
Transform429.setScale(new float[]{0.297949,0.251754,0.297951});
Shape& Shape430 =  Shape();
Appearance& Appearance431 =  Appearance();
Material& Material432 =  Material();
Material432.setDEF(CString("_19"));
Material432.setAmbientIntensity(0.42623);
Material432.setDiffuseColor(new float[]{0.648936,0.634597,0.645351});
Material432.setSpecularColor(new float[]{0.62766,0.62766,0.62766});
Material432.setShininess(0.56383);
Appearance431.addChild(&Material432);

ImageTexture& ImageTexture433 =  ImageTexture();
ImageTexture433.setUrl(new CString[]{CString("nposter2.jpg")}, 1);
Appearance431.addChild(&ImageTexture433);

Shape430.addChild(&Appearance431);

IndexedFaceSet& IndexedFaceSet434 =  IndexedFaceSet();
IndexedFaceSet434.setDEF(CString("pCylinder4_0Geo"));
IndexedFaceSet434.setSolid(False);
IndexedFaceSet434.setConvex(False);
IndexedFaceSet434.setCreaseAngle(3.14159);
IndexedFaceSet434.setCoordIndex(new int32_t[]{0,9,8,4,-1,9,1,5,8,-1,1,11,10,5,-1,11,2,6,10,-1,2,13,12,6,-1,13,3,7,12,-1}, 30);
Coordinate& Coordinate435 =  Coordinate();
Coordinate435.setDEF(CString("pCylinder4GeoPoints"));
Coordinate435.setPoint(new float[]{47.754,1.786,-4.58,50.663,1.786,-3.463,53.085,1.786,-1.502,54.782,1.786,1.111,47.754,7.618,-4.58,50.663,7.618,-3.463,53.085,7.618,-1.502,54.782,7.618,1.111,49.2085,7.618,-4.0215,49.2085,1.786,-4.0215,51.874,7.618,-2.4825,51.874,1.786,-2.4825,53.9335,7.618,-0.1955,53.9335,1.786,-0.1955}, 42);
IndexedFaceSet434.setCoord(&Coordinate435);

Shape430.setGeometry(&IndexedFaceSet434);

Transform429.addChild(&Shape430);

Transform428.addChild(&Transform429);

Transform& Transform436 =  Transform();
Transform436.setTranslation(new float[]{9.53674e-7,-5.96046e-8,-0.207175});
Transform436.setScale(new float[]{1,1,1.62429});
Transform& Transform437 =  Transform();
Transform437.setTranslation(new float[]{14.9686,-0.925423,-1.95537});
Transform437.setRotation(new float[]{-8.30306e-8,1,7.69329e-8,4.71239});
Transform437.setScale(new float[]{4.57445,4.57445,4.57445});
Transform437.setScaleOrientation(new float[]{-1,0,0,0.785398});
Shape& Shape438 =  Shape();
Appearance& Appearance439 =  Appearance();
ImageTexture& ImageTexture440 =  ImageTexture();
ImageTexture440.setDEF(CString("_20"));
ImageTexture440.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance439.addChild(&ImageTexture440);

Shape438.addChild(&Appearance439);

IndexedFaceSet& IndexedFaceSet441 =  IndexedFaceSet();
IndexedFaceSet441.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate442 =  TextureCoordinate();
TextureCoordinate442.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet441.setTexCoord(&TextureCoordinate442);

Coordinate& Coordinate443 =  Coordinate();
Coordinate443.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet441.setCoord(&Coordinate443);

Shape438.setGeometry(&IndexedFaceSet441);

Transform437.addChild(&Shape438);

Transform436.addChild(&Transform437);

Transform& Transform444 =  Transform();
Transform444.setTranslation(new float[]{13.7997,0.0109082,-1.95537});
Transform444.setRotation(new float[]{0.577351,-0.57735,0.57735,2.0944});
Transform444.setScale(new float[]{4.57445,6.91218,4.57445});
Transform444.setScaleOrientation(new float[]{-2.34475e-7,1,9.33251e-9,1.5708});
Shape& Shape445 =  Shape();
Appearance& Appearance446 =  Appearance();
ImageTexture& ImageTexture447 =  ImageTexture();
ImageTexture447.setUSE(CString("_20"));
Appearance446.addChild(&ImageTexture447);

Shape445.addChild(&Appearance446);

IndexedFaceSet& IndexedFaceSet448 =  IndexedFaceSet();
IndexedFaceSet448.setCoordIndex(new int32_t[]{3,2,0,-1,2,1,0,-1}, 8);
TextureCoordinate& TextureCoordinate449 =  TextureCoordinate();
TextureCoordinate449.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet448.setTexCoord(&TextureCoordinate449);

Coordinate& Coordinate450 =  Coordinate();
Coordinate450.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet448.setCoord(&Coordinate450);

Shape445.setGeometry(&IndexedFaceSet448);

Transform444.addChild(&Shape445);

Transform436.addChild(&Transform444);

Transform428.addChild(&Transform436);

Transform& Transform451 =  Transform();
Transform451.setDEF(CString("pCylinder3"));
Transform451.setTranslation(new float[]{-2.60733,0.361017,0.451083});
Transform451.setScale(new float[]{0.2881,0.274828,0.2881});
Shape& Shape452 =  Shape();
Appearance& Appearance453 =  Appearance();
Material& Material454 =  Material();
Material454.setUSE(CString("_19"));
Appearance453.addChild(&Material454);

ImageTexture& ImageTexture455 =  ImageTexture();
ImageTexture455.setUrl(new CString[]{CString("nposter1.jpg")}, 1);
Appearance453.addChild(&ImageTexture455);

TextureTransform& TextureTransform456 =  TextureTransform();
TextureTransform456.setScale(new float[]{-1,1});
Appearance453.setTextureTransform(TextureTransform456);

Shape452.addChild(&Appearance453);

IndexedFaceSet& IndexedFaceSet457 =  IndexedFaceSet();
IndexedFaceSet457.setDEF(CString("pCylinder3_0Geo"));
IndexedFaceSet457.setSolid(False);
IndexedFaceSet457.setConvex(False);
IndexedFaceSet457.setCreaseAngle(3.14159);
IndexedFaceSet457.setCoordIndex(new int32_t[]{2,9,8,6,-1,9,3,7,8,-1,1,11,10,5,-1,11,2,6,10,-1,0,13,12,4,-1,13,1,5,12,-1}, 30);
Coordinate& Coordinate458 =  Coordinate();
Coordinate458.setDEF(CString("pCylinder3GeoPoints"));
Coordinate458.setPoint(new float[]{47.754,1.786,14.335,50.663,1.786,13.218,53.085,1.786,11.257,54.782,1.786,8.643,47.754,7.618,14.335,50.663,7.618,13.218,53.085,7.618,11.257,54.782,7.618,8.643,53.9335,7.618,9.95,53.9335,1.786,9.95,51.874,7.618,12.2375,51.874,1.786,12.2375,49.2085,7.618,13.7765,49.2085,1.786,13.7765}, 42);
IndexedFaceSet457.setCoord(&Coordinate458);

Shape452.setGeometry(&IndexedFaceSet457);

Transform451.addChild(&Shape452);

Transform428.addChild(&Transform451);

Transform& Transform459 =  Transform();
Transform459.setTranslation(new float[]{0,0,6.16764});
Transform459.setScale(new float[]{1,1,1.5012});
Transform& Transform460 =  Transform();
Transform460.setTranslation(new float[]{14.9686,-0.925423,-1.95537});
Transform460.setRotation(new float[]{-8.30306e-8,1,7.69329e-8,4.71239});
Transform460.setScale(new float[]{4.57445,4.57445,4.57445});
Transform460.setScaleOrientation(new float[]{-1,0,0,0.785398});
Shape& Shape461 =  Shape();
Appearance& Appearance462 =  Appearance();
ImageTexture& ImageTexture463 =  ImageTexture();
ImageTexture463.setUSE(CString("_20"));
Appearance462.addChild(&ImageTexture463);

Shape461.addChild(&Appearance462);

IndexedFaceSet& IndexedFaceSet464 =  IndexedFaceSet();
IndexedFaceSet464.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate465 =  TextureCoordinate();
TextureCoordinate465.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet464.setTexCoord(&TextureCoordinate465);

Coordinate& Coordinate466 =  Coordinate();
Coordinate466.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet464.setCoord(&Coordinate466);

Shape461.setGeometry(&IndexedFaceSet464);

Transform460.addChild(&Shape461);

Transform459.addChild(&Transform460);

Transform& Transform467 =  Transform();
Transform467.setTranslation(new float[]{13.7997,0.0109082,-1.95537});
Transform467.setRotation(new float[]{0.577351,-0.57735,0.57735,2.0944});
Transform467.setScale(new float[]{4.57445,6.91218,4.57445});
Transform467.setScaleOrientation(new float[]{-2.34497e-7,1,9.3416e-9,1.5708});
Shape& Shape468 =  Shape();
Appearance& Appearance469 =  Appearance();
ImageTexture& ImageTexture470 =  ImageTexture();
ImageTexture470.setUSE(CString("_20"));
Appearance469.addChild(&ImageTexture470);

Shape468.addChild(&Appearance469);

IndexedFaceSet& IndexedFaceSet471 =  IndexedFaceSet();
IndexedFaceSet471.setCoordIndex(new int32_t[]{3,2,0,-1,2,1,0,-1}, 8);
TextureCoordinate& TextureCoordinate472 =  TextureCoordinate();
TextureCoordinate472.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet471.setTexCoord(&TextureCoordinate472);

Coordinate& Coordinate473 =  Coordinate();
Coordinate473.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet471.setCoord(&Coordinate473);

Shape468.setGeometry(&IndexedFaceSet471);

Transform467.addChild(&Shape468);

Transform459.addChild(&Transform467);

Transform428.addChild(&Transform459);

Transform406.addChild(&Transform428);

Transform& Transform474 =  Transform();
Transform474.setDEF(CString("shad"));
Transform474.setTranslation(new float[]{10.942,0.00865527,1.28908});
Transform474.setRotation(new float[]{1,0,0,4.71239});
Transform474.setScale(new float[]{8.21366,8.21365,8.21365});
Shape& Shape475 =  Shape();
Appearance& Appearance476 =  Appearance();
ImageTexture& ImageTexture477 =  ImageTexture();
ImageTexture477.setUSE(CString("_20"));
Appearance476.addChild(&ImageTexture477);

Shape475.addChild(&Appearance476);

IndexedFaceSet& IndexedFaceSet478 =  IndexedFaceSet();
IndexedFaceSet478.setSolid(False);
IndexedFaceSet478.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate479 =  TextureCoordinate();
TextureCoordinate479.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet478.setTexCoord(&TextureCoordinate479);

Coordinate& Coordinate480 =  Coordinate();
Coordinate480.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet478.setCoord(&Coordinate480);

Shape475.setGeometry(&IndexedFaceSet478);

Transform474.addChild(&Shape475);

Transform406.addChild(&Transform474);

DirectionalLight& DirectionalLight481 =  DirectionalLight();
DirectionalLight481.setDEF(CString("Light2"));
DirectionalLight481.setDirection(new float[]{0.515609,-0.143424,0.844735});
Transform406.addChild(&DirectionalLight481);

Transform& Transform482 =  Transform();
Transform482.setTranslation(new float[]{3.2191,-0.0000389814,11.6614});
Transform482.setScale(new float[]{1.0001,1.00006,1.0001});
Transform& Transform483 =  Transform();
Transform483.setUSE(CString("_16"));
Transform482.addChild(&Transform483);

Transform406.addChild(&Transform482);

Transform265.addChild(&Transform406);

Transform& Transform484 =  Transform();
Transform484.setDEF(CString("poster2"));
Transform484.setTranslation(new float[]{14.6257,0,-3.19101});
Transform484.setRotation(new float[]{0,1,0,0.293104});
Transform& Transform485 =  Transform();
Transform485.setUSE(CString("_13"));
Transform484.addChild(&Transform485);

Transform265.addChild(&Transform484);

Transform11.addChild(&Transform265);

Collision10.addChildren(&Transform11);

Transform9.addChild(&Collision10);

Scene7.addChild(&Transform9);

Transform& Transform486 =  Transform();
Transform486.setDEF(CString("UserCollision"));
Transform& Transform487 =  Transform();
Transform487.setTranslation(new float[]{11.3972,0.989633,1.3678});
Transform487.setRotation(new float[]{-4.47035e-7,1,4.47035e-7,4.71239});
Transform487.setScale(new float[]{1.91962,0.597409,1.91962});
Shape& Shape488 =  Shape();
Appearance& Appearance489 =  Appearance();
Material& Material490 =  Material();
Material490.setTransparency(1);
Appearance489.addChild(&Material490);

Shape488.addChild(&Appearance489);

Cylinder& Cylinder491 =  Cylinder();
Shape488.setGeometry(&Cylinder491);

Transform487.addChild(&Shape488);

Transform486.addChild(&Transform487);

Transform& Transform492 =  Transform();
Transform492.setDEF(CString("coll"));
Transform492.setTranslation(new float[]{0.525815,0.445729,-0.475953});
Transform492.setScale(new float[]{15.1477,0.441349,8.29048});
Shape& Shape493 =  Shape();
Appearance& Appearance494 =  Appearance();
Material& Material495 =  Material();
Material495.setAmbientIntensity(0);
Material495.setDiffuseColor(new float[]{1,0.0142516,0});
Material495.setEmissiveColor(new float[]{0.106383,0.00151613,0});
Material495.setShininess(0);
Material495.setTransparency(1);
Appearance494.addChild(&Material495);

Shape493.addChild(&Appearance494);

IndexedFaceSet& IndexedFaceSet496 =  IndexedFaceSet();
IndexedFaceSet496.setCoordIndex(new int32_t[]{0,9,8,-1,0,1,9,-1,14,13,10,-1,13,11,10,-1,12,8,9,-1,12,15,8,-1,19,16,20,-1,16,17,20,-1,4,19,20,-1,4,5,19,-1,16,22,17,-1,22,21,17,-1,22,7,21,-1,7,6,21,-1,25,22,26,-1,25,7,22,-1,1,25,26,-1,27,23,28,-1,27,3,23,-1,19,5,28,-1,5,27,28,-1,28,18,29,-1,28,23,18,-1,11,24,29,18,-1,24,26,29,-1,16,19,29,-1,19,28,29,-1,26,16,29,-1,26,22,16,-1,25,1,30,-1,1,0,30,-1,6,25,30,-1,6,7,25,-1,27,4,31,-1,27,5,4,-1,3,31,2,-1,3,27,31,-1,24,11,13,-1,12,24,13,-1,12,9,24,-1,23,2,32,-1,23,3,2,-1,18,32,33,-1,18,23,32,-1,10,11,33,-1,11,18,33,-1,24,9,26,-1,9,1,26,-1}, 193);
Coordinate& Coordinate497 =  Coordinate();
Coordinate497.setPoint(new float[]{-0.877065,0.574281,0.837078,-0.877065,-1,0.837078,0.84012,0.574281,0.837078,0.84012,-1,0.837078,0.84012,0.574281,-0.885551,0.84012,-1,-0.885551,-0.877065,0.574281,-0.885551,-0.877065,-1,-0.885551,-0.663807,0.574281,0.837078,-0.663807,-1,0.837078,-0.307587,0.574281,0.837078,-0.307587,-1,0.837078,-0.663807,-1,1.02948,-0.307587,-1,1.02948,-0.307587,0.574281,1.02948,-0.663807,0.574281,1.02948,-0.0184725,-1,-0.885551,-0.0184725,0.574281,-0.885551,-0.0184725,-1,0.837078,0.410824,-1,-0.885551,0.410824,0.574281,-0.885551,-0.447769,0.574281,-0.885551,-0.447769,-1,-0.885551,0.410824,-1,0.837078,-0.447769,-1,0.837078,-0.877065,-1,-0.0242365,-0.447769,-1,-0.0242365,0.84012,-1,-0.0242365,0.410824,-1,-0.0242365,-0.0184725,-1,-0.0242365,-0.877065,0.574281,-0.0242365,0.84012,0.574281,-0.0242365,0.410824,0.574281,0.837078,-0.0184725,0.574281,0.837078}, 102);
IndexedFaceSet496.setCoord(&Coordinate497);

Shape493.setGeometry(&IndexedFaceSet496);

Transform492.addChild(&Shape493);

Transform486.addChild(&Transform492);

Scene7.addChild(&Transform486);

X3D0.setScene(&Scene7);

}
