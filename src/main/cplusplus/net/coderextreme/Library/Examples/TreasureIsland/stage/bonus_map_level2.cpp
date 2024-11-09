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
TimeSensor16.setLoop(True);
TimeSensor16.setStartTime(952980662.314819);
TimeSensor16.setStopTime(952972802.072958);
Group15.addChild(&TimeSensor16);

Group14.addChild(&Group15);

OrientationInterpolator& OrientationInterpolator17 =  OrientationInterpolator();
OrientationInterpolator17.setDEF(CString("BonusRotationInterp"));
OrientationInterpolator17.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator17.setKeyValue(new float[]{0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0}, 20);
Group14.addChild(&OrientationInterpolator17);

Transform13.addChild(&Group14);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("map"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setUrl(new CString[]{CString("map.png")}, 1);
Appearance20.addChild(&ImageTexture21);

Shape19.addChild(&Appearance20);

IndexedFaceSet& IndexedFaceSet22 =  IndexedFaceSet();
IndexedFaceSet22.setSolid(False);
IndexedFaceSet22.setColorIndex(new int[]{5,0,0,0,-1,0,0,4,0,-1,4,0,0,4,-1,0,5,4,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,5,1,0,4,-1,1,1,1,0,-1,1,0,0,0,-1,0,4,4,0,-1,0,0,0,0,-1,0,0,4,0,-1,0,1,0,0,-1,0,5,0,0,-1,0,5,0,0,-1,5,1,0,0,-1,0,6,4,0,-1,4,0,0,0,-1,0,4,4,0,-1,4,6,3,4,-1,2,4,4,3,-1,4,0,0,4,-1}, 120);
IndexedFaceSet22.setTexCoordIndex(new int32_t[]{10,8,16,14,-1,16,7,11,14,-1,12,6,20,22,-1,9,23,21,20,-1,28,7,15,26,-1,8,29,25,15,-1,19,6,27,32,-1,33,9,19,31,-1,23,36,35,21,-1,36,1,18,35,-1,18,4,38,34,-1,38,12,22,34,-1,4,17,39,37,-1,39,13,11,37,-1,17,2,41,40,-1,41,10,13,40,-1,29,44,43,25,-1,44,3,24,43,-1,24,5,45,42,-1,45,28,26,42,-1,27,46,47,32,-1,46,5,30,47,-1,0,49,48,30,-1,49,33,31,48,-1}, 120);
IndexedFaceSet22.setCoordIndex(new int32_t[]{9,7,12,11,-1,12,6,10,11,-1,10,6,15,16,-1,8,17,16,15,-1,20,6,12,19,-1,7,21,19,12,-1,15,6,20,23,-1,24,8,15,23,-1,17,26,25,16,-1,26,1,14,25,-1,14,4,27,25,-1,27,10,16,25,-1,4,13,28,27,-1,28,11,10,27,-1,13,2,29,28,-1,29,9,11,28,-1,21,31,30,19,-1,31,3,18,30,-1,18,5,32,30,-1,32,20,19,30,-1,20,32,33,23,-1,32,5,22,33,-1,0,34,33,22,-1,34,24,23,33,-1}, 120);
CColor& Color23 =  CColor();
Color23.setColor(new float[]{0,0.994652,0.0530078,0,0.0802139,0.00427482,0.00268255,0.00534759,0.00185254,0.00657697,0.0855615,0,0.507602,1,0.520794,0.292398,0.582888,0.201927,0.0643812,0.128342,0.0444611}, 21);
IndexedFaceSet22.setColor(&Color23);

TextureCoordinate& TextureCoordinate24 =  TextureCoordinate();
TextureCoordinate24.setPoint(new float[]{0,1,0,0,1,0,1,1,0.5,0,0.5,1,0.5,0.5,0.5,0.5,1,0.5,0,0.5,1,0.25,0.5,0.25,0.5,0.25,0.75,0.25,0.75,0.25,0.75,0.5,0.75,0.5,0.75,0,0.25,0,0.25,0.5,0.25,0.5,0.25,0.25,0.25,0.25,0,0.25,0.75,1,0.75,0.75,0.75,0.75,0.5,0.75,0.5,0.75,1,0.75,0.25,1,0.25,0.75,0.25,0.75,0,0.75,0.25,0.125,0.25,0.125,0,0.125,0.5,0.125,0.5,0.125,0.75,0.125,0.75,0.125,1,0.125,0.75,0.875,0.75,0.875,1,0.875,0.5,0.875,0.5,0.875,0.25,0.875,0.25,0.875,0,0.875}, 100);
IndexedFaceSet22.setTexCoord(&TextureCoordinate24);

Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{-0.232,0.273168,-0.226739,-0.333929,-0.162928,0.210846,0.297991,-0.202996,0.285449,0.396579,0.19441,-0.15704,-0.0248242,-0.182538,0.241728,0.0783271,0.20861,-0.219799,0.0239771,-0.021532,-0.0165396,0.337583,-0.0614239,0.0216968,-0.285757,0.0495922,-0.0200782,0.3098,-0.177081,0.128903,-0.00380613,-0.137189,0.0906666,0.152948,-0.145528,0.122294,0.180731,-0.0298708,0.0150882,0.137255,-0.191823,0.273715,-0.172454,-0.187813,0.216983,-0.133622,0.00276077,-0.0311745,-0.161405,-0.112897,0.0760317,-0.31354,-0.0660653,0.087128,0.235573,0.200184,-0.188138,0.211589,0.107577,-0.061054,0.0523191,0.116363,-0.0928517,0.368441,0.0760238,-0.0544453,-0.0775001,0.232477,-0.234434,-0.0962133,0.138475,-0.107489,-0.248897,0.185485,-0.0963427,-0.167935,-0.152967,0.14504,-0.320423,-0.106021,0.156169,-0.0161747,-0.175856,0.159677,0.143522,-0.177102,0.195265,0.300374,-0.208655,0.201874,0.224811,0.161155,-0.119063,0.381663,0.129602,-0.112454,0.0659508,0.169868,-0.150833,-0.0840576,0.192335,-0.16547,-0.236652,0.239316,-0.154331}, 105);
IndexedFaceSet22.setCoord(&Coordinate25);

