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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:21 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:21 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Group& Group9 =  Group();
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("empfang"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("colums-s"));
Transform& Transform12 =  Transform();
Transform& Transform13 =  Transform();
Transform13.setTranslation(new float[]{-23.2504,0.486157,-9.90131});
Transform13.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform13.setScale(new float[]{0.247386,2.11348,0.247385});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setAmbientIntensity(0.485161);
Material16.setDiffuseColor(new float[]{0.329787,0.329787,0.329787});
Material16.setSpecularColor(new float[]{1,1,1});
Material16.setShininess(0.234043);
Appearance15.addChild(&Material16);

Shape14.addChild(&Appearance15);

IndexedFaceSet& IndexedFaceSet17 =  IndexedFaceSet();
IndexedFaceSet17.setCreaseAngle(3.14159);
IndexedFaceSet17.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet17.setCoord(&Coordinate18);

Shape14.setGeometry(&IndexedFaceSet17);

Transform13.addChild(&Shape14);

Transform12.addChild(&Transform13);

Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{-23.2504,2.07797,-9.90131});
Transform19.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform19.setScale(new float[]{0.313275,8.42596,0.313274});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setAmbientIntensity(0.195325);
Material22.setDiffuseColor(new float[]{0.819149,0.690807,0});
Material22.setSpecularColor(new float[]{1,1,1});
Material22.setShininess(0.234043);
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setCreaseAngle(3.14159);
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet23.setCoord(&Coordinate24);

Shape20.setGeometry(&IndexedFaceSet23);

Transform19.addChild(&Shape20);

Transform12.addChild(&Transform19);

Transform11.addChild(&Transform12);

Transform& Transform25 =  Transform();
Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{-23.2504,0.486157,-6.39379});
Transform26.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform26.setScale(new float[]{0.247386,2.11348,0.247385});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setAmbientIntensity(0.485161);
Material29.setDiffuseColor(new float[]{0.329787,0.329787,0.329787});
Material29.setSpecularColor(new float[]{1,1,1});
Material29.setShininess(0.234043);
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

IndexedFaceSet& IndexedFaceSet30 =  IndexedFaceSet();
IndexedFaceSet30.setCreaseAngle(3.14159);
IndexedFaceSet30.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate31 =  Coordinate();
Coordinate31.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet30.setCoord(&Coordinate31);

Shape27.setGeometry(&IndexedFaceSet30);

Transform26.addChild(&Shape27);

Transform25.addChild(&Transform26);

Transform& Transform32 =  Transform();
Transform32.setTranslation(new float[]{-23.2504,2.07797,-6.39379});
Transform32.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform32.setScale(new float[]{0.313275,8.42596,0.313274});
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
Material& Material35 =  Material();
Material35.setAmbientIntensity(0.195325);
Material35.setDiffuseColor(new float[]{0.819149,0.690807,0});
Material35.setSpecularColor(new float[]{1,1,1});
Material35.setShininess(0.234043);
Appearance34.addChild(&Material35);

Shape33.addChild(&Appearance34);

IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setCreaseAngle(3.14159);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet36.setCoord(&Coordinate37);

Shape33.setGeometry(&IndexedFaceSet36);

Transform32.addChild(&Shape33);

Transform25.addChild(&Transform32);

Transform11.addChild(&Transform25);

Transform& Transform38 =  Transform();
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{-23.2504,0.486157,-3.0045});
Transform39.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform39.setScale(new float[]{0.247386,2.11348,0.247385});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setAmbientIntensity(0.485161);
Material42.setDiffuseColor(new float[]{0.329787,0.329787,0.329787});
Material42.setSpecularColor(new float[]{1,1,1});
Material42.setShininess(0.234043);
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setCreaseAngle(3.14159);
IndexedFaceSet43.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet43.setCoord(&Coordinate44);

Shape40.setGeometry(&IndexedFaceSet43);

Transform39.addChild(&Shape40);

Transform38.addChild(&Transform39);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{-23.2504,2.07797,-3.0045});
Transform45.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform45.setScale(new float[]{0.313275,8.42596,0.313274});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setAmbientIntensity(0.195325);
Material48.setDiffuseColor(new float[]{0.819149,0.690807,0});
Material48.setSpecularColor(new float[]{1,1,1});
Material48.setShininess(0.234043);
Appearance47.addChild(&Material48);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet49 =  IndexedFaceSet();
IndexedFaceSet49.setCreaseAngle(3.14159);
IndexedFaceSet49.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate50 =  Coordinate();
Coordinate50.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet49.setCoord(&Coordinate50);

Shape46.setGeometry(&IndexedFaceSet49);

