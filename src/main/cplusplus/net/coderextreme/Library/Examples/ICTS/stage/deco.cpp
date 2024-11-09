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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Switcher"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Switcher_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("minValue"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("maxValue"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("prev"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("next"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("offset"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("whichChoice_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo15);

Transform& Transform16 =  Transform();
Transform16.setBboxSize(new float[]{79.18,8.643,80.31});
Transform16.setBboxCenter(new float[]{40.37,4.268,-39.8});
Transform& Transform17 =  Transform();
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("s1"));
Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{125.37,0,-14.9781});
Transform19.setRotation(new float[]{0,1,0,3.1416});
Transform& Transform20 =  Transform();
Transform20.setDEF(CString("_1"));
Transform20.setTranslation(new float[]{62.6844,2.97856,-0.126466});
Transform20.setRotation(new float[]{2.14324e-7,1,-7.05434e-7,3.14159});
Transform20.setScale(new float[]{0.999997,0.999999,0.999997});
Transform20.setScaleOrientation(new float[]{-4.92972e-8,1,-1.5979e-7,2.35619});
Inline& Inline21 =  Inline();
Inline21.setUrl(new CString[]{CString("statue.x3d")}, 1);
Inline21.setBboxSize(new float[]{2.53738,8.17662,1.36748});
Inline21.setBboxCenter(new float[]{-0.000528336,1.06796,0.197238});
Transform20.addChild(&Inline21);

Transform19.addChild(&Transform20);

Transform18.addChild(&Transform19);

Transform& Transform22 =  Transform();
Transform22.setUSE(CString("_1"));
Transform18.addChild(&Transform22);

Transform17.addChild(&Transform18);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("s2"));
Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{64.9331,0.0381114,19.3544});
Transform24.setRotation(new float[]{0,1,0,1.57079});
Transform& Transform25 =  Transform();
Transform25.setUSE(CString("_1"));
Transform24.addChild(&Transform25);

Transform23.addChild(&Transform24);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{54.9862,0.0380814,-109.304});
Transform26.setRotation(new float[]{-6.43132e-7,-1,6.57961e-7,1.5708});
Transform26.setScaleOrientation(new float[]{5.0504e-7,1,-1.29424e-7,2.35619});
Transform& Transform27 =  Transform();
Transform27.setUSE(CString("_1"));
Transform26.addChild(&Transform27);

Transform23.addChild(&Transform26);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{-4.33523,0.0380588,-34.9976});
Transform& Transform29 =  Transform();
Transform29.setUSE(CString("_1"));
Transform28.addChild(&Transform29);

Transform23.addChild(&Transform28);

Transform17.addChild(&Transform23);

Transform& Transform30 =  Transform();
Transform30.setDEF(CString("c1"));
Transform& Transform31 =  Transform();
Transform31.setDEF(CString("cat1"));
Transform& Transform32 =  Transform();
Transform32.setDEF(CString("_2"));
Transform32.setTranslation(new float[]{18.2842,0.0195997,-64.4897});
Inline& Inline33 =  Inline();
Inline33.setUrl(new CString[]{CString("katze.x3d")}, 1);
Inline33.setBboxSize(new float[]{8.13439,3.42439,1.81039});
Inline33.setBboxCenter(new float[]{0.239496,1.51194,5.96046e-8});
Transform32.addChild(&Inline33);

Transform31.addChild(&Transform32);

Transform30.addChild(&Transform31);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("cat2"));
Transform34.setTranslation(new float[]{0,0,4.04162});
Transform& Transform35 =  Transform();
Transform35.setUSE(CString("_2"));
Transform34.addChild(&Transform35);

Transform30.addChild(&Transform34);

Transform17.addChild(&Transform30);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("c2"));
Transform& Transform37 =  Transform();
Transform37.setDEF(CString("cat3"));
Transform37.setTranslation(new float[]{9.95345,0,0});
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("_3"));
Transform38.setTranslation(new float[]{55.4477,0.0226387,-76.2775});
Transform38.setRotation(new float[]{0,1,0,4.71239});
Transform38.setScale(new float[]{0.999998,0.999999,0.999998});
Inline& Inline39 =  Inline();
Inline39.setUrl(new CString[]{CString("katze.x3d")}, 1);
Inline39.setBboxSize(new float[]{8.13439,3.42439,1.81039});
Inline39.setBboxCenter(new float[]{0.239496,1.51194,5.96046e-8});
Transform38.addChild(&Inline39);

