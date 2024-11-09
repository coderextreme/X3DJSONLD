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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:09 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:09 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("info"));
Transform9.setTranslation(new float[]{-0.0641994,0.0,0.0});
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("link"));
Anchor& Anchor11 =  Anchor();
Anchor11.setDescription(CString("Klicken Sie hier fr eine Reservierung."));
Anchor11.setUrl(new CString[]{CString("javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');")}, 1);
Transform& Transform12 =  Transform();
Anchor11.addChild(&Transform12);

Transform& Transform13 =  Transform();
Transform13.setTranslation(new float[]{14.9304,1.44228,-4.53928});
Transform13.setRotation(new float[]{0.0,1.0,0.0,4.71239});
Transform13.setScale(new float[]{1.15231,0.684961,0.863441});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
ImageTexture& ImageTexture16 =  ImageTexture();
ImageTexture16.setDEF(CString("_1"));
ImageTexture16.setUrl(new CString[]{CString("reflect1.png")}, 1);
Appearance15.addChild(&ImageTexture16);

Shape14.addChild(&Appearance15);

IndexedFaceSet& IndexedFaceSet17 =  IndexedFaceSet();
IndexedFaceSet17.setTexCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,8,9,10,11,-1}, 15);
IndexedFaceSet17.setCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1}, 15);
TextureCoordinate& TextureCoordinate18 =  TextureCoordinate();
TextureCoordinate18.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.5,0.0,0.5,1.0,0.25,0.0,0.25,0.271287,0.0518155,0.271287,0.418541,0.0469032,0.418541,0.0469032,0.0518155}, 24);
IndexedFaceSet17.setTexCoord(&TextureCoordinate18);

Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setPoint(new float[]{-2.0,-0.487787,0.0,2.0,-0.487787,0.0,2.0,0.575824,0.0,-2.0,0.575824,0.0,2.0,0.480384,0.0,-2.0,0.480384,0.0,2.0,-0.390195,0.0,-2.0,-0.390195,0.0}, 24);
IndexedFaceSet17.setCoord(&Coordinate19);

Shape14.setGeometry(&IndexedFaceSet17);

Transform13.addChild(&Shape14);

Anchor11.addChild(&Transform13);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{14.8995,1.3026,-6.67413});
Transform20.setRotation(new float[]{0.0,1.0,0.0,4.71239});
Transform20.setScale(new float[]{0.0311052,0.0311052,0.0311052});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("_2"));
Material23.setAmbientIntensity(0);
Material23.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material23.setEmissiveColor(new float[]{0.0105023,0.0,0.255319});
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

Text& Text24 =  Text();
Text24.setString(new CString[]{CString(", "), CString("Jetzt reservieren! ")}, 2);
Text24.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle25 =  CFontStyle();
FontStyle25.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle25.setSize(18);
Text24.setFontStyle(&FontStyle25);

Shape21.setGeometry(&Text24);

Transform20.addChild(&Shape21);

Anchor11.addChild(&Transform20);

Transform10.addChild(&Anchor11);

Transform9.addChild(&Transform10);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("reservier"));
Transform& Transform27 =  Transform();
Transform27.setTranslation(new float[]{14.9236,2.66827,-5.48662});
Transform27.setRotation(new float[]{0.0,-1.0,0.0,1.5708});
Transform27.setScale(new float[]{0.0341302,0.0341301,0.0341303});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setUSE(CString("_2"));
Appearance29.addChild(&Material30);

Shape28.addChild(&Appearance29);

Text& Text31 =  Text();
Text31.setString(new CString[]{CString(", "), CString("Mercedes-Benz lädt Sie, "), CString("zu einer Probefahrt ein! ")}, 3);
Text31.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle32 =  CFontStyle();
FontStyle32.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle32.setSize(14);
FontStyle32.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text31.setFontStyle(&FontStyle32);

Shape28.setGeometry(&Text31);

Transform27.addChild(&Shape28);

Transform26.addChild(&Transform27);

Transform9.addChild(&Transform26);

Transform& Transform33 =  Transform();
Transform33.setDEF(CString("slogan"));
Transform33.setTranslation(new float[]{14.9259,3.48694,-7.03026});
Transform33.setRotation(new float[]{0.0,-1.0,0.0,1.5708});
Transform33.setScale(new float[]{0.0311052,0.0311052,0.0311052});
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setUSE(CString("_2"));
Appearance35.addChild(&Material36);

Shape34.addChild(&Appearance35);

Text& Text37 =  Text();
Text37.setString(new CString[]{CString("neues Design, neue Ausstattung, mehr Spaß")}, 1);
Text37.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle38 =  CFontStyle();
FontStyle38.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle38.setSize(18);
Text37.setFontStyle(&FontStyle38);

Shape34.setGeometry(&Text37);

Transform33.addChild(&Shape34);

Transform9.addChild(&Transform33);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("title"));
Transform39.setTranslation(new float[]{14.9259,4.16814,-8.31291});
Transform39.setRotation(new float[]{0.0,-1.0,0.0,1.5708});
Transform39.setScale(new float[]{0.0311052,0.0311052,0.0311052});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setUSE(CString("_2"));
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

Text& Text43 =  Text();
Text43.setString(new CString[]{CString("Die neue A-Klasse ist da!")}, 1);
Text43.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle44 =  CFontStyle();
FontStyle44.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle44.setSize(24);
Text43.setFontStyle(&FontStyle44);

Shape40.setGeometry(&Text43);

Transform39.addChild(&Shape40);

Transform9.addChild(&Transform39);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{14.9304,4.4196,-3.98687});
Transform45.setRotation(new float[]{0.0,1.0,0.0,4.71239});
Transform45.setScale(new float[]{2.29482,0.793292,1.0});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
ImageTexture& ImageTexture48 =  ImageTexture();
ImageTexture48.setUSE(CString("_1"));
Appearance47.addChild(&ImageTexture48);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet49 =  IndexedFaceSet();
IndexedFaceSet49.setTexCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,8,9,10,11,-1}, 15);
IndexedFaceSet49.setCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1}, 15);
TextureCoordinate& TextureCoordinate50 =  TextureCoordinate();
TextureCoordinate50.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.5,0.0,0.5,1.0,0.25,0.0,0.25,0.271287,0.0518155,0.271287,0.418541,0.0469032,0.418541,0.0469032,0.0518155}, 24);
IndexedFaceSet49.setTexCoord(&TextureCoordinate50);

Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setPoint(new float[]{-2.0,-0.487787,0.0,2.0,-0.487787,0.0,2.0,0.575824,0.0,-2.0,0.575824,0.0,2.0,0.480384,0.0,-2.0,0.480384,0.0,2.0,-0.390195,0.0,-2.0,-0.390195,0.0}, 24);
IndexedFaceSet49.setCoord(&Coordinate51);

Shape46.setGeometry(&IndexedFaceSet49);

Transform45.addChild(&Shape46);

Transform9.addChild(&Transform45);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

//}
