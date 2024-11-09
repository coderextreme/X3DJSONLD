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
meta3.setContent(CString("Wed, 18 Mar 2015 02:56:32 GMT"));
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
meta6.setContent(CString("Wed, 18 Mar 2015 02:56:32 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Transform& Transform8 =  Transform();
Transform& Transform9 =  Transform();
Transform9.setDEF(CString("baum"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("tree_1"));
Transform10.setTranslation(new float[]{-4.14893,0,-5.37412});
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("ntreesh"));
Transform11.setTranslation(new float[]{-0.0000038147,-8.9407e-8,0.0000152588});
Transform11.setRotation(new float[]{0,-1,0,1.32624});
Transform11.setScale(new float[]{1,0.999999,1});
Transform11.setCenter(new float[]{-49.3696,0.0804343,-10.6255});
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setAmbientIntensity(0);
Material14.setDiffuseColor(new float[]{0,0,0});
Material14.setTransparency(0.478723);
Appearance13.addChild(&Material14);

ImageTexture& ImageTexture15 =  ImageTexture();
ImageTexture15.setDEF(CString("_1"));
ImageTexture15.setUrl(new CString[]{CString("ntreesh.png")}, 1);
Appearance13.addChild(&ImageTexture15);

Shape12.addChild(&Appearance13);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setSolid(False);
IndexedFaceSet16.setCreaseAngle(0.5);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1}, 8);
TextureCoordinate& TextureCoordinate17 =  TextureCoordinate();
TextureCoordinate17.setPoint(new float[]{1,1,1,0,0,0,0,1}, 8);
IndexedFaceSet16.setTexCoord(&TextureCoordinate17);

Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setPoint(new float[]{-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283}, 12);
IndexedFaceSet16.setCoord(&Coordinate18);

Shape12.setGeometry(&IndexedFaceSet16);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("ntree"));
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setAmbientIntensity(0);
Material22.setDiffuseColor(new float[]{1,1,1});
Material22.setEmissiveColor(new float[]{0.595745,0.595745,0.595745});
Appearance21.addChild(&Material22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("_2"));
ImageTexture23.setUrl(new CString[]{CString("ntree.png")}, 1);
Appearance21.addChild(&ImageTexture23);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet24 =  IndexedFaceSet();
IndexedFaceSet24.setSolid(False);
IndexedFaceSet24.setCreaseAngle(0.5);
IndexedFaceSet24.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
TextureCoordinate& TextureCoordinate25 =  TextureCoordinate();
TextureCoordinate25.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 24);
IndexedFaceSet24.setTexCoord(&TextureCoordinate25);

Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setPoint(new float[]{-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,6.60754,-10.6106,-52.6347,6.60754,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.6449,6.60752,-7.86263,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,6.60752,-7.82067}, 36);
IndexedFaceSet24.setCoord(&Coordinate26);

Shape20.setGeometry(&IndexedFaceSet24);

Transform19.addChild(&Shape20);

Transform10.addChild(&Transform19);

Transform9.addChild(&Transform10);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("tree_2"));
Transform27.setTranslation(new float[]{21.4525,0,-5.37412});
Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{0.189871,0.00608941,-0.282085});
Transform28.setRotation(new float[]{0,-1,0,1.32624});
Transform28.setScale(new float[]{1.08283,1.08283,1.08283});
Transform28.setCenter(new float[]{-49.3696,0.0804343,-10.6255});
Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Material31.setAmbientIntensity(0);
Material31.setDiffuseColor(new float[]{0,0,0});
Material31.setTransparency(0.478723);
Appearance30.addChild(&Material31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUSE(CString("_1"));
Appearance30.addChild(&ImageTexture32);

Shape29.addChild(&Appearance30);

IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setSolid(False);
IndexedFaceSet33.setCreaseAngle(0.5);
IndexedFaceSet33.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1}, 8);
TextureCoordinate& TextureCoordinate34 =  TextureCoordinate();
TextureCoordinate34.setPoint(new float[]{1,1,1,0,0,0,0,1}, 8);
IndexedFaceSet33.setTexCoord(&TextureCoordinate34);

Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setPoint(new float[]{-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283}, 12);
IndexedFaceSet33.setCoord(&Coordinate35);

Shape29.setGeometry(&IndexedFaceSet33);

Transform28.addChild(&Shape29);

Transform27.addChild(&Transform28);

Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{-31.9501,-0.000947475,36.4323});
Transform36.setRotation(new float[]{0,-1,0,1.00453});
Transform36.setScale(new float[]{1,1.18986,1});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setAmbientIntensity(0);
Material39.setDiffuseColor(new float[]{1,1,1});
Material39.setEmissiveColor(new float[]{0.595745,0.595745,0.595745});
Appearance38.addChild(&Material39);

ImageTexture& ImageTexture40 =  ImageTexture();
ImageTexture40.setUSE(CString("_2"));
Appearance38.addChild(&ImageTexture40);

Shape37.addChild(&Appearance38);

IndexedFaceSet& IndexedFaceSet41 =  IndexedFaceSet();
IndexedFaceSet41.setSolid(False);
IndexedFaceSet41.setCreaseAngle(0.5);
IndexedFaceSet41.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
TextureCoordinate& TextureCoordinate42 =  TextureCoordinate();
TextureCoordinate42.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 24);
IndexedFaceSet41.setTexCoord(&TextureCoordinate42);

