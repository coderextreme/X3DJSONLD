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
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:55 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:55 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Group8.addChild(&WorldInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("level2"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("VisibilitySensor"));
VisibilitySensor& VisibilitySensor12 =  VisibilitySensor();
VisibilitySensor12.setDEF(CString("_1"));
VisibilitySensor12.setSize(new float[]{0.7,0.7,0.7});
Transform11.addChild(&VisibilitySensor12);

Transform10.addChild(&Transform11);

Transform& Transform13 =  Transform();
Transform13.setDEF(CString("Bonus"));
Group& Group14 =  Group();
Group14.setDEF(CString("rotate"));
Group& Group15 =  Group();
Group15.setDEF(CString("Bonus_1"));
TimeSensor& TimeSensor16 =  TimeSensor();
TimeSensor16.setDEF(CString("Time"));
TimeSensor16.setCycleInterval(10);
TimeSensor16.setLoop(true);
TimeSensor16.setStartTime(952978098.016901);
TimeSensor16.setStopTime(952972802.072958);
Group15.addChild(&TimeSensor16);

Group14.addChild(&Group15);

OrientationInterpolator& OrientationInterpolator17 =  OrientationInterpolator();
OrientationInterpolator17.setDEF(CString("BonusRotationInterp"));
OrientationInterpolator17.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator17.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.57079,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,1.5708,0.0,0.0,1.0,0.0}, 20);
Group14.addChild(&OrientationInterpolator17);

Transform13.addChild(&Group14);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("pink"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet21 =  IndexedFaceSet();
IndexedFaceSet21.setColorPerVertex(false);
IndexedFaceSet21.setColorIndex(new int[]{0,1,2,3,4,5,6,7,8,9,10,11}, 12);
IndexedFaceSet21.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,0,2,4,5,-1,3,6,4,2,-1,4,7,5,-1,6,7,4,-1,7,6,8,-1,6,3,8,-1,5,7,8,-1,3,1,8,-1,5,8,0,-1,1,0,8,-1}, 50);
CColor& Color22 =  CColor();
Color22.setColor(new float[]{1.0,0.0,0.155583,1.0,0.0,0.370293,0.8,0.0,0.612321,0.8,0.0151274,0.373652,1.0,0.0,0.462642,1.0,0.135478,0.337722,1.0,0.0,0.596723,1.0,0.0156003,0.918097,0.984243,0.0,1.0,1.0,0.0,0.646092,1.0,0.0,0.561501,1.0,0.0,0.819442}, 36);
IndexedFaceSet21.setColor(&Color22);

Coordinate& Coordinate23 =  Coordinate();
Coordinate23.setPoint(new float[]{-0.2,0.145225,-0.1,-0.3,0.145225,0.0,-0.2,0.253825,0.0,-0.2,0.145225,0.1,0.2,0.253825,0.0,0.2,0.145225,-0.1,0.2,0.145225,0.1,0.3,0.145225,0.0,0.0,-0.253825,0.0}, 27);
IndexedFaceSet21.setCoord(&Coordinate23);

Shape19.setGeometry(&IndexedFaceSet21);

Transform18.addChild(&Shape19);

Transform13.addChild(&Transform18);

Transform10.addChild(&Transform13);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("Glow2"));
Transform& Transform25 =  Transform();
Transform25.setDEF(CString("Glow"));
Billboard& Billboard26 =  Billboard();
Billboard26.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Transform& Transform27 =  Transform();
Transform27.setDEF(CString("glow"));
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("bv-glow.png")}, 1);
Appearance29.addChild(&ImageTexture30);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setColorIndex(new int[]{1,1,1,-1,1,1,1,-1}, 8);
IndexedFaceSet31.setCoordIndex(new int32_t[]{1,2,0,-1,2,3,0,-1}, 8);
CColor& Color32 =  CColor();
Color32.setColor(new float[]{0.8,0.198115,0.0,1.0,0.0603581,0.0}, 6);
IndexedFaceSet31.setColor(&Color32);

TextureCoordinate& TextureCoordinate33 =  TextureCoordinate();
TextureCoordinate33.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.5,0.0,0.5,0.5,1.0,0.5,0.0}, 16);
IndexedFaceSet31.setTexCoord(&TextureCoordinate33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-0.5,-0.502186,0.0,0.5,-0.502186,0.0,0.5,0.497814,0.0,-0.5,0.497814,0.0}, 12);
IndexedFaceSet31.setCoord(&Coordinate34);

Shape28.setGeometry(&IndexedFaceSet31);

Transform27.addChild(&Shape28);

Billboard26.addChild(&Transform27);

Transform25.addChild(&Billboard26);

Transform24.addChild(&Transform25);

Transform10.addChild(&Transform24);

Group8.addChild(&Transform10);

Scene7.addChild(&Group8);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("_1"));
ROUTE35.setFromField(CString("isActive"));
ROUTE35.setToNode(CString("Time"));
ROUTE35.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("_1"));
ROUTE36.setFromField(CString("enterTime"));
ROUTE36.setToNode(CString("Time"));
ROUTE36.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("_1"));
ROUTE37.setFromField(CString("exitTime"));
ROUTE37.setToNode(CString("Time"));
ROUTE37.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("Time"));
ROUTE38.setFromField(CString("fraction_changed"));
ROUTE38.setToNode(CString("BonusRotationInterp"));
ROUTE38.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("BonusRotationInterp"));
ROUTE39.setFromField(CString("value_changed"));
ROUTE39.setToNode(CString("Bonus"));
ROUTE39.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE39);

X3D0.setScene(&Scene7);

//}