Transform45.addChild(&Shape46);

Transform38.addChild(&Transform45);

Transform11.addChild(&Transform38);

Transform10.addChild(&Transform11);

Transform& Transform51 =  Transform();
Transform51.setDEF(CString("columns-f"));
Transform& Transform52 =  Transform();
Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{-18.7642,0.486157,0.48752});
Transform53.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform53.setScale(new float[]{0.247386,2.11348,0.247385});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setAmbientIntensity(0.485161);
Material56.setDiffuseColor(new float[]{0.329787,0.329787,0.329787});
Material56.setSpecularColor(new float[]{1,1,1});
Material56.setShininess(0.234043);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet57 =  IndexedFaceSet();
IndexedFaceSet57.setCreaseAngle(3.14159);
IndexedFaceSet57.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet57.setCoord(&Coordinate58);

Shape54.setGeometry(&IndexedFaceSet57);

Transform53.addChild(&Shape54);

Transform52.addChild(&Transform53);

Transform& Transform59 =  Transform();
Transform59.setTranslation(new float[]{-18.7642,2.07797,0.48752});
Transform59.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform59.setScale(new float[]{0.313275,8.42596,0.313274});
Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
Material& Material62 =  Material();
Material62.setAmbientIntensity(0.195325);
Material62.setDiffuseColor(new float[]{0.819149,0.690807,0});
Material62.setSpecularColor(new float[]{1,1,1});
Material62.setShininess(0.234043);
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

IndexedFaceSet& IndexedFaceSet63 =  IndexedFaceSet();
IndexedFaceSet63.setCreaseAngle(3.14159);
IndexedFaceSet63.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate64 =  Coordinate();
Coordinate64.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet63.setCoord(&Coordinate64);

Shape60.setGeometry(&IndexedFaceSet63);

Transform59.addChild(&Shape60);

Transform52.addChild(&Transform59);

Transform51.addChild(&Transform52);

Transform& Transform65 =  Transform();
Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{-14.8845,0.486157,0.48752});
Transform66.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform66.setScale(new float[]{0.247386,2.11348,0.247385});
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Material69.setAmbientIntensity(0.485161);
Material69.setDiffuseColor(new float[]{0.329787,0.329787,0.329787});
Material69.setSpecularColor(new float[]{1,1,1});
Material69.setShininess(0.234043);
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

IndexedFaceSet& IndexedFaceSet70 =  IndexedFaceSet();
IndexedFaceSet70.setCreaseAngle(3.14159);
IndexedFaceSet70.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate71 =  Coordinate();
Coordinate71.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet70.setCoord(&Coordinate71);

Shape67.setGeometry(&IndexedFaceSet70);

Transform66.addChild(&Shape67);

Transform65.addChild(&Transform66);

Transform& Transform72 =  Transform();
Transform72.setTranslation(new float[]{-14.8845,2.07797,0.48752});
Transform72.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform72.setScale(new float[]{0.313275,8.42596,0.313274});
Shape& Shape73 =  Shape();
Appearance& Appearance74 =  Appearance();
Material& Material75 =  Material();
Material75.setAmbientIntensity(0.195325);
Material75.setDiffuseColor(new float[]{0.819149,0.690807,0});
Material75.setSpecularColor(new float[]{1,1,1});
Material75.setShininess(0.234043);
Appearance74.addChild(&Material75);

Shape73.addChild(&Appearance74);

IndexedFaceSet& IndexedFaceSet76 =  IndexedFaceSet();
IndexedFaceSet76.setCreaseAngle(3.14159);
IndexedFaceSet76.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate77 =  Coordinate();
Coordinate77.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet76.setCoord(&Coordinate77);

Shape73.setGeometry(&IndexedFaceSet76);

Transform72.addChild(&Shape73);

Transform65.addChild(&Transform72);

Transform51.addChild(&Transform65);

Transform& Transform78 =  Transform();
Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{-11.0626,0.486157,0.48752});
Transform79.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform79.setScale(new float[]{0.247386,2.11348,0.247385});
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Material82.setAmbientIntensity(0.485161);
Material82.setDiffuseColor(new float[]{0.329787,0.329787,0.329787});
Material82.setSpecularColor(new float[]{1,1,1});
Material82.setShininess(0.234043);
Appearance81.addChild(&Material82);

Shape80.addChild(&Appearance81);

IndexedFaceSet& IndexedFaceSet83 =  IndexedFaceSet();
IndexedFaceSet83.setCreaseAngle(3.14159);
IndexedFaceSet83.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate84 =  Coordinate();
Coordinate84.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet83.setCoord(&Coordinate84);

Shape80.setGeometry(&IndexedFaceSet83);

