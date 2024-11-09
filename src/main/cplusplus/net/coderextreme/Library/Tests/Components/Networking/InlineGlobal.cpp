#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("EventUtilities"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("PointingDeviceSensor"));
component3.setLevel(1);
head1.addChild(&component3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Fri, 09 Dec 2022 15:26:53 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("comment"));
meta5.setContent(CString("Rise and Shine"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Holger Seelig"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Sunrise X3D Editor V1.0.8, https://create3000.github.io/sunrise/"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("file:///Volumes/Home/Projekte/Library/Tests/Components/Networking/InlineGlobal.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("modified"));
meta9.setContent(CString("Sun, 29 Jan 2023 23:15:47 GMT"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
NavigationInfo& NavigationInfo11 =  NavigationInfo();
NavigationInfo11.setHeadlight(False);
Scene10.addChild(&NavigationInfo11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setPosition(new float[]{5.65094,8.33655,10.783});
Viewpoint12.setOrientation(new float[]{-0.76859137417185,0.61112546586771,0.1891902865281,0.76580931764699});
Scene10.addChild(&Viewpoint12);

Transform& Transform13 =  Transform();
Transform13.setDEF(CString("Floor"));
Transform13.setScale(new float[]{100,0.1,100});
Shape& Shape14 =  Shape();
Shape14.setCastShadow(False);
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setEmissiveColor(new float[]{0.266667,0.266667,0.266667});
Appearance15.addChild(&Material16);

Shape14.addChild(&Appearance15);

Box& Box17 =  Box();
Shape14.setGeometry(&Box17);

Transform13.addChild(&Shape14);

Scene10.addChild(&Transform13);

Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{-3,1,0});
TouchSensor& TouchSensor19 =  TouchSensor();
TouchSensor19.setDEF(CString("_1"));
Transform18.addChild(&TouchSensor19);

BooleanFilter& BooleanFilter20 =  BooleanFilter();
BooleanFilter20.setDEF(CString("_2"));
Transform18.addChild(&BooleanFilter20);

Inline& Inline21 =  Inline();
Inline21.setDEF(CString("_3"));
Inline21.setUrl(new CString[]{CString("BoxWithLight.x3d")}, 1);
Transform18.addChild(&Inline21);

Scene10.addChild(&Transform18);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{3,1,0});
TouchSensor& TouchSensor23 =  TouchSensor();
TouchSensor23.setDEF(CString("_4"));
Transform22.addChild(&TouchSensor23);

BooleanFilter& BooleanFilter24 =  BooleanFilter();
BooleanFilter24.setDEF(CString("_5"));
Transform22.addChild(&BooleanFilter24);

Inline& Inline25 =  Inline();
Inline25.setDEF(CString("_6"));
Inline25.setUrl(new CString[]{CString("BoxWithLight.x3d")}, 1);
Transform22.addChild(&Inline25);

Scene10.addChild(&Transform22);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("_1"));
ROUTE26.setFromField(CString("isOver"));
ROUTE26.setToNode(CString("_2"));
ROUTE26.setToField(CString("set_boolean"));
Scene10.addChild(&ROUTE26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(CString("_2"));
ROUTE27.setFromField(CString("inputNegate"));
ROUTE27.setToNode(CString("_3"));
ROUTE27.setToField(CString("set_global"));
Scene10.addChild(&ROUTE27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("_4"));
ROUTE28.setFromField(CString("isOver"));
ROUTE28.setToNode(CString("_5"));
ROUTE28.setToField(CString("set_boolean"));
Scene10.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(CString("_5"));
ROUTE29.setFromField(CString("inputNegate"));
ROUTE29.setToNode(CString("_6"));
ROUTE29.setToField(CString("set_global"));
Scene10.addChild(&ROUTE29);

X3D0.setScene(&Scene10);

}
