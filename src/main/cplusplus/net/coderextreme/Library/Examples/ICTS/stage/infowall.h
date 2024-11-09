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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:08 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:08 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setTranslation(new float[]{0.0,-0.13131,-4.24642});
Anchor& Anchor10 =  Anchor();
Anchor10.setDescription(CString("Klicken Sie hier fr mehr Informationen."));
Anchor10.setUrl(new CString[]{CString("javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');")}, 1);
Transform& Transform11 =  Transform();
Transform11.setTranslation(new float[]{0.0,0.0,4.24642});
Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{0.849871,1.24305,0.438164});
Transform12.setRotation(new float[]{0.0,1.0,0.0,4.40104});
Transform12.setScale(new float[]{0.0166332,0.0166332,0.0166331});
Transform12.setScaleOrientation(new float[]{0.0,-1.0,0.0,0.0475829});
Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setAmbientIntensity(0);
Material15.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material15.setEmissiveColor(new float[]{0.0105023,0.0,0.255319});
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

Text& Text16 =  Text();
Text16.setString(new CString[]{CString("Klicken Sie hier für mehr Informationen")}, 1);
Text16.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle17 =  CFontStyle();
FontStyle17.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle17.setSize(14);
FontStyle17.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text16.setFontStyle(&FontStyle17);

Shape13.setGeometry(&Text16);

Transform12.addChild(&Shape13);

Transform11.addChild(&Transform12);

Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{0.87594,1.32607,0.433684});
Transform18.setRotation(new float[]{0.0,1.0,0.0,4.40105});
Transform18.setScale(new float[]{1.04406,0.312523,0.572791});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setDEF(CString("_1"));
ImageTexture21.setUrl(new CString[]{CString("reflect1.png")}, 1);
Appearance20.addChild(&ImageTexture21);

Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet22 =  IndexedFaceSet();
IndexedFaceSet22.setTexCoordIndex(new int32_t[]{8,2,3,9,-1,0,1,10,11,-1,6,4,5,7,-1}, 15);
IndexedFaceSet22.setCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1}, 15);
TextureCoordinate& TextureCoordinate23 =  TextureCoordinate();
TextureCoordinate23.setPoint(new float[]{0.0,0.0,0.817739,0.049106,0.806606,0.16361,-0.0111324,0.114504,0.285304,0.614504,0.047491,0.614504,0.275742,0.535128,0.0379284,0.535128,0.817739,0.049106,0.0,0.0,0.799982,0.181014,-0.0177568,0.131908}, 24);
IndexedFaceSet22.setTexCoord(&TextureCoordinate23);

Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{-2.0,-0.590364,0.0,2.0,-0.590364,0.0,2.0,0.5,0.0,-2.0,0.5,0.0,2.0,0.405434,0.0,-2.0,0.405434,0.0,2.0,-0.475578,0.0,-2.0,-0.475578,0.0}, 24);
IndexedFaceSet22.setCoord(&Coordinate24);

Shape19.setGeometry(&IndexedFaceSet22);

Transform18.addChild(&Shape19);

Transform11.addChild(&Transform18);

Anchor10.addChild(&Transform11);

Transform9.addChild(&Anchor10);

Scene7.addChild(&Transform9);

Transform& Transform25 =  Transform();
Transform25.setTranslation(new float[]{0.680146,3.24833,0.131503});
Transform25.setRotation(new float[]{0.0,1.0,0.0,4.40104});
Transform25.setScale(new float[]{0.0166332,0.0166332,0.0166331});
Transform25.setScaleOrientation(new float[]{0.0,-1.0,0.0,0.0411904});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setAmbientIntensity(0);
Material28.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material28.setEmissiveColor(new float[]{0.0105023,0.0,0.255319});
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

Text& Text29 =  Text();
Text29.setString(new CString[]{CString("Wir zeigen Ihnen, wo es langgeht!")}, 1);
Text29.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle30 =  CFontStyle();
FontStyle30.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle30.setSize(24);
FontStyle30.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text29.setFontStyle(&FontStyle30);

Shape26.setGeometry(&Text29);

Transform25.addChild(&Shape26);

Scene7.addChild(&Transform25);

Transform& Transform31 =  Transform();
Transform31.setTranslation(new float[]{1.62071,1.56621,-2.5691});
Transform31.setRotation(new float[]{0.0,-1.0,0.0,1.43136});
Transform31.setScale(new float[]{1.83524,1.83524,1.83524});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setUrl(new CString[]{CString("nposter7.jpg")}, 1);
Appearance33.addChild(&ImageTexture34);

TextureTransform& TextureTransform35 =  TextureTransform();
Appearance33.setTextureTransform(TextureTransform35);