Transform79.addChild(&Shape80);

Transform78.addChild(&Transform79);

Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{-11.0626,2.07797,0.48752});
Transform85.setRotation(new float[]{-1.78814e-7,-1,1.78814e-7,1.5708});
Transform85.setScale(new float[]{0.313275,8.42596,0.313274});
Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Material& Material88 =  Material();
Material88.setAmbientIntensity(0.195325);
Material88.setDiffuseColor(new float[]{0.819149,0.690807,0});
Material88.setSpecularColor(new float[]{1,1,1});
Material88.setShininess(0.234043);
Appearance87.addChild(&Material88);

Shape86.addChild(&Appearance87);

IndexedFaceSet& IndexedFaceSet89 =  IndexedFaceSet();
IndexedFaceSet89.setCreaseAngle(3.14159);
IndexedFaceSet89.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1}, 80);
Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{0,-0.206261,-1,0,0.206261,-1,0.382683,-0.206261,-0.92388,0.382683,0.206261,-0.92388,0.707107,-0.206261,-0.707107,0.707107,0.206261,-0.707107,0.92388,-0.206261,-0.382683,0.92388,0.206261,-0.382683,1,-0.206261,4.37114e-8,1,0.206261,4.37114e-8,0.92388,-0.206261,0.382684,0.92388,0.206261,0.382684,0.707107,-0.206261,0.707107,0.707107,0.206261,0.707107,0.382683,-0.206261,0.92388,0.382683,0.206261,0.92388,1.50996e-7,-0.206261,1,1.50996e-7,0.206261,1,-0.382683,-0.206261,0.92388,-0.382683,0.206261,0.92388,-0.707107,-0.206261,0.707107,-0.707107,0.206261,0.707107,-0.92388,-0.206261,0.382684,-0.92388,0.206261,0.382684,-1,-0.206261,-1.19249e-8,-1,0.206261,-1.19249e-8,-0.923879,-0.206261,-0.382684,-0.923879,0.206261,-0.382684,-0.707107,-0.206261,-0.707107,-0.707107,0.206261,-0.707107,-0.382683,-0.206261,-0.92388,-0.382683,0.206261,-0.92388}, 96);
IndexedFaceSet89.setCoord(&Coordinate90);

Shape86.setGeometry(&IndexedFaceSet89);

Transform85.addChild(&Shape86);

Transform78.addChild(&Transform85);

Transform51.addChild(&Transform78);

Transform10.addChild(&Transform51);

Group9.addChild(&Transform10);

Transform& Transform91 =  Transform();
Transform91.setTranslation(new float[]{-20.4106,1.86114,-13.9086});
Transform91.setScale(new float[]{2.95367,1.93275,1});
Shape& Shape92 =  Shape();
Appearance& Appearance93 =  Appearance();
Material& Material94 =  Material();
Material94.setEmissiveColor(new float[]{0.680851,0.309051,0});
Appearance93.addChild(&Material94);

Shape92.addChild(&Appearance93);

IndexedFaceSet& IndexedFaceSet95 =  IndexedFaceSet();
IndexedFaceSet95.setCoordIndex(new int32_t[]{0,2,3,1,-1,4,0,1,5,-1}, 10);
Coordinate& Coordinate96 =  Coordinate();
Coordinate96.setPoint(new float[]{4.65652,1,-3.00243,4.65652,-1,-3.00243,0.193913,1,-3.01819,0.193913,-1,-3.01819,4.6271,1,10.9606,4.6271,-1,10.9606}, 18);
IndexedFaceSet95.setCoord(&Coordinate96);

Shape92.setGeometry(&IndexedFaceSet95);

Transform91.addChild(&Shape92);

Group9.addChild(&Transform91);

Transform& Transform97 =  Transform();
Transform97.setTranslation(new float[]{-20.6814,3.64444,-13.8491});
Transform97.setScale(new float[]{3.0118,0.103156,1.01968});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Material100.setDEF(CString("_1"));
Material100.setAmbientIntensity(0);
Material100.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance99.addChild(&Material100);

Shape98.addChild(&Appearance99);

