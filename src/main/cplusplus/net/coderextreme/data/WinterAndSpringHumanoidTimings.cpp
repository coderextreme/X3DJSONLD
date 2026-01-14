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
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("WinterAndSpringHumanoidTimings.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Example animation timings, manually translated from tool outputs and export."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("reference"));
meta4.setContent(CString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("info"));
meta5.setContent(CString("reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Katy Schildmeyer"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("creator"));
meta7.setContent(CString("Carol McDonald"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translator"));
meta8.setContent(CString("Joe Williams"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("translator"));
meta9.setContent(CString("Don Brutzman"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("created"));
meta10.setContent(CString("2 July 2023"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("translated"));
meta11.setContent(CString("9 July 2023"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("modified"));
meta12.setContent(CString("Mon, 15 Sep 2025 05:21:02 GMT"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("hint"));
meta13.setContent(CString("MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous."));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("Cinema 4D https://www.maxon.net/en/cinema-4d"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
WorldInfo& WorldInfo17 =  WorldInfo();
WorldInfo17.setTitle(CString("WinterAndSpringHumanoidTimings.x3d"));
Scene16.addChild(&WorldInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDEF(CString("EntryView1"));
Viewpoint18.setDescription(CString("Hello characters 1"));
Viewpoint18.setPosition(new float[]{0,2,40});
Scene16.addChild(&Viewpoint18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDEF(CString("EntryView2"));
Viewpoint19.setDescription(CString("Hello characters 2"));
Viewpoint19.setPosition(new float[]{-15,10,30});
Viewpoint19.setOrientation(new float[]{0,1,0,-0.643501});
Viewpoint19.setCenterOfRotation(new float[]{0,10,10});
Scene16.addChild(&Viewpoint19);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("TextRoot"));
Transform20.setTranslation(new float[]{9.8557,0.95,3.5});
Shape& Shape21 =  Shape();
Shape21.setDEF(CString("ModelDescriptionText"));
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.960784,0.894118,0});
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

Text& Text24 =  Text();
Text24.setString(new CString[]{CString("This scene tests"), CString(""), CString("experimental approaches"), CString(""), CString("for human animation")}, 5);
CFontStyle& FontStyle25 =  CFontStyle();
FontStyle25.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle25.setStyle(CString("BOLD"));
FontStyle25.setSize(0.8);
FontStyle25.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text24.setFontStyle(&FontStyle25);

Shape21.setGeometry(&Text24);

Transform20.addChild(&Shape21);

Scene16.addChild(&Transform20);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Root4"));
Transform26.setTranslation(new float[]{11.3657,0.475,3.377131});
Scene16.addChild(&Transform26);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("Root5"));
Transform27.setTranslation(new float[]{10.55646,0.475,3.391616});
Scene16.addChild(&Transform27);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("Root6"));
Transform28.setTranslation(new float[]{9.167682,0.475,3.332752});
Scene16.addChild(&Transform28);

PositionInterpolator& PositionInterpolator29 =  PositionInterpolator();
PositionInterpolator29.setDEF(CString("Gramps_HumanoidRoot_TranslationInterpolator"));
PositionInterpolator29.setKey(new float[]{0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
PositionInterpolator29.setKeyValue(new float[]{6.8557,0.95,0.5,6.8557,0.95,0.5,6.8557,0.95,0.5,9.8557,0.95,3.5,9.8557,0.95,3.5,9.8557,0.95,3.5,14.3558,0.95,8,16.8558,0.95,15,21.3557,0.95,24.5,21.3557,0.95,24.5,21.3557,0.95,24.5}, 33);
MetadataString& MetadataString30 =  MetadataString();
MetadataString30.X3DNode::setName(CString("poses"));
MetadataString30.setValue(new CString[]{CString("Gramps_Stand01"), CString("Gramps_Stand01"), CString("Gramps_Walk01"), CString("Gramps_Stand02"), CString("Gramps_Turn01"), CString("Gramps_Walk01"), CString("Gramps_Walk02"), CString("Gramps_Skip01"), CString("Gramps_Stand03"), CString("Gramps_Stand03"), CString("Gramps_Stand03")}, 11);
PositionInterpolator29.setMetadata(&MetadataString30);

Scene16.addChild(&PositionInterpolator29);

PositionInterpolator& PositionInterpolator31 =  PositionInterpolator();
PositionInterpolator31.setDEF(CString("Leif_HumanoidRoot_TranslationInterpolator"));
PositionInterpolator31.setKey(new float[]{0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
PositionInterpolator31.setKeyValue(new float[]{-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,-7.9962,0.4,3,9.004,0.475,3.4999,11.5048,0.475,3.3699,16.0038,0.475,7.8699,18.5038,0.475,14.8699,23.0038,0.475,24.3699,23.0038,0.475,24.3699,23.0038,0.475,24.3699}, 33);
MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("poses"));
MetadataString32.setValue(new CString[]{CString("Leif_Stand01"), CString("Leif_Stand01"), CString("Leif_Stand01"), CString("Leif_Run01"), CString("Leif_Turn01"), CString("Leif_Walk01"), CString("Leif_Walk01"), CString("Leif_Skip01"), CString("Leif_Stand01"), CString("Leif_Stand01"), CString("Leif_Stand01")}, 11);
PositionInterpolator31.setMetadata(&MetadataString32);

Scene16.addChild(&PositionInterpolator31);

PositionInterpolator& PositionInterpolator33 =  PositionInterpolator();
PositionInterpolator33.setDEF(CString("Lily_HumanoidRoot_TranslationInterpolator"));
PositionInterpolator33.setKey(new float[]{0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
PositionInterpolator33.setKeyValue(new float[]{-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,8.9038,0.475,4.0999,10.6538,0.475,3.3499,15.1538,0.475,7.8499,17.6538,0.475,14.8499,22.1538,0.475,24.3499,22.1538,0.475,24.3499,22.1538,0.475,24.3499}, 33);
MetadataString& MetadataString34 =  MetadataString();
MetadataString34.X3DNode::setName(CString("poses"));
MetadataString34.setValue(new CString[]{CString("Lily_Stand01"), CString("Lily_Stand01"), CString("Lily_Stand01"), CString("Leif_Run01"), CString("Lily_Turn01"), CString("Lily_Walk01"), CString("Lily_Walk01"), CString("Lily_Skip01"), CString("Lily_Stand01"), CString("Lily_Stand01"), CString("Lily_Stand01")}, 11);
PositionInterpolator33.setMetadata(&MetadataString34);

Scene16.addChild(&PositionInterpolator33);

PositionInterpolator& PositionInterpolator35 =  PositionInterpolator();
PositionInterpolator35.setDEF(CString("Tufani_HumanoidRoot_TranslationInterpolator"));
PositionInterpolator35.setKey(new float[]{0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
PositionInterpolator35.setKeyValue(new float[]{-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,9.40338,0.475,4.3999,9.1538,0.475,3.2699,13.6538,0.475,7.7699,16.1538,0.475,14.7699,20.6538,0.475,24.2699,20.6538,0.475,24.2699,20.6538,0.475,24.2699}, 33);
MetadataString& MetadataString36 =  MetadataString();
MetadataString36.X3DNode::setName(CString("poses"));
MetadataString36.setValue(new CString[]{CString("Tufani_Stand01"), CString("Tufani_Stand01"), CString("Tufani_Stand01"), CString("Tufani_Run01"), CString("Tufani_Turn01"), CString("Tufani_Walk01"), CString("Tufani_Walk01"), CString("Tufani_Skip01"), CString("Tufani_Stand01"), CString("Tufani_Stand01"), CString("Tufani_Stand01")}, 11);
PositionInterpolator35.setMetadata(&MetadataString36);

Scene16.addChild(&PositionInterpolator35);

Background& Background37 =  Background();
Background37.setDEF(CString("Background3Black"));
Scene16.addChild(&Background37);

Background& Background38 =  Background();
Background38.setDEF(CString("Background4SkyBlueGreenGrass"));
Background38.setSkyColor(new float[]{0,0.71,0.886}, 3);
Background38.setGroundAngle(new float[]{1.57}, 1);
Background38.setGroundColor(new float[]{0.356863,0.639216,0,0.721569,1,0.501961}, 6);
Scene16.addChild(&Background38);

Background& Background39 =  Background();
Background39.setDEF(CString("Background5LightGrey"));
Background39.setSkyColor(new float[]{0.827,0.827,0.827}, 3);
Scene16.addChild(&Background39);

Background& Background40 =  Background();
Background40.setDEF(CString("Background6DarkGrey"));
Background40.setSkyColor(new float[]{0.6,0.2,0.2}, 3);
Scene16.addChild(&Background40);

TimeSensor& TimeSensor41 =  TimeSensor();
TimeSensor41.setDEF(CString("Clock10Seconds"));
TimeSensor41.setCycleInterval(5);
TimeSensor41.setLoop(True);
Scene16.addChild(&TimeSensor41);

TimeSensor& TimeSensor42 =  TimeSensor();
TimeSensor42.setDEF(CString("Clock100Seconds"));
TimeSensor42.setEnabled(False);
TimeSensor42.setCycleInterval(100);
Scene16.addChild(&TimeSensor42);

CBooleanSequencer& BooleanSequencer43 =  CBooleanSequencer();
BooleanSequencer43.setDEF(CString("Background3Sequencer"));
BooleanSequencer43.setKey(new float[]{0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
BooleanSequencer43.setKeyValue(new boolean[]{True,True,True,False,False,False,False,False,False,False,False});
Scene16.addChild(&BooleanSequencer43);

CBooleanSequencer& BooleanSequencer44 =  CBooleanSequencer();
BooleanSequencer44.setDEF(CString("Background4Sequencer"));
BooleanSequencer44.setKey(new float[]{0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
BooleanSequencer44.setKeyValue(new boolean[]{False,False,False,True,True,False,False,False,False,False,False});
Scene16.addChild(&BooleanSequencer44);

CBooleanSequencer& BooleanSequencer45 =  CBooleanSequencer();
BooleanSequencer45.setDEF(CString("Background5Sequencer"));
BooleanSequencer45.setKey(new float[]{0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
BooleanSequencer45.setKeyValue(new boolean[]{False,False,False,False,False,True,True,True,False,False,False});
Scene16.addChild(&BooleanSequencer45);

CBooleanSequencer& BooleanSequencer46 =  CBooleanSequencer();
BooleanSequencer46.setDEF(CString("Background6Sequencer"));
BooleanSequencer46.setKey(new float[]{0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1}, 11);
BooleanSequencer46.setKeyValue(new boolean[]{False,False,False,False,False,False,False,False,True,True,True});
Scene16.addChild(&BooleanSequencer46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Background3Sequencer"));
ROUTE47.setFromField(CString("value_changed"));
ROUTE47.setToNode(CString("Background3Black"));
ROUTE47.setToField(CString("set_bind"));
Scene16.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("Background4Sequencer"));
ROUTE48.setFromField(CString("value_changed"));
ROUTE48.setToNode(CString("Background4SkyBlueGreenGrass"));
ROUTE48.setToField(CString("set_bind"));
Scene16.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Background5Sequencer"));
ROUTE49.setFromField(CString("value_changed"));
ROUTE49.setToNode(CString("Background5LightGrey"));
ROUTE49.setToField(CString("set_bind"));
Scene16.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("Background6Sequencer"));
ROUTE50.setFromField(CString("value_changed"));
ROUTE50.setToNode(CString("Background6DarkGrey"));
ROUTE50.setToField(CString("set_bind"));
Scene16.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Clock10Seconds"));
ROUTE51.setFromField(CString("fraction_changed"));
ROUTE51.setToNode(CString("Background3Sequencer"));
ROUTE51.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("Clock10Seconds"));
ROUTE52.setFromField(CString("fraction_changed"));
ROUTE52.setToNode(CString("Background4Sequencer"));
ROUTE52.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("Clock10Seconds"));
ROUTE53.setFromField(CString("fraction_changed"));
ROUTE53.setToNode(CString("Background5Sequencer"));
ROUTE53.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE53);

ROUTE& ROUTE54 =  ROUTE();
ROUTE54.setFromNode(CString("Clock10Seconds"));
ROUTE54.setFromField(CString("fraction_changed"));
ROUTE54.setToNode(CString("Background6Sequencer"));
ROUTE54.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("Clock100Seconds"));
ROUTE55.setFromField(CString("fraction_changed"));
ROUTE55.setToNode(CString("Background3Sequencer"));
ROUTE55.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("Clock100Seconds"));
ROUTE56.setFromField(CString("fraction_changed"));
ROUTE56.setToNode(CString("Background4Sequencer"));
ROUTE56.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("Clock100Seconds"));
ROUTE57.setFromField(CString("fraction_changed"));
ROUTE57.setToNode(CString("Background5Sequencer"));
ROUTE57.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("Clock100Seconds"));
ROUTE58.setFromField(CString("fraction_changed"));
ROUTE58.setToNode(CString("Background6Sequencer"));
ROUTE58.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("Clock10Seconds"));
ROUTE59.setFromField(CString("fraction_changed"));
ROUTE59.setToNode(CString("Gramps_HumanoidRoot_TranslationInterpolator"));
ROUTE59.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("Clock10Seconds"));
ROUTE60.setFromField(CString("fraction_changed"));
ROUTE60.setToNode(CString("Leif_HumanoidRoot_TranslationInterpolator"));
ROUTE60.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("Clock10Seconds"));
ROUTE61.setFromField(CString("fraction_changed"));
ROUTE61.setToNode(CString("Lily_HumanoidRoot_TranslationInterpolator"));
ROUTE61.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Clock10Seconds"));
ROUTE62.setFromField(CString("fraction_changed"));
ROUTE62.setToNode(CString("Tufani_HumanoidRoot_TranslationInterpolator"));
ROUTE62.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Clock100Seconds"));
ROUTE63.setFromField(CString("fraction_changed"));
ROUTE63.setToNode(CString("Gramps_HumanoidRoot_TranslationInterpolator"));
ROUTE63.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("Clock100Seconds"));
ROUTE64.setFromField(CString("fraction_changed"));
ROUTE64.setToNode(CString("Leif_HumanoidRoot_TranslationInterpolator"));
ROUTE64.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Clock100Seconds"));
ROUTE65.setFromField(CString("fraction_changed"));
ROUTE65.setToNode(CString("Lily_HumanoidRoot_TranslationInterpolator"));
ROUTE65.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Clock100Seconds"));
ROUTE66.setFromField(CString("fraction_changed"));
ROUTE66.setToNode(CString("Tufani_HumanoidRoot_TranslationInterpolator"));
ROUTE66.setToField(CString("set_fraction"));
Scene16.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("Gramps_HumanoidRoot_TranslationInterpolator"));
ROUTE67.setFromField(CString("value_changed"));
ROUTE67.setToNode(CString("TextRoot"));
ROUTE67.setToField(CString("set_translation"));
Scene16.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Leif_HumanoidRoot_TranslationInterpolator"));
ROUTE68.setFromField(CString("value_changed"));
ROUTE68.setToNode(CString("Root4"));
ROUTE68.setToField(CString("set_translation"));
Scene16.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Lily_HumanoidRoot_TranslationInterpolator"));
ROUTE69.setFromField(CString("value_changed"));
ROUTE69.setToNode(CString("Root5"));
ROUTE69.setToField(CString("set_translation"));
Scene16.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("Tufani_HumanoidRoot_TranslationInterpolator"));
ROUTE70.setFromField(CString("value_changed"));
ROUTE70.setToNode(CString("Root6"));
ROUTE70.setToField(CString("set_translation"));
Scene16.addChild(&ROUTE70);

X3D0.setScene(&Scene16);

}