Shape32.addChild(&Appearance33);

IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setCoordIndex(new int32_t[]{3,2,1,0,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate37 =  TextureCoordinate();
TextureCoordinate37.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet36.setTexCoord(&TextureCoordinate37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{-0.5,-1.21971,0.0,0.5,-1.21971,0.0,0.5,-2.19099,0.0,-0.5,-2.19099,0.0,-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 24);
IndexedFaceSet36.setCoord(&Coordinate38);

Shape32.setGeometry(&IndexedFaceSet36);

Transform31.addChild(&Shape32);

Scene7.addChild(&Transform31);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("gpswall"));
Transform39.setTranslation(new float[]{-4.9369,0.156386,-4.67969});
Transform39.setScale(new float[]{0.365073,0.310739,0.365073});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
ImageTexture& ImageTexture42 =  ImageTexture();
ImageTexture42.setDEF(CString("_2"));
ImageTexture42.setUrl(new CString[]{CString("reflect1.png")}, 1);
Appearance41.addChild(&ImageTexture42);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setSolid(false);
IndexedFaceSet43.setConvex(false);
IndexedFaceSet43.setCreaseAngle(1.09275);
IndexedFaceSet43.setColorIndex(new int[]{2,0,0,4,-1,5,0,0,7,-1,8,1,0,6,-1,3,0,1,9,-1,0,0,10,12,-1,10,5,7,12,-1,0,0,13,14,-1,13,2,4,14,-1,0,1,16,11,-1,16,8,6,11,-1,1,0,15,17,-1,15,3,9,17,-1}, 60);
IndexedFaceSet43.setTexCoordIndex(new int32_t[]{10,9,7,11,-1,12,2,3,13,-1,14,5,2,12,-1,11,7,5,14,-1,0,1,15,16,-1,26,27,28,29,-1,6,8,17,18,-1,20,21,23,22,-1,1,4,19,15,-1,24,25,27,26,-1,4,6,18,19,-1,22,23,25,24,-1}, 60);
IndexedFaceSet43.setCoordIndex(new int32_t[]{10,9,7,11,-1,12,2,3,13,-1,14,5,2,12,-1,11,7,5,14,-1,0,1,15,16,-1,15,12,13,16,-1,6,8,17,18,-1,17,10,11,18,-1,1,4,19,15,-1,19,14,12,15,-1,4,6,18,19,-1,18,11,14,19,-1}, 60);
CColor& Color44 =  CColor();
Color44.setColor(new float[]{0.648936,0.634597,0.645351,1.0,1.0,1.0,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1.0,1.0,1.0,1.0,1.0,1.0,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1.0,1.0,1.0,1.0,1.0,1.0}, 54);
IndexedFaceSet43.setColor(&Color44);

TextureCoordinate& TextureCoordinate45 =  TextureCoordinate();
TextureCoordinate45.setPoint(new float[]{0.0,0.0,0.380598,0.0899431,-0.535154,3.96498,-0.915752,3.87504,0.860324,0.203312,-0.0554278,4.07835,1.39199,0.328955,0.476236,4.204,1.92365,0.454598,1.0079,4.32964,1.03128,4.23073,0.499611,4.10508,-0.511779,3.86607,-0.892376,3.77613,-0.0320526,3.97944,0.353306,0.205428,-0.0272913,0.115484,1.89636,0.570083,1.3647,0.44444,0.833032,0.318797,-0.0707566,0.175867,-0.12258,0.645321,-0.122945,0.169169,-0.174768,0.638623,-0.175133,0.162471,-0.226956,0.631925,-0.222223,0.156428,-0.274046,0.625881,-0.311406,0.621087,-0.259583,0.151633}, 60);
IndexedFaceSet43.setTexCoord(&TextureCoordinate45);

Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{10.866,0.03,23.152,14.955,0.03,19.063,14.955,10.438,19.063,10.866,10.438,23.152,17.581,0.03,13.909,17.581,10.438,13.909,18.486,0.03,8.197,18.486,10.438,8.197,17.581,0.03,2.485,17.581,10.438,2.485,17.581,10.1723,2.485,18.486,10.1723,8.197,14.955,10.1723,19.063,10.866,10.1723,23.152,17.581,10.1723,13.909,14.955,0.340181,19.063,10.866,0.34018,23.152,17.581,0.340181,2.485,18.486,0.34018,8.197,17.581,0.340181,13.909}, 60);
IndexedFaceSet43.setCoord(&Coordinate46);

Shape40.setGeometry(&IndexedFaceSet43);

Transform39.addChild(&Shape40);

Scene7.addChild(&Transform39);

Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{-4.9369,0.156386,-4.67969});
Transform47.setScale(new float[]{0.365073,0.310739,0.365073});
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setUSE(CString("_2"));
Appearance49.addChild(&ImageTexture50);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setSolid(false);
IndexedFaceSet51.setConvex(false);
IndexedFaceSet51.setCreaseAngle(1.09275);
IndexedFaceSet51.setColorIndex(new int[]{4,0,0,2,-1,7,0,0,5,-1,6,0,1,8,-1,9,1,0,3,-1,12,10,0,0,-1,12,7,5,10,-1,14,13,0,0,-1,14,4,2,13,-1,11,16,1,0,-1,11,6,8,16,-1,17,15,0,1,-1,17,9,3,15,-1}, 60);
IndexedFaceSet51.setTexCoordIndex(new int32_t[]{11,7,9,10,-1,13,3,2,12,-1,12,2,5,14,-1,14,5,7,11,-1,16,15,1,0,-1,29,28,27,26,-1,18,17,8,6,-1,22,23,21,20,-1,15,19,4,1,-1,26,27,25,24,-1,19,18,6,4,-1,24,25,23,22,-1}, 60);
IndexedFaceSet51.setCoordIndex(new int32_t[]{11,7,9,10,-1,13,3,2,12,-1,12,2,5,14,-1,14,5,7,11,-1,16,15,1,0,-1,16,13,12,15,-1,18,17,8,6,-1,18,11,10,17,-1,15,19,4,1,-1,15,12,14,19,-1,19,18,6,4,-1,19,14,11,18,-1}, 60);
CColor& Color52 =  CColor();
Color52.setColor(new float[]{0.648936,0.634597,0.645351,1.0,1.0,1.0,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1.0,1.0,1.0,1.0,1.0,1.0,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1.0,1.0,1.0,1.0,1.0,1.0}, 54);
IndexedFaceSet51.setColor(&Color52);