IndexedFaceSet& IndexedFaceSet101 =  IndexedFaceSet();
IndexedFaceSet101.setCreaseAngle(1.41564);
IndexedFaceSet101.setCoordIndex(new int32_t[]{0,1,4,5,-1,7,6,8,9,-1,7,9,5,4,-1,10,8,6,11,-1,14,13,10,11,-1,12,14,11,16,15,-1,11,6,7,4,16,-1,4,1,3,2,16,-1,2,15,16,-1}, 47);
Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{-0.885123,1,1.13572,-0.885123,-1,1.13572,4.65652,-1,-3.00243,-0.885123,-1,-3.0224,0.190682,-1,1.13572,0.190682,1,1.13572,1.33959,-1,10.8945,0.190682,-1,8.31051,1.33959,1,10.8945,0.190682,1,8.31051,4.28299,1,10.9124,4.28299,-1,10.9124,4.62172,-1,13.5132,4.26598,1,13.511,4.26598,-1,13.511,4.64791,-1,1.08192,4.38454,-1,1.07708}, 51);
IndexedFaceSet101.setCoord(&Coordinate102);

Shape98.setGeometry(&IndexedFaceSet101);

Transform97.addChild(&Shape98);

Group9.addChild(&Transform97);

Switch& Switch103 =  Switch();
Switch103.setWhichChoice(1);
Transform& Transform104 =  Transform();
Transform104.setDEF(CString("off"));
Transform& Transform105 =  Transform();
Transform& Transform106 =  Transform();
Transform106.setTranslation(new float[]{-19.9231,11.7638,-6.3469});
Transform106.setRotation(new float[]{0,1,0,1.5708});
Transform106.setScale(new float[]{12.8772,23.5669,3.17457});
Shape& Shape107 =  Shape();
Appearance& Appearance108 =  Appearance();
Material& Material109 =  Material();
Material109.setAmbientIntensity(0.195325);
Material109.setDiffuseColor(new float[]{0.819149,0.819149,0.819149});
Appearance108.addChild(&Material109);

ImageTexture& ImageTexture110 =  ImageTexture();
ImageTexture110.setDEF(CString("_2"));
ImageTexture110.setUrl(new CString[]{CString("front-glass-spec.png")}, 1);
Appearance108.addChild(&ImageTexture110);

TextureTransform& TextureTransform111 =  TextureTransform();
TextureTransform111.setScale(new float[]{2.27368,1});
Appearance108.setTextureTransform(TextureTransform111);

Shape107.addChild(&Appearance108);

IndexedFaceSet& IndexedFaceSet112 =  IndexedFaceSet();
IndexedFaceSet112.setSolid(False);
IndexedFaceSet112.setTexCoordIndex(new int32_t[]{7,3,4,6,-1,9,0,1,8,-1,7,6,5,2,-1}, 15);
IndexedFaceSet112.setCoordIndex(new int32_t[]{5,2,3,4,-1,7,0,1,6,-1,5,4,6,7,-1}, 15);
TextureCoordinate& TextureCoordinate113 =  TextureCoordinate();
TextureCoordinate113.setPoint(new float[]{1,0,1,0.159551,0,0,1,0,1,0.160364,0,0.160364,0.336684,0.160364,0.336684,0,0.442841,0.159551,0.442841,0}, 20);
IndexedFaceSet112.setTexCoord(&TextureCoordinate113);

Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{0.5,-0.5,0,0.5,-0.340449,0,-0.262425,-0.5,3.91537,-0.262425,-0.339636,3.91537,-0.262424,-0.339636,1.0594,-0.262424,-0.5,1.0594,-0.057159,-0.340449,0,-0.057159,-0.5,0}, 24);
IndexedFaceSet112.setCoord(&Coordinate114);

Shape107.setGeometry(&IndexedFaceSet112);

Transform106.addChild(&Shape107);

Transform105.addChild(&Transform106);

Transform& Transform115 =  Transform();
Transform115.setTranslation(new float[]{-26.1946,11.598,-12.8273});
Transform115.setRotation(new float[]{0,1,0,3.13837});
Transform115.setScale(new float[]{12.8772,23.0956,3.17457});
Shape& Shape116 =  Shape();
Appearance& Appearance117 =  Appearance();
Material& Material118 =  Material();
Material118.setAmbientIntensity(0.195325);
Material118.setDiffuseColor(new float[]{0.819149,0.819149,0.819149});
Appearance117.addChild(&Material118);

ImageTexture& ImageTexture119 =  ImageTexture();
ImageTexture119.setUSE(CString("_2"));
Appearance117.addChild(&ImageTexture119);

TextureTransform& TextureTransform120 =  TextureTransform();
TextureTransform120.setScale(new float[]{2.27368,1});
Appearance117.setTextureTransform(TextureTransform120);

Shape116.addChild(&Appearance117);

IndexedFaceSet& IndexedFaceSet121 =  IndexedFaceSet();
IndexedFaceSet121.setSolid(False);
IndexedFaceSet121.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate122 =  TextureCoordinate();
TextureCoordinate122.setPoint(new float[]{0,0,0,0.159551,0.227388,0.159551,0.227388,0}, 8);
IndexedFaceSet121.setTexCoord(&TextureCoordinate122);