Transform37.addChild(&Transform38);

Transform36.addChild(&Transform37);

Transform& Transform40 =  Transform();
Transform40.setDEF(CString("cat4"));
Transform40.setTranslation(new float[]{14.1683,0,0});
Transform& Transform41 =  Transform();
Transform41.setUSE(CString("_3"));
Transform40.addChild(&Transform41);

Transform36.addChild(&Transform40);

Transform17.addChild(&Transform36);

Transform16.addChild(&Transform17);

Collision& Collision42 =  Collision();
Collision42.setEnabled(False);
Transform& Transform43 =  Transform();
Transform& Transform44 =  Transform();
Transform44.setDEF(CString("o2"));
Transform& Transform45 =  Transform();
Transform45.setDEF(CString("osiris3"));
Transform45.setTranslation(new float[]{44.8772,-0.191987,-5.01077});
Transform45.setRotation(new float[]{0,-1,0,1.57079});
Transform45.setScale(new float[]{0.999999,0.999999,0.999999});
Transform& Transform46 =  Transform();
Transform46.setDEF(CString("_4"));
Transform46.setTranslation(new float[]{2.63757,4.50009,-34.9554});
Transform46.setScale(new float[]{3.29392,3.29392,3.29393});
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setAmbientIntensity(0.16);
Material49.setDiffuseColor(new float[]{1,1,1});
Appearance48.addChild(&Material49);

ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setDEF(CString("_5"));
ImageTexture50.setUrl(new CString[]{CString("osiris-bump1.png")}, 1);
Appearance48.addChild(&ImageTexture50);

TextureTransform& TextureTransform51 =  TextureTransform();
TextureTransform51.setScale(new float[]{-1,1});
Appearance48.setTextureTransform(TextureTransform51);

Shape47.addChild(&Appearance48);

IndexedFaceSet& IndexedFaceSet52 =  IndexedFaceSet();
IndexedFaceSet52.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate53 =  TextureCoordinate();
TextureCoordinate53.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet52.setTexCoord(&TextureCoordinate53);

Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0}, 12);
IndexedFaceSet52.setCoord(&Coordinate54);

Shape47.setGeometry(&IndexedFaceSet52);

Transform46.addChild(&Shape47);

Transform45.addChild(&Transform46);

Transform44.addChild(&Transform45);

Transform& Transform55 =  Transform();
Transform55.setDEF(CString("osiris4"));
Transform55.setTranslation(new float[]{10.4897,3.32269,-62.3195});
Transform55.setRotation(new float[]{0,-1,0,1.5708});
Transform55.setScale(new float[]{2.53623,2.53622,2.53619});
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setAmbientIntensity(0.16);
Material58.setDiffuseColor(new float[]{1,1,1});
Appearance57.addChild(&Material58);

ImageTexture& ImageTexture59 =  ImageTexture();
ImageTexture59.setUSE(CString("_5"));
Appearance57.addChild(&ImageTexture59);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet60 =  IndexedFaceSet();
IndexedFaceSet60.setCcw(False);
IndexedFaceSet60.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate61 =  TextureCoordinate();
TextureCoordinate61.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet60.setTexCoord(&TextureCoordinate61);

Coordinate& Coordinate62 =  Coordinate();
Coordinate62.setPoint(new float[]{-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0}, 12);
IndexedFaceSet60.setCoord(&Coordinate62);

Shape56.setGeometry(&IndexedFaceSet60);

Transform55.addChild(&Shape56);

Transform44.addChild(&Transform55);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("o1"));
Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{0.662268,0.128732,-6.7524});
Transform64.setScale(new float[]{0.807081,0.807081,0.807058});
Transform& Transform65 =  Transform();
Transform65.setUSE(CString("_4"));
Transform64.addChild(&Transform65);

Transform63.addChild(&Transform64);

Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{29.8905,0.256301,-0.0143967});
Transform& Transform67 =  Transform();
Transform67.setUSE(CString("_4"));
Transform66.addChild(&Transform67);

