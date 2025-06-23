#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("Bubbles.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Bubble animation used by Nancy Diving example."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Etsuko Lippi"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("24 January 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("23 May 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("license"));
meta9.setContent(CString("../license.html"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
WorldInfo& WorldInfo11 =  WorldInfo();
WorldInfo11.setTitle(CString("Bubbles.x3d"));
Scene10.addChild(&WorldInfo11);

Transform& Transform12 =  Transform();
Transform12.setDEF(CString("Bubbles"));
Group& Group13 =  Group();
Group13.setDEF(CString("Bubble"));
TimeSensor& TimeSensor14 =  TimeSensor();
TimeSensor14.setDEF(CString("BubbleClock"));
TimeSensor14.setCycleInterval(6);
TimeSensor14.setLoop(True);
Group13.addChild(&TimeSensor14);

PositionInterpolator& PositionInterpolator15 =  PositionInterpolator();
PositionInterpolator15.setDEF(CString("BubblePath1"));
PositionInterpolator15.setKey(new float[]{0,0.5,0.8,0.9,1}, 5);
PositionInterpolator15.setKeyValue(new float[]{0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509}, 15);
Group13.addChild(&PositionInterpolator15);

PositionInterpolator& PositionInterpolator16 =  PositionInterpolator();
PositionInterpolator16.setDEF(CString("BubblePath2"));
PositionInterpolator16.setKey(new float[]{0,0.3,0.64,0.85,1}, 5);
PositionInterpolator16.setKeyValue(new float[]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373}, 15);
Group13.addChild(&PositionInterpolator16);

PositionInterpolator& PositionInterpolator17 =  PositionInterpolator();
PositionInterpolator17.setDEF(CString("BubblePath3"));
PositionInterpolator17.setKey(new float[]{0,0.1,0.45,0.7,1}, 5);
PositionInterpolator17.setKeyValue(new float[]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734}, 15);
Group13.addChild(&PositionInterpolator17);

PositionInterpolator& PositionInterpolator18 =  PositionInterpolator();
PositionInterpolator18.setDEF(CString("BubblePath4"));
PositionInterpolator18.setKey(new float[]{0,0.5,0.6,0.8,1}, 5);
PositionInterpolator18.setKeyValue(new float[]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349}, 15);
Group13.addChild(&PositionInterpolator18);

PositionInterpolator& PositionInterpolator19 =  PositionInterpolator();
PositionInterpolator19.setDEF(CString("BubblePath5"));
PositionInterpolator19.setKey(new float[]{0,0.25,0.35,0.65,1}, 5);
PositionInterpolator19.setKeyValue(new float[]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1}, 15);
Group13.addChild(&PositionInterpolator19);

PositionInterpolator& PositionInterpolator20 =  PositionInterpolator();
PositionInterpolator20.setDEF(CString("BubblePath6"));
PositionInterpolator20.setKey(new float[]{0,0.15,0.22235,0.55565,1}, 5);
PositionInterpolator20.setKeyValue(new float[]{0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14}, 15);
Group13.addChild(&PositionInterpolator20);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(CString("BubblePath7"));
PositionInterpolator21.setKey(new float[]{0,0.2425,0.4535,0.6775,1}, 5);
PositionInterpolator21.setKeyValue(new float[]{0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12}, 15);
Group13.addChild(&PositionInterpolator21);

PositionInterpolator& PositionInterpolator22 =  PositionInterpolator();
PositionInterpolator22.setDEF(CString("BubblePath8"));
PositionInterpolator22.setKey(new float[]{0,0.1125,0.5535,0.97865,1}, 5);
PositionInterpolator22.setKeyValue(new float[]{0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86}, 15);
Group13.addChild(&PositionInterpolator22);

PositionInterpolator& PositionInterpolator23 =  PositionInterpolator();
PositionInterpolator23.setDEF(CString("BubblePath9"));
PositionInterpolator23.setKey(new float[]{0,0.0025,0.035,0.65,1}, 5);
PositionInterpolator23.setKeyValue(new float[]{0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545}, 15);
Group13.addChild(&PositionInterpolator23);

PositionInterpolator& PositionInterpolator24 =  PositionInterpolator();
PositionInterpolator24.setDEF(CString("BubblePath10"));
PositionInterpolator24.setKey(new float[]{0,0.00025,0.035,0.6895,1}, 5);
PositionInterpolator24.setKeyValue(new float[]{0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1}, 15);
Group13.addChild(&PositionInterpolator24);