Coordinate& Coordinate123 =  Coordinate();
Coordinate123.setPoint(new float[]{-0.5,-0.5,0,-0.5,-0.340449,0,-0.220418,-0.340449,0.0247648,-0.220418,-0.5,0.0247648}, 12);
IndexedFaceSet121.setCoord(&Coordinate123);

Shape116.setGeometry(&IndexedFaceSet121);

Transform115.addChild(&Shape116);

Transform105.addChild(&Transform115);

Transform& Transform124 =  Transform();
Transform124.setTranslation(new float[]{-7.53036,11.598,-6.51683});
Transform124.setRotation(new float[]{0,1,0,1.57078});
Transform124.setScale(new float[]{12.8772,23.0956,3.17456});
Shape& Shape125 =  Shape();
Appearance& Appearance126 =  Appearance();
Material& Material127 =  Material();
Material127.setAmbientIntensity(0.195325);
Material127.setDiffuseColor(new float[]{0.819149,0.819149,0.819149});
Appearance126.addChild(&Material127);

ImageTexture& ImageTexture128 =  ImageTexture();
ImageTexture128.setUSE(CString("_2"));
Appearance126.addChild(&ImageTexture128);

TextureTransform& TextureTransform129 =  TextureTransform();
TextureTransform129.setScale(new float[]{2.27368,1});
Appearance126.setTextureTransform(TextureTransform129);

Shape125.addChild(&Appearance126);

IndexedFaceSet& IndexedFaceSet130 =  IndexedFaceSet();
IndexedFaceSet130.setSolid(False);
IndexedFaceSet130.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate131 =  TextureCoordinate();
TextureCoordinate131.setPoint(new float[]{0,0,0,0.159551,0.227388,0.159551,0.227388,0}, 8);
IndexedFaceSet130.setTexCoord(&TextureCoordinate131);

Coordinate& Coordinate132 =  Coordinate();
Coordinate132.setPoint(new float[]{-0.5,-0.5,0,-0.5,-0.340449,0,-0.272612,-0.340449,0,-0.272612,-0.5,0}, 12);
IndexedFaceSet130.setCoord(&Coordinate132);

Shape125.setGeometry(&IndexedFaceSet130);

Transform124.addChild(&Shape125);

Transform105.addChild(&Transform124);

Transform104.addChild(&Transform105);

Switch103.addChild(&Transform104);

Transform& Transform133 =  Transform();
Switch103.addChild(&Transform133);

Group9.addChild(&Switch103);

Transform& Transform134 =  Transform();
Transform134.setTranslation(new float[]{-20.4106,1.99423,-13.9086});
Transform134.setScale(new float[]{2.95367,1.68318,1});
Shape& Shape135 =  Shape();
Appearance& Appearance136 =  Appearance();
Material& Material137 =  Material();
Material137.setAmbientIntensity(1.07429);
Material137.setDiffuseColor(new float[]{0.148936,0.0655686,0.0153947});
Material137.setSpecularColor(new float[]{1,0.440246,0.103365});
Material137.setTransparency(0.382979);
Appearance136.addChild(&Material137);

Shape135.addChild(&Appearance136);

IndexedFaceSet& IndexedFaceSet138 =  IndexedFaceSet();
IndexedFaceSet138.setCoordIndex(new int32_t[]{10,11,8,9,-1,8,15,14,9,-1,15,13,12,14,-1,13,17,16,12,-1,17,6,5,16,-1,4,19,18,7,-1,19,5,6,18,-1,20,23,22,21,-1,23,3,2,22,-1,4,7,24,25,-1,24,20,21,25,-1,0,1,26,27,-1,26,2,3,27,-1}, 65);
Coordinate& Coordinate139 =  Coordinate();
Coordinate139.setPoint(new float[]{-1,1,1,-1,-1,1,0.190682,-1,1,0.190682,1,1,0.190682,-1,8.31051,1.31406,-1,10.9131,1.31406,1,10.9131,0.190682,1,8.31051,4.36378,1,10.9317,4.36378,-1,10.9317,4.34614,-1,13.831,4.34614,1,13.831,2.83892,-1,10.9224,2.83892,1,10.9224,3.60135,-1,10.927,3.60135,1,10.927,2.07649,-1,10.9177,2.07649,1,10.9177,0.752371,1,9.6118,0.752371,-1,9.6118,0.190682,1,4.65525,0.190682,-1,4.65525,0.190682,-1,2.82763,0.190682,1,2.82763,0.190682,1,6.48288,0.190682,-1,6.48288,-0.404659,-1,1,-0.404659,1,1}, 84);
IndexedFaceSet138.setCoord(&Coordinate139);