Transform63.addChild(&Transform66);

Transform44.addChild(&Transform63);

Transform& Transform68 =  Transform();
Transform68.setDEF(CString("osiris5"));
Transform68.setTranslation(new float[]{62.4756,4.59252,-74.97});
Transform68.setScale(new float[]{3.77149,3.31668,2.87925});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
Material& Material71 =  Material();
Material71.setAmbientIntensity(0.16);
Material71.setDiffuseColor(new float[]{1,1,1});
Appearance70.addChild(&Material71);

ImageTexture& ImageTexture72 =  ImageTexture();
ImageTexture72.setUSE(CString("_5"));
Appearance70.addChild(&ImageTexture72);

Shape69.addChild(&Appearance70);

IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate74 =  TextureCoordinate();
TextureCoordinate74.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet73.setTexCoord(&TextureCoordinate74);

Coordinate& Coordinate75 =  Coordinate();
Coordinate75.setPoint(new float[]{-0.5,-1.1636,0,0.5,-1.1636,0,0.5,1.1636,0,-0.5,1.1636,0}, 12);
IndexedFaceSet73.setCoord(&Coordinate75);

Shape69.setGeometry(&IndexedFaceSet73);

Transform68.addChild(&Shape69);

Transform44.addChild(&Transform68);

Transform43.addChild(&Transform44);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("p2"));
Transform& Transform77 =  Transform();
Transform77.setDEF(CString("paint3"));
Transform77.setTranslation(new float[]{39.9659,4.63138,-17.3407});
Transform77.setRotation(new float[]{0,1,0,1.5708});
Transform77.setScale(new float[]{6.1494,7.70085,3.18781});
Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Material& Material80 =  Material();
Material80.setAmbientIntensity(0.16);
Material80.setDiffuseColor(new float[]{1,1,1});
Material80.setSpecularColor(new float[]{1,1,1});
Material80.setShininess(0.329787);
Appearance79.addChild(&Material80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setDEF(CString("_6"));
ImageTexture81.setUrl(new CString[]{CString("wallpaint1.jpg")}, 1);
Appearance79.addChild(&ImageTexture81);

Shape78.addChild(&Appearance79);

IndexedFaceSet& IndexedFaceSet82 =  IndexedFaceSet();
IndexedFaceSet82.setCcw(False);
IndexedFaceSet82.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate83 =  TextureCoordinate();
TextureCoordinate83.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet82.setTexCoord(&TextureCoordinate83);

Coordinate& Coordinate84 =  Coordinate();
Coordinate84.setPoint(new float[]{-2.0078,-0.5,0,2.0078,-0.5,0,2.0078,0.5,0,-2.0078,0.5,0}, 12);
IndexedFaceSet82.setCoord(&Coordinate84);

Shape78.setGeometry(&IndexedFaceSet82);

Transform77.addChild(&Shape78);

Transform76.addChild(&Transform77);

Transform& Transform85 =  Transform();
Transform85.setDEF(CString("paint2"));
Transform85.setTranslation(new float[]{35.0232,4.63138,-17.3407});
Transform85.setRotation(new float[]{0,1,0,1.5708});
Transform85.setScale(new float[]{6.1494,7.70085,3.18781});
Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Material& Material88 =  Material();
Material88.setAmbientIntensity(0.16);
Material88.setDiffuseColor(new float[]{1,1,1});
Appearance87.addChild(&Material88);

ImageTexture& ImageTexture89 =  ImageTexture();
ImageTexture89.setUSE(CString("_6"));
Appearance87.addChild(&ImageTexture89);

Shape86.addChild(&Appearance87);

IndexedFaceSet& IndexedFaceSet90 =  IndexedFaceSet();
IndexedFaceSet90.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate91 =  TextureCoordinate();
TextureCoordinate91.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet90.setTexCoord(&TextureCoordinate91);

Coordinate& Coordinate92 =  Coordinate();
Coordinate92.setPoint(new float[]{-2.0078,-0.5,0,2.0078,-0.5,0,2.0078,0.5,0,-2.0078,0.5,0}, 12);
IndexedFaceSet90.setCoord(&Coordinate92);

Shape86.setGeometry(&IndexedFaceSet90);

Transform85.addChild(&Shape86);

Transform76.addChild(&Transform85);

Transform43.addChild(&Transform76);

Transform& Transform93 =  Transform();
Transform93.setDEF(CString("hy1"));
Transform& Transform94 =  Transform();
Transform94.setDEF(CString("hyroglyphen3"));
Transform94.setTranslation(new float[]{27.6082,4.46924,-79.9542});
Transform94.setScale(new float[]{5.92555,3.78984,3.56043});
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Material97.setAmbientIntensity(0.16);
Material97.setDiffuseColor(new float[]{1,1,1});
Appearance96.addChild(&Material97);

ImageTexture& ImageTexture98 =  ImageTexture();
ImageTexture98.setDEF(CString("_7"));
ImageTexture98.setUrl(new CString[]{CString("schrift.jpg")}, 1);
Appearance96.addChild(&ImageTexture98);

TextureTransform& TextureTransform99 =  TextureTransform();
TextureTransform99.setScale(new float[]{3,2});
Appearance96.setTextureTransform(TextureTransform99);

Shape95.addChild(&Appearance96);

IndexedFaceSet& IndexedFaceSet100 =  IndexedFaceSet();
IndexedFaceSet100.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate101 =  TextureCoordinate();
TextureCoordinate101.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet100.setTexCoord(&TextureCoordinate101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0}, 12);
IndexedFaceSet100.setCoord(&Coordinate102);

