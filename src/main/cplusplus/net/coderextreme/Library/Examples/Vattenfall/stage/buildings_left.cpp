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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:18 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:18 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString("Packaged by CosmoPackage")}, 1);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("buildings-left"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("buildings"));
Transform& Transform11 =  Transform();
Transform11.setTranslation(new float[]{-57.1823,9.44531,-1.0095});
Transform11.setScale(new float[]{0.944059,1,1.15832});
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Appearance13.addChild(&Material14);

ImageTexture& ImageTexture15 =  ImageTexture();
ImageTexture15.setUrl(new CString[]{CString("haus1.jpg")}, 1);
Appearance13.addChild(&ImageTexture15);

Shape12.addChild(&Appearance13);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setCreaseAngle(0.5);
IndexedFaceSet16.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,5,4,-1,5,3,2,4,-1}, 15);
IndexedFaceSet16.setCoordIndex(new int32_t[]{2,3,5,4,-1,0,1,7,6,-1,7,3,2,6,-1}, 15);
TextureCoordinate& TextureCoordinate17 =  TextureCoordinate();
TextureCoordinate17.setPoint(new float[]{0,1,0,0,1,1,1,0,0.790594,1,0.790594,0}, 12);
IndexedFaceSet16.setTexCoord(&TextureCoordinate17);

Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,7.7781,10,-10,7.7781,10,10,-10,10,-10,-10,5.81188,10,10,5.81187,-10,10}, 24);
IndexedFaceSet16.setCoord(&Coordinate18);

Shape12.setGeometry(&IndexedFaceSet16);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{-62.2924,9.44532,-24.1592});
Transform19.setScale(new float[]{0.944059,1,1.15832});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Appearance21.addChild(&Material22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(CString("_1"));
ImageTexture23.setUrl(new CString[]{CString("haus2.jpg")}, 1);
Appearance21.addChild(&ImageTexture23);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet24 =  IndexedFaceSet();
IndexedFaceSet24.setCreaseAngle(0.5);
IndexedFaceSet24.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
TextureCoordinate& TextureCoordinate25 =  TextureCoordinate();
TextureCoordinate25.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet24.setTexCoord(&TextureCoordinate25);

Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setPoint(new float[]{10,10,10,10,-10,10,10,10,-10,10,-10,-10}, 12);
IndexedFaceSet24.setCoord(&Coordinate26);

Shape20.setGeometry(&IndexedFaceSet24);

Transform19.addChild(&Shape20);

Transform10.addChild(&Transform19);

Transform& Transform27 =  Transform();
Transform27.setTranslation(new float[]{-58.4409,9.44532,-47.1315});
Transform27.setScale(new float[]{0.944059,1,1.15832});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Appearance29.addChild(&Material30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUSE(CString("_1"));
Appearance29.addChild(&ImageTexture31);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet32 =  IndexedFaceSet();
IndexedFaceSet32.setCreaseAngle(0.5);
IndexedFaceSet32.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1}, 10);
IndexedFaceSet32.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate33 =  TextureCoordinate();
TextureCoordinate33.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet32.setTexCoord(&TextureCoordinate33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10}, 18);
IndexedFaceSet32.setCoord(&Coordinate34);

Shape28.setGeometry(&IndexedFaceSet32);

Transform27.addChild(&Shape28);

Transform10.addChild(&Transform27);

Transform9.addChild(&Transform10);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("floor"));
Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{-43.4171,0.188247,-25.5435});
Transform36.setRotation(new float[]{-0.000949805,0.707105,0.707108,3.14349});
Transform36.setScale(new float[]{18.9453,71.9534,11.9447});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setAmbientIntensity(0.16);
Material39.setDiffuseColor(new float[]{1,1,1});
Appearance38.addChild(&Material39);

ImageTexture& ImageTexture40 =  ImageTexture();
ImageTexture40.setUrl(new CString[]{CString("str_norm.png")}, 1);
Appearance38.addChild(&ImageTexture40);

TextureTransform& TextureTransform41 =  TextureTransform();
TextureTransform41.setScale(new float[]{2,5});
Appearance38.setTextureTransform(TextureTransform41);