Transform& Transform25 =  Transform();
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("bubble1"));
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setDiffuseColor(new float[]{1,1,1});
Material29.setTransparency(0.8);
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Sphere& Sphere30 =  Sphere();
Sphere30.setRadius(0.025);
Shape27.setGeometry(&Sphere30);

Transform26.addChild(&Shape27);

Transform25.addChild(&Transform26);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("bubble2"));
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setDiffuseColor(new float[]{1,1,1});
Material34.setTransparency(0.8);
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Sphere& Sphere35 =  Sphere();
Sphere35.setRadius(0.055);
Shape32.setGeometry(&Sphere35);

Transform31.addChild(&Shape32);

Transform25.addChild(&Transform31);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("bubble3"));
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setDiffuseColor(new float[]{1,1,1});
Material39.setTransparency(0.8);
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

Sphere& Sphere40 =  Sphere();
Sphere40.setRadius(0.065);
Shape37.setGeometry(&Sphere40);

Transform36.addChild(&Shape37);

Transform25.addChild(&Transform36);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("bubble4"));
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setDiffuseColor(new float[]{1,1,1});
Material44.setTransparency(0.8);
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Sphere& Sphere45 =  Sphere();
Sphere45.setRadius(0.015);
Shape42.setGeometry(&Sphere45);

Transform41.addChild(&Shape42);

Transform25.addChild(&Transform41);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("bubble5"));
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setDiffuseColor(new float[]{1,1,1});
Material49.setTransparency(0.8);
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

Sphere& Sphere50 =  Sphere();
Sphere50.setRadius(0.075);
Shape47.setGeometry(&Sphere50);

Transform46.addChild(&Shape47);

Transform25.addChild(&Transform46);

Transform& Transform51 =  Transform();
Transform51.setDEF(CString("bubble6"));
Shape& Shape52 =  Shape();
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setDiffuseColor(new float[]{1,1,1});
Material54.setTransparency(0.8);
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

Sphere& Sphere55 =  Sphere();
Sphere55.setRadius(0.005);
Shape52.setGeometry(&Sphere55);

Transform51.addChild(&Shape52);

Transform25.addChild(&Transform51);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("bubble7"));
Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setDiffuseColor(new float[]{1,1,1});
Material59.setTransparency(0.8);
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

Sphere& Sphere60 =  Sphere();
Sphere60.setRadius(0.035);
Shape57.setGeometry(&Sphere60);

Transform56.addChild(&Shape57);

Transform25.addChild(&Transform56);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("bubble8"));
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDiffuseColor(new float[]{1,1,1});
Material64.setTransparency(0.8);
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

Sphere& Sphere65 =  Sphere();
Sphere65.setRadius(0.05);
Shape62.setGeometry(&Sphere65);

Transform61.addChild(&Shape62);

Transform25.addChild(&Transform61);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("bubble9"));
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Material69.setDiffuseColor(new float[]{1,1,1});
Material69.setTransparency(0.8);
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

Sphere& Sphere70 =  Sphere();
Sphere70.setRadius(0.045);
Shape67.setGeometry(&Sphere70);

Transform66.addChild(&Shape67);

Transform25.addChild(&Transform66);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("bubble10"));
Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setDiffuseColor(new float[]{1,1,1});
Material74.setTransparency(0.8);
Appearance73.addChild(&Material74);

Shape72.addChild(&Appearance73);

Sphere& Sphere75 =  Sphere();
Sphere75.setRadius(0.035);
Shape72.setGeometry(&Sphere75);

Transform71.addChild(&Shape72);