TextureCoordinate& TextureCoordinate53 =  TextureCoordinate();
TextureCoordinate53.setPoint(new float[]{0.0,0.0,0.380598,0.0899431,-0.535154,3.96498,-0.915752,3.87504,0.860324,0.203312,-0.0554278,4.07835,1.39199,0.328955,0.476236,4.204,1.92365,0.454598,1.0079,4.32964,1.03128,4.23073,0.499611,4.10508,-0.511779,3.86607,-0.892376,3.77613,-0.0320526,3.97944,0.353306,0.205428,-0.0272913,0.115484,1.89636,0.570083,1.3647,0.44444,0.833032,0.318797,-0.0707566,0.175867,-0.12258,0.645321,-0.122945,0.169169,-0.174768,0.638623,-0.175133,0.162471,-0.226956,0.631925,-0.222223,0.156428,-0.274046,0.625881,-0.311406,0.621087,-0.259583,0.151633}, 60);
IndexedFaceSet51.setTexCoord(&TextureCoordinate53);

Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{10.866,-1.09944,23.152,14.955,-1.09944,19.063,14.955,-11.5074,19.063,10.866,-11.5074,23.152,17.581,-1.09944,13.909,17.581,-11.5074,13.909,18.486,-1.09944,8.197,18.486,-11.5074,8.197,17.581,-1.09944,2.485,17.581,-11.5074,2.485,17.581,-11.2417,2.485,18.486,-11.2417,8.197,14.955,-11.2417,19.063,10.866,-11.2417,23.152,17.581,-11.2417,13.909,14.955,-1.40962,19.063,10.866,-1.40962,23.152,17.581,-1.40962,2.485,18.486,-1.40962,8.197,17.581,-1.40962,13.909}, 60);
IndexedFaceSet51.setCoord(&Coordinate54);

Shape48.setGeometry(&IndexedFaceSet51);

Transform47.addChild(&Shape48);

Scene7.addChild(&Transform47);

Transform& Transform55 =  Transform();
Transform55.setTranslation(new float[]{0.70189,3.3865,0.136921});
Transform55.setRotation(new float[]{0.0,1.0,0.0,4.40105});
Transform55.setScale(new float[]{1.56978,0.545617,1.0});
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
ImageTexture& ImageTexture58 =  ImageTexture();
ImageTexture58.setUSE(CString("_1"));
Appearance57.addChild(&ImageTexture58);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet59 =  IndexedFaceSet();
IndexedFaceSet59.setSolid(false);
IndexedFaceSet59.setTexCoordIndex(new int32_t[]{8,2,3,9,-1,0,1,10,11,-1,6,4,5,7,-1}, 15);
IndexedFaceSet59.setCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1}, 15);
TextureCoordinate& TextureCoordinate60 =  TextureCoordinate();
TextureCoordinate60.setPoint(new float[]{0.0,0.0,0.817739,0.049106,0.806606,0.16361,-0.0111324,0.114504,0.285304,0.614504,0.047491,0.614504,0.275742,0.535128,0.0379284,0.535128,0.817739,0.049106,0.0,0.0,0.799982,0.181014,-0.0177568,0.131908}, 24);
IndexedFaceSet59.setTexCoord(&TextureCoordinate60);

Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{-2.0,-0.590364,0.0,2.0,-0.590364,0.0,2.0,0.5,0.0,-2.0,0.5,0.0,2.0,0.405434,0.0,-2.0,0.405434,0.0,2.0,-0.475578,0.0,-2.0,-0.475578,0.0}, 24);
IndexedFaceSet59.setCoord(&Coordinate61);

