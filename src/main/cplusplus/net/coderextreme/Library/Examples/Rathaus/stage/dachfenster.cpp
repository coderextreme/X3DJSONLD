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
meta3.setContent(CString("Sun, 15 Mar 2015 09:33:32 GMT"));
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
meta6.setContent(CString("Sun, 15 Mar 2015 09:33:32 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("nurbsToPoly141"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setAmbientIntensity(0.341818);
Material13.setDiffuseColor(new float[]{0.585106,0.0214792,0});
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setDEF(CString("_1"));
ImageTexture14.setUrl(new CString[]{CString("dachziegel.jpg")}, 1);
Appearance12.addChild(&ImageTexture14);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setDEF(CString("nurbsToPoly141_0Geo"));
IndexedFaceSet15.setConvex(False);
IndexedFaceSet15.setTexCoordIndex(new int32_t[]{8,1,2,9,-1,0,10,11,3,-1,4,6,7,5,-1}, 15);
IndexedFaceSet15.setCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1}, 15);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{0,0,0,0,1,0.410596,1,0.410596,0,1.03747,0.99853,1.03894,0.00146949,0,1,0.0014694,0,0.455482,1,0.866814,0,0.455482,1,0.866814}, 24);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setDEF(CString("nurbsToPoly141GeoPoints"));
Coordinate17.setPoint(new float[]{-0.69,4.401,-8.965,-0.688,4.401,-7.553,0.671,4.959,-7.555,0.669,4.959,-8.967,-0.69,5.02,-8.965,0.669,5.579,-8.967,-0.688,5.02,-7.553,0.671,5.579,-7.555}, 24);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet15);

Transform10.addChild(&Shape11);

Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDEF(CString("_2"));
Material20.setDiffuseColor(new float[]{1,0.794631,0.389824});
Appearance19.addChild(&Material20);

ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setUrl(new CString[]{CString("r_win_lower3.jpg")}, 1);
Appearance19.addChild(&ImageTexture21);

Shape18.addChild(&Appearance19);

IndexedFaceSet& IndexedFaceSet22 =  IndexedFaceSet();
IndexedFaceSet22.setDEF(CString("nurbsToPoly141_1Geo"));
IndexedFaceSet22.setConvex(False);
IndexedFaceSet22.setCoordIndex(new int32_t[]{4,0,1,6,-1}, 5);
TextureCoordinate& TextureCoordinate23 =  TextureCoordinate();
TextureCoordinate23.setPoint(new float[]{0.995874,0.0544366,0.00573361,0.0338087,0.00141633,0.395184,1.00142,0.395184,0.987623,0.974442,1.00142,0.834278,0.00573361,0.95794,0.00141633,0.834278}, 16);
IndexedFaceSet22.setTexCoord(&TextureCoordinate23);

Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setUSE(CString("nurbsToPoly141GeoPoints"));
IndexedFaceSet22.setCoord(&Coordinate24);

Shape18.setGeometry(&IndexedFaceSet22);

Transform10.addChild(&Shape18);

Transform9.addChild(&Transform10);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("nurbsToPoly140"));
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setAmbientIntensity(0.341818);
Material28.setDiffuseColor(new float[]{0.585106,0.0214792,0});
Appearance27.addChild(&Material28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUSE(CString("_1"));
Appearance27.addChild(&ImageTexture29);

Shape26.addChild(&Appearance27);

IndexedFaceSet& IndexedFaceSet30 =  IndexedFaceSet();
IndexedFaceSet30.setDEF(CString("nurbsToPoly140_0Geo"));
IndexedFaceSet30.setConvex(False);
IndexedFaceSet30.setTexCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,8,9,10,11,-1}, 15);
IndexedFaceSet30.setCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1}, 15);
TextureCoordinate& TextureCoordinate31 =  TextureCoordinate();
TextureCoordinate31.setPoint(new float[]{0,0,0,0,1,0.410596,1,0.410596,0,0.456008,1,0.86755,0,0.456008,1,0.86755,0,0.347209,0,0,1,0.00189201,1,0.349101}, 24);
IndexedFaceSet30.setTexCoord(&TextureCoordinate31);

Coordinate& Coordinate32 =  Coordinate();
Coordinate32.setDEF(CString("nurbsToPoly140GeoPoints"));
Coordinate32.setPoint(new float[]{1.165,6.286,-8.464,1.165,6.286,-8.097,2.222,6.72,-8.099,2.222,6.72,-8.466,1.165,6.768,-8.464,2.222,7.203,-8.466,1.165,6.768,-8.097,2.222,7.203,-8.099}, 24);
IndexedFaceSet30.setCoord(&Coordinate32);

