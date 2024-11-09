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
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:54 GMT"));
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
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:54 GMT"));
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
TimeSensor16.setStartTime(952980617.71);
TimeSensor16.setStopTime(952972802.073);
Group15.addChild(&TimeSensor16);

Group14.addChild(&Group15);

OrientationInterpolator& OrientationInterpolator17 =  OrientationInterpolator();
OrientationInterpolator17.setDEF(CString("BonusRotationInterp"));
OrientationInterpolator17.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator17.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.57079,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,1.5708,0.0,0.0,1.0,0.0}, 20);
Group14.addChild(&OrientationInterpolator17);

Transform13.addChild(&Group14);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("Key"));
Transform18.setTranslation(new float[]{0.0,-0.350102,0.0});
Shape& Shape19 =  Shape();
IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setColorIndex(new int[]{1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,7,1,7,-1,1,7,7,-1,0,0,7,-1,0,1,7,-1,1,0,7,-1,0,1,7,-1,1,0,7,-1,1,1,0,-1,1,0,7,-1,0,1,7,-1,1,1,0,-1,3,3,3,3,-1,3,3,3,3,-1,1,7,0,-1,5,5,5,5,-1,1,7,7,-1,5,5,5,5,-1,7,7,1,-1,0,7,1,-1,2,2,2,2,-1,0,1,1,-1,3,3,3,3,-1,4,4,4,4,-1,5,5,5,5,-1,4,4,4,4,-1,5,5,5,5,-1,4,4,4,4,-1,3,3,3,3,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1,-1,6,6,6,6,-1,0,1,0,-1,3,3,3,3,-1,6,6,6,6,-1,1,0,1,-1,5,5,5,5,-1,0,7,1,-1,5,5,5,5,-1,0,1,7,-1,0,0,7,-1,0,1,7,-1,1,0,7,-1}, 221);
IndexedFaceSet20.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,7,5,-1,0,4,7,-1,8,9,10,-1,11,8,10,-1,6,5,12,-1,5,13,12,-1,14,6,12,-1,15,11,10,-1,13,15,12,-1,13,11,15,-1,9,16,10,-1,16,14,12,-1,9,14,16,-1,17,18,15,10,-1,19,17,10,16,-1,20,17,19,-1,21,20,9,8,-1,20,21,17,-1,22,21,8,11,-1,17,21,22,-1,18,17,22,-1,23,22,11,13,-1,18,22,23,-1,24,23,13,5,-1,25,24,5,7,-1,26,25,7,4,-1,27,26,4,3,-1,28,27,3,2,-1,29,28,2,1,-1,30,29,1,0,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,25,26,30,-1,24,25,30,-1,31,30,0,6,-1,24,30,31,-1,32,31,6,14,-1,32,14,9,20,-1,20,19,32,-1,33,19,16,12,-1,19,33,32,-1,18,33,12,15,-1,18,23,33,-1,24,31,33,-1,31,32,33,-1,23,24,33,-1}, 221);
CColor& Color21 =  CColor();
Color21.setColor(new float[]{0.0,0.910982,0.962567,0.0,0.662992,0.700535,0.0,0.308722,0.326203,0.0,0.334027,0.352941,0.0,0.288478,0.304813,0.0,0.60226,0.636364,0.0,0.556711,0.588235,0.755923,0.969105,1.0}, 24);
IndexedFaceSet20.setColor(&Color21);