Shape56.setGeometry(&IndexedFaceSet59);

Transform55.addChild(&Shape56);

Scene7.addChild(&Transform55);

Transform& Transform62 =  Transform();
Transform62.setTranslation(new float[]{0.857668,2.29135,0.413938});
Transform62.setRotation(new float[]{0.0,1.0,0.0,4.40104});
Transform62.setScale(new float[]{0.0166332,0.0166332,0.0166331});
Transform62.setScaleOrientation(new float[]{0.0,-1.0,0.0,0.0512221});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
Material& Material65 =  Material();
Material65.setAmbientIntensity(0);
Material65.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material65.setEmissiveColor(new float[]{0.0105023,0.0,0.255319});
Appearance64.addChild(&Material65);

Shape63.addChild(&Appearance64);

Text& Text66 =  Text();
Text66.setString(new CString[]{CString(", "), CString("Sicher ans Ziel mit Fahrzeugen von, "), CString("Mercedes-Benz., "), CString("Den besten Weg dorthin finden Siemit Hilfe unseres neuen GPS-Systems.")}, 4);
Text66.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle67 =  CFontStyle();
FontStyle67.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle67.setSize(14);
FontStyle67.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text66.setFontStyle(&FontStyle67);

Shape63.setGeometry(&Text66);

Transform62.addChild(&Shape63);

Scene7.addChild(&Transform62);

Transform& Transform68 =  Transform();
Transform68.setTranslation(new float[]{0.538423,-4.54485e-7,0.0512834});
Transform68.setRotation(new float[]{-0.9843,-0.124808,-0.124808,1.58662});
Transform68.setScale(new float[]{3.84786,15.2707,3.84786});
Transform68.setScaleOrientation(new float[]{-5.11952e-7,-1.0,4.71969e-9,0.0184387});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
ImageTexture& ImageTexture71 =  ImageTexture();
ImageTexture71.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance70.addChild(&ImageTexture71);

Shape69.addChild(&Appearance70);

IndexedFaceSet& IndexedFaceSet72 =  IndexedFaceSet();
IndexedFaceSet72.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate73 =  TextureCoordinate();
TextureCoordinate73.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet72.setTexCoord(&TextureCoordinate73);

Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet72.setCoord(&Coordinate74);

Shape69.setGeometry(&IndexedFaceSet72);

Transform68.addChild(&Shape69);

Scene7.addChild(&Transform68);

Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{-0.392339,1.56621,3.17072});
Transform75.setRotation(new float[]{0.0,1.0,0.0,3.92957});
Transform75.setScale(new float[]{1.34079,1.83524,1.83524});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setUrl(new CString[]{CString("nposter4.jpg")}, 1);
Appearance77.addChild(&ImageTexture78);

TextureTransform& TextureTransform79 =  TextureTransform();
Appearance77.setTextureTransform(TextureTransform79);

Shape76.addChild(&Appearance77);

IndexedFaceSet& IndexedFaceSet80 =  IndexedFaceSet();
IndexedFaceSet80.setCoordIndex(new int32_t[]{3,2,1,0,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate81 =  TextureCoordinate();
TextureCoordinate81.setPoint(new float[]{0.895677,0.00903876,0.480148,0.00903876,0.480148,0.990512,0.895677,0.990512,0.895677,0.00903876,0.480148,0.00903876,0.480148,0.990512,0.895677,0.990512}, 16);
IndexedFaceSet80.setTexCoord(&TextureCoordinate81);

Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setPoint(new float[]{-0.5,-1.21971,0.0,0.5,-1.21971,0.0,0.5,-2.19099,0.0,-0.5,-2.19099,0.0,-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 24);
IndexedFaceSet80.setCoord(&Coordinate82);

Shape76.setGeometry(&IndexedFaceSet80);

Transform75.addChild(&Shape76);

Scene7.addChild(&Transform75);

X3D0.setScene(&Scene7);

//}
