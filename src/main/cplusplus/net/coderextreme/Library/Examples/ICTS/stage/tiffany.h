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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Anchor& Anchor9 =  Anchor();
Anchor9.setUrl(new CString[]{CString("javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/tiffany.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');")}, 1);
Collision& Collision10 =  Collision();
Collision10.setEnabled(false);
Transform& Transform11 =  Transform();
Transform& Transform12 =  Transform();
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("filmplakat"));
Transform13.setScale(new float[]{4.95,4.94926,4.94979});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
ImageTexture& ImageTexture16 =  ImageTexture();
ImageTexture16.setUrl(new CString[]{CString("tiffany.jpg")}, 1);
Appearance15.addChild(&ImageTexture16);

Shape14.addChild(&Appearance15);

IndexedFaceSet& IndexedFaceSet17 =  IndexedFaceSet();
IndexedFaceSet17.setSolid(false);
IndexedFaceSet17.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate18 =  TextureCoordinate();
TextureCoordinate18.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet17.setTexCoord(&TextureCoordinate18);

Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setPoint(new float[]{-0.5,0.337629,0.0,0.5,0.337629,0.0,0.5,1.88983,0.0,-0.5,1.88983,0.0,-0.5,-0.362414,0.0,0.5,-0.362414,0.0,0.5,-1.88649,0.0,-0.5,-1.88649,0.0}, 24);
IndexedFaceSet17.setCoord(&Coordinate19);

Shape14.setGeometry(&IndexedFaceSet17);

Transform13.addChild(&Shape14);

Transform12.addChild(&Transform13);

Transform11.addChild(&Transform12);

LOD& LOD20 =  LOD();
LOD20.setRange(new float[]{12.0}, 1);
Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{0.0,-0.970178,0.0});
Transform& Transform22 =  Transform();
Transform22.setDEF(CString("b"));
Transform22.setTranslation(new float[]{-0.036226,2.95521,-0.941064});
Transform22.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform22.setScale(new float[]{6.56332,0.999999,1.20494});
Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setAmbientIntensity(0);
Material25.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material25.setEmissiveColor(new float[]{0.43617,0.0,0.0460901});
Material25.setShininess(0);
Material25.setTransparency(0.265957);
Appearance24.addChild(&Material25);

Shape23.addChild(&Appearance24);

IndexedFaceSet& IndexedFaceSet26 =  IndexedFaceSet();
IndexedFaceSet26.setCreaseAngle(0.5);
IndexedFaceSet26.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet26.setCoord(&Coordinate27);

Shape23.setGeometry(&IndexedFaceSet26);

Transform22.addChild(&Shape23);

Transform21.addChild(&Transform22);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("t"));
Transform28.setTranslation(new float[]{-0.0362265,3.40828,0.199348});
Transform28.setScale(new float[]{0.0298343,0.0298342,0.0298342});
Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Material31.setAmbientIntensity(0);
Material31.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material31.setEmissiveColor(new float[]{1.0,0.842126,0.0});
Material31.setShininess(0);
Appearance30.addChild(&Material31);

Shape29.addChild(&Appearance30);

Text& Text32 =  Text();
Text32.setString(new CString[]{CString("\"BREAKFAST AT TIFFANY'S\"")}, 1);
Text32.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle33 =  CFontStyle();
FontStyle33.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle33.setStyle(CString("BOLD"));
FontStyle33.setSize(24);
FontStyle33.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text32.setFontStyle(&FontStyle33);

Shape29.setGeometry(&Text32);

Transform28.addChild(&Shape29);

Transform21.addChild(&Transform28);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("f"));
Transform34.setTranslation(new float[]{-6.41232,2.92385,0.195083});
Transform34.setScale(new float[]{0.0285384,0.0285384,0.0285383});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setAmbientIntensity(0);
Material37.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material37.setEmissiveColor(new float[]{1.0,1.0,1.0});
Material37.setShininess(0);
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

Text& Text38 =  Text();
Text38.setString(new CString[]{CString(", "), CString("Die attraktive Audrey Hepburn in ihrer Glanzrolle: Auf dem Weg zum, "), CString("Aerobic wird sie von einem Fremden in ein seltsames Café gelockt.Dort passieren schreckliche Dinge... 15.8, Einlass ab 18 Jahren")}, 3);
Text38.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle39 =  CFontStyle();
FontStyle39.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle39.setSize(14);
Text38.setFontStyle(&FontStyle39);

Shape35.setGeometry(&Text38);

Transform34.addChild(&Shape35);

Transform21.addChild(&Transform34);

LOD20.addChildren(&Transform21);

Transform& Transform40 =  Transform();
LOD20.addChildren(&Transform40);

Transform11.addChild(&LOD20);

Collision10.addChildren(&Transform11);

Anchor9.addChild(&Collision10);

Scene7.addChild(&Anchor9);

X3D0.setScene(&Scene7);

//}
