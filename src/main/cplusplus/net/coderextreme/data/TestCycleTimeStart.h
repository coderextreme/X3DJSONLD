//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interactive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("TestCycleTimeStart.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Andreas"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Joe D. Williams"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("Test design patterns for animation control."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("10 September 2023"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 15 Sep 2025 05:20:59 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("identifier"));
meta10.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
WorldInfo& WorldInfo12 =  WorldInfo();
WorldInfo12.setTitle(CString("TestCycleTimeStart.x3d"));
Scene11.addChild(&WorldInfo12);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDescription(CString("hello in there"));
Scene11.addChild(&Viewpoint13);

TimeSensor& TimeSensor14 =  TimeSensor();
TimeSensor14.setDEF(CString("REDTIME1"));
TimeSensor14.setLoop(true);
TimeSensor14.setStopTime(1757913659.298);
Scene11.addChild(&TimeSensor14);

TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("GREENTIME2"));
TimeSensor15.setCycleInterval(5);
TimeSensor15.setStartTime(1757913659.298);
Scene11.addChild(&TimeSensor15);

TimeSensor& TimeSensor16 =  TimeSensor();
TimeSensor16.setDEF(CString("BLUETIME3"));
TimeSensor16.setCycleInterval(10);
Scene11.addChild(&TimeSensor16);

BooleanFilter& BooleanFilter17 =  BooleanFilter();
BooleanFilter17.setDEF(CString("GREENFILTER"));
Scene11.addChild(&BooleanFilter17);

TimeTrigger& TimeTrigger18 =  TimeTrigger();
TimeTrigger18.setDEF(CString("BLUETRIGGER"));
Scene11.addChild(&TimeTrigger18);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("REDBALL"));
Transform19.setTranslation(new float[]{1.615999,0.0,0.0});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Sphere& Sphere23 =  Sphere();
Shape20.setGeometry(&Sphere23);

Transform19.addChild(&Shape20);

Scene11.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("GREENBALL"));
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance26.addChild(&Material27);

Shape25.addChild(&Appearance26);

Sphere& Sphere28 =  Sphere();
Shape25.setGeometry(&Sphere28);

Transform24.addChild(&Shape25);

Scene11.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("BLUEBALL"));
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

Sphere& Sphere33 =  Sphere();
Shape30.setGeometry(&Sphere33);

Transform29.addChild(&Shape30);

Scene11.addChild(&Transform29);

PositionInterpolator& PositionInterpolator34 =  PositionInterpolator();
PositionInterpolator34.setDEF(CString("REDINTERP1"));
PositionInterpolator34.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
PositionInterpolator34.setKeyValue(new float[]{0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,-2.0,0.0,0.0,0.0,0.0,0.0}, 15);
Scene11.addChild(&PositionInterpolator34);

PositionInterpolator& PositionInterpolator35 =  PositionInterpolator();
PositionInterpolator35.setDEF(CString("GREENINTERP2"));
PositionInterpolator35.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
PositionInterpolator35.setKeyValue(new float[]{0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,-2.0,0.0,0.0,0.0,0.0}, 15);
Scene11.addChild(&PositionInterpolator35);

PositionInterpolator& PositionInterpolator36 =  PositionInterpolator();
PositionInterpolator36.setDEF(CString("BLUEINTERP3"));
PositionInterpolator36.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
PositionInterpolator36.setKeyValue(new float[]{0.0,0.0,0.0,0.0,-2.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0}, 15);
Scene11.addChild(&PositionInterpolator36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("REDTIME1"));
ROUTE37.setFromField(CString("cycleTime"));
ROUTE37.setToNode(CString("REDTIME1"));
ROUTE37.setToField(CString("set_stopTime"));
Scene11.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("REDTIME1"));
ROUTE38.setFromField(CString("stopTime_changed"));
ROUTE38.setToNode(CString("GREENTIME2"));
ROUTE38.setToField(CString("set_startTime"));
Scene11.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("GREENTIME2"));
ROUTE39.setFromField(CString("isActive"));
ROUTE39.setToNode(CString("GREENFILTER"));
ROUTE39.setToField(CString("set_boolean"));
Scene11.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("GREENFILTER"));
ROUTE40.setFromField(CString("inputFalse"));
ROUTE40.setToNode(CString("BLUETRIGGER"));
ROUTE40.setToField(CString("set_boolean"));
Scene11.addChild(&ROUTE40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(CString("BLUETRIGGER"));
ROUTE41.setFromField(CString("triggerTime"));
ROUTE41.setToNode(CString("BLUETIME3"));
ROUTE41.setToField(CString("set_startTime"));
Scene11.addChild(&ROUTE41);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("REDTIME1"));
ROUTE42.setFromField(CString("fraction_changed"));
ROUTE42.setToNode(CString("REDINTERP1"));
ROUTE42.setToField(CString("set_fraction"));
Scene11.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("REDINTERP1"));
ROUTE43.setFromField(CString("value_changed"));
ROUTE43.setToNode(CString("REDBALL"));
ROUTE43.setToField(CString("set_translation"));
Scene11.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("GREENTIME2"));
ROUTE44.setFromField(CString("fraction_changed"));
ROUTE44.setToNode(CString("GREENINTERP2"));
ROUTE44.setToField(CString("set_fraction"));
Scene11.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("GREENINTERP2"));
ROUTE45.setFromField(CString("value_changed"));
ROUTE45.setToNode(CString("GREENBALL"));
ROUTE45.setToField(CString("set_translation"));
Scene11.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("BLUETIME3"));
ROUTE46.setFromField(CString("fraction_changed"));
ROUTE46.setToNode(CString("BLUEINTERP3"));
ROUTE46.setToField(CString("set_fraction"));
Scene11.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("BLUEINTERP3"));
ROUTE47.setFromField(CString("value_changed"));
ROUTE47.setToNode(CString("BLUEBALL"));
ROUTE47.setToField(CString("set_translation"));
Scene11.addChild(&ROUTE47);

X3D0.setScene(&Scene11);

//}
