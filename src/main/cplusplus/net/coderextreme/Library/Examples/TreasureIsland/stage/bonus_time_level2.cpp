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
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:56 GMT"));
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
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:56 GMT"));
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
TimeSensor16.setStartTime(952980296.19053);
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
Transform18.setDEF(CString("sanduhr"));
Transform& Transform19 =  Transform();
Transform19.setRotation(new float[]{0,0,1,0.287199});
Shape& Shape20 =  Shape();
IndexedFaceSet& IndexedFaceSet21 =  IndexedFaceSet();
IndexedFaceSet21.setColorIndex(new int[]{0,2,2,0,-1,0,2,2,0,-1,4,4,4,4,-1,0,2,2,0,-1,1,1,1,1,-1,0,2,2,0,-1,2,2,2,2,-1,2,0,0,2,-1,1,1,1,1,-1,2,0,0,2,-1,3,3,3,3,-1,2,0,0,2,-1}, 60);
IndexedFaceSet21.setCoordIndex(new int32_t[]{0,1,2,3,-1,3,2,4,5,-1,6,0,3,5,-1,5,4,7,6,-1,1,7,4,2,-1,6,7,1,0,-1,8,9,10,11,-1,11,10,12,13,-1,14,8,11,13,-1,13,12,15,14,-1,9,15,12,10,-1,14,15,9,8,-1}, 60);
CColor& Color22 =  CColor();
Color22.setColor(new float[]{0.0481283,0,0.00527964,0.566845,0.0076234,0,0.240642,0,0,0.0481283,0.029009,0.0252846,0.0213904,0,0.00234651}, 15);
IndexedFaceSet21.setColor(&Color22);

Coordinate& Coordinate23 =  Coordinate();
Coordinate23.setPoint(new float[]{0.15312,0.36392,0.15283,0.15312,0.320038,0.152865,0.15312,0.319794,-0.153375,0.15312,0.363676,-0.15341,-0.15312,0.319794,-0.153375,-0.15312,0.363676,-0.15341,-0.15312,0.36392,0.15283,-0.15312,0.320038,0.152865,0.15312,-0.332721,0.153385,0.15312,-0.376602,0.15342,0.15312,-0.376846,-0.15282,0.15312,-0.332964,-0.152855,-0.15312,-0.376846,-0.15282,-0.15312,-0.332964,-0.152855,-0.15312,-0.332721,0.153385,-0.15312,-0.376602,0.15342}, 48);
IndexedFaceSet21.setCoord(&Coordinate23);

Shape20.setGeometry(&IndexedFaceSet21);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("obj"));
Transform24.setRotation(new float[]{0,0,1,0.287199});
Shape& Shape25 =  Shape();
IndexedFaceSet& IndexedFaceSet26 =  IndexedFaceSet();
IndexedFaceSet26.setColorIndex(new int[]{2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1}, 144);
IndexedFaceSet26.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,10,9,11,-1,10,11,12,-1,12,11,13,-1,14,15,16,-1,16,15,17,-1,16,17,18,-1,18,17,19,-1,18,19,20,-1,20,19,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,28,29,30,-1,30,29,31,-1,30,31,32,-1,32,31,33,-1,32,33,34,-1,34,33,35,-1,34,35,36,-1,36,35,37,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1}, 144);
CColor& Color27 =  CColor();
Color27.setColor(new float[]{1,0,0.043376,1,0.442751,0,0.540107,0.0467591,0,0.791444,0.292867,0.280675}, 12);
IndexedFaceSet26.setColor(&Color27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setPoint(new float[]{0.151133,-0.342532,-4.8137e-12,0.0123568,-0.0179521,-7.19952e-13,0.0755665,-0.342532,0.130885,0.0061784,-0.0179521,0.0107013,-0.0755665,-0.342532,0.130885,-0.0061784,-0.0179521,0.0107013,-0.151133,-0.342532,-5.19143e-12,-0.0123568,-0.0179521,-1.09976e-12,-0.0755665,-0.342532,-0.130885,-0.0061784,-0.0179521,-0.0107013,0.0755665,-0.342532,-0.130885,0.0061784,-0.0179521,-0.0107013,0.151133,-0.342532,-4.8137e-12,0.0123568,-0.0179521,-7.19952e-13,0.0123568,-0.0179521,-7.19952e-13,0.0133073,0.0236975,4.6467e-12,0.0061784,-0.0179521,0.0107013,0.00665363,0.0236975,0.0115244,-0.0061784,-0.0179521,0.0107013,-0.00665363,0.0236975,0.0115244,-0.0123568,-0.0179521,-1.09976e-12,-0.0133073,0.0236975,3.53806e-12,-0.0061784,-0.0179521,-0.0107013,-0.00665363,0.0236975,-0.0115244,0.0061784,-0.0179521,-0.0107013,0.00665363,0.0236975,-0.0115244,0.0123568,-0.0179521,-7.19952e-13,0.0133073,0.0236975,4.6467e-12,0.0133073,0.0236975,4.6467e-12,0.152083,0.342533,-4.90405e-12,0.00665363,0.0236975,0.0115244,0.0760416,0.342533,0.131708,-0.00665363,0.0236975,0.0115244,-0.0760416,0.342533,0.131708,-0.0133073,0.0236975,3.53806e-12,-0.152083,0.342533,-5.10109e-12,-0.00665363,0.0236975,-0.0115244,-0.0760416,0.342533,-0.131708,0.00665363,0.0236975,-0.0115244,0.0760416,0.342533,-0.131708,0.0133073,0.0236975,4.6467e-12,0.152083,0.342533,-4.90405e-12}, 126);
IndexedFaceSet26.setCoord(&Coordinate28);

Shape25.setGeometry(&IndexedFaceSet26);

Transform24.addChild(&Shape25);

Transform18.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setRotation(new float[]{0,0,1,0.287199});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet32 =  IndexedFaceSet();
IndexedFaceSet32.setSolid(False);
IndexedFaceSet32.setColorIndex(new int[]{0,1,1,0,-1,1,1,0,0,-1,0,0,1,1,-1,0,1,1,0,-1,0,0,1,1,-1,0,1,1,0,-1,1,1,0,0,-1,0,1,1,0,-1}, 40);
IndexedFaceSet32.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,0,3,-1,9,8,7,6,-1,9,11,10,8,-1,15,14,13,12,-1,15,17,16,14,-1,18,19,20,21,-1,20,22,23,21,-1}, 40);
CColor& Color33 =  CColor();
Color33.setColor(new float[]{0.919786,0.349022,0.089409,0.28877,0.0554722,0.0688231}, 6);
IndexedFaceSet32.setColor(&Color33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-0.115194,-0.00911173,0.149401,-0.115194,0.322477,0.149137,-0.143802,0.322454,0.120527,-0.143802,-0.0091345,0.120791,-0.143802,-0.340723,0.121055,-0.115194,-0.3407,0.149665,0.148124,-0.340725,0.118842,0.119514,-0.340702,0.147451,0.119514,-0.00911331,0.147187,0.148124,-0.00913608,0.118578,0.119514,0.322475,0.146923,0.148124,0.322453,0.118313,0.117301,-0.340934,-0.14447,0.14591,-0.340912,-0.11586,0.14591,-0.00932315,-0.116124,0.117301,-0.00934592,-0.144734,0.14591,0.322265,-0.116389,0.117301,0.322243,-0.144998,-0.117407,-0.340933,-0.142257,-0.146016,-0.34091,-0.113647,-0.146016,-0.0093213,-0.113911,-0.117407,-0.00934407,-0.142521,-0.146016,0.322267,-0.114175,-0.117407,0.322245,-0.142785}, 72);
IndexedFaceSet32.setCoord(&Coordinate34);

