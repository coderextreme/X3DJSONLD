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
meta3.setContent(CString("Fri, 13 Nov 2015 10:12:58 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 13 Nov 2015 10:12:58 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("JumpPlatform"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("platformLOD"));
LOD& LOD11 =  LOD();
LOD11.setRange(new float[]{2.5}, 1);
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("platformAnim"));
Transform12.setCenter(new float[]{0.0393472,-0.651559,-0.0115353});
Group& Group13 =  Group();
Group& Group14 =  Group();
Group14.setDEF(CString("UnnamedAnimation2"));
TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("Time"));
TimeSensor15.setCycleInterval(1.5);
TimeSensor15.setStopTime(1);
Group14.addChild(&TimeSensor15);

Group13.addChild(&Group14);

PositionInterpolator& PositionInterpolator16 =  PositionInterpolator();
PositionInterpolator16.setDEF(CString("platformAnimTranslationInterp"));
PositionInterpolator16.setKey(new float[]{0.0,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533334,0.6,0.666667,0.75,0.833333,0.916667,1.0}, 14);
PositionInterpolator16.setKeyValue(new float[]{0.0,0.0,0.0,0.0,-2.28722,0.0,0.0,-2.20818,0.0,0.0,-1.99582,0.0,0.0,-1.68724,0.0,0.0,-1.31955,0.0,0.0,-0.929871,0.0,0.0,-0.555311,0.0,0.0,-0.232983,0.0,0.0,0.0,0.0,0.0,0.123708,0.0,0.0,0.109962,0.0,0.0,0.0412359,0.0,0.0,0.0,0.0}, 42);
Group13.addChild(&PositionInterpolator16);

Transform12.addChild(&Group13);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("platform"));
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("stone"));
Transform18.setTranslation(new float[]{-0.0705032,-0.371576,0.0145798});
Transform18.setRotation(new float[]{0.0,-1.0,0.0,0.374402});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setAmbientIntensity(0.433333);
Material21.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance20.addChild(&Material21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setDEF(CString("_1"));
ImageTexture22.setUrl(new CString[]{CString("fels1.png")}, 1);
Appearance20.addChild(&ImageTexture22);

Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setCreaseAngle(0.5);
IndexedFaceSet23.setColorIndex(new int[]{1,0,0,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1}, 54);
IndexedFaceSet23.setTexCoordIndex(new int32_t[]{0,9,7,2,-1,0,13,11,2,-1,14,2,4,16,-1,0,8,15,4,-1,10,2,6,18,-1,0,12,17,6,-1,7,9,1,-1,11,13,1,-1,14,16,3,-1,15,8,1,-1,10,18,5,-1,17,12,1,-1}, 54);
IndexedFaceSet23.setCoordIndex(new int32_t[]{1,7,6,2,-1,3,9,8,0,-1,9,3,4,10,-1,2,6,10,4,-1,7,1,5,11,-1,0,8,11,5,-1,6,7,12,-1,8,9,12,-1,9,10,12,-1,10,6,12,-1,7,11,12,-1,11,8,12,-1}, 54);
CColor& Color24 =  CColor();
Color24.setColor(new float[]{0.957447,0.642839,0.0227095,0.0,0.946524,0.280331}, 6);
IndexedFaceSet23.setColor(&Color24);

TextureCoordinate& TextureCoordinate25 =  TextureCoordinate();
TextureCoordinate25.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,0.5,0.0,0.5,1.0,0.5,0.0,0.5,1.0,1.0,0.5,0.0,0.5,0.0,0.5,1.0,0.5,1.0,0.5,0.0,0.5,0.0,0.5,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 38);
IndexedFaceSet23.setTexCoord(&TextureCoordinate25);

Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setPoint(new float[]{-0.931543,0.371576,0.931536,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,-1.31445,0.371576,-0.491099,0.0,0.371576,-1.66309,0.0,0.371576,1.53413,0.931543,0.0,-0.931536,1.49983,0.0,0.523687,-0.931543,0.0,0.931536,-1.31445,0.0,-0.491099,0.0,0.0,-1.66309,0.0,0.0,1.53413,0.0606067,-0.931541,0.00472414}, 39);
IndexedFaceSet23.setCoord(&Coordinate26);

Shape19.setGeometry(&IndexedFaceSet23);

Transform18.addChild(&Shape19);