Shape95.setGeometry(&IndexedFaceSet100);

Transform94.addChild(&Shape95);

Transform93.addChild(&Transform94);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("hyroglyphen4"));
Transform103.setTranslation(new float[]{37.6913,4.6328,-79.9542});
Transform103.setScale(new float[]{3.68301,3.62628,3.56043});
Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Material106.setAmbientIntensity(0.16);
Material106.setDiffuseColor(new float[]{1,1,1});
Appearance105.addChild(&Material106);

ImageTexture& ImageTexture107 =  ImageTexture();
ImageTexture107.setUSE(CString("_7"));
Appearance105.addChild(&ImageTexture107);

TextureTransform& TextureTransform108 =  TextureTransform();
TextureTransform108.setScale(new float[]{2,2});
Appearance105.setTextureTransform(TextureTransform108);

Shape104.addChild(&Appearance105);

IndexedFaceSet& IndexedFaceSet109 =  IndexedFaceSet();
IndexedFaceSet109.setCoordIndex(new int32_t[]{13,2,11,-1,2,9,11,-1,4,13,10,-1,13,11,10,-1,14,4,16,-1,4,10,16,-1,17,14,16,-1,17,1,14,-1,9,12,11,-1,9,7,12,-1,21,18,19,-1,21,3,18,-1,7,19,12,-1,7,21,19,-1,12,6,11,-1,6,10,11,-1,10,15,16,-1,10,6,15,-1,8,16,15,-1,8,17,16,-1,18,5,19,-1,5,20,19,-1,20,12,19,-1,20,6,12,-1,15,6,23,-1,6,20,23,-1,24,15,23,-1,24,8,15,-1,20,22,23,-1,20,5,22,-1,0,23,22,-1,0,24,23,-1}, 128);
TextureCoordinate& TextureCoordinate110 =  TextureCoordinate();
TextureCoordinate110.setPoint(new float[]{0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0}, 50);
IndexedFaceSet109.setTexCoord(&TextureCoordinate110);

Coordinate& Coordinate111 =  Coordinate();
Coordinate111.setPoint(new float[]{-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0,0.5,0,0,-0.5,0,0,0,0,0,0,1,0,0,-1,0,0.25,1,0,0.25,0,0,0.25,0.5,0,0,0.5,0,0.5,0.5,0,0.5,-0.5,0,0,-0.5,0,0.25,-0.5,0,0.25,-1,0,-0.5,0.5,0,-0.25,0.5,0,-0.25,0,0,-0.25,1,0,-0.5,-0.5,0,-0.25,-0.5,0,-0.25,-1,0}, 75);
IndexedFaceSet109.setCoord(&Coordinate111);

Shape104.setGeometry(&IndexedFaceSet109);