Shape30.setGeometry(&IndexedFaceSet32);

Transform29.addChild(&Shape30);

Transform18.addChild(&Transform29);

Transform13.addChild(&Transform18);

Transform10.addChild(&Transform13);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("Glow2"));
Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Glow"));
Billboard& Billboard37 =  Billboard();
Billboard37.setAxisOfRotation(new float[]{0,0,0});
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("glow"));
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
ImageTexture& ImageTexture41 =  ImageTexture();
ImageTexture41.setUrl(new CString[]{CString("bt-glow.png")}, 1);
Appearance40.addChild(&ImageTexture41);

Shape39.addChild(&Appearance40);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setColorIndex(new int[]{1,1,1,-1,1,1,1,-1}, 8);
IndexedFaceSet42.setCoordIndex(new int32_t[]{1,2,0,-1,2,3,0,-1}, 8);
CColor& Color43 =  CColor();
Color43.setColor(new float[]{0.8,0.198115,0,1,0.0603581,0}, 6);
IndexedFaceSet42.setColor(&Color43);

TextureCoordinate& TextureCoordinate44 =  TextureCoordinate();
TextureCoordinate44.setPoint(new float[]{0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0}, 16);
IndexedFaceSet42.setTexCoord(&TextureCoordinate44);

Coordinate& Coordinate45 =  Coordinate();
Coordinate45.setPoint(new float[]{-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0}, 12);
IndexedFaceSet42.setCoord(&Coordinate45);

Shape39.setGeometry(&IndexedFaceSet42);

Transform38.addChild(&Shape39);

Billboard37.addChild(&Transform38);

Transform36.addChild(&Billboard37);

Transform35.addChild(&Transform36);

Transform10.addChild(&Transform35);

Group8.addChild(&Transform10);

Scene7.addChild(&Group8);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_1"));
ROUTE46.setFromField(CString("isActive"));
ROUTE46.setToNode(CString("Time"));
ROUTE46.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("_1"));
ROUTE47.setFromField(CString("enterTime"));
ROUTE47.setToNode(CString("Time"));
ROUTE47.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("_1"));
ROUTE48.setFromField(CString("exitTime"));
ROUTE48.setToNode(CString("Time"));
ROUTE48.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Time"));
ROUTE49.setFromField(CString("fraction_changed"));
ROUTE49.setToNode(CString("BonusRotationInterp"));
ROUTE49.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("BonusRotationInterp"));
ROUTE50.setFromField(CString("value_changed"));
ROUTE50.setToNode(CString("Bonus"));
ROUTE50.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE50);

X3D0.setScene(&Scene7);

}