Transform17.addChild(&Transform18);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("grass"));
Transform27.setTranslation(new float[]{-0.0705032,-0.371576,0.0145798});
Transform27.setRotation(new float[]{0.0,-1.0,0.0,0.374402});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setAmbientIntensity(0.358095);
Material30.setDiffuseColor(new float[]{0.0,0.446809,0.132331});
Appearance29.addChild(&Material30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setDEF(CString("_2"));
ImageTexture31.setUrl(new CString[]{CString("grass.png")}, 1);
Appearance29.addChild(&ImageTexture31);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet32 =  IndexedFaceSet();
IndexedFaceSet32.setCreaseAngle(0.5);
IndexedFaceSet32.setColorIndex(new int[]{0,0,1,-1,0,0,1,-1,1,0,0,-1,1,0,0,-1,0,0,1,-1,0,1,0,-1}, 24);
IndexedFaceSet32.setTexCoordIndex(new int32_t[]{0,1,3,-1,2,0,3,-1,3,1,4,-1,3,4,5,-1,6,2,3,-1,6,3,5,-1}, 24);
IndexedFaceSet32.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,2,1,4,-1,2,4,5,-1,6,3,2,-1,6,2,5,-1}, 24);
CColor& Color33 =  CColor();
Color33.setColor(new float[]{0.0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet32.setColor(&Color33);

TextureCoordinate& TextureCoordinate34 =  TextureCoordinate();
TextureCoordinate34.setPoint(new float[]{0.136057,0.214122,0.467063,0.0,0.0,0.719628,0.467063,0.550267,1.0,0.359043,0.798069,0.876129,0.467063,1.13607}, 14);
IndexedFaceSet32.setTexCoord(&TextureCoordinate34);

Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setPoint(new float[]{-0.931543,0.371576,0.931536,0.0,0.371576,1.53413,0.0,0.371576,-0.0144713,-1.31445,0.371576,-0.491099,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,0.0,0.371576,-1.66309}, 21);
IndexedFaceSet32.setCoord(&Coordinate35);

Shape28.setGeometry(&IndexedFaceSet32);

Transform27.addChild(&Shape28);

Transform17.addChild(&Transform27);

Transform12.addChild(&Transform17);

Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{-0.07416,1.25831,-0.0698821});
Transform36.setScale(new float[]{0.627701,3.17401,0.743179});
ProximitySensor& ProximitySensor37 =  ProximitySensor();
ProximitySensor37.setDEF(CString("_3"));
ProximitySensor37.setSize(new float[]{3.7886,1.30312,4.00496});
ProximitySensor37.setCenter(new float[]{-0.0393303,-0.199244,0.0114513});
Transform36.addChild(&ProximitySensor37);

Transform12.addChild(&Transform36);

LOD11.addChildren(&Transform12);

Transform& Transform38 =  Transform();
Transform38.setDEF(CString("platform_1"));
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{-0.0705032,-0.371576,0.0145798});
Transform39.setRotation(new float[]{0.0,-1.0,0.0,0.374402});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setAmbientIntensity(0.433333);
Material42.setDiffuseColor(new float[]{0.957447,0.642839,0.0227095});
Appearance41.addChild(&Material42);

ImageTexture& ImageTexture43 =  ImageTexture();
ImageTexture43.setUSE(CString("_1"));
Appearance41.addChild(&ImageTexture43);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet44 =  IndexedFaceSet();
IndexedFaceSet44.setCreaseAngle(0.5);
IndexedFaceSet44.setColorIndex(new int[]{1,0,0,1,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,1,1,0,-1,1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1}, 54);
IndexedFaceSet44.setTexCoordIndex(new int32_t[]{0,9,7,2,-1,0,13,11,2,-1,14,2,4,16,-1,0,8,15,4,-1,10,2,6,18,-1,0,12,17,6,-1,7,9,1,-1,11,13,1,-1,14,16,3,-1,15,8,1,-1,10,18,5,-1,17,12,1,-1}, 54);
IndexedFaceSet44.setCoordIndex(new int32_t[]{1,7,6,2,-1,3,9,8,0,-1,9,3,4,10,-1,2,6,10,4,-1,7,1,5,11,-1,0,8,11,5,-1,6,7,12,-1,8,9,12,-1,9,10,12,-1,10,6,12,-1,7,11,12,-1,11,8,12,-1}, 54);
CColor& Color45 =  CColor();
Color45.setColor(new float[]{0.957447,0.642839,0.0227095,0.0,0.946524,0.280331}, 6);
IndexedFaceSet44.setColor(&Color45);