Shape19.setGeometry(&IndexedFaceSet22);

Transform18.addChild(&Shape19);

Transform13.addChild(&Transform18);

Transform10.addChild(&Transform13);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Glow2"));
Transform& Transform27 =  Transform();
Transform27.setDEF(CString("Glow"));
Billboard& Billboard28 =  Billboard();
Billboard28.setAxisOfRotation(new float[]{0,0,0});
Transform& Transform29 =  Transform();
Transform29.setDEF(CString("glow"));
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("bm-glow.png")}, 1);
Appearance31.addChild(&ImageTexture32);

Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setColorIndex(new int[]{1,1,1,-1,1,1,1,-1}, 8);
IndexedFaceSet33.setCoordIndex(new int32_t[]{1,2,0,-1,2,3,0,-1}, 8);
CColor& Color34 =  CColor();
Color34.setColor(new float[]{0.8,0.198115,0,1,0.0603581,0}, 6);
IndexedFaceSet33.setColor(&Color34);

TextureCoordinate& TextureCoordinate35 =  TextureCoordinate();
TextureCoordinate35.setPoint(new float[]{0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0}, 16);
IndexedFaceSet33.setTexCoord(&TextureCoordinate35);

Coordinate& Coordinate36 =  Coordinate();
Coordinate36.setPoint(new float[]{-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0}, 12);
IndexedFaceSet33.setCoord(&Coordinate36);

Shape30.setGeometry(&IndexedFaceSet33);

Transform29.addChild(&Shape30);

Billboard28.addChild(&Transform29);

Transform27.addChild(&Billboard28);

Transform26.addChild(&Transform27);

Transform10.addChild(&Transform26);

Group8.addChild(&Transform10);

Scene7.addChild(&Group8);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("_1"));
ROUTE37.setFromField(CString("isActive"));
ROUTE37.setToNode(CString("Time"));
ROUTE37.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("_1"));
ROUTE38.setFromField(CString("enterTime"));
ROUTE38.setToNode(CString("Time"));
ROUTE38.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("_1"));
ROUTE39.setFromField(CString("exitTime"));
ROUTE39.setToNode(CString("Time"));
ROUTE39.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("Time"));
ROUTE40.setFromField(CString("fraction_changed"));
ROUTE40.setToNode(CString("BonusRotationInterp"));
ROUTE40.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(CString("BonusRotationInterp"));
ROUTE41.setFromField(CString("value_changed"));
ROUTE41.setToNode(CString("Bonus"));
ROUTE41.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE41);

X3D0.setScene(&Scene7);

}