Shape135.setGeometry(&IndexedFaceSet138);

Transform134.addChild(&Shape135);

Group9.addChild(&Transform134);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{-20.6814,0.348628,-13.8491});
Transform140.setScale(new float[]{3.0118,0.103156,1.01968});
Shape& Shape141 =  Shape();
Appearance& Appearance142 =  Appearance();
Material& Material143 =  Material();
Material143.setUSE(CString("_1"));
Appearance142.addChild(&Material143);

Shape141.addChild(&Appearance142);

IndexedFaceSet& IndexedFaceSet144 =  IndexedFaceSet();
IndexedFaceSet144.setCreaseAngle(1.41564);
IndexedFaceSet144.setCoordIndex(new int32_t[]{2,3,5,4,-1,0,1,6,7,-1,9,8,10,11,-1,9,11,7,6,-1,14,15,16,17,-1,12,10,8,13,-1,17,16,12,13,-1,20,3,2,18,15,14,-1,7,11,10,12,19,-1,12,16,15,18,19,-1,2,19,18,-1,2,4,0,7,19,-1}, 64);
Coordinate& Coordinate145 =  Coordinate();
Coordinate145.setPoint(new float[]{-0.885123,1,1.13572,-0.885123,-1,1.13572,4.65652,1,-3.00243,4.65652,-1,-3.00243,-0.885123,1,-3.0224,-0.885123,-1,-3.0224,0.190682,-1,1.13572,0.190682,1,1.13572,1.33959,-1,10.8945,0.190682,-1,8.31051,1.33959,1,10.8945,0.190682,1,8.31051,4.28299,1,10.9124,4.28299,-1,10.9124,4.62172,-1,13.5132,4.62172,1,13.5132,4.26598,1,13.511,4.26598,-1,13.511,4.64791,1,1.08192,4.38454,1,1.07708,4.64791,-1,1.08192}, 63);
IndexedFaceSet144.setCoord(&Coordinate145);

Shape141.setGeometry(&IndexedFaceSet144);

Transform140.addChild(&Shape141);

Group9.addChild(&Transform140);

Transform& Transform146 =  Transform();
Transform146.setDEF(CString("tilefloor"));
Transform146.setTranslation(new float[]{-20.4106,2.25017,-13.9086});
Transform146.setScale(new float[]{2.95367,1.93275,1});
Shape& Shape147 =  Shape();
Appearance& Appearance148 =  Appearance();
ImageTexture& ImageTexture149 =  ImageTexture();
ImageTexture149.setDEF(CString("_3"));
ImageTexture149.setUrl(new CString[]{CString("floor-empfang.jpg")}, 1);
Appearance148.addChild(&ImageTexture149);

TextureTransform& TextureTransform150 =  TextureTransform();
TextureTransform150.setScale(new float[]{15,15});
Appearance148.setTextureTransform(TextureTransform150);

Shape147.addChild(&Appearance148);

IndexedFaceSet& IndexedFaceSet151 =  IndexedFaceSet();
IndexedFaceSet151.setTexCoordIndex(new int32_t[]{0,1,3,-1,1,7,3,-1,0,3,8,-1,0,8,4,-1,5,2,6,-1,0,5,6,-1,0,4,5,-1}, 28);
IndexedFaceSet151.setCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1,0,3,4,-1,0,4,5,-1,6,7,8,-1,0,6,8,-1,0,5,6,-1}, 28);
TextureCoordinate& TextureCoordinate152 =  TextureCoordinate();
TextureCoordinate152.setPoint(new float[]{0.997468,0.995358,0,0.996537,0.942739,0.0000988993,0.209965,0.758717,0.408063,0.172614,0.945852,0.171517,0.991217,0,0,0.758717,0.209965,0.326491}, 18);
IndexedFaceSet151.setTexCoord(&TextureCoordinate152);

Coordinate& Coordinate153 =  Coordinate();
Coordinate153.setPoint(new float[]{4.65652,-0.898626,-3.00243,-1,-0.898626,-3.0224,-1,-0.898626,1,0.190682,-0.898626,1,0.190682,-0.898626,8.31051,1.31406,-0.898626,10.9131,4.36378,-0.898626,10.9317,4.34614,-0.898626,13.831,4.62105,-0.898626,13.8327}, 27);
IndexedFaceSet151.setCoord(&Coordinate153);

Shape147.setGeometry(&IndexedFaceSet151);

Transform146.addChild(&Shape147);

Group9.addChild(&Transform146);