Transform103.addChild(&Shape104);

Transform93.addChild(&Transform103);

Transform& Transform112 =  Transform();
Transform112.setDEF(CString("hyroglyphen2"));
Transform112.setTranslation(new float[]{39.872,4.6328,-77.6183});
Transform112.setRotation(new float[]{0,1,0,1.5708});
Transform112.setScale(new float[]{3.68301,3.62628,3.56043});
Shape& Shape113 =  Shape();
Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setAmbientIntensity(0.16);
Material115.setDiffuseColor(new float[]{1,1,1});
Appearance114.addChild(&Material115);

ImageTexture& ImageTexture116 =  ImageTexture();
ImageTexture116.setUSE(CString("_7"));
Appearance114.addChild(&ImageTexture116);

TextureTransform& TextureTransform117 =  TextureTransform();
TextureTransform117.setDEF(CString("_8"));
TextureTransform117.setScale(new float[]{2,2});
Appearance114.setTextureTransform(TextureTransform117);

Shape113.addChild(&Appearance114);

IndexedFaceSet& IndexedFaceSet118 =  IndexedFaceSet();
IndexedFaceSet118.setCcw(False);
IndexedFaceSet118.setCoordIndex(new int32_t[]{13,9,11,-1,13,2,9,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,17,1,16,-1,1,14,16,-1,9,7,11,-1,7,12,11,-1,21,3,19,-1,3,18,19,-1,7,21,12,-1,21,19,12,-1,12,10,11,-1,12,6,10,-1,10,6,16,-1,6,15,16,-1,8,17,15,-1,17,16,15,-1,18,20,19,-1,18,5,20,-1,20,6,19,-1,6,12,19,-1,15,20,23,-1,15,6,20,-1,24,8,23,-1,8,15,23,-1,20,5,23,-1,5,22,23,-1,0,24,22,-1,24,23,22,-1}, 128);
TextureCoordinate& TextureCoordinate119 =  TextureCoordinate();
TextureCoordinate119.setPoint(new float[]{0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,0.5,0.5,1,0.5,0,0.75,1,0.75,0.5,0.75,0.75,0.5,0.75,1,0.75,1,0.25,0.5,0.25,0.75,0.25,0.75,0,0,0.75,0.25,0.75,0.25,0.5,0.25,1,0,0.25,0.25,0.25,0.25,0}, 50);
IndexedFaceSet118.setTexCoord(&TextureCoordinate119);

Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[]{-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0,0.5,0,0,-0.5,0,0,0,0,0,0,1,0,0,-1,0,0.25,1,0,0.25,0,0,0.25,0.5,0,0,0.5,0,0.5,0.5,0,0.5,-0.5,0,0,-0.5,0,0.25,-0.5,0,0.25,-1,0,-0.5,0.5,0,-0.25,0.5,0,-0.25,0,0,-0.25,1,0,-0.5,-0.5,0,-0.25,-0.5,0,-0.25,-1,0}, 75);
IndexedFaceSet118.setCoord(&Coordinate120);

Shape113.setGeometry(&IndexedFaceSet118);

Transform112.addChild(&Shape113);

Transform93.addChild(&Transform112);

Transform& Transform121 =  Transform();
Transform121.setDEF(CString("hyroglyphen1"));
Transform121.setTranslation(new float[]{2.6231,4.6328,-79.9542});
Transform121.setScale(new float[]{3.68301,3.62628,3.56043});
Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setAmbientIntensity(0.16);
Material124.setDiffuseColor(new float[]{1,1,1});
Appearance123.addChild(&Material124);

ImageTexture& ImageTexture125 =  ImageTexture();
ImageTexture125.setUSE(CString("_7"));
Appearance123.addChild(&ImageTexture125);

TextureTransform& TextureTransform126 =  TextureTransform();
TextureTransform126.setUSE(CString("_8"));
Appearance123.setTextureTransform(TextureTransform126);

Shape122.addChild(&Appearance123);

IndexedFaceSet& IndexedFaceSet127 =  IndexedFaceSet();
IndexedFaceSet127.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate128 =  TextureCoordinate();
TextureCoordinate128.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet127.setTexCoord(&TextureCoordinate128);