Transform25.addChild(&Transform71);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromField(CString("fraction_changed"));
ROUTE76.setFromNode(CString("BubbleClock"));
ROUTE76.setToField(CString("set_fraction"));
ROUTE76.setToNode(CString("BubblePath1"));
Transform25.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromField(CString("fraction_changed"));
ROUTE77.setFromNode(CString("BubbleClock"));
ROUTE77.setToField(CString("set_fraction"));
ROUTE77.setToNode(CString("BubblePath2"));
Transform25.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromField(CString("fraction_changed"));
ROUTE78.setFromNode(CString("BubbleClock"));
ROUTE78.setToField(CString("set_fraction"));
ROUTE78.setToNode(CString("BubblePath3"));
Transform25.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromField(CString("fraction_changed"));
ROUTE79.setFromNode(CString("BubbleClock"));
ROUTE79.setToField(CString("set_fraction"));
ROUTE79.setToNode(CString("BubblePath4"));
Transform25.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromField(CString("fraction_changed"));
ROUTE80.setFromNode(CString("BubbleClock"));
ROUTE80.setToField(CString("set_fraction"));
ROUTE80.setToNode(CString("BubblePath5"));
Transform25.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromField(CString("fraction_changed"));
ROUTE81.setFromNode(CString("BubbleClock"));
ROUTE81.setToField(CString("set_fraction"));
ROUTE81.setToNode(CString("BubblePath6"));
Transform25.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromField(CString("fraction_changed"));
ROUTE82.setFromNode(CString("BubbleClock"));
ROUTE82.setToField(CString("set_fraction"));
ROUTE82.setToNode(CString("BubblePath7"));
Transform25.addChild(&ROUTE82);

ROUTE& ROUTE83 =  ROUTE();
ROUTE83.setFromField(CString("fraction_changed"));
ROUTE83.setFromNode(CString("BubbleClock"));
ROUTE83.setToField(CString("set_fraction"));
ROUTE83.setToNode(CString("BubblePath8"));
Transform25.addChild(&ROUTE83);

ROUTE& ROUTE84 =  ROUTE();
ROUTE84.setFromField(CString("fraction_changed"));
ROUTE84.setFromNode(CString("BubbleClock"));
ROUTE84.setToField(CString("set_fraction"));
ROUTE84.setToNode(CString("BubblePath9"));
Transform25.addChild(&ROUTE84);

ROUTE& ROUTE85 =  ROUTE();
ROUTE85.setFromField(CString("fraction_changed"));
ROUTE85.setFromNode(CString("BubbleClock"));
ROUTE85.setToField(CString("set_fraction"));
ROUTE85.setToNode(CString("BubblePath10"));
Transform25.addChild(&ROUTE85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromField(CString("value_changed"));
ROUTE86.setFromNode(CString("BubblePath1"));
ROUTE86.setToField(CString("set_translation"));
ROUTE86.setToNode(CString("bubble1"));
Transform25.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromField(CString("value_changed"));
ROUTE87.setFromNode(CString("BubblePath2"));
ROUTE87.setToField(CString("set_translation"));
ROUTE87.setToNode(CString("bubble2"));
Transform25.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromField(CString("value_changed"));
ROUTE88.setFromNode(CString("BubblePath3"));
ROUTE88.setToField(CString("set_translation"));
ROUTE88.setToNode(CString("bubble3"));
Transform25.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromField(CString("value_changed"));
ROUTE89.setFromNode(CString("BubblePath4"));
ROUTE89.setToField(CString("set_translation"));
ROUTE89.setToNode(CString("bubble4"));
Transform25.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromField(CString("value_changed"));
ROUTE90.setFromNode(CString("BubblePath5"));
ROUTE90.setToField(CString("set_translation"));
ROUTE90.setToNode(CString("bubble5"));
Transform25.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromField(CString("value_changed"));
ROUTE91.setFromNode(CString("BubblePath6"));
ROUTE91.setToField(CString("set_translation"));
ROUTE91.setToNode(CString("bubble6"));
Transform25.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromField(CString("value_changed"));
ROUTE92.setFromNode(CString("BubblePath7"));
ROUTE92.setToField(CString("set_translation"));
ROUTE92.setToNode(CString("bubble7"));
Transform25.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromField(CString("value_changed"));
ROUTE93.setFromNode(CString("BubblePath8"));
ROUTE93.setToField(CString("set_translation"));
ROUTE93.setToNode(CString("bubble8"));
Transform25.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromField(CString("value_changed"));
ROUTE94.setFromNode(CString("BubblePath9"));
ROUTE94.setToField(CString("set_translation"));
ROUTE94.setToNode(CString("bubble9"));
Transform25.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromField(CString("value_changed"));
ROUTE95.setFromNode(CString("BubblePath10"));
ROUTE95.setToField(CString("set_translation"));
ROUTE95.setToNode(CString("bubble10"));
Transform25.addChild(&ROUTE95);

Group13.addChild(&Transform25);

Transform12.addChild(&Group13);

Scene10.addChild(&Transform12);

Background& Background96 =  Background();
Background96.setSkyColor(new float[]{0,0,0.6}, 3);
Scene10.addChild(&Background96);

X3D0.setScene(&Scene10);

}