Transform& Transform154 =  Transform();
Transform154.setTranslation(new float[]{-20.4106,5.20275,-13.9086});
Transform154.setScale(new float[]{2.95367,1.93275,1});
Shape& Shape155 =  Shape();
Appearance& Appearance156 =  Appearance();
ImageTexture& ImageTexture157 =  ImageTexture();
ImageTexture157.setUSE(CString("_3"));
Appearance156.addChild(&ImageTexture157);

TextureTransform& TextureTransform158 =  TextureTransform();
TextureTransform158.setScale(new float[]{15,15});
Appearance156.setTextureTransform(TextureTransform158);

Shape155.addChild(&Appearance156);

IndexedFaceSet& IndexedFaceSet159 =  IndexedFaceSet();
IndexedFaceSet159.setTexCoordIndex(new int32_t[]{3,1,0,-1,3,7,1,-1,8,3,0,-1,4,8,0,-1,6,2,5,-1,6,5,0,-1,5,4,0,-1}, 28);
IndexedFaceSet159.setCoordIndex(new int32_t[]{3,1,0,-1,3,2,1,-1,4,3,0,-1,5,4,0,-1,8,7,6,-1,8,6,0,-1,6,5,0,-1}, 28);
TextureCoordinate& TextureCoordinate160 =  TextureCoordinate();
TextureCoordinate160.setPoint(new float[]{0.997468,0.995358,0,0.996537,0.942739,0.0000988993,0.209965,0.758717,0.408063,0.172614,0.945852,0.171517,0.991217,0,0,0.758717,0.209965,0.326491}, 18);
IndexedFaceSet159.setTexCoord(&TextureCoordinate160);

Coordinate& Coordinate161 =  Coordinate();
Coordinate161.setPoint(new float[]{4.65652,-0.898869,-3.00243,-1,-0.898869,-3.0224,-1,-0.898869,1,0.190682,-0.898869,0.999999,0.190681,-0.898869,8.31051,1.31406,-0.898869,10.9131,4.36378,-0.898869,10.9317,4.34614,-0.898869,13.831,4.62105,-0.898869,13.8327}, 27);
IndexedFaceSet159.setCoord(&Coordinate161);

Shape155.setGeometry(&IndexedFaceSet159);

Transform154.addChild(&Shape155);

Group9.addChild(&Transform154);

Transform& Transform162 =  Transform();
Transform162.setTranslation(new float[]{-18.992,1.89094,-13.759});
Transform162.setRotation(new float[]{0,-1,0,1.5708});
Transform162.setScale(new float[]{1,1.91522,1});
Shape& Shape163 =  Shape();
Appearance& Appearance164 =  Appearance();
Material& Material165 =  Material();
Material165.setAmbientIntensity(0);
Material165.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance164.addChild(&Material165);

Shape163.addChild(&Appearance164);

IndexedFaceSet& IndexedFaceSet166 =  IndexedFaceSet();
IndexedFaceSet166.setCreaseAngle(0.5);
IndexedFaceSet166.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
Coordinate& Coordinate167 =  Coordinate();
Coordinate167.setPoint(new float[]{0.809749,1,1,0.809749,-1,1,1,1,1,1,-1,1,1,1,0.814571,1,-1,0.814571}, 18);
IndexedFaceSet166.setCoord(&Coordinate167);

Shape163.setGeometry(&IndexedFaceSet166);

Transform162.addChild(&Shape163);

Group9.addChild(&Transform162);

Transform& Transform168 =  Transform();
Transform168.setTranslation(new float[]{-22.4106,1.89094,-13.759});
Transform168.setRotation(new float[]{0,-1,0,1.5708});
Transform168.setScale(new float[]{0.999999,2.10029,0.999999});
Shape& Shape169 =  Shape();
Appearance& Appearance170 =  Appearance();
Material& Material171 =  Material();
Material171.setAmbientIntensity(0);
Material171.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance170.addChild(&Material171);

Shape169.addChild(&Appearance170);

IndexedFaceSet& IndexedFaceSet172 =  IndexedFaceSet();
IndexedFaceSet172.setCreaseAngle(0.5);
IndexedFaceSet172.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
Coordinate& Coordinate173 =  Coordinate();
Coordinate173.setPoint(new float[]{0.809749,1,1,0.809749,-1,1,1,1,1,1,-1,1,1,1,0.814571,1,-1,0.814571}, 18);
IndexedFaceSet172.setCoord(&Coordinate173);

Shape169.setGeometry(&IndexedFaceSet172);

Transform168.addChild(&Shape169);

Group9.addChild(&Transform168);