Shape26.setGeometry(&IndexedFaceSet30);

Transform25.addChild(&Shape26);

Transform9.addChild(&Transform25);

Transform& Transform33 =  Transform();
Transform33.setDEF(CString("nurbsToPoly144"));
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setAmbientIntensity(0.341818);
Material36.setDiffuseColor(new float[]{0.585106,0.0214792,0});
Appearance35.addChild(&Material36);

ImageTexture& ImageTexture37 =  ImageTexture();
ImageTexture37.setUSE(CString("_1"));
Appearance35.addChild(&ImageTexture37);

Shape34.addChild(&Appearance35);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setDEF(CString("nurbsToPoly144_0Geo"));
IndexedFaceSet38.setConvex(False);
IndexedFaceSet38.setTexCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,8,9,10,11,-1}, 15);
IndexedFaceSet38.setCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1}, 15);
TextureCoordinate& TextureCoordinate39 =  TextureCoordinate();
TextureCoordinate39.setPoint(new float[]{0,0,0,0,1,0.411543,1,0.411543,0,0.456008,1,0.86755,0,0.456008,1,0.86755,0,0.347209,0,0,1,0.00189201,1,0.349101}, 24);
IndexedFaceSet38.setTexCoord(&TextureCoordinate39);

Coordinate& Coordinate40 =  Coordinate();
Coordinate40.setDEF(CString("nurbsToPoly144GeoPoints"));
Coordinate40.setPoint(new float[]{2.061,7.648,-8.464,2.061,7.648,-8.097,3.118,8.083,-8.099,3.118,8.083,-8.466,2.061,8.13,-8.464,3.118,8.565,-8.466,2.061,8.13,-8.097,3.118,8.565,-8.099}, 24);
IndexedFaceSet38.setCoord(&Coordinate40);

Shape34.setGeometry(&IndexedFaceSet38);

Transform33.addChild(&Shape34);

Transform9.addChild(&Transform33);

Transform& Transform41 =  Transform();
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setUSE(CString("_2"));
Appearance43.addChild(&Material44);

ImageTexture& ImageTexture45 =  ImageTexture();
ImageTexture45.setDEF(CString("_3"));
ImageTexture45.setUrl(new CString[]{CString("r_win_upper.jpg")}, 1);
Appearance43.addChild(&ImageTexture45);

Shape42.addChild(&Appearance43);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setConvex(False);
IndexedFaceSet46.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate47 =  TextureCoordinate();
TextureCoordinate47.setPoint(new float[]{0.999196,0.995874,1,0,0,0,-0.000804007,0.995874}, 8);
IndexedFaceSet46.setTexCoord(&TextureCoordinate47);

Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setPoint(new float[]{2.061,8.13,-8.464,2.061,7.648,-8.464,2.061,7.648,-8.097,2.061,8.13,-8.097}, 12);
IndexedFaceSet46.setCoord(&Coordinate48);

Shape42.setGeometry(&IndexedFaceSet46);

Transform41.addChild(&Shape42);

Transform9.addChild(&Transform41);

Transform& Transform49 =  Transform();
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setUSE(CString("_2"));
Appearance51.addChild(&Material52);

ImageTexture& ImageTexture53 =  ImageTexture();
ImageTexture53.setUSE(CString("_3"));
Appearance51.addChild(&ImageTexture53);

Shape50.addChild(&Appearance51);

IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setConvex(False);
IndexedFaceSet54.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
TextureCoordinate& TextureCoordinate55 =  TextureCoordinate();
TextureCoordinate55.setPoint(new float[]{-0.0049296,0.995874,0,0,1,0,0.99507,0.995874}, 8);
IndexedFaceSet54.setTexCoord(&TextureCoordinate55);

Coordinate& Coordinate56 =  Coordinate();
Coordinate56.setPoint(new float[]{1.165,6.768,-8.097,1.165,6.286,-8.097,1.165,6.286,-8.464,1.165,6.768,-8.464}, 12);
IndexedFaceSet54.setCoord(&Coordinate56);

Shape50.setGeometry(&IndexedFaceSet54);

Transform49.addChild(&Shape50);

Transform9.addChild(&Transform49);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