Coordinate& Coordinate129 =  Coordinate();
Coordinate129.setPoint(new float[]{-0.5,-1,0,0.5,-1,0,0.5,1,0,-0.5,1,0}, 12);
IndexedFaceSet127.setCoord(&Coordinate129);

Shape122.setGeometry(&IndexedFaceSet127);

Transform121.addChild(&Shape122);

Transform93.addChild(&Transform121);

Transform43.addChild(&Transform93);

Transform& Transform130 =  Transform();
Transform130.setDEF(CString("paint1_1"));
Transform& Transform131 =  Transform();
Transform131.setDEF(CString("paint1"));
Transform131.setTranslation(new float[]{79.9639,4.54995,-42.4807});
Transform131.setRotation(new float[]{0,1,0,4.71239});
Transform131.setScale(new float[]{16.1839,7.73213,3.74369});
Shape& Shape132 =  Shape();
Appearance& Appearance133 =  Appearance();
Material& Material134 =  Material();
Material134.setDEF(CString("_9"));
Material134.setAmbientIntensity(0.16);
Material134.setDiffuseColor(new float[]{1,1,1});
Appearance133.addChild(&Material134);

ImageTexture& ImageTexture135 =  ImageTexture();
ImageTexture135.setDEF(CString("_10"));
ImageTexture135.setUrl(new CString[]{CString("wallpaint1.jpg")}, 1);
Appearance133.addChild(&ImageTexture135);

TextureTransform& TextureTransform136 =  TextureTransform();
TextureTransform136.setDEF(CString("_11"));
TextureTransform136.setScale(new float[]{4,2});
Appearance133.setTextureTransform(TextureTransform136);

Shape132.addChild(&Appearance133);

IndexedFaceSet& IndexedFaceSet137 =  IndexedFaceSet();
IndexedFaceSet137.setCoordIndex(new int32_t[]{0,5,7,-1,5,6,7,-1,6,1,7,-1,6,4,1,-1,5,3,6,-1,3,8,6,-1,8,4,6,-1,8,2,4,-1}, 32);
TextureCoordinate& TextureCoordinate138 =  TextureCoordinate();
TextureCoordinate138.setPoint(new float[]{0,0,0,1,0.25,1,0.25,0,0.125,1,0.125,0,0.125,0.5,0,0.5,0.25,0.5}, 18);
IndexedFaceSet137.setTexCoord(&TextureCoordinate138);

Coordinate& Coordinate139 =  Coordinate();
Coordinate139.setPoint(new float[]{-2.0078,-0.5,0,-2.0078,0.5,0,-1.0039,0.5,0,-1.0039,-0.5,0,-1.50585,0.5,0,-1.50585,-0.5,0,-1.50585,0,0,-2.0078,0,0,-1.0039,0,0}, 27);
IndexedFaceSet137.setCoord(&Coordinate139);

Shape132.setGeometry(&IndexedFaceSet137);

Transform131.addChild(&Shape132);

Transform130.addChild(&Transform131);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{79.9639,4.54995,-42.4807});
Transform140.setRotation(new float[]{0,1,0,4.71239});
Transform140.setScale(new float[]{16.1839,7.73213,3.74369});
Shape& Shape141 =  Shape();
Appearance& Appearance142 =  Appearance();
Material& Material143 =  Material();
Material143.setUSE(CString("_9"));
Appearance142.addChild(&Material143);

ImageTexture& ImageTexture144 =  ImageTexture();
ImageTexture144.setUSE(CString("_10"));
Appearance142.addChild(&ImageTexture144);

TextureTransform& TextureTransform145 =  TextureTransform();
TextureTransform145.setUSE(CString("_11"));
Appearance142.setTextureTransform(TextureTransform145);

Shape141.addChild(&Appearance142);

IndexedFaceSet& IndexedFaceSet146 =  IndexedFaceSet();
IndexedFaceSet146.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1}, 32);
TextureCoordinate& TextureCoordinate147 =  TextureCoordinate();
TextureCoordinate147.setPoint(new float[]{0.25,0,0.375,0,0.25,0.5,0.375,0.5,0.5,0,0.25,1,0.375,1,0.5,0.5,0.5,1}, 18);
IndexedFaceSet146.setTexCoord(&TextureCoordinate147);

Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{-1.0039,-0.5,0,-0.50195,-0.5,0,-1.0039,0,0,-0.50195,0,0,0,-0.5,0,-1.0039,0.5,0,-0.50195,0.5,0,0,0,0,0,0.5,0}, 27);
IndexedFaceSet146.setCoord(&Coordinate148);