Transform& Transform174 =  Transform();
Transform174.setTranslation(new float[]{-18.992,1.89094,-6.42122});
Transform174.setRotation(new float[]{0,-1,0,1.5708});
Transform174.setScale(new float[]{0.999999,1.91522,0.999999});
Shape& Shape175 =  Shape();
Appearance& Appearance176 =  Appearance();
Material& Material177 =  Material();
Material177.setAmbientIntensity(0);
Material177.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance176.addChild(&Material177);

Shape175.addChild(&Appearance176);

IndexedFaceSet& IndexedFaceSet178 =  IndexedFaceSet();
IndexedFaceSet178.setCreaseAngle(0.5);
IndexedFaceSet178.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
Coordinate& Coordinate179 =  Coordinate();
Coordinate179.setPoint(new float[]{0.809749,1,1,0.809749,-1,1,1,1,1,1,-1,1,1,1,0.814571,1,-1,0.814571}, 18);
IndexedFaceSet178.setCoord(&Coordinate179);

Shape175.setGeometry(&IndexedFaceSet178);

Transform174.addChild(&Shape175);

Group9.addChild(&Transform174);

Transform& Transform180 =  Transform();
Transform180.setTranslation(new float[]{-15.8573,1.89094,-4.02798});
Transform180.setRotation(new float[]{0,-1,0,1.32823});
Transform180.setScale(new float[]{0.999999,1.91522,0.999999});
Shape& Shape181 =  Shape();
Appearance& Appearance182 =  Appearance();
Material& Material183 =  Material();
Material183.setAmbientIntensity(0);
Material183.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance182.addChild(&Material183);

Shape181.addChild(&Appearance182);

IndexedFaceSet& IndexedFaceSet184 =  IndexedFaceSet();
IndexedFaceSet184.setCreaseAngle(0.5);
IndexedFaceSet184.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
Coordinate& Coordinate185 =  Coordinate();
Coordinate185.setPoint(new float[]{0.809749,1,1,0.809749,-1,1,1,1,1,1,-1,1,1,1,0.814571,1,-1,0.814571}, 18);
IndexedFaceSet184.setCoord(&Coordinate185);

Shape181.setGeometry(&IndexedFaceSet184);

Transform180.addChild(&Shape181);

Group9.addChild(&Transform180);

Transform& Transform186 =  Transform();
Transform186.setTranslation(new float[]{-6.69047,1.89094,-3.81342});
Transform186.setRotation(new float[]{0,-1,0,1.5708});
Transform186.setScale(new float[]{0.999999,1.91522,0.999999});
Shape& Shape187 =  Shape();
Appearance& Appearance188 =  Appearance();
Material& Material189 =  Material();
Material189.setAmbientIntensity(0);
Material189.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance188.addChild(&Material189);

Shape187.addChild(&Appearance188);

IndexedFaceSet& IndexedFaceSet190 =  IndexedFaceSet();
IndexedFaceSet190.setCreaseAngle(0.5);
IndexedFaceSet190.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
Coordinate& Coordinate191 =  Coordinate();
Coordinate191.setPoint(new float[]{0.809749,1,1,0.809749,-1,1,1,1,1,1,-1,1,1,1,0.814571,1,-1,0.814571}, 18);
IndexedFaceSet190.setCoord(&Coordinate191);

Shape187.setGeometry(&IndexedFaceSet190);

Transform186.addChild(&Shape187);

Group9.addChild(&Transform186);

Transform& Transform192 =  Transform();
Transform192.setTranslation(new float[]{-6.69047,1.92192,-1.02699});
Transform192.setRotation(new float[]{0,-1,0,1.5708});
Transform192.setScale(new float[]{0.999999,2.07369,0.999999});
Shape& Shape193 =  Shape();
Appearance& Appearance194 =  Appearance();
Material& Material195 =  Material();
Material195.setAmbientIntensity(0);
Material195.setDiffuseColor(new float[]{0.148936,0.148936,0.148936});
Appearance194.addChild(&Material195);

Shape193.addChild(&Appearance194);

IndexedFaceSet& IndexedFaceSet196 =  IndexedFaceSet();
IndexedFaceSet196.setCreaseAngle(0.5);
IndexedFaceSet196.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
Coordinate& Coordinate197 =  Coordinate();
Coordinate197.setPoint(new float[]{0.809749,1,1,0.809749,-1,1,1,1,1,1,-1,1,1,1,0.814571,1,-1,0.814571}, 18);
IndexedFaceSet196.setCoord(&Coordinate197);

Shape193.setGeometry(&IndexedFaceSet196);

Transform192.addChild(&Shape193);

Group9.addChild(&Transform192);

Scene7.addChild(&Group9);

X3D0.setScene(&Scene7);

}