TextureCoordinate& TextureCoordinate46 =  TextureCoordinate();
TextureCoordinate46.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,0.5,0.0,0.5,1.0,0.5,0.0,0.5,1.0,1.0,0.5,0.0,0.5,0.0,0.5,1.0,0.5,1.0,0.5,0.0,0.5,0.0,0.5,1.0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5}, 38);
IndexedFaceSet44.setTexCoord(&TextureCoordinate46);

Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{-0.931543,0.371576,0.931536,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,-1.31445,0.371576,-0.491099,0.0,0.371576,-1.66309,0.0,0.371576,1.53413,0.931543,0.0,-0.931536,1.49983,0.0,0.523687,-0.931543,0.0,0.931536,-1.31445,0.0,-0.491099,0.0,0.0,-1.66309,0.0,0.0,1.53413,0.0606067,-0.931541,0.00472414}, 39);
IndexedFaceSet44.setCoord(&Coordinate47);

Shape40.setGeometry(&IndexedFaceSet44);

Transform39.addChild(&Shape40);

Transform38.addChild(&Transform39);

Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[]{-0.0705032,-0.371576,0.0145798});
Transform48.setRotation(new float[]{0.0,-1.0,0.0,0.374402});
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Material51.setAmbientIntensity(0.358095);
Material51.setDiffuseColor(new float[]{0.0,0.446809,0.132331});
Appearance50.addChild(&Material51);

ImageTexture& ImageTexture52 =  ImageTexture();
ImageTexture52.setUSE(CString("_2"));
Appearance50.addChild(&ImageTexture52);

Shape49.addChild(&Appearance50);

IndexedFaceSet& IndexedFaceSet53 =  IndexedFaceSet();
IndexedFaceSet53.setCreaseAngle(0.5);
IndexedFaceSet53.setColorIndex(new int[]{0,0,1,-1,0,0,1,-1,1,0,0,-1,1,0,0,-1,0,0,1,-1,0,1,0,-1}, 24);
IndexedFaceSet53.setTexCoordIndex(new int32_t[]{0,1,3,-1,2,0,3,-1,3,1,4,-1,3,4,5,-1,6,2,3,-1,6,3,5,-1}, 24);
IndexedFaceSet53.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,2,1,4,-1,2,4,5,-1,6,3,2,-1,6,2,5,-1}, 24);
CColor& Color54 =  CColor();
Color54.setColor(new float[]{0.0,0.446809,0.132331,0.957447,0.642839,0.0227095}, 6);
IndexedFaceSet53.setColor(&Color54);

TextureCoordinate& TextureCoordinate55 =  TextureCoordinate();
TextureCoordinate55.setPoint(new float[]{0.136057,0.214122,0.467063,0.0,0.0,0.719628,0.467063,0.550267,1.0,0.359043,0.798069,0.876129,0.467063,1.13607}, 14);
IndexedFaceSet53.setTexCoord(&TextureCoordinate55);

Coordinate& Coordinate56 =  Coordinate();
Coordinate56.setPoint(new float[]{-0.931543,0.371576,0.931536,0.0,0.371576,1.53413,0.0,0.371576,-0.0144713,-1.31445,0.371576,-0.491099,1.49983,0.371576,0.523687,0.931543,0.371576,-0.931536,0.0,0.371576,-1.66309}, 21);
IndexedFaceSet53.setCoord(&Coordinate56);

Shape49.setGeometry(&IndexedFaceSet53);

Transform48.addChild(&Shape49);

Transform38.addChild(&Transform48);

LOD11.addChildren(&Transform38);

Transform10.addChild(&LOD11);

Transform9.addChild(&Transform10);

Scene7.addChild(&Transform9);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("_3"));
ROUTE57.setFromField(CString("enterTime"));
ROUTE57.setToNode(CString("Time"));
ROUTE57.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("Time"));
ROUTE58.setFromField(CString("fraction_changed"));
ROUTE58.setToNode(CString("platformAnimTranslationInterp"));
ROUTE58.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("platformAnimTranslationInterp"));
ROUTE59.setFromField(CString("value_changed"));
ROUTE59.setToNode(CString("platformAnim"));
ROUTE59.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE59);

X3D0.setScene(&Scene7);

//}
