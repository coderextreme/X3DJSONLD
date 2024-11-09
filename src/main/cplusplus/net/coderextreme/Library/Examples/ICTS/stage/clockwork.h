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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:59 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:59 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Anchor& Anchor9 =  Anchor();
Anchor9.setUrl(new CString[]{CString("javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('html/cinema/clockwork.html', 'cinemaxx','cinemaxx','width=623,height=454,left=0,top=0');")}, 1);
Collision& Collision10 =  Collision();
Collision10.setEnabled(false);
Transform& Transform11 =  Transform();
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("filmplakat"));
Transform12.setScale(new float[]{4.95,4.94926,4.94979});
Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
ImageTexture& ImageTexture15 =  ImageTexture();
ImageTexture15.setUrl(new CString[]{CString("clockwork.jpg")}, 1);
Appearance14.addChild(&ImageTexture15);

Shape13.addChild(&Appearance14);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setSolid(false);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate17 =  TextureCoordinate();
TextureCoordinate17.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet16.setTexCoord(&TextureCoordinate17);

Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setPoint(new float[]{-0.5,0.337629,0.0,0.5,0.337629,0.0,0.5,1.88983,0.0,-0.5,1.88983,0.0,-0.5,-0.362414,0.0,0.5,-0.362414,0.0,0.5,-1.88649,0.0,-0.5,-1.88649,0.0}, 24);
IndexedFaceSet16.setCoord(&Coordinate18);

Shape13.setGeometry(&IndexedFaceSet16);

Transform12.addChild(&Shape13);

Transform11.addChild(&Transform12);

Collision10.addChildren(&Transform11);

LOD& LOD19 =  LOD();
LOD19.setRange(new float[]{12.0}, 1);
Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{0.0,-0.970178,0.0});
Transform& Transform21 =  Transform();
Transform21.setDEF(CString("b"));
Transform21.setTranslation(new float[]{-0.036226,2.95521,-0.941064});
Transform21.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform21.setScale(new float[]{6.56332,0.999999,1.20494});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setAmbientIntensity(0);
Material24.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material24.setEmissiveColor(new float[]{0.43617,0.0,0.0460901});
Material24.setShininess(0);
Material24.setTransparency(0.265957);
Appearance23.addChild(&Material24);

Shape22.addChild(&Appearance23);

IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setCreaseAngle(0.5);
IndexedFaceSet25.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet25.setCoord(&Coordinate26);

Shape22.setGeometry(&IndexedFaceSet25);

Transform21.addChild(&Shape22);

Transform20.addChild(&Transform21);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("t"));
Transform27.setTranslation(new float[]{-0.0362264,3.40265,0.199348});
Transform27.setScale(new float[]{0.0304876,0.0304875,0.0304875});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setAmbientIntensity(0);
Material30.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material30.setEmissiveColor(new float[]{1.0,0.842126,0.0});
Material30.setShininess(0);
Appearance29.addChild(&Material30);

Shape28.addChild(&Appearance29);

Text& Text31 =  Text();
Text31.setString(new CString[]{CString("\"CLOCKWORK ORANGE\"")}, 1);
Text31.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle32 =  CFontStyle();
FontStyle32.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle32.setStyle(CString("BOLD"));
FontStyle32.setSize(24);
FontStyle32.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text31.setFontStyle(&FontStyle32);

Shape28.setGeometry(&Text31);

Transform27.addChild(&Shape28);

Transform20.addChild(&Transform27);

Transform& Transform33 =  Transform();
Transform33.setDEF(CString("f"));
Transform33.setTranslation(new float[]{-6.29659,2.92385,0.195083});
Transform33.setScale(new float[]{0.0285384,0.0285384,0.0285383});
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setAmbientIntensity(0);
Material36.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material36.setEmissiveColor(new float[]{1.0,1.0,1.0});
Material36.setShininess(0);
Appearance35.addChild(&Material36);

Shape34.addChild(&Appearance35);

Text& Text37 =  Text();
Text37.setString(new CString[]{CString("Die gefühlvolle Verfilmung des Frank-Sinatra-Hits \"), CString(" "I'm Singing In TheRain\"), CString(" "- Tanzen mit Fremden leichtgemacht...Kinostart: Herbst")}, 3);
Text37.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle38 =  CFontStyle();
FontStyle38.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle38.setSize(14);
Text37.setFontStyle(&FontStyle38);

Shape34.setGeometry(&Text37);

Transform33.addChild(&Shape34);

Transform20.addChild(&Transform33);

LOD19.addChildren(&Transform20);

Transform& Transform39 =  Transform();
LOD19.addChildren(&Transform39);

Collision10.addChildren(LOD19);

Anchor9.addChild(&Collision10);

Scene7.addChild(&Anchor9);

X3D0.setScene(&Scene7);

//}
