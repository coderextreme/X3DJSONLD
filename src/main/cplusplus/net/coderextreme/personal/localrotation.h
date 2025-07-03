//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("localrotation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("chained boxes"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setTitle(CString("localrotation.x3d"));
Scene7.addChild(&WorldInfo8);

NavigationInfo& NavigationInfo9 =  NavigationInfo();
NavigationInfo9.setType(new CString[]{CString("ANY"), CString("EXAMINE"), CString("FLY"), CString("LOOKAT")}, 4);
Scene7.addChild(&NavigationInfo9);

Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setDescription(CString("Tour Views"));
Viewpoint10.setPosition(new float[]{0.0,0.0,20.0});
Scene7.addChild(&Viewpoint10);

Transform& Transform11 =  Transform();
Transform11.setTranslation(new float[]{-4.0,0.0,0.0});
Shape& Shape12 =  Shape();
Box& Box13 =  Box();
Shape12.setGeometry(&Box13);

Transform11.addChild(&Shape12);

Transform& Transform14 =  Transform();
Transform14.setDEF(CString("TransformTargetParent"));
Transform14.setTranslation(new float[]{4.0,0.0,0.0});
Shape& Shape15 =  Shape();
Box& Box16 =  Box();
Shape15.setGeometry(&Box16);

Transform14.addChild(&Shape15);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("TransformTargetChild"));
Transform17.setTranslation(new float[]{4.0,0.0,0.0});
Shape& Shape18 =  Shape();
Box& Box19 =  Box();
Shape18.setGeometry(&Box19);

Transform17.addChild(&Shape18);

Transform14.addChild(&Transform17);

Transform11.addChild(&Transform14);

Scene7.addChild(&Transform11);

ProximitySensor& ProximitySensor20 =  ProximitySensor();
ProximitySensor20.setDEF(CString("ActivateSensor"));
ProximitySensor20.setSize(new float[]{1000000.0,1000000.0,1000000.0});
Scene7.addChild(&ProximitySensor20);

TimeSensor& TimeSensor21 =  TimeSensor();
TimeSensor21.setDEF(CString("Clock"));
Scene7.addChild(&TimeSensor21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromNode(CString("ActivateSensor"));
ROUTE22.setFromField(CString("enterTime"));
ROUTE22.setToNode(CString("Clock"));
ROUTE22.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE22);

OrientationInterpolator& OrientationInterpolator23 =  OrientationInterpolator();
OrientationInterpolator23.setDEF(CString("Rotater"));
OrientationInterpolator23.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator23.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.57}, 8);
Scene7.addChild(&OrientationInterpolator23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("Clock"));
ROUTE24.setFromField(CString("fraction_changed"));
ROUTE24.setToNode(CString("Rotater"));
ROUTE24.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("Rotater"));
ROUTE25.setFromField(CString("value_changed"));
ROUTE25.setToNode(CString("TransformTargetParent"));
ROUTE25.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("Rotater"));
ROUTE26.setFromField(CString("value_changed"));
ROUTE26.setToNode(CString("TransformTargetChild"));
ROUTE26.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE26);

X3D0.setScene(&Scene7);

//}