Shape141.setGeometry(&IndexedFaceSet146);

Transform140.addChild(&Shape141);

Transform130.addChild(&Transform140);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{79.9639,4.54995,-42.4807});
Transform149.setRotation(new float[]{0,1,0,4.71239});
Transform149.setScale(new float[]{16.1839,7.73213,3.74369});
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Material& Material152 =  Material();
Material152.setUSE(CString("_9"));
Appearance151.addChild(&Material152);

ImageTexture& ImageTexture153 =  ImageTexture();
ImageTexture153.setUSE(CString("_10"));
Appearance151.addChild(&ImageTexture153);

TextureTransform& TextureTransform154 =  TextureTransform();
TextureTransform154.setUSE(CString("_11"));
Appearance151.setTextureTransform(TextureTransform154);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet155 =  IndexedFaceSet();
IndexedFaceSet155.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1}, 32);
TextureCoordinate& TextureCoordinate156 =  TextureCoordinate();
TextureCoordinate156.setPoint(new float[]{0.5,0,0.625,0,0.5,0.5,0.625,0.5,0.75,0,0.5,1,0.625,1,0.75,0.5,0.75,1}, 18);
IndexedFaceSet155.setTexCoord(&TextureCoordinate156);

Coordinate& Coordinate157 =  Coordinate();
Coordinate157.setPoint(new float[]{0,-0.5,0,0.50195,-0.5,0,0,0,0,0.50195,0,0,1.0039,-0.5,0,0,0.5,0,0.50195,0.5,0,1.0039,0,0,1.0039,0.5,0}, 27);
IndexedFaceSet155.setCoord(&Coordinate157);

Shape150.setGeometry(&IndexedFaceSet155);

Transform149.addChild(&Shape150);

Transform130.addChild(&Transform149);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{79.9639,4.54995,-42.4807});
Transform158.setRotation(new float[]{0,1,0,4.71239});
Transform158.setScale(new float[]{16.1839,7.73213,3.74369});
Shape& Shape159 =  Shape();
Appearance& Appearance160 =  Appearance();
Material& Material161 =  Material();
Material161.setUSE(CString("_9"));
Appearance160.addChild(&Material161);

ImageTexture& ImageTexture162 =  ImageTexture();
ImageTexture162.setUSE(CString("_10"));
Appearance160.addChild(&ImageTexture162);

TextureTransform& TextureTransform163 =  TextureTransform();
TextureTransform163.setUSE(CString("_11"));
Appearance160.setTextureTransform(TextureTransform163);

Shape159.addChild(&Appearance160);

IndexedFaceSet& IndexedFaceSet164 =  IndexedFaceSet();
IndexedFaceSet164.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,5,2,-1,3,6,5,-1,4,7,3,-1,7,6,3,-1,7,8,6,-1}, 32);
TextureCoordinate& TextureCoordinate165 =  TextureCoordinate();
TextureCoordinate165.setPoint(new float[]{0.75,0,0.875,0,0.75,0.5,0.875,0.5,1,0,0.75,1,0.875,1,1,0.5,1,1}, 18);
IndexedFaceSet164.setTexCoord(&TextureCoordinate165);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{1.0039,-0.5,0,1.50585,-0.5,0,1.0039,0,0,1.50585,0,0,2.0078,-0.5,0,1.0039,0.5,0,1.50585,0.5,0,2.0078,0,0,2.0078,0.5,0}, 27);
IndexedFaceSet164.setCoord(&Coordinate166);

Shape159.setGeometry(&IndexedFaceSet164);

Transform158.addChild(&Shape159);

Transform130.addChild(&Transform158);

Transform43.addChild(&Transform130);

Collision42.addChildren(&Transform43);

Transform16.addChild(&Collision42);

Scene7.addChild(&Transform16);

X3D0.setScene(&Scene7);

}