Coordinate& Coordinate43 =  Coordinate();
Coordinate43.setPoint(new float[]{-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067}, 36);
IndexedFaceSet41.setCoord(&Coordinate43);

Shape37.setGeometry(&IndexedFaceSet41);

Transform36.addChild(&Shape37);

Transform27.addChild(&Transform36);

Transform9.addChild(&Transform27);

Transform& Transform44 =  Transform();
Transform44.setDEF(CString("tree"));
Transform44.setTranslation(new float[]{8.76691,0,-5.37412});
Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{-0.0000038147,-8.9407e-8,0.0000152588});
Transform45.setRotation(new float[]{0,-1,0,1.32624});
Transform45.setScale(new float[]{1,0.999999,1});
Transform45.setCenter(new float[]{-49.3696,0.0804343,-10.6255});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setAmbientIntensity(0);
Material48.setDiffuseColor(new float[]{0,0,0});
Material48.setTransparency(0.478723);
Appearance47.addChild(&Material48);

ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setUSE(CString("_1"));
Appearance47.addChild(&ImageTexture49);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet50 =  IndexedFaceSet();
IndexedFaceSet50.setSolid(False);
IndexedFaceSet50.setCreaseAngle(0.5);
IndexedFaceSet50.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1}, 8);
TextureCoordinate& TextureCoordinate51 =  TextureCoordinate();
TextureCoordinate51.setPoint(new float[]{1,1,1,0,0,0,0,1}, 8);
IndexedFaceSet50.setTexCoord(&TextureCoordinate51);

Coordinate& Coordinate52 =  Coordinate();
Coordinate52.setPoint(new float[]{-56.6496,0.0804348,-15.3576,-51.7661,0.0804343,-7.57679,-46.6203,0.0804338,-12.0093,-53.2139,0.0804334,-18.3283}, 12);
IndexedFaceSet50.setCoord(&Coordinate52);

Shape46.setGeometry(&IndexedFaceSet50);

Transform45.addChild(&Shape46);

Transform44.addChild(&Transform45);

Transform& Transform53 =  Transform();
Transform53.setTranslation(new float[]{-0.626562,-0.000947475,-24.2605});
Transform53.setRotation(new float[]{0,1,0,0.487003});
Transform53.setScale(new float[]{1,1.18986,1});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setAmbientIntensity(0);
Material56.setDiffuseColor(new float[]{1,1,1});
Material56.setEmissiveColor(new float[]{0.595745,0.595745,0.595745});
Appearance55.addChild(&Material56);

ImageTexture& ImageTexture57 =  ImageTexture();
ImageTexture57.setUSE(CString("_2"));
Appearance55.addChild(&ImageTexture57);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setSolid(False);
IndexedFaceSet58.setCreaseAngle(0.5);
IndexedFaceSet58.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
TextureCoordinate& TextureCoordinate59 =  TextureCoordinate();
TextureCoordinate59.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 24);
IndexedFaceSet58.setTexCoord(&TextureCoordinate59);

Coordinate& Coordinate60 =  Coordinate();
Coordinate60.setPoint(new float[]{-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,6.60754,-10.6106,-52.6347,6.60754,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.6449,6.60752,-7.86263,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,6.60752,-7.82067}, 36);
IndexedFaceSet58.setCoord(&Coordinate60);

Shape54.setGeometry(&IndexedFaceSet58);

Transform53.addChild(&Shape54);

Transform44.addChild(&Transform53);

Transform9.addChild(&Transform44);

Transform8.addChild(&Transform9);

Transform& Transform61 =  Transform();
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setAmbientIntensity(0.455757);
Material64.setDiffuseColor(new float[]{0.351064,0.278629,0.195817});
Appearance63.addChild(&Material64);

ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setUrl(new CString[]{CString("granite.png")}, 1);
Appearance63.addChild(&ImageTexture65);

TextureTransform& TextureTransform66 =  TextureTransform();
TextureTransform66.setScale(new float[]{5.85353,5.53906});
Appearance63.setTextureTransform(TextureTransform66);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet67 =  IndexedFaceSet();
IndexedFaceSet67.setCreaseAngle(0.5);
IndexedFaceSet67.setColorPerVertex(False);
IndexedFaceSet67.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate68 =  TextureCoordinate();
TextureCoordinate68.setPoint(new float[]{0.568403,0.415141,0.40171,0.415141,0.40171,0.357317,0.568403,0.357317}, 8);
IndexedFaceSet67.setTexCoord(&TextureCoordinate68);

Coordinate& Coordinate69 =  Coordinate();
Coordinate69.setPoint(new float[]{-11.5277,0,-21.3227,-57.357,0,-21.3227,-57.357,0,-8.14675,-11.5277,0,-8.14674}, 12);
IndexedFaceSet67.setCoord(&Coordinate69);

Shape62.setGeometry(&IndexedFaceSet67);

Transform61.addChild(&Shape62);

Transform8.addChild(&Transform61);

Scene7.addChild(&Transform8);

X3D0.setScene(&Scene7);

}
