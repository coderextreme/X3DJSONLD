//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:57 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:57 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Anchor& Anchor9 =  Anchor();
Anchor9.setUrl(new CString[]{CString("javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/benhur.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');")}, 1);
Collision& Collision10 =  Collision();
Collision10.setEnabled(false);
Transform& Transform11 =  Transform();
LOD& LOD12 =  LOD();
LOD12.setRange(new float[]{12.0}, 1);
Transform& Transform13 =  Transform();
Transform13.setTranslation(new float[]{0.0,-0.970178,0.0});
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("b"));
Transform14.setTranslation(new float[]{-0.036226,2.95521,-0.941064});
Transform14.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform14.setScale(new float[]{6.56332,0.999999,1.20494});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setAmbientIntensity(0);
Material17.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material17.setEmissiveColor(new float[]{0.43617,0.0,0.0460901});
Material17.setShininess(0);
Material17.setTransparency(0.265957);
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setCreaseAngle(0.5);
IndexedFaceSet18.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet18.setCoord(&Coordinate19);

Shape15.setGeometry(&IndexedFaceSet18);

Transform14.addChild(&Shape15);

Transform13.addChild(&Transform14);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("t"));
Transform20.setTranslation(new float[]{-0.0362264,3.40265,0.199348});
Transform20.setScale(new float[]{0.0304876,0.0304875,0.0304875});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setAmbientIntensity(0);
Material23.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material23.setEmissiveColor(new float[]{1.0,0.842126,0.0});
Material23.setShininess(0);
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

Text& Text24 =  Text();
Text24.setString(new CString[]{CString("\"BEN HUR\"")}, 1);
Text24.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle25 =  CFontStyle();
FontStyle25.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle25.setStyle(CString("BOLD"));
FontStyle25.setSize(24);
FontStyle25.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text24.setFontStyle(&FontStyle25);

Shape21.setGeometry(&Text24);

Transform20.addChild(&Shape21);

Transform13.addChild(&Transform20);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("f"));
Transform26.setTranslation(new float[]{-6.29659,2.92385,0.195083});
Transform26.setScale(new float[]{0.0285384,0.0285384,0.0285383});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setAmbientIntensity(0);
Material29.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material29.setEmissiveColor(new float[]{1.0,1.0,1.0});
Material29.setShininess(0);
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Text& Text30 =  Text();
Text30.setString(new CString[]{CString(", "), CString("Dieser Monumentalfilm lässt bestimmt kein Auge offen., "), CString("Mit 18 Stunden Überlänge ist er der Film mit der grössten Filmrolledie je ein Vorführer einlegen musste... Viel Popcorn kaufen!")}, 3);
Text30.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle31 =  CFontStyle();
FontStyle31.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle31.setSize(14);
Text30.setFontStyle(&FontStyle31);

Shape27.setGeometry(&Text30);

Transform26.addChild(&Shape27);

Transform13.addChild(&Transform26);

LOD12.addChildren(&Transform13);

Transform& Transform32 =  Transform();
LOD12.addChildren(&Transform32);

Transform11.addChild(&LOD12);

Transform& Transform33 =  Transform();
Transform& Transform34 =  Transform();
Transform34.setDEF(CString("filmplakat"));
Transform34.setScale(new float[]{4.95,4.94926,4.94979});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
ImageTexture& ImageTexture37 =  ImageTexture();
ImageTexture37.setUrl(new CString[]{CString("benhur.jpg")}, 1);
Appearance36.addChild(&ImageTexture37);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setSolid(false);
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate39 =  TextureCoordinate();
TextureCoordinate39.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet38.setTexCoord(&TextureCoordinate39);

Coordinate& Coordinate40 =  Coordinate();
Coordinate40.setPoint(new float[]{-0.5,0.337629,0.0,0.5,0.337629,0.0,0.5,1.88983,0.0,-0.5,1.88983,0.0,-0.5,-0.362414,0.0,0.5,-0.362414,0.0,0.5,-1.88649,0.0,-0.5,-1.88649,0.0}, 24);
IndexedFaceSet38.setCoord(&Coordinate40);

Shape35.setGeometry(&IndexedFaceSet38);

Transform34.addChild(&Shape35);

Transform33.addChild(&Transform34);

Transform11.addChild(&Transform33);

Collision10.addChildren(&Transform11);

Anchor9.addChild(&Collision10);

Scene7.addChild(&Anchor9);

X3D0.setScene(&Scene7);

//}