Coordinate& Coordinate22 =  Coordinate();
Coordinate22.setPoint(new float[]{-0.153333,0.0353757,0.0928724,-0.309791,0.130475,0.0513265,-0.279367,0.172506,0.0329643,-0.237645,0.147146,0.0440432,-0.207221,0.189178,0.0256809,0.0274742,0.409666,-0.0706439,0.0900571,0.371627,-0.0540255,-0.155069,0.157478,0.0395296,0.19154,0.574078,-0.14247,0.325234,0.426781,-0.0781208,0.158346,0.52822,-0.122436,-0.00854155,0.629659,-0.166752,0.0919591,0.436504,-0.0823686,-0.0749286,0.537943,-0.126684,0.258847,0.335066,-0.038053,-0.0000131198,0.558441,-0.135639,0.250318,0.406283,-0.0691658,0.158346,0.563389,-0.0419336,-0.0000131198,0.59361,-0.0551364,0.250318,0.441452,0.0113371,0.325234,0.46195,0.00238207,0.19154,0.609247,-0.0619675,-0.00854153,0.664828,-0.0862492,-0.0749286,0.573112,-0.0461814,0.0274742,0.444836,0.00985895,-0.155069,0.192647,0.120032,-0.207221,0.224347,0.106184,-0.237645,0.182315,0.124546,-0.279367,0.207675,0.113467,-0.309791,0.165644,0.131829,-0.153333,0.0705449,0.173375,0.0900571,0.406796,0.0264773,0.258847,0.370235,0.0424499,0.0919591,0.471674,-0.00186576}, 102);
IndexedFaceSet20.setCoord(&Coordinate22);

Shape19.setGeometry(&IndexedFaceSet20);

Transform18.addChild(&Shape19);

Transform13.addChild(&Transform18);

Transform10.addChild(&Transform13);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("Glow2"));
Transform& Transform24 =  Transform();
Transform24.setDEF(CString("Glow"));
Billboard& Billboard25 =  Billboard();
Billboard25.setAxisOfRotation(new float[]{0.0,0.0,0.0});
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("glow"));
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("bk-glow.png")}, 1);
Appearance28.addChild(&ImageTexture29);

Shape27.addChild(&Appearance28);

IndexedFaceSet& IndexedFaceSet30 =  IndexedFaceSet();
IndexedFaceSet30.setColorIndex(new int[]{1,1,1,-1,1,1,1,-1}, 8);
IndexedFaceSet30.setTexCoordIndex(new int32_t[]{1,2,0,-1,2,3,0,-1}, 8);
IndexedFaceSet30.setCoordIndex(new int32_t[]{1,2,0,-1,2,3,0,-1}, 8);
CColor& Color31 =  CColor();
Color31.setColor(new float[]{0.8,0.198115,0.0,1.0,0.0603581,0.0}, 6);
IndexedFaceSet30.setColor(&Color31);

TextureCoordinate& TextureCoordinate32 =  TextureCoordinate();
TextureCoordinate32.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.5,0.0,0.5,0.5,1.0,0.5,0.0}, 16);
IndexedFaceSet30.setTexCoord(&TextureCoordinate32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-0.5,-0.502186,0.0,0.5,-0.502186,0.0,0.5,0.497814,0.0,-0.5,0.497814,0.0}, 12);
IndexedFaceSet30.setCoord(&Coordinate33);

Shape27.setGeometry(&IndexedFaceSet30);

Transform26.addChild(&Shape27);

Billboard25.addChild(&Transform26);

Transform24.addChild(&Billboard25);

Transform23.addChild(&Transform24);

Transform10.addChild(&Transform23);

Group8.addChild(&Transform10);

Scene7.addChild(&Group8);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("_1"));
ROUTE34.setFromField(CString("isActive"));
ROUTE34.setToNode(CString("Time"));
ROUTE34.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("_1"));
ROUTE35.setFromField(CString("enterTime"));
ROUTE35.setToNode(CString("Time"));
ROUTE35.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("_1"));
ROUTE36.setFromField(CString("exitTime"));
ROUTE36.setToNode(CString("Time"));
ROUTE36.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("Time"));
ROUTE37.setFromField(CString("fraction_changed"));
ROUTE37.setToNode(CString("BonusRotationInterp"));
ROUTE37.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("BonusRotationInterp"));
ROUTE38.setFromField(CString("value_changed"));
ROUTE38.setToNode(CString("Bonus"));
ROUTE38.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE38);

X3D0.setScene(&Scene7);

//}