Shape37.addChild(&Appearance38);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setCoordIndex(new int32_t[]{0,3,10,11,-1,10,6,7,11,-1,6,13,12,7,-1,13,4,5,12,-1,4,15,14,5,-1,15,9,8,14,-1,9,17,16,8,-1,17,2,1,16,-1}, 40);
TextureCoordinate& TextureCoordinate43 =  TextureCoordinate();
TextureCoordinate43.setPoint(new float[]{0,0,0,1,0.5,1,0.5,0,0.5,0.5,0,0.5,0.5,0.25,0,0.25,0,0.75,0.5,0.75,0.5,0.125,0,0.125,0,0.375,0.5,0.375,0,0.625,0.5,0.625,0,0.875,0.5,0.875}, 36);
IndexedFaceSet42.setTexCoord(&TextureCoordinate43);

Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{-0.5,-0.5,0,-0.5,0.5,0,0,0.5,0,0,-0.5,0,0,0,0,-0.5,0,0,0,-0.25,0,-0.5,-0.25,0,-0.5,0.25,0,0,0.25,0,0,-0.375,0,-0.5,-0.375,0,-0.5,-0.125,0,0,-0.125,0,-0.5,0.125,0,0,0.125,0,-0.5,0.375,0,0,0.375,0}, 54);
IndexedFaceSet42.setCoord(&Coordinate44);

Shape37.setGeometry(&IndexedFaceSet42);

Transform36.addChild(&Shape37);

Transform35.addChild(&Transform36);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{-18.3245,-1.73798,36.0234});
Transform45.setScale(new float[]{3.58919,0.202305,1.03599});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Appearance47.addChild(&Material48);

ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setDEF(CString("_2"));
ImageTexture49.setUrl(new CString[]{CString("fussweg.png")}, 1);
Appearance47.addChild(&ImageTexture49);

TextureTransform& TextureTransform50 =  TextureTransform();
TextureTransform50.setScale(new float[]{60,16});
Appearance47.setTextureTransform(TextureTransform50);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setCreaseAngle(0.5);
IndexedFaceSet51.setTexCoordIndex(new int32_t[]{2,8,15,10,-1}, 5);
IndexedFaceSet51.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
TextureCoordinate& TextureCoordinate52 =  TextureCoordinate();
TextureCoordinate52.setPoint(new float[]{0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184}, 36);
IndexedFaceSet51.setTexCoord(&TextureCoordinate52);

Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681}, 12);
IndexedFaceSet51.setCoord(&Coordinate53);

Shape46.setGeometry(&IndexedFaceSet51);

Transform45.addChild(&Shape46);

Transform35.addChild(&Transform45);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{-18.3245,-1.73798,-0.625544});
Transform54.setScale(new float[]{3.58919,0.202305,1.03599});
Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
Material& Material57 =  Material();
Appearance56.addChild(&Material57);

ImageTexture& ImageTexture58 =  ImageTexture();
ImageTexture58.setUSE(CString("_2"));
Appearance56.addChild(&ImageTexture58);

TextureTransform& TextureTransform59 =  TextureTransform();
TextureTransform59.setScale(new float[]{60,16});
Appearance56.setTextureTransform(TextureTransform59);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet60 =  IndexedFaceSet();
IndexedFaceSet60.setCreaseAngle(0.5);
IndexedFaceSet60.setTexCoordIndex(new int32_t[]{2,8,15,10,-1}, 5);
IndexedFaceSet60.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
TextureCoordinate& TextureCoordinate61 =  TextureCoordinate();
TextureCoordinate61.setPoint(new float[]{0.15625,1.80859,0.15625,2.39878,0.15625,2.98896,0.125,2.98896,0.09375,2.98896,0,2.39878,0,1.80859,0.03125,2.98896,0,2.98896,0.0625,2.98896,0.15625,1.2184,0.15625,1.5135,0.125,1.2184,0.03125,1.2184,0,1.5135,0,1.2184,0.0625,1.2184,0.09375,1.2184}, 36);
IndexedFaceSet60.setTexCoord(&TextureCoordinate61);

Coordinate& Coordinate62 =  Coordinate();
Coordinate62.setPoint(new float[]{-6.875,10,-59.7793,-10,10,-59.7793,-6.875,10,-24.3681,-10,10,-24.3681}, 12);
IndexedFaceSet60.setCoord(&Coordinate62);

Shape55.setGeometry(&IndexedFaceSet60);

Transform54.addChild(&Shape55);

Transform35.addChild(&Transform54);

Transform9.addChild(&Transform35);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
