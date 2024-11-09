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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:17 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:17 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

LOD& LOD9 =  LOD();
Transform& Transform10 =  Transform();
Transform& Transform11 =  Transform();
Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{-0.036226,1.98503,-1.18758});
Transform12.setRotation(new float[]{1,0,0,1.5708});
Transform12.setScale(new float[]{8.67144,1.3212,1.59196});
Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setAmbientIntensity(0);
Material15.setDiffuseColor(new float[]{0,0,0});
Material15.setEmissiveColor(new float[]{0.43617,0,0.0460901});
Material15.setShininess(0);
Material15.setTransparency(0.265957);
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setCreaseAngle(0.5);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{-1,1,-1,-1,1,1,1,1,1,1,1,-1}, 12);
IndexedFaceSet16.setCoord(&Coordinate17);

Shape13.setGeometry(&IndexedFaceSet16);

Transform12.addChild(&Shape13);

Transform11.addChild(&Transform12);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("t"));
Transform18.setTranslation(new float[]{-0.0362264,2.78814,0.274026});
Transform18.setScale(new float[]{0.0339055,0.0339054,0.0339054});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setAmbientIntensity(0);
Material21.setDiffuseColor(new float[]{0,0,0});
Material21.setEmissiveColor(new float[]{1,0.842126,0});
Material21.setShininess(0);
Appearance20.addChild(&Material21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setDEF(CString("_1"));
ImageTexture22.setUrl(new CString[]{CString("mibtxt1.gif")}, 1);
Appearance20.addChild(&ImageTexture22);

Shape19.addChild(&Appearance20);

Text& Text23 =  Text();
Text23.setString(new CString[]{CString("\"MEN IN BLACK\"")}, 1);
Text23.setLength(new float[]{0}, 1);
CFontStyle& FontStyle24 =  CFontStyle();
FontStyle24.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle24.setSize(24);
FontStyle24.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text23.setFontStyle(&FontStyle24);

Shape19.setGeometry(&Text23);

Transform18.addChild(&Shape19);

Transform11.addChild(&Transform18);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("f"));
Transform25.setTranslation(new float[]{-8.30206,2.03672,0.269761});
Transform25.setScale(new float[]{0.0377924,0.0377925,0.0377923});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setAmbientIntensity(0);
Material28.setDiffuseColor(new float[]{0,0,0});
Material28.setEmissiveColor(new float[]{1,1,1});
Material28.setShininess(0);
Appearance27.addChild(&Material28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUSE(CString("_1"));
Appearance27.addChild(&ImageTexture29);

Shape26.addChild(&Appearance27);

Text& Text30 =  Text();
Text30.setString(new CString[]{CString(", "), CString("Sie schützen die Welt vor dem Abschaum des Universums. Mit dicken, "), CString("Kanonen und Gehirnpiespsdingsdas werden viele Leute geblitzdingst.Komm' näher, wenn Du den Trailer sehen willst.")}, 3);
Text30.setLength(new float[]{0}, 1);
CFontStyle& FontStyle31 =  CFontStyle();
FontStyle31.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle31.setSize(14);
Text30.setFontStyle(&FontStyle31);

Shape26.setGeometry(&Text30);

Transform25.addChild(&Shape26);

Transform11.addChild(&Transform25);

Transform10.addChild(&Transform11);

LOD9.addChildren(&Transform10);

Transform& Transform32 =  Transform();
Transform& Transform33 =  Transform();
Transform33.setDEF(CString("b"));
Transform33.setTranslation(new float[]{-0.036226,1.98503,-1.18758});
Transform33.setRotation(new float[]{1,0,0,1.5708});
Transform33.setScale(new float[]{8.67144,1.3212,1.59196});
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
ImageTexture& ImageTexture36 =  ImageTexture();
ImageTexture36.setUSE(CString("_1"));
Appearance35.addChild(&ImageTexture36);

Shape34.addChild(&Appearance35);

IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setCreaseAngle(0.5);
IndexedFaceSet37.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate38 =  TextureCoordinate();
TextureCoordinate38.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet37.setTexCoord(&TextureCoordinate38);

Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setPoint(new float[]{-1,1,-1,-1,1,1,1,1,1,1,1,-1}, 12);
IndexedFaceSet37.setCoord(&Coordinate39);

Shape34.setGeometry(&IndexedFaceSet37);

Transform33.addChild(&Shape34);

Transform32.addChild(&Transform33);

LOD9.addChildren(&Transform32);

Scene7.addChild(&LOD9);

X3D0.setScene(&Scene7);

}
