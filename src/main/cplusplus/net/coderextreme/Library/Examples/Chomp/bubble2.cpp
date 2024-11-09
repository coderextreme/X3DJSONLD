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
meta3.setContent(CString("Mon, 09 Nov 2015 13:19:33 GMT"));
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
meta6.setContent(CString("Mon, 09 Nov 2015 13:19:33 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
Group& Group9 =  Group();
TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("TimeSensor_bubble02-TIMER"));
TimeSensor10.setCycleInterval(2.133);
TimeSensor10.setLoop(True);
TimeSensor10.setStartTime(1);
Group9.addChild(&TimeSensor10);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("Billboard_bubble02-ROOT"));
TimeSensor& TimeSensor12 =  TimeSensor();
TimeSensor12.setDEF(CString("Billboard_bubble02-TIMER"));
TimeSensor12.setCycleInterval(2.133);
Transform11.addChild(&TimeSensor12);

Billboard& Billboard13 =  Billboard();
Billboard13.setDEF(CString("Billboard_bubble02"));
Billboard13.setAxisOfRotation(new float[]{0,0,0});
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("Bubble02-ROOT"));
Transform14.setTranslation(new float[]{-0.1568,7.22,0});
Transform14.setRotation(new float[]{0.9506,-0.2195,-0.2195,1.621});
Transform14.setScale(new float[]{0.4926,0.4926,0.4926});
Transform14.setScaleOrientation(new float[]{-0.0215597,0.997188,-0.0717691,0.6209});
PositionInterpolator& PositionInterpolator15 =  PositionInterpolator();
PositionInterpolator15.setDEF(CString("Bubble02-POS-INTERP"));
PositionInterpolator15.setKey(new float[]{0,0.09375,0.1875,0.2813,0.375,0.5,0.5001,0.6562,0.75,0.8437,0.9375,1}, 12);
PositionInterpolator15.setKeyValue(new float[]{-0.1568,7.22,0,0.4111,8.834,0,0.2528,10.36,0,0.06727,11.92,0,0.6111,13.64,0,0.5617,15.34,0,0.4965,0.7224,0,0.4236,2.017,0,-0.3717,3.521,0,0.375,4.881,0,0.2019,6.257,0,-0.1568,7.22,0}, 36);
Transform14.addChild(&PositionInterpolator15);

Shape& Shape16 =  Shape();
Appearance& Appearance17 =  Appearance();
Material& Material18 =  Material();
Material18.setDiffuseColor(new float[]{0.4549,0.6667,0.7882});
Material18.setShininess(0.25);
Appearance17.addChild(&Material18);

Shape16.addChild(&Appearance17);

IndexedFaceSet& IndexedFaceSet19 =  IndexedFaceSet();
IndexedFaceSet19.setDEF(CString("Bubble02-FACES"));
IndexedFaceSet19.setCreaseAngle(3);
IndexedFaceSet19.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1}, 24);
Coordinate& Coordinate20 =  Coordinate();
Coordinate20.setDEF(CString("Bubble02-COORD"));
Coordinate20.setPoint(new float[]{0,0.6564,0,0,0.3282,-0.5685,-0.4923,0.3282,-0.2842,-0.4923,0.3282,0.2842,0,0.3282,0.5685,0.4923,0.3282,0.2842,0.4923,0.3282,-0.2842}, 21);
IndexedFaceSet19.setCoord(&Coordinate20);

Shape16.setGeometry(&IndexedFaceSet19);

Transform14.addChild(&Shape16);

Billboard13.addChild(&Transform14);

Transform11.addChild(&Billboard13);

Group9.addChild(&Transform11);

Group8.addChild(&Group9);

Scene7.addChild(&Group8);

ROUTE& ROUTE21 =  ROUTE();
ROUTE21.setFromNode(CString("Billboard_bubble02-TIMER"));
ROUTE21.setFromField(CString("fraction_changed"));
ROUTE21.setToNode(CString("Bubble02-POS-INTERP"));
ROUTE21.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromNode(CString("TimeSensor_bubble02-TIMER"));
ROUTE22.setFromField(CString("fraction_changed"));
ROUTE22.setToNode(CString("Bubble02-POS-INTERP"));
ROUTE22.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("Bubble02-POS-INTERP"));
ROUTE23.setFromField(CString("value_changed"));
ROUTE23.setToNode(CString("Bubble02-ROOT"));
ROUTE23.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE23);

X3D0.setScene(&Scene7);

}
