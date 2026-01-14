//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(2, new int32_t[]{1, 0});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(2, new int32_t[]{0, 0});
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Core"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Grouping"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Layering"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Text"));
component6.setLevel(1);
head1.addChild(&component6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("ManyClocks.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/ManyClocks.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("description"));
meta9.setContent(CString("X3D scene with multiple facial animations controlled by a multi-selection menu"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("created"));
meta10.setContent(CString("12 December 2024"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("modified"));
meta11.setContent(CString("13 December 2024"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("John Carlson, Joe Williams, Gyu Ri Cho, Hyun Ho Chu, Min Joo Lee, Yujin Jung"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
LayerSet& LayerSet14 =  LayerSet();
LayerSet14.setActiveLayer(1);
LayerSet14.setOrder(new int32_t[]{1,2}, 2);
Layer& Layer15 =  Layer();
Layer15.setDEF(CString("Model"));
Layer15.setPickable(true);
Layer15.setObjectType(new CString[]{CString("ALL")}, 1);
Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setDescription(CString("Initial View"));
Viewpoint16.setPosition(new float[]{0.0,20.0,110.0});
Layer15.addChild(&Viewpoint16);

TimeSensor& TimeSensor17 =  TimeSensor();
TimeSensor17.setDEF(CString("Reset_Clock"));
TimeSensor17.setCycleInterval(0.01);
Layer15.addChild(&TimeSensor17);

TimeSensor& TimeSensor18 =  TimeSensor();
TimeSensor18.setDEF(CString("Contempt_Clock"));
TimeSensor18.setCycleInterval(0.99);
TimeSensor18.setLoop(true);
TimeSensor18.setEnabled(false);
Layer15.addChild(&TimeSensor18);

TimeSensor& TimeSensor19 =  TimeSensor();
TimeSensor19.setDEF(CString("Disgust_Clock"));
TimeSensor19.setCycleInterval(0.99);
TimeSensor19.setLoop(true);
TimeSensor19.setEnabled(false);
Layer15.addChild(&TimeSensor19);

TimeSensor& TimeSensor20 =  TimeSensor();
TimeSensor20.setDEF(CString("Anger_Clock"));
TimeSensor20.setCycleInterval(0.99);
TimeSensor20.setLoop(true);
TimeSensor20.setEnabled(false);
Layer15.addChild(&TimeSensor20);

TimeSensor& TimeSensor21 =  TimeSensor();
TimeSensor21.setDEF(CString("Fear_Clock"));
TimeSensor21.setCycleInterval(0.99);
TimeSensor21.setLoop(true);
TimeSensor21.setEnabled(false);
Layer15.addChild(&TimeSensor21);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(CString("Surprise_Clock"));
TimeSensor22.setCycleInterval(0.99);
TimeSensor22.setLoop(true);
TimeSensor22.setEnabled(false);
Layer15.addChild(&TimeSensor22);

TimeSensor& TimeSensor23 =  TimeSensor();
TimeSensor23.setDEF(CString("Sadness_Clock"));
TimeSensor23.setCycleInterval(0.99);
TimeSensor23.setLoop(true);
TimeSensor23.setEnabled(false);
Layer15.addChild(&TimeSensor23);

TimeSensor& TimeSensor24 =  TimeSensor();
TimeSensor24.setDEF(CString("HappinessJoy_Clock"));
TimeSensor24.setCycleInterval(0.99);
TimeSensor24.setLoop(true);
TimeSensor24.setEnabled(false);
Layer15.addChild(&TimeSensor24);

TimeSensor& TimeSensor25 =  TimeSensor();
TimeSensor25.setDEF(CString("JinWink_Clock"));
TimeSensor25.setCycleInterval(0.99);
TimeSensor25.setEnabled(false);
TimeSensor25.setLoop(true);
Layer15.addChild(&TimeSensor25);

TimeSensor& TimeSensor26 =  TimeSensor();
TimeSensor26.setDEF(CString("JinUpperLipRaiser_Clock"));
TimeSensor26.setCycleInterval(0.99);
TimeSensor26.setEnabled(false);
TimeSensor26.setLoop(true);
Layer15.addChild(&TimeSensor26);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(CString("JinUpperLidRaiser_Clock"));
TimeSensor27.setCycleInterval(0.99);
TimeSensor27.setEnabled(false);
TimeSensor27.setLoop(true);
Layer15.addChild(&TimeSensor27);

TimeSensor& TimeSensor28 =  TimeSensor();
TimeSensor28.setDEF(CString("JinSquint_Clock"));
TimeSensor28.setCycleInterval(0.99);
TimeSensor28.setEnabled(false);
TimeSensor28.setLoop(true);
Layer15.addChild(&TimeSensor28);

TimeSensor& TimeSensor29 =  TimeSensor();
TimeSensor29.setDEF(CString("JinSlit_Clock"));
TimeSensor29.setCycleInterval(0.99);
TimeSensor29.setEnabled(false);
TimeSensor29.setLoop(true);
Layer15.addChild(&TimeSensor29);

TimeSensor& TimeSensor30 =  TimeSensor();
TimeSensor30.setDEF(CString("JinOuterBrowRaiser_Clock"));
TimeSensor30.setCycleInterval(0.99);
TimeSensor30.setEnabled(false);
TimeSensor30.setLoop(true);
Layer15.addChild(&TimeSensor30);

TimeSensor& TimeSensor31 =  TimeSensor();
TimeSensor31.setDEF(CString("JinNoseWrinkler_Clock"));
TimeSensor31.setCycleInterval(0.99);
TimeSensor31.setEnabled(false);
TimeSensor31.setLoop(true);
Layer15.addChild(&TimeSensor31);

TimeSensor& TimeSensor32 =  TimeSensor();
TimeSensor32.setDEF(CString("JinNasolabialDeepener_Clock"));
TimeSensor32.setCycleInterval(0.99);
TimeSensor32.setEnabled(false);
TimeSensor32.setLoop(true);
Layer15.addChild(&TimeSensor32);

TimeSensor& TimeSensor33 =  TimeSensor();
TimeSensor33.setDEF(CString("JinMouthStretch_Clock"));
TimeSensor33.setCycleInterval(0.99);
TimeSensor33.setEnabled(false);
TimeSensor33.setLoop(true);
Layer15.addChild(&TimeSensor33);

TimeSensor& TimeSensor34 =  TimeSensor();
TimeSensor34.setDEF(CString("JinLowerLipDepressor_Clock"));
TimeSensor34.setCycleInterval(0.99);
TimeSensor34.setEnabled(false);
TimeSensor34.setLoop(true);
Layer15.addChild(&TimeSensor34);

TimeSensor& TimeSensor35 =  TimeSensor();
TimeSensor35.setDEF(CString("JinLipTightener_Clock"));
TimeSensor35.setCycleInterval(0.99);
TimeSensor35.setEnabled(false);
TimeSensor35.setLoop(true);
Layer15.addChild(&TimeSensor35);

TimeSensor& TimeSensor36 =  TimeSensor();
TimeSensor36.setDEF(CString("JinLipSuck_Clock"));
TimeSensor36.setCycleInterval(0.99);
TimeSensor36.setEnabled(false);
TimeSensor36.setLoop(true);
Layer15.addChild(&TimeSensor36);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("JinLipStretcher_Clock"));
TimeSensor37.setCycleInterval(0.99);
TimeSensor37.setEnabled(false);
TimeSensor37.setLoop(true);
Layer15.addChild(&TimeSensor37);

TimeSensor& TimeSensor38 =  TimeSensor();
TimeSensor38.setDEF(CString("JinLipsPart_Clock"));
TimeSensor38.setCycleInterval(0.99);
TimeSensor38.setEnabled(false);
TimeSensor38.setLoop(true);
Layer15.addChild(&TimeSensor38);

TimeSensor& TimeSensor39 =  TimeSensor();
TimeSensor39.setDEF(CString("JinLipPuckerer_Clock"));
TimeSensor39.setCycleInterval(0.99);
TimeSensor39.setEnabled(false);
TimeSensor39.setLoop(true);
Layer15.addChild(&TimeSensor39);

TimeSensor& TimeSensor40 =  TimeSensor();
TimeSensor40.setDEF(CString("JinLipPressor_Clock"));
TimeSensor40.setCycleInterval(0.99);
TimeSensor40.setEnabled(false);
TimeSensor40.setLoop(true);
Layer15.addChild(&TimeSensor40);

TimeSensor& TimeSensor41 =  TimeSensor();
TimeSensor41.setDEF(CString("JinLipFunneler_Clock"));
TimeSensor41.setCycleInterval(0.99);
TimeSensor41.setEnabled(false);
TimeSensor41.setLoop(true);
Layer15.addChild(&TimeSensor41);

TimeSensor& TimeSensor42 =  TimeSensor();
TimeSensor42.setDEF(CString("JinLipCornerPuller_Clock"));
TimeSensor42.setCycleInterval(0.99);
TimeSensor42.setEnabled(false);
TimeSensor42.setLoop(true);
Layer15.addChild(&TimeSensor42);

TimeSensor& TimeSensor43 =  TimeSensor();
TimeSensor43.setDEF(CString("JinLipCornerDepressor_Clock"));
TimeSensor43.setCycleInterval(0.99);
TimeSensor43.setEnabled(false);
TimeSensor43.setLoop(true);
Layer15.addChild(&TimeSensor43);

TimeSensor& TimeSensor44 =  TimeSensor();
TimeSensor44.setDEF(CString("JinLidTightener_Clock"));
TimeSensor44.setCycleInterval(0.99);
TimeSensor44.setEnabled(false);
TimeSensor44.setLoop(true);
Layer15.addChild(&TimeSensor44);

TimeSensor& TimeSensor45 =  TimeSensor();
TimeSensor45.setDEF(CString("JinLidDroop_Clock"));
TimeSensor45.setCycleInterval(0.99);
TimeSensor45.setEnabled(false);
TimeSensor45.setLoop(true);
Layer15.addChild(&TimeSensor45);

TimeSensor& TimeSensor46 =  TimeSensor();
TimeSensor46.setDEF(CString("JinJawDrop_Clock"));
TimeSensor46.setCycleInterval(0.99);
TimeSensor46.setEnabled(false);
TimeSensor46.setLoop(true);
Layer15.addChild(&TimeSensor46);

TimeSensor& TimeSensor47 =  TimeSensor();
TimeSensor47.setDEF(CString("JinInnerBrowRaiser_Clock"));
TimeSensor47.setCycleInterval(0.99);
TimeSensor47.setEnabled(false);
TimeSensor47.setLoop(true);
Layer15.addChild(&TimeSensor47);

TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(CString("JinEyesClosed_Clock"));
TimeSensor48.setCycleInterval(0.99);
TimeSensor48.setEnabled(false);
TimeSensor48.setLoop(true);
Layer15.addChild(&TimeSensor48);

TimeSensor& TimeSensor49 =  TimeSensor();
TimeSensor49.setDEF(CString("JinDimpler_Clock"));
TimeSensor49.setCycleInterval(0.99);
TimeSensor49.setEnabled(false);
TimeSensor49.setLoop(true);
Layer15.addChild(&TimeSensor49);

TimeSensor& TimeSensor50 =  TimeSensor();
TimeSensor50.setDEF(CString("JinChinRaiser_Clock"));
TimeSensor50.setCycleInterval(0.99);
TimeSensor50.setEnabled(false);
TimeSensor50.setLoop(true);
Layer15.addChild(&TimeSensor50);

TimeSensor& TimeSensor51 =  TimeSensor();
TimeSensor51.setDEF(CString("JinCheekRaiser_Clock"));
TimeSensor51.setCycleInterval(0.99);
TimeSensor51.setEnabled(false);
TimeSensor51.setLoop(true);
Layer15.addChild(&TimeSensor51);

TimeSensor& TimeSensor52 =  TimeSensor();
TimeSensor52.setDEF(CString("JinCheekPuffer_Clock"));
TimeSensor52.setCycleInterval(0.99);
TimeSensor52.setEnabled(false);
TimeSensor52.setLoop(true);
Layer15.addChild(&TimeSensor52);

TimeSensor& TimeSensor53 =  TimeSensor();
TimeSensor53.setDEF(CString("JinBrowLowerer_Clock"));
TimeSensor53.setCycleInterval(0.99);
TimeSensor53.setEnabled(false);
TimeSensor53.setLoop(true);
Layer15.addChild(&TimeSensor53);

TimeSensor& TimeSensor54 =  TimeSensor();
TimeSensor54.setDEF(CString("JinBlink_Clock"));
TimeSensor54.setCycleInterval(0.99);
TimeSensor54.setEnabled(false);
TimeSensor54.setLoop(true);
Layer15.addChild(&TimeSensor54);

ScalarInterpolator& ScalarInterpolator55 =  ScalarInterpolator();
ScalarInterpolator55.setDEF(CString("AnimationAdapter_JinBlink"));
ScalarInterpolator55.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator55.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator55);

ScalarInterpolator& ScalarInterpolator56 =  ScalarInterpolator();
ScalarInterpolator56.setDEF(CString("AnimationAdapter_JinBrowLowerer"));
ScalarInterpolator56.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator56.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator56);

ScalarInterpolator& ScalarInterpolator57 =  ScalarInterpolator();
ScalarInterpolator57.setDEF(CString("AnimationAdapter_JinCheekPuffer"));
ScalarInterpolator57.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator57.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator57);

ScalarInterpolator& ScalarInterpolator58 =  ScalarInterpolator();
ScalarInterpolator58.setDEF(CString("AnimationAdapter_JinCheekRaiser"));
ScalarInterpolator58.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator58.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator58);

ScalarInterpolator& ScalarInterpolator59 =  ScalarInterpolator();
ScalarInterpolator59.setDEF(CString("AnimationAdapter_JinChinRaiser"));
ScalarInterpolator59.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator59.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator59);

ScalarInterpolator& ScalarInterpolator60 =  ScalarInterpolator();
ScalarInterpolator60.setDEF(CString("AnimationAdapter_JinDimpler"));
ScalarInterpolator60.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator60.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator60);

ScalarInterpolator& ScalarInterpolator61 =  ScalarInterpolator();
ScalarInterpolator61.setDEF(CString("AnimationAdapter_JinEyesClosed"));
ScalarInterpolator61.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator61.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator61);

ScalarInterpolator& ScalarInterpolator62 =  ScalarInterpolator();
ScalarInterpolator62.setDEF(CString("AnimationAdapter_JinInnerBrowRaiser"));
ScalarInterpolator62.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator62.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator62);

ScalarInterpolator& ScalarInterpolator63 =  ScalarInterpolator();
ScalarInterpolator63.setDEF(CString("AnimationAdapter_JinJawDrop"));
ScalarInterpolator63.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator63.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator63);

ScalarInterpolator& ScalarInterpolator64 =  ScalarInterpolator();
ScalarInterpolator64.setDEF(CString("AnimationAdapter_JinLidDroop"));
ScalarInterpolator64.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator64.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator64);

ScalarInterpolator& ScalarInterpolator65 =  ScalarInterpolator();
ScalarInterpolator65.setDEF(CString("AnimationAdapter_JinLidTightener"));
ScalarInterpolator65.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator65.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator65);

ScalarInterpolator& ScalarInterpolator66 =  ScalarInterpolator();
ScalarInterpolator66.setDEF(CString("AnimationAdapter_JinLipCornerDepressor"));
ScalarInterpolator66.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator66.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator66);

ScalarInterpolator& ScalarInterpolator67 =  ScalarInterpolator();
ScalarInterpolator67.setDEF(CString("AnimationAdapter_JinLipCornerPuller"));
ScalarInterpolator67.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator67.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator67);

ScalarInterpolator& ScalarInterpolator68 =  ScalarInterpolator();
ScalarInterpolator68.setDEF(CString("AnimationAdapter_JinLipFunneler"));
ScalarInterpolator68.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator68.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator68);

ScalarInterpolator& ScalarInterpolator69 =  ScalarInterpolator();
ScalarInterpolator69.setDEF(CString("AnimationAdapter_JinLipPressor"));
ScalarInterpolator69.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator69.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator69);

ScalarInterpolator& ScalarInterpolator70 =  ScalarInterpolator();
ScalarInterpolator70.setDEF(CString("AnimationAdapter_JinLipPuckerer"));
ScalarInterpolator70.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator70.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator70);

ScalarInterpolator& ScalarInterpolator71 =  ScalarInterpolator();
ScalarInterpolator71.setDEF(CString("AnimationAdapter_JinLipsPart"));
ScalarInterpolator71.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator71.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator71);

ScalarInterpolator& ScalarInterpolator72 =  ScalarInterpolator();
ScalarInterpolator72.setDEF(CString("AnimationAdapter_JinLipStretcher"));
ScalarInterpolator72.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator72.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator72);

ScalarInterpolator& ScalarInterpolator73 =  ScalarInterpolator();
ScalarInterpolator73.setDEF(CString("AnimationAdapter_JinLipSuck"));
ScalarInterpolator73.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator73.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator73);

ScalarInterpolator& ScalarInterpolator74 =  ScalarInterpolator();
ScalarInterpolator74.setDEF(CString("AnimationAdapter_JinLipTightener"));
ScalarInterpolator74.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator74.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator74);

ScalarInterpolator& ScalarInterpolator75 =  ScalarInterpolator();
ScalarInterpolator75.setDEF(CString("AnimationAdapter_JinLowerLipDepressor"));
ScalarInterpolator75.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator75.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator75);

ScalarInterpolator& ScalarInterpolator76 =  ScalarInterpolator();
ScalarInterpolator76.setDEF(CString("AnimationAdapter_JinMouthStretch"));
ScalarInterpolator76.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator76.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator76);

ScalarInterpolator& ScalarInterpolator77 =  ScalarInterpolator();
ScalarInterpolator77.setDEF(CString("AnimationAdapter_JinNasolabialDeepener"));
ScalarInterpolator77.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator77.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator77);

ScalarInterpolator& ScalarInterpolator78 =  ScalarInterpolator();
ScalarInterpolator78.setDEF(CString("AnimationAdapter_JinNoseWrinkler"));
ScalarInterpolator78.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator78.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator78);

ScalarInterpolator& ScalarInterpolator79 =  ScalarInterpolator();
ScalarInterpolator79.setDEF(CString("AnimationAdapter_JinOuterBrowRaiser"));
ScalarInterpolator79.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator79.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator79);

ScalarInterpolator& ScalarInterpolator80 =  ScalarInterpolator();
ScalarInterpolator80.setDEF(CString("AnimationAdapter_JinSlit"));
ScalarInterpolator80.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator80.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator80);

ScalarInterpolator& ScalarInterpolator81 =  ScalarInterpolator();
ScalarInterpolator81.setDEF(CString("AnimationAdapter_JinSquint"));
ScalarInterpolator81.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator81.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator81);

ScalarInterpolator& ScalarInterpolator82 =  ScalarInterpolator();
ScalarInterpolator82.setDEF(CString("AnimationAdapter_JinUpperLidRaiser"));
ScalarInterpolator82.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator82.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator82);

ScalarInterpolator& ScalarInterpolator83 =  ScalarInterpolator();
ScalarInterpolator83.setDEF(CString("AnimationAdapter_JinUpperLipRaiser"));
ScalarInterpolator83.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator83.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator83);

ScalarInterpolator& ScalarInterpolator84 =  ScalarInterpolator();
ScalarInterpolator84.setDEF(CString("AnimationAdapter_JinWink"));
ScalarInterpolator84.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
ScalarInterpolator84.setKeyValue(new float[]{0.0,0.5,1.0,0.5,0.0}, 5);
Layer15.addChild(&ScalarInterpolator84);

Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{-37.0,-20.0,0.0});
Transform85.setScale(new float[]{2.0,2.0,2.0});
HAnimHumanoid& HAnimHumanoid86 =  HAnimHumanoid();
HAnimHumanoid86.X3DNode::setName(CString("humanoid"));
HAnimHumanoid86.setDEF(CString("hanim0_humanoid"));
HAnimHumanoid86.setVersion(CString("2.0"));
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("humanoid_root"));
HAnimJoint87.setDEF(CString("hanim0_humanoid_root"));
HAnimJoint87.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint87.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment88 =  HAnimSegment();
HAnimSegment88.X3DNode::setName(CString("sacrum"));
HAnimSegment88.setDEF(CString("hanim0_sacrum"));
HAnimJoint87.addChildren(&HAnimSegment88);

HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.X3DNode::setName(CString("skullbase"));
HAnimJoint89.setDEF(CString("hanim0_skullbase"));
HAnimJoint89.setUlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimJoint89.setLlimit(new float[]{0.0,0.0,0.0}, 3);
HAnimSegment& HAnimSegment90 =  HAnimSegment();
HAnimSegment90.X3DNode::setName(CString("sacrum"));
HAnimSegment90.setDEF(CString("hanim_sacrum"));
WorldInfo& WorldInfo91 =  WorldInfo();
WorldInfo91.setTitle(CString("CleanedYouClocks.x3d"));
HAnimSegment90.addChild(&WorldInfo91);

Background& Background92 =  Background();
Background92.setSkyColor(new float[]{0.8,0.9,1.0}, 3);
HAnimSegment90.addChild(&Background92);

NavigationInfo& NavigationInfo93 =  NavigationInfo();
NavigationInfo93.setType(new CString[]{CString("EXAMINE")}, 1);
HAnimSegment90.addChild(&NavigationInfo93);

HAnimJoint89.addChildren(&HAnimSegment90);

HAnimSegment& HAnimSegment94 =  HAnimSegment();
HAnimSegment94.X3DNode::setName(CString("lower_teeth"));
HAnimSegment94.setDEF(CString("hanim_Lower_teeth"));
Transform& Transform95 =  Transform();
Transform95.setDEF(CString("Lower_teeth_JinBlink"));
Transform95.setTranslation(new float[]{0.0,8.43,11.43});
Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
Appearance97.setDEF(CString("BaseAppearance_JinBlink"));
Material& Material98 =  Material();
Material98.setDEF(CString("BaseMaterial_JinBlink"));
Material98.setAmbientIntensity(1);
Material98.setDiffuseColor(new float[]{0.588,0.588,0.588});
Material98.setShininess(0.145);
Appearance97.addChild(&Material98);

ImageTexture& ImageTexture99 =  ImageTexture();
ImageTexture99.setDEF(CString("JinImageAtlas_JinBlink"));
ImageTexture99.setUrl(new CString[]{CString("../data/JinImageAtlas.jpg"), CString("JinImageAtlas.jpg"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/JinImageAtlas.jpg")}, 3);
Appearance97.addChild(&ImageTexture99);

Shape96.addChild(&Appearance97);

IndexedFaceSet& IndexedFaceSet100 =  IndexedFaceSet();
IndexedFaceSet100.setDEF(CString("Lower_teeth-FACES_JinBlink"));
IndexedFaceSet100.setCoordIndex(new int32_t[]{0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1}, 8080);
IndexedFaceSet100.setCreaseAngle(3.14159);
IndexedFaceSet100.setSolid(false);
IndexedFaceSet100.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,8,7,18,-1,18,19,8,-1,6,20,18,-1,18,7,6,-1,21,22,18,-1,18,20,21,-1,23,19,18,-1,18,22,23,-1,17,16,24,-1,24,25,17,-1,15,26,24,-1,24,16,15,-1,27,28,24,-1,24,26,27,-1,29,25,24,-1,24,28,29,-1,23,22,30,-1,30,31,23,-1,21,32,30,-1,30,22,21,-1,33,34,30,-1,30,32,33,-1,35,31,30,-1,30,34,35,-1,29,28,36,-1,36,37,29,-1,27,38,36,-1,36,28,27,-1,39,40,36,-1,36,38,39,-1,41,37,36,-1,36,40,41,-1,35,34,42,-1,42,43,35,-1,33,44,42,-1,42,34,33,-1,45,46,42,-1,42,44,45,-1,47,43,42,-1,42,46,47,-1,41,40,48,-1,48,87,41,-1,39,88,48,-1,48,40,39,-1,145,146,48,-1,48,88,145,-1,147,87,48,-1,48,146,147,-1,47,46,148,-1,148,149,47,-1,45,150,148,-1,148,46,45,-1,151,152,148,-1,148,150,151,-1,153,149,148,-1,148,152,153,-1,147,146,154,-1,154,155,147,-1,145,156,154,-1,154,146,145,-1,157,158,154,-1,154,156,157,-1,159,155,154,-1,154,158,159,-1,153,152,160,-1,160,161,153,-1,151,162,160,-1,160,152,151,-1,163,164,160,-1,160,162,163,-1,165,161,160,-1,160,164,165,-1,159,158,166,-1,166,167,159,-1,157,168,166,-1,166,158,157,-1,169,170,166,-1,166,168,169,-1,171,167,166,-1,166,170,171,-1,165,164,172,-1,172,173,165,-1,163,174,172,-1,172,164,163,-1,175,176,172,-1,172,174,175,-1,177,173,172,-1,172,176,177,-1,171,170,178,-1,178,179,171,-1,169,180,178,-1,178,170,169,-1,181,182,178,-1,178,180,181,-1,183,179,178,-1,178,182,183,-1,9,12,184,-1,184,185,9,-1,17,186,184,-1,184,12,17,-1,187,188,184,-1,184,186,187,-1,189,185,184,-1,184,188,189,-1,17,25,190,-1,190,186,17,-1,29,191,190,-1,190,25,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,37,194,-1,194,191,29,-1,41,195,194,-1,194,37,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,87,292,-1,292,195,41,-1,147,293,292,-1,292,87,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,155,296,-1,296,293,147,-1,159,297,296,-1,296,155,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,167,300,-1,300,297,159,-1,171,301,300,-1,300,167,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,179,304,-1,304,301,171,-1,183,305,304,-1,304,179,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,308,-1,308,309,175,-1,163,310,308,-1,308,174,163,-1,311,312,308,-1,308,310,311,-1,313,309,308,-1,308,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,429,-1,429,430,15,-1,13,431,429,-1,429,14,13,-1,432,430,429,-1,429,431,432,-1,27,26,433,-1,433,434,27,-1,15,430,433,-1,433,26,15,-1,432,434,433,-1,433,430,432,-1,39,38,435,-1,435,436,39,-1,27,434,435,-1,435,38,27,-1,432,436,435,-1,435,434,432,-1,145,88,437,-1,437,438,145,-1,39,436,437,-1,437,88,39,-1,432,438,437,-1,437,436,432,-1,157,156,439,-1,439,440,157,-1,145,438,439,-1,439,156,145,-1,432,440,439,-1,439,438,432,-1,169,168,441,-1,441,442,169,-1,157,440,441,-1,441,168,157,-1,432,442,441,-1,441,440,432,-1,181,180,443,-1,443,444,181,-1,169,442,443,-1,443,180,169,-1,432,444,443,-1,443,442,432,-1,49,50,51,-1,51,52,49,-1,53,54,51,-1,51,50,53,-1,55,56,51,-1,51,54,55,-1,57,52,51,-1,51,56,57,-1,58,59,60,-1,60,61,58,-1,62,63,60,-1,60,59,62,-1,64,65,60,-1,60,63,64,-1,66,61,60,-1,60,65,66,-1,67,68,69,-1,69,70,67,-1,71,72,69,-1,69,68,71,-1,73,74,69,-1,69,72,73,-1,75,70,69,-1,69,74,75,-1,76,77,78,-1,78,79,76,-1,80,81,78,-1,78,77,80,-1,82,83,78,-1,78,81,82,-1,84,79,78,-1,78,83,84,-1,85,86,89,-1,89,90,85,-1,91,92,89,-1,89,86,91,-1,93,94,89,-1,89,92,93,-1,95,90,89,-1,89,94,95,-1,96,97,98,-1,98,99,96,-1,100,101,98,-1,98,97,100,-1,102,103,98,-1,98,101,102,-1,104,99,98,-1,98,103,104,-1,105,106,107,-1,107,108,105,-1,109,110,107,-1,107,106,109,-1,111,112,107,-1,107,110,111,-1,113,108,107,-1,107,112,113,-1,114,115,116,-1,116,117,114,-1,118,119,116,-1,116,115,118,-1,120,121,116,-1,116,119,120,-1,122,117,116,-1,116,121,122,-1,118,123,124,-1,124,119,118,-1,125,126,124,-1,124,123,125,-1,127,128,124,-1,124,126,127,-1,120,119,124,-1,124,128,120,-1,125,129,130,-1,130,126,125,-1,131,132,130,-1,130,129,131,-1,133,134,130,-1,130,132,133,-1,127,126,130,-1,130,134,127,-1,131,135,136,-1,136,132,131,-1,114,117,136,-1,136,135,114,-1,122,137,136,-1,136,117,122,-1,133,132,136,-1,136,137,133,-1,138,139,140,-1,140,141,138,-1,142,143,140,-1,140,139,142,-1,144,196,140,-1,140,143,144,-1,197,141,140,-1,140,196,197,-1,142,198,199,-1,199,143,142,-1,200,201,199,-1,199,198,200,-1,202,203,199,-1,199,201,202,-1,144,143,199,-1,199,203,144,-1,200,204,205,-1,205,201,200,-1,206,207,205,-1,205,204,206,-1,208,209,205,-1,205,207,208,-1,202,201,205,-1,205,209,202,-1,206,210,211,-1,211,207,206,-1,138,141,211,-1,211,210,138,-1,197,212,211,-1,211,141,197,-1,208,207,211,-1,211,212,208,-1,206,213,214,-1,214,215,206,-1,216,217,214,-1,214,213,216,-1,218,219,214,-1,214,217,218,-1,220,215,214,-1,214,219,220,-1,216,221,222,-1,222,217,216,-1,223,224,222,-1,222,221,223,-1,225,226,222,-1,222,224,225,-1,218,217,222,-1,222,226,218,-1,223,227,228,-1,228,224,223,-1,138,229,228,-1,228,227,138,-1,230,231,228,-1,228,229,230,-1,225,224,228,-1,228,231,225,-1,138,210,232,-1,232,229,138,-1,206,215,232,-1,232,210,206,-1,220,233,232,-1,232,215,220,-1,230,229,232,-1,232,233,230,-1,216,234,235,-1,235,236,216,-1,237,238,235,-1,235,234,237,-1,239,240,235,-1,235,238,239,-1,241,236,235,-1,235,240,241,-1,237,242,243,-1,243,238,237,-1,244,245,243,-1,243,242,244,-1,246,247,243,-1,243,245,246,-1,239,238,243,-1,243,247,239,-1,244,248,249,-1,249,245,244,-1,223,250,249,-1,249,248,223,-1,251,252,249,-1,249,250,251,-1,246,245,249,-1,249,252,246,-1,223,221,253,-1,253,250,223,-1,216,236,253,-1,253,221,216,-1,241,254,253,-1,253,236,241,-1,251,250,253,-1,253,254,251,-1,237,255,256,-1,256,257,237,-1,258,259,256,-1,256,255,258,-1,260,261,256,-1,256,259,260,-1,264,257,256,-1,256,261,264,-1,258,265,266,-1,266,259,258,-1,267,268,266,-1,266,265,267,-1,269,270,266,-1,266,268,269,-1,260,259,266,-1,266,270,260,-1,267,271,272,-1,272,268,267,-1,244,273,272,-1,272,271,244,-1,274,275,272,-1,272,273,274,-1,269,268,272,-1,272,275,269,-1,244,242,276,-1,276,273,244,-1,237,257,276,-1,276,242,237,-1,264,277,276,-1,276,257,264,-1,274,273,276,-1,276,277,274,-1,258,278,279,-1,279,280,258,-1,281,282,279,-1,279,278,281,-1,283,284,279,-1,279,282,283,-1,285,280,279,-1,279,284,285,-1,281,286,287,-1,287,282,281,-1,288,289,287,-1,287,286,288,-1,290,291,287,-1,287,289,290,-1,283,282,287,-1,287,291,283,-1,288,329,330,-1,330,289,288,-1,267,331,330,-1,330,329,267,-1,332,333,330,-1,330,331,332,-1,290,289,330,-1,330,333,290,-1,267,265,334,-1,334,331,267,-1,258,280,334,-1,334,265,258,-1,285,335,334,-1,334,280,285,-1,332,331,334,-1,334,335,332,-1,281,336,337,-1,337,338,281,-1,125,339,337,-1,337,336,125,-1,340,341,337,-1,337,339,340,-1,342,338,337,-1,337,341,342,-1,125,123,343,-1,343,339,125,-1,118,344,343,-1,343,123,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,347,348,-1,348,344,118,-1,288,349,348,-1,348,347,288,-1,350,351,348,-1,348,349,350,-1,345,344,348,-1,348,351,345,-1,288,286,352,-1,352,349,288,-1,281,338,352,-1,352,286,281,-1,342,353,352,-1,352,338,342,-1,350,349,352,-1,352,353,350,-1,432,431,445,-1,445,446,432,-1,13,447,445,-1,445,431,13,-1,448,449,445,-1,445,447,448,-1,450,446,445,-1,445,449,450,-1,354,355,356,-1,356,357,354,-1,358,359,356,-1,356,355,358,-1,53,50,356,-1,356,359,53,-1,49,357,356,-1,356,50,49,-1,358,360,361,-1,361,359,358,-1,362,363,361,-1,361,360,362,-1,55,54,361,-1,361,363,55,-1,53,359,361,-1,361,54,53,-1,362,365,366,-1,366,363,362,-1,367,368,366,-1,366,365,367,-1,57,56,366,-1,366,368,57,-1,55,363,366,-1,366,56,55,-1,367,369,370,-1,370,368,367,-1,354,357,370,-1,370,369,354,-1,49,52,370,-1,370,357,49,-1,57,368,370,-1,370,52,57,-1,371,372,373,-1,373,374,371,-1,375,376,373,-1,373,372,375,-1,62,59,373,-1,373,376,62,-1,58,374,373,-1,373,59,58,-1,375,377,378,-1,378,376,375,-1,379,380,378,-1,378,377,379,-1,64,63,378,-1,378,380,64,-1,62,376,378,-1,378,63,62,-1,379,381,382,-1,382,380,379,-1,383,384,382,-1,382,381,383,-1,66,65,382,-1,382,384,66,-1,64,380,382,-1,382,65,64,-1,383,385,386,-1,386,384,383,-1,371,374,386,-1,386,385,371,-1,58,61,386,-1,386,374,58,-1,66,384,386,-1,386,61,66,-1,387,388,389,-1,389,390,387,-1,391,392,389,-1,389,388,391,-1,71,68,389,-1,389,392,71,-1,67,390,389,-1,389,68,67,-1,391,393,394,-1,394,392,391,-1,395,396,394,-1,394,393,395,-1,73,72,394,-1,394,396,73,-1,71,392,394,-1,394,72,71,-1,395,397,398,-1,398,396,395,-1,399,400,398,-1,398,397,399,-1,75,74,398,-1,398,400,75,-1,73,396,398,-1,398,74,73,-1,399,401,402,-1,402,400,399,-1,387,390,402,-1,402,401,387,-1,67,70,402,-1,402,390,67,-1,75,400,402,-1,402,70,75,-1,403,404,405,-1,405,406,403,-1,407,408,405,-1,405,404,407,-1,80,77,405,-1,405,408,80,-1,76,406,405,-1,405,77,76,-1,407,409,410,-1,410,408,407,-1,411,412,410,-1,410,409,411,-1,82,81,410,-1,410,412,82,-1,80,408,410,-1,410,81,80,-1,411,413,414,-1,414,412,411,-1,415,416,414,-1,414,413,415,-1,84,83,414,-1,414,416,84,-1,82,412,414,-1,414,83,82,-1,415,417,418,-1,418,416,415,-1,403,406,418,-1,418,417,403,-1,76,79,418,-1,418,406,76,-1,84,416,418,-1,418,79,84,-1,419,420,457,-1,457,458,419,-1,459,460,457,-1,457,420,459,-1,91,86,457,-1,457,460,91,-1,85,458,457,-1,457,86,85,-1,459,461,462,-1,462,460,459,-1,463,464,462,-1,462,461,463,-1,93,92,462,-1,462,464,93,-1,91,460,462,-1,462,92,91,-1,463,465,466,-1,466,464,463,-1,467,468,466,-1,466,465,467,-1,95,94,466,-1,466,468,95,-1,93,464,466,-1,466,94,93,-1,467,469,470,-1,470,468,467,-1,419,458,470,-1,470,469,419,-1,85,90,470,-1,470,458,85,-1,95,468,470,-1,470,90,95,-1,471,472,473,-1,473,474,471,-1,475,476,473,-1,473,472,475,-1,100,97,473,-1,473,476,100,-1,96,474,473,-1,473,97,96,-1,475,477,478,-1,478,476,475,-1,479,480,478,-1,478,477,479,-1,102,101,478,-1,478,480,102,-1,100,476,478,-1,478,101,100,-1,479,481,482,-1,482,480,479,-1,483,484,482,-1,482,481,483,-1,104,103,482,-1,482,484,104,-1,102,480,482,-1,482,103,102,-1,483,485,486,-1,486,484,483,-1,471,474,486,-1,486,485,471,-1,96,99,486,-1,486,474,96,-1,104,484,486,-1,486,99,104,-1,487,488,489,-1,489,490,487,-1,491,493,489,-1,489,488,491,-1,109,106,489,-1,489,493,109,-1,105,490,489,-1,489,106,105,-1,491,494,495,-1,495,493,491,-1,496,497,495,-1,495,494,496,-1,111,110,495,-1,495,497,111,-1,109,493,495,-1,495,110,109,-1,496,498,499,-1,499,497,496,-1,500,501,499,-1,499,498,500,-1,113,112,499,-1,499,501,113,-1,111,497,499,-1,499,112,111,-1,500,502,503,-1,503,501,500,-1,487,490,503,-1,503,502,487,-1,105,108,503,-1,503,490,105,-1,113,501,503,-1,503,108,113,-1,120,504,505,-1,505,121,120,-1,358,355,505,-1,505,504,358,-1,354,506,505,-1,505,355,354,-1,122,121,505,-1,505,506,122,-1,127,507,508,-1,508,128,127,-1,362,360,508,-1,508,507,362,-1,358,504,508,-1,508,360,358,-1,120,128,508,-1,508,504,120,-1,133,509,510,-1,510,134,133,-1,367,365,510,-1,510,509,367,-1,362,507,510,-1,510,365,362,-1,127,134,510,-1,510,507,127,-1,122,506,511,-1,511,137,122,-1,354,369,511,-1,511,506,354,-1,367,509,511,-1,511,369,367,-1,133,137,511,-1,511,509,133,-1,144,512,513,-1,513,196,144,-1,375,372,513,-1,513,512,375,-1,371,514,513,-1,513,372,371,-1,197,196,513,-1,513,514,197,-1,202,515,516,-1,516,203,202,-1,379,377,516,-1,516,515,379,-1,375,512,516,-1,516,377,375,-1,144,203,516,-1,516,512,144,-1,208,517,518,-1,518,209,208,-1,383,381,518,-1,518,517,383,-1,379,515,518,-1,518,381,379,-1,202,209,518,-1,518,515,202,-1,197,514,519,-1,519,212,197,-1,371,385,519,-1,519,514,371,-1,383,517,519,-1,519,385,383,-1,208,212,519,-1,519,517,208,-1,218,520,521,-1,521,219,218,-1,391,388,521,-1,521,520,391,-1,387,522,521,-1,521,388,387,-1,220,219,521,-1,521,522,220,-1,225,523,524,-1,524,226,225,-1,395,393,524,-1,524,523,395,-1,391,520,524,-1,524,393,391,-1,218,226,524,-1,524,520,218,-1,230,525,526,-1,526,231,230,-1,399,397,526,-1,526,525,399,-1,395,523,526,-1,526,397,395,-1,225,231,526,-1,526,523,225,-1,220,522,527,-1,527,233,220,-1,387,401,527,-1,527,522,387,-1,399,525,527,-1,527,401,399,-1,230,233,527,-1,527,525,230,-1,239,528,529,-1,529,240,239,-1,407,404,529,-1,529,528,407,-1,403,530,529,-1,529,404,403,-1,241,240,529,-1,529,530,241,-1,246,531,532,-1,532,247,246,-1,411,409,532,-1,532,531,411,-1,407,528,532,-1,532,409,407,-1,239,247,532,-1,532,528,239,-1,251,533,534,-1,534,252,251,-1,415,413,534,-1,534,533,415,-1,411,531,534,-1,534,413,411,-1,246,252,534,-1,534,531,246,-1,241,530,535,-1,535,254,241,-1,403,417,535,-1,535,530,403,-1,415,533,535,-1,535,417,415,-1,251,254,535,-1,535,533,251,-1,260,536,537,-1,537,261,260,-1,459,420,537,-1,537,536,459,-1,419,538,537,-1,537,420,419,-1,264,261,537,-1,537,538,264,-1,269,539,540,-1,540,270,269,-1,463,461,540,-1,540,539,463,-1,459,536,540,-1,540,461,459,-1,260,270,540,-1,540,536,260,-1,274,541,542,-1,542,275,274,-1,467,465,542,-1,542,541,467,-1,463,539,542,-1,542,465,463,-1,269,275,542,-1,542,539,269,-1,264,538,543,-1,543,277,264,-1,419,469,543,-1,543,538,419,-1,467,541,543,-1,543,469,467,-1,274,277,543,-1,543,541,274,-1,283,544,545,-1,545,284,283,-1,475,472,545,-1,545,544,475,-1,471,546,545,-1,545,472,471,-1,285,284,545,-1,545,546,285,-1,290,547,548,-1,548,291,290,-1,479,477,548,-1,548,547,479,-1,475,544,548,-1,548,477,475,-1,283,291,548,-1,548,544,283,-1,332,598,600,-1,600,333,332,-1,483,481,600,-1,600,598,483,-1,479,547,600,-1,600,481,479,-1,290,333,600,-1,600,547,290,-1,285,546,602,-1,602,335,285,-1,471,485,602,-1,602,546,471,-1,483,598,602,-1,602,485,483,-1,332,335,602,-1,602,598,332,-1,340,604,606,-1,606,341,340,-1,491,488,606,-1,606,604,491,-1,487,609,606,-1,606,488,487,-1,342,341,606,-1,606,609,342,-1,345,616,642,-1,642,346,345,-1,496,494,642,-1,642,616,496,-1,491,604,642,-1,642,494,491,-1,340,346,642,-1,642,604,340,-1,350,643,644,-1,644,351,350,-1,500,498,644,-1,644,643,500,-1,496,616,644,-1,644,498,496,-1,345,351,644,-1,644,616,345,-1,342,609,645,-1,645,353,342,-1,487,502,645,-1,645,609,487,-1,500,643,645,-1,645,502,500,-1,350,353,645,-1,645,643,350,-1,448,451,452,-1,452,449,448,-1,453,454,452,-1,452,451,453,-1,455,456,452,-1,452,454,455,-1,450,449,452,-1,452,456,450,-1,492,549,550,-1,550,551,492,-1,552,553,550,-1,550,549,552,-1,554,555,550,-1,550,553,554,-1,556,551,550,-1,550,555,556,-1,557,558,559,-1,559,560,557,-1,561,562,559,-1,559,558,561,-1,563,564,559,-1,559,562,563,-1,565,560,559,-1,559,564,565,-1,552,566,567,-1,567,553,552,-1,568,569,567,-1,567,566,568,-1,570,571,567,-1,567,569,570,-1,554,553,567,-1,567,571,554,-1,561,572,573,-1,573,562,561,-1,574,575,573,-1,573,572,574,-1,576,577,573,-1,573,575,576,-1,563,562,573,-1,573,577,563,-1,568,578,579,-1,579,569,568,-1,580,581,579,-1,579,578,580,-1,582,583,579,-1,579,581,582,-1,570,569,579,-1,579,583,570,-1,574,584,585,-1,585,575,574,-1,586,587,585,-1,585,584,586,-1,588,589,585,-1,585,587,588,-1,576,575,585,-1,585,589,576,-1,580,590,591,-1,591,581,580,-1,592,593,591,-1,591,590,592,-1,594,595,591,-1,591,593,594,-1,582,581,591,-1,591,595,582,-1,586,596,597,-1,597,587,586,-1,599,601,597,-1,597,596,599,-1,603,605,597,-1,597,601,603,-1,588,587,597,-1,597,605,588,-1,592,607,608,-1,608,593,592,-1,610,611,608,-1,608,607,610,-1,612,613,608,-1,608,611,612,-1,594,593,608,-1,608,613,594,-1,599,614,615,-1,615,601,599,-1,617,618,615,-1,615,614,617,-1,619,620,615,-1,615,618,619,-1,603,601,615,-1,615,620,603,-1,610,621,622,-1,622,611,610,-1,623,624,622,-1,622,621,623,-1,625,626,622,-1,622,624,625,-1,612,611,622,-1,622,626,612,-1,617,627,628,-1,628,618,617,-1,629,630,628,-1,628,627,629,-1,631,632,628,-1,628,630,631,-1,619,618,628,-1,628,632,619,-1,623,633,634,-1,634,624,623,-1,177,176,634,-1,634,633,177,-1,175,635,634,-1,634,176,175,-1,625,624,634,-1,634,635,625,-1,629,636,637,-1,637,630,629,-1,183,182,637,-1,637,636,183,-1,181,638,637,-1,637,182,181,-1,631,630,637,-1,637,638,631,-1,557,639,640,-1,640,558,557,-1,641,707,640,-1,640,639,641,-1,708,793,640,-1,640,707,708,-1,561,558,640,-1,640,793,561,-1,561,793,822,-1,822,572,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,572,822,-1,822,825,574,-1,574,825,826,-1,826,584,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,584,826,-1,826,829,586,-1,586,829,830,-1,830,596,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,596,830,-1,830,833,599,-1,599,833,834,-1,834,614,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,614,834,-1,834,837,617,-1,617,837,838,-1,838,627,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,627,838,-1,838,841,629,-1,629,841,842,-1,842,636,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,636,842,-1,842,305,183,-1,175,309,844,-1,844,635,175,-1,313,845,844,-1,844,309,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,874,875,-1,875,564,563,-1,432,877,875,-1,875,874,432,-1,565,564,875,-1,875,877,565,-1,576,878,880,-1,880,577,576,-1,432,874,880,-1,880,878,432,-1,563,577,880,-1,880,874,563,-1,588,881,883,-1,883,589,588,-1,432,878,883,-1,883,881,432,-1,576,589,883,-1,883,878,576,-1,603,884,885,-1,885,605,603,-1,432,881,885,-1,885,884,432,-1,588,605,885,-1,885,881,588,-1,619,887,888,-1,888,620,619,-1,432,884,888,-1,888,887,432,-1,603,620,888,-1,888,884,603,-1,631,889,890,-1,890,632,631,-1,432,887,890,-1,890,889,432,-1,619,632,890,-1,890,887,619,-1,181,444,891,-1,891,638,181,-1,432,889,891,-1,891,444,432,-1,631,638,891,-1,891,889,631,-1,646,647,648,-1,648,649,646,-1,650,651,648,-1,648,647,650,-1,652,653,648,-1,648,651,652,-1,654,649,648,-1,648,653,654,-1,655,656,657,-1,657,658,655,-1,659,660,657,-1,657,656,659,-1,661,662,657,-1,657,660,661,-1,663,658,657,-1,657,662,663,-1,664,665,666,-1,666,667,664,-1,668,669,666,-1,666,665,668,-1,670,671,666,-1,666,669,670,-1,672,667,666,-1,666,671,672,-1,673,674,675,-1,675,676,673,-1,677,678,675,-1,675,674,677,-1,679,680,675,-1,675,678,679,-1,681,676,675,-1,675,680,681,-1,682,683,684,-1,684,685,682,-1,686,687,684,-1,684,683,686,-1,688,689,684,-1,684,687,688,-1,690,685,684,-1,684,689,690,-1,691,692,693,-1,693,694,691,-1,695,696,693,-1,693,692,695,-1,697,698,693,-1,693,696,697,-1,699,694,693,-1,693,698,699,-1,700,701,702,-1,702,703,700,-1,704,705,702,-1,702,701,704,-1,706,709,702,-1,702,705,706,-1,710,703,702,-1,702,709,710,-1,711,712,713,-1,713,714,711,-1,715,716,713,-1,713,712,715,-1,717,718,713,-1,713,716,717,-1,719,714,713,-1,713,718,719,-1,719,718,720,-1,720,721,719,-1,717,722,720,-1,720,718,717,-1,723,724,720,-1,720,722,723,-1,725,721,720,-1,720,724,725,-1,725,724,726,-1,726,727,725,-1,723,728,726,-1,726,724,723,-1,729,730,726,-1,726,728,729,-1,731,727,726,-1,726,730,731,-1,731,730,732,-1,732,733,731,-1,729,734,732,-1,732,730,729,-1,715,712,732,-1,732,734,715,-1,711,733,732,-1,732,712,711,-1,735,736,737,-1,737,738,735,-1,739,740,737,-1,737,736,739,-1,741,742,737,-1,737,740,741,-1,142,738,737,-1,737,742,142,-1,142,742,743,-1,743,198,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,198,743,-1,743,746,200,-1,200,746,747,-1,747,748,200,-1,745,749,747,-1,747,746,745,-1,750,751,747,-1,747,749,750,-1,752,748,747,-1,747,751,752,-1,752,751,753,-1,753,754,752,-1,750,755,753,-1,753,751,750,-1,739,736,753,-1,753,755,739,-1,735,754,753,-1,753,736,735,-1,752,756,757,-1,757,758,752,-1,759,760,757,-1,757,756,759,-1,761,762,757,-1,757,760,761,-1,763,758,757,-1,757,762,763,-1,763,762,764,-1,764,765,763,-1,761,766,764,-1,764,762,761,-1,767,768,764,-1,764,766,767,-1,769,765,764,-1,764,768,769,-1,769,768,770,-1,770,771,769,-1,767,772,770,-1,770,768,767,-1,773,774,770,-1,770,772,773,-1,735,771,770,-1,770,774,735,-1,735,774,775,-1,775,754,735,-1,773,776,775,-1,775,774,773,-1,759,756,775,-1,775,776,759,-1,752,754,775,-1,775,756,752,-1,763,777,778,-1,778,779,763,-1,780,781,778,-1,778,777,780,-1,782,783,778,-1,778,781,782,-1,784,779,778,-1,778,783,784,-1,784,783,785,-1,785,786,784,-1,782,787,785,-1,785,783,782,-1,788,789,785,-1,785,787,788,-1,790,786,785,-1,785,789,790,-1,790,789,791,-1,791,792,790,-1,788,794,791,-1,791,789,788,-1,795,796,791,-1,791,794,795,-1,769,792,791,-1,791,796,769,-1,769,796,797,-1,797,765,769,-1,795,798,797,-1,797,796,795,-1,780,777,797,-1,797,798,780,-1,763,765,797,-1,797,777,763,-1,784,799,800,-1,800,801,784,-1,802,803,800,-1,800,799,802,-1,804,805,800,-1,800,803,804,-1,806,801,800,-1,800,805,806,-1,806,805,807,-1,807,808,806,-1,804,809,807,-1,807,805,804,-1,810,811,807,-1,807,809,810,-1,812,808,807,-1,807,811,812,-1,812,811,813,-1,813,814,812,-1,810,815,813,-1,813,811,810,-1,816,817,813,-1,813,815,816,-1,790,814,813,-1,813,817,790,-1,790,817,818,-1,818,786,790,-1,816,819,818,-1,818,817,816,-1,802,799,818,-1,818,819,802,-1,784,786,818,-1,818,799,784,-1,806,820,821,-1,821,870,806,-1,873,876,821,-1,821,820,873,-1,879,882,821,-1,821,876,879,-1,886,870,821,-1,821,882,886,-1,886,882,900,-1,900,901,886,-1,879,902,900,-1,900,882,879,-1,903,904,900,-1,900,902,903,-1,905,901,900,-1,900,904,905,-1,905,904,906,-1,906,907,905,-1,903,908,906,-1,906,904,903,-1,909,910,906,-1,906,908,909,-1,812,907,906,-1,906,910,812,-1,812,910,911,-1,911,808,812,-1,909,912,911,-1,911,910,909,-1,873,820,911,-1,911,912,873,-1,806,808,911,-1,911,820,806,-1,886,913,914,-1,914,915,886,-1,916,917,914,-1,914,913,916,-1,918,919,914,-1,914,917,918,-1,725,915,914,-1,914,919,725,-1,725,919,920,-1,920,721,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,721,920,-1,920,923,719,-1,719,923,924,-1,924,925,719,-1,922,926,924,-1,924,923,922,-1,927,928,924,-1,924,926,927,-1,905,925,924,-1,924,928,905,-1,905,928,929,-1,929,901,905,-1,927,930,929,-1,929,928,927,-1,916,913,929,-1,929,930,916,-1,886,901,929,-1,929,913,886,-1,432,446,892,-1,892,877,432,-1,450,893,892,-1,892,446,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,932,933,-1,933,934,931,-1,646,649,933,-1,933,932,646,-1,654,935,933,-1,933,649,654,-1,936,934,933,-1,933,935,936,-1,936,935,937,-1,937,938,936,-1,654,653,937,-1,937,935,654,-1,652,939,937,-1,937,653,652,-1,940,938,937,-1,937,939,940,-1,940,939,941,-1,941,942,940,-1,652,651,941,-1,941,939,652,-1,650,943,941,-1,941,651,650,-1,944,942,941,-1,941,943,944,-1,944,943,945,-1,945,946,944,-1,650,647,945,-1,945,943,650,-1,646,932,945,-1,945,647,646,-1,931,946,945,-1,945,932,931,-1,947,948,949,-1,949,950,947,-1,655,658,949,-1,949,948,655,-1,663,951,949,-1,949,658,663,-1,952,950,949,-1,949,951,952,-1,952,951,953,-1,953,954,952,-1,663,662,953,-1,953,951,663,-1,661,955,953,-1,953,662,661,-1,956,954,953,-1,953,955,956,-1,956,955,957,-1,957,958,956,-1,661,660,957,-1,957,955,661,-1,659,959,957,-1,957,660,659,-1,960,958,957,-1,957,959,960,-1,960,959,961,-1,961,962,960,-1,659,656,961,-1,961,959,659,-1,655,948,961,-1,961,656,655,-1,947,962,961,-1,961,948,947,-1,963,964,965,-1,965,966,963,-1,664,667,965,-1,965,964,664,-1,672,967,965,-1,965,667,672,-1,968,966,965,-1,965,967,968,-1,968,967,969,-1,969,970,968,-1,672,671,969,-1,969,967,672,-1,670,971,969,-1,969,671,670,-1,972,970,969,-1,969,971,972,-1,972,971,973,-1,973,974,972,-1,670,669,973,-1,973,971,670,-1,668,975,973,-1,973,669,668,-1,976,974,973,-1,973,975,976,-1,976,975,977,-1,977,978,976,-1,668,665,977,-1,977,975,668,-1,664,964,977,-1,977,665,664,-1,963,978,977,-1,977,964,963,-1,979,980,981,-1,981,982,979,-1,673,676,981,-1,981,980,673,-1,681,983,981,-1,981,676,681,-1,984,982,981,-1,981,983,984,-1,984,983,985,-1,985,986,984,-1,681,680,985,-1,985,983,681,-1,679,987,985,-1,985,680,679,-1,988,986,985,-1,985,987,988,-1,988,987,989,-1,989,990,988,-1,679,678,989,-1,989,987,679,-1,677,991,989,-1,989,678,677,-1,992,990,989,-1,989,991,992,-1,992,991,993,-1,993,994,992,-1,677,674,993,-1,993,991,677,-1,673,980,993,-1,993,674,673,-1,979,994,993,-1,993,980,979,-1,995,996,997,-1,997,998,995,-1,682,685,997,-1,997,996,682,-1,690,999,997,-1,997,685,690,-1,1000,998,997,-1,997,999,1000,-1,1000,999,1001,-1,1001,1002,1000,-1,690,689,1001,-1,1001,999,690,-1,688,1003,1001,-1,1001,689,688,-1,1004,1002,1001,-1,1001,1003,1004,-1,1004,1003,1005,-1,1005,1006,1004,-1,688,687,1005,-1,1005,1003,688,-1,686,1007,1005,-1,1005,687,686,-1,1008,1006,1005,-1,1005,1007,1008,-1,1008,1007,1009,-1,1009,1010,1008,-1,686,683,1009,-1,1009,1007,686,-1,682,996,1009,-1,1009,683,682,-1,995,1010,1009,-1,1009,996,995,-1,1011,1012,1013,-1,1013,1014,1011,-1,691,694,1013,-1,1013,1012,691,-1,699,1015,1013,-1,1013,694,699,-1,1016,1014,1013,-1,1013,1015,1016,-1,1016,1015,1017,-1,1017,1018,1016,-1,699,698,1017,-1,1017,1015,699,-1,697,1019,1017,-1,1017,698,697,-1,1020,1018,1017,-1,1017,1019,1020,-1,1020,1019,1021,-1,1021,1022,1020,-1,697,696,1021,-1,1021,1019,697,-1,695,1023,1021,-1,1021,696,695,-1,1024,1022,1021,-1,1021,1023,1024,-1,1024,1023,1025,-1,1025,1026,1024,-1,695,692,1025,-1,1025,1023,695,-1,691,1012,1025,-1,1025,692,691,-1,1011,1026,1025,-1,1025,1012,1011,-1,1027,1028,1029,-1,1029,1030,1027,-1,700,703,1029,-1,1029,1028,700,-1,710,1031,1029,-1,1029,703,710,-1,1032,1030,1029,-1,1029,1031,1032,-1,1032,1031,1033,-1,1033,1034,1032,-1,710,709,1033,-1,1033,1031,710,-1,706,1035,1033,-1,1033,709,706,-1,1036,1034,1033,-1,1033,1035,1036,-1,1036,1035,1037,-1,1037,1038,1036,-1,706,705,1037,-1,1037,1035,706,-1,704,1039,1037,-1,1037,705,704,-1,1040,1038,1037,-1,1037,1039,1040,-1,1040,1039,1041,-1,1041,1042,1040,-1,704,701,1041,-1,1041,1039,704,-1,700,1028,1041,-1,1041,701,700,-1,1027,1042,1041,-1,1041,1028,1027,-1,717,716,1043,-1,1043,1044,717,-1,715,1045,1043,-1,1043,716,715,-1,931,934,1043,-1,1043,1045,931,-1,936,1044,1043,-1,1043,934,936,-1,723,722,1046,-1,1046,1047,723,-1,717,1044,1046,-1,1046,722,717,-1,936,938,1046,-1,1046,1044,936,-1,940,1047,1046,-1,1046,938,940,-1,729,728,1048,-1,1048,1049,729,-1,723,1047,1048,-1,1048,728,723,-1,940,942,1048,-1,1048,1047,940,-1,944,1049,1048,-1,1048,942,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1049,1050,-1,1050,734,729,-1,944,946,1050,-1,1050,1049,944,-1,931,1045,1050,-1,1050,946,931,-1,741,740,1051,-1,1051,1052,741,-1,739,1053,1051,-1,1051,740,739,-1,947,950,1051,-1,1051,1053,947,-1,952,1052,1051,-1,1051,950,952,-1,745,744,1054,-1,1054,1055,745,-1,741,1052,1054,-1,1054,744,741,-1,952,954,1054,-1,1054,1052,952,-1,956,1055,1054,-1,1054,954,956,-1,750,749,1056,-1,1056,1057,750,-1,745,1055,1056,-1,1056,749,745,-1,956,958,1056,-1,1056,1055,956,-1,960,1057,1056,-1,1056,958,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1057,1058,-1,1058,755,750,-1,960,962,1058,-1,1058,1057,960,-1,947,1053,1058,-1,1058,962,947,-1,761,760,1059,-1,1059,1060,761,-1,759,1061,1059,-1,1059,760,759,-1,963,966,1059,-1,1059,1061,963,-1,968,1060,1059,-1,1059,966,968,-1,767,766,1062,-1,1062,1063,767,-1,761,1060,1062,-1,1062,766,761,-1,968,970,1062,-1,1062,1060,968,-1,972,1063,1062,-1,1062,970,972,-1,773,772,1064,-1,1064,1065,773,-1,767,1063,1064,-1,1064,772,767,-1,972,974,1064,-1,1064,1063,972,-1,976,1065,1064,-1,1064,974,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1065,1066,-1,1066,776,773,-1,976,978,1066,-1,1066,1065,976,-1,963,1061,1066,-1,1066,978,963,-1,782,781,1067,-1,1067,1068,782,-1,780,1069,1067,-1,1067,781,780,-1,979,982,1067,-1,1067,1069,979,-1,984,1068,1067,-1,1067,982,984,-1,788,787,1070,-1,1070,1071,788,-1,782,1068,1070,-1,1070,787,782,-1,984,986,1070,-1,1070,1068,984,-1,988,1071,1070,-1,1070,986,988,-1,795,794,1072,-1,1072,1073,795,-1,788,1071,1072,-1,1072,794,788,-1,988,990,1072,-1,1072,1071,988,-1,992,1073,1072,-1,1072,990,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1073,1074,-1,1074,798,795,-1,992,994,1074,-1,1074,1073,992,-1,979,1069,1074,-1,1074,994,979,-1,804,803,1075,-1,1075,1076,804,-1,802,1077,1075,-1,1075,803,802,-1,995,998,1075,-1,1075,1077,995,-1,1000,1076,1075,-1,1075,998,1000,-1,810,809,1078,-1,1078,1079,810,-1,804,1076,1078,-1,1078,809,804,-1,1000,1002,1078,-1,1078,1076,1000,-1,1004,1079,1078,-1,1078,1002,1004,-1,816,815,1080,-1,1080,1081,816,-1,810,1079,1080,-1,1080,815,810,-1,1004,1006,1080,-1,1080,1079,1004,-1,1008,1081,1080,-1,1080,1006,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1081,1082,-1,1082,819,816,-1,1008,1010,1082,-1,1082,1081,1008,-1,995,1077,1082,-1,1082,1010,995,-1,879,876,1083,-1,1083,1084,879,-1,873,1085,1083,-1,1083,876,873,-1,1011,1014,1083,-1,1083,1085,1011,-1,1016,1084,1083,-1,1083,1014,1016,-1,903,902,1086,-1,1086,1087,903,-1,879,1084,1086,-1,1086,902,879,-1,1016,1018,1086,-1,1086,1084,1016,-1,1020,1087,1086,-1,1086,1018,1020,-1,909,908,1088,-1,1088,1089,909,-1,903,1087,1088,-1,1088,908,903,-1,1020,1022,1088,-1,1088,1087,1020,-1,1024,1089,1088,-1,1088,1022,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1089,1090,-1,1090,912,909,-1,1024,1026,1090,-1,1090,1089,1024,-1,1011,1085,1090,-1,1090,1026,1011,-1,918,917,1091,-1,1091,1092,918,-1,916,1093,1091,-1,1091,917,916,-1,1027,1030,1091,-1,1091,1093,1027,-1,1032,1092,1091,-1,1091,1030,1032,-1,922,921,1094,-1,1094,1095,922,-1,918,1092,1094,-1,1094,921,918,-1,1032,1034,1094,-1,1094,1092,1032,-1,1036,1095,1094,-1,1094,1034,1036,-1,927,926,1096,-1,1096,1097,927,-1,922,1095,1096,-1,1096,926,922,-1,1036,1038,1096,-1,1096,1095,1036,-1,1040,1097,1096,-1,1096,1038,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1097,1098,-1,1098,930,927,-1,1040,1042,1098,-1,1098,1097,1040,-1,1027,1093,1098,-1,1098,1042,1027,-1,894,893,896,-1,896,897,894,-1,450,456,896,-1,896,893,450,-1,455,898,896,-1,896,456,455,-1,899,897,896,-1,896,898,899,-1}, 8080);
TextureCoordinate& TextureCoordinate101 =  TextureCoordinate();
TextureCoordinate101.setDEF(CString("Lower_teeth-TEXCOORD_JinBlink"));
TextureCoordinate101.setPoint(new float[]{0.8538,0.2675,0.8565,0.2503,0.8695,0.2562,0.8668,0.2734,0.8588,0.2367,0.8717,0.2426,0.8844,0.2483,0.8823,0.262,0.8795,0.2792,0.8612,0.228,0.861,0.2289,0.8725,0.2388,0.8732,0.2346,0.8609,0.2296,0.8708,0.2419,0.8804,0.2515,0.8838,0.2475,0.8849,0.2408,0.8946,0.2676,0.8919,0.2848,0.8968,0.254,0.9087,0.2594,0.9065,0.273,0.9038,0.2902,0.8949,0.2538,0.8961,0.2462,0.891,0.2586,0.9,0.2623,0.9058,0.2587,0.907,0.2511,0.9179,0.2782,0.9152,0.2954,0.9201,0.2645,0.9312,0.2696,0.9291,0.2832,0.9264,0.3004,0.9164,0.2635,0.9176,0.2559,0.9106,0.2675,0.9189,0.2709,0.9269,0.2683,0.9281,0.2607,0.9402,0.2883,0.9375,0.3055,0.9423,0.2746,0.9521,0.2791,0.95,0.2928,0.9473,0.3099,0.9377,0.2732,0.8588,0.145,0.8655,0.1406,0.8654,0.1406,0.8563,0.1466,0.8722,0.1362,0.8746,0.1346,0.8723,0.1362,0.8654,0.1407,0.8585,0.1452,0.9628,0.0768,0.9627,0.07687,0.9643,0.07584,0.9639,0.0761,0.9633,0.07644,0.9646,0.07558,0.9658,0.07486,0.9658,0.07481,0.9651,0.07527,0.9636,0.07627,0.9625,0.077,0.961,0.07797,0.963,0.07668,0.9607,0.0782,0.9591,0.07925,0.9585,0.07964,0.9595,0.07893,0.9614,0.07775,0.9566,0.08085,0.9537,0.08276,0.9524,0.08361,0.9567,0.08081,0.9502,0.08508,0.9481,0.08642,0.9483,0.08632,0.9511,0.08447,0.9546,0.0822,0.9423,0.09027,0.9364,0.0941,0.939,0.2656,0.9302,0.2764,0.9351,0.09494,0.9434,0.08949,0.9299,0.09835,0.9268,0.1004,0.928,0.09963,0.9339,0.09577,0.9404,0.0915,0.9197,0.1051,0.9139,0.1089,0.9127,0.1096,0.9208,0.1043,0.9076,0.113,0.9047,0.1149,0.906,0.1141,0.9116,0.1104,0.9178,0.1063,0.8968,0.1201,0.8904,0.1243,0.8898,0.1247,0.8985,0.119,0.8837,0.1287,0.8812,0.1303,0.8831,0.1291,0.8892,0.125,0.8957,0.1208,0.8485,0.1053,0.8608,0.09748,0.8609,0.09813,0.8517,0.1042,0.8729,0.08952,0.87,0.09212,0.8707,0.098,0.8615,0.104,0.8523,0.11,0.8733,0.08954,0.8733,0.08999,0.8734,0.08866,0.8703,0.09196,0.8709,0.09783,0.8739,0.09587,0.8605,0.09651,0.8607,0.09825,0.8476,0.1047,0.8512,0.1045,0.8518,0.1104,0.8613,0.1041,0.8482,0.1055,0.8483,0.1064,0.8489,0.1122,0.9565,0.03469,0.9569,0.03447,0.9571,0.03505,0.9573,0.03487,0.9576,0.03398,0.9581,0.0344,0.9588,0.04024,0.9372,0.2791,0.9473,0.2775,0.9485,0.27,0.9574,0.2961,0.9547,0.3133,0.9595,0.2824,0.9647,0.2848,0.9626,0.2985,0.9599,0.3157,0.9541,0.2806,0.9554,0.2731,0.9452,0.2832,0.9475,0.2838,0.9588,0.2828,0.9601,0.2752,0.9662,0.3001,0.9635,0.3173,0.9682,0.2864,0.9704,0.2874,0.9684,0.3011,0.9657,0.3183,0.9621,0.2842,0.9633,0.2767,0.9525,0.2865,0.9522,0.286,0.9641,0.2852,0.9654,0.2776,0.9695,0.3016,0.9668,0.3188,0.9716,0.2879,0.9719,0.2881,0.9698,0.3017,0.9671,0.3189,0.9651,0.2856,0.9663,0.2781,0.9553,0.2877,0.9533,0.2865,0.9653,0.2857,0.9666,0.2782,0.8735,0.2332,0.8615,0.2278,0.8853,0.2386,0.8855,0.2385,0.8737,0.2331,0.8617,0.2279,0.8966,0.2437,0.9074,0.2486,0.9077,0.2486,0.8966,0.2436,0.918,0.2534,0.9286,0.2582,0.9578,0.04088,0.958,0.04071,0.9601,0.03258,0.9601,0.03303,0.9623,0.03036,0.962,0.03185,0.9626,0.03775,0.9608,0.0389,0.9621,0.02986,0.9621,0.03172,0.961,0.03123,0.9611,0.03243,0.9617,0.03833,0.9627,0.03763,0.959,0.03329,0.9591,0.03374,0.9597,0.03961,0.9587,0.03209,0.9588,0.03395,0.9602,0.03299,0.9553,0.03494,0.9561,0.03568,0.9567,0.04158,0.9593,0.03985,0.9608,0.03889,0.9536,0.03683,0.9537,0.03728,0.9511,0.03821,0.9526,0.03799,0.9533,0.04383,0.9543,0.04315,0.9538,0.03649,0.954,0.03708,0.9566,0.03538,0.9572,0.04122,0.9547,0.04291,0.9591,0.03374,0.9597,0.03962,0.9498,0.03795,0.9498,0.0398,0.9539,0.03715,0.9428,0.04312,0.9448,0.04312,0.9454,0.049,0.9504,0.04569,0.9545,0.04305,0.9418,0.04459,0.9418,0.04503,0.9394,0.04587,0.9419,0.04501,0.9426,0.05085,0.9425,0.05089,0.9455,0.04192,0.9457,0.04253,0.9505,0.03936,0.9512,0.04521,0.9464,0.04837,0.9537,0.03729,0.9543,0.04317,0.9323,0.04942,0.9324,0.05124,0.9404,0.04599,0.9208,0.05759,0.9234,0.05711,0.9241,0.06299,0.933,0.05713,0.9288,0.2582,0.9181,0.2533,0.941,0.05188,0.9191,0.05948,0.9191,0.05992,0.9174,0.06032,0.9205,0.05901,0.9212,0.06486,0.9198,0.06578,0.9285,0.05309,0.9286,0.05372,0.9376,0.04782,0.9383,0.05368,0.9293,0.05958,0.9418,0.04505,0.9425,0.05092,0.9096,0.06429,0.9097,0.06609,0.9178,0.06084,0.898,0.07251,0.9009,0.07189,0.9015,0.07775,0.9104,0.07197,0.9184,0.06672,0.897,0.07396,0.8971,0.0744,0.8957,0.07454,0.8988,0.07329,0.8994,0.07915,0.8977,0.08026,0.9395,0.2632,0.9491,0.2676,0.9503,0.268,0.9396,0.2631,0.956,0.2707,0.9607,0.2728,0.9617,0.2731,0.9562,0.2706,0.964,0.2743,0.966,0.2752,0.9669,0.2755,0.9643,0.2743,0.967,0.2757,0.9672,0.2758,0.968,0.276,0.9673,0.2757,0.9723,0.2813,0.9726,0.2814,0.9712,0.2808,0.9713,0.2778,0.9724,0.2788,0.9726,0.2784,0.969,0.2798,0.9655,0.2782,0.9658,0.2753,0.9691,0.2773,0.9603,0.2758,0.953,0.2725,0.9536,0.2698,0.9604,0.2733,0.9431,0.268,0.9321,0.263,0.9321,0.2601,0.9433,0.2656,0.921,0.258,0.9096,0.2528,0.91,0.25,0.9064,0.06758,0.9065,0.06824,0.915,0.06265,0.9156,0.06852,0.9071,0.0741,0.9191,0.05993,0.9198,0.06581,0.8858,0.07988,0.886,0.08166,0.8949,0.07579,0.8766,0.0878,0.8773,0.09366,0.8866,0.08753,0.8956,0.08167,0.8733,0.08998,0.8759,0.08826,0.8766,0.09412,0.874,0.09584,0.8843,0.08206,0.8844,0.08273,0.8932,0.07693,0.8938,0.08281,0.885,0.0886,0.897,0.07442,0.8977,0.0803,0.8558,0.1414,0.865,0.1354,0.8655,0.1406,0.8565,0.1465,0.8741,0.1294,0.8745,0.1347,0.8773,0.1273,0.8777,0.1326,0.8743,0.1293,0.8748,0.1345,0.9212,0.2555,0.8648,0.1355,0.8653,0.1407,0.8553,0.1417,0.856,0.1469,0.8524,0.1436,0.8531,0.1487,0.9616,0.07203,0.9614,0.07218,0.9621,0.07728,0.9622,0.07716,0.9623,0.07156,0.963,0.07669,0.9642,0.0703,0.9648,0.0755,0.9659,0.06921,0.9663,0.07448,0.966,0.06912,0.9665,0.0744,0.965,0.06979,0.9655,0.07505,0.9632,0.071,0.9637,0.07619,0.9641,0.07036,0.9626,0.07134,0.9631,0.07662,0.9646,0.07564,0.9601,0.07303,0.9606,0.07827,0.9578,0.07453,0.9584,0.0797,0.9568,0.07515,0.9575,0.08026,0.9583,0.07421,0.959,0.07932,0.9608,0.07255,0.9614,0.0777,0.9631,0.07102,0.9637,0.07623,0.9578,0.07453,0.9538,0.07716,0.9542,0.08242,0.9582,0.07982,0.9488,0.08042,0.9493,0.08562,0.946,0.08225,0.9466,0.0874,0.9461,0.08217,0.9468,0.08728,0.9499,0.07968,0.9506,0.08481,0.9547,0.07656,0.9553,0.08173,0.9577,0.07459,0.9582,0.07983,0.9444,0.08332,0.9364,0.08856,0.8978,0.2474,0.8855,0.2418,0.886,0.2391,0.8981,0.245,0.8729,0.2361,0.8601,0.2303,0.8608,0.2283,0.8734,0.2338,0.8678,0.2399,0.8732,0.2455,0.8624,0.2325,0.8665,0.2349,0.8823,0.2528,0.8859,0.2529,0.8966,0.2592,0.8982,0.2585,0.9109,0.2657,0.91,0.2638,0.9218,0.2707,0.9168,0.2669,0.9271,0.2731,0.9199,0.2683,0.9291,0.274,0.9206,0.2686,0.8607,0.2295,0.8606,0.2296,0.8609,0.2293,0.8616,0.2252,0.8614,0.2253,0.8613,0.2253,0.8633,0.2144,0.8631,0.2144,0.8655,0.2002,0.8653,0.2001,0.8653,0.2001,0.863,0.2144,0.9369,0.09379,0.9448,0.0886,0.9275,0.09438,0.9281,0.09955,0.9233,0.09714,0.924,0.1023,0.9247,0.0962,0.9254,0.1013,0.9328,0.09093,0.9334,0.09609,0.9417,0.08506,0.9422,0.09028,0.9459,0.08234,0.9463,0.08761,0.9217,0.09816,0.9138,0.1034,0.9143,0.1086,0.9222,0.1034,0.905,0.1091,0.9057,0.1143,0.9012,0.1116,0.9019,0.1167,0.9029,0.1105,0.9036,0.1156,0.9106,0.1055,0.9112,0.1107,0.919,0.09993,0.9195,0.1052,0.9231,0.09725,0.9236,0.1025,0.899,0.1131,0.8901,0.1189,0.8906,0.1241,0.8994,0.1184,0.8808,0.125,0.8538,0.2675,0.8814,0.1302,0.8775,0.1272,0.8782,0.1323,0.8801,0.1255,0.8807,0.1306,0.8885,0.12,0.889,0.1252,0.8972,0.1142,0.8977,0.1195,0.901,0.1117,0.9015,0.117,0.8724,0.1138,0.8633,0.1198,0.8541,0.1258,0.8726,0.1136,0.8756,0.1117,0.8535,0.1262,0.8631,0.1199,0.8507,0.128,0.9605,0.05602,0.9596,0.05665,0.9598,0.05649,0.9642,0.05358,0.9625,0.05471,0.9634,0.05417,0.9644,0.05348,0.9614,0.05542,0.9584,0.05741,0.961,0.0557,0.9625,0.05473,0.9551,0.05961,0.9561,0.05895,0.959,0.05701,0.9565,0.05868,0.9614,0.05543,0.9471,0.06482,0.9521,0.06153,0.9561,0.05889,0.9443,0.06663,0.9442,0.06669,0.9529,0.061,0.9481,0.06414,0.956,0.05898,0.9258,0.0788,0.9347,0.07295,0.9427,0.0677,0.923,0.08066,0.9215,0.08158,0.94,0.06948,0.931,0.07537,0.9442,0.06673,0.9033,0.09355,0.9121,0.08778,0.9201,0.08254,0.9012,0.09495,0.8995,0.09606,0.8668,0.2734,0.8695,0.2562,0.8565,0.2503,0.8795,0.2792,0.8823,0.262,0.8844,0.2483,0.8717,0.2426,0.8588,0.2367,0.8612,0.228,0.8732,0.2346,0.8725,0.2388,0.861,0.2289,0.8849,0.2408,0.8838,0.2475,0.8804,0.2515,0.8708,0.2419,0.8609,0.2296,0.8919,0.2848,0.8946,0.2676,0.9038,0.2902,0.9065,0.273,0.9087,0.2594,0.8968,0.254,0.8961,0.2462,0.8949,0.2538,0.907,0.2511,0.9058,0.2587,0.9,0.2623,0.891,0.2586,0.9152,0.2954,0.9179,0.2782,0.9264,0.3004,0.9291,0.2832,0.9312,0.2696,0.9201,0.2645,0.9176,0.2559,0.9164,0.2635,0.9281,0.2607,0.9269,0.2683,0.9189,0.2709,0.9106,0.2675,0.9375,0.3055,0.9402,0.2883,0.9473,0.3099,0.95,0.2928,0.9521,0.2791,0.9423,0.2746,0.939,0.2656,0.9377,0.2732,0.9174,0.08433,0.9485,0.27,0.9089,0.0899,0.9473,0.2775,0.9215,0.08163,0.9372,0.2791,0.879,0.1095,0.9302,0.2764,0.8884,0.1033,0.9547,0.3133,0.9574,0.2961,0.8973,0.09749,0.9599,0.3157,0.9626,0.2985,0.9647,0.2848,0.9595,0.2824,0.9554,0.2731,0.9541,0.2806,0.8783,0.1099,0.9601,0.2752,0.9588,0.2828,0.9475,0.2838,0.9452,0.2832,0.9635,0.3173,0.9662,0.3001,0.9657,0.3183,0.9684,0.3011,0.9704,0.2874,0.9682,0.2864,0.9633,0.2767,0.9621,0.2842,0.9654,0.2776,0.9641,0.2852,0.9522,0.286,0.9525,0.2865,0.9668,0.3188,0.9695,0.3016,0.9716,0.2879,0.9663,0.2781,0.9651,0.2856,0.9553,0.2877,0.8615,0.2278,0.8735,0.2332,0.8617,0.2279,0.8757,0.1116,0.8956,0.09862,0.8867,0.1044,0.8994,0.09611,0.8588,0.145,0.8563,0.1466,0.8654,0.1406,0.8655,0.1406,0.8585,0.1452,0.8654,0.1407,0.8723,0.1362,0.8746,0.1346,0.8722,0.1362,0.9628,0.0768,0.9639,0.0761,0.9643,0.07584,0.9627,0.07687,0.9651,0.07527,0.9658,0.07481,0.9658,0.07486,0.9646,0.07558,0.9633,0.07644,0.9636,0.07627,0.963,0.07668,0.961,0.07797,0.9625,0.077,0.9614,0.07775,0.9595,0.07893,0.9585,0.07964,0.9591,0.07925,0.9607,0.0782,0.9566,0.08085,0.9567,0.08081,0.9524,0.08361,0.9537,0.08276,0.9546,0.0822,0.9511,0.08447,0.9483,0.08632,0.9481,0.08642,0.9502,0.08508,0.9423,0.09027,0.9434,0.08949,0.9351,0.09494,0.9364,0.0941,0.9404,0.0915,0.9339,0.09577,0.928,0.09963,0.9268,0.1004,0.9299,0.09835,0.9197,0.1051,0.9208,0.1043,0.9127,0.1096,0.9139,0.1089,0.9178,0.1063,0.9116,0.1104,0.906,0.1141,0.9047,0.1149,0.9076,0.113,0.8968,0.1201,0.8985,0.119,0.8898,0.1247,0.8904,0.1243,0.8957,0.1208,0.8892,0.125,0.8831,0.1291,0.8737,0.2331,0.8855,0.2385,0.8812,0.1303,0.8837,0.1287,0.8485,0.1053,0.8517,0.1042,0.8609,0.09813,0.8608,0.09748,0.8523,0.11,0.8615,0.104,0.8707,0.098,0.87,0.09212,0.8729,0.08952,0.8733,0.08999,0.8733,0.08954,0.8739,0.09587,0.8709,0.09783,0.8703,0.09196,0.8734,0.08866,0.8607,0.09825,0.8605,0.09651,0.8613,0.1041,0.8518,0.1104,0.8512,0.1045,0.8476,0.1047,0.8483,0.1064,0.8482,0.1055,0.8489,0.1122,0.9565,0.03469,0.9573,0.03487,0.9571,0.03505,0.9569,0.03447,0.958,0.04071,0.9578,0.04088,0.9588,0.04024,0.9581,0.0344,0.9601,0.03303,0.9608,0.0389,0.9626,0.03775,0.962,0.03185,0.9621,0.03172,0.9621,0.02986,0.9627,0.03763,0.9617,0.03833,0.9611,0.03243,0.961,0.03123,0.9591,0.03374,0.959,0.03329,0.9597,0.03961,0.9602,0.03299,0.9588,0.03395,0.9587,0.03209,0.9608,0.03889,0.9593,0.03985,0.9567,0.04158,0.9561,0.03568,0.9553,0.03494,0.9537,0.03728,0.9536,0.03683,0.9543,0.04315,0.9533,0.04383,0.9526,0.03799,0.9511,0.03821,0.954,0.03708,0.9538,0.03649,0.9547,0.04291,0.9572,0.04122,0.9566,0.03538,0.9591,0.03374,0.9597,0.03962,0.9539,0.03715,0.9498,0.0398,0.9498,0.03795,0.9545,0.04305,0.9504,0.04569,0.9454,0.049,0.9448,0.04312,0.9428,0.04312,0.9418,0.04503,0.9418,0.04459,0.9425,0.05089,0.9426,0.05085,0.9419,0.04501,0.9394,0.04587,0.9457,0.04253,0.9455,0.04192,0.8853,0.2386,0.9464,0.04837,0.9512,0.04521,0.9505,0.03936,0.9537,0.03729,0.9543,0.04317,0.9404,0.04599,0.9324,0.05124,0.9323,0.04942,0.941,0.05188,0.933,0.05713,0.9241,0.06299,0.9234,0.05711,0.9208,0.05759,0.9191,0.05992,0.9191,0.05948,0.9198,0.06578,0.9212,0.06486,0.9205,0.05901,0.9174,0.06032,0.9286,0.05372,0.9285,0.05309,0.9293,0.05958,0.9383,0.05368,0.9376,0.04782,0.9418,0.04505,0.9425,0.05092,0.9178,0.06084,0.9097,0.06609,0.8966,0.2437,0.8966,0.2436,0.9077,0.2486,0.9074,0.2486,0.918,0.2534,0.9181,0.2533,0.9288,0.2582,0.9286,0.2582,0.9395,0.2632,0.9396,0.2631,0.9503,0.268,0.9491,0.2676,0.956,0.2707,0.9562,0.2706,0.9617,0.2731,0.9607,0.2728,0.964,0.2743,0.9643,0.2743,0.9669,0.2755,0.966,0.2752,0.967,0.2757,0.9673,0.2757,0.9723,0.2813,0.9724,0.2788,0.9713,0.2778,0.9712,0.2808,0.969,0.2798,0.9691,0.2773,0.9658,0.2753,0.9655,0.2782,0.9603,0.2758,0.9604,0.2733,0.9536,0.2698,0.953,0.2725,0.9431,0.268,0.9433,0.2656,0.9321,0.2601,0.9321,0.263,0.921,0.258,0.9212,0.2555,0.91,0.25,0.9096,0.2528,0.8978,0.2474,0.8981,0.245,0.886,0.2391,0.8855,0.2418,0.8729,0.2361,0.8734,0.2338,0.9096,0.06429,0.8608,0.2283,0.8601,0.2303,0.9184,0.06672,0.8732,0.2455,0.8678,0.2399,0.9104,0.07197,0.8624,0.2325,0.8859,0.2529,0.9015,0.07775,0.8823,0.2528,0.8982,0.2585,0.9009,0.07189,0.8966,0.2592,0.91,0.2638,0.9109,0.2657,0.898,0.07251,0.9168,0.2669,0.9218,0.2707,0.9199,0.2683,0.9271,0.2731,0.9291,0.274,0.8607,0.2295,0.8614,0.2253,0.8616,0.2252,0.8609,0.2293,0.8631,0.2144,0.8633,0.2144,0.8653,0.2001,0.8655,0.2002,0.8971,0.0744,0.897,0.07396,0.8977,0.08026,0.8994,0.07915,0.8988,0.07329,0.8957,0.07454,0.9065,0.06824,0.9064,0.06758,0.9071,0.0741,0.9156,0.06852,0.915,0.06265,0.9191,0.05993,0.9198,0.06581,0.8949,0.07579,0.886,0.08166,0.8858,0.07988,0.8956,0.08167,0.8866,0.08753,0.8773,0.09366,0.8766,0.0878,0.8733,0.08998,0.874,0.09584,0.8766,0.09412,0.8759,0.08826,0.8844,0.08273,0.8843,0.08206,0.885,0.0886,0.8938,0.08281,0.8932,0.07693,0.897,0.07442,0.8977,0.0803,0.8558,0.1414,0.8565,0.1465,0.8655,0.1406,0.865,0.1354,0.8745,0.1347,0.8741,0.1294,0.8777,0.1326,0.8773,0.1273,0.8748,0.1345,0.8743,0.1293,0.8653,0.1407,0.8648,0.1355,0.856,0.1469,0.8553,0.1417,0.8531,0.1487,0.8524,0.1436,0.9616,0.07203,0.9622,0.07716,0.9621,0.07728,0.9614,0.07218,0.963,0.07669,0.9623,0.07156,0.9648,0.0755,0.9642,0.0703,0.9663,0.07448,0.9659,0.06921,0.9665,0.0744,0.966,0.06912,0.9655,0.07505,0.965,0.06979,0.9637,0.07619,0.9632,0.071,0.9641,0.07036,0.9646,0.07564,0.9631,0.07662,0.9626,0.07134,0.9606,0.07827,0.9601,0.07303,0.9584,0.0797,0.9578,0.07453,0.9575,0.08026,0.9568,0.07515,0.959,0.07932,0.9583,0.07421,0.9614,0.0777,0.9608,0.07255,0.9637,0.07623,0.9631,0.07102,0.9578,0.07453,0.9582,0.07982,0.9542,0.08242,0.9538,0.07716,0.9493,0.08562,0.9488,0.08042,0.9466,0.0874,0.946,0.08225,0.9468,0.08728,0.9461,0.08217,0.9506,0.08481,0.9499,0.07968,0.9553,0.08173,0.9547,0.07656,0.9582,0.07983,0.9577,0.07459,0.9444,0.08332,0.9448,0.0886,0.9369,0.09379,0.9364,0.08856,0.9281,0.09955,0.9275,0.09438,0.924,0.1023,0.9233,0.09714,0.9254,0.1013,0.9247,0.0962,0.9334,0.09609,0.9328,0.09093,0.9422,0.09028,0.9417,0.08506,0.9463,0.08761,0.9459,0.08234,0.9217,0.09816,0.9222,0.1034,0.9143,0.1086,0.9138,0.1034,0.9057,0.1143,0.905,0.1091,0.9019,0.1167,0.9012,0.1116,0.9036,0.1156,0.9029,0.1105,0.9112,0.1107,0.9106,0.1055,0.9195,0.1052,0.919,0.09993,0.9236,0.1025,0.9231,0.09725,0.899,0.1131,0.8994,0.1184,0.8906,0.1241,0.8901,0.1189,0.8814,0.1302,0.8808,0.125,0.8782,0.1323,0.8775,0.1272,0.8807,0.1306,0.8801,0.1255,0.889,0.1252,0.8885,0.12,0.8977,0.1195,0.8972,0.1142,0.9015,0.117,0.901,0.1117,0.8633,0.1198,0.8724,0.1138,0.8541,0.1258,0.8756,0.1117,0.8726,0.1136,0.8631,0.1199,0.8535,0.1262,0.8507,0.128,0.9596,0.05665,0.9605,0.05602,0.9598,0.05649,0.9625,0.05471,0.9642,0.05358,0.9644,0.05348,0.9634,0.05417,0.9614,0.05542,0.961,0.0557,0.9584,0.05741,0.9625,0.05473,0.9561,0.05895,0.9551,0.05961,0.9565,0.05868,0.959,0.05701,0.9614,0.05543,0.9521,0.06153,0.9471,0.06482,0.9561,0.05889,0.9442,0.06669,0.9443,0.06663,0.9481,0.06414,0.9529,0.061,0.956,0.05898,0.9347,0.07295,0.9258,0.0788,0.9427,0.0677,0.9215,0.08158,0.923,0.08066,0.931,0.07537,0.94,0.06948,0.9442,0.06673,0.9121,0.08778,0.9033,0.09356,0.9201,0.08254,0.8995,0.09606,0.9012,0.09495,0.9089,0.0899,0.9174,0.08433,0.9215,0.08163,0.8884,0.1033,0.879,0.1095,0.8973,0.09749,0.8757,0.1116,0.8783,0.1099,0.8867,0.1044,0.8956,0.09862,0.8994,0.09611}, 2198);
IndexedFaceSet100.setTexCoord(&TextureCoordinate101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setDEF(CString("Lower_teeth_COORD_JinBlink"));
Coordinate102.setPoint(new float[]{2.49,-0.346,-1.665,2.488,0.1468,-1.593,1.904,0.2897,-1.545,2.499,-0.444,-0.9669,2.786,0.06917,-0.9244,2.157,0.2012,-0.9269,2.398,-0.5365,-0.3089,2.674,-0.03385,-0.1909,2.131,0.1021,-0.2568,2.124,-0.6222,0.3018,2.368,-0.1295,0.4901,2.006,0.01241,0.3815,1.712,-0.7021,0.7777,1.909,-0.2185,1.124,1.713,-0.0744,0.9995,1.197,-0.75,1.101,1.335,-0.2719,1.504,1.253,-0.1234,1.348,0.6088,-0.7719,1.344,0.679,-0.2963,1.678,0.6546,-0.1459,1.508,0.0,-0.3025,1.722,0.0,-0.151,1.545,1.901,0.2634,-1.551,1.93,0.0002013,-1.034,1.906,-0.1155,-0.4374,1.794,-0.1957,0.1341,1.533,-0.2733,0.6859,1.121,-0.3171,0.9981,0.5859,-0.3372,1.141,0.0,-0.3419,1.174,2.405,0.2839,-1.554,1.988,0.293,-1.533,2.213,0.2428,-0.9146,2.185,0.1482,-0.2411,2.054,0.05845,0.3977,1.749,-0.03285,1.048,1.275,-0.08119,1.392,0.6617,-0.1034,1.55,0.6764,-0.1281,1.683,1.33,-0.1046,1.516,1.895,-0.05298,1.148,2.345,0.03838,0.4979,2.642,0.1326,-0.1729,2.743,0.2346,-0.899,0.0,0.2369,-1.479,2.23,0.7878,-1.476,2.257,0.7123,-0.9376,2.702,0.7112,-0.9303,2.682,0.79,-1.491,0.5807,0.3499,1.642,0.08538,0.3469,1.663,0.08698,0.3321,1.769,0.5887,0.3357,1.743,0.7603,0.3393,1.717,1.244,0.3562,1.597,1.21,0.3696,1.502,0.7458,0.3532,1.619,1.402,0.3657,1.53,1.811,0.4028,1.265,1.714,0.4139,1.186,1.351,0.3785,1.438,1.943,0.4212,1.134,2.266,0.491,0.6374,2.054,0.5025,0.5555,1.813,0.4322,1.056,2.365,0.5149,0.4677,2.572,0.5841,-0.02519,2.216,0.5928,-0.08726,2.106,0.526,0.3881,2.626,0.6092,-0.204,2.692,0.6845,-0.7402,2.26,0.6874,-0.7606,2.233,0.6163,-0.2546,1.901,0.7339,-1.485,2.295,0.8405,-1.396,2.314,0.7849,-1.0,2.638,0.7846,-0.9984,2.623,0.8416,-1.404,0.5147,0.4098,1.67,0.153,0.4075,1.686,0.1549,0.3975,1.757,0.5193,0.4001,1.739,0.8237,0.4065,1.694,1.172,0.4186,1.607,1.152,0.4277,1.542,0.8114,0.4157,1.627,1.449,0.4354,1.488,1.739,0.4621,1.298,1.679,0.4699,1.242,1.409,0.4439,1.427,1.968,0.4948,1.064,2.192,0.5458,0.7013,2.053,0.5539,0.6439,1.864,0.5026,1.009,2.357,0.5884,0.3984,2.494,0.6385,0.0419,2.251,0.6451,-0.005292,2.157,0.5961,0.3436,2.581,0.683,-0.275,2.623,0.7373,-0.6614,2.316,0.74,-0.6806,2.291,0.6875,-0.3073,2.228,0.4099,-1.53,2.256,0.334,-0.9894,2.704,0.3329,-0.9821,2.683,0.4121,-1.546,0.582,-0.02776,1.586,0.08377,-0.03077,1.607,0.08547,-0.04648,1.719,0.5905,-0.04281,1.693,0.7592,-0.03927,1.668,1.246,-0.02229,1.547,1.21,-0.00807,1.445,0.7438,-0.02453,1.563,1.402,-0.01297,1.48,1.815,0.02459,1.213,1.713,0.03626,1.13,1.348,0.0006513,1.383,1.945,0.04273,1.084,2.27,0.1129,0.5843,2.052,0.1247,0.5001,1.81,0.05413,1.003,2.367,0.1364,0.4167,2.575,0.2061,-0.07931,2.214,0.215,-0.1423,2.104,0.1478,0.3357,2.628,0.2309,-0.2555,2.694,0.3066,-0.7946,2.258,0.3095,-0.8152,2.231,0.238,-0.3065,1.901,0.3337,-1.541,-2.49,-0.346,-1.665,-2.488,0.1468,-1.593,-2.786,0.06917,-0.9244,-2.499,-0.444,-0.9669,-1.904,0.2897,-1.545,-1.901,0.2634,-1.551,-1.93,0.0002014,-1.034,-2.157,0.2012,-0.9269,-2.674,-0.03385,-0.1909,-2.398,-0.5365,-0.3089,-1.906,-0.1155,-0.4374,-2.131,0.1021,-0.2568,-2.368,-0.1295,0.4901,-2.124,-0.6222,0.3018,-1.794,-0.1957,0.1341,-2.006,0.01241,0.3815,-1.909,-0.2185,1.124,-1.712,-0.7021,0.7777,-1.533,-0.2733,0.6859,-1.713,-0.0744,0.9995,-1.335,-0.2719,1.504,-1.197,-0.75,1.101,-1.121,-0.3171,0.9981,-1.253,-0.1234,1.348,-0.679,-0.2963,1.678,-0.6088,-0.7719,1.344,-0.5859,-0.3372,1.141,-0.6546,-0.1459,1.508,0.0,-0.7775,1.407,-2.213,0.2428,-0.9146,-1.988,0.293,-1.533,-2.185,0.1482,-0.2411,-2.054,0.05845,0.3977,-1.749,-0.03285,1.048,-1.275,-0.08119,1.392,-0.6617,-0.1034,1.55,0.0,-0.1079,1.582,-0.6764,-0.1281,1.683,0.0,-0.1336,1.722,-1.33,-0.1046,1.516,-1.895,-0.05298,1.148,-2.345,0.03838,0.4979,-2.642,0.1326,-0.1729,-2.743,0.2346,-0.899,-2.405,0.2839,-1.554,-2.295,0.8405,-1.396,-2.314,0.7849,-1.0,-2.638,0.7846,-0.9984,-2.623,0.8416,-1.404,-0.5147,0.4098,1.67,-0.153,0.4075,1.686,-0.1549,0.3975,1.757,-0.5193,0.4001,1.739,-0.8237,0.4065,1.694,-1.172,0.4186,1.607,-1.152,0.4277,1.542,-0.8114,0.4157,1.627,-1.449,0.4354,1.488,-1.739,0.4621,1.298,-1.679,0.4699,1.242,-1.409,0.4439,1.427,-1.968,0.4948,1.064,-2.192,0.5458,0.7013,-2.053,0.5539,0.6439,-1.864,0.5026,1.009,-2.357,0.5884,0.3984,-2.494,0.6385,0.0419,-2.251,0.6451,-0.005292,-2.157,0.5961,0.3436,-2.581,0.683,-0.275,-2.623,0.7373,-0.6614,-2.316,0.74,-0.6806,-2.291,0.6875,-0.3073,-2.256,0.334,-0.9894,-2.228,0.4099,-1.53,-2.704,0.3329,-0.9821,-2.683,0.4121,-1.546,-0.08377,-0.03077,1.607,-0.582,-0.02776,1.586,-0.08547,-0.04648,1.719,-0.5905,-0.04281,1.693,-1.246,-0.02229,1.547,-0.7592,-0.03927,1.668,-1.21,-0.00807,1.445,-0.7438,-0.02453,1.563,-1.815,0.02459,1.213,-1.402,-0.01297,1.48,-1.713,0.03626,1.13,-1.348,0.0006513,1.383,-2.27,0.1129,0.5843,-1.945,0.04273,1.084,-2.052,0.1247,0.5001,-1.81,0.05413,1.003,-2.575,0.2061,-0.07931,-2.367,0.1364,0.4167,-2.214,0.215,-0.1423,-2.104,0.1478,0.3357,-2.694,0.3066,-0.7946,-2.628,0.2309,-0.2555,-2.258,0.3095,-0.8152,-2.231,0.238,-0.3065,-1.901,0.3337,-1.541,0.0,0.3834,-1.651,-2.23,0.7878,-1.476,-2.257,0.7123,-0.9376,-2.702,0.7112,-0.9303,-2.682,0.79,-1.491,-0.5807,0.3499,1.642,-0.08538,0.3469,1.663,-0.08698,0.3321,1.769,-0.5887,0.3357,1.743,-0.7603,0.3393,1.717,-1.244,0.3562,1.597,-1.21,0.3696,1.502,-0.7458,0.3532,1.619,-1.402,0.3657,1.53,-1.811,0.4028,1.265,-1.714,0.4139,1.186,-1.351,0.3785,1.438,-1.943,0.4212,1.134,-2.266,0.491,0.6374,-2.054,0.5025,0.5555,-1.813,0.4322,1.056,-2.365,0.5149,0.4677,-2.572,0.5841,-0.02519,-2.216,0.5928,-0.08726,-2.106,0.526,0.3881,-2.626,0.6092,-0.204,-2.692,0.6845,-0.7402,-2.26,0.6874,-0.7606,-2.233,0.6163,-0.2546,-1.901,0.7339,-1.485,0.0,0.7348,-1.492,2.792,-0.12,-1.345,2.142,0.1908,-1.295,2.754,-0.2268,-0.5846,2.151,0.01335,-0.6048,2.546,-0.3259,0.1205,2.083,-0.07765,0.04301,2.157,-0.4204,0.7935,1.879,-0.1684,0.689,1.636,-0.4934,1.191,1.501,-0.238,1.185,1.014,-0.5308,1.507,0.9654,-0.2718,1.425,0.3407,-0.5451,1.681,0.3302,-0.2846,1.516,2.154,0.2911,-1.276,2.162,0.1932,-0.579,2.094,0.102,0.07051,1.889,0.01079,0.7195,1.508,-0.05933,1.219,0.9686,-0.09341,1.461,0.3311,-0.1062,1.552,0.3399,-0.1836,1.72,1.011,-0.1695,1.62,1.63,-0.1323,1.355,2.148,-0.05961,0.8372,2.536,0.03458,0.1667,2.743,0.1333,-0.5359,2.781,0.2391,-1.289,1.428,0.1563,-1.429,1.434,-0.01467,-0.9757,1.388,-0.07533,-0.5439,1.253,-0.1358,-0.1132,1.001,-0.1822,0.2172,0.6436,-0.2048,0.3777,0.2202,-0.2133,0.4382,2.468,0.8129,-1.2,0.3355,0.4037,1.713,0.9899,0.4171,1.618,1.569,0.4528,1.364,2.019,0.5243,0.8547,2.315,0.617,0.1947,2.453,0.7119,-0.4811,2.166,0.3011,-1.269,2.484,0.2498,-0.9033,2.769,0.3019,-1.274,2.452,0.3533,-1.64,0.332,-0.09714,1.566,0.0005066,-0.1099,1.657,0.3389,-0.1181,1.716,0.6704,-0.1054,1.625,1.007,-0.1041,1.616,1.308,-0.08306,1.466,0.9723,-0.08433,1.475,0.6714,-0.1054,1.625,1.622,-0.06717,1.353,1.829,-0.03411,1.118,1.516,-0.04993,1.23,1.309,-0.08299,1.466,2.138,0.005099,0.8386,2.208,0.05989,0.4486,1.9,0.02077,0.727,1.83,-0.03402,1.117,2.524,0.09887,0.171,2.422,0.1513,-0.2023,2.106,0.1124,0.07454,2.209,0.05998,0.4479,2.731,0.1972,-0.5289,2.484,0.2497,-0.9026,2.174,0.2039,-0.5768,2.422,0.1514,-0.2032,1.061,0.3095,-1.659,2.173,0.8125,-1.197,2.483,0.762,-0.8372,2.763,0.8133,-1.203,2.452,0.8638,-1.563,0.3324,0.4128,1.648,0.006795,0.4015,1.729,0.3385,0.3946,1.778,0.6641,0.4059,1.697,1.005,0.4086,1.678,1.302,0.4281,1.54,0.9747,0.4257,1.557,0.6778,0.4062,1.695,1.616,0.4453,1.417,1.823,0.4767,1.194,1.522,0.4603,1.31,1.315,0.4289,1.534,2.13,0.517,0.9063,2.205,0.5706,0.5253,1.908,0.5315,0.8031,1.833,0.478,1.184,2.516,0.6105,0.241,2.419,0.6619,-0.1246,2.114,0.6235,0.1483,2.211,0.5722,0.5139,2.724,0.7087,-0.4577,2.483,0.7602,-0.8248,2.181,0.7152,-0.5044,2.422,0.6636,-0.1373,2.167,0.5622,-1.232,2.484,0.511,-0.8673,2.768,0.563,-1.238,2.452,0.6143,-1.603,0.3321,0.1635,1.607,0.00152,0.1512,1.694,0.3388,0.1434,1.749,0.6694,0.1557,1.662,1.007,0.1575,1.649,1.307,0.178,1.503,0.9732,0.1763,1.515,0.6725,0.1557,1.662,1.62,0.1943,1.387,1.828,0.2269,1.155,1.518,0.2108,1.27,1.311,0.1782,1.502,2.135,0.2664,0.8739,2.208,0.3209,0.4857,1.903,0.2817,0.7651,1.83,0.2271,1.153,2.522,0.36,0.2072,2.421,0.4123,-0.1648,2.108,0.3734,0.1118,2.209,0.3212,0.4837,2.729,0.4583,-0.4924,2.484,0.5107,-0.8651,2.176,0.465,-0.54,2.422,0.4127,-0.1673,1.061,0.5794,-1.621,-2.792,-0.12,-1.345,-2.142,0.1908,-1.295,-2.754,-0.2268,-0.5846,-2.151,0.01335,-0.6048,-2.546,-0.3259,0.1205,-2.083,-0.07765,0.04301,-2.157,-0.4204,0.7935,-1.879,-0.1684,0.689,-1.636,-0.4934,1.191,-1.501,-0.238,1.185,-1.014,-0.5308,1.507,-0.9654,-0.2718,1.425,-0.3407,-0.5451,1.681,-0.3302,-0.2846,1.516,-2.154,0.2911,-1.276,-2.162,0.1932,-0.579,-2.094,0.102,0.07051,-1.889,0.01079,0.7195,-1.508,-0.05933,1.219,-0.9686,-0.09341,1.461,-0.3311,-0.1062,1.552,-0.3399,-0.1836,1.72,-1.011,-0.1695,1.62,-1.63,-0.1323,1.355,-2.148,-0.05961,0.8372,-2.536,0.03458,0.1667,-2.743,0.1333,-0.5359,-2.781,0.2391,-1.289,-1.428,0.1563,-1.429,-1.434,-0.01467,-0.9757,-1.388,-0.07533,-0.5439,-1.253,-0.1358,-0.1132,-1.001,-0.1822,0.2172,-0.6436,-0.2048,0.3777,-0.2202,-0.2133,0.4382,-2.468,0.8129,-1.2,-0.3355,0.4037,1.713,-0.9899,0.4171,1.618,-1.569,0.4528,1.364,-2.019,0.5243,0.8547,-2.315,0.617,0.1947,-2.453,0.7119,-0.4811,-2.166,0.3011,-1.269,-2.484,0.2498,-0.9033,-2.769,0.3019,-1.274,-2.452,0.3533,-1.64,-0.332,-0.09714,1.566,-0.0005066,-0.1099,1.657,-0.3389,-0.1181,1.716,-0.6704,-0.1054,1.625,-1.007,-0.1041,1.616,-1.308,-0.08306,1.466,-0.9723,-0.08433,1.475,-0.6714,-0.1054,1.625,-1.622,-0.06717,1.353,-1.829,-0.03411,1.118,-1.516,-0.04993,1.23,-1.309,-0.08299,1.466,-2.138,0.005099,0.8386,-2.208,0.05989,0.4486,-1.9,0.02077,0.727,-1.83,-0.03402,1.117,-2.524,0.09887,0.171,-2.422,0.1513,-0.2023,-2.106,0.1124,0.07454,-2.209,0.05998,0.4479,-2.731,0.1972,-0.5289,-2.484,0.2497,-0.9026,-2.174,0.2039,-0.5768,-2.422,0.1514,-0.2032,-1.061,0.3095,-1.659,-2.173,0.8125,-1.197,-2.483,0.762,-0.8372,-2.763,0.8133,-1.203,-2.452,0.8638,-1.563,-0.3324,0.4128,1.648,-0.006795,0.4015,1.729,-0.3385,0.3946,1.778,-0.6641,0.4059,1.697,-1.005,0.4086,1.678,-1.302,0.4281,1.54,-0.9747,0.4257,1.557,-0.6778,0.4062,1.695,-1.616,0.4453,1.417,-1.823,0.4767,1.194,-1.522,0.4603,1.31,-1.315,0.4289,1.534,-2.13,0.517,0.9063,-2.205,0.5706,0.5253,-1.908,0.5315,0.8031,-1.833,0.478,1.184,-2.516,0.6105,0.241,-2.419,0.6619,-0.1246,-2.114,0.6235,0.1483,-2.211,0.5722,0.5139,-2.724,0.7087,-0.4577,-2.483,0.7602,-0.8248,-2.181,0.7152,-0.5044,-2.422,0.6636,-0.1373,-2.167,0.5622,-1.232,-2.484,0.511,-0.8673,-2.768,0.563,-1.238,-2.452,0.6143,-1.603,-0.3321,0.1635,1.607,-0.00152,0.1512,1.694,-0.3388,0.1434,1.749,-0.6694,0.1557,1.662,-1.007,0.1575,1.649,-1.307,0.178,1.503,-0.9732,0.1763,1.515,-0.6725,0.1557,1.662,-1.62,0.1943,1.387,-1.828,0.2269,1.155,-1.518,0.2108,1.27,-1.311,0.1782,1.502,-2.135,0.2664,0.8739,-2.208,0.3209,0.4857,-1.903,0.2817,0.7651,-1.83,0.2271,1.153,-2.522,0.36,0.2072,-2.421,0.4123,-0.1648,-2.108,0.3734,0.1118,-2.209,0.3212,0.4837,-2.729,0.4583,-0.4924,-2.484,0.5107,-0.8651,-2.176,0.465,-0.54,-2.422,0.4127,-0.1673,-1.061,0.5794,-1.621,2.49,-0.07094,-1.626,1.901,0.2752,-1.55,2.789,-0.1743,-0.9587,2.502,-0.3954,-1.313,2.79,0.1233,-1.309,2.145,0.2664,-1.283,2.677,-0.2774,-0.2243,2.468,-0.4911,-0.6317,2.751,0.01671,-0.5509,2.154,0.1483,-0.5857,2.371,-0.3732,0.4573,2.281,-0.5799,0.00001332,2.544,-0.08225,0.1536,2.085,0.05721,0.06252,1.911,-0.4622,0.9992,1.933,-0.6646,0.603,2.155,-0.1767,0.826,1.881,-0.03364,0.7093,1.336,-0.5157,1.362,1.466,-0.73,0.946,1.634,-0.2497,1.345,1.503,-0.1034,1.206,0.6794,-0.5402,1.623,0.9086,-0.7635,1.235,1.013,-0.287,1.611,0.9662,-0.1373,1.447,0.0,-0.5464,1.691,0.3053,-0.7763,1.398,0.3405,-0.3012,1.712,0.3304,-0.15,1.538,2.154,0.08114,-0.9441,2.128,-0.03282,-0.2761,2.003,-0.1224,0.3617,1.711,-0.2091,0.9787,1.252,-0.258,1.327,0.6541,-0.2804,1.486,0.0,-0.2855,1.523,1.963,0.1317,-1.336,1.972,-0.08361,-0.7101,1.909,-0.167,-0.1163,1.722,-0.2502,0.4758,1.376,-0.314,0.9301,0.8849,-0.345,1.151,0.3027,-0.3567,1.234,2.162,0.2932,-1.271,2.171,0.1958,-0.5782,2.102,0.1044,0.07263,1.897,0.01291,0.7241,1.514,-0.05759,1.226,0.9712,-0.0919,1.47,0.3317,-0.1047,1.561,0.3392,-0.14,1.717,1.009,-0.126,1.617,1.625,-0.08896,1.353,2.141,-0.01654,0.8378,2.528,0.07737,0.1693,2.734,0.1758,-0.5314,2.773,0.2808,-1.279,2.481,0.25,-1.57,1.912,0.2936,-1.537,2.166,0.2411,-0.9202,2.14,0.1469,-0.2495,2.014,0.05701,0.3904,1.72,-0.03018,1.011,1.257,-0.07947,1.362,0.656,-0.102,1.523,0.0,-0.1072,1.559,0.6776,-0.1788,1.686,1.331,-0.1545,1.512,1.903,-0.1013,1.134,2.361,-0.01256,0.5023,2.666,0.08285,-0.1769,2.778,0.1855,-0.9075,1.153,0.2636,-1.602,1.256,0.07775,-1.259,1.241,-0.003568,-0.8708,1.167,-0.05593,-0.498,0.9965,-0.106,-0.1419,0.7287,-0.1347,0.06276,0.3811,-0.1479,0.1564,0.0,-0.151,0.1785,2.197,0.294,-1.54,2.484,0.2443,-0.9037,0.6709,-0.1108,1.624,1.309,-0.08845,1.465,1.83,-0.03947,1.117,2.209,0.05452,0.4475,2.422,0.146,-0.2035,2.227,0.3392,-1.54,2.255,0.2632,-0.9991,2.704,0.2622,-0.9918,2.684,0.3414,-1.556,2.169,0.75,-1.206,2.484,0.6989,-0.8424,2.766,0.7507,-1.211,2.452,0.8018,-1.575,0.5823,-0.09826,1.574,0.08337,-0.1013,1.596,0.08511,-0.1174,1.71,0.591,-0.1137,1.684,0.3323,0.3508,1.635,0.003092,0.3389,1.72,0.3387,0.3315,1.773,0.6678,0.3434,1.688,0.7589,-0.1101,1.659,1.247,-0.09314,1.538,1.21,-0.07857,1.434,0.7432,-0.09504,1.552,1.006,0.3455,1.673,1.306,0.3656,1.53,0.9738,0.3637,1.544,0.6741,0.3435,1.688,1.402,-0.08385,1.472,1.816,-0.04618,1.204,1.712,-0.03426,1.119,1.347,-0.06991,1.373,1.618,0.3823,1.412,1.826,0.4144,1.183,1.52,0.3982,1.298,1.312,0.366,1.527,1.946,-0.02806,1.075,2.271,0.04218,0.5746,2.051,0.05412,0.4896,1.809,-0.0165,0.9923,2.133,0.4542,0.8992,2.207,0.5084,0.5133,1.905,0.4692,0.7925,1.831,0.415,1.178,2.368,0.06568,0.4073,2.576,0.1355,-0.08942,2.214,0.1443,-0.1527,2.103,0.07712,0.3259,2.52,0.5478,0.2331,2.421,0.5998,-0.1369,2.11,0.5611,0.1386,2.209,0.5091,0.5086,2.628,0.1601,-0.265,2.695,0.236,-0.8048,2.257,0.2389,-0.8255,2.231,0.1673,-0.3162,2.728,0.646,-0.4662,2.483,0.6982,-0.8372,2.178,0.6527,-0.5135,2.422,0.6006,-0.1425,0.9505,0.7345,-1.49,1.901,0.2678,-1.551,2.249,0.8126,-1.198,2.479,0.775,-0.9302,2.687,0.8132,-1.202,2.456,0.8508,-1.47,2.233,0.85,-1.464,2.26,0.7752,-0.9315,2.699,0.7742,-0.9243,2.679,0.8522,-1.48,0.3333,0.4102,1.667,0.09134,0.4021,1.725,0.3376,0.3972,1.759,0.5796,0.4054,1.701,0.5782,0.412,1.654,0.08821,0.4091,1.675,0.08971,0.3951,1.774,0.5857,0.3987,1.749,1.001,0.4111,1.661,1.222,0.4253,1.56,0.9791,0.4232,1.574,0.7581,0.409,1.675,0.7626,0.4024,1.722,1.24,0.4191,1.604,1.208,0.4316,1.514,0.749,0.4154,1.63,1.602,0.4474,1.402,1.757,0.4705,1.238,1.536,0.4582,1.325,1.381,0.4351,1.49,1.402,0.4288,1.534,1.806,0.4655,1.274,1.713,0.476,1.199,1.355,0.4409,1.448,2.1,0.519,0.8923,2.158,0.5587,0.6097,1.938,0.5296,0.8171,1.881,0.4899,1.1,1.942,0.4843,1.139,2.262,0.5534,0.6474,2.056,0.5646,0.5678,1.816,0.4949,1.064,2.464,0.6122,0.2289,2.393,0.6503,-0.04252,2.166,0.6218,0.1605,2.237,0.5837,0.4319,2.364,0.5779,0.4731,2.568,0.6464,-0.01431,2.218,0.6549,-0.07527,2.11,0.5889,0.3951,2.654,0.7095,-0.4638,2.475,0.7478,-0.7365,2.252,0.7144,-0.4984,2.43,0.676,-0.2256,2.624,0.6722,-0.1983,2.689,0.7467,-0.7288,2.262,0.7496,-0.7489,2.236,0.6792,-0.2482,2.228,0.6003,-1.503,2.256,0.5244,-0.9629,2.703,0.5234,-0.9556,2.683,0.6025,-1.519,0.5817,0.1625,1.614,0.08417,0.1595,1.635,0.08583,0.1441,1.744,0.5901,0.1478,1.718,0.7594,0.1513,1.693,1.246,0.1683,1.572,1.21,0.1822,1.474,0.7444,0.1657,1.591,1.401,0.1776,1.506,1.813,0.2151,1.239,1.713,0.2265,1.158,1.349,0.1909,1.411,1.944,0.2332,1.11,2.268,0.3033,0.6108,2.053,0.315,0.5275,1.811,0.2445,1.03,2.366,0.3269,0.4429,2.574,0.3965,-0.05237,2.215,0.4053,-0.115,2.104,0.3382,0.3624,2.627,0.4213,-0.2291,2.693,0.497,-0.7676,2.258,0.4999,-0.7881,2.232,0.4285,-0.28,1.901,0.507,-1.517,2.167,0.3718,-1.259,2.484,0.3205,-0.8937,2.769,0.3726,-1.265,2.452,0.4239,-1.63,0.332,-0.0267,1.578,0.001013,-0.03918,1.667,0.3389,-0.04721,1.724,0.6699,-0.03473,1.635,1.007,-0.03319,1.624,1.308,-0.01239,1.476,0.9727,-0.01389,1.487,0.672,-0.03468,1.635,1.621,0.003701,1.362,1.829,0.03652,1.128,1.517,0.02057,1.242,1.31,-0.01226,1.475,2.137,0.07588,0.8478,2.208,0.1305,0.4587,1.901,0.09136,0.7376,1.83,0.0367,1.127,2.523,0.1696,0.1807,2.421,0.2219,-0.192,2.107,0.1831,0.08474,2.209,0.1307,0.4574,2.73,0.2679,-0.5191,2.484,0.3203,-0.8922,2.175,0.2746,-0.5668,2.422,0.2222,-0.1937,1.061,0.3846,-1.648,-2.49,-0.07094,-1.626,-2.79,0.1233,-1.309,-2.789,-0.1743,-0.9587,-2.502,-0.3954,-1.313,-1.901,0.2752,-1.55,-1.963,0.1317,-1.336,-2.154,0.08114,-0.9441,-2.145,0.2664,-1.283,-2.751,0.01671,-0.5509,-2.677,-0.2774,-0.2243,-2.468,-0.4911,-0.6317,-1.972,-0.08361,-0.7101,-2.128,-0.03282,-0.2761,-2.154,0.1483,-0.5857,-2.544,-0.08225,0.1536,-2.371,-0.3732,0.4573,-2.281,-0.5799,0.00001332,-1.909,-0.167,-0.1163,-2.003,-0.1224,0.3617,-2.085,0.05721,0.06252,-2.155,-0.1767,0.826,-1.911,-0.4622,0.9992,-1.933,-0.6646,0.603,-1.722,-0.2502,0.4758,-1.711,-0.2091,0.9787,-1.881,-0.03364,0.7093,-1.634,-0.2497,1.345,-1.336,-0.5157,1.362,-1.466,-0.73,0.946,-1.376,-0.314,0.9301,-1.252,-0.258,1.327,-1.503,-0.1034,1.206,-1.013,-0.287,1.611,-0.6794,-0.5402,1.623,-0.9086,-0.7635,1.235,-0.8849,-0.345,1.151,-0.6541,-0.2804,1.486,-0.9662,-0.1373,1.447,-0.3405,-0.3012,1.712,-0.3053,-0.7763,1.398,-0.3027,-0.3567,1.234,-0.3304,-0.15,1.538,-2.166,0.2411,-0.9202,-2.162,0.2932,-1.271,-1.912,0.2936,-1.537,-2.14,0.1469,-0.2495,-2.171,0.1958,-0.5782,-2.014,0.05701,0.3904,-2.102,0.1044,0.07263,-1.72,-0.03018,1.011,-1.897,0.01291,0.7241,-1.257,-0.07947,1.362,-1.514,-0.05759,1.226,-0.656,-0.102,1.523,-0.9712,-0.0919,1.47,-0.3317,-0.1047,1.561,-0.6776,-0.1788,1.686,-0.3392,-0.14,1.717,0.0,-0.185,1.73,-1.331,-0.1545,1.512,-1.009,-0.126,1.617,-1.903,-0.1013,1.134,-1.625,-0.08896,1.353,-2.361,-0.01256,0.5023,-2.141,-0.01654,0.8378,-2.666,0.08285,-0.1769,-2.528,0.07737,0.1693,-2.778,0.1855,-0.9075,-2.734,0.1758,-0.5314,-2.481,0.25,-1.57,-2.773,0.2808,-1.279,-1.153,0.2636,-1.602,-1.256,0.07775,-1.259,-1.241,-0.003568,-0.8708,-1.167,-0.05593,-0.498,-0.9965,-0.106,-0.1419,-0.7287,-0.1347,0.06276,-0.3811,-0.1479,0.1564,-2.249,0.8126,-1.198,-2.479,0.775,-0.9302,-2.687,0.8132,-1.202,-2.456,0.8508,-1.47,-0.3333,0.4102,1.667,-0.09134,0.4021,1.725,-0.3376,0.3972,1.759,-0.5796,0.4054,1.701,-1.001,0.4111,1.661,-1.222,0.4253,1.56,-0.9791,0.4232,1.574,-0.7581,0.409,1.675,-1.602,0.4474,1.402,-1.757,0.4705,1.238,-1.536,0.4582,1.325,-1.381,0.4351,1.49,-2.1,0.519,0.8923,-2.158,0.5587,0.6097,-1.938,0.5296,0.8171,-1.881,0.4899,1.1,-2.464,0.6122,0.2289,-2.393,0.6503,-0.04252,-2.166,0.6218,0.1605,-2.237,0.5837,0.4319,-2.654,0.7095,-0.4638,-2.475,0.7478,-0.7365,-2.252,0.7144,-0.4984,-2.43,0.676,-0.2256,-2.255,0.2632,-0.9991,-2.167,0.3718,-1.259,-2.227,0.3392,-1.54,-2.484,0.2443,-0.9037,-2.704,0.2622,-0.9918,-2.484,0.3205,-0.8937,-2.684,0.3414,-1.556,-2.769,0.3726,-1.265,-2.197,0.294,-1.54,-2.452,0.4239,-1.63,-0.08337,-0.1013,1.596,-0.332,-0.0267,1.578,-0.5823,-0.09826,1.574,0.0,-0.1153,1.656,-0.08511,-0.1174,1.71,-0.001013,-0.03918,1.667,-0.591,-0.1137,1.684,-0.3389,-0.04721,1.724,-0.6709,-0.1108,1.624,-0.6699,-0.03473,1.635,-1.247,-0.09314,1.538,-1.007,-0.03319,1.624,-0.7589,-0.1101,1.659,-1.309,-0.08845,1.465,-1.21,-0.07857,1.434,-1.308,-0.01239,1.476,-0.7432,-0.09504,1.552,-0.9727,-0.01389,1.487,-0.672,-0.03468,1.635,-1.816,-0.04618,1.204,-1.621,0.003701,1.362,-1.402,-0.08385,1.472,-1.83,-0.03947,1.117,-1.712,-0.03426,1.119,-1.829,0.03652,1.128,-1.347,-0.06991,1.373,-1.517,0.02057,1.242,-1.31,-0.01226,1.475,-2.271,0.04218,0.5746,-2.137,0.07588,0.8478,-1.946,-0.02806,1.075,-2.209,0.05452,0.4475,-2.051,0.05412,0.4896,-2.208,0.1305,0.4587,-1.809,-0.0165,0.9923,-1.901,0.09136,0.7376,-1.83,0.0367,1.127,-2.576,0.1355,-0.08942,-2.523,0.1696,0.1807,-2.368,0.06568,0.4073,-2.422,0.146,-0.2035,-2.214,0.1443,-0.1527,-2.421,0.2219,-0.192,-2.103,0.07712,0.3259,-2.107,0.1831,0.08474,-2.209,0.1307,0.4574,-2.695,0.236,-0.8048,-2.73,0.2679,-0.5191,-2.628,0.1601,-0.265,-2.257,0.2389,-0.8255,-2.484,0.3203,-0.8922,-2.231,0.1673,-0.3162,-2.175,0.2746,-0.5668,-2.422,0.2222,-0.1937,-1.901,0.2678,-1.551,-1.061,0.3846,-1.648,0.0,0.3076,-1.662,-2.169,0.75,-1.206,-2.26,0.7752,-0.9315,-2.233,0.85,-1.464,-2.484,0.6989,-0.8424,-2.699,0.7742,-0.9243,-2.766,0.7507,-1.211,-2.679,0.8522,-1.48,-2.452,0.8018,-1.575,-0.3323,0.3508,1.635,-0.08821,0.4091,1.675,-0.5782,0.412,1.654,-0.003092,0.3389,1.72,-0.08971,0.3951,1.774,-0.3387,0.3315,1.773,-0.5857,0.3987,1.749,-0.6678,0.3434,1.688,-1.006,0.3455,1.673,-1.24,0.4191,1.604,-0.7626,0.4024,1.722,-1.306,0.3656,1.53,-1.208,0.4316,1.514,-0.9738,0.3637,1.544,-0.749,0.4154,1.63,-0.6741,0.3435,1.688,-1.618,0.3823,1.412,-1.806,0.4655,1.274,-1.402,0.4288,1.534,-1.826,0.4144,1.183,-1.713,0.476,1.199,-1.52,0.3982,1.298,-1.355,0.4409,1.448,-1.312,0.366,1.527,-2.133,0.4542,0.8992,-2.262,0.5534,0.6474,-1.942,0.4843,1.139,-2.207,0.5084,0.5133,-2.056,0.5646,0.5678,-1.905,0.4692,0.7925,-1.816,0.4949,1.064,-1.831,0.415,1.178,-2.52,0.5478,0.2331,-2.568,0.6464,-0.01431,-2.364,0.5779,0.4731,-2.421,0.5998,-0.1369,-2.218,0.6549,-0.07527,-2.11,0.5611,0.1386,-2.11,0.5889,0.3951,-2.209,0.5091,0.5086,-2.728,0.646,-0.4662,-2.689,0.7467,-0.7288,-2.624,0.6722,-0.1983,-2.483,0.6982,-0.8372,-2.262,0.7496,-0.7489,-2.178,0.6527,-0.5135,-2.236,0.6792,-0.2482,-2.422,0.6006,-0.1425,-2.256,0.5244,-0.9629,-2.228,0.6003,-1.503,-2.703,0.5234,-0.9556,-2.683,0.6025,-1.519,-0.08417,0.1595,1.635,-0.5817,0.1625,1.614,-0.08583,0.1441,1.744,-0.5901,0.1478,1.718,-1.246,0.1683,1.572,-0.7594,0.1513,1.693,-1.21,0.1822,1.474,-0.7444,0.1657,1.591,-1.813,0.2151,1.239,-1.401,0.1776,1.506,-1.713,0.2265,1.158,-1.349,0.1909,1.411,-2.268,0.3033,0.6108,-1.944,0.2332,1.11,-2.053,0.315,0.5275,-1.811,0.2445,1.03,-2.574,0.3965,-0.05237,-2.366,0.3269,0.4429,-2.215,0.4053,-0.115,-2.104,0.3382,0.3624,-2.693,0.497,-0.7676,-2.627,0.4213,-0.2291,-2.258,0.4999,-0.7881,-2.232,0.4285,-0.28,-1.901,0.507,-1.517,-0.9505,0.7345,-1.49,0.0,0.579,-1.624}, 3123);
IndexedFaceSet100.setCoord(&Coordinate102);

Shape96.setGeometry(&IndexedFaceSet100);

Transform95.addChild(&Shape96);

HAnimSegment94.addChild(&Transform95);

Coordinate& Coordinate103 =  Coordinate();
Coordinate103.setUSE(CString("Lower_teeth_COORD_JinBlink"));
HAnimSegment94.setCoord(&Coordinate103);

HAnimDisplacer& HAnimDisplacer104 =  HAnimDisplacer();
HAnimDisplacer104.X3DNode::setName(CString("lower_teeth_morphinterpolator"));
HAnimDisplacer104.setDEF(CString("Lower_teeth_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer104.setCoordIndex(new int32_t[]{15,16,17,18,19,20,21,22,28,29,30,37,38,39,40,45,50,51,52,53,54,55,56,57,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,152,153,154,155,156,157,158,159,160,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,220,234,239,240,241,242,243,244,245,246,250,264,275,276,277,278,284,285,286,287,296,297,298,299,301,302,311,312,313,314,315,316,317,318,322,335,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,423,424,425,426,427,429,430,439,440,441,442,443,444,445,446,450,463,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,544,545,546,547,548,549,550,555,556,557,563,564,570,571,572,573,585,586,587,588,589,594,595,596,597,598,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,727,728,729,730,731,732,733,734,756,757,758,759,760,761,762,763,767,780,808,810,811,813,814,815,816,817,818,819,820,821,822,832,834,835,836,837,838,839,840,841,852,853,854,855,856,857,858,863,864,865,866,867,868,869,870,874,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,922,924,952,953,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,984,985,1014,1015,1016,1017,1018,1019,1020,1021,1025,1039,1040}, 345);
HAnimDisplacer104.setDisplacements(new float[]{0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.6103,0.364,0.0,0.4491,0.199,0.0,0.4097,0.2,0.0,0.449,0.199,0.0,0.4246,0.199,0.0,0.0381,0.0,0.0,0.4491,0.2,0.0,0.4838,0.2,0.0,0.0381,0.0,0.0,0.4096,0.2,0.0,0.4097,0.199,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1268,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1267,0.0,0.0,0.1864,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.3661,0.199,0.0,0.3661,0.2,0.0,0.3661,0.199,0.0,0.366,0.199,0.0,0.3661,0.199,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.366,0.199,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4491,0.199,0.0,0.6103,0.364,0.0,0.4491,0.2,0.0,0.4097,0.2,0.0,0.6103,0.364,0.0,0.0381,0.0,0.0,0.4096,0.2,0.0,0.4097,0.199,0.0,0.4097,0.199,0.0,0.4097,0.2,0.0,0.0381,0.0,0.0,0.1864,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.3661,0.2,0.0,0.3661,0.199,0.0,0.3661,0.199,0.0,0.366,0.199,0.0,0.0381,0.0,0.0,0.3661,0.199,0.0,0.0381,0.0,0.0,0.366,0.199,0.0,0.0381,0.0,0.0,0.1458,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1458,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.6497,0.364,0.0,0.4491,0.2,0.0,0.0381,0.0,0.0,0.4097,0.2,0.0,0.449,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4491,0.1995,0.0,0.4491,0.1995,0.0,0.1865,0.0,0.0,0.0382,0.0,0.0,0.366,0.2,0.0,0.4097,0.2,0.0,0.4096,0.199,0.0,0.4097,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4097,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.2207,0.0,0.0,0.1865,0.0,0.0,0.1458,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.25,0.117,0.0,0.2501,0.117,0.0,0.2501,0.118,0.0,0.25,0.118,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.2501,0.117,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.6497,0.364,0.0,0.4491,0.2,0.0,0.0381,0.0,0.0,0.4097,0.2,0.0,0.449,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4491,0.1995,0.0,0.4491,0.1995,0.0,0.1865,0.0,0.0,0.0382,0.0,0.0,0.366,0.2,0.0,0.4097,0.2,0.0,0.4096,0.199,0.0,0.4097,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4097,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.2207,0.0,0.0,0.1865,0.0,0.0,0.1458,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.25,0.117,0.0,0.2501,0.117,0.0,0.2501,0.118,0.0,0.25,0.118,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.2501,0.117,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.6497,0.364,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.6843,0.364,0.0,0.6103,0.364,0.0,0.449,0.2,0.0,0.4245,0.199,0.0,0.0382,0.0,0.0,0.4491,0.2,0.0,0.449,0.2,0.0,0.1977,0.082,0.0,0.4491,0.199,0.0,0.0381,0.0,0.0,0.4097,0.2,0.0,0.4096,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4097,0.199,0.0,0.4097,0.2,0.0,0.4246,0.199,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.4097,0.1994,0.0,0.4097,0.1995,0.0,0.4246,0.1995,0.0,0.4097,0.2,0.0,0.0381,0.0,0.0,0.3661,0.2,0.0,0.4097,0.199,0.0,0.4097,0.2,0.0,0.4097,0.2,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.4096,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.366,0.199,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1869,0.0,0.0,0.187,0.0,0.0,0.1864,0.0,0.0,0.1865,0.0,0.0,0.187,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1267,0.0,0.0,0.1268,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1268,0.0,0.0,0.25,0.117,0.0,0.25,0.118,0.0,0.2501,0.118,0.0,0.25,0.118,0.0,0.2501,0.118,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.2501,0.117,0.0,0.3661,0.2,0.0,0.3661,0.199,0.0,0.366,0.2,0.0,0.366,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.3661,0.199,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.6497,0.364,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.4491,0.2,0.0,0.0382,0.0,0.0,0.449,0.2,0.0,0.6103,0.364,0.0,0.4491,0.199,0.0,0.4245,0.199,0.0,0.0381,0.0,0.0,0.4097,0.199,0.0,0.0381,0.0,0.0,0.4097,0.2,0.0,0.4246,0.199,0.0,0.4096,0.2,0.0,0.4491,0.199,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.4097,0.1994,0.0,0.4097,0.1995,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1864,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1458,0.0,0.0,0.0381,0.0,0.0,0.4097,0.199,0.0,0.3661,0.2,0.0,0.3661,0.2,0.0,0.4097,0.2,0.0,0.4097,0.2,0.0,0.3661,0.199,0.0,0.4097,0.2,0.0,0.366,0.2,0.0,0.4097,0.2,0.0,0.366,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.2036,0.2,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.211,0.199,0.0,0.0381,0.0,0.0,0.3661,0.199,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1864,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1458,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1458,0.0,0.0,0.1457,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.25,0.118,0.0,0.25,0.117,0.0,0.2501,0.118,0.0,0.25,0.118,0.0,0.0381,0.0,0.0,0.2501,0.118,0.0,0.0381,0.0,0.0,0.2501,0.117,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0}, 1035);
HAnimSegment94.setDisplacers(HAnimDisplacer104);

HAnimDisplacer& HAnimDisplacer105 =  HAnimDisplacer();
HAnimDisplacer105.X3DNode::setName(CString("lower_teeth_morphinterpolator"));
HAnimDisplacer105.setDEF(CString("Lower_teeth_MorphInterpolator_JinJawDrop"));
HAnimDisplacer105.setCoordIndex(new int32_t[]{157}, 1);
HAnimDisplacer105.setDisplacements(new float[]{0.0,-0.2991,0.0}, 3);
HAnimSegment94.setDisplacers(HAnimDisplacer105);

HAnimDisplacer& HAnimDisplacer106 =  HAnimDisplacer();
HAnimDisplacer106.X3DNode::setName(CString("lower_teeth_morphinterpolator"));
HAnimDisplacer106.setDEF(CString("Lower_teeth_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer106.setCoordIndex(new int32_t[]{1,18,29,30,42,123,157,158,160,207,208,229,264,277,328,334,376,405,456,462,494,504,506,516,543,547,548,564,608,631,649,665,773,779,814,820,821,894,937,944,1012,1013,1034,1039}, 44);
HAnimDisplacer106.setDisplacements(new float[]{-0.791,0.0,0.0,0.0,-0.2501,0.0,0.0,-0.2497,0.093,0.0,-0.2496,0.093,-0.745,0.0,0.0,-0.751,0.0,0.0,0.0,-0.2501,0.0,0.0,-0.2497,0.2,0.0,-0.2495,0.0,0.477,0.0,0.3911,0.473,0.0,0.392,0.475,0.0,0.3911,0.0,0.0,0.322,0.0,-0.2496,0.092,-0.77,0.0,0.0,-0.77,0.0,0.0,0.46,0.0,0.126,0.0,-0.2496,0.092,0.817,0.0,0.0,0.817,0.0,0.0,0.49,0.0,0.3913,-0.454,0.0,0.069,0.0,0.0,0.068,0.482,0.0,0.3911,0.0,-0.2496,0.093,0.0,-0.2497,0.799,0.0,-0.2497,0.0,0.0,-0.2497,0.092,-0.77,0.0,0.0,-0.1539,0.0,0.362,-0.752,0.0,0.0,-0.0413,0.0,0.436,-0.769,0.0,0.0,-0.77,0.0,0.0,0.0,-0.2496,0.093,0.0,-0.2497,0.0,0.0,-0.2497,0.092,0.49,0.0,0.3916,0.817,0.0,0.0,0.482,0.0,0.3911,0.477,0.0,0.3911,0.473,0.0,0.392,0.475,0.0,0.3911,0.0,0.0,0.322}, 132);
HAnimSegment94.setDisplacers(HAnimDisplacer106);

HAnimDisplacer& HAnimDisplacer107 =  HAnimDisplacer();
HAnimDisplacer107.X3DNode::setName(CString("lower_teeth_morphinterpolator"));
HAnimDisplacer107.setDEF(CString("Lower_teeth_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer107.setCoordIndex(new int32_t[]{4,7,43,44,67,105,106,124,127,128,134,175,265,267,269,290,291,292,309,331,356,366,388,419,420,437,459,516,523,525,527,529,533,577,578,592,593,611,612,650,657,658,725,726,744,747,748,754,776,782,789,848,849,851,894,944}, 56);
HAnimDisplacer107.setDisplacements(new float[]{0.83,-0.0298,-0.5726,0.794,-0.0618,-0.3448,0.784,-0.01,-0.3392,0.817,0.0217,-0.565,0.763,0.1305,-0.2932,0.804,0.0523,-0.5909,0.798,0.0769,-0.766,0.764,0.0129,-0.31,0.78,0.0205,-0.3648,0.801,0.0441,-0.5324,-0.905,-0.0298,-0.5726,-0.892,0.0217,-0.565,0.832,-0.0886,-0.704,0.82,-0.1219,-0.4674,0.755,-0.1527,-0.2479,0.752,-0.0405,-0.2335,0.816,-0.0099,-0.4522,0.828,0.023,-0.686,0.825,0.0427,-0.682,0.812,0.0101,-0.45,0.746,0.1387,-0.2104,0.824,0.1239,-0.67,0.812,0.0913,-0.4386,-0.891,-0.0099,-0.4522,-0.903,0.023,-0.686,-0.9,0.0427,-0.682,-0.888,0.0101,-0.45,-0.887,0.0913,-0.4386,0.831,-0.1055,-0.5833,0.83,-0.013,-0.693,0.795,-0.1377,-0.3552,0.819,-0.0461,-0.4571,0.754,-0.077,-0.2375,0.814,0.0034,-0.4507,0.825,0.0361,-0.683,0.792,-0.0255,-0.3404,0.827,0.0064,-0.5675,0.804,0.0303,-0.5942,0.798,0.055,-0.769,0.765,-0.0092,-0.3132,0.781,-0.0015,-0.3679,0.801,0.0221,-0.5362,0.804,0.1116,-0.5824,0.797,0.1361,-0.758,0.764,0.0721,-0.3016,0.78,0.0798,-0.3567,0.801,0.1033,-0.5244,0.824,0.0647,-0.678,0.812,0.0321,-0.4469,-0.905,-0.013,-0.693,-0.894,-0.0461,-0.4571,-0.902,0.0064,-0.5675,-0.889,0.0034,-0.4507,-0.9,0.0361,-0.683,-0.899,0.0647,-0.678,-0.887,0.0321,-0.4469}, 168);
HAnimSegment94.setDisplacers(HAnimDisplacer107);

HAnimDisplacer& HAnimDisplacer108 =  HAnimDisplacer();
HAnimDisplacer108.X3DNode::setName(CString("lower_teeth_morphinterpolator"));
HAnimDisplacer108.setDEF(CString("Lower_teeth_MorphInterpolator_JinLowerLipDepressor"));
HAnimDisplacer108.setCoordIndex(new int32_t[]{18,157}, 2);
HAnimDisplacer108.setDisplacements(new float[]{0.0,-0.2691,0.0,0.0,-0.2691,0.0}, 6);
HAnimSegment94.setDisplacers(HAnimDisplacer108);

HAnimDisplacer& HAnimDisplacer109 =  HAnimDisplacer();
HAnimDisplacer109.X3DNode::setName(CString("lower_teeth_morphinterpolator"));
HAnimDisplacer109.setDEF(CString("Lower_teeth_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer109.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,163,164,165,166,167,168,169,170,171,172,173,174,175,177,178,179,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,207,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,234,236,237,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,464,465,466,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,576,577,578,579,580,581,582,583,584,585,586,587,588,589,590,591,592,593,594,595,596,597,598,599,600,601,602,603,604,605,606,607,608,609,610,611,612,613,614,615,616,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,633,634,635,636,637,638,639,640,641,642,643,644,645,646,647,648,649,650,651,652,653,654,655,656,657,658,659,660,661,662,663,664,665,666,667,668,669,670,671,672,673,674,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,691,692,693,694,695,696,697,698,699,700,701,702,703,704,705,706,707,708,709,710,711,712,713,714,715,716,717,718,719,720,721,722,723,724,725,726,727,728,729,730,731,732,733,734,735,736,737,738,739,740,741,742,743,744,745,746,747,748,749,750,751,752,753,754,755,756,757,758,759,760,761,762,763,764,765,766,767,768,769,770,771,772,773,774,775,776,777,778,779,780,781,782,783,784,786,787,788,789,790,791,792,793,794,795,796,797,798,799,800,801,802,803,804,805,806,807,808,809,810,811,812,813,814,815,816,817,818,819,820,821,822,823,824,826,827,828,829,830,831,832,833,834,835,836,837,838,839,840,841,842,843,844,845,846,847,848,849,851,852,853,854,855,856,857,858,859,860,861,863,864,865,866,867,868,869,870,871,872,873,874,875,876,877,878,879,880,881,882,883,884,885,886,887,888,890,891,892,894,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,916,917,918,919,920,921,922,923,924,925,926,927,928,929,930,931,932,933,934,935,936,937,938,939,940,941,942,943,944,945,946,947,948,949,950,953,954,955,957,958,959,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,978,979,980,981,982,983,984,985,986,987,988,989,990,991,992,993,994,995,996,997,998,999,1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1012,1014,1015,1016,1017,1018,1019,1020,1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1039,1040}, 1011);
HAnimDisplacer109.setDisplacements(new float[]{0.0,-0.1065,-0.186,0.0,-0.0545,-0.087,0.0,-0.0583,-0.078,0.0,-0.704,-0.3611,0.0,-0.7206,-0.2676,0.0,-0.7339,-0.2231,0.0,-0.9615,-0.6048,0.0,-1.0512,-0.4836,0.0,-1.0466,-0.4324,0.0,-1.1908,-0.8444,0.0,-1.3165,-0.7061,0.0,-1.2484,-0.6481,0.0,-1.3539,-1.0388,0.0,-1.5825,-0.848,0.0,-1.5406,-0.7622,0.0,-1.505,-1.1029,0.0,-1.7601,-0.9216,0.0,-1.7036,-0.8295,0.0,-1.6201,-1.1436,0.0,-1.8417,-0.9553,0.0,-1.7781,-0.8606,0.0,-1.8625,-0.9637,0.0,-1.795,-0.8681,0.0,-0.0577,-0.08,0.0,-0.5348,-0.232,0.0,-0.9055,-0.4015,0.0,-1.1743,-0.6248,0.0,-1.3637,-0.8192,0.0,-1.5099,-0.8797,0.0,-1.5768,-0.9072,0.0,-1.5921,-0.9136,0.0,-0.0576,-0.078,0.0,-0.0591,-0.078,0.0,-0.7415,-0.2084,0.0,-1.055,-0.4173,0.0,-1.2974,-0.642,0.0,-1.5692,-0.7484,0.0,-1.7298,-0.815,0.0,-1.8046,-0.8452,0.0,-1.8659,-0.874,0.0,-1.7874,-0.8416,0.0,-1.615,-0.7701,0.0,-1.3274,-0.6534,0.0,-1.0777,-0.427,0.0,-0.7467,-0.213,0.0,-0.1553,0.015,0.0,-0.0644,-0.042,0.0,-0.7664,-0.033,0.0,-0.7689,-0.0339,0.0,-0.0634,-0.042,0.0,-1.9059,-0.637,0.0,-1.9159,-0.641,0.0,-1.9651,-0.662,0.0,-1.9527,-0.657,0.0,-1.9403,-0.651,0.0,-1.8842,-0.6281,0.0,-1.8406,-0.6099,0.0,-1.8942,-0.6329,0.0,-1.8527,-0.6155,0.0,-1.7298,-0.5639,0.0,-1.6929,-0.5485,0.0,-1.8105,-0.5972,0.0,-1.6682,-0.5383,0.0,-1.3949,-0.5177,0.0,-1.355,-0.4956,0.0,-1.6322,-0.5233,0.0,-1.321,-0.4833,0.0,-1.1574,-0.279,0.0,-1.1363,-0.2721,0.0,-1.318,-0.4939,0.0,-1.0967,-0.2592,0.0,-0.8375,-0.0573,0.0,-0.8302,-0.0548,0.0,-1.0795,-0.2535,0.0,-0.0637,-0.046,0.0,-0.0703,-0.039,0.0,-0.7482,-0.002,0.0,-0.7489,-0.0016,0.0,-0.0697,-0.039,0.0,-1.9268,-0.611,0.0,-1.9345,-0.614,0.0,-1.9675,-0.628,0.0,-1.9591,-0.625,0.0,-1.9375,-0.616,0.0,-1.8976,-0.599,0.0,-1.8667,-0.5866,0.0,-1.9067,-0.603,0.0,-1.8414,-0.5763,0.0,-1.7521,-0.5397,0.0,-1.7269,-0.5285,0.0,-1.8129,-0.5641,0.0,-1.6438,-0.4937,0.0,-1.4178,-0.5037,0.0,-1.4002,-0.4982,0.0,-1.6176,-0.4833,0.0,-1.3245,-0.4748,0.0,-1.1841,-0.2643,0.0,-1.1681,-0.2591,0.0,-1.3076,-0.4695,0.0,-1.0766,-0.229,0.0,-0.8763,-0.0746,0.0,-0.8694,-0.0722,0.0,-1.0656,-0.2254,0.0,-0.0596,-0.069,0.0,-0.7203,-0.1696,0.0,-0.7228,-0.1699,0.0,-0.0585,-0.068,0.0,-1.8312,-0.8135,0.0,-1.8412,-0.8172,0.0,-1.8935,-0.839,0.0,-1.8812,-0.8341,0.0,-1.8687,-0.8294,0.0,-1.8127,-0.8059,0.0,-1.7649,-0.7855,0.0,-1.8205,-0.809,0.0,-1.782,-0.7924,0.0,-1.6566,-0.7409,0.0,-1.6173,-0.725,0.0,-1.7367,-0.7736,0.0,-1.5957,-0.7161,0.0,-1.3589,-0.6344,0.0,-1.3327,-0.6263,0.0,-1.5581,-0.7005,0.0,-1.3074,-0.6184,0.0,-1.1149,-0.4072,0.0,-1.0935,-0.4002,0.0,-1.2408,-0.603,0.0,-1.0551,-0.3876,0.0,-0.7904,-0.1935,0.0,-0.783,-0.1908,0.0,-1.0471,-0.3314,0.0,-0.0586,-0.075,0.0,-0.1083,-0.177,0.0,0.0,-0.066,0.0,-0.7206,-0.2676,0.0,-0.704,-0.3611,0.0,-0.5348,-0.232,0.0,-0.7339,-0.2231,0.0,-1.0512,-0.4836,0.0,-0.9615,-0.6048,0.0,-0.9055,-0.4015,0.0,-1.0466,-0.4324,0.0,-1.3165,-0.7061,0.0,-1.1908,-0.8444,0.0,-1.1743,-0.6248,0.0,-1.2484,-0.6481,0.0,-1.5825,-0.848,0.0,-1.3539,-1.0388,0.0,-1.3637,-0.8192,0.0,-1.5406,-0.7622,0.0,-1.7601,-0.9216,0.0,-1.505,-1.1029,0.0,-1.5099,-0.8797,0.0,-1.7036,-0.8295,0.0,-1.8417,-0.9553,0.0,-1.6201,-1.1436,0.0,-1.5768,-0.9072,0.0,-1.7781,-0.8606,0.0,-1.6495,-1.1546,0.0,-0.7415,-0.2084,0.0,-1.055,-0.4173,0.0,-1.2974,-0.642,0.0,-1.5692,-0.7484,0.0,-1.7298,-0.815,0.0,-1.8046,-0.8452,0.0,-1.8191,-0.8516,0.0,-1.8659,-0.874,0.0,-1.8834,-0.8815,0.0,-1.7874,-0.8416,0.0,-1.615,-0.7701,0.0,-1.3274,-0.6534,0.0,-1.0777,-0.427,0.0,-0.7467,-0.213,0.0,0.0049,-0.039,0.0,-0.7482,-0.002,0.0,-0.7489,-0.0016,0.0,-1.9268,-0.611,0.0,-1.9345,-0.614,0.0,-1.9675,-0.628,0.0,-1.9591,-0.625,0.0,-1.9375,-0.616,0.0,-1.8976,-0.599,0.0,-1.8667,-0.5866,0.0,-1.9067,-0.603,0.0,-1.8414,-0.5763,0.0,-1.7521,-0.5397,0.0,-1.7269,-0.5285,0.0,-1.8129,-0.5641,0.0,-1.6438,-0.4937,0.0,-1.4178,-0.5037,0.0,-1.4002,-0.4982,0.0,-1.6176,-0.4833,0.0,-1.3245,-0.4748,0.0,-1.1841,-0.2643,0.0,-1.1681,-0.2591,0.0,-1.3076,-0.4695,0.0,-1.0766,-0.229,0.0,-0.9004,-0.0791,0.0,-0.8935,-0.0766,0.0,-1.0656,-0.2254,0.0,-0.7203,-0.1696,0.0,-0.7228,-0.1699,0.0,-1.8412,-0.8172,0.0,-1.8312,-0.8135,0.0,-1.8935,-0.839,0.0,-1.8812,-0.8341,0.0,-1.8127,-0.8059,0.0,-1.8687,-0.8294,0.0,-1.7649,-0.7855,0.0,-1.8205,-0.809,0.0,-1.6566,-0.7409,0.0,-1.782,-0.7924,0.0,-1.6173,-0.725,0.0,-1.7367,-0.7736,0.0,-1.3589,-0.6344,0.0,-1.5957,-0.7161,0.0,-1.3327,-0.6263,0.0,-1.5581,-0.7005,0.0,-1.1149,-0.4072,0.0,-1.3074,-0.6184,0.0,-1.0935,-0.4002,0.0,-1.2408,-0.603,0.0,-0.7904,-0.1935,0.0,-1.0551,-0.3876,0.0,-0.783,-0.1908,0.0,-1.0471,-0.3314,0.0,-0.1433,0.025,0.0,-0.7664,-0.033,0.0,-0.7689,-0.0339,0.0,-1.9059,-0.637,0.0,-1.9159,-0.641,0.0,-1.9651,-0.662,0.0,-1.9527,-0.657,0.0,-1.9403,-0.651,0.0,-1.8842,-0.6281,0.0,-1.8406,-0.6099,0.0,-1.8942,-0.6329,0.0,-1.8527,-0.6155,0.0,-1.7298,-0.5639,0.0,-1.6929,-0.5485,0.0,-1.8105,-0.5972,0.0,-1.6682,-0.5383,0.0,-1.3949,-0.5177,0.0,-1.355,-0.4956,0.0,-1.6322,-0.5233,0.0,-1.321,-0.4833,0.0,-1.1574,-0.279,0.0,-1.1363,-0.2721,0.0,-1.318,-0.4939,0.0,-1.0967,-0.2592,0.0,-0.8616,-0.0618,0.0,-0.8542,-0.0593,0.0,-1.0795,-0.2535,0.0,-0.1561,0.05,0.0,-0.1556,0.05,0.0,-0.4869,-0.267,0.0,-0.494,-0.212,0.0,-0.8772,-0.4194,0.0,-0.8773,-0.3752,0.0,-1.1631,-0.6652,0.0,-1.1733,-0.4664,0.0,-1.3976,-0.9042,0.0,-1.3776,-0.7285,0.0,-1.5806,-0.9898,0.0,-1.61,-0.8652,0.0,-1.7302,-1.047,0.0,-1.7222,-0.9111,0.0,-1.8119,-1.076,0.0,-1.7644,-0.9289,0.0,-0.4938,-0.17,0.0,-0.8728,-0.3493,0.0,-1.148,-0.5188,0.0,-1.3968,-0.6735,0.0,-1.6487,-0.7827,0.0,-1.7626,-0.829,0.0,-1.8048,-0.8467,0.0,-1.8764,-0.9055,0.0,-1.8295,-0.8866,0.0,-1.7057,-0.8351,0.0,-1.4634,-0.7346,0.0,-1.1956,-0.5538,0.0,-0.9296,-0.3747,0.0,-0.5003,-0.194,0.0,-0.0662,-0.087,0.0,-0.7097,-0.2823,0.0,-0.887,-0.3924,0.0,-1.0702,-0.5197,0.0,-1.2008,-0.6248,0.0,-1.2362,-0.7165,0.0,-1.2957,-0.7299,0.0,-0.5636,-0.023,0.0,-1.9467,-0.62,0.0,-1.9021,-0.602,0.0,-1.7838,-0.5524,0.0,-1.5453,-0.4535,0.0,-1.2347,-0.3714,0.0,-0.9698,-0.1732,0.0,-0.4961,-0.167,0.0,-0.7461,-0.2067,0.0,-0.4946,-0.167,0.0,-0.0517,-0.073,0.0,-1.8129,-0.8439,0.0,-1.8551,-0.8619,0.0,-1.8829,-0.8734,0.0,-1.8406,-0.8555,0.0,-1.8359,-0.8539,0.0,-1.7659,-0.8248,0.0,-1.7697,-0.8265,0.0,-1.8406,-0.8556,0.0,-1.7128,-0.803,0.0,-1.6029,-0.7577,0.0,-1.6561,-0.7789,0.0,-1.766,-0.8252,0.0,-1.4721,-0.7034,0.0,-1.3129,-0.6442,0.0,-1.3988,-0.6707,0.0,-1.603,-0.7573,0.0,-1.2009,-0.5337,0.0,-1.0686,-0.4187,0.0,-1.1504,-0.5154,0.0,-1.313,-0.6441,0.0,-0.9394,-0.3468,0.0,-0.7464,-0.2064,0.0,-0.8729,-0.3486,0.0,-1.0683,-0.4185,0.0,-0.1426,0.02,0.0,-0.5403,-0.019,0.0,-0.8071,-0.0218,0.0,-0.5629,-0.023,0.0,-0.0584,-0.036,0.0,-1.9168,-0.607,0.0,-1.9545,-0.623,0.0,-1.9766,-0.633,0.0,-1.9399,-0.616,0.0,-1.9306,-0.613,0.0,-1.8661,-0.5866,0.0,-1.8737,-0.5897,0.0,-1.9382,-0.616,0.0,-1.8083,-0.5621,0.0,-1.7037,-0.5196,0.0,-1.7583,-0.5417,0.0,-1.8629,-0.5853,0.0,-1.57,-0.4635,0.0,-1.3486,-0.4658,0.0,-1.5213,-0.4435,0.0,-1.699,-0.5172,0.0,-1.2489,-0.3758,0.0,-1.1276,-0.2458,0.0,-1.2203,-0.3669,0.0,-1.3442,-0.4642,0.0,-0.9778,-0.1758,0.0,-0.8115,-0.0233,0.0,-0.962,-0.1706,0.0,-1.1232,-0.2444,0.0,-0.5187,-0.092,0.0,-0.7781,-0.1126,0.0,-0.5171,-0.091,0.0,-0.055,-0.054,0.0,-1.8655,-0.7234,0.0,-1.9052,-0.7402,0.0,-1.9314,-0.7505,0.0,-1.8907,-0.7337,0.0,-1.8855,-0.7309,0.0,-1.817,-0.7028,0.0,-1.8223,-0.705,0.0,-1.8907,-0.7341,0.0,-1.7623,-0.6803,0.0,-1.6539,-0.6353,0.0,-1.7078,-0.658,0.0,-1.8162,-0.703,0.0,-1.5224,-0.581,0.0,-1.3379,-0.5637,0.0,-1.4247,-0.5904,0.0,-1.6531,-0.6349,0.0,-1.2254,-0.4532,0.0,-1.098,-0.3301,0.0,-1.2082,-0.3781,0.0,-1.3382,-0.5635,0.0,-0.9503,-0.26,0.0,-0.7789,-0.1129,0.0,-1.0301,-0.2431,0.0,-1.0972,-0.3299,0.0,-0.146,0.039,0.0,-0.5,-0.247,0.0,-0.482,-0.154,0.0,-0.8772,-0.4194,0.0,-0.8773,-0.3752,0.0,-1.1631,-0.6652,0.0,-1.1733,-0.4664,0.0,-1.3976,-0.9042,0.0,-1.3776,-0.7285,0.0,-1.5806,-0.9898,0.0,-1.61,-0.8652,0.0,-1.7302,-1.047,0.0,-1.7222,-0.9111,0.0,-1.8119,-1.076,0.0,-1.7644,-0.9289,0.0,-0.4756,-0.057,0.0,-0.8728,-0.3493,0.0,-1.148,-0.5188,0.0,-1.3968,-0.6735,0.0,-1.6487,-0.7827,0.0,-1.7626,-0.829,0.0,-1.8048,-0.8467,0.0,-1.8764,-0.9055,0.0,-1.8295,-0.8866,0.0,-1.7057,-0.8351,0.0,-1.4634,-0.7346,0.0,-1.1956,-0.5538,0.0,-0.9296,-0.3747,0.0,-0.4859,-0.074,0.0,-0.2957,-0.074,0.0,-0.7097,-0.2823,0.0,-0.887,-0.3924,0.0,-1.0702,-0.5197,0.0,-1.2008,-0.6248,0.0,-1.2362,-0.7165,0.0,-1.2957,-0.7299,0.0,-0.4989,0.039,0.0,-1.9467,-0.62,0.0,-1.9021,-0.602,0.0,-1.7838,-0.5524,0.0,-1.5453,-0.4535,0.0,-1.2347,-0.3714,0.0,-0.9698,-0.1732,0.0,-0.4769,-0.056,0.0,-0.7461,-0.2067,0.0,-0.4759,-0.056,0.0,-1.8129,-0.8439,0.0,-1.8551,-0.8619,0.0,-1.8829,-0.8734,0.0,-1.8406,-0.8555,0.0,-1.8359,-0.8539,0.0,-1.7659,-0.8248,0.0,-1.7697,-0.8265,0.0,-1.8406,-0.8556,0.0,-1.7128,-0.803,0.0,-1.6029,-0.7577,0.0,-1.6561,-0.7789,0.0,-1.766,-0.8252,0.0,-1.4721,-0.7034,0.0,-1.3129,-0.6442,0.0,-1.3988,-0.6707,0.0,-1.603,-0.7573,0.0,-1.2009,-0.5337,0.0,-1.0686,-0.4187,0.0,-1.1504,-0.5154,0.0,-1.313,-0.6441,0.0,-0.9394,-0.3468,0.0,-0.7464,-0.2064,0.0,-0.8729,-0.3486,0.0,-1.0683,-0.4185,0.0,-0.4994,0.039,0.0,-0.8071,-0.0218,0.0,-0.4985,0.04,0.0,-1.9168,-0.607,0.0,-1.9545,-0.623,0.0,-1.9766,-0.633,0.0,-1.9399,-0.616,0.0,-1.9306,-0.613,0.0,-1.8661,-0.5866,0.0,-1.8737,-0.5897,0.0,-1.9382,-0.616,0.0,-1.8083,-0.5621,0.0,-1.7037,-0.5196,0.0,-1.7583,-0.5417,0.0,-1.8629,-0.5853,0.0,-1.57,-0.4635,0.0,-1.3486,-0.4658,0.0,-1.5213,-0.4435,0.0,-1.699,-0.5172,0.0,-1.2489,-0.3758,0.0,-1.1276,-0.2458,0.0,-1.2203,-0.3669,0.0,-1.3442,-0.4642,0.0,-0.9778,-0.1758,0.0,-0.8115,-0.0233,0.0,-0.962,-0.1706,0.0,-1.1232,-0.2444,0.0,-0.4884,-0.008,0.0,-0.7781,-0.1126,0.0,-0.4874,-0.007,0.0,-1.8655,-0.7234,0.0,-1.9052,-0.7402,0.0,-1.9314,-0.7505,0.0,-1.8907,-0.7337,0.0,-1.8855,-0.7309,0.0,-1.817,-0.7028,0.0,-1.8223,-0.705,0.0,-1.8907,-0.7341,0.0,-1.7623,-0.6803,0.0,-1.6539,-0.6353,0.0,-1.7078,-0.658,0.0,-1.8162,-0.703,0.0,-1.5224,-0.581,0.0,-1.3379,-0.5637,0.0,-1.4247,-0.5904,0.0,-1.6531,-0.6349,0.0,-1.2254,-0.4532,0.0,-1.098,-0.3301,0.0,-1.2082,-0.3781,0.0,-1.3382,-0.5635,0.0,-0.9503,-0.26,0.0,-0.7789,-0.1129,0.0,-1.0301,-0.2431,0.0,-1.0972,-0.3299,0.0,-0.146,0.039,0.0,-0.1182,-0.136,0.0,-0.0579,-0.078,0.0,-0.7102,-0.3113,0.0,-0.4881,-0.318,0.0,-0.4975,-0.223,0.0,-0.5047,-0.184,0.0,-1.0276,-0.5587,0.0,-0.8639,-0.4673,0.0,-0.8872,-0.3755,0.0,-0.8831,-0.3509,0.0,-1.2938,-0.7813,0.0,-1.0861,-0.7078,0.0,-1.1858,-0.59,0.0,-1.1422,-0.5339,0.0,-1.4918,-0.9503,0.0,-1.2744,-0.9987,0.0,-1.4433,-0.79,0.0,-1.3904,-0.6871,0.0,-1.6613,-1.022,0.0,-1.432,-1.0735,0.0,-1.6863,-0.8903,0.0,-1.6366,-0.8024,0.0,-1.7848,-1.0661,0.0,-1.5685,-1.126,0.0,-1.811,-0.9418,0.0,-1.7497,-0.8489,0.0,-1.8166,-1.0783,0.0,-1.6457,-1.1525,0.0,-1.8578,-0.9613,0.0,-1.792,-0.8667,0.0,-0.7171,-0.2649,0.0,-1.0242,-0.4788,0.0,-1.2356,-0.6897,0.0,-1.5139,-0.8249,0.0,-1.676,-0.8926,0.0,-1.7506,-0.9228,0.0,-1.7685,-0.9303,0.0,-0.4929,-0.221,0.0,-0.7897,-0.3909,0.0,-1.068,-0.5294,0.0,-1.3198,-0.6671,0.0,-1.477,-0.8697,0.0,-1.58,-0.9127,0.0,-1.6193,-0.9286,0.0,-0.4951,-0.17,0.0,-0.8728,-0.3491,0.0,-1.1494,-0.5181,0.0,-1.3979,-0.6731,0.0,-1.6524,-0.7825,0.0,-1.7671,-0.8296,0.0,-1.8093,-0.8471,0.0,-1.881,-0.884,0.0,-1.834,-0.8647,0.0,-1.71,-0.8133,0.0,-1.4695,-0.7138,0.0,-1.1994,-0.5404,0.0,-0.9361,-0.3561,0.0,-0.4923,-0.173,0.0,-0.0564,-0.081,0.0,-0.0588,-0.078,0.0,-0.7392,-0.2088,0.0,-1.0519,-0.4172,0.0,-1.295,-0.6421,0.0,-1.5518,-0.742,0.0,-1.7155,-0.8101,0.0,-1.791,-0.8416,0.0,-1.8078,-0.8482,0.0,-1.8602,-0.8993,0.0,-1.7795,-0.865,0.0,-1.6027,-0.7922,0.0,-1.3264,-0.6698,0.0,-1.0732,-0.4441,0.0,-0.74,-0.2305,0.0,-0.1465,-0.05,0.0,-0.506,-0.232,0.0,-0.7291,-0.2822,0.0,-0.8957,-0.3897,0.0,-1.063,-0.5088,0.0,-1.1763,-0.4855,0.0,-1.1831,-0.6108,0.0,-1.19,-0.613,0.0,-0.0585,-0.078,0.0,-0.7456,-0.2093,0.0,-1.8392,-0.8578,0.0,-1.7646,-0.8272,0.0,-1.6015,-0.7603,0.0,-1.3125,-0.6458,0.0,-1.0679,-0.4204,0.0,-0.0587,-0.074,0.0,-0.7116,-0.1949,0.0,-0.7142,-0.1962,0.0,-0.0576,-0.074,0.0,-0.535,-0.037,0.0,-0.8007,-0.0447,0.0,-0.5574,-0.042,0.0,-0.0574,-0.041,0.0,-1.8167,-0.8455,0.0,-1.8267,-0.8502,0.0,-1.8796,-0.8719,0.0,-1.8673,-0.867,0.0,-1.9028,-0.6353,0.0,-1.9419,-0.652,0.0,-1.9665,-0.662,0.0,-1.9274,-0.646,0.0,-1.8559,-0.8623,0.0,-1.7999,-0.8389,0.0,-1.7514,-0.8186,0.0,-1.806,-0.842,0.0,-1.9205,-0.643,0.0,-1.8536,-0.6154,0.0,-1.8597,-0.6179,0.0,-1.9265,-0.646,0.0,-1.7682,-0.8262,0.0,-1.6428,-0.7745,0.0,-1.6037,-0.7579,0.0,-1.7221,-0.8072,0.0,-1.7983,-0.5927,0.0,-1.6904,-0.5484,0.0,-1.7452,-0.5703,0.0,-1.852,-0.6146,0.0,-1.5829,-0.7495,0.0,-1.3522,-0.6562,0.0,-1.3261,-0.6481,0.0,-1.5445,-0.7331,0.0,-1.5582,-0.493,0.0,-1.3386,-0.4897,0.0,-1.5082,-0.4724,0.0,-1.689,-0.5467,0.0,-1.3007,-0.6402,0.0,-1.107,-0.4312,0.0,-1.0854,-0.4241,0.0,-1.2341,-0.6248,0.0,-1.2432,-0.3952,0.0,-1.1195,-0.2666,0.0,-1.2141,-0.3862,0.0,-1.3368,-0.489,0.0,-1.0473,-0.4117,0.0,-0.7817,-0.2192,0.0,-0.7742,-0.2165,0.0,-1.1332,-0.4157,0.0,-0.9709,-0.1968,0.0,-0.8026,-0.0454,0.0,-0.955,-0.1917,0.0,-1.1176,-0.266,0.0,-0.1558,0.05,0.0,-0.0578,-0.079,0.0,-0.5642,-0.023,0.0,-0.7735,-0.0103,0.0,-0.5631,-0.023,0.0,-0.0651,-0.037,0.0,-0.0654,-0.038,0.0,-0.7731,-0.0101,0.0,-0.7757,-0.011,0.0,-0.0644,-0.037,0.0,-1.9252,-0.611,0.0,-1.9521,-0.622,0.0,-1.9682,-0.628,0.0,-1.9414,-0.617,0.0,-1.919,-0.608,0.0,-1.9291,-0.612,0.0,-1.9751,-0.631,0.0,-1.9637,-0.627,0.0,-1.9221,-0.61,0.0,-1.8753,-0.5904,0.0,-1.8822,-0.5927,0.0,-1.929,-0.612,0.0,-1.9514,-0.621,0.0,-1.8961,-0.599,0.0,-1.8536,-0.581,0.0,-1.9074,-0.604,0.0,-1.8014,-0.5594,0.0,-1.7245,-0.5282,0.0,-1.7652,-0.5444,0.0,-1.8421,-0.5766,0.0,-1.8628,-0.5848,0.0,-1.7415,-0.5351,0.0,-1.706,-0.5205,0.0,-1.8229,-0.5683,0.0,-1.563,-0.4608,0.0,-1.3896,-0.495,0.0,-1.5279,-0.4463,0.0,-1.6599,-0.5013,0.0,-1.6783,-0.5083,0.0,-1.4013,-0.4985,0.0,-1.3651,-0.4717,0.0,-1.6439,-0.4939,0.0,-1.2452,-0.3747,0.0,-1.1554,-0.2549,0.0,-1.2241,-0.3682,0.0,-1.3124,-0.4528,0.0,-1.3284,-0.4585,0.0,-1.1651,-0.2581,0.0,-1.1443,-0.2512,0.0,-1.3235,-0.4745,0.0,-0.9757,-0.1751,0.0,-0.8434,-0.0342,0.0,-0.9641,-0.1713,0.0,-1.0933,-0.2345,0.0,-1.1026,-0.2376,0.0,-0.8461,-0.0351,0.0,-0.8389,-0.0327,0.0,-1.0857,-0.232,0.0,-0.0621,-0.056,0.0,-0.7436,-0.1011,0.0,-0.7463,-0.1014,0.0,-0.061,-0.055,0.0,-1.8685,-0.7246,0.0,-1.8785,-0.7284,0.0,-1.9291,-0.7493,0.0,-1.9168,-0.7444,0.0,-1.9053,-0.7398,0.0,-1.8493,-0.716,0.0,-1.8032,-0.6976,0.0,-1.8577,-0.7203,0.0,-1.8176,-0.7037,0.0,-1.6931,-0.6516,0.0,-1.6555,-0.6362,0.0,-1.7739,-0.6851,0.0,-1.6322,-0.6269,0.0,-1.3773,-0.5756,0.0,-1.351,-0.5677,0.0,-1.5955,-0.6114,0.0,-1.3251,-0.5596,0.0,-1.1362,-0.3426,0.0,-1.1149,-0.3357,0.0,-1.3003,-0.5519,0.0,-1.0762,-0.323,0.0,-0.814,-0.1249,0.0,-0.8066,-0.1224,0.0,-1.0589,-0.3173,0.0,-0.0608,-0.062,0.0,-0.5022,-0.147,0.0,-0.7547,-0.1813,0.0,-0.5007,-0.146,0.0,-0.1449,0.028,0.0,-1.8273,-0.8116,0.0,-1.8688,-0.8289,0.0,-1.8958,-0.8398,0.0,-1.8543,-0.8225,0.0,-1.8488,-0.8203,0.0,-1.7796,-0.7917,0.0,-1.7851,-0.7941,0.0,-1.8543,-0.8227,0.0,-1.7257,-0.7701,0.0,-1.6165,-0.7244,0.0,-1.6696,-0.7469,0.0,-1.7787,-0.7915,0.0,-1.4859,-0.6701,0.0,-1.3205,-0.6224,0.0,-1.4064,-0.649,0.0,-1.6167,-0.7245,0.0,-1.2076,-0.5119,0.0,-1.0766,-0.3946,0.0,-1.1583,-0.4914,0.0,-1.3197,-0.6223,0.0,-0.9294,-0.3241,0.0,-0.7552,-0.1818,0.0,-0.9511,-0.3416,0.0,-1.0761,-0.3945,0.0,-0.1436,0.025,0.0,-0.0856,-0.139,0.0,-0.488,-0.157,0.0,-0.7102,-0.3113,0.0,-0.4771,-0.317,0.0,-0.4861,-0.156,0.0,-0.7171,-0.2649,0.0,-0.4886,-0.067,0.0,-0.8872,-0.3755,0.0,-1.0276,-0.5587,0.0,-0.8639,-0.4673,0.0,-0.7897,-0.3909,0.0,-1.0242,-0.4788,0.0,-0.8831,-0.3509,0.0,-1.1858,-0.59,0.0,-1.2938,-0.7813,0.0,-1.0861,-0.7078,0.0,-1.068,-0.5294,0.0,-1.2356,-0.6897,0.0,-1.1422,-0.5339,0.0,-1.4433,-0.79,0.0,-1.4918,-0.9503,0.0,-1.2744,-0.9987,0.0,-1.3198,-0.6671,0.0,-1.5139,-0.8249,0.0,-1.3904,-0.6871,0.0,-1.6863,-0.8903,0.0,-1.6613,-1.022,0.0,-1.432,-1.0735,0.0,-1.477,-0.8697,0.0,-1.676,-0.8926,0.0,-1.6366,-0.8024,0.0,-1.811,-0.9418,0.0,-1.7848,-1.0661,0.0,-1.5685,-1.126,0.0,-1.58,-0.9127,0.0,-1.7506,-0.9228,0.0,-1.7497,-0.8489,0.0,-1.8578,-0.9613,0.0,-1.6457,-1.1525,0.0,-1.6193,-0.9286,0.0,-1.792,-0.8667,0.0,-0.7392,-0.2088,0.0,-0.4764,-0.057,0.0,-1.0519,-0.4172,0.0,-0.8728,-0.3491,0.0,-1.295,-0.6421,0.0,-1.1494,-0.5181,0.0,-1.5518,-0.742,0.0,-1.3979,-0.6731,0.0,-1.7155,-0.8101,0.0,-1.6524,-0.7825,0.0,-1.791,-0.8416,0.0,-1.7671,-0.8296,0.0,-1.8093,-0.8471,0.0,-1.8602,-0.8993,0.0,-1.881,-0.884,0.0,-1.881,-0.9079,0.0,-1.7795,-0.865,0.0,-1.834,-0.8647,0.0,-1.6027,-0.7922,0.0,-1.71,-0.8133,0.0,-1.3264,-0.6698,0.0,-1.4695,-0.7138,0.0,-1.0732,-0.4441,0.0,-1.1994,-0.5404,0.0,-0.74,-0.2305,0.0,-0.9361,-0.3561,0.0,-0.4748,-0.059,0.0,-0.1465,-0.05,0.0,-0.4914,-0.16,0.0,-0.7291,-0.2822,0.0,-0.8957,-0.3897,0.0,-1.063,-0.5088,0.0,-1.1763,-0.4855,0.0,-1.1831,-0.6108,0.0,-0.4993,0.039,0.0,-0.7735,-0.0103,0.0,-0.4986,0.039,0.0,-1.9252,-0.611,0.0,-1.9521,-0.622,0.0,-1.9682,-0.628,0.0,-1.9414,-0.617,0.0,-1.9221,-0.61,0.0,-1.8753,-0.5904,0.0,-1.8822,-0.5927,0.0,-1.929,-0.612,0.0,-1.8014,-0.5594,0.0,-1.7245,-0.5282,0.0,-1.7652,-0.5444,0.0,-1.8421,-0.5766,0.0,-1.563,-0.4608,0.0,-1.3896,-0.495,0.0,-1.5279,-0.4463,0.0,-1.6599,-0.5013,0.0,-1.2452,-0.3747,0.0,-1.1554,-0.2549,0.0,-1.2241,-0.3682,0.0,-1.3124,-0.4528,0.0,-0.9757,-0.1751,0.0,-0.8674,-0.0387,0.0,-0.9641,-0.1713,0.0,-1.0933,-0.2345,0.0,-0.7116,-0.1949,0.0,-0.48,-0.043,0.0,-0.7456,-0.2093,0.0,-0.7142,-0.1962,0.0,-0.7547,-0.1813,0.0,-0.4791,-0.042,0.0,-1.8267,-0.8502,0.0,-1.8273,-0.8116,0.0,-1.8167,-0.8455,0.0,-1.8537,-0.8641,0.0,-1.8796,-0.8719,0.0,-1.8688,-0.8289,0.0,-1.8673,-0.867,0.0,-1.8958,-0.8398,0.0,-1.8392,-0.8578,0.0,-1.8543,-0.8225,0.0,-1.7999,-0.8389,0.0,-1.8488,-0.8203,0.0,-1.8559,-0.8623,0.0,-1.7646,-0.8272,0.0,-1.7514,-0.8186,0.0,-1.7796,-0.7917,0.0,-1.806,-0.842,0.0,-1.7851,-0.7941,0.0,-1.8543,-0.8227,0.0,-1.6428,-0.7745,0.0,-1.7257,-0.7701,0.0,-1.7682,-0.8262,0.0,-1.6015,-0.7603,0.0,-1.6037,-0.7579,0.0,-1.6165,-0.7244,0.0,-1.7221,-0.8072,0.0,-1.6696,-0.7469,0.0,-1.7787,-0.7915,0.0,-1.3522,-0.6562,0.0,-1.4859,-0.6701,0.0,-1.5829,-0.7495,0.0,-1.3125,-0.6458,0.0,-1.3261,-0.6481,0.0,-1.3205,-0.6224,0.0,-1.5445,-0.7331,0.0,-1.4064,-0.649,0.0,-1.6167,-0.7245,0.0,-1.107,-0.4312,0.0,-1.2076,-0.5119,0.0,-1.3007,-0.6402,0.0,-1.0679,-0.4204,0.0,-1.0854,-0.4241,0.0,-1.0766,-0.3946,0.0,-1.2341,-0.6248,0.0,-1.1583,-0.4914,0.0,-1.3197,-0.6223,0.0,-0.7817,-0.2192,0.0,-0.9294,-0.3241,0.0,-1.0473,-0.4117,0.0,-0.7742,-0.2165,0.0,-0.7552,-0.1818,0.0,-1.1332,-0.4157,0.0,-0.9511,-0.3416,0.0,-1.0761,-0.3945,0.0,-0.1423,0.02,0.0,-0.4967,0.027,0.0,-0.7731,-0.0101,0.0,-0.8007,-0.0447,0.0,-0.7757,-0.011,0.0,-0.4957,0.027,0.0,-1.9028,-0.6353,0.0,-1.9291,-0.612,0.0,-1.919,-0.608,0.0,-1.9419,-0.652,0.0,-1.9751,-0.631,0.0,-1.9665,-0.662,0.0,-1.9637,-0.627,0.0,-1.9274,-0.646,0.0,-1.9205,-0.643,0.0,-1.8961,-0.599,0.0,-1.9514,-0.621,0.0,-1.8536,-0.6154,0.0,-1.8536,-0.581,0.0,-1.8597,-0.6179,0.0,-1.9074,-0.604,0.0,-1.9265,-0.646,0.0,-1.7983,-0.5927,0.0,-1.7415,-0.5351,0.0,-1.8628,-0.5848,0.0,-1.6904,-0.5484,0.0,-1.706,-0.5205,0.0,-1.7452,-0.5703,0.0,-1.8229,-0.5683,0.0,-1.852,-0.6146,0.0,-1.5582,-0.493,0.0,-1.4013,-0.4985,0.0,-1.6783,-0.5083,0.0,-1.3386,-0.4897,0.0,-1.3651,-0.4717,0.0,-1.5082,-0.4724,0.0,-1.6439,-0.4939,0.0,-1.689,-0.5467,0.0,-1.2432,-0.3952,0.0,-1.1651,-0.2581,0.0,-1.3284,-0.4585,0.0,-1.1195,-0.2666,0.0,-1.1443,-0.2512,0.0,-1.2141,-0.3862,0.0,-1.3235,-0.4745,0.0,-1.3368,-0.489,0.0,-0.9709,-0.1968,0.0,-0.8702,-0.0396,0.0,-1.1026,-0.2376,0.0,-0.8026,-0.0454,0.0,-0.863,-0.0372,0.0,-0.955,-0.1917,0.0,-1.0857,-0.232,0.0,-1.1176,-0.266,0.0,-0.7436,-0.1011,0.0,-0.7463,-0.1014,0.0,-1.8785,-0.7284,0.0,-1.8685,-0.7246,0.0,-1.9291,-0.7493,0.0,-1.9168,-0.7444,0.0,-1.8493,-0.716,0.0,-1.9053,-0.7398,0.0,-1.8032,-0.6976,0.0,-1.8577,-0.7203,0.0,-1.6931,-0.6516,0.0,-1.8176,-0.7037,0.0,-1.6555,-0.6362,0.0,-1.7739,-0.6851,0.0,-1.3773,-0.5756,0.0,-1.6322,-0.6269,0.0,-1.351,-0.5677,0.0,-1.5955,-0.6114,0.0,-1.1362,-0.3426,0.0,-1.3251,-0.5596,0.0,-1.1149,-0.3357,0.0,-1.3003,-0.5519,0.0,-0.814,-0.1249,0.0,-1.0762,-0.323,0.0,-0.8066,-0.1224,0.0,-1.0589,-0.3173,0.0,-0.1558,0.05,0.0,-0.1458,0.039}, 3033);
HAnimSegment94.setDisplacers(HAnimDisplacer109);

HAnimJoint89.addChildren(&HAnimSegment94);

HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.X3DNode::setName(CString("hair"));
HAnimSegment110.setDEF(CString("hanim_Hair"));
HAnimJoint89.addChildren(&HAnimSegment110);

HAnimSegment& HAnimSegment111 =  HAnimSegment();
HAnimSegment111.X3DNode::setName(CString("__0"));
HAnimSegment111.setDEF(CString("hanim___0"));
HAnimJoint89.addChildren(&HAnimSegment111);

HAnimSegment& HAnimSegment112 =  HAnimSegment();
HAnimSegment112.X3DNode::setName(CString("__2"));
HAnimSegment112.setDEF(CString("hanim___2"));
HAnimJoint89.addChildren(&HAnimSegment112);

HAnimSegment& HAnimSegment113 =  HAnimSegment();
HAnimSegment113.X3DNode::setName(CString("__4"));
HAnimSegment113.setDEF(CString("hanim___4"));
HAnimDisplacer& HAnimDisplacer114 =  HAnimDisplacer();
HAnimDisplacer114.X3DNode::setName(CString("__4_morphinterpolator"));
HAnimDisplacer114.setDEF(CString("__4_MorphInterpolator_JinLipsPart"));
HAnimDisplacer114.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer114.setDisplacements(new float[]{0.0,-0.4319,0.0434,0.0,-0.4133,-0.0174}, 6);
HAnimSegment113.setDisplacers(HAnimDisplacer114);

HAnimJoint89.addChildren(&HAnimSegment113);

HAnimSegment& HAnimSegment115 =  HAnimSegment();
HAnimSegment115.X3DNode::setName(CString("center_lower_vermillion_lip"));
HAnimSegment115.setDEF(CString("hanim_Center_lower_vermillion_lip"));
Transform& Transform116 =  Transform();
Transform116.setDEF(CString("Center_lower_vermillion_lip_JinBlink"));
Transform116.setTranslation(new float[]{0.0,8.315,13.52});
Shape& Shape117 =  Shape();
Appearance& Appearance118 =  Appearance();
Appearance118.setUSE(CString("BaseAppearance_JinBlink"));
Shape117.addChild(&Appearance118);

IndexedFaceSet& IndexedFaceSet119 =  IndexedFaceSet();
IndexedFaceSet119.setDEF(CString("Center_lower_vermillion_lip-FACES_JinBlink"));
IndexedFaceSet119.setCoordIndex(new int32_t[]{1,0,4,-1,0,1,2,-1,1,4,3,-1,3,5,1,-1}, 16);
IndexedFaceSet119.setCreaseAngle(3.14159);
IndexedFaceSet119.setSolid(false);
IndexedFaceSet119.setTexCoordIndex(new int32_t[]{2,1,0,-1,1,2,3,-1,4,6,5,-1,5,7,4,-1}, 16);
TextureCoordinate& TextureCoordinate120 =  TextureCoordinate();
TextureCoordinate120.setDEF(CString("Center_lower_vermillion_lip-TEXCOORD_JinBlink"));
TextureCoordinate120.setPoint(new float[]{0.2441,0.6554,0.2548,0.6554,0.2557,0.6351,0.2652,0.6384,0.2557,0.6351,0.2548,0.6554,0.2441,0.6554,0.2652,0.6384}, 16);
IndexedFaceSet119.setTexCoord(&TextureCoordinate120);

Coordinate& Coordinate121 =  Coordinate();
Coordinate121.setDEF(CString("Center_lower_vermillion_lip_COORD_JinBlink"));
Coordinate121.setPoint(new float[]{0.5699,0.5402,0.1151,0.0,-0.5402,0.1287,0.6344,-0.3611,-0.1287,-0.5699,0.5402,0.1151,0.0,0.5402,0.1151,-0.6344,-0.3611,-0.1287}, 18);
IndexedFaceSet119.setCoord(&Coordinate121);

Shape117.setGeometry(&IndexedFaceSet119);

Transform116.addChild(&Shape117);

HAnimSegment115.addChild(&Transform116);

Coordinate& Coordinate122 =  Coordinate();
Coordinate122.setUSE(CString("Center_lower_vermillion_lip_COORD_JinBlink"));
HAnimSegment115.setCoord(&Coordinate122);

HAnimDisplacer& HAnimDisplacer123 =  HAnimDisplacer();
HAnimDisplacer123.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer123.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer123.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer123.setDisplacements(new float[]{0.0,0.382,0.435,0.0,0.9368,0.4659,0.0,0.7896,0.4659,0.0,0.382,0.435,0.0,0.382,0.435,0.0,0.7896,0.4659}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer123);

HAnimDisplacer& HAnimDisplacer124 =  HAnimDisplacer();
HAnimDisplacer124.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer124.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer124.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer124.setDisplacements(new float[]{0.0,0.1869,0.0,0.0,0.7516,0.364,0.0,0.6497,0.364,0.0,0.1869,0.0,0.0,0.2206,0.0,0.0,0.6497,0.364}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer124);

HAnimDisplacer& HAnimDisplacer125 =  HAnimDisplacer();
HAnimDisplacer125.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer125.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer125.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer125.setDisplacements(new float[]{0.0,-0.0896,0.5331,0.0,0.756,0.8803,0.0,0.6333,0.8802,0.0,-0.0896,0.5331,0.0,-0.0896,0.5331,0.0,0.6333,0.8802}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer125);

HAnimDisplacer& HAnimDisplacer126 =  HAnimDisplacer();
HAnimDisplacer126.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer126.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinJawDrop"));
HAnimDisplacer126.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer126.setDisplacements(new float[]{0.0,-0.6157,0.0,0.0,-0.6158,0.0,0.0,-0.6156,0.0,0.0,-0.6157,0.0,0.0,-0.6157,0.0,0.0,-0.6156,0.0}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer126);

HAnimDisplacer& HAnimDisplacer127 =  HAnimDisplacer();
HAnimDisplacer127.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer127.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer127.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer127.setDisplacements(new float[]{0.0,-0.0368,0.8373,0.0,0.6483,1.2483,0.0,0.5214,1.2487,0.0,-0.0368,0.8373,0.0,-0.0368,0.8373,0.0,0.5214,1.2487}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer127);

HAnimDisplacer& HAnimDisplacer128 =  HAnimDisplacer();
HAnimDisplacer128.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer128.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer128.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer128.setDisplacements(new float[]{0.2644,-0.7179,0.8231,0.0,-0.5998,0.7017,-0.1012,-0.5994,0.7017,-0.2644,-0.7179,0.8231,0.0,-0.7931,1.0829,0.1012,-0.5994,0.7017}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer128);

HAnimDisplacer& HAnimDisplacer129 =  HAnimDisplacer();
HAnimDisplacer129.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer129.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipPressor"));
HAnimDisplacer129.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer129.setDisplacements(new float[]{0.0,-0.3795,0.1337,0.0,-0.21,0.0,0.0,-0.21,0.0,0.0,-0.3795,0.1337,0.0,-0.3795,0.1337,0.0,-0.21,0.0}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer129);

HAnimDisplacer& HAnimDisplacer130 =  HAnimDisplacer();
HAnimDisplacer130.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer130.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer130.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer130.setDisplacements(new float[]{0.0,-0.3959,0.8591,0.0,-0.2496,0.9753,0.0,-0.2496,0.9749,0.0,-0.3959,0.8591,0.0,-0.3959,0.8591,0.0,-0.2496,0.9749}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer130);

HAnimDisplacer& HAnimDisplacer131 =  HAnimDisplacer();
HAnimDisplacer131.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer131.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipsPart"));
HAnimDisplacer131.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer131.setDisplacements(new float[]{0.0,-0.432,0.0434,0.0,-0.4303,-0.0301,0.0,-0.4133,-0.0173,0.0,-0.432,0.0434,0.0,-0.432,0.0434,0.0,-0.4133,-0.0173}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer131);

HAnimDisplacer& HAnimDisplacer132 =  HAnimDisplacer();
HAnimDisplacer132.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer132.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer132.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer132.setDisplacements(new float[]{0.0,-0.0595,0.1828,0.0,0.7882,0.1993,0.0,0.633,0.3625,0.0,-0.0595,0.1828,0.0,-0.0595,0.1828,0.0,0.633,0.3625}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer132);

HAnimDisplacer& HAnimDisplacer133 =  HAnimDisplacer();
HAnimDisplacer133.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer133.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer133.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer133.setDisplacements(new float[]{-0.0415,-0.0581,1.0819,0.0,0.0357,0.8616,0.1609,0.0642,0.9154,0.0415,-0.0581,1.0819,0.0,-0.0581,1.0819,-0.1609,0.0642,0.9154}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer133);

HAnimDisplacer& HAnimDisplacer134 =  HAnimDisplacer();
HAnimDisplacer134.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer134.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"));
HAnimDisplacer134.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer134.setDisplacements(new float[]{0.0,-0.5686,0.0,0.0,-0.5688,0.0,0.0,-0.5685,0.0,0.0,-0.5686,0.0,0.0,-0.5686,0.0,0.0,-0.5685,0.0}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer134);

HAnimDisplacer& HAnimDisplacer135 =  HAnimDisplacer();
HAnimDisplacer135.X3DNode::setName(CString("center_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer135.setDEF(CString("Center_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer135.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer135.setDisplacements(new float[]{0.176,-2.4732,0.049,0.0,-2.4728,-0.0078,0.196,-2.4589,0.002,-0.176,-2.4732,0.049,0.0,-2.4732,0.049,-0.196,-2.4589,0.002}, 18);
HAnimSegment115.setDisplacers(HAnimDisplacer135);

HAnimJoint89.addChildren(&HAnimSegment115);

HAnimSegment& HAnimSegment136 =  HAnimSegment();
HAnimSegment136.X3DNode::setName(CString("chin"));
HAnimSegment136.setDEF(CString("hanim_Chin"));
Transform& Transform137 =  Transform();
Transform137.setDEF(CString("Chin_JinBlink"));
Transform137.setTranslation(new float[]{0.0,6.337,7.3});
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
Appearance139.setUSE(CString("BaseAppearance_JinBlink"));
Shape138.addChild(&Appearance139);

IndexedFaceSet& IndexedFaceSet140 =  IndexedFaceSet();
IndexedFaceSet140.setDEF(CString("Chin-FACES_JinBlink"));
IndexedFaceSet140.setCoordIndex(new int32_t[]{0,2,3,-1,0,3,12,-1,5,8,15,-1,2,0,16,-1,16,4,2,-1,7,9,12,-1,7,12,3,-1,5,15,1,-1,4,16,15,-1,15,8,4,-1,9,6,12,-1,0,11,10,-1,0,12,11,-1,13,15,14,-1,10,17,16,-1,16,0,10,-1,18,12,19,-1,18,11,12,-1,13,1,15,-1,17,14,15,-1,15,16,17,-1,19,12,6,-1}, 88);
IndexedFaceSet140.setCreaseAngle(3.14159);
IndexedFaceSet140.setSolid(false);
IndexedFaceSet140.setTexCoordIndex(new int32_t[]{0,7,8,-1,0,8,1,-1,2,3,4,-1,9,10,5,-1,5,6,9,-1,12,14,1,-1,12,1,8,-1,2,4,13,-1,6,5,4,-1,4,3,6,-1,14,11,1,-1,15,17,16,-1,15,18,17,-1,19,4,20,-1,21,22,5,-1,5,10,21,-1,23,18,24,-1,23,17,18,-1,19,13,4,-1,22,20,4,-1,4,5,22,-1,24,18,25,-1}, 88);
TextureCoordinate& TextureCoordinate141 =  TextureCoordinate();
TextureCoordinate141.setDEF(CString("Chin-TEXCOORD_JinBlink"));
TextureCoordinate141.setPoint(new float[]{0.258,0.6076,0.2606,0.6259,0.4255,0.614,0.4413,0.6101,0.4398,0.6078,0.4653,0.601,0.4571,0.6062,0.3118,0.6205,0.3041,0.631,0.467,0.6086,0.4742,0.6003,0.2557,0.6351,0.3007,0.651,0.4253,0.6099,0.2652,0.6384,0.258,0.6076,0.3118,0.6205,0.3041,0.631,0.2606,0.6259,0.4255,0.614,0.4413,0.6101,0.467,0.6086,0.4571,0.6062,0.3007,0.651,0.2652,0.6384,0.2557,0.6351}, 52);
IndexedFaceSet140.setTexCoord(&TextureCoordinate141);

Coordinate& Coordinate142 =  Coordinate();
Coordinate142.setDEF(CString("Chin_COORD_JinBlink"));
Coordinate142.setPoint(new float[]{0.0,-2.287,3.579,0.0,-0.1353,-6.353,3.657,-0.4253,2.123,3.345,0.9926,4.159,3.653,-0.9673,0.1176,5.33,0.7945,-6.311,0.0,1.438,6.353,3.006,2.287,5.134,4.492,-0.08641,-3.097,0.6344,1.617,6.096,-3.657,-0.4253,2.123,-3.345,0.9926,4.159,0.0,0.481,5.272,-5.33,0.7945,-6.311,-4.492,-0.08641,-3.097,0.0,-0.5988,-3.408,0.0,-2.111,1.781,-3.653,-0.9673,0.1176,-3.006,2.287,5.134,-0.6344,1.617,6.096}, 60);
IndexedFaceSet140.setCoord(&Coordinate142);

Shape138.setGeometry(&IndexedFaceSet140);

Transform137.addChild(&Shape138);

HAnimSegment136.addChild(&Transform137);

Coordinate& Coordinate143 =  Coordinate();
Coordinate143.setUSE(CString("Chin_COORD_JinBlink"));
HAnimSegment136.setCoord(&Coordinate143);

HAnimDisplacer& HAnimDisplacer144 =  HAnimDisplacer();
HAnimDisplacer144.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer144.setDEF(CString("Chin_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer144.setCoordIndex(new int32_t[]{6,7,9,12,18,19}, 6);
HAnimDisplacer144.setDisplacements(new float[]{0.0,0.937,0.466,0.63,1.322,0.106,0.0,0.79,0.466,0.0193,1.486,1.377,-0.591,1.322,0.106,0.0,0.79,0.466}, 18);
HAnimSegment136.setDisplacers(HAnimDisplacer144);

HAnimDisplacer& HAnimDisplacer145 =  HAnimDisplacer();
HAnimDisplacer145.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer145.setDEF(CString("Chin_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer145.setCoordIndex(new int32_t[]{6,7,9,12,18,19}, 6);
HAnimDisplacer145.setDisplacements(new float[]{0.0,0.751,0.364,0.0,-0.138,0.0,0.0,0.65,0.364,0.0,0.1317,0.0,0.0,-0.138,0.0,0.0,0.65,0.364}, 18);
HAnimSegment136.setDisplacers(HAnimDisplacer145);

HAnimDisplacer& HAnimDisplacer146 =  HAnimDisplacer();
HAnimDisplacer146.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer146.setDEF(CString("Chin_MorphInterpolator_JinDimpler"));
HAnimDisplacer146.setCoordIndex(new int32_t[]{6,7,9,12,18,19}, 6);
HAnimDisplacer146.setDisplacements(new float[]{0.0,0.756,0.88,0.378,0.396,0.152,0.0,0.633,0.88,0.0,1.094,1.766,-0.379,0.396,0.152,0.0,0.633,0.88}, 18);
HAnimSegment136.setDisplacers(HAnimDisplacer146);

HAnimDisplacer& HAnimDisplacer147 =  HAnimDisplacer();
HAnimDisplacer147.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer147.setDEF(CString("Chin_MorphInterpolator_JinJawDrop"));
HAnimDisplacer147.setCoordIndex(new int32_t[]{0,2,3,4,6,9,10,11,12,16,17,19}, 12);
HAnimDisplacer147.setDisplacements(new float[]{0.0,-0.615,0.0,0.0,-0.6157,0.0,0.0,-0.6157,0.0,0.0,-0.6157,0.0,0.0,-0.6159,0.0,0.0,-0.616,0.0,0.0,-0.6157,0.0,0.0,-0.6157,0.0,0.0,-0.6156,0.0,0.0,-0.616,0.0,0.0,-0.6157,0.0,0.0,-0.616,0.0}, 36);
HAnimSegment136.setDisplacers(HAnimDisplacer147);

HAnimDisplacer& HAnimDisplacer148 =  HAnimDisplacer();
HAnimDisplacer148.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer148.setDEF(CString("Chin_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer148.setCoordIndex(new int32_t[]{6,7,9,12,18,19}, 6);
HAnimDisplacer148.setDisplacements(new float[]{0.0,0.648,1.249,0.21,-0.702,0.077,0.0,0.521,1.248,0.0,0.993,2.287,-0.197,-0.702,0.077,0.0,0.521,1.248}, 18);
HAnimSegment136.setDisplacers(HAnimDisplacer148);

HAnimDisplacer& HAnimDisplacer149 =  HAnimDisplacer();
HAnimDisplacer149.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer149.setDEF(CString("Chin_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer149.setCoordIndex(new int32_t[]{16,17}, 2);
HAnimDisplacer149.setDisplacements(new float[]{1.176,0.13,-0.375,-1.176,0.13,-0.375}, 6);
HAnimSegment136.setDisplacers(HAnimDisplacer149);

HAnimDisplacer& HAnimDisplacer150 =  HAnimDisplacer();
HAnimDisplacer150.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer150.setDEF(CString("Chin_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer150.setCoordIndex(new int32_t[]{3,6,7,9,11,12,13,18,19}, 9);
HAnimDisplacer150.setDisplacements(new float[]{0.0,0.0,0.084,0.0,-0.5997,0.702,-0.835,0.0,1.063,-0.1012,-0.6,0.702,0.0,0.0,0.235,0.0,0.1001,0.333,0.0,0.0,0.152,0.835,0.0,1.063,0.1012,-0.6,0.702}, 27);
HAnimSegment136.setDisplacers(HAnimDisplacer150);

HAnimDisplacer& HAnimDisplacer151 =  HAnimDisplacer();
HAnimDisplacer151.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer151.setDEF(CString("Chin_MorphInterpolator_JinLipPressor"));
HAnimDisplacer151.setCoordIndex(new int32_t[]{6,9,19}, 3);
HAnimDisplacer151.setDisplacements(new float[]{0.0,-0.21,0.0,0.0,-0.21,0.0,0.0,-0.21,0.0}, 9);
HAnimSegment136.setDisplacers(HAnimDisplacer151);

HAnimDisplacer& HAnimDisplacer152 =  HAnimDisplacer();
HAnimDisplacer152.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer152.setDEF(CString("Chin_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer152.setCoordIndex(new int32_t[]{3,6,7,9,11,12,18,19}, 8);
HAnimDisplacer152.setDisplacements(new float[]{0.0,0.0,0.164,0.0,-0.25,0.975,-0.935,0.0,0.516,0.0,-0.25,0.975,0.0,0.0,0.164,0.0,0.0,0.884,0.91,0.0,0.459,0.0,-0.25,0.975}, 24);
HAnimSegment136.setDisplacers(HAnimDisplacer152);

HAnimDisplacer& HAnimDisplacer153 =  HAnimDisplacer();
HAnimDisplacer153.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer153.setDEF(CString("Chin_MorphInterpolator_JinLipsPart"));
HAnimDisplacer153.setCoordIndex(new int32_t[]{3,6,9,11,12,19}, 6);
HAnimDisplacer153.setDisplacements(new float[]{0.0,-0.0829,-0.001,0.0,-0.431,-0.03,0.0,-0.413,-0.017,0.0,-0.0829,-0.001,0.0,-0.2735,-0.056,0.0,-0.413,-0.017}, 18);
HAnimSegment136.setDisplacers(HAnimDisplacer153);

HAnimDisplacer& HAnimDisplacer154 =  HAnimDisplacer();
HAnimDisplacer154.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer154.setDEF(CString("Chin_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer154.setCoordIndex(new int32_t[]{7,18}, 2);
HAnimDisplacer154.setDisplacements(new float[]{0.898,0.009,0.025,-0.974,0.009,0.025}, 6);
HAnimSegment136.setDisplacers(HAnimDisplacer154);

HAnimDisplacer& HAnimDisplacer155 =  HAnimDisplacer();
HAnimDisplacer155.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer155.setDEF(CString("Chin_MorphInterpolator_JinLipSuck"));
HAnimDisplacer155.setCoordIndex(new int32_t[]{6,7,9,18,19}, 5);
HAnimDisplacer155.setDisplacements(new float[]{0.0,0.788,0.2,0.125,0.0,0.0,0.0,0.633,0.362,-0.125,0.0,0.0,0.0,0.633,0.362}, 15);
HAnimSegment136.setDisplacers(HAnimDisplacer155);

HAnimDisplacer& HAnimDisplacer156 =  HAnimDisplacer();
HAnimDisplacer156.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer156.setDEF(CString("Chin_MorphInterpolator_JinLipTightener"));
HAnimDisplacer156.setCoordIndex(new int32_t[]{6,7,9,12,18,19}, 6);
HAnimDisplacer156.setDisplacements(new float[]{0.0,0.036,0.862,-0.521,0.17,1.038,0.1609,0.064,0.915,0.0,0.1109,0.288,0.521,0.17,1.038,-0.1609,0.064,0.915}, 18);
HAnimSegment136.setDisplacers(HAnimDisplacer156);

HAnimDisplacer& HAnimDisplacer157 =  HAnimDisplacer();
HAnimDisplacer157.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer157.setDEF(CString("Chin_MorphInterpolator_JinLowerLipDepressor"));
HAnimDisplacer157.setCoordIndex(new int32_t[]{6,9,12,19}, 4);
HAnimDisplacer157.setDisplacements(new float[]{0.0,-0.5688,0.0,0.0,-0.569,0.0,0.0,-0.5685,0.0,0.0,-0.569,0.0}, 12);
HAnimSegment136.setDisplacers(HAnimDisplacer157);

HAnimDisplacer& HAnimDisplacer158 =  HAnimDisplacer();
HAnimDisplacer158.X3DNode::setName(CString("chin_morphinterpolator"));
HAnimDisplacer158.setDEF(CString("Chin_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer158.setCoordIndex(new int32_t[]{0,2,3,4,6,7,8,9,10,11,12,14,15,16,17,18,19}, 17);
HAnimDisplacer158.setDisplacements(new float[]{0.0,-1.616,-0.19,0.0,-2.0337,-0.088,0.0,-2.0116,-0.01,0.0,-1.9277,-0.1141,0.0,-2.473,-0.007,0.0,-0.737,0.0,0.0,-1.0116,-0.024,0.196,-2.4593,0.002,0.0,-2.0337,-0.088,0.0,-2.0116,-0.01,0.0,-2.066,-0.039,0.0,-0.8165,0.0,0.0,-1.2392,-0.041,0.0,-2.228,-0.187,0.0,-1.5747,-0.1141,0.0,-0.737,0.0,-0.196,-2.4593,0.002}, 51);
HAnimSegment136.setDisplacers(HAnimDisplacer158);

HAnimJoint89.addChildren(&HAnimSegment136);

HAnimSegment& HAnimSegment159 =  HAnimSegment();
HAnimSegment159.X3DNode::setName(CString("glabella"));
HAnimSegment159.setDEF(CString("hanim_Glabella"));
Transform& Transform160 =  Transform();
Transform160.setDEF(CString("Glabella_JinBlink"));
Transform160.setTranslation(new float[]{0.0,18.93,15.66});
Shape& Shape161 =  Shape();
Appearance& Appearance162 =  Appearance();
Appearance162.setUSE(CString("BaseAppearance_JinBlink"));
Shape161.addChild(&Appearance162);

IndexedFaceSet& IndexedFaceSet163 =  IndexedFaceSet();
IndexedFaceSet163.setDEF(CString("Glabella-FACES_JinBlink"));
IndexedFaceSet163.setCoordIndex(new int32_t[]{0,2,1,-1,1,5,0,-1,5,1,3,-1,3,7,5,-1,0,5,4,-1,4,6,0,-1,5,7,8,-1,8,4,5,-1}, 32);
IndexedFaceSet163.setCreaseAngle(3.14159);
IndexedFaceSet163.setSolid(false);
IndexedFaceSet163.setTexCoordIndex(new int32_t[]{2,4,3,-1,3,0,2,-1,0,3,5,-1,5,1,0,-1,8,7,6,-1,6,9,8,-1,7,10,11,-1,11,6,7,-1}, 32);
TextureCoordinate& TextureCoordinate164 =  TextureCoordinate();
TextureCoordinate164.setDEF(CString("Glabella-TEXCOORD_JinBlink"));
TextureCoordinate164.setPoint(new float[]{0.2441,0.8403,0.2442,0.8727,0.2441,0.816,0.274,0.8322,0.2534,0.8152,0.2728,0.8741,0.274,0.8322,0.2441,0.8403,0.2441,0.816,0.2534,0.8152,0.2442,0.8727,0.2728,0.8741}, 24);
IndexedFaceSet163.setTexCoord(&TextureCoordinate164);

Coordinate& Coordinate165 =  Coordinate();
Coordinate165.setDEF(CString("Glabella_COORD_JinBlink"));
Coordinate165.setPoint(new float[]{0.0,-1.552,-0.8705,1.587,-0.693,0.1291,0.4273,-1.569,-0.9219,1.516,1.569,0.2705,-1.587,-0.693,0.1291,0.0,-0.2611,0.9219,-0.4273,-1.569,-0.9219,0.0,1.499,0.9062,-1.516,1.569,0.2705}, 27);
IndexedFaceSet163.setCoord(&Coordinate165);

Shape161.setGeometry(&IndexedFaceSet163);

Transform160.addChild(&Shape161);

HAnimSegment159.addChild(&Transform160);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setUSE(CString("Glabella_COORD_JinBlink"));
HAnimSegment159.setCoord(&Coordinate166);

HAnimDisplacer& HAnimDisplacer167 =  HAnimDisplacer();
HAnimDisplacer167.X3DNode::setName(CString("glabella_morphinterpolator"));
HAnimDisplacer167.setDEF(CString("Glabella_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer167.setCoordIndex(new int32_t[]{1,4}, 2);
HAnimDisplacer167.setDisplacements(new float[]{-0.332,-0.414,0.0,0.303,-0.395,0.0}, 6);
HAnimSegment159.setDisplacers(HAnimDisplacer167);

HAnimDisplacer& HAnimDisplacer168 =  HAnimDisplacer();
HAnimDisplacer168.X3DNode::setName(CString("glabella_morphinterpolator"));
HAnimDisplacer168.setDEF(CString("Glabella_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer168.setCoordIndex(new int32_t[]{1,4}, 2);
HAnimDisplacer168.setDisplacements(new float[]{0.0,0.3656,0.0,0.0,0.3842,0.0}, 6);
HAnimSegment159.setDisplacers(HAnimDisplacer168);

HAnimJoint89.addChildren(&HAnimSegment159);

HAnimSegment& HAnimSegment169 =  HAnimSegment();
HAnimSegment169.X3DNode::setName(CString("left_bulbar_conjunctiva"));
HAnimSegment169.setDEF(CString("hanim_Left_bulbar_conjunctiva"));
Transform& Transform170 =  Transform();
Transform170.setDEF(CString("Left_bulbar_conjunctiva_JinBlink"));
Transform170.setTranslation(new float[]{5.794,17.61,11.15});
Shape& Shape171 =  Shape();
Appearance& Appearance172 =  Appearance();
Appearance172.setUSE(CString("BaseAppearance_JinBlink"));
Shape171.addChild(&Appearance172);

IndexedFaceSet& IndexedFaceSet173 =  IndexedFaceSet();
IndexedFaceSet173.setDEF(CString("Left_bulbar_conjunctiva-FACES_JinBlink"));
IndexedFaceSet173.setCoordIndex(new int32_t[]{6,7,1,-1,1,3,6,-1,0,10,26,-1,26,2,0,-1,10,0,8,-1,11,5,23,-1,7,12,24,-1,8,0,2,-1,8,2,23,-1,4,9,19,-1,19,14,4,-1,3,4,14,-1,14,13,3,-1,25,12,22,-1,11,25,22,-1,11,22,21,-1,5,11,21,-1,21,15,5,-1,6,3,13,-1,13,16,6,-1,12,7,17,-1,17,22,12,-1,8,5,15,-1,15,18,8,-1,7,6,16,-1,16,17,7,-1,10,20,19,-1,19,26,10,-1,10,8,18,-1,18,20,10,-1,23,5,8,-1,24,1,7,-1,24,12,25,-1,19,9,26,-1,26,9,2,-1}, 140);
IndexedFaceSet173.setCreaseAngle(3.14159);
IndexedFaceSet173.setSolid(false);
IndexedFaceSet173.setTexCoordIndex(new int32_t[]{7,8,0,-1,0,27,7,-1,2,11,29,-1,29,1,2,-1,11,2,9,-1,12,5,25,-1,8,13,26,-1,9,2,1,-1,9,1,25,-1,4,10,14,-1,14,15,4,-1,3,4,15,-1,15,16,3,-1,28,13,17,-1,12,28,17,-1,12,17,18,-1,5,12,18,-1,18,19,5,-1,6,3,16,-1,16,20,6,-1,13,8,21,-1,21,17,13,-1,9,5,19,-1,19,22,9,-1,8,7,23,-1,23,21,8,-1,11,24,14,-1,14,29,11,-1,11,9,22,-1,22,24,11,-1,25,5,9,-1,26,0,8,-1,26,13,28,-1,14,10,29,-1,29,10,1,-1}, 140);
TextureCoordinate& TextureCoordinate174 =  TextureCoordinate();
TextureCoordinate174.setDEF(CString("Left_bulbar_conjunctiva-TEXCOORD_JinBlink"));
TextureCoordinate174.setPoint(new float[]{0.328,0.824,0.3871,0.8321,0.4052,0.8221,0.3258,0.833,0.3487,0.8409,0.3916,0.7984,0.2983,0.8142,0.2981,0.8094,0.309,0.8013,0.4011,0.8053,0.385,0.8438,0.4198,0.8261,0.3777,0.7936,0.3315,0.7948,0.3885,0.8436,0.3487,0.8409,0.3206,0.8292,0.3315,0.7948,0.372,0.7925,0.3869,0.7967,0.2983,0.8142,0.309,0.8013,0.3966,0.8018,0.2981,0.8094,0.4198,0.8261,0.3889,0.8064,0.3322,0.8026,0.3307,0.8316,0.3442,0.7934,0.3915,0.8393}, 60);
IndexedFaceSet173.setTexCoord(&TextureCoordinate174);

Coordinate& Coordinate175 =  Coordinate();
Coordinate175.setDEF(CString("Left_bulbar_conjunctiva_COORD_JinBlink"));
Coordinate175.setPoint(new float[]{2.76,0.0973,-0.8547,-1.347,0.2034,2.463,1.784,0.6812,0.4382,-1.252,0.6995,2.521,-0.2686,1.16,2.287,2.036,-1.163,-0.4716,-2.858,-0.5459,2.699,-2.35,-1.007,2.159,2.632,-0.8129,-0.7113,1.577,1.203,0.9703,3.566,0.2646,-1.27,1.305,-1.43,0.2687,-1.132,-1.383,1.574,-2.475,0.7643,1.73,-0.4787,1.699,1.381,1.844,-1.377,-0.8846,-4.008,-0.6268,1.793,-3.316,-1.256,1.253,2.512,-0.9908,-1.342,2.026,1.768,-0.3396,4.008,0.4783,-2.699,1.039,-1.688,-0.4347,-1.656,-1.768,0.6681,1.878,-0.7347,-0.1728,-1.108,-0.9679,1.714,-0.4715,-1.396,1.218,1.925,1.039,0.5784}, 81);
IndexedFaceSet173.setCoord(&Coordinate175);

Shape171.setGeometry(&IndexedFaceSet173);

Transform170.addChild(&Shape171);

HAnimSegment169.addChild(&Transform170);

Coordinate& Coordinate176 =  Coordinate();
Coordinate176.setUSE(CString("Left_bulbar_conjunctiva_COORD_JinBlink"));
HAnimSegment169.setCoord(&Coordinate176);

HAnimDisplacer& HAnimDisplacer177 =  HAnimDisplacer();
HAnimDisplacer177.X3DNode::setName(CString("left_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer177.setDEF(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer177.setCoordIndex(new int32_t[]{3,4,14}, 3);
HAnimDisplacer177.setDisplacements(new float[]{0.0,-0.0785,0.0,0.0,-0.078,0.0,-0.5075,-0.499,0.0}, 9);
HAnimSegment169.setDisplacers(HAnimDisplacer177);

HAnimDisplacer& HAnimDisplacer178 =  HAnimDisplacer();
HAnimDisplacer178.X3DNode::setName(CString("left_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer178.setDEF(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer178.setCoordIndex(new int32_t[]{14}, 1);
HAnimDisplacer178.setDisplacements(new float[]{0.0,0.366,0.0}, 3);
HAnimSegment169.setDisplacers(HAnimDisplacer178);

HAnimDisplacer& HAnimDisplacer179 =  HAnimDisplacer();
HAnimDisplacer179.X3DNode::setName(CString("left_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer179.setDEF(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"));
HAnimDisplacer179.setCoordIndex(new int32_t[]{3,4,5,7,8,9,11,12,15,25,26}, 11);
HAnimDisplacer179.setDisplacements(new float[]{0.0,-0.354,0.0,0.0,-0.354,0.0,0.0,0.3085,0.0,0.0,0.096,0.0,-0.09,0.209,0.0,0.0,-0.354,0.0,0.0,0.309,0.0,0.0,0.152,0.0,0.0,0.151,0.0,0.0,0.151,0.0,0.0,-0.3541,0.0}, 33);
HAnimSegment169.setDisplacers(HAnimDisplacer179);

HAnimDisplacer& HAnimDisplacer180 =  HAnimDisplacer();
HAnimDisplacer180.X3DNode::setName(CString("left_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer180.setDEF(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer180.setCoordIndex(new int32_t[]{3,4,6,9,26}, 5);
HAnimDisplacer180.setDisplacements(new float[]{0.0,0.4975,0.0,0.0,0.498,0.0,0.0,0.4976,0.0,0.0,0.498,0.0,0.0,0.497,0.0}, 15);
HAnimSegment169.setDisplacers(HAnimDisplacer180);

HAnimJoint89.addChildren(&HAnimSegment169);

HAnimSegment& HAnimSegment181 =  HAnimSegment();
HAnimSegment181.X3DNode::setName(CString("left_cheek"));
HAnimSegment181.setDEF(CString("hanim_Left_cheek"));
Transform& Transform182 =  Transform();
Transform182.setDEF(CString("Left_cheek_JinBlink"));
Transform182.setTranslation(new float[]{6.927,11.97,7.646});
Shape& Shape183 =  Shape();
Appearance& Appearance184 =  Appearance();
Appearance184.setUSE(CString("BaseAppearance_JinBlink"));
Shape183.addChild(&Appearance184);

IndexedFaceSet& IndexedFaceSet185 =  IndexedFaceSet();
IndexedFaceSet185.setDEF(CString("Left_cheek-FACES_JinBlink"));
IndexedFaceSet185.setCoordIndex(new int32_t[]{1,17,19,-1,20,1,19,-1,14,19,13,-1,19,17,13,-1,13,2,14,-1,3,14,2,-1,34,18,4,-1,4,32,34,-1,31,32,4,-1,4,10,31,-1,15,14,3,-1,17,12,13,-1,12,10,4,-1,4,13,12,-1,2,5,3,-1,13,4,2,-1,24,26,25,-1,25,11,24,-1,24,11,7,-1,7,29,24,-1,6,8,12,-1,12,17,6,-1,10,9,30,-1,30,31,10,-1,12,8,9,-1,9,10,12,-1,18,34,5,-1,2,18,5,-1,4,18,2,-1,19,14,21,-1,14,22,16,-1,16,21,14,-1,0,19,21,-1,14,15,22,-1,6,17,28,-1,28,27,6,-1,28,17,1,-1,29,23,24,-1,7,11,31,-1,31,30,7,-1,11,25,33,-1,11,33,32,-1,31,11,32,-1,32,33,34,-1}, 176);
IndexedFaceSet185.setCreaseAngle(3.14159);
IndexedFaceSet185.setSolid(false);
IndexedFaceSet185.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,2,5,-1,2,1,5,-1,5,6,4,-1,7,4,6,-1,39,24,13,-1,13,37,39,-1,36,37,13,-1,13,15,36,-1,8,4,7,-1,18,17,16,-1,17,15,13,-1,13,16,17,-1,19,11,12,-1,16,13,19,-1,28,30,29,-1,29,14,28,-1,28,14,20,-1,20,34,28,-1,21,22,17,-1,17,18,21,-1,15,23,35,-1,35,36,15,-1,17,22,23,-1,23,15,17,-1,24,39,11,-1,19,24,11,-1,13,24,19,-1,2,4,9,-1,4,10,25,-1,25,9,4,-1,26,2,9,-1,4,8,10,-1,21,18,33,-1,33,31,21,-1,32,1,0,-1,34,27,28,-1,20,14,36,-1,36,35,20,-1,14,29,38,-1,14,38,37,-1,36,14,37,-1,37,38,39,-1}, 176);
TextureCoordinate& TextureCoordinate186 =  TextureCoordinate();
TextureCoordinate186.setDEF(CString("Left_cheek-TEXCOORD_JinBlink"));
TextureCoordinate186.setPoint(new float[]{0.44,0.6625,0.4517,0.649,0.4392,0.6356,0.4352,0.6651,0.4454,0.6184,0.4606,0.6289,0.464,0.6174,0.467,0.6086,0.4571,0.6062,0.4273,0.6228,0.4413,0.6101,0.3041,0.631,0.3118,0.6205,0.3484,0.6888,0.2881,0.7397,0.3623,0.7239,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.301,0.7815,0.4279,0.7939,0.3993,0.7753,0.3692,0.7714,0.3226,0.6487,0.4255,0.614,0.4239,0.6387,0.2671,0.7978,0.268,0.7555,0.2727,0.7092,0.2641,0.7133,0.4335,0.819,0.4547,0.661,0.4572,0.8171,0.2845,0.7889,0.3287,0.7742,0.3232,0.7322,0.3144,0.6917,0.2788,0.6949,0.3007,0.651}, 80);
IndexedFaceSet185.setTexCoord(&TextureCoordinate186);

Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setDEF(CString("Left_cheek_COORD_JinBlink"));
Coordinate187.setPoint(new float[]{5.868,0.6861,-6.977,5.046,6.009,-3.719,-0.5602,-4.076,1.16,-3.27,-6.054,1.778,-1.388,-1.337,4.299,-3.582,-4.636,3.814,2.834,4.241,1.178,-3.857,3.618,5.665,1.296,3.319,2.709,-0.2365,3.054,3.875,-0.6487,0.5238,4.348,-4.592,1.365,6.024,2.001,0.9701,1.578,1.819,-1.515,0.4861,0.1831,-3.863,-2.615,-3.274,-6.596,-0.2282,-1.597,-4.834,-6.657,4.101,2.99,-1.336,-2.758,-3.467,4.304,3.42,-0.01057,-3.863,5.261,6.596,-4.686,1.153,-2.865,-6.293,-2.435,-5.715,-3.442,-5.749,4.473,6.621,-5.809,2.217,6.673,-5.409,-0.2562,6.321,-5.868,-0.0462,6.977,3.128,5.574,1.136,4.273,5.681,-0.7129,-4.763,4.022,6.147,-2.394,3.215,4.911,-2.727,0.9674,5.231,-3.19,-1.179,5.185,-5.082,-1.013,6.115,-3.921,-3.342,4.788}, 105);
IndexedFaceSet185.setCoord(&Coordinate187);

Shape183.setGeometry(&IndexedFaceSet185);

Transform182.addChild(&Shape183);

HAnimSegment181.addChild(&Transform182);

Coordinate& Coordinate188 =  Coordinate();
Coordinate188.setUSE(CString("Left_cheek_COORD_JinBlink"));
HAnimSegment181.setCoord(&Coordinate188);

HAnimDisplacer& HAnimDisplacer189 =  HAnimDisplacer();
HAnimDisplacer189.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer189.setDEF(CString("Left_cheek_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer189.setCoordIndex(new int32_t[]{4,10,11,25,26,31,32,33,34}, 9);
HAnimDisplacer189.setDisplacements(new float[]{0.0,0.8378,0.0,0.0,0.8382,0.0,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.8376,0.0,0.0,0.8381,0.0,0.0,0.8383,0.0,0.63,1.322,0.107}, 27);
HAnimSegment181.setDisplacers(HAnimDisplacer189);

HAnimDisplacer& HAnimDisplacer190 =  HAnimDisplacer();
HAnimDisplacer190.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer190.setDEF(CString("Left_cheek_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer190.setCoordIndex(new int32_t[]{4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32}, 16);
HAnimDisplacer190.setDisplacements(new float[]{0.6734,0.6214,0.174,0.0,0.1,0.079,0.0,0.134,-0.107,0.299,0.38,-0.184,0.0,0.268,0.099,0.0294,1.7512,0.523,0.255,1.233,0.181,-0.032,1.5769,1.007,0.588,1.4349,0.0324,0.0,0.462,0.3972,0.0,0.6417,0.0,0.0,0.754,0.0,0.0,0.067,-0.082,0.0,0.268,0.0,0.001,1.3996,0.448,0.0,0.2915,0.183}, 48);
HAnimSegment181.setDisplacers(HAnimDisplacer190);

HAnimDisplacer& HAnimDisplacer191 =  HAnimDisplacer();
HAnimDisplacer191.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer191.setDEF(CString("Left_cheek_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer191.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer191.setDisplacements(new float[]{0.0,-0.137,0.0}, 3);
HAnimSegment181.setDisplacers(HAnimDisplacer191);

HAnimDisplacer& HAnimDisplacer192 =  HAnimDisplacer();
HAnimDisplacer192.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer192.setDEF(CString("Left_cheek_MorphInterpolator_JinDimpler"));
HAnimDisplacer192.setCoordIndex(new int32_t[]{18,34}, 2);
HAnimDisplacer192.setDisplacements(new float[]{-0.407,0.417,0.179,0.378,0.396,0.153}, 6);
HAnimSegment181.setDisplacers(HAnimDisplacer192);

HAnimDisplacer& HAnimDisplacer193 =  HAnimDisplacer();
HAnimDisplacer193.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer193.setDEF(CString("Left_cheek_MorphInterpolator_JinJawDrop"));
HAnimDisplacer193.setCoordIndex(new int32_t[]{3,5,15}, 3);
HAnimDisplacer193.setDisplacements(new float[]{0.0,-0.616,0.0,0.0,-0.616,0.0,0.0,-0.616,0.0}, 9);
HAnimSegment181.setDisplacers(HAnimDisplacer193);

HAnimDisplacer& HAnimDisplacer194 =  HAnimDisplacer();
HAnimDisplacer194.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer194.setDEF(CString("Left_cheek_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer194.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer194.setDisplacements(new float[]{0.211,-0.702,0.078}, 3);
HAnimSegment181.setDisplacers(HAnimDisplacer194);

HAnimDisplacer& HAnimDisplacer195 =  HAnimDisplacer();
HAnimDisplacer195.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer195.setDEF(CString("Left_cheek_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer195.setCoordIndex(new int32_t[]{1,8,12,34}, 4);
HAnimDisplacer195.setDisplacements(new float[]{0.473,-0.03,-0.642,1.14,0.0,-1.022,0.583,-0.05,-0.383,1.176,0.13,-0.375}, 12);
HAnimSegment181.setDisplacers(HAnimDisplacer195);

HAnimDisplacer& HAnimDisplacer196 =  HAnimDisplacer();
HAnimDisplacer196.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer196.setDEF(CString("Left_cheek_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer196.setCoordIndex(new int32_t[]{5,18,32,33,34}, 5);
HAnimDisplacer196.setDisplacements(new float[]{0.0,0.0,0.083,0.0,0.0,0.084,0.0,0.0,0.414,0.0,0.0,0.109,-0.835,0.0,1.064}, 15);
HAnimSegment181.setDisplacers(HAnimDisplacer196);

HAnimDisplacer& HAnimDisplacer197 =  HAnimDisplacer();
HAnimDisplacer197.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer197.setDEF(CString("Left_cheek_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer197.setCoordIndex(new int32_t[]{5,34}, 2);
HAnimDisplacer197.setDisplacements(new float[]{0.0,0.0,0.163,-0.935,0.0,0.517}, 6);
HAnimSegment181.setDisplacers(HAnimDisplacer197);

HAnimDisplacer& HAnimDisplacer198 =  HAnimDisplacer();
HAnimDisplacer198.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer198.setDEF(CString("Left_cheek_MorphInterpolator_JinLipsPart"));
HAnimDisplacer198.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer198.setDisplacements(new float[]{0.0,-0.083,-0.001}, 3);
HAnimSegment181.setDisplacers(HAnimDisplacer198);

HAnimDisplacer& HAnimDisplacer199 =  HAnimDisplacer();
HAnimDisplacer199.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer199.setDEF(CString("Left_cheek_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer199.setCoordIndex(new int32_t[]{18,34}, 2);
HAnimDisplacer199.setDisplacements(new float[]{1.26,-0.029,-0.124,0.898,0.009,0.026}, 6);
HAnimSegment181.setDisplacers(HAnimDisplacer199);

HAnimDisplacer& HAnimDisplacer200 =  HAnimDisplacer();
HAnimDisplacer200.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer200.setDEF(CString("Left_cheek_MorphInterpolator_JinLipSuck"));
HAnimDisplacer200.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer200.setDisplacements(new float[]{0.125,0.0,0.0}, 3);
HAnimSegment181.setDisplacers(HAnimDisplacer200);

HAnimDisplacer& HAnimDisplacer201 =  HAnimDisplacer();
HAnimDisplacer201.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer201.setDEF(CString("Left_cheek_MorphInterpolator_JinLipTightener"));
HAnimDisplacer201.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer201.setDisplacements(new float[]{-0.521,0.17,1.038}, 3);
HAnimSegment181.setDisplacers(HAnimDisplacer201);

HAnimDisplacer& HAnimDisplacer202 =  HAnimDisplacer();
HAnimDisplacer202.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer202.setDEF(CString("Left_cheek_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer202.setCoordIndex(new int32_t[]{2,3,5,14,15,18,22,34}, 8);
HAnimDisplacer202.setDisplacements(new float[]{0.0,-0.909,0.074,0.0,-2.034,-0.089,0.0,-2.011,-0.01,0.0,-0.929,0.079,0.0,-1.927,-0.1141,0.0,-1.34,0.088,0.0,-1.011,-0.024,0.0,-0.736,0.0}, 24);
HAnimSegment181.setDisplacers(HAnimDisplacer202);

HAnimDisplacer& HAnimDisplacer203 =  HAnimDisplacer();
HAnimDisplacer203.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer203.setDEF(CString("Left_cheek_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer203.setCoordIndex(new int32_t[]{25,26,32,33}, 4);
HAnimDisplacer203.setDisplacements(new float[]{-0.078,0.5523,0.0,0.0,0.376,0.0,-0.146,0.2645,0.0,0.0,0.4707,0.0}, 12);
HAnimSegment181.setDisplacers(HAnimDisplacer203);

HAnimDisplacer& HAnimDisplacer204 =  HAnimDisplacer();
HAnimDisplacer204.X3DNode::setName(CString("left_cheek_morphinterpolator"));
HAnimDisplacer204.setDEF(CString("Left_cheek_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer204.setCoordIndex(new int32_t[]{25,26,33}, 3);
HAnimDisplacer204.setDisplacements(new float[]{0.0,0.2937,0.0,0.0,0.2937,0.0,0.0,0.5019,0.0}, 9);
HAnimSegment181.setDisplacers(HAnimDisplacer204);

HAnimJoint89.addChildren(&HAnimSegment181);

HAnimSegment& HAnimSegment205 =  HAnimSegment();
HAnimSegment205.X3DNode::setName(CString("left_dorsum"));
HAnimSegment205.setDEF(CString("hanim_Left_dorsum"));
Transform& Transform206 =  Transform();
Transform206.setDEF(CString("Left_dorsum_JinBlink"));
Transform206.setTranslation(new float[]{0.7065,14.64,14.87});
Shape& Shape207 =  Shape();
Appearance& Appearance208 =  Appearance();
Appearance208.setUSE(CString("BaseAppearance_JinBlink"));
Shape207.addChild(&Appearance208);

IndexedFaceSet& IndexedFaceSet209 =  IndexedFaceSet();
IndexedFaceSet209.setDEF(CString("Left_dorsum-FACES_JinBlink"));
IndexedFaceSet209.setCoordIndex(new int32_t[]{3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1}, 16);
IndexedFaceSet209.setCreaseAngle(3.14159);
IndexedFaceSet209.setSolid(false);
IndexedFaceSet209.setTexCoordIndex(new int32_t[]{3,0,1,-1,1,4,3,-1,5,4,1,-1,1,2,5,-1}, 16);
TextureCoordinate& TextureCoordinate210 =  TextureCoordinate();
TextureCoordinate210.setDEF(CString("Left_dorsum-TEXCOORD_JinBlink"));
TextureCoordinate210.setPoint(new float[]{0.2534,0.8152,0.2534,0.767,0.2528,0.7186,0.2671,0.7978,0.268,0.7555,0.2641,0.7133}, 12);
IndexedFaceSet209.setTexCoord(&TextureCoordinate210);

Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setDEF(CString("Left_dorsum_COORD_JinBlink"));
Coordinate211.setPoint(new float[]{-0.2793,2.722,-0.1346,-0.471,0.1584,-0.08532,-0.25,-2.447,0.6076,0.471,1.797,-0.6076,0.4116,-0.459,-0.556,0.352,-2.722,-0.252}, 18);
IndexedFaceSet209.setCoord(&Coordinate211);

Shape207.setGeometry(&IndexedFaceSet209);

Transform206.addChild(&Shape207);

HAnimSegment205.addChild(&Transform206);

Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setUSE(CString("Left_dorsum_COORD_JinBlink"));
HAnimSegment205.setCoord(&Coordinate212);

HAnimDisplacer& HAnimDisplacer213 =  HAnimDisplacer();
HAnimDisplacer213.X3DNode::setName(CString("left_dorsum_morphinterpolator"));
HAnimDisplacer213.setDEF(CString("Left_dorsum_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer213.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer213.setDisplacements(new float[]{0.0,0.838,0.0}, 3);
HAnimSegment205.setDisplacers(HAnimDisplacer213);

HAnimDisplacer& HAnimDisplacer214 =  HAnimDisplacer();
HAnimDisplacer214.X3DNode::setName(CString("left_dorsum_morphinterpolator"));
HAnimDisplacer214.setDEF(CString("Left_dorsum_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer214.setCoordIndex(new int32_t[]{4}, 1);
HAnimDisplacer214.setDisplacements(new float[]{0.0,0.7543,0.0}, 3);
HAnimSegment205.setDisplacers(HAnimDisplacer214);

HAnimDisplacer& HAnimDisplacer215 =  HAnimDisplacer();
HAnimDisplacer215.X3DNode::setName(CString("left_dorsum_morphinterpolator"));
HAnimDisplacer215.setDEF(CString("Left_dorsum_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer215.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer215.setDisplacements(new float[]{0.0,0.376,0.0}, 3);
HAnimSegment205.setDisplacers(HAnimDisplacer215);

HAnimDisplacer& HAnimDisplacer216 =  HAnimDisplacer();
HAnimDisplacer216.X3DNode::setName(CString("left_dorsum_morphinterpolator"));
HAnimDisplacer216.setDEF(CString("Left_dorsum_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer216.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer216.setDisplacements(new float[]{0.0,0.293,0.0}, 3);
HAnimSegment205.setDisplacers(HAnimDisplacer216);

HAnimJoint89.addChildren(&HAnimSegment205);

HAnimSegment& HAnimSegment217 =  HAnimSegment();
HAnimSegment217.X3DNode::setName(CString("left_ear"));
HAnimSegment217.setDEF(CString("hanim_Left_ear"));
Transform& Transform218 =  Transform();
Transform218.setDEF(CString("Left_ear_JinBlink"));
Transform218.setTranslation(new float[]{12.49,15.99,1.017});
Shape& Shape219 =  Shape();
Appearance& Appearance220 =  Appearance();
Appearance220.setUSE(CString("BaseAppearance_JinBlink"));
Shape219.addChild(&Appearance220);

IndexedFaceSet& IndexedFaceSet221 =  IndexedFaceSet();
IndexedFaceSet221.setDEF(CString("Left_ear-FACES_JinBlink"));
IndexedFaceSet221.setCoordIndex(new int32_t[]{6,2,0,-1,5,4,1,-1,1,2,5,-1,2,1,0,-1,0,3,7,-1,7,6,0,-1,4,3,0,-1,0,1,4,-1}, 32);
IndexedFaceSet221.setCreaseAngle(3.14159);
IndexedFaceSet221.setSolid(false);
IndexedFaceSet221.setTexCoordIndex(new int32_t[]{0,1,2,-1,4,5,3,-1,3,1,4,-1,1,3,2,-1,2,7,6,-1,6,0,2,-1,5,7,2,-1,2,3,5,-1}, 32);
TextureCoordinate& TextureCoordinate222 =  TextureCoordinate();
TextureCoordinate222.setDEF(CString("Left_ear-TEXCOORD_JinBlink"));
TextureCoordinate222.setPoint(new float[]{0.4392,0.6356,0.4239,0.6387,0.4239,0.6408,0.412,0.6504,0.4239,0.6648,0.4123,0.664,0.4352,0.6651,0.4267,0.6717}, 16);
IndexedFaceSet221.setTexCoord(&TextureCoordinate222);

Coordinate& Coordinate223 =  Coordinate();
Coordinate223.setDEF(CString("Left_ear_COORD_JinBlink"));
Coordinate223.setPoint(new float[]{1.104,-2.879,-0.3646,1.92,-0.7197,-2.765,0.3083,-3.342,-0.3477,1.674,4.039,0.222,2.14,2.313,-2.716,0.349,2.504,-0.3477,-2.14,-4.039,2.765,-0.2989,2.568,1.943}, 24);
IndexedFaceSet221.setCoord(&Coordinate223);

Shape219.setGeometry(&IndexedFaceSet221);

Transform218.addChild(&Shape219);

HAnimSegment217.addChild(&Transform218);

Coordinate& Coordinate224 =  Coordinate();
Coordinate224.setUSE(CString("Left_ear_COORD_JinBlink"));
HAnimSegment217.setCoord(&Coordinate224);

HAnimJoint89.addChildren(&HAnimSegment217);

HAnimSegment& HAnimSegment225 =  HAnimSegment();
HAnimSegment225.X3DNode::setName(CString("left_eyebrow"));
HAnimSegment225.setDEF(CString("hanim_Left_eyebrow"));
Transform& Transform226 =  Transform();
Transform226.setDEF(CString("Left_eyebrow_JinBlink"));
Transform226.setTranslation(new float[]{5.691,19.58,13.13});
Shape& Shape227 =  Shape();
Appearance& Appearance228 =  Appearance();
Appearance228.setUSE(CString("BaseAppearance_JinBlink"));
Shape227.addChild(&Appearance228);

IndexedFaceSet& IndexedFaceSet229 =  IndexedFaceSet();
IndexedFaceSet229.setDEF(CString("Left_eyebrow-FACES_JinBlink"));
IndexedFaceSet229.setCoordIndex(new int32_t[]{5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1}, 32);
IndexedFaceSet229.setCreaseAngle(3.14159);
IndexedFaceSet229.setSolid(false);
IndexedFaceSet229.setTexCoordIndex(new int32_t[]{5,1,7,-1,7,8,5,-1,6,0,4,-1,7,1,0,-1,0,6,7,-1,2,4,0,-1,0,3,2,-1,3,0,1,-1}, 32);
TextureCoordinate& TextureCoordinate230 =  TextureCoordinate();
TextureCoordinate230.setDEF(CString("Left_eyebrow-TEXCOORD_JinBlink"));
TextureCoordinate230.setPoint(new float[]{0.3395,0.8606,0.3992,0.8783,0.2728,0.8741,0.3391,0.876,0.274,0.8322,0.4299,0.8825,0.3402,0.8534,0.3979,0.8641,0.4266,0.8643}, 18);
IndexedFaceSet229.setTexCoord(&TextureCoordinate230);

Coordinate& Coordinate231 =  Coordinate();
Coordinate231.setDEF(CString("Left_eyebrow_COORD_JinBlink"));
Coordinate231.setPoint(new float[]{-0.6206,0.2925,1.523,2.547,1.129,-0.8682,-4.175,0.9255,2.806,-0.6464,1.103,1.5,-4.104,-1.337,2.665,4.175,1.337,-2.599,-0.6118,-0.2218,1.466,2.366,0.3082,-0.9723,4.011,0.3542,-2.806}, 27);
IndexedFaceSet229.setCoord(&Coordinate231);

Shape227.setGeometry(&IndexedFaceSet229);

Transform226.addChild(&Shape227);

HAnimSegment225.addChild(&Transform226);

Coordinate& Coordinate232 =  Coordinate();
Coordinate232.setUSE(CString("Left_eyebrow_COORD_JinBlink"));
HAnimSegment225.setCoord(&Coordinate232);

HAnimDisplacer& HAnimDisplacer233 =  HAnimDisplacer();
HAnimDisplacer233.X3DNode::setName(CString("left_eyebrow_morphinterpolator"));
HAnimDisplacer233.setDEF(CString("Left_eyebrow_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer233.setCoordIndex(new int32_t[]{0,1,3,4,5,6,7,8}, 8);
HAnimDisplacer233.setDisplacements(new float[]{-0.5074,-0.4985,0.0,0.0,-0.094,0.0,-0.5076,-0.4988,0.0,-0.332,-0.414,0.0,0.0,-0.094,0.0,-0.5072,-0.4985,0.0,0.0,-0.0941,0.0,0.0,-0.0942,0.0}, 24);
HAnimSegment225.setDisplacers(HAnimDisplacer233);

HAnimDisplacer& HAnimDisplacer234 =  HAnimDisplacer();
HAnimDisplacer234.X3DNode::setName(CString("left_eyebrow_morphinterpolator"));
HAnimDisplacer234.setDEF(CString("Left_eyebrow_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer234.setCoordIndex(new int32_t[]{0,1,3,4,6,7}, 6);
HAnimDisplacer234.setDisplacements(new float[]{0.0,0.3656,0.0,0.0,0.095,0.0,0.0,0.365,0.0,0.0,0.3657,0.0,0.0,0.3655,0.0,0.0,0.0945,0.0}, 18);
HAnimSegment225.setDisplacers(HAnimDisplacer234);

HAnimDisplacer& HAnimDisplacer235 =  HAnimDisplacer();
HAnimDisplacer235.X3DNode::setName(CString("left_eyebrow_morphinterpolator"));
HAnimDisplacer235.setDEF(CString("Left_eyebrow_MorphInterpolator_JinSquint"));
HAnimDisplacer235.setCoordIndex(new int32_t[]{7,8}, 2);
HAnimDisplacer235.setDisplacements(new float[]{0.0,-0.4631,0.0,0.0,-0.4632,0.0}, 6);
HAnimSegment225.setDisplacers(HAnimDisplacer235);

HAnimDisplacer& HAnimDisplacer236 =  HAnimDisplacer();
HAnimDisplacer236.X3DNode::setName(CString("left_eyebrow_morphinterpolator"));
HAnimDisplacer236.setDEF(CString("Left_eyebrow_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer236.setCoordIndex(new int32_t[]{6}, 1);
HAnimDisplacer236.setDisplacements(new float[]{0.0,0.4975,0.0}, 3);
HAnimSegment225.setDisplacers(HAnimDisplacer236);

HAnimJoint89.addChildren(&HAnimSegment225);

HAnimSegment& HAnimSegment237 =  HAnimSegment();
HAnimSegment237.X3DNode::setName(CString("left_forehead"));
HAnimSegment237.setDEF(CString("hanim_Left_forehead"));
Transform& Transform238 =  Transform();
Transform238.setDEF(CString("Left_forehead_JinBlink"));
Transform238.setTranslation(new float[]{6.652,27.61,9.229});
Shape& Shape239 =  Shape();
Appearance& Appearance240 =  Appearance();
Appearance240.setUSE(CString("BaseAppearance_JinBlink"));
Shape239.addChild(&Appearance240);

IndexedFaceSet& IndexedFaceSet241 =  IndexedFaceSet();
IndexedFaceSet241.setDEF(CString("Left_forehead-FACES_JinBlink"));
IndexedFaceSet241.setCoordIndex(new int32_t[]{1,9,13,-1,13,4,1,-1,3,2,9,-1,3,0,15,-1,15,0,14,-1,0,16,14,-1,1,20,16,-1,16,0,1,-1,3,15,17,-1,17,6,3,-1,2,3,6,-1,6,5,2,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,2,10,-1,10,13,9,-1,1,0,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,2,5,11,-1,11,10,2,-1,5,7,12,-1,12,11,5,-1}, 104);
IndexedFaceSet241.setCreaseAngle(3.14159);
IndexedFaceSet241.setSolid(false);
IndexedFaceSet241.setTexCoordIndex(new int32_t[]{1,9,13,-1,13,4,1,-1,3,0,9,-1,3,2,15,-1,15,2,14,-1,2,16,14,-1,1,20,16,-1,16,2,1,-1,3,15,17,-1,17,6,3,-1,0,3,6,-1,6,5,0,-1,6,17,18,-1,18,8,6,-1,5,6,8,-1,8,7,5,-1,9,0,10,-1,10,13,9,-1,1,2,3,-1,3,9,1,-1,1,4,19,-1,19,20,1,-1,0,5,11,-1,11,10,0,-1,5,7,12,-1,12,11,5,-1}, 104);
TextureCoordinate& TextureCoordinate242 =  TextureCoordinate();
TextureCoordinate242.setDEF(CString("Left_forehead-TEXCOORD_JinBlink"));
TextureCoordinate242.setPoint(new float[]{0.3563,0.9819,0.3371,0.9436,0.414,0.9365,0.428,0.9618,0.2706,0.9459,0.3807,0.9869,0.434,0.9653,0.3786,0.9951,0.4425,0.9551,0.3372,0.9707,0.3002,0.9788,0.3015,0.9807,0.3016,0.9833,0.2804,0.9652,0.4299,0.8825,0.4655,0.9081,0.3992,0.8783,0.4676,0.8967,0.465,0.9097,0.2728,0.8741,0.3391,0.876}, 42);
IndexedFaceSet241.setTexCoord(&TextureCoordinate242);

Coordinate& Coordinate243 =  Coordinate();
Coordinate243.setDEF(CString("Left_forehead_COORD_JinBlink"));
Coordinate243.setPoint(new float[]{2.366,-3.832,2.607,-1.721,-3.37,5.298,-0.9278,3.698,2.337,2.798,0.5048,1.078,-5.256,-3.235,6.945,0.1169,5.415,-1.676,3.513,2.123,-2.845,0.04584,5.238,-6.945,3.382,0.4603,-6.945,-1.306,1.607,4.614,-4.278,5.326,2.844,-4.148,6.951,-0.7431,-4.148,7.108,-6.945,-4.686,2.054,6.111,3.214,-6.697,1.298,4.876,-4.833,-1.108,1.586,-6.904,3.028,5.256,-4.053,-3.68,4.869,-4.024,-6.945,-5.136,-7.108,6.703,-1.607,-6.931,5.397}, 63);
IndexedFaceSet241.setCoord(&Coordinate243);

Shape239.setGeometry(&IndexedFaceSet241);

Transform238.addChild(&Shape239);

HAnimSegment237.addChild(&Transform238);

Coordinate& Coordinate244 =  Coordinate();
Coordinate244.setUSE(CString("Left_forehead_COORD_JinBlink"));
HAnimSegment237.setCoord(&Coordinate244);

HAnimDisplacer& HAnimDisplacer245 =  HAnimDisplacer();
HAnimDisplacer245.X3DNode::setName(CString("left_forehead_morphinterpolator"));
HAnimDisplacer245.setDEF(CString("Left_forehead_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer245.setCoordIndex(new int32_t[]{14,16,20}, 3);
HAnimDisplacer245.setDisplacements(new float[]{0.0,-0.094,0.0,0.0,-0.094,0.0,-0.508,-0.498,0.0}, 9);
HAnimSegment237.setDisplacers(HAnimDisplacer245);

HAnimDisplacer& HAnimDisplacer246 =  HAnimDisplacer();
HAnimDisplacer246.X3DNode::setName(CString("left_forehead_morphinterpolator"));
HAnimDisplacer246.setDEF(CString("Left_forehead_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer246.setCoordIndex(new int32_t[]{16,20}, 2);
HAnimDisplacer246.setDisplacements(new float[]{0.0,0.094,0.0,0.0,0.366,0.0}, 6);
HAnimSegment237.setDisplacers(HAnimDisplacer246);

HAnimJoint89.addChildren(&HAnimSegment237);

HAnimSegment& HAnimSegment247 =  HAnimSegment();
HAnimSegment247.X3DNode::setName(CString("left_lower_eyelid"));
HAnimSegment247.setDEF(CString("hanim_Left_lower_eyelid"));
Transform& Transform248 =  Transform();
Transform248.setDEF(CString("Left_lower_eyelid_JinBlink"));
Transform248.setTranslation(new float[]{6.11,16.45,11.32});
Shape& Shape249 =  Shape();
Appearance& Appearance250 =  Appearance();
Appearance250.setUSE(CString("BaseAppearance_JinBlink"));
Shape249.addChild(&Appearance250);

IndexedFaceSet& IndexedFaceSet251 =  IndexedFaceSet();
IndexedFaceSet251.setDEF(CString("Left_lower_eyelid-FACES_JinBlink"));
IndexedFaceSet251.setCoordIndex(new int32_t[]{8,3,10,-1,10,9,8,-1,3,8,7,-1,7,0,3,-1,13,14,6,-1,6,1,13,-1,0,7,5,-1,5,2,0,-1,11,2,5,-1,5,12,11,-1,4,1,6,-1,6,9,4,-1,10,4,9,-1}, 52);
IndexedFaceSet251.setCreaseAngle(3.14159);
IndexedFaceSet251.setSolid(false);
IndexedFaceSet251.setTexCoordIndex(new int32_t[]{8,0,10,-1,10,9,8,-1,0,8,7,-1,7,2,0,-1,13,14,6,-1,6,3,13,-1,2,7,5,-1,5,4,2,-1,11,4,5,-1,5,12,11,-1,1,3,6,-1,6,9,1,-1,10,1,9,-1}, 52);
TextureCoordinate& TextureCoordinate252 =  TextureCoordinate();
TextureCoordinate252.setDEF(CString("Left_lower_eyelid-TEXCOORD_JinBlink"));
TextureCoordinate252.setPoint(new float[]{0.3777,0.7936,0.3315,0.7948,0.3916,0.7984,0.309,0.8013,0.4011,0.8053,0.4279,0.7939,0.301,0.7815,0.3993,0.7753,0.3692,0.7714,0.3287,0.7742,0.344,0.7945,0.4198,0.8261,0.4335,0.819,0.2981,0.8094,0.2845,0.7889}, 30);
IndexedFaceSet251.setTexCoord(&TextureCoordinate252);

Coordinate& Coordinate253 =  Coordinate();
Coordinate253.setDEF(CString("Left_lower_eyelid_COORD_JinBlink"));
Coordinate253.setPoint(new float[]{1.719,-0.0007944,-0.6346,-2.666,0.1549,1.996,2.315,0.3494,-0.8744,0.989,-0.2676,0.1056,-1.449,-0.2205,1.411,3.651,-0.24,-2.494,-3.04,-0.8628,1.994,2.113,-1.162,-0.9625,0.5806,-1.427,0.2034,-1.577,-1.266,1.24,-0.7878,-0.2335,1.055,3.25,1.427,-1.433,3.946,1.094,-2.536,-3.174,0.6164,2.536,-3.946,-0.4586,2.476}, 45);
IndexedFaceSet251.setCoord(&Coordinate253);

Shape249.setGeometry(&IndexedFaceSet251);

Transform248.addChild(&Shape249);

HAnimSegment247.addChild(&Transform248);

Coordinate& Coordinate254 =  Coordinate();
Coordinate254.setUSE(CString("Left_lower_eyelid_COORD_JinBlink"));
HAnimSegment247.setCoord(&Coordinate254);

HAnimDisplacer& HAnimDisplacer255 =  HAnimDisplacer();
HAnimDisplacer255.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer255.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinBlink"));
HAnimDisplacer255.setCoordIndex(new int32_t[]{0,1,2,4}, 4);
HAnimDisplacer255.setDisplacements(new float[]{0.0,0.1171,0.1997,0.0,0.2271,0.251,0.0,0.1444,0.0565,-0.164,0.1045,0.25}, 12);
HAnimSegment247.setDisplacers(HAnimDisplacer255);

HAnimDisplacer& HAnimDisplacer256 =  HAnimDisplacer();
HAnimDisplacer256.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer256.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer256.setCoordIndex(new int32_t[]{5,6,7,8,9,14}, 6);
HAnimDisplacer256.setDisplacements(new float[]{0.0,0.1005,0.079,0.0,0.1344,-0.107,0.299,0.3808,-0.1835,0.0,0.268,0.0997,0.0,0.2684,0.0,0.0,0.067,-0.082}, 18);
HAnimSegment247.setDisplacers(HAnimDisplacer256);

HAnimDisplacer& HAnimDisplacer257 =  HAnimDisplacer();
HAnimDisplacer257.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer257.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinEyesClosed"));
HAnimDisplacer257.setCoordIndex(new int32_t[]{0,1,2,4}, 4);
HAnimDisplacer257.setDisplacements(new float[]{0.0,0.1171,0.1997,0.0,0.2271,0.251,0.0,0.1444,0.0565,-0.164,0.1045,0.25}, 12);
HAnimSegment247.setDisplacers(HAnimDisplacer257);

HAnimDisplacer& HAnimDisplacer258 =  HAnimDisplacer();
HAnimDisplacer258.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer258.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinLidDroop"));
HAnimDisplacer258.setCoordIndex(new int32_t[]{11}, 1);
HAnimDisplacer258.setDisplacements(new float[]{0.0,-0.349,0.0}, 3);
HAnimSegment247.setDisplacers(HAnimDisplacer258);

HAnimDisplacer& HAnimDisplacer259 =  HAnimDisplacer();
HAnimDisplacer259.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer259.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinLidTightener"));
HAnimDisplacer259.setCoordIndex(new int32_t[]{0,1,2,3,4,10}, 6);
HAnimDisplacer259.setDisplacements(new float[]{0.0,0.3086,0.0,0.0,0.0964,0.0,-0.09,0.209,0.0,0.0,0.3085,0.0,0.0,0.1513,0.0,0.0,0.1512,0.0}, 18);
HAnimSegment247.setDisplacers(HAnimDisplacer259);

HAnimDisplacer& HAnimDisplacer260 =  HAnimDisplacer();
HAnimDisplacer260.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer260.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinSquint"));
HAnimDisplacer260.setCoordIndex(new int32_t[]{0,1,2,3,4,10,11,12}, 8);
HAnimDisplacer260.setDisplacements(new float[]{0.0,0.6387,0.7019,0.0,0.3839,0.263,0.0,0.499,0.4721,0.0,0.7235,0.3988,0.0,0.6387,0.398,0.0,0.6386,0.399,0.0,-0.078,0.0,0.0,-0.078,0.0}, 24);
HAnimSegment247.setDisplacers(HAnimDisplacer260);

HAnimDisplacer& HAnimDisplacer261 =  HAnimDisplacer();
HAnimDisplacer261.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer261.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer261.setCoordIndex(new int32_t[]{13}, 1);
HAnimDisplacer261.setDisplacements(new float[]{0.0,0.4976,0.0}, 3);
HAnimSegment247.setDisplacers(HAnimDisplacer261);

HAnimDisplacer& HAnimDisplacer262 =  HAnimDisplacer();
HAnimDisplacer262.X3DNode::setName(CString("left_lower_eyelid_morphinterpolator"));
HAnimDisplacer262.setDEF(CString("Left_lower_eyelid_MorphInterpolator_JinWink"));
HAnimDisplacer262.setCoordIndex(new int32_t[]{0,1,2,3,4,10,11}, 7);
HAnimDisplacer262.setDisplacements(new float[]{0.214,1.0508,0.5553,0.0,0.4269,0.471,0.093,0.8476,0.3331,-0.3349,1.0786,0.7039,0.0,0.8357,0.707,0.0,0.8975,0.841,0.0,0.0,0.034}, 21);
HAnimSegment247.setDisplacers(HAnimDisplacer262);

HAnimJoint89.addChildren(&HAnimSegment247);

HAnimSegment& HAnimSegment263 =  HAnimSegment();
HAnimSegment263.X3DNode::setName(CString("left_lower_vermillion_lip"));
HAnimSegment263.setDEF(CString("hanim_Left_lower_vermillion_lip"));
Transform& Transform264 =  Transform();
Transform264.setDEF(CString("Left_lower_vermillion_lip_JinBlink"));
Transform264.setTranslation(new float[]{1.788,8.405,13.04});
Shape& Shape265 =  Shape();
Appearance& Appearance266 =  Appearance();
Appearance266.setUSE(CString("BaseAppearance_JinBlink"));
Shape265.addChild(&Appearance266);

IndexedFaceSet& IndexedFaceSet267 =  IndexedFaceSet();
IndexedFaceSet267.setDEF(CString("Left_lower_vermillion_lip-FACES_JinBlink"));
IndexedFaceSet267.setCoordIndex(new int32_t[]{2,1,0,-1}, 4);
IndexedFaceSet267.setCreaseAngle(3.14159);
IndexedFaceSet267.setSolid(false);
IndexedFaceSet267.setTexCoordIndex(new int32_t[]{2,1,0,-1}, 4);
TextureCoordinate& TextureCoordinate268 =  TextureCoordinate();
TextureCoordinate268.setDEF(CString("Left_lower_vermillion_lip-TEXCOORD_JinBlink"));
TextureCoordinate268.setPoint(new float[]{0.2548,0.6554,0.3007,0.651,0.2652,0.6384}, 6);
IndexedFaceSet267.setTexCoord(&TextureCoordinate268);

Coordinate& Coordinate269 =  Coordinate();
Coordinate269.setDEF(CString("Left_lower_vermillion_lip_COORD_JinBlink"));
Coordinate269.setPoint(new float[]{-1.218,0.4506,0.603,1.218,0.219,-0.603,-1.154,-0.4506,0.3592}, 9);
IndexedFaceSet267.setCoord(&Coordinate269);

Shape265.setGeometry(&IndexedFaceSet267);

Transform264.addChild(&Shape265);

HAnimSegment263.addChild(&Transform264);

Coordinate& Coordinate270 =  Coordinate();
Coordinate270.setUSE(CString("Left_lower_vermillion_lip_COORD_JinBlink"));
HAnimSegment263.setCoord(&Coordinate270);

HAnimDisplacer& HAnimDisplacer271 =  HAnimDisplacer();
HAnimDisplacer271.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer271.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer271.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer271.setDisplacements(new float[]{0.0,0.3821,0.435,0.629,1.323,0.1066,0.0,0.7896,0.4659}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer271);

HAnimDisplacer& HAnimDisplacer272 =  HAnimDisplacer();
HAnimDisplacer272.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer272.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer272.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer272.setDisplacements(new float[]{0.0,0.187,0.0,0.0,-0.1372,0.0,0.0,0.6497,0.364}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer272);

HAnimDisplacer& HAnimDisplacer273 =  HAnimDisplacer();
HAnimDisplacer273.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer273.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer273.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer273.setDisplacements(new float[]{0.0,-0.0896,0.533,0.378,0.396,0.1527,0.0,0.6332,0.8798}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer273);

HAnimDisplacer& HAnimDisplacer274 =  HAnimDisplacer();
HAnimDisplacer274.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer274.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinJawDrop"));
HAnimDisplacer274.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer274.setDisplacements(new float[]{0.0,-0.6156,0.0,0.0,-0.6154,0.0}, 6);
HAnimSegment263.setDisplacers(HAnimDisplacer274);

HAnimDisplacer& HAnimDisplacer275 =  HAnimDisplacer();
HAnimDisplacer275.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer275.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer275.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer275.setDisplacements(new float[]{0.0,-0.0368,0.837,0.21,-0.7014,0.0777,0.0,0.5213,1.2488}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer275);

HAnimDisplacer& HAnimDisplacer276 =  HAnimDisplacer();
HAnimDisplacer276.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer276.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer276.setCoordIndex(new int32_t[]{2}, 1);
HAnimDisplacer276.setDisplacements(new float[]{1.176,0.13,-0.375}, 3);
HAnimSegment263.setDisplacers(HAnimDisplacer276);

HAnimDisplacer& HAnimDisplacer277 =  HAnimDisplacer();
HAnimDisplacer277.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer277.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer277.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer277.setDisplacements(new float[]{0.2642,-0.7179,0.823,-0.8355,0.0,1.0637,-0.101,-0.5994,0.7018}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer277);

HAnimDisplacer& HAnimDisplacer278 =  HAnimDisplacer();
HAnimDisplacer278.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer278.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipPressor"));
HAnimDisplacer278.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer278.setDisplacements(new float[]{0.0,-0.3795,0.1337,0.0,-0.21,0.0}, 6);
HAnimSegment263.setDisplacers(HAnimDisplacer278);

HAnimDisplacer& HAnimDisplacer279 =  HAnimDisplacer();
HAnimDisplacer279.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer279.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer279.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer279.setDisplacements(new float[]{0.0,-0.3959,0.859,-0.9348,0.0,0.5167,0.0,-0.2497,0.9748}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer279);

HAnimDisplacer& HAnimDisplacer280 =  HAnimDisplacer();
HAnimDisplacer280.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer280.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipsPart"));
HAnimDisplacer280.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer280.setDisplacements(new float[]{0.0,-0.4319,0.0434,0.0,-0.4133,-0.0174}, 6);
HAnimSegment263.setDisplacers(HAnimDisplacer280);

HAnimDisplacer& HAnimDisplacer281 =  HAnimDisplacer();
HAnimDisplacer281.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer281.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer281.setCoordIndex(new int32_t[]{1}, 1);
HAnimDisplacer281.setDisplacements(new float[]{0.898,0.0092,0.0257}, 3);
HAnimSegment263.setDisplacers(HAnimDisplacer281);

HAnimDisplacer& HAnimDisplacer282 =  HAnimDisplacer();
HAnimDisplacer282.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer282.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer282.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer282.setDisplacements(new float[]{0.0,-0.0594,0.1828,0.125,0.0,0.0,0.0,0.633,0.3625}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer282);

HAnimDisplacer& HAnimDisplacer283 =  HAnimDisplacer();
HAnimDisplacer283.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer283.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer283.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer283.setDisplacements(new float[]{-0.042,-0.058,1.082,-0.5211,0.1705,1.038,0.1612,0.0641,0.9158}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer283);

HAnimDisplacer& HAnimDisplacer284 =  HAnimDisplacer();
HAnimDisplacer284.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer284.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"));
HAnimDisplacer284.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer284.setDisplacements(new float[]{0.0,-0.5685,0.0,0.0,-0.5684,0.0}, 6);
HAnimSegment263.setDisplacers(HAnimDisplacer284);

HAnimDisplacer& HAnimDisplacer285 =  HAnimDisplacer();
HAnimDisplacer285.X3DNode::setName(CString("left_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer285.setDEF(CString("Left_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer285.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer285.setDisplacements(new float[]{0.176,-2.4736,0.049,0.0,-0.7362,0.0,0.1963,-2.4594,0.002}, 9);
HAnimSegment263.setDisplacers(HAnimDisplacer285);

HAnimJoint89.addChildren(&HAnimSegment263);

HAnimSegment& HAnimSegment286 =  HAnimSegment();
HAnimSegment286.X3DNode::setName(CString("left_nasolabial_cheek"));
HAnimSegment286.setDEF(CString("hanim_Left_nasolabial_cheek"));
Transform& Transform287 =  Transform();
Transform287.setDEF(CString("Left_nasolabial_cheek_JinBlink"));
Transform287.setTranslation(new float[]{2.021,10.27,13.53});
Shape& Shape288 =  Shape();
Appearance& Appearance289 =  Appearance();
Appearance289.setUSE(CString("BaseAppearance_JinBlink"));
Shape288.addChild(&Appearance289);

IndexedFaceSet& IndexedFaceSet290 =  IndexedFaceSet();
IndexedFaceSet290.setDEF(CString("Left_nasolabial_cheek-FACES_JinBlink"));
IndexedFaceSet290.setCoordIndex(new int32_t[]{0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1}, 16);
IndexedFaceSet290.setCreaseAngle(3.14159);
IndexedFaceSet290.setSolid(false);
IndexedFaceSet290.setTexCoordIndex(new int32_t[]{0,3,4,-1,3,0,5,-1,5,0,1,-1,1,2,5,-1}, 16);
TextureCoordinate& TextureCoordinate291 =  TextureCoordinate();
TextureCoordinate291.setDEF(CString("Left_nasolabial_cheek-TEXCOORD_JinBlink"));
TextureCoordinate291.setPoint(new float[]{0.2661,0.696,0.2636,0.664,0.3007,0.651,0.2727,0.7092,0.2641,0.7133,0.2788,0.6949}, 12);
IndexedFaceSet290.setTexCoord(&TextureCoordinate291);

Coordinate& Coordinate292 =  Coordinate();
Coordinate292.setDEF(CString("Left_nasolabial_cheek_COORD_JinBlink"));
Coordinate292.setPoint(new float[]{-0.8548,0.741,0.5666,-0.9852,-0.962,1.035,0.9852,-1.648,-1.094,-0.5035,1.438,0.4388,-0.9626,1.648,1.094,-0.1761,0.6814,0.2329}, 18);
IndexedFaceSet290.setCoord(&Coordinate292);

Shape288.setGeometry(&IndexedFaceSet290);

Transform287.addChild(&Shape288);

HAnimSegment286.addChild(&Transform287);

Coordinate& Coordinate293 =  Coordinate();
Coordinate293.setUSE(CString("Left_nasolabial_cheek_COORD_JinBlink"));
HAnimSegment286.setCoord(&Coordinate293);

HAnimDisplacer& HAnimDisplacer294 =  HAnimDisplacer();
HAnimDisplacer294.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer294.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer294.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer294.setDisplacements(new float[]{0.0,0.838,0.0,0.0,0.5164,0.0,0.6288,1.3226,0.1063,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.8376,0.0}, 18);
HAnimSegment286.setDisplacers(HAnimDisplacer294);

HAnimDisplacer& HAnimDisplacer295 =  HAnimDisplacer();
HAnimDisplacer295.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer295.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer295.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer295.setDisplacements(new float[]{0.0,0.0967,0.0,0.0,-0.137,0.0}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer295);

HAnimDisplacer& HAnimDisplacer296 =  HAnimDisplacer();
HAnimDisplacer296.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer296.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinDimpler"));
HAnimDisplacer296.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer296.setDisplacements(new float[]{0.0,-0.069,0.044,0.3778,0.396,0.1524}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer296);

HAnimDisplacer& HAnimDisplacer297 =  HAnimDisplacer();
HAnimDisplacer297.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer297.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer297.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer297.setDisplacements(new float[]{0.0,-0.0221,0.125,0.2098,-0.701,0.077}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer297);

HAnimDisplacer& HAnimDisplacer298 =  HAnimDisplacer();
HAnimDisplacer298.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer298.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer298.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer298.setDisplacements(new float[]{1.176,0.13,-0.375}, 3);
HAnimSegment286.setDisplacers(HAnimDisplacer298);

HAnimDisplacer& HAnimDisplacer299 =  HAnimDisplacer();
HAnimDisplacer299.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer299.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer299.setCoordIndex(new int32_t[]{1,2,5}, 3);
HAnimDisplacer299.setDisplacements(new float[]{-0.1338,0.1022,0.551,-0.8357,0.0,1.0634,0.0,0.0,0.1091}, 9);
HAnimSegment286.setDisplacers(HAnimDisplacer299);

HAnimDisplacer& HAnimDisplacer300 =  HAnimDisplacer();
HAnimDisplacer300.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer300.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer300.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer300.setDisplacements(new float[]{-0.1438,0.0,0.566,-0.935,0.0,0.5164}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer300);

HAnimDisplacer& HAnimDisplacer301 =  HAnimDisplacer();
HAnimDisplacer301.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer301.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer301.setCoordIndex(new int32_t[]{2}, 1);
HAnimDisplacer301.setDisplacements(new float[]{0.8978,0.009,0.025}, 3);
HAnimSegment286.setDisplacers(HAnimDisplacer301);

HAnimDisplacer& HAnimDisplacer302 =  HAnimDisplacer();
HAnimDisplacer302.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer302.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipSuck"));
HAnimDisplacer302.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer302.setDisplacements(new float[]{0.0,-0.52,-0.655,0.1248,0.0,0.0}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer302);

HAnimDisplacer& HAnimDisplacer303 =  HAnimDisplacer();
HAnimDisplacer303.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer303.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipTightener"));
HAnimDisplacer303.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer303.setDisplacements(new float[]{-0.0758,-0.0332,0.261,-0.5214,0.171,1.0377}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer303);

HAnimDisplacer& HAnimDisplacer304 =  HAnimDisplacer();
HAnimDisplacer304.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer304.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer304.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer304.setDisplacements(new float[]{0.0,0.2684,0.0,0.0,-0.736,0.0}, 6);
HAnimSegment286.setDisplacers(HAnimDisplacer304);

HAnimDisplacer& HAnimDisplacer305 =  HAnimDisplacer();
HAnimDisplacer305.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer305.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer305.setCoordIndex(new int32_t[]{0,3,4,5}, 4);
HAnimDisplacer305.setDisplacements(new float[]{0.0,0.376,0.0,-0.0781,0.552,0.0,0.0,0.376,0.0,0.0,0.4706,0.0}, 12);
HAnimSegment286.setDisplacers(HAnimDisplacer305);

HAnimDisplacer& HAnimDisplacer306 =  HAnimDisplacer();
HAnimDisplacer306.X3DNode::setName(CString("left_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer306.setDEF(CString("Left_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer306.setCoordIndex(new int32_t[]{0,1,3,4,5}, 5);
HAnimDisplacer306.setDisplacements(new float[]{0.0,0.502,0.0,0.0,0.5016,0.0,0.0,0.294,0.0,0.0,0.294,0.0,0.0,0.5016,0.0}, 15);
HAnimSegment286.setDisplacers(HAnimDisplacer306);

HAnimJoint89.addChildren(&HAnimSegment286);

HAnimSegment& HAnimSegment307 =  HAnimSegment();
HAnimSegment307.X3DNode::setName(CString("left_nostril"));
HAnimSegment307.setDEF(CString("hanim_Left_nostril"));
Transform& Transform308 =  Transform();
Transform308.setDEF(CString("Left_nostril_JinBlink"));
Transform308.setTranslation(new float[]{0.7684,11.22,15.04});
Shape& Shape309 =  Shape();
Appearance& Appearance310 =  Appearance();
Appearance310.setUSE(CString("BaseAppearance_JinBlink"));
Shape309.addChild(&Appearance310);

IndexedFaceSet& IndexedFaceSet311 =  IndexedFaceSet();
IndexedFaceSet311.setDEF(CString("Left_nostril-FACES_JinBlink"));
IndexedFaceSet311.setCoordIndex(new int32_t[]{0,2,3,-1,1,2,0,-1,4,3,2,-1}, 12);
IndexedFaceSet311.setCreaseAngle(3.14159);
IndexedFaceSet311.setSolid(false);
IndexedFaceSet311.setTexCoordIndex(new int32_t[]{0,2,3,-1,1,2,0,-1,4,3,2,-1}, 12);
TextureCoordinate& TextureCoordinate312 =  TextureCoordinate();
TextureCoordinate312.setDEF(CString("Left_nostril-TEXCOORD_JinBlink"));
TextureCoordinate312.setPoint(new float[]{0.2538,0.7051,0.2511,0.6816,0.2661,0.696,0.2528,0.7186,0.2641,0.7133}, 10);
IndexedFaceSet311.setTexCoord(&TextureCoordinate312);

Coordinate& Coordinate313 =  Coordinate();
Coordinate313.setDEF(CString("Left_nostril_COORD_JinBlink"));
Coordinate313.setPoint(new float[]{-0.2923,0.2585,0.9483,-0.398,-0.9732,0.1131,0.398,-0.209,-0.9483,-0.3119,0.9732,0.439,0.2902,0.6978,-0.4206}, 15);
IndexedFaceSet311.setCoord(&Coordinate313);

Shape309.setGeometry(&IndexedFaceSet311);

Transform308.addChild(&Shape309);

HAnimSegment307.addChild(&Transform308);

Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setUSE(CString("Left_nostril_COORD_JinBlink"));
HAnimSegment307.setCoord(&Coordinate314);

HAnimDisplacer& HAnimDisplacer315 =  HAnimDisplacer();
HAnimDisplacer315.X3DNode::setName(CString("left_nostril_morphinterpolator"));
HAnimDisplacer315.setDEF(CString("Left_nostril_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer315.setCoordIndex(new int32_t[]{2,4}, 2);
HAnimDisplacer315.setDisplacements(new float[]{0.0,0.838,0.0,0.0,0.8382,0.0}, 6);
HAnimSegment307.setDisplacers(HAnimDisplacer315);

HAnimDisplacer& HAnimDisplacer316 =  HAnimDisplacer();
HAnimDisplacer316.X3DNode::setName(CString("left_nostril_morphinterpolator"));
HAnimDisplacer316.setDEF(CString("Left_nostril_MorphInterpolator_JinNasolabialDeepener"));
HAnimDisplacer316.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer316.setDisplacements(new float[]{0.3849,0.0,0.0}, 3);
HAnimSegment307.setDisplacers(HAnimDisplacer316);

HAnimDisplacer& HAnimDisplacer317 =  HAnimDisplacer();
HAnimDisplacer317.X3DNode::setName(CString("left_nostril_morphinterpolator"));
HAnimDisplacer317.setDEF(CString("Left_nostril_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer317.setCoordIndex(new int32_t[]{2,4}, 2);
HAnimDisplacer317.setDisplacements(new float[]{0.0,0.3759,0.0,0.0,0.3762,0.0}, 6);
HAnimSegment307.setDisplacers(HAnimDisplacer317);

HAnimDisplacer& HAnimDisplacer318 =  HAnimDisplacer();
HAnimDisplacer318.X3DNode::setName(CString("left_nostril_morphinterpolator"));
HAnimDisplacer318.setDEF(CString("Left_nostril_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer318.setCoordIndex(new int32_t[]{2,4}, 2);
HAnimDisplacer318.setDisplacements(new float[]{0.0,0.5016,0.0,0.0,0.2937,0.0}, 6);
HAnimSegment307.setDisplacers(HAnimDisplacer318);

HAnimJoint89.addChildren(&HAnimSegment307);

HAnimSegment& HAnimSegment319 =  HAnimSegment();
HAnimSegment319.X3DNode::setName(CString("left_pupil"));
HAnimSegment319.setDEF(CString("hanim_Left_pupil"));
Transform& Transform320 =  Transform();
Transform320.setDEF(CString("Left_pupil_JinBlink"));
Transform320.setTranslation(new float[]{6.059,17.5,12.33});
Shape& Shape321 =  Shape();
Appearance& Appearance322 =  Appearance();
Appearance322.setUSE(CString("BaseAppearance_JinBlink"));
Shape321.addChild(&Appearance322);

IndexedFaceSet& IndexedFaceSet323 =  IndexedFaceSet();
IndexedFaceSet323.setDEF(CString("Left_pupil-FACES_JinBlink"));
IndexedFaceSet323.setCoordIndex(new int32_t[]{4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1}, 60);
IndexedFaceSet323.setCreaseAngle(3.14159);
IndexedFaceSet323.setSolid(false);
IndexedFaceSet323.setTexCoordIndex(new int32_t[]{4,0,7,-1,7,6,4,-1,7,0,3,-1,3,8,7,-1,12,9,1,-1,1,2,12,-1,10,1,9,-1,5,3,1,-1,1,10,5,-1,0,4,11,-1,11,2,0,-1,2,11,12,-1,3,5,8,-1,0,2,1,-1,1,3,0,-1}, 60);
TextureCoordinate& TextureCoordinate324 =  TextureCoordinate();
TextureCoordinate324.setDEF(CString("Left_pupil-TEXCOORD_JinBlink"));
TextureCoordinate324.setPoint(new float[]{0.3496,0.8297,0.3746,0.8042,0.3491,0.8029,0.3744,0.8314,0.328,0.824,0.3871,0.8321,0.3258,0.833,0.3487,0.8409,0.385,0.8438,0.3777,0.7936,0.3889,0.8064,0.3322,0.8026,0.3442,0.7934}, 26);
IndexedFaceSet323.setTexCoord(&TextureCoordinate324);

Coordinate& Coordinate325 =  Coordinate();
Coordinate325.setDEF(CString("Left_pupil_COORD_JinBlink"));
Coordinate325.setPoint(new float[]{-0.4761,0.63,0.6933,0.8417,-0.7176,-0.6485,-0.4665,-0.8077,0.1079,0.8447,0.7457,-0.2465,-1.612,0.3169,1.289,1.518,0.7946,-0.736,-1.517,0.8129,1.347,-0.5339,1.273,1.112,1.311,1.316,-0.204,1.04,-1.316,-0.9056,1.612,-0.6212,-1.347,-1.373,-0.8544,0.5399,-0.7368,-1.282,0.04415}, 39);
IndexedFaceSet323.setCoord(&Coordinate325);

Shape321.setGeometry(&IndexedFaceSet323);

Transform320.addChild(&Shape321);

HAnimSegment319.addChild(&Transform320);

Coordinate& Coordinate326 =  Coordinate();
Coordinate326.setUSE(CString("Left_pupil_COORD_JinBlink"));
HAnimSegment319.setCoord(&Coordinate326);

HAnimDisplacer& HAnimDisplacer327 =  HAnimDisplacer();
HAnimDisplacer327.X3DNode::setName(CString("left_pupil_morphinterpolator"));
HAnimDisplacer327.setDEF(CString("Left_pupil_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer327.setCoordIndex(new int32_t[]{6,7}, 2);
HAnimDisplacer327.setDisplacements(new float[]{0.0,-0.0784,0.0,0.0,-0.078,0.0}, 6);
HAnimSegment319.setDisplacers(HAnimDisplacer327);

HAnimDisplacer& HAnimDisplacer328 =  HAnimDisplacer();
HAnimDisplacer328.X3DNode::setName(CString("left_pupil_morphinterpolator"));
HAnimDisplacer328.setDEF(CString("Left_pupil_MorphInterpolator_JinLidTightener"));
HAnimDisplacer328.setCoordIndex(new int32_t[]{6,7,8,9,12}, 5);
HAnimDisplacer328.setDisplacements(new float[]{0.0,-0.354,0.0,0.0,-0.3535,0.0,0.0,-0.3535,0.0,0.0,0.308,0.0,0.0,0.151,0.0}, 15);
HAnimSegment319.setDisplacers(HAnimDisplacer328);

HAnimDisplacer& HAnimDisplacer329 =  HAnimDisplacer();
HAnimDisplacer329.X3DNode::setName(CString("left_pupil_morphinterpolator"));
HAnimDisplacer329.setDEF(CString("Left_pupil_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer329.setCoordIndex(new int32_t[]{6,7,8}, 3);
HAnimDisplacer329.setDisplacements(new float[]{0.0,0.4971,0.0,0.0,0.498,0.0,0.0,0.498,0.0}, 9);
HAnimSegment319.setDisplacers(HAnimDisplacer329);

HAnimJoint89.addChildren(&HAnimSegment319);

HAnimSegment& HAnimSegment330 =  HAnimSegment();
HAnimSegment330.X3DNode::setName(CString("left_temple"));
HAnimSegment330.setDEF(CString("hanim_Left_temple"));
Transform& Transform331 =  Transform();
Transform331.setDEF(CString("Left_temple_JinBlink"));
Transform331.setTranslation(new float[]{10.95,20.56,6.406});
Shape& Shape332 =  Shape();
Appearance& Appearance333 =  Appearance();
Appearance333.setUSE(CString("BaseAppearance_JinBlink"));
Shape332.addChild(&Appearance333);

IndexedFaceSet& IndexedFaceSet334 =  IndexedFaceSet();
IndexedFaceSet334.setDEF(CString("Left_temple-FACES_JinBlink"));
IndexedFaceSet334.setCoordIndex(new int32_t[]{9,7,5,-1,5,12,9,-1,0,11,12,-1,12,5,0,-1,0,2,1,-1,1,8,0,-1,2,0,5,-1,10,6,7,-1,7,9,10,-1,7,3,2,-1,2,5,7,-1,4,3,7,-1,7,6,4,-1}, 52);
IndexedFaceSet334.setCreaseAngle(3.14159);
IndexedFaceSet334.setSolid(false);
IndexedFaceSet334.setTexCoordIndex(new int32_t[]{0,4,5,-1,5,6,0,-1,1,13,15,-1,15,7,1,-1,1,3,2,-1,2,10,1,-1,3,1,7,-1,8,9,4,-1,4,0,8,-1,4,11,12,-1,12,5,4,-1,14,11,4,-1,4,9,14,-1}, 52);
TextureCoordinate& TextureCoordinate335 =  TextureCoordinate();
TextureCoordinate335.setDEF(CString("Left_temple-TEXCOORD_JinBlink"));
TextureCoordinate335.setPoint(new float[]{0.44,0.6625,0.4455,0.863,0.4299,0.8825,0.4655,0.9081,0.4428,0.6714,0.4573,0.671,0.4547,0.661,0.462,0.8557,0.4352,0.6651,0.4342,0.6719,0.4266,0.8643,0.4479,0.6875,0.4606,0.684,0.4335,0.819,0.4319,0.6876,0.4572,0.8171}, 32);
IndexedFaceSet334.setTexCoord(&TextureCoordinate335);

Coordinate& Coordinate336 =  Coordinate();
Coordinate336.setDEF(CString("Left_temple_COORD_JinBlink"));
Coordinate336.setPoint(new float[]{-0.312,-0.6258,2.224,-1.079,0.3506,4.121,0.5824,2.214,1.716,0.9631,2.994,-0.8569,0.5756,3.023,-4.121,0.3971,-0.687,1.044,1.042,-0.4888,-3.649,1.005,-0.6065,-1.903,-1.243,-0.6321,3.914,1.028,-2.588,-2.479,1.243,-2.002,-3.446,-0.8897,-3.023,2.376,0.2546,-2.916,0.5272}, 39);
IndexedFaceSet334.setCoord(&Coordinate336);

Shape332.setGeometry(&IndexedFaceSet334);

Transform331.addChild(&Shape332);

HAnimSegment330.addChild(&Transform331);

Coordinate& Coordinate337 =  Coordinate();
Coordinate337.setUSE(CString("Left_temple_COORD_JinBlink"));
HAnimSegment330.setCoord(&Coordinate337);

HAnimDisplacer& HAnimDisplacer338 =  HAnimDisplacer();
HAnimDisplacer338.X3DNode::setName(CString("left_temple_morphinterpolator"));
HAnimDisplacer338.setDEF(CString("Left_temple_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer338.setCoordIndex(new int32_t[]{1,8}, 2);
HAnimDisplacer338.setDisplacements(new float[]{0.0,-0.0942,0.0,0.0,-0.0941,0.0}, 6);
HAnimSegment330.setDisplacers(HAnimDisplacer338);

HAnimDisplacer& HAnimDisplacer339 =  HAnimDisplacer();
HAnimDisplacer339.X3DNode::setName(CString("left_temple_morphinterpolator"));
HAnimDisplacer339.setDEF(CString("Left_temple_MorphInterpolator_JinSquint"));
HAnimDisplacer339.setCoordIndex(new int32_t[]{8,11}, 2);
HAnimDisplacer339.setDisplacements(new float[]{0.0,-0.4529,0.0,0.0,-0.077,0.0}, 6);
HAnimSegment330.setDisplacers(HAnimDisplacer339);

HAnimJoint89.addChildren(&HAnimSegment330);

HAnimSegment& HAnimSegment340 =  HAnimSegment();
HAnimSegment340.X3DNode::setName(CString("left_upper_cutaneous_lip"));
HAnimSegment340.setDEF(CString("hanim_Left_upper_cutaneous_lip"));
Transform& Transform341 =  Transform();
Transform341.setDEF(CString("Left_upper_cutaneous_lip_JinBlink"));
Transform341.setTranslation(new float[]{0.7684,10.16,14.63});
Shape& Shape342 =  Shape();
Appearance& Appearance343 =  Appearance();
Appearance343.setUSE(CString("BaseAppearance_JinBlink"));
Shape342.addChild(&Appearance343);

IndexedFaceSet& IndexedFaceSet344 =  IndexedFaceSet();
IndexedFaceSet344.setDEF(CString("Left_upper_cutaneous_lip-FACES_JinBlink"));
IndexedFaceSet344.setCoordIndex(new int32_t[]{2,3,1,-1,1,0,2,-1}, 8);
IndexedFaceSet344.setCreaseAngle(3.14159);
IndexedFaceSet344.setSolid(false);
IndexedFaceSet344.setTexCoordIndex(new int32_t[]{2,3,1,-1,1,0,2,-1}, 8);
TextureCoordinate& TextureCoordinate345 =  TextureCoordinate();
TextureCoordinate345.setDEF(CString("Left_upper_cutaneous_lip-TEXCOORD_JinBlink"));
TextureCoordinate345.setPoint(new float[]{0.2661,0.696,0.2636,0.664,0.2511,0.6816,0.2548,0.6653}, 8);
IndexedFaceSet344.setTexCoord(&TextureCoordinate345);

Coordinate& Coordinate346 =  Coordinate();
Coordinate346.setDEF(CString("Left_upper_cutaneous_lip_COORD_JinBlink"));
Coordinate346.setPoint(new float[]{0.398,0.8515,-0.5307,0.2676,-0.8515,-0.06256,-0.398,0.08738,0.5307,-0.1985,-0.7812,0.2164}, 12);
IndexedFaceSet344.setCoord(&Coordinate346);

Shape342.setGeometry(&IndexedFaceSet344);

Transform341.addChild(&Shape342);

HAnimSegment340.addChild(&Transform341);

Coordinate& Coordinate347 =  Coordinate();
Coordinate347.setUSE(CString("Left_upper_cutaneous_lip_COORD_JinBlink"));
HAnimSegment340.setCoord(&Coordinate347);

HAnimDisplacer& HAnimDisplacer348 =  HAnimDisplacer();
HAnimDisplacer348.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer348.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer348.setCoordIndex(new int32_t[]{0,1,3}, 3);
HAnimDisplacer348.setDisplacements(new float[]{0.0,0.8385,0.0,0.0,0.5164,0.0,0.0,0.4847,0.0}, 9);
HAnimSegment340.setDisplacers(HAnimDisplacer348);

HAnimDisplacer& HAnimDisplacer349 =  HAnimDisplacer();
HAnimDisplacer349.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer349.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer349.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer349.setDisplacements(new float[]{0.0,0.0967,0.0,0.0,0.1405,0.0}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer349);

HAnimDisplacer& HAnimDisplacer350 =  HAnimDisplacer();
HAnimDisplacer350.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer350.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer350.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer350.setDisplacements(new float[]{0.0,-0.0689,0.0447,0.0,-0.0689,0.0448}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer350);

HAnimDisplacer& HAnimDisplacer351 =  HAnimDisplacer();
HAnimDisplacer351.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer351.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer351.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer351.setDisplacements(new float[]{0.0,-0.0221,0.1251,0.0,-0.022,0.1251}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer351);

HAnimDisplacer& HAnimDisplacer352 =  HAnimDisplacer();
HAnimDisplacer352.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer352.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer352.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer352.setDisplacements(new float[]{-0.1339,0.1022,0.5512,-0.0736,0.1634,0.5282}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer352);

HAnimDisplacer& HAnimDisplacer353 =  HAnimDisplacer();
HAnimDisplacer353.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer353.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer353.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer353.setDisplacements(new float[]{-0.1441,0.0,0.5662,-0.0977,0.0,0.5662}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer353);

HAnimDisplacer& HAnimDisplacer354 =  HAnimDisplacer();
HAnimDisplacer354.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer354.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer354.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer354.setDisplacements(new float[]{0.0,-0.5205,-0.6547,0.0,-0.5208,-0.6547}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer354);

HAnimDisplacer& HAnimDisplacer355 =  HAnimDisplacer();
HAnimDisplacer355.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer355.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer355.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer355.setDisplacements(new float[]{-0.0754,-0.0332,0.2613,-0.0415,-0.0383,0.241}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer355);

HAnimDisplacer& HAnimDisplacer356 =  HAnimDisplacer();
HAnimDisplacer356.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer356.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer356.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer356.setDisplacements(new float[]{0.0,0.2684,0.0,0.0,0.2684,0.0}, 6);
HAnimSegment340.setDisplacers(HAnimDisplacer356);

HAnimDisplacer& HAnimDisplacer357 =  HAnimDisplacer();
HAnimDisplacer357.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer357.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer357.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer357.setDisplacements(new float[]{0.0,0.3765,0.0}, 3);
HAnimSegment340.setDisplacers(HAnimDisplacer357);

HAnimDisplacer& HAnimDisplacer358 =  HAnimDisplacer();
HAnimDisplacer358.X3DNode::setName(CString("left_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer358.setDEF(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer358.setCoordIndex(new int32_t[]{0,1,3}, 3);
HAnimDisplacer358.setDisplacements(new float[]{0.0,0.5015,0.0,0.0,0.5016,0.0,0.0,0.5016,0.0}, 9);
HAnimSegment340.setDisplacers(HAnimDisplacer358);

HAnimJoint89.addChildren(&HAnimSegment340);

HAnimSegment& HAnimSegment359 =  HAnimSegment();
HAnimSegment359.X3DNode::setName(CString("left_upper_eyelid"));
HAnimSegment359.setDEF(CString("hanim_Left_upper_eyelid"));
Transform& Transform360 =  Transform();
Transform360.setDEF(CString("Left_upper_eyelid_JinBlink"));
Transform360.setTranslation(new float[]{5.53,17.96,12.21});
Shape& Shape361 =  Shape();
Appearance& Appearance362 =  Appearance();
Appearance362.setUSE(CString("BaseAppearance_JinBlink"));
Shape361.addChild(&Appearance362);

IndexedFaceSet& IndexedFaceSet363 =  IndexedFaceSet();
IndexedFaceSet363.setDEF(CString("Left_upper_eyelid-FACES_JinBlink"));
IndexedFaceSet363.setCoordIndex(new int32_t[]{1,2,0,-1,6,2,3,-1,3,4,6,-1,3,2,1,-1,1,0,13,-1,13,0,7,-1,8,10,5,-1,5,12,8,-1,4,5,10,-1,10,6,4,-1,0,9,7,-1,7,9,11,-1,13,7,11,-1,11,14,13,-1}, 56);
IndexedFaceSet363.setCreaseAngle(3.14159);
IndexedFaceSet363.setSolid(false);
IndexedFaceSet363.setTexCoordIndex(new int32_t[]{2,1,0,-1,4,1,5,-1,5,3,4,-1,5,1,2,-1,2,0,6,-1,6,0,9,-1,11,13,8,-1,8,15,11,-1,3,8,13,-1,13,4,3,-1,0,12,9,-1,10,12,14,-1,7,10,14,-1,14,16,7,-1}, 56);
TextureCoordinate& TextureCoordinate364 =  TextureCoordinate();
TextureCoordinate364.setDEF(CString("Left_upper_eyelid-TEXCOORD_JinBlink"));
TextureCoordinate364.setPoint(new float[]{0.274,0.8322,0.3402,0.8534,0.3285,0.8323,0.3831,0.8437,0.3979,0.8641,0.3487,0.8409,0.2983,0.8142,0.2981,0.8094,0.4198,0.8261,0.2678,0.8154,0.2677,0.8134,0.4455,0.863,0.2534,0.8152,0.4266,0.8643,0.2671,0.7978,0.4335,0.819,0.2845,0.7889}, 34);
IndexedFaceSet363.setTexCoord(&TextureCoordinate364);

Coordinate& Coordinate365 =  Coordinate();
Coordinate365.setDEF(CString("Left_upper_eyelid_COORD_JinBlink"));
Coordinate365.setPoint(new float[]{-3.944,0.2777,3.581,-0.9888,0.3455,1.465,-0.4509,1.393,2.381,-0.005327,0.806,1.231,1.84,0.849,-0.08585,3.829,-0.08937,-2.326,2.527,1.923,-0.05675,-4.303,-0.6947,2.247,5.103,1.975,-3.581,-5.103,-0.5987,2.53,4.172,1.969,-1.891,-4.353,-1.523,2.057,4.525,-0.4223,-3.429,-2.594,-0.8999,1.643,-3.366,-1.975,1.583}, 45);
IndexedFaceSet363.setCoord(&Coordinate365);

Shape361.setGeometry(&IndexedFaceSet363);

Transform360.addChild(&Shape361);

HAnimSegment359.addChild(&Transform360);

Coordinate& Coordinate366 =  Coordinate();
Coordinate366.setUSE(CString("Left_upper_eyelid_COORD_JinBlink"));
HAnimSegment359.setCoord(&Coordinate366);

HAnimDisplacer& HAnimDisplacer367 =  HAnimDisplacer();
HAnimDisplacer367.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer367.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinBlink"));
HAnimDisplacer367.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer367.setDisplacements(new float[]{0.2496,-2.0425,-0.987,1.6453,-2.567,-1.8279,0.478,-2.36,-1.1421}, 9);
HAnimSegment359.setDisplacers(HAnimDisplacer367);

HAnimDisplacer& HAnimDisplacer368 =  HAnimDisplacer();
HAnimDisplacer368.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer368.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer368.setCoordIndex(new int32_t[]{0,1,2,3,6,10}, 6);
HAnimDisplacer368.setDisplacements(new float[]{-0.331,-0.4142,0.0,0.0,-0.0785,0.0,-0.5075,-0.4988,0.0,0.0,-0.0785,0.0,0.0,-0.094,0.0,0.0,-0.094,0.0}, 18);
HAnimSegment359.setDisplacers(HAnimDisplacer368);

HAnimDisplacer& HAnimDisplacer369 =  HAnimDisplacer();
HAnimDisplacer369.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer369.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer369.setCoordIndex(new int32_t[]{14}, 1);
HAnimDisplacer369.setDisplacements(new float[]{0.0,0.067,-0.082}, 3);
HAnimSegment359.setDisplacers(HAnimDisplacer369);

HAnimDisplacer& HAnimDisplacer370 =  HAnimDisplacer();
HAnimDisplacer370.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer370.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinEyesClosed"));
HAnimDisplacer370.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer370.setDisplacements(new float[]{0.2496,-2.0425,-0.987,1.6453,-2.567,-1.8279,0.478,-2.36,-1.1421}, 9);
HAnimSegment359.setDisplacers(HAnimDisplacer370);

HAnimDisplacer& HAnimDisplacer371 =  HAnimDisplacer();
HAnimDisplacer371.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer371.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer371.setCoordIndex(new int32_t[]{0,2,6}, 3);
HAnimDisplacer371.setDisplacements(new float[]{0.0,0.3655,0.0,0.0,0.365,0.0,0.0,0.094,0.0}, 9);
HAnimSegment359.setDisplacers(HAnimDisplacer371);

HAnimDisplacer& HAnimDisplacer372 =  HAnimDisplacer();
HAnimDisplacer372.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer372.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinJawDrop"));
HAnimDisplacer372.setCoordIndex(new int32_t[]{14}, 1);
HAnimDisplacer372.setDisplacements(new float[]{0.0,-0.316,0.0}, 3);
HAnimSegment359.setDisplacers(HAnimDisplacer372);

HAnimDisplacer& HAnimDisplacer373 =  HAnimDisplacer();
HAnimDisplacer373.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer373.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinLidDroop"));
HAnimDisplacer373.setCoordIndex(new int32_t[]{1,3,4,5}, 4);
HAnimDisplacer373.setDisplacements(new float[]{0.0,-0.7517,0.0,0.0,-1.0484,0.0,0.0,-1.0134,0.0,0.0,-0.3486,0.0}, 12);
HAnimSegment359.setDisplacers(HAnimDisplacer373);

HAnimDisplacer& HAnimDisplacer374 =  HAnimDisplacer();
HAnimDisplacer374.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer374.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinLidTightener"));
HAnimDisplacer374.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer374.setDisplacements(new float[]{0.0,-0.354,0.0,0.0,-0.354,0.0,0.0,-0.354,0.0}, 9);
HAnimSegment359.setDisplacers(HAnimDisplacer374);

HAnimDisplacer& HAnimDisplacer375 =  HAnimDisplacer();
HAnimDisplacer375.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer375.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer375.setCoordIndex(new int32_t[]{14}, 1);
HAnimDisplacer375.setDisplacements(new float[]{0.0,-0.535,0.842}, 3);
HAnimSegment359.setDisplacers(HAnimDisplacer375);

HAnimDisplacer& HAnimDisplacer376 =  HAnimDisplacer();
HAnimDisplacer376.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer376.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinSlit"));
HAnimDisplacer376.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer376.setDisplacements(new float[]{0.0,-1.0868,0.0,0.0,-1.4762,0.0,0.0,-1.3055,0.0}, 9);
HAnimSegment359.setDisplacers(HAnimDisplacer376);

HAnimDisplacer& HAnimDisplacer377 =  HAnimDisplacer();
HAnimDisplacer377.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer377.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinSquint"));
HAnimDisplacer377.setCoordIndex(new int32_t[]{1,3,4,5,6,10,12}, 7);
HAnimDisplacer377.setDisplacements(new float[]{0.0,-0.5962,0.0,0.0,-0.7726,-0.115,0.0,-0.7324,0.0,0.0,-0.0775,0.0,0.0,-0.463,0.0,0.0,-0.464,0.0,0.0,-0.0776,0.0}, 21);
HAnimSegment359.setDisplacers(HAnimDisplacer377);

HAnimDisplacer& HAnimDisplacer378 =  HAnimDisplacer();
HAnimDisplacer378.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer378.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer378.setCoordIndex(new int32_t[]{1,2,3,4,13}, 5);
HAnimDisplacer378.setDisplacements(new float[]{0.0,0.4975,0.0,0.0,0.497,0.0,0.0,0.498,0.0,0.0,0.498,0.0,0.0,0.4975,0.0}, 15);
HAnimSegment359.setDisplacers(HAnimDisplacer378);

HAnimDisplacer& HAnimDisplacer379 =  HAnimDisplacer();
HAnimDisplacer379.X3DNode::setName(CString("left_upper_eyelid_morphinterpolator"));
HAnimDisplacer379.setDEF(CString("Left_upper_eyelid_MorphInterpolator_JinWink"));
HAnimDisplacer379.setCoordIndex(new int32_t[]{1,3,4,5}, 4);
HAnimDisplacer379.setDisplacements(new float[]{0.0,-1.2176,-0.113,0.0,-1.6397,-0.189,0.0,-1.4464,-0.1133,0.0,0.0,0.033}, 12);
HAnimSegment359.setDisplacers(HAnimDisplacer379);

HAnimJoint89.addChildren(&HAnimSegment359);

HAnimSegment& HAnimSegment380 =  HAnimSegment();
HAnimSegment380.X3DNode::setName(CString("left_upper_vermillion_lip"));
HAnimSegment380.setDEF(CString("hanim_Left_upper_vermillion_lip"));
Transform& Transform381 =  Transform();
Transform381.setDEF(CString("Left_upper_vermillion_lip_JinBlink"));
Transform381.setTranslation(new float[]{1.788,9.002,13.64});
Shape& Shape382 =  Shape();
Appearance& Appearance383 =  Appearance();
Appearance383.setUSE(CString("BaseAppearance_JinBlink"));
Shape382.addChild(&Appearance383);

IndexedFaceSet& IndexedFaceSet384 =  IndexedFaceSet();
IndexedFaceSet384.setDEF(CString("Left_upper_vermillion_lip-FACES_JinBlink"));
IndexedFaceSet384.setCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1}, 8);
IndexedFaceSet384.setCreaseAngle(3.14159);
IndexedFaceSet384.setSolid(false);
IndexedFaceSet384.setTexCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate385 =  TextureCoordinate();
TextureCoordinate385.setDEF(CString("Left_upper_vermillion_lip-TEXCOORD_JinBlink"));
TextureCoordinate385.setPoint(new float[]{0.3007,0.651,0.2636,0.664,0.2548,0.6653,0.2548,0.6553}, 8);
IndexedFaceSet384.setTexCoord(&TextureCoordinate385);

Coordinate& Coordinate386 =  Coordinate();
Coordinate386.setDEF(CString("Left_upper_vermillion_lip_COORD_JinBlink"));
Coordinate386.setPoint(new float[]{1.218,-0.3781,-1.204,-0.7521,0.3078,0.925,-1.218,0.3781,1.204,-1.218,-0.1506,0.4455}, 12);
IndexedFaceSet384.setCoord(&Coordinate386);

Shape382.setGeometry(&IndexedFaceSet384);

Transform381.addChild(&Shape382);

HAnimSegment380.addChild(&Transform381);

Coordinate& Coordinate387 =  Coordinate();
Coordinate387.setUSE(CString("Left_upper_vermillion_lip_COORD_JinBlink"));
HAnimSegment380.setCoord(&Coordinate387);

HAnimDisplacer& HAnimDisplacer388 =  HAnimDisplacer();
HAnimDisplacer388.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer388.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer388.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer388.setDisplacements(new float[]{0.629,1.3225,0.107,0.0,0.5164,0.0,0.0,0.4847,0.0,0.0,0.4847,0.0}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer388);

HAnimDisplacer& HAnimDisplacer389 =  HAnimDisplacer();
HAnimDisplacer389.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer389.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer389.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer389.setDisplacements(new float[]{0.0,-0.1372,0.0,0.0,0.0967,0.0,0.0,0.1405,0.0,0.0,0.187,0.0}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer389);

HAnimDisplacer& HAnimDisplacer390 =  HAnimDisplacer();
HAnimDisplacer390.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer390.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer390.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer390.setDisplacements(new float[]{0.378,0.3959,0.153,0.0,-0.0689,0.0447,0.0,-0.0688,0.045,0.0,-0.0435,0.4553}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer390);

HAnimDisplacer& HAnimDisplacer391 =  HAnimDisplacer();
HAnimDisplacer391.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer391.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer391.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer391.setDisplacements(new float[]{0.21,-0.7019,0.078,0.0,-0.0221,0.125,0.0,-0.022,0.125,0.0,0.0541,0.5975}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer391);

HAnimDisplacer& HAnimDisplacer392 =  HAnimDisplacer();
HAnimDisplacer392.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer392.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer392.setCoordIndex(new int32_t[]{3}, 1);
HAnimDisplacer392.setDisplacements(new float[]{1.176,0.13,-0.375}, 3);
HAnimSegment380.setDisplacers(HAnimDisplacer392);

HAnimDisplacer& HAnimDisplacer393 =  HAnimDisplacer();
HAnimDisplacer393.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer393.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer393.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer393.setDisplacements(new float[]{-0.8355,0.0,1.0637,-0.134,0.1022,0.551,-0.074,0.1634,0.528,0.0,0.1236,0.8775}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer393);

HAnimDisplacer& HAnimDisplacer394 =  HAnimDisplacer();
HAnimDisplacer394.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer394.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer394.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer394.setDisplacements(new float[]{-0.9348,0.0,0.5167,-0.1441,0.0,0.566,-0.098,0.0,0.566,-0.041,0.0,0.366}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer394);

HAnimDisplacer& HAnimDisplacer395 =  HAnimDisplacer();
HAnimDisplacer395.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer395.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer395.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer395.setDisplacements(new float[]{0.898,0.0091,0.026}, 3);
HAnimSegment380.setDisplacers(HAnimDisplacer395);

HAnimDisplacer& HAnimDisplacer396 =  HAnimDisplacer();
HAnimDisplacer396.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer396.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer396.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer396.setDisplacements(new float[]{0.125,0.0,0.0,0.0,-0.5204,-0.6548,0.0,-0.5204,-0.6547,0.0,-0.135,-0.2471}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer396);

HAnimDisplacer& HAnimDisplacer397 =  HAnimDisplacer();
HAnimDisplacer397.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer397.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer397.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer397.setDisplacements(new float[]{-0.5211,0.1704,1.038,-0.0755,-0.0332,0.261,-0.042,-0.0383,0.241,-0.042,-0.0353,0.6945}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer397);

HAnimDisplacer& HAnimDisplacer398 =  HAnimDisplacer();
HAnimDisplacer398.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer398.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer398.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer398.setDisplacements(new float[]{0.0,-0.7359,0.0,0.0,0.2684,0.0,0.0,0.2684,0.0,0.0,0.2684,0.0}, 12);
HAnimSegment380.setDisplacers(HAnimDisplacer398);

HAnimDisplacer& HAnimDisplacer399 =  HAnimDisplacer();
HAnimDisplacer399.X3DNode::setName(CString("left_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer399.setDEF(CString("Left_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer399.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer399.setDisplacements(new float[]{0.0,0.5016,0.0,0.0,0.5017,0.0,0.0,0.5017,0.0}, 9);
HAnimSegment380.setDisplacers(HAnimDisplacer399);

HAnimJoint89.addChildren(&HAnimSegment380);

HAnimSegment& HAnimSegment400 =  HAnimSegment();
HAnimSegment400.X3DNode::setName(CString("left_upper_vermillion_lip001"));
HAnimSegment400.setDEF(CString("hanim_Left_upper_vermillion_lip001"));
HAnimDisplacer& HAnimDisplacer401 =  HAnimDisplacer();
HAnimDisplacer401.X3DNode::setName(CString("left_upper_vermillion_lip001_morphinterpolator"));
HAnimDisplacer401.setDEF(CString("Left_upper_vermillion_lip001_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer401.setCoordIndex(new int32_t[]{3}, 1);
HAnimDisplacer401.setDisplacements(new float[]{-1.176,0.13,-0.375}, 3);
HAnimSegment400.setDisplacers(HAnimDisplacer401);

HAnimJoint89.addChildren(&HAnimSegment400);

HAnimSegment& HAnimSegment402 =  HAnimSegment();
HAnimSegment402.X3DNode::setName(CString("mid_forehead"));
HAnimSegment402.setDEF(CString("hanim_Mid_forehead"));
Transform& Transform403 =  Transform();
Transform403.setDEF(CString("Mid_forehead_JinBlink"));
Transform403.setTranslation(new float[]{0.0,27.83,9.426});
Shape& Shape404 =  Shape();
Appearance& Appearance405 =  Appearance();
Appearance405.setUSE(CString("BaseAppearance_JinBlink"));
Shape404.addChild(&Appearance405);

IndexedFaceSet& IndexedFaceSet406 =  IndexedFaceSet();
IndexedFaceSet406.setDEF(CString("Mid_forehead-FACES_JinBlink"));
IndexedFaceSet406.setCoordIndex(new int32_t[]{8,6,1,-1,1,7,8,-1,2,3,13,-1,13,0,2,-1,3,4,15,-1,15,13,3,-1,0,16,5,-1,5,2,0,-1,16,7,1,-1,1,5,16,-1,8,7,10,-1,10,9,8,-1,11,0,13,-1,13,12,11,-1,12,13,15,-1,15,14,12,-1,0,11,17,-1,17,16,0,-1,16,17,10,-1,10,7,16,-1}, 80);
IndexedFaceSet406.setCreaseAngle(3.14159);
IndexedFaceSet406.setSolid(false);
IndexedFaceSet406.setTexCoordIndex(new int32_t[]{10,11,5,-1,5,0,10,-1,6,7,2,-1,2,1,6,-1,7,8,3,-1,3,2,7,-1,1,4,9,-1,9,6,1,-1,4,0,5,-1,5,9,4,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,18,19,21,-1,21,20,18,-1,16,17,23,-1,23,22,16,-1,22,23,15,-1,15,12,22,-1}, 80);
TextureCoordinate& TextureCoordinate407 =  TextureCoordinate();
TextureCoordinate407.setDEF(CString("Mid_forehead-TEXCOORD_JinBlink"));
TextureCoordinate407.setPoint(new float[]{0.2445,0.9452,0.257,0.9724,0.2533,0.9737,0.2542,0.9749,0.2428,0.959,0.2706,0.9459,0.3002,0.9788,0.3015,0.9807,0.3016,0.9833,0.2804,0.9652,0.2442,0.8727,0.2728,0.8741,0.2445,0.9452,0.2442,0.8727,0.2728,0.8741,0.2706,0.9459,0.257,0.9724,0.3002,0.9788,0.3015,0.9807,0.2533,0.9737,0.3016,0.9833,0.2542,0.9749,0.2428,0.959,0.2804,0.9652}, 48);
IndexedFaceSet406.setTexCoord(&TextureCoordinate407);

Coordinate& Coordinate408 =  Coordinate();
Coordinate408.setDEF(CString("Mid_forehead_COORD_JinBlink"));
Coordinate408.setPoint(new float[]{0.0,5.541,2.824,1.396,-3.453,6.748,2.374,5.108,2.647,2.504,6.733,-0.9399,2.504,6.89,-7.142,1.966,1.836,5.915,1.516,-7.326,6.506,0.0,-3.452,7.111,0.0,-7.396,7.142,-1.516,-7.326,6.506,-1.396,-3.453,6.748,-2.374,5.108,2.647,-2.504,6.733,-0.9399,0.0,7.175,-0.7764,-2.504,6.89,-7.142,0.0,7.396,-7.142,0.0,1.906,6.344,-1.966,1.836,5.915}, 54);
IndexedFaceSet406.setCoord(&Coordinate408);

Shape404.setGeometry(&IndexedFaceSet406);

Transform403.addChild(&Shape404);

HAnimSegment402.addChild(&Transform403);

Coordinate& Coordinate409 =  Coordinate();
Coordinate409.setUSE(CString("Mid_forehead_COORD_JinBlink"));
HAnimSegment402.setCoord(&Coordinate409);

HAnimJoint89.addChildren(&HAnimSegment402);

HAnimSegment& HAnimSegment410 =  HAnimSegment();
HAnimSegment410.X3DNode::setName(CString("mid_nasal_dorsum"));
HAnimSegment410.setDEF(CString("hanim_Mid_nasal_dorsum"));
Transform& Transform411 =  Transform();
Transform411.setDEF(CString("Mid_nasal_dorsum_JinBlink"));
Transform411.setTranslation(new float[]{0.0,14.79,15.76});
Shape& Shape412 =  Shape();
Appearance& Appearance413 =  Appearance();
Appearance413.setUSE(CString("BaseAppearance_JinBlink"));
Shape412.addChild(&Appearance413);

IndexedFaceSet& IndexedFaceSet414 =  IndexedFaceSet();
IndexedFaceSet414.setDEF(CString("Mid_nasal_dorsum-FACES_JinBlink"));
IndexedFaceSet414.setCoordIndex(new int32_t[]{0,5,6,-1,0,6,2,-1,2,6,1,-1,1,3,2,-1,4,6,5,-1,4,7,6,-1,7,8,1,-1,1,6,7,-1}, 32);
IndexedFaceSet414.setCreaseAngle(3.14159);
IndexedFaceSet414.setSolid(false);
IndexedFaceSet414.setTexCoordIndex(new int32_t[]{3,2,1,-1,3,0,5,-1,5,0,4,-1,4,6,5,-1,7,9,8,-1,7,11,10,-1,11,13,12,-1,12,10,11,-1}, 32);
TextureCoordinate& TextureCoordinate415 =  TextureCoordinate();
TextureCoordinate415.setDEF(CString("Mid_nasal_dorsum-TEXCOORD_JinBlink"));
TextureCoordinate415.setPoint(new float[]{0.2496,0.7705,0.2441,0.7705,0.2441,0.816,0.2534,0.8152,0.2415,0.7261,0.2534,0.767,0.2528,0.7186,0.2534,0.8152,0.2441,0.816,0.2441,0.7705,0.2496,0.7705,0.2534,0.767,0.2415,0.7261,0.2528,0.7186}, 28);
IndexedFaceSet414.setTexCoord(&TextureCoordinate415);

Coordinate& Coordinate416 =  Coordinate();
Coordinate416.setDEF(CString("Mid_nasal_dorsum_COORD_JinBlink"));
Coordinate416.setPoint(new float[]{0.4273,2.576,-1.018,0.0,-2.334,1.018,0.2355,0.01204,-0.9689,0.4565,-2.593,-0.276,-0.4273,2.576,-1.018,0.0,2.593,-0.9668,0.0,0.1768,-0.8433,-0.2355,0.01204,-0.9689,-0.4565,-2.593,-0.276}, 27);
IndexedFaceSet414.setCoord(&Coordinate416);

Shape412.setGeometry(&IndexedFaceSet414);

Transform411.addChild(&Shape412);

HAnimSegment410.addChild(&Transform411);

Coordinate& Coordinate417 =  Coordinate();
Coordinate417.setUSE(CString("Mid_nasal_dorsum_COORD_JinBlink"));
HAnimSegment410.setCoord(&Coordinate417);

HAnimJoint89.addChildren(&HAnimSegment410);

HAnimSegment& HAnimSegment418 =  HAnimSegment();
HAnimSegment418.X3DNode::setName(CString("mid_upper_vermillion_lip"));
HAnimSegment418.setDEF(CString("hanim_Mid_upper_vermillion_lip"));
Transform& Transform419 =  Transform();
Transform419.setDEF(CString("Mid_upper_vermillion_lip_JinBlink"));
Transform419.setTranslation(new float[]{0.0,9.116,14.46});
Shape& Shape420 =  Shape();
Appearance& Appearance421 =  Appearance();
Appearance421.setUSE(CString("BaseAppearance_JinBlink"));
Shape420.addChild(&Appearance421);

IndexedFaceSet& IndexedFaceSet422 =  IndexedFaceSet();
IndexedFaceSet422.setDEF(CString("Mid_upper_vermillion_lip-FACES_JinBlink"));
IndexedFaceSet422.setCoordIndex(new int32_t[]{4,5,1,-1,1,0,4,-1,4,3,2,-1,2,5,4,-1}, 16);
IndexedFaceSet422.setCreaseAngle(3.14159);
IndexedFaceSet422.setSolid(false);
IndexedFaceSet422.setTexCoordIndex(new int32_t[]{1,3,2,-1,2,0,1,-1,6,5,4,-1,4,7,6,-1}, 16);
TextureCoordinate& TextureCoordinate423 =  TextureCoordinate();
TextureCoordinate423.setDEF(CString("Mid_upper_vermillion_lip-TEXCOORD_JinBlink"));
TextureCoordinate423.setPoint(new float[]{0.2548,0.6653,0.2441,0.6653,0.2548,0.6553,0.2441,0.6553,0.2548,0.6553,0.2548,0.6653,0.2441,0.6653,0.2441,0.6553}, 16);
IndexedFaceSet422.setTexCoord(&TextureCoordinate423);

Coordinate& Coordinate424 =  Coordinate();
Coordinate424.setDEF(CString("Mid_upper_vermillion_lip_COORD_JinBlink"));
Coordinate424.setPoint(new float[]{0.5699,0.2644,0.3792,0.5699,-0.2644,-0.3792,-0.5699,-0.2644,-0.3792,-0.5699,0.2644,0.3792,0.0,0.2644,0.3792,0.0,-0.2644,-0.3792}, 18);
IndexedFaceSet422.setCoord(&Coordinate424);

Shape420.setGeometry(&IndexedFaceSet422);

Transform419.addChild(&Shape420);

HAnimSegment418.addChild(&Transform419);

Coordinate& Coordinate425 =  Coordinate();
Coordinate425.setUSE(CString("Mid_upper_vermillion_lip_COORD_JinBlink"));
HAnimSegment418.setCoord(&Coordinate425);

HAnimDisplacer& HAnimDisplacer426 =  HAnimDisplacer();
HAnimDisplacer426.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer426.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer426.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer426.setDisplacements(new float[]{0.0,0.4846,0.0,0.0,0.4847,0.0,0.0,0.4847,0.0,0.0,0.4846,0.0,0.0,0.4846,0.0,0.0,0.4847,0.0}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer426);

HAnimDisplacer& HAnimDisplacer427 =  HAnimDisplacer();
HAnimDisplacer427.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer427.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer427.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer427.setDisplacements(new float[]{0.0,0.1404,0.0,0.0,0.187,0.0,0.0,0.187,0.0,0.0,0.1404,0.0,0.0,0.2285,0.0,0.0,0.2207,0.0}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer427);

HAnimDisplacer& HAnimDisplacer428 =  HAnimDisplacer();
HAnimDisplacer428.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer428.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer428.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer428.setDisplacements(new float[]{0.0,-0.0689,0.0448,0.0,-0.0435,0.4552,0.0,-0.0435,0.4552,0.0,-0.0689,0.0448,0.0,-0.0689,0.0448,0.0,-0.0435,0.4552}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer428);

HAnimDisplacer& HAnimDisplacer429 =  HAnimDisplacer();
HAnimDisplacer429.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer429.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer429.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer429.setDisplacements(new float[]{0.0,-0.0221,0.1251,0.0,0.0541,0.5977,0.0,0.0541,0.5977,0.0,-0.0514,-0.0369,0.0,-0.0514,-0.0369,0.0,0.0541,0.5977}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer429);

HAnimDisplacer& HAnimDisplacer430 =  HAnimDisplacer();
HAnimDisplacer430.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer430.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer430.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer430.setDisplacements(new float[]{-0.0737,0.1633,0.5282,0.0,0.1237,0.8777,0.0,0.1237,0.8777,0.0737,0.1633,0.5282,0.0,0.107,0.5282,0.0,0.1237,0.8777}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer430);

HAnimDisplacer& HAnimDisplacer431 =  HAnimDisplacer();
HAnimDisplacer431.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer431.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer431.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer431.setDisplacements(new float[]{-0.0978,0.0,0.5662,-0.0413,0.0,0.3659,-0.0413,0.0,0.3659,0.0156,0.0,0.5662,-0.0411,0.0,0.5662,-0.0413,0.0,0.3659}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer431);

HAnimDisplacer& HAnimDisplacer432 =  HAnimDisplacer();
HAnimDisplacer432.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer432.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer432.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer432.setDisplacements(new float[]{0.0,-0.5204,-0.6547,0.0,-0.135,-0.2472,0.0,-0.135,-0.2472,0.0,-0.5204,-0.6547,0.0,-0.5204,-0.6547,0.0,-0.135,-0.2472}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer432);

HAnimDisplacer& HAnimDisplacer433 =  HAnimDisplacer();
HAnimDisplacer433.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer433.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer433.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer433.setDisplacements(new float[]{-0.0415,-0.0383,0.241,-0.0415,-0.0352,0.6946,0.0415,-0.0352,0.6946,0.0415,-0.0383,0.241,0.0,-0.0383,0.241,0.0,-0.0352,0.6946}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer433);

HAnimDisplacer& HAnimDisplacer434 =  HAnimDisplacer();
HAnimDisplacer434.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer434.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer434.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer434.setDisplacements(new float[]{0.0,0.2683,0.0,0.0,0.2684,0.0,0.0,0.2684,0.0,0.0,0.2683,0.0,0.0,0.2683,0.0,0.0,0.2684,0.0}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer434);

HAnimDisplacer& HAnimDisplacer435 =  HAnimDisplacer();
HAnimDisplacer435.X3DNode::setName(CString("mid_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer435.setDEF(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer435.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer435.setDisplacements(new float[]{0.0,0.5016,0.0,0.0,0.5017,0.0,0.0,0.5017,0.0,0.0,0.5016,0.0,0.0,0.5016,0.0,0.0,0.5017,0.0}, 18);
HAnimSegment418.setDisplacers(HAnimDisplacer435);

HAnimJoint89.addChildren(&HAnimSegment418);

HAnimSegment& HAnimSegment436 =  HAnimSegment();
HAnimSegment436.X3DNode::setName(CString("nasal_tip"));
HAnimSegment436.setDEF(CString("hanim_Nasal_tip"));
Transform& Transform437 =  Transform();
Transform437.setDEF(CString("Nasal_tip_JinBlink"));
Transform437.setTranslation(new float[]{0.0,11.35,16.23});
Shape& Shape438 =  Shape();
Appearance& Appearance439 =  Appearance();
Appearance439.setUSE(CString("BaseAppearance_JinBlink"));
Shape438.addChild(&Appearance439);

IndexedFaceSet& IndexedFaceSet440 =  IndexedFaceSet();
IndexedFaceSet440.setDEF(CString("Nasal_tip-FACES_JinBlink"));
IndexedFaceSet440.setCoordIndex(new int32_t[]{4,0,1,-1,4,3,2,-1,2,7,4,-1,3,4,1,-1,4,5,0,-1,4,7,6,-1,6,8,4,-1,8,5,4,-1}, 32);
IndexedFaceSet440.setCreaseAngle(3.14159);
IndexedFaceSet440.setSolid(false);
IndexedFaceSet440.setTexCoordIndex(new int32_t[]{1,2,3,-1,1,5,4,-1,4,0,1,-1,5,1,3,-1,6,8,7,-1,6,10,9,-1,9,11,6,-1,11,8,6,-1}, 32);
TextureCoordinate& TextureCoordinate441 =  TextureCoordinate();
TextureCoordinate441.setDEF(CString("Nasal_tip-TEXCOORD_JinBlink"));
TextureCoordinate441.setPoint(new float[]{0.2415,0.7261,0.2441,0.7109,0.2441,0.6816,0.2511,0.6816,0.2528,0.7186,0.2538,0.7051,0.2441,0.7109,0.2441,0.6816,0.2511,0.6816,0.2528,0.7186,0.2415,0.7261,0.2538,0.7051}, 24);
IndexedFaceSet440.setTexCoord(&TextureCoordinate441);

Coordinate& Coordinate442 =  Coordinate();
Coordinate442.setDEF(CString("Nasal_tip_COORD_JinBlink"));
Coordinate442.setPoint(new float[]{0.0,-1.103,-1.068,0.3704,-1.103,-1.072,0.4565,0.8434,-0.7458,0.4761,0.1288,-0.2364,0.0,0.4512,1.072,-0.3704,-1.103,-1.072,-0.4565,0.8434,-0.7458,0.0,1.103,0.5484,-0.4761,0.1288,-0.2364}, 27);
IndexedFaceSet440.setCoord(&Coordinate442);

Shape438.setGeometry(&IndexedFaceSet440);

Transform437.addChild(&Shape438);

HAnimSegment436.addChild(&Transform437);

Coordinate& Coordinate443 =  Coordinate();
Coordinate443.setUSE(CString("Nasal_tip_COORD_JinBlink"));
HAnimSegment436.setCoord(&Coordinate443);

HAnimDisplacer& HAnimDisplacer444 =  HAnimDisplacer();
HAnimDisplacer444.X3DNode::setName(CString("nasal_tip_morphinterpolator"));
HAnimDisplacer444.setDEF(CString("Nasal_tip_MorphInterpolator_JinNasolabialDeepener"));
HAnimDisplacer444.setCoordIndex(new int32_t[]{3,8}, 2);
HAnimDisplacer444.setDisplacements(new float[]{0.3849,0.0,0.0,-0.3849,0.0,0.0}, 6);
HAnimSegment436.setDisplacers(HAnimDisplacer444);

HAnimJoint89.addChildren(&HAnimSegment436);

HAnimSegment& HAnimSegment445 =  HAnimSegment();
HAnimSegment445.X3DNode::setName(CString("neck"));
HAnimSegment445.setDEF(CString("hanim_Neck"));
Transform& Transform446 =  Transform();
Transform446.setDEF(CString("Neck_JinBlink"));
Transform446.setTranslation(new float[]{0.0,4.213,0.4657});
Shape& Shape447 =  Shape();
Appearance& Appearance448 =  Appearance();
Appearance448.setUSE(CString("BaseAppearance_JinBlink"));
Shape447.addChild(&Appearance448);

IndexedFaceSet& IndexedFaceSet449 =  IndexedFaceSet();
IndexedFaceSet449.setDEF(CString("Neck-FACES_JinBlink"));
IndexedFaceSet449.setCoordIndex(new int32_t[]{1,0,12,-1,12,13,1,-1,0,2,14,-1,14,12,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,1,-1,1,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1}, 96);
IndexedFaceSet449.setCreaseAngle(3.14159);
IndexedFaceSet449.setSolid(false);
IndexedFaceSet449.setTexCoordIndex(new int32_t[]{0,1,12,-1,12,13,0,-1,1,2,14,-1,14,12,1,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,5,6,17,-1,17,18,5,-1,4,5,18,-1,18,16,4,-1,19,7,0,-1,0,13,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,17,6,11,-1,11,23,17,-1,23,11,10,-1,10,22,23,-1}, 96);
TextureCoordinate& TextureCoordinate450 =  TextureCoordinate();
TextureCoordinate450.setDEF(CString("Neck-TEXCOORD_JinBlink"));
TextureCoordinate450.setPoint(new float[]{0.04371,0.6512,0.05004,0.6512,0.05713,0.6512,0.06211,0.6512,0.05807,0.6512,0.05084,0.6529,0.04371,0.6456,0.03739,0.6512,0.0303,0.6512,0.02531,0.6512,0.02935,0.6512,0.03659,0.6529,0.0501,0.6113,0.04371,0.612,0.05726,0.6141,0.0623,0.6138,0.05822,0.6099,0.04371,0.6064,0.05091,0.6065,0.03733,0.6113,0.03016,0.6141,0.02513,0.6138,0.02921,0.6099,0.03652,0.6065}, 48);
IndexedFaceSet449.setTexCoord(&TextureCoordinate450);

Coordinate& Coordinate451 =  Coordinate();
Coordinate451.setDEF(CString("Neck_COORD_JinBlink"));
Coordinate451.setPoint(new float[]{1.364,4.193,-2.856,0.0,4.193,-3.036,2.893,4.193,-2.16,3.969,4.193,0.1849,3.097,4.193,1.816,1.537,4.525,2.797,0.0,3.099,3.036,-1.364,4.193,-2.856,-2.893,4.193,-2.16,-3.969,4.193,0.1849,-3.097,4.193,1.816,-1.537,4.525,2.797,1.378,-3.566,-2.884,0.0,-3.437,-3.067,2.923,-3.023,-2.182,4.009,-3.081,0.1871,3.129,-3.839,1.835,0.0,-4.525,3.067,1.552,-4.502,2.826,-1.378,-3.566,-2.884,-2.923,-3.023,-2.182,-4.009,-3.081,0.1871,-3.129,-3.839,1.835,-1.552,-4.502,2.826}, 72);
IndexedFaceSet449.setCoord(&Coordinate451);

Shape447.setGeometry(&IndexedFaceSet449);

Transform446.addChild(&Shape447);

HAnimSegment445.addChild(&Transform446);

Coordinate& Coordinate452 =  Coordinate();
Coordinate452.setUSE(CString("Neck_COORD_JinBlink"));
HAnimSegment445.setCoord(&Coordinate452);

HAnimDisplacer& HAnimDisplacer453 =  HAnimDisplacer();
HAnimDisplacer453.X3DNode::setName(CString("neck_morphinterpolator"));
HAnimDisplacer453.setDEF(CString("Neck_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer453.setCoordIndex(new int32_t[]{0,1,2,6,8,10}, 6);
HAnimDisplacer453.setDisplacements(new float[]{0.0,0.156,0.0,0.0,0.373,0.0,0.0,0.485,0.0,0.0193,1.002,-0.758,-0.261,0.915,-1.261,-0.281,0.915,-0.875}, 18);
HAnimSegment445.setDisplacers(HAnimDisplacer453);

HAnimDisplacer& HAnimDisplacer454 =  HAnimDisplacer();
HAnimDisplacer454.X3DNode::setName(CString("neck_morphinterpolator"));
HAnimDisplacer454.setDEF(CString("Neck_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer454.setCoordIndex(new int32_t[]{1,4,7,8,10}, 5);
HAnimDisplacer454.setDisplacements(new float[]{0.0,0.407,0.199,0.0,-0.009,0.0,0.0,0.038,0.0,0.0,-0.076,0.0,0.0,-0.076,0.0}, 15);
HAnimSegment445.setDisplacers(HAnimDisplacer454);

HAnimDisplacer& HAnimDisplacer455 =  HAnimDisplacer();
HAnimDisplacer455.X3DNode::setName(CString("neck_morphinterpolator"));
HAnimDisplacer455.setDEF(CString("Neck_MorphInterpolator_JinDimpler"));
HAnimDisplacer455.setCoordIndex(new int32_t[]{2,4,8,10}, 4);
HAnimDisplacer455.setDisplacements(new float[]{0.363,0.369,-1.625,0.389,0.369,-1.1236,-0.364,-0.024,-1.625,-0.39,-0.024,-1.1236}, 12);
HAnimSegment445.setDisplacers(HAnimDisplacer455);

HAnimDisplacer& HAnimDisplacer456 =  HAnimDisplacer();
HAnimDisplacer456.X3DNode::setName(CString("neck_morphinterpolator"));
HAnimDisplacer456.setDEF(CString("Neck_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer456.setCoordIndex(new int32_t[]{4,8,10}, 3);
HAnimDisplacer456.setDisplacements(new float[]{0.217,-0.716,-0.609,-0.19,-0.716,-0.879,-0.203,-0.716,-0.609}, 9);
HAnimSegment445.setDisplacers(HAnimDisplacer456);

HAnimDisplacer& HAnimDisplacer457 =  HAnimDisplacer();
HAnimDisplacer457.X3DNode::setName(CString("neck_morphinterpolator"));
HAnimDisplacer457.setDEF(CString("Neck_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer457.setCoordIndex(new int32_t[]{2,3,4,8,9,10}, 6);
HAnimDisplacer457.setDisplacements(new float[]{0.863,-0.058,-4.372,1.197,-0.058,-3.6409,0.927,-0.058,-3.133,-0.938,-0.058,-4.372,-1.272,-0.058,-3.6409,-1.002,-0.058,-3.133}, 18);
HAnimSegment445.setDisplacers(HAnimDisplacer457);

HAnimDisplacer& HAnimDisplacer458 =  HAnimDisplacer();
HAnimDisplacer458.X3DNode::setName(CString("neck_morphinterpolator"));
HAnimDisplacer458.setDEF(CString("Neck_MorphInterpolator_JinLowerLipDepressor"));
HAnimDisplacer458.setCoordIndex(new int32_t[]{6}, 1);
HAnimDisplacer458.setDisplacements(new float[]{0.0,-0.299,0.0}, 3);
HAnimSegment445.setDisplacers(HAnimDisplacer458);

HAnimJoint89.addChildren(&HAnimSegment445);

HAnimSegment& HAnimSegment459 =  HAnimSegment();
HAnimSegment459.X3DNode::setName(CString("occipital_scalp"));
HAnimSegment459.setDEF(CString("hanim_Occipital_scalp"));
Transform& Transform460 =  Transform();
Transform460.setDEF(CString("Occipital_scalp_JinBlink"));
Transform460.setTranslation(new float[]{0.0,22.26,-9.81});
Shape& Shape461 =  Shape();
Appearance& Appearance462 =  Appearance();
Appearance462.setUSE(CString("BaseAppearance_JinBlink"));
Shape461.addChild(&Appearance462);

IndexedFaceSet& IndexedFaceSet463 =  IndexedFaceSet();
IndexedFaceSet463.setDEF(CString("Occipital_scalp-FACES_JinBlink"));
IndexedFaceSet463.setCoordIndex(new int32_t[]{16,6,9,-1,9,11,16,-1,11,18,17,-1,17,60,11,-1,15,10,9,-1,9,6,15,-1,12,65,17,-1,17,18,12,-1,36,33,16,-1,16,11,36,-1,35,36,11,-1,11,60,35,-1,37,140,156,-1,140,4,42,-1,140,37,4,-1,15,5,37,-1,37,8,15,-1,7,5,15,-1,15,6,7,-1,5,7,37,-1,10,15,8,-1,8,0,10,-1,12,18,0,-1,65,12,0,-1,0,74,65,-1,16,33,13,-1,13,33,34,-1,19,13,34,-1,37,7,13,-1,13,19,37,-1,13,7,6,-1,6,16,13,-1,19,34,14,-1,34,152,41,-1,41,14,34,-1,37,19,14,-1,14,4,37,-1,14,41,42,-1,42,4,14,-1,9,18,11,-1,10,0,9,-1,0,18,9,-1,0,20,74,-1,81,82,20,-1,0,22,20,-1,0,8,21,-1,21,23,0,-1,2,23,21,-1,0,23,22,-1,2,28,3,-1,3,28,24,-1,2,30,28,-1,1,27,28,-1,28,30,1,-1,2,26,30,-1,21,8,25,-1,30,26,25,-1,30,25,39,-1,74,20,82,-1,3,23,2,-1,20,3,81,-1,96,29,27,-1,44,29,96,-1,29,3,24,-1,44,81,29,-1,81,3,29,-1,24,27,29,-1,24,28,27,-1,22,3,20,-1,22,23,3,-1,26,2,21,-1,26,21,25,-1,37,40,39,-1,25,8,37,-1,25,37,39,-1,31,39,40,-1,1,31,40,-1,1,30,31,-1,30,39,31,-1,150,152,34,-1,34,32,150,-1,32,101,198,-1,198,150,32,-1,36,32,34,-1,34,33,36,-1,35,101,32,-1,32,36,35,-1,1,40,51,-1,96,51,48,-1,1,51,27,-1,27,51,96,-1,49,38,37,-1,106,96,48,-1,49,37,43,-1,54,51,49,-1,49,52,54,-1,50,47,45,-1,50,45,46,-1,53,51,54,-1,49,50,52,-1,48,51,53,-1,49,43,50,-1,53,55,106,-1,106,48,53,-1,58,57,56,-1,56,59,58,-1,57,60,17,-1,17,61,57,-1,62,59,56,-1,56,63,62,-1,64,61,17,-1,17,65,64,-1,66,57,58,-1,58,67,66,-1,35,60,57,-1,57,66,35,-1,68,199,190,-1,190,191,69,-1,190,69,68,-1,62,70,68,-1,68,71,62,-1,72,59,62,-1,62,71,72,-1,71,68,72,-1,63,73,70,-1,70,62,63,-1,64,73,61,-1,65,74,73,-1,73,64,65,-1,58,75,67,-1,75,76,67,-1,77,76,75,-1,68,77,75,-1,75,72,68,-1,75,58,59,-1,59,72,75,-1,77,78,76,-1,76,78,79,-1,79,192,76,-1,68,69,78,-1,78,77,68,-1,78,69,191,-1,191,79,78,-1,56,57,61,-1,63,56,73,-1,73,56,61,-1,73,74,80,-1,81,80,82,-1,73,80,83,-1,73,85,84,-1,84,70,73,-1,86,84,85,-1,73,83,85,-1,86,88,87,-1,88,89,87,-1,86,87,90,-1,91,90,87,-1,87,92,91,-1,86,90,93,-1,84,94,70,-1,90,94,93,-1,90,95,94,-1,74,82,80,-1,88,86,85,-1,80,81,88,-1,96,92,97,-1,44,96,97,-1,97,89,88,-1,44,97,81,-1,81,97,88,-1,89,97,92,-1,89,92,87,-1,83,80,88,-1,83,88,85,-1,93,84,86,-1,93,94,84,-1,68,95,98,-1,94,68,70,-1,94,95,68,-1,99,98,95,-1,91,98,99,-1,91,99,90,-1,90,99,95,-1,197,100,76,-1,76,192,197,-1,100,197,198,-1,198,101,100,-1,66,67,76,-1,76,100,66,-1,35,66,100,-1,100,101,35,-1,91,102,98,-1,96,103,102,-1,91,92,102,-1,92,96,102,-1,104,68,105,-1,106,103,96,-1,104,107,68,-1,109,108,104,-1,104,102,109,-1,110,112,111,-1,110,113,112,-1,114,109,102,-1,104,108,110,-1,103,114,102,-1,104,110,107,-1,114,103,106,-1,106,55,114,-1,117,159,121,-1,121,118,117,-1,151,161,117,-1,117,118,151,-1,119,143,134,-1,155,121,159,-1,121,146,122,-1,147,123,122,-1,154,115,146,-1,121,155,146,-1,154,146,155,-1,155,159,145,-1,154,155,145,-1,147,126,125,-1,125,123,147,-1,127,139,125,-1,124,116,139,-1,123,144,121,-1,121,122,123,-1,139,130,131,-1,131,124,139,-1,128,131,130,-1,128,129,131,-1,131,129,124,-1,134,132,119,-1,132,138,119,-1,129,135,124,-1,120,136,137,-1,137,129,120,-1,134,137,136,-1,120,133,136,-1,133,134,136,-1,134,135,137,-1,137,135,129,-1,115,122,146,-1,140,42,138,-1,152,143,41,-1,116,124,141,-1,119,138,143,-1,42,41,143,-1,138,42,143,-1,143,152,153,-1,141,153,116,-1,134,143,135,-1,135,143,141,-1,135,141,124,-1,153,151,142,-1,142,151,118,-1,144,142,118,-1,118,121,144,-1,153,144,116,-1,144,153,142,-1,116,144,125,-1,125,139,116,-1,123,125,144,-1,141,143,153,-1,151,153,149,-1,148,161,151,-1,151,149,148,-1,149,153,152,-1,152,150,149,-1,149,150,198,-1,198,148,149,-1,140,138,156,-1,117,158,157,-1,157,159,117,-1,160,158,117,-1,117,161,160,-1,162,164,163,-1,165,159,157,-1,157,167,166,-1,168,167,169,-1,170,166,171,-1,157,166,165,-1,170,165,166,-1,165,145,159,-1,170,145,165,-1,168,169,172,-1,172,173,168,-1,174,172,175,-1,176,175,177,-1,169,167,157,-1,157,178,169,-1,175,176,179,-1,179,180,175,-1,181,180,179,-1,181,179,182,-1,179,176,182,-1,164,162,183,-1,183,162,184,-1,182,176,185,-1,187,182,186,-1,186,188,187,-1,164,188,186,-1,187,188,189,-1,189,188,164,-1,164,186,185,-1,186,182,185,-1,171,166,167,-1,190,184,191,-1,192,79,163,-1,177,193,176,-1,162,163,184,-1,191,163,79,-1,184,163,191,-1,163,194,192,-1,193,177,194,-1,164,185,163,-1,185,193,163,-1,185,176,193,-1,194,195,160,-1,195,158,160,-1,178,157,158,-1,158,195,178,-1,194,177,178,-1,178,195,194,-1,177,175,172,-1,172,178,177,-1,169,178,172,-1,193,194,163,-1,160,196,194,-1,148,196,160,-1,160,161,148,-1,196,197,192,-1,192,194,196,-1,196,148,198,-1,198,197,196,-1,190,199,184,-1}, 1344);
IndexedFaceSet463.setCreaseAngle(3.14159);
IndexedFaceSet463.setSolid(false);
IndexedFaceSet463.setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,79,87,-1,79,15,80,-1,79,14,15,-1,7,17,14,-1,14,16,7,-1,18,17,7,-1,7,19,18,-1,17,18,14,-1,8,7,16,-1,16,20,8,-1,9,6,20,-1,10,9,20,-1,20,21,10,-1,0,12,22,-1,22,12,23,-1,24,22,23,-1,14,18,22,-1,22,24,14,-1,22,18,19,-1,19,0,22,-1,24,23,25,-1,23,83,78,-1,78,25,23,-1,14,24,25,-1,25,15,14,-1,25,78,80,-1,80,15,25,-1,2,6,1,-1,8,20,2,-1,20,6,2,-1,28,27,26,-1,31,30,29,-1,28,32,27,-1,28,35,34,-1,34,33,28,-1,36,33,34,-1,28,33,32,-1,36,38,37,-1,37,38,39,-1,36,40,38,-1,41,44,43,-1,43,42,41,-1,46,45,42,-1,34,35,47,-1,42,45,48,-1,40,47,49,-1,26,27,50,-1,37,33,36,-1,27,37,51,-1,54,53,52,-1,57,56,55,-1,53,37,39,-1,58,51,53,-1,51,37,53,-1,59,44,56,-1,59,43,44,-1,61,60,29,-1,61,62,60,-1,63,36,34,-1,63,34,47,-1,65,76,64,-1,47,35,66,-1,47,66,49,-1,67,64,76,-1,68,67,76,-1,41,40,69,-1,40,49,69,-1,81,83,23,-1,23,70,81,-1,70,71,82,-1,82,81,70,-1,11,70,23,-1,23,12,11,-1,13,71,70,-1,70,11,13,-1,72,73,74,-1,75,74,77,-1,72,74,84,-1,84,74,75,-1,85,86,88,-1,89,75,77,-1,85,88,90,-1,92,74,85,-1,85,91,92,-1,93,94,95,-1,93,95,96,-1,97,74,92,-1,85,93,91,-1,77,74,97,-1,85,90,93,-1,97,98,89,-1,89,77,97,-1,104,103,102,-1,102,105,104,-1,103,107,106,-1,106,108,103,-1,109,105,102,-1,102,110,109,-1,111,108,106,-1,106,112,111,-1,113,103,104,-1,104,114,113,-1,115,107,103,-1,103,113,115,-1,116,118,117,-1,117,120,119,-1,117,119,116,-1,109,121,116,-1,116,122,109,-1,124,123,109,-1,109,122,124,-1,122,116,124,-1,110,125,121,-1,121,109,110,-1,111,125,108,-1,112,126,125,-1,125,111,112,-1,104,127,114,-1,127,128,114,-1,129,128,127,-1,116,129,127,-1,127,124,116,-1,127,104,123,-1,123,124,127,-1,129,130,128,-1,128,130,131,-1,131,132,128,-1,116,119,130,-1,130,129,116,-1,130,119,120,-1,120,131,130,-1,102,103,108,-1,110,102,125,-1,125,102,108,-1,133,135,134,-1,136,138,137,-1,133,134,139,-1,133,141,140,-1,140,142,133,-1,143,140,141,-1,133,139,141,-1,143,145,144,-1,145,146,144,-1,143,144,147,-1,150,149,148,-1,148,151,150,-1,152,149,153,-1,140,154,142,-1,149,155,153,-1,147,156,154,-1,135,157,134,-1,145,143,141,-1,134,158,145,-1,159,161,160,-1,162,164,163,-1,160,146,145,-1,165,160,158,-1,158,160,145,-1,166,163,151,-1,166,151,148,-1,167,138,168,-1,167,168,169,-1,170,140,143,-1,170,154,140,-1,171,173,172,-1,154,174,142,-1,154,156,174,-1,175,172,173,-1,176,172,175,-1,150,177,147,-1,147,177,156,-1,179,178,128,-1,128,132,179,-1,178,179,180,-1,180,181,178,-1,113,114,128,-1,128,178,113,-1,115,113,178,-1,178,181,115,-1,99,100,101,-1,75,182,100,-1,99,183,100,-1,183,75,100,-1,184,185,186,-1,89,182,75,-1,184,187,185,-1,189,188,184,-1,184,100,189,-1,190,191,192,-1,190,193,191,-1,194,189,100,-1,184,188,190,-1,182,194,100,-1,184,190,187,-1,194,182,89,-1,89,98,194,-1,195,198,197,-1,197,196,195,-1,199,200,195,-1,195,196,199,-1,203,202,201,-1,204,197,198,-1,197,206,205,-1,208,207,205,-1,210,209,206,-1,197,204,206,-1,210,206,204,-1,212,198,211,-1,213,212,211,-1,208,215,214,-1,214,207,208,-1,217,216,214,-1,219,218,216,-1,207,220,197,-1,197,205,207,-1,216,222,221,-1,221,219,216,-1,223,221,222,-1,223,224,221,-1,221,224,219,-1,201,225,203,-1,225,226,203,-1,224,227,219,-1,228,230,229,-1,229,224,228,-1,201,229,230,-1,228,231,230,-1,231,201,230,-1,201,227,229,-1,229,227,224,-1,209,205,206,-1,232,233,226,-1,235,202,234,-1,218,219,236,-1,203,226,202,-1,233,234,202,-1,226,233,202,-1,202,235,237,-1,236,237,218,-1,201,202,227,-1,227,202,236,-1,227,236,219,-1,237,199,238,-1,238,199,196,-1,220,238,196,-1,196,197,220,-1,237,239,218,-1,239,237,238,-1,218,239,214,-1,214,216,218,-1,207,214,239,-1,236,202,237,-1,199,237,240,-1,241,200,199,-1,199,240,241,-1,240,237,235,-1,235,242,240,-1,240,242,243,-1,243,241,240,-1,232,226,244,-1,247,246,245,-1,245,248,247,-1,249,246,247,-1,247,250,249,-1,251,253,252,-1,254,248,245,-1,245,256,255,-1,257,256,258,-1,259,255,260,-1,245,255,254,-1,259,254,255,-1,261,262,248,-1,263,262,261,-1,257,258,264,-1,264,265,257,-1,266,264,267,-1,268,267,269,-1,258,256,245,-1,245,270,258,-1,267,268,271,-1,271,272,267,-1,273,272,271,-1,273,271,274,-1,271,268,274,-1,253,251,275,-1,275,251,276,-1,274,268,277,-1,279,274,278,-1,278,280,279,-1,253,280,278,-1,279,280,281,-1,281,280,253,-1,253,278,277,-1,278,274,277,-1,260,255,256,-1,282,276,283,-1,284,285,252,-1,269,286,268,-1,251,252,276,-1,283,252,285,-1,276,252,283,-1,252,287,284,-1,286,269,287,-1,253,277,252,-1,277,286,252,-1,277,268,286,-1,287,288,249,-1,288,246,249,-1,270,245,246,-1,246,288,270,-1,287,269,289,-1,289,288,287,-1,269,267,264,-1,264,289,269,-1,258,289,264,-1,286,287,252,-1,249,290,287,-1,291,290,249,-1,249,250,291,-1,290,292,284,-1,284,287,290,-1,290,291,293,-1,293,292,290,-1,282,294,276,-1}, 1344);
TextureCoordinate& TextureCoordinate464 =  TextureCoordinate();
TextureCoordinate464.setDEF(CString("Occipital_scalp-TEXCOORD_JinBlink"));
TextureCoordinate464.setPoint(new float[]{0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.8767,0.8622,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.9158,0.9539,0.9824,0.9663,0.392,0.6289,0.4147,0.6411,0.4093,0.6273,0.3758,0.6166,0.7576,0.779,0.4093,0.6139,0.8544,0.902,0.8589,0.7975,0.8568,0.8668,0.8497,0.9637,0.7343,0.9872,0.8538,0.9345,0.3771,0.6213,0.4147,0.6411,0.392,0.6289,0.8605,0.8638,0.3927,0.6595,0.4093,0.6122,0.4111,0.6626,0.4239,0.6387,0.4273,0.6228,0.4239,0.6648,0.4352,0.6651,0.4267,0.6717,0.4123,0.664,0.4255,0.614,0.4253,0.6099,0.392,0.6289,0.4093,0.6273,0.4147,0.6411,0.9421,0.8701,0.9509,0.8981,0.9175,0.8974,0.924,0.8702,0.9824,0.8682,0.9824,0.8971,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.8767,0.8622,0.8589,0.7975,0.8605,0.8638,0.8669,0.8674,0.8568,0.8668,0.9208,0.8549,0.8792,0.7991,0.9139,0.8636,0.8835,0.8633,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.7208,0.8401,0.7279,0.8339,0.7338,0.8385,0.7338,0.7727,0.7338,0.7681,0.7397,0.7767,0.7192,0.8201,0.7139,0.8364,0.7171,0.8352,0.7127,0.8419,0.7175,0.832,0.7224,0.8292,0.7247,0.8312,0.7239,0.8169,0.7146,0.8334,0.7452,0.772,0.753,0.7762,0.7152,0.8309,0.7409,0.7703,0.7502,0.7748,0.756,0.7661,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7338,0.8254,0.7291,0.8283,0.7267,0.8275,0.7338,0.7628,0.7385,0.7711,0.7338,0.7682,0.7338,0.82,0.7437,0.7597,0.7484,0.7629,0.7429,0.774,0.7505,0.778,0.7116,0.8233,0.763,0.7872,0.7576,0.779,0.7622,0.7806,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.9158,0.9539,0.8497,0.9637,0.7343,0.9872,0.9824,0.9663,0.4093,0.6139,0.3771,0.6213,0.4147,0.6411,0.3927,0.6595,0.392,0.6289,0.4111,0.6626,0.4239,0.6387,0.4273,0.6228,0.4239,0.6648,0.4267,0.6717,0.4352,0.6651,0.4123,0.664,0.4255,0.614,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8568,0.8668,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.7343,0.9872,0.8605,0.8638,0.7553,0.8982,0.7616,0.9147,0.7343,0.9169,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8324,0.8647,0.8348,0.9045,0.8187,0.8433,0.74,0.8745,0.7497,0.8755,0.761,0.8768,0.7647,0.8593,0.777,0.8787,0.7438,0.8546,0.7596,0.8565,0.7372,0.8736,0.7343,0.8756,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7821,0.8667,0.7875,0.8787,0.8011,0.8823,0.7952,0.9076,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.8107,0.8538,0.786,0.7876,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8568,0.8668,0.8538,0.9345,0.8544,0.902,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.7343,0.9872,0.8605,0.8638}, 590);
IndexedFaceSet463.setTexCoord(&TextureCoordinate464);

Coordinate& Coordinate465 =  Coordinate();
Coordinate465.setDEF(CString("Occipital_scalp_COORD_JinBlink"));
Coordinate465.setPoint(new float[]{6.595,-7.151,-8.257,9.429,-11.8,3.993,8.282,-11.22,-0.9892,4.624,-11.64,-3.306,16.07,-2.995,5.873,15.82,-12.8,1.071,12.64,-1.285,-4.598,16.07,-3.083,2.316,10.71,-6.207,-3.224,8.946,-0.132,-8.392,8.698,-10.19,-8.675,6.297,5.219,-7.352,4.896,-9.878,-12.77,14.18,4.623,2.748,14.87,4.604,5.309,13.01,-7.209,-3.663,11.99,5.219,-3.545,0.0,-0.8915,-10.42,6.297,-0.1284,-9.196,14.21,4.47,4.372,2.98,-10.26,-5.72,10.1,-9.009,-1.975,7.409,-17.27,-8.757,8.44,-9.628,-3.832,4.999,-18.87,-2.922,11.97,-8.702,0.9778,11.23,-15.65,-1.56,3.584,-13.5,0.961,5.778,-12.67,0.2527,2.389,-13.11,-1.714,9.699,-10.52,1.837,11.85,-10.17,6.164,6.297,16.77,2.005,12.13,8.819,-0.9951,11.81,12.89,2.963,0.0,12.79,-5.593,6.297,11.97,-5.107,14.78,-4.967,4.122,9.429,-11.8,3.993,14.37,-8.308,4.774,12.02,-9.081,8.596,15.26,5.042,8.379,16.68,-2.579,7.954,13.63,-4.256,7.877,0.0,-17.31,-6.802,14.16,-2.229,11.05,14.63,-3.955,8.111,12.19,-3.7,12.77,5.31,-15.15,7.498,12.02,-9.081,8.596,12.84,-3.763,10.48,9.046,-12.17,7.498,12.8,-9.61,10.48,5.33,-15.13,10.8,8.079,-13.16,11.16,0.0,-16.06,10.76,-8.946,-0.132,-8.392,-6.297,5.219,-7.352,-11.99,5.219,-3.545,-12.64,-1.285,-4.598,0.0,5.219,-8.851,-6.297,-0.1284,-9.196,-13.01,-7.209,-3.663,-8.698,-10.19,-8.675,-4.896,-9.878,-12.77,0.0,-5.378,-11.66,-6.297,11.97,-5.107,-12.13,8.819,-0.9951,-14.78,-4.967,4.122,-16.07,-2.995,5.873,-10.71,-6.207,-3.224,-15.82,-12.8,1.071,-16.07,-3.083,2.316,-6.595,-7.151,-8.257,0.0,-7.956,-9.37,-14.18,4.623,2.748,-11.81,12.89,2.963,-14.21,4.47,4.372,-14.87,4.604,5.309,-15.26,5.042,8.379,-2.98,-10.26,-5.72,0.0,-12.28,-5.509,0.0,-14.6,-11.22,-7.409,-17.27,-8.757,-10.1,-9.009,-1.975,-8.44,-9.628,-3.832,-8.282,-11.22,-0.9892,-5.778,-12.67,0.2527,-4.624,-11.64,-3.306,-4.999,-18.87,-2.922,-9.699,-10.52,1.837,-9.429,-11.8,3.993,-3.584,-13.5,0.961,-11.23,-15.65,-1.56,-11.97,-8.702,0.9778,-14.37,-8.308,4.774,0.0,-14.56,0.6872,-2.389,-13.11,-1.714,-12.02,-9.081,8.596,-11.85,-10.17,6.164,-6.297,16.77,2.005,0.0,17.52,2.005,-9.046,-12.17,7.498,-5.31,-15.15,7.498,-12.02,-9.081,8.596,-9.429,-11.8,3.993,0.0,-15.55,7.498,-13.63,-4.256,7.877,-12.8,-9.61,10.48,-8.079,-13.16,11.16,-12.84,-3.763,10.48,-12.19,-3.7,12.77,-14.16,-2.229,11.05,-14.63,-3.955,8.111,-5.33,-15.13,10.8,6.083,-2.338,25.93,11.2,8.465,19.14,0.0,13.66,24.16,5.65,12.75,23.28,15.14,-3.7,12.77,10.26,-12.78,18.76,5.008,9.476,25.96,6.444,2.872,25.97,9.382,1.978,23.24,12.3,0.8072,18.53,9.871,1.835,22.39,9.351,-1.718,22.51,9.717,-2.207,21.66,8.342,-8.633,21.21,11.54,-4.435,18.7,9.802,-5.103,20.89,11.62,-5.278,19.98,12.87,-11.91,12.98,12.35,-10.52,15.83,13.35,-8.064,14.95,14.1,-0.8582,16.7,13.11,-9.742,16.72,13.82,-5.06,17.14,15.52,-3.763,10.48,10.32,-0.006923,20.53,17.83,-10.69,7.498,13.16,6.618,15.16,7.716,12.49,21.1,14.39,5.565,12.03,9.288,8.426,22.41,0.0,4.262,28.62,3.961,3.545,27.61,7.09,-2.106,25.09,0.0,17.84,15.38,6.297,17.09,15.38,6.297,18.12,8.31,6.297,15.07,19.12,12.03,13.36,8.31,11.64,11.99,14.62,1.971,-2.435,27.29,1.137,3.737,28.51,15.15,-4.372,7.498,-5.008,9.476,25.96,-5.65,12.75,23.28,0.0,9.83,27.23,-6.297,15.07,19.12,0.0,16.06,20.15,-15.14,-3.7,12.77,-14.39,5.565,12.03,-13.35,-8.064,14.95,-1.137,3.737,28.51,-3.961,3.545,27.61,-6.444,2.872,25.97,-7.09,-2.106,25.09,-9.382,1.978,23.24,-1.971,-2.435,27.29,-6.083,-2.338,25.93,-9.871,1.835,22.39,-9.351,-1.718,22.51,-9.717,-2.207,21.66,-10.32,-0.006923,20.53,-12.3,0.8072,18.53,-11.2,8.465,19.14,-9.288,8.426,22.41,-11.62,-5.278,19.98,-9.802,-5.103,20.89,-8.342,-8.633,21.21,-11.54,-4.435,18.7,-12.87,-11.91,12.98,-15.52,-3.763,10.48,-14.1,-0.8582,16.7,-13.82,-5.06,17.14,-10.26,-12.78,18.76,-13.11,-9.742,16.72,-12.35,-10.52,15.83,-17.83,-10.69,7.498,-16.68,-2.579,7.954,-12.03,13.36,8.31,-13.16,6.618,15.16,-11.64,11.99,14.62,-7.716,12.49,21.1,-6.297,17.09,15.38,-6.297,18.12,8.31,0.0,18.87,8.31,-15.15,-4.372,7.498}, 600);
IndexedFaceSet463.setCoord(&Coordinate465);

Shape461.setGeometry(&IndexedFaceSet463);

Transform460.addChild(&Shape461);

HAnimSegment459.addChild(&Transform460);

Coordinate& Coordinate466 =  Coordinate();
Coordinate466.setUSE(CString("Occipital_scalp_COORD_JinBlink"));
HAnimSegment459.setCoord(&Coordinate466);

HAnimDisplacer& HAnimDisplacer467 =  HAnimDisplacer();
HAnimDisplacer467.X3DNode::setName(CString("occipital_scalp_morphinterpolator"));
HAnimDisplacer467.setDEF(CString("Occipital_scalp_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer467.setCoordIndex(new int32_t[]{3,12,64,82,88,96}, 6);
HAnimDisplacer467.setDisplacements(new float[]{0.0,0.84,0.0,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.16,0.0,0.0,0.84,0.0,0.0,0.15,0.0}, 18);
HAnimSegment459.setDisplacers(HAnimDisplacer467);

HAnimDisplacer& HAnimDisplacer468 =  HAnimDisplacer();
HAnimDisplacer468.X3DNode::setName(CString("occipital_scalp_morphinterpolator"));
HAnimDisplacer468.setDEF(CString("Occipital_scalp_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer468.setCoordIndex(new int32_t[]{82,96,106}, 3);
HAnimDisplacer468.setDisplacements(new float[]{0.0,0.7,0.36,0.0,0.75,0.3638,0.0,0.11,0.0}, 9);
HAnimSegment459.setDisplacers(HAnimDisplacer468);

HAnimDisplacer& HAnimDisplacer469 =  HAnimDisplacer();
HAnimDisplacer469.X3DNode::setName(CString("occipital_scalp_morphinterpolator"));
HAnimDisplacer469.setDEF(CString("Occipital_scalp_MorphInterpolator_JinDimpler"));
HAnimDisplacer469.setCoordIndex(new int32_t[]{27}, 1);
HAnimDisplacer469.setDisplacements(new float[]{-0.001,0.39,0.0}, 3);
HAnimSegment459.setDisplacers(HAnimDisplacer469);

HAnimDisplacer& HAnimDisplacer470 =  HAnimDisplacer();
HAnimDisplacer470.X3DNode::setName(CString("occipital_scalp_morphinterpolator"));
HAnimDisplacer470.setDEF(CString("Occipital_scalp_MorphInterpolator_JinJawDrop"));
HAnimDisplacer470.setCoordIndex(new int32_t[]{106}, 1);
HAnimDisplacer470.setDisplacements(new float[]{0.0,-0.31,0.0}, 3);
HAnimSegment459.setDisplacers(HAnimDisplacer470);

HAnimJoint89.addChildren(&HAnimSegment459);

HAnimSegment& HAnimSegment471 =  HAnimSegment();
HAnimSegment471.X3DNode::setName(CString("philtrum"));
HAnimSegment471.setDEF(CString("hanim_Philtrum"));
Transform& Transform472 =  Transform();
Transform472.setDEF(CString("Philtrum_JinBlink"));
Transform472.setTranslation(new float[]{0.0,9.815,15.0});
Shape& Shape473 =  Shape();
Appearance& Appearance474 =  Appearance();
Appearance474.setUSE(CString("BaseAppearance_JinBlink"));
Shape473.addChild(&Appearance474);

IndexedFaceSet& IndexedFaceSet475 =  IndexedFaceSet();
IndexedFaceSet475.setDEF(CString("Philtrum-FACES_JinBlink"));
IndexedFaceSet475.setCoordIndex(new int32_t[]{0,5,1,-1,1,2,0,-1,4,3,1,-1,1,5,4,-1}, 16);
IndexedFaceSet475.setCreaseAngle(3.14159);
IndexedFaceSet475.setSolid(false);
IndexedFaceSet475.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,6,5,4,-1,4,7,6,-1}, 16);
TextureCoordinate& TextureCoordinate476 =  TextureCoordinate();
TextureCoordinate476.setDEF(CString("Philtrum-TEXCOORD_JinBlink"));
TextureCoordinate476.setPoint(new float[]{0.2511,0.6816,0.2441,0.6816,0.2441,0.6653,0.2548,0.6653,0.2441,0.6653,0.2548,0.6653,0.2511,0.6816,0.2441,0.6816}, 16);
IndexedFaceSet475.setTexCoord(&TextureCoordinate476);

Coordinate& Coordinate477 =  Coordinate();
Coordinate477.setDEF(CString("Philtrum_COORD_JinBlink"));
Coordinate477.setPoint(new float[]{0.3704,0.4343,0.1553,0.0,-0.4343,-0.1589,0.5699,-0.4343,-0.1589,-0.5699,-0.4343,-0.1589,-0.3704,0.4343,0.1553,0.0,0.4343,0.1589}, 18);
IndexedFaceSet475.setCoord(&Coordinate477);

Shape473.setGeometry(&IndexedFaceSet475);

Transform472.addChild(&Shape473);

HAnimSegment471.addChild(&Transform472);

Coordinate& Coordinate478 =  Coordinate();
Coordinate478.setUSE(CString("Philtrum_COORD_JinBlink"));
HAnimSegment471.setCoord(&Coordinate478);

HAnimDisplacer& HAnimDisplacer479 =  HAnimDisplacer();
HAnimDisplacer479.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer479.setDEF(CString("Philtrum_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer479.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer479.setDisplacements(new float[]{0.0,0.4847,0.0,0.0,0.4847,0.0,0.0,0.4847,0.0}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer479);

HAnimDisplacer& HAnimDisplacer480 =  HAnimDisplacer();
HAnimDisplacer480.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer480.setDEF(CString("Philtrum_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer480.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer480.setDisplacements(new float[]{0.0,0.2286,0.0,0.0,0.1405,0.0,0.0,0.1405,0.0}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer480);

HAnimDisplacer& HAnimDisplacer481 =  HAnimDisplacer();
HAnimDisplacer481.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer481.setDEF(CString("Philtrum_MorphInterpolator_JinDimpler"));
HAnimDisplacer481.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer481.setDisplacements(new float[]{0.0,-0.0689,0.0447,0.0,-0.0689,0.0447,0.0,-0.0689,0.0447}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer481);

HAnimDisplacer& HAnimDisplacer482 =  HAnimDisplacer();
HAnimDisplacer482.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer482.setDEF(CString("Philtrum_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer482.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer482.setDisplacements(new float[]{0.0,-0.0514,-0.037,0.0,-0.0514,-0.037,0.0,-0.0514,-0.037}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer482);

HAnimDisplacer& HAnimDisplacer483 =  HAnimDisplacer();
HAnimDisplacer483.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer483.setDEF(CString("Philtrum_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer483.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer483.setDisplacements(new float[]{0.0,0.1071,0.5281,-0.0737,0.1634,0.5281,0.0737,0.1634,0.5281}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer483);

HAnimDisplacer& HAnimDisplacer484 =  HAnimDisplacer();
HAnimDisplacer484.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer484.setDEF(CString("Philtrum_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer484.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer484.setDisplacements(new float[]{-0.0411,0.0,0.5662,-0.0978,0.0,0.5662,0.0156,0.0,0.5662}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer484);

HAnimDisplacer& HAnimDisplacer485 =  HAnimDisplacer();
HAnimDisplacer485.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer485.setDEF(CString("Philtrum_MorphInterpolator_JinLipSuck"));
HAnimDisplacer485.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer485.setDisplacements(new float[]{0.0,-0.5204,-0.6548,0.0,-0.5204,-0.6548,0.0,-0.5204,-0.6548}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer485);

HAnimDisplacer& HAnimDisplacer486 =  HAnimDisplacer();
HAnimDisplacer486.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer486.setDEF(CString("Philtrum_MorphInterpolator_JinLipTightener"));
HAnimDisplacer486.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer486.setDisplacements(new float[]{0.0,-0.0383,0.2409,-0.0415,-0.0383,0.2409,0.0415,-0.0383,0.2409}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer486);

HAnimDisplacer& HAnimDisplacer487 =  HAnimDisplacer();
HAnimDisplacer487.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer487.setDEF(CString("Philtrum_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer487.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer487.setDisplacements(new float[]{0.0,0.2684,0.0,0.0,0.2684,0.0,0.0,0.2684,0.0}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer487);

HAnimDisplacer& HAnimDisplacer488 =  HAnimDisplacer();
HAnimDisplacer488.X3DNode::setName(CString("philtrum_morphinterpolator"));
HAnimDisplacer488.setDEF(CString("Philtrum_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer488.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer488.setDisplacements(new float[]{0.0,0.5016,0.0,0.0,0.5016,0.0,0.0,0.5016,0.0}, 9);
HAnimSegment471.setDisplacers(HAnimDisplacer488);

HAnimJoint89.addChildren(&HAnimSegment471);

HAnimSegment& HAnimSegment489 =  HAnimSegment();
HAnimSegment489.X3DNode::setName(CString("right_bulbar_conjunctiva"));
HAnimSegment489.setDEF(CString("hanim_Right_bulbar_conjunctiva"));
Transform& Transform490 =  Transform();
Transform490.setDEF(CString("Right_bulbar_conjunctiva_JinBlink"));
Transform490.setTranslation(new float[]{-5.794,17.61,11.15});
Shape& Shape491 =  Shape();
Appearance& Appearance492 =  Appearance();
Appearance492.setUSE(CString("BaseAppearance_JinBlink"));
Shape491.addChild(&Appearance492);

IndexedFaceSet& IndexedFaceSet493 =  IndexedFaceSet();
IndexedFaceSet493.setDEF(CString("Right_bulbar_conjunctiva-FACES_JinBlink"));
IndexedFaceSet493.setCoordIndex(new int32_t[]{6,3,1,-1,1,7,6,-1,0,2,26,-1,26,10,0,-1,10,8,0,-1,11,23,5,-1,7,24,12,-1,8,2,0,-1,8,23,2,-1,4,14,19,-1,19,9,4,-1,3,13,14,-1,14,4,3,-1,11,21,22,-1,22,12,25,-1,11,22,25,-1,5,15,21,-1,21,11,5,-1,6,16,13,-1,13,3,6,-1,12,22,17,-1,17,7,12,-1,8,18,15,-1,15,5,8,-1,7,17,16,-1,16,6,7,-1,10,26,19,-1,19,20,10,-1,10,20,18,-1,18,8,10,-1,23,8,5,-1,24,7,1,-1,24,25,12,-1,19,26,9,-1,26,2,9,-1}, 140);
IndexedFaceSet493.setCreaseAngle(3.14159);
IndexedFaceSet493.setSolid(false);
IndexedFaceSet493.setTexCoordIndex(new int32_t[]{7,27,0,-1,0,8,7,-1,2,1,29,-1,29,11,2,-1,11,9,2,-1,12,25,5,-1,8,26,13,-1,9,1,2,-1,9,25,1,-1,4,15,14,-1,14,10,4,-1,3,16,15,-1,15,4,3,-1,12,18,17,-1,17,13,28,-1,12,17,28,-1,5,19,18,-1,18,12,5,-1,6,20,16,-1,16,3,6,-1,13,17,21,-1,21,8,13,-1,9,22,19,-1,19,5,9,-1,8,21,23,-1,23,7,8,-1,11,29,14,-1,14,24,11,-1,11,24,22,-1,22,9,11,-1,25,9,5,-1,26,8,0,-1,26,28,13,-1,14,29,10,-1,29,1,10,-1}, 140);
TextureCoordinate& TextureCoordinate494 =  TextureCoordinate();
TextureCoordinate494.setDEF(CString("Right_bulbar_conjunctiva-TEXCOORD_JinBlink"));
TextureCoordinate494.setPoint(new float[]{0.328,0.824,0.3871,0.8321,0.4052,0.8221,0.3258,0.833,0.3487,0.8409,0.3916,0.7984,0.2983,0.8142,0.2981,0.8094,0.309,0.8013,0.4011,0.8053,0.385,0.8438,0.4198,0.8261,0.3777,0.7936,0.3315,0.7948,0.3885,0.8436,0.3487,0.8409,0.3206,0.8292,0.3315,0.7948,0.372,0.7925,0.3869,0.7967,0.2983,0.8142,0.309,0.8013,0.3966,0.8018,0.2981,0.8094,0.4198,0.8261,0.3889,0.8064,0.3322,0.8026,0.3307,0.8316,0.3442,0.7934,0.3915,0.8393}, 60);
IndexedFaceSet493.setTexCoord(&TextureCoordinate494);

Coordinate& Coordinate495 =  Coordinate();
Coordinate495.setDEF(CString("Right_bulbar_conjunctiva_COORD_JinBlink"));
Coordinate495.setPoint(new float[]{-2.76,0.0973,-0.8547,1.347,0.2034,2.463,-1.784,0.6812,0.4382,1.252,0.6995,2.521,0.2686,1.16,2.287,-2.036,-1.163,-0.4716,2.858,-0.5459,2.699,2.35,-1.007,2.159,-2.632,-0.8129,-0.7113,-1.577,1.203,0.9703,-3.566,0.2646,-1.27,-1.305,-1.43,0.2687,1.132,-1.383,1.574,2.475,0.7643,1.73,0.4787,1.699,1.381,-1.844,-1.377,-0.8846,4.008,-0.6268,1.793,3.316,-1.256,1.253,-2.512,-0.9908,-1.342,-2.026,1.768,-0.3396,-4.008,0.4783,-2.699,-1.039,-1.688,-0.4347,1.656,-1.768,0.6681,-1.878,-0.7347,-0.1728,1.108,-0.9679,1.714,0.4715,-1.396,1.218,-1.925,1.039,0.5784}, 81);
IndexedFaceSet493.setCoord(&Coordinate495);

Shape491.setGeometry(&IndexedFaceSet493);

Transform490.addChild(&Shape491);

HAnimSegment489.addChild(&Transform490);

Coordinate& Coordinate496 =  Coordinate();
Coordinate496.setUSE(CString("Right_bulbar_conjunctiva_COORD_JinBlink"));
HAnimSegment489.setCoord(&Coordinate496);

HAnimDisplacer& HAnimDisplacer497 =  HAnimDisplacer();
HAnimDisplacer497.X3DNode::setName(CString("right_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer497.setDEF(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer497.setCoordIndex(new int32_t[]{3,4,14}, 3);
HAnimDisplacer497.setDisplacements(new float[]{0.0,-0.0591,0.0,0.0,-0.059,0.0,0.5563,-0.507,0.0}, 9);
HAnimSegment489.setDisplacers(HAnimDisplacer497);

HAnimDisplacer& HAnimDisplacer498 =  HAnimDisplacer();
HAnimDisplacer498.X3DNode::setName(CString("right_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer498.setDEF(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer498.setCoordIndex(new int32_t[]{14}, 1);
HAnimDisplacer498.setDisplacements(new float[]{0.0,0.384,0.0}, 3);
HAnimSegment489.setDisplacers(HAnimDisplacer498);

HAnimDisplacer& HAnimDisplacer499 =  HAnimDisplacer();
HAnimDisplacer499.X3DNode::setName(CString("right_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer499.setDEF(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"));
HAnimDisplacer499.setCoordIndex(new int32_t[]{3,4,5,7,8,9,11,12,15,21,25,26}, 12);
HAnimDisplacer499.setDisplacements(new float[]{0.0,-0.3349,0.0,0.0,-0.3349,0.0,0.0,0.3017,0.0,0.0,0.1097,0.0,0.123,0.2263,0.0,0.0,-0.3349,0.0,0.0,0.302,0.0,0.0,0.151,0.0,0.0,0.151,0.0,0.0,0.151,0.0,0.0,0.151,0.0,0.0,-0.335,0.0}, 36);
HAnimSegment489.setDisplacers(HAnimDisplacer499);

HAnimDisplacer& HAnimDisplacer500 =  HAnimDisplacer();
HAnimDisplacer500.X3DNode::setName(CString("right_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer500.setDEF(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinOuterBrowRaiser"));
HAnimDisplacer500.setCoordIndex(new int32_t[]{19}, 1);
HAnimDisplacer500.setDisplacements(new float[]{0.0,0.135,0.0}, 3);
HAnimSegment489.setDisplacers(HAnimDisplacer500);

HAnimDisplacer& HAnimDisplacer501 =  HAnimDisplacer();
HAnimDisplacer501.X3DNode::setName(CString("right_bulbar_conjunctiva_morphinterpolator"));
HAnimDisplacer501.setDEF(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer501.setCoordIndex(new int32_t[]{3,4,6,9,26}, 5);
HAnimDisplacer501.setDisplacements(new float[]{0.0,0.4975,0.0,0.0,0.498,0.0,0.0,0.4976,0.0,0.0,0.498,0.0,0.0,0.497,0.0}, 15);
HAnimSegment489.setDisplacers(HAnimDisplacer501);

HAnimJoint89.addChildren(&HAnimSegment489);

HAnimSegment& HAnimSegment502 =  HAnimSegment();
HAnimSegment502.X3DNode::setName(CString("right_cheek"));
HAnimSegment502.setDEF(CString("hanim_Right_cheek"));
Transform& Transform503 =  Transform();
Transform503.setDEF(CString("Right_cheek_JinBlink"));
Transform503.setTranslation(new float[]{-6.927,11.97,7.646});
Shape& Shape504 =  Shape();
Appearance& Appearance505 =  Appearance();
Appearance505.setUSE(CString("BaseAppearance_JinBlink"));
Shape504.addChild(&Appearance505);

IndexedFaceSet& IndexedFaceSet506 =  IndexedFaceSet();
IndexedFaceSet506.setDEF(CString("Right_cheek-FACES_JinBlink"));
IndexedFaceSet506.setCoordIndex(new int32_t[]{1,19,17,-1,20,19,1,-1,14,13,19,-1,19,13,17,-1,13,14,2,-1,3,2,14,-1,34,32,4,-1,4,18,34,-1,31,10,4,-1,4,32,31,-1,15,3,14,-1,17,13,12,-1,12,13,4,-1,4,10,12,-1,2,3,5,-1,13,2,4,-1,24,11,25,-1,25,26,24,-1,24,29,7,-1,7,11,24,-1,6,17,12,-1,12,8,6,-1,10,31,30,-1,30,9,10,-1,12,10,9,-1,9,8,12,-1,18,5,34,-1,2,5,18,-1,4,2,18,-1,19,21,14,-1,14,21,16,-1,16,22,14,-1,0,21,19,-1,14,22,15,-1,6,27,28,-1,28,17,6,-1,28,1,17,-1,29,24,23,-1,7,30,31,-1,31,11,7,-1,33,25,11,-1,32,33,11,-1,31,32,11,-1,32,34,33,-1}, 176);
IndexedFaceSet506.setCreaseAngle(3.14159);
IndexedFaceSet506.setSolid(false);
IndexedFaceSet506.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,1,-1,1,5,2,-1,5,4,6,-1,7,6,4,-1,39,37,13,-1,13,24,39,-1,36,15,13,-1,13,37,36,-1,8,7,4,-1,18,16,17,-1,17,16,13,-1,13,15,17,-1,19,12,11,-1,16,19,13,-1,28,14,29,-1,29,30,28,-1,28,34,20,-1,20,14,28,-1,21,18,17,-1,17,22,21,-1,15,36,35,-1,35,23,15,-1,17,15,23,-1,23,22,17,-1,24,11,39,-1,19,11,24,-1,13,19,24,-1,1,9,4,-1,4,9,10,-1,10,25,4,-1,26,9,1,-1,4,25,8,-1,21,31,33,-1,33,18,21,-1,32,0,2,-1,34,28,27,-1,20,35,36,-1,36,14,20,-1,38,29,14,-1,37,38,14,-1,36,37,14,-1,37,39,38,-1}, 176);
TextureCoordinate& TextureCoordinate507 =  TextureCoordinate();
TextureCoordinate507.setDEF(CString("Right_cheek-TEXCOORD_JinBlink"));
TextureCoordinate507.setPoint(new float[]{0.44,0.6625,0.4392,0.6356,0.4517,0.649,0.4352,0.6651,0.4454,0.6184,0.4606,0.6289,0.464,0.6174,0.467,0.6086,0.4571,0.6062,0.4273,0.6228,0.4255,0.614,0.3041,0.631,0.3118,0.6205,0.3484,0.6888,0.2881,0.7397,0.3623,0.7239,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.301,0.7815,0.4279,0.7939,0.3993,0.7753,0.3692,0.7714,0.3226,0.6487,0.4413,0.6101,0.4239,0.6387,0.2671,0.7978,0.268,0.7555,0.2727,0.7092,0.2641,0.7133,0.4335,0.819,0.4547,0.661,0.4572,0.8171,0.2845,0.7889,0.3287,0.7742,0.3232,0.7322,0.3144,0.6917,0.2788,0.6949,0.3007,0.651}, 80);
IndexedFaceSet506.setTexCoord(&TextureCoordinate507);

Coordinate& Coordinate508 =  Coordinate();
Coordinate508.setDEF(CString("Right_cheek_COORD_JinBlink"));
Coordinate508.setPoint(new float[]{-5.868,0.6861,-6.977,-5.046,6.009,-3.719,0.5602,-4.076,1.16,3.27,-6.054,1.778,1.388,-1.337,4.299,3.582,-4.636,3.814,-2.834,4.241,1.178,3.857,3.618,5.665,-1.296,3.319,2.709,0.2365,3.054,3.875,0.6487,0.5238,4.348,4.592,1.365,6.024,-2.001,0.9701,1.578,-1.819,-1.515,0.4861,-0.1831,-3.863,-2.615,3.274,-6.596,-0.2282,1.597,-4.834,-6.657,-4.101,2.99,-1.336,2.758,-3.467,4.304,-3.42,-0.01058,-3.863,-5.261,6.596,-4.686,-1.153,-2.865,-6.293,2.435,-5.715,-3.442,5.749,4.473,6.621,5.809,2.217,6.673,5.409,-0.2562,6.321,5.868,-0.0462,6.977,-3.128,5.574,1.136,-4.273,5.681,-0.7129,4.763,4.022,6.147,2.394,3.215,4.911,2.727,0.9674,5.231,3.19,-1.179,5.185,5.082,-1.013,6.115,3.921,-3.342,4.788}, 105);
IndexedFaceSet506.setCoord(&Coordinate508);

Shape504.setGeometry(&IndexedFaceSet506);

Transform503.addChild(&Shape504);

HAnimSegment502.addChild(&Transform503);

Coordinate& Coordinate509 =  Coordinate();
Coordinate509.setUSE(CString("Right_cheek_COORD_JinBlink"));
HAnimSegment502.setCoord(&Coordinate509);

HAnimDisplacer& HAnimDisplacer510 =  HAnimDisplacer();
HAnimDisplacer510.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer510.setDEF(CString("Right_cheek_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer510.setCoordIndex(new int32_t[]{4,10,11,25,26,31,32,33,34}, 9);
HAnimDisplacer510.setDisplacements(new float[]{0.0,0.8378,0.0,0.0,0.8382,0.0,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.8376,0.0,0.0,0.8381,0.0,0.0,0.8383,0.0,-0.591,1.322,0.107}, 27);
HAnimSegment502.setDisplacers(HAnimDisplacer510);

HAnimDisplacer& HAnimDisplacer511 =  HAnimDisplacer();
HAnimDisplacer511.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer511.setDEF(CString("Right_cheek_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer511.setCoordIndex(new int32_t[]{4,6,7,8,9,10,11,12,13,17,19,24,29,30,31,32}, 16);
HAnimDisplacer511.setDisplacements(new float[]{-0.6734,0.6214,0.174,0.0,0.1,0.079,0.0,0.134,-0.107,-0.299,0.38,-0.184,0.0,0.268,0.099,0.0317,1.7512,0.87,-0.255,1.233,0.181,-0.029,1.5769,1.5,-0.588,1.4349,0.0324,0.0,0.462,0.3972,0.0,0.6417,0.0,0.0,0.754,0.0,0.0,0.067,-0.082,0.0,0.268,0.0,-0.001,1.3996,0.448,0.0,0.2915,0.183}, 48);
HAnimSegment502.setDisplacers(HAnimDisplacer511);

HAnimDisplacer& HAnimDisplacer512 =  HAnimDisplacer();
HAnimDisplacer512.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer512.setDEF(CString("Right_cheek_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer512.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer512.setDisplacements(new float[]{0.0,-0.137,0.0}, 3);
HAnimSegment502.setDisplacers(HAnimDisplacer512);

HAnimDisplacer& HAnimDisplacer513 =  HAnimDisplacer();
HAnimDisplacer513.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer513.setDEF(CString("Right_cheek_MorphInterpolator_JinDimpler"));
HAnimDisplacer513.setCoordIndex(new int32_t[]{18,34}, 2);
HAnimDisplacer513.setDisplacements(new float[]{0.407,0.417,0.179,-0.379,0.396,0.153}, 6);
HAnimSegment502.setDisplacers(HAnimDisplacer513);

HAnimDisplacer& HAnimDisplacer514 =  HAnimDisplacer();
HAnimDisplacer514.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer514.setDEF(CString("Right_cheek_MorphInterpolator_JinJawDrop"));
HAnimDisplacer514.setCoordIndex(new int32_t[]{3,5,15}, 3);
HAnimDisplacer514.setDisplacements(new float[]{0.0,-0.616,0.0,0.0,-0.616,0.0,0.0,-0.616,0.0}, 9);
HAnimSegment502.setDisplacers(HAnimDisplacer514);

HAnimDisplacer& HAnimDisplacer515 =  HAnimDisplacer();
HAnimDisplacer515.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer515.setDEF(CString("Right_cheek_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer515.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer515.setDisplacements(new float[]{-0.197,-0.702,0.078}, 3);
HAnimSegment502.setDisplacers(HAnimDisplacer515);

HAnimDisplacer& HAnimDisplacer516 =  HAnimDisplacer();
HAnimDisplacer516.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer516.setDEF(CString("Right_cheek_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer516.setCoordIndex(new int32_t[]{1,8,12,34}, 4);
HAnimDisplacer516.setDisplacements(new float[]{-0.473,-0.03,-0.642,-1.14,0.0,-1.022,-0.583,-0.05,-0.383,-1.176,0.13,-0.375}, 12);
HAnimSegment502.setDisplacers(HAnimDisplacer516);

HAnimDisplacer& HAnimDisplacer517 =  HAnimDisplacer();
HAnimDisplacer517.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer517.setDEF(CString("Right_cheek_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer517.setCoordIndex(new int32_t[]{5,16,18,32,33,34}, 6);
HAnimDisplacer517.setDisplacements(new float[]{0.0,0.0,0.234,0.0,0.0,0.152,0.0,0.0,0.084,0.0,0.0,0.414,0.0,0.0,0.109,0.835,0.0,1.064}, 18);
HAnimSegment502.setDisplacers(HAnimDisplacer517);

HAnimDisplacer& HAnimDisplacer518 =  HAnimDisplacer();
HAnimDisplacer518.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer518.setDEF(CString("Right_cheek_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer518.setCoordIndex(new int32_t[]{5,34}, 2);
HAnimDisplacer518.setDisplacements(new float[]{0.0,0.0,0.163,0.909,0.0,0.46}, 6);
HAnimSegment502.setDisplacers(HAnimDisplacer518);

HAnimDisplacer& HAnimDisplacer519 =  HAnimDisplacer();
HAnimDisplacer519.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer519.setDEF(CString("Right_cheek_MorphInterpolator_JinLipsPart"));
HAnimDisplacer519.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer519.setDisplacements(new float[]{0.0,-0.083,-0.001}, 3);
HAnimSegment502.setDisplacers(HAnimDisplacer519);

HAnimDisplacer& HAnimDisplacer520 =  HAnimDisplacer();
HAnimDisplacer520.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer520.setDEF(CString("Right_cheek_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer520.setCoordIndex(new int32_t[]{18,34}, 2);
HAnimDisplacer520.setDisplacements(new float[]{-1.335,-0.029,-0.124,-0.974,0.009,0.026}, 6);
HAnimSegment502.setDisplacers(HAnimDisplacer520);

HAnimDisplacer& HAnimDisplacer521 =  HAnimDisplacer();
HAnimDisplacer521.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer521.setDEF(CString("Right_cheek_MorphInterpolator_JinLipSuck"));
HAnimDisplacer521.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer521.setDisplacements(new float[]{-0.125,0.0,0.0}, 3);
HAnimSegment502.setDisplacers(HAnimDisplacer521);

HAnimDisplacer& HAnimDisplacer522 =  HAnimDisplacer();
HAnimDisplacer522.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer522.setDEF(CString("Right_cheek_MorphInterpolator_JinLipTightener"));
HAnimDisplacer522.setCoordIndex(new int32_t[]{34}, 1);
HAnimDisplacer522.setDisplacements(new float[]{0.521,0.17,1.038}, 3);
HAnimSegment502.setDisplacers(HAnimDisplacer522);

HAnimDisplacer& HAnimDisplacer523 =  HAnimDisplacer();
HAnimDisplacer523.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer523.setDEF(CString("Right_cheek_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer523.setCoordIndex(new int32_t[]{2,3,5,14,15,18,22,34}, 8);
HAnimDisplacer523.setDisplacements(new float[]{0.0,-0.909,0.074,0.0,-2.034,-0.089,0.0,-2.011,-0.01,0.0,-0.688,0.0,0.0,-1.574,-0.1141,0.0,-1.34,0.088,0.0,-0.817,0.0,0.0,-0.736,0.0}, 24);
HAnimSegment502.setDisplacers(HAnimDisplacer523);

HAnimDisplacer& HAnimDisplacer524 =  HAnimDisplacer();
HAnimDisplacer524.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer524.setDEF(CString("Right_cheek_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer524.setCoordIndex(new int32_t[]{25,26,32,33}, 4);
HAnimDisplacer524.setDisplacements(new float[]{0.078,0.5523,0.0,0.0,0.376,0.0,0.146,0.2645,0.0,0.0,0.4707,0.0}, 12);
HAnimSegment502.setDisplacers(HAnimDisplacer524);

HAnimDisplacer& HAnimDisplacer525 =  HAnimDisplacer();
HAnimDisplacer525.X3DNode::setName(CString("right_cheek_morphinterpolator"));
HAnimDisplacer525.setDEF(CString("Right_cheek_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer525.setCoordIndex(new int32_t[]{25,26,33}, 3);
HAnimDisplacer525.setDisplacements(new float[]{0.0,0.2937,0.0,0.0,0.2937,0.0,0.0,0.5019,0.0}, 9);
HAnimSegment502.setDisplacers(HAnimDisplacer525);

HAnimJoint89.addChildren(&HAnimSegment502);

HAnimSegment& HAnimSegment526 =  HAnimSegment();
HAnimSegment526.X3DNode::setName(CString("right_dorsum"));
HAnimSegment526.setDEF(CString("hanim_Right_dorsum"));
Transform& Transform527 =  Transform();
Transform527.setDEF(CString("Right_dorsum_JinBlink"));
Transform527.setTranslation(new float[]{-0.7065,14.64,14.87});
Shape& Shape528 =  Shape();
Appearance& Appearance529 =  Appearance();
Appearance529.setUSE(CString("BaseAppearance_JinBlink"));
Shape528.addChild(&Appearance529);

IndexedFaceSet& IndexedFaceSet530 =  IndexedFaceSet();
IndexedFaceSet530.setDEF(CString("Right_dorsum-FACES_JinBlink"));
IndexedFaceSet530.setCoordIndex(new int32_t[]{3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1}, 16);
IndexedFaceSet530.setCreaseAngle(3.14159);
IndexedFaceSet530.setSolid(false);
IndexedFaceSet530.setTexCoordIndex(new int32_t[]{3,4,1,-1,1,0,3,-1,5,2,1,-1,1,4,5,-1}, 16);
TextureCoordinate& TextureCoordinate531 =  TextureCoordinate();
TextureCoordinate531.setDEF(CString("Right_dorsum-TEXCOORD_JinBlink"));
TextureCoordinate531.setPoint(new float[]{0.2534,0.8152,0.2534,0.767,0.2528,0.7186,0.2671,0.7978,0.268,0.7555,0.2641,0.7133}, 12);
IndexedFaceSet530.setTexCoord(&TextureCoordinate531);

Coordinate& Coordinate532 =  Coordinate();
Coordinate532.setDEF(CString("Right_dorsum_COORD_JinBlink"));
Coordinate532.setPoint(new float[]{0.2793,2.722,-0.1346,0.471,0.1584,-0.08532,0.25,-2.447,0.6076,-0.471,1.797,-0.6076,-0.4116,-0.459,-0.556,-0.352,-2.722,-0.252}, 18);
IndexedFaceSet530.setCoord(&Coordinate532);

Shape528.setGeometry(&IndexedFaceSet530);

Transform527.addChild(&Shape528);

HAnimSegment526.addChild(&Transform527);

Coordinate& Coordinate533 =  Coordinate();
Coordinate533.setUSE(CString("Right_dorsum_COORD_JinBlink"));
HAnimSegment526.setCoord(&Coordinate533);

HAnimDisplacer& HAnimDisplacer534 =  HAnimDisplacer();
HAnimDisplacer534.X3DNode::setName(CString("right_dorsum_morphinterpolator"));
HAnimDisplacer534.setDEF(CString("Right_dorsum_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer534.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer534.setDisplacements(new float[]{0.0,0.838,0.0}, 3);
HAnimSegment526.setDisplacers(HAnimDisplacer534);

HAnimDisplacer& HAnimDisplacer535 =  HAnimDisplacer();
HAnimDisplacer535.X3DNode::setName(CString("right_dorsum_morphinterpolator"));
HAnimDisplacer535.setDEF(CString("Right_dorsum_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer535.setCoordIndex(new int32_t[]{4}, 1);
HAnimDisplacer535.setDisplacements(new float[]{0.0,0.7543,0.0}, 3);
HAnimSegment526.setDisplacers(HAnimDisplacer535);

HAnimDisplacer& HAnimDisplacer536 =  HAnimDisplacer();
HAnimDisplacer536.X3DNode::setName(CString("right_dorsum_morphinterpolator"));
HAnimDisplacer536.setDEF(CString("Right_dorsum_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer536.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer536.setDisplacements(new float[]{0.0,0.376,0.0}, 3);
HAnimSegment526.setDisplacers(HAnimDisplacer536);

HAnimDisplacer& HAnimDisplacer537 =  HAnimDisplacer();
HAnimDisplacer537.X3DNode::setName(CString("right_dorsum_morphinterpolator"));
HAnimDisplacer537.setDEF(CString("Right_dorsum_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer537.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer537.setDisplacements(new float[]{0.0,0.293,0.0}, 3);
HAnimSegment526.setDisplacers(HAnimDisplacer537);

HAnimJoint89.addChildren(&HAnimSegment526);

HAnimSegment& HAnimSegment538 =  HAnimSegment();
HAnimSegment538.X3DNode::setName(CString("right_ear"));
HAnimSegment538.setDEF(CString("hanim_Right_ear"));
Transform& Transform539 =  Transform();
Transform539.setDEF(CString("Right_ear_JinBlink"));
Transform539.setTranslation(new float[]{-12.49,15.99,1.017});
Shape& Shape540 =  Shape();
Appearance& Appearance541 =  Appearance();
Appearance541.setUSE(CString("BaseAppearance_JinBlink"));
Shape540.addChild(&Appearance541);

IndexedFaceSet& IndexedFaceSet542 =  IndexedFaceSet();
IndexedFaceSet542.setDEF(CString("Right_ear-FACES_JinBlink"));
IndexedFaceSet542.setCoordIndex(new int32_t[]{6,0,2,-1,5,2,1,-1,1,4,5,-1,2,0,1,-1,0,6,7,-1,7,3,0,-1,4,1,0,-1,0,3,4,-1}, 32);
IndexedFaceSet542.setCreaseAngle(3.14159);
IndexedFaceSet542.setSolid(false);
IndexedFaceSet542.setTexCoordIndex(new int32_t[]{0,1,2,-1,5,2,3,-1,3,4,5,-1,2,1,3,-1,1,0,6,-1,6,7,1,-1,4,3,1,-1,1,7,4,-1}, 32);
TextureCoordinate& TextureCoordinate543 =  TextureCoordinate();
TextureCoordinate543.setDEF(CString("Right_ear-TEXCOORD_JinBlink"));
TextureCoordinate543.setPoint(new float[]{0.4392,0.6356,0.4239,0.6408,0.4239,0.6387,0.412,0.6504,0.4123,0.664,0.4239,0.6648,0.4352,0.6651,0.4267,0.6717}, 16);
IndexedFaceSet542.setTexCoord(&TextureCoordinate543);

Coordinate& Coordinate544 =  Coordinate();
Coordinate544.setDEF(CString("Right_ear_COORD_JinBlink"));
Coordinate544.setPoint(new float[]{-1.104,-2.879,-0.3646,-1.92,-0.7197,-2.765,-0.3083,-3.342,-0.3477,-1.674,4.039,0.222,-2.14,2.313,-2.716,-0.349,2.504,-0.3477,2.14,-4.039,2.765,0.2989,2.568,1.943}, 24);
IndexedFaceSet542.setCoord(&Coordinate544);

Shape540.setGeometry(&IndexedFaceSet542);

Transform539.addChild(&Shape540);

HAnimSegment538.addChild(&Transform539);

Coordinate& Coordinate545 =  Coordinate();
Coordinate545.setUSE(CString("Right_ear_COORD_JinBlink"));
HAnimSegment538.setCoord(&Coordinate545);

HAnimJoint89.addChildren(&HAnimSegment538);

HAnimSegment& HAnimSegment546 =  HAnimSegment();
HAnimSegment546.X3DNode::setName(CString("right_eyebrow"));
HAnimSegment546.setDEF(CString("hanim_Right_eyebrow"));
Transform& Transform547 =  Transform();
Transform547.setDEF(CString("Right_eyebrow_JinBlink"));
Transform547.setTranslation(new float[]{-5.691,19.58,13.13});
Shape& Shape548 =  Shape();
Appearance& Appearance549 =  Appearance();
Appearance549.setUSE(CString("BaseAppearance_JinBlink"));
Shape548.addChild(&Appearance549);

IndexedFaceSet& IndexedFaceSet550 =  IndexedFaceSet();
IndexedFaceSet550.setDEF(CString("Right_eyebrow-FACES_JinBlink"));
IndexedFaceSet550.setCoordIndex(new int32_t[]{5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1}, 32);
IndexedFaceSet550.setCreaseAngle(3.14159);
IndexedFaceSet550.setSolid(false);
IndexedFaceSet550.setTexCoordIndex(new int32_t[]{5,8,7,-1,7,1,5,-1,6,4,0,-1,7,6,0,-1,0,1,7,-1,2,3,0,-1,0,4,2,-1,3,1,0,-1}, 32);
TextureCoordinate& TextureCoordinate551 =  TextureCoordinate();
TextureCoordinate551.setDEF(CString("Right_eyebrow-TEXCOORD_JinBlink"));
TextureCoordinate551.setPoint(new float[]{0.3395,0.8606,0.3992,0.8783,0.2728,0.8741,0.3391,0.876,0.274,0.8322,0.4299,0.8825,0.3402,0.8534,0.3979,0.8641,0.4266,0.8643}, 18);
IndexedFaceSet550.setTexCoord(&TextureCoordinate551);

Coordinate& Coordinate552 =  Coordinate();
Coordinate552.setDEF(CString("Right_eyebrow_COORD_JinBlink"));
Coordinate552.setPoint(new float[]{0.6206,0.2925,1.523,-2.547,1.129,-0.8682,4.175,0.9255,2.806,0.6464,1.103,1.5,4.104,-1.337,2.665,-4.175,1.337,-2.599,0.6118,-0.2218,1.466,-2.366,0.3082,-0.9723,-4.011,0.3542,-2.806}, 27);
IndexedFaceSet550.setCoord(&Coordinate552);

Shape548.setGeometry(&IndexedFaceSet550);

Transform547.addChild(&Shape548);

HAnimSegment546.addChild(&Transform547);

Coordinate& Coordinate553 =  Coordinate();
Coordinate553.setUSE(CString("Right_eyebrow_COORD_JinBlink"));
HAnimSegment546.setCoord(&Coordinate553);

HAnimDisplacer& HAnimDisplacer554 =  HAnimDisplacer();
HAnimDisplacer554.X3DNode::setName(CString("right_eyebrow_morphinterpolator"));
HAnimDisplacer554.setDEF(CString("Right_eyebrow_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer554.setCoordIndex(new int32_t[]{0,1,3,4,5,6,7,8}, 8);
HAnimDisplacer554.setDisplacements(new float[]{0.5564,-0.5065,0.0,0.0,-0.094,0.0,0.5566,-0.5069,0.0,0.303,-0.395,0.0,0.0,-0.094,0.0,0.5562,-0.5066,0.0,0.0,-0.0941,0.0,0.0,-0.0942,0.0}, 24);
HAnimSegment546.setDisplacers(HAnimDisplacer554);

HAnimDisplacer& HAnimDisplacer555 =  HAnimDisplacer();
HAnimDisplacer555.X3DNode::setName(CString("right_eyebrow_morphinterpolator"));
HAnimDisplacer555.setDEF(CString("Right_eyebrow_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer555.setCoordIndex(new int32_t[]{0,1,3,4,6,7}, 6);
HAnimDisplacer555.setDisplacements(new float[]{0.0,0.3842,0.0,0.0,0.136,0.0,0.0,0.384,0.0,0.0,0.3843,0.0,0.0,0.3842,0.0,0.0,0.1354,0.0}, 18);
HAnimSegment546.setDisplacers(HAnimDisplacer555);

HAnimDisplacer& HAnimDisplacer556 =  HAnimDisplacer();
HAnimDisplacer556.X3DNode::setName(CString("right_eyebrow_morphinterpolator"));
HAnimDisplacer556.setDEF(CString("Right_eyebrow_MorphInterpolator_JinOuterBrowRaiser"));
HAnimDisplacer556.setCoordIndex(new int32_t[]{1,5,7,8}, 4);
HAnimDisplacer556.setDisplacements(new float[]{0.0,0.655,0.0,0.0,0.268,0.0,0.0,0.6547,0.0,0.0,0.2686,0.0}, 12);
HAnimSegment546.setDisplacers(HAnimDisplacer556);

HAnimDisplacer& HAnimDisplacer557 =  HAnimDisplacer();
HAnimDisplacer557.X3DNode::setName(CString("right_eyebrow_morphinterpolator"));
HAnimDisplacer557.setDEF(CString("Right_eyebrow_MorphInterpolator_JinSquint"));
HAnimDisplacer557.setCoordIndex(new int32_t[]{7,8}, 2);
HAnimDisplacer557.setDisplacements(new float[]{0.0,-0.4631,0.0,0.0,-0.4632,0.0}, 6);
HAnimSegment546.setDisplacers(HAnimDisplacer557);

HAnimDisplacer& HAnimDisplacer558 =  HAnimDisplacer();
HAnimDisplacer558.X3DNode::setName(CString("right_eyebrow_morphinterpolator"));
HAnimDisplacer558.setDEF(CString("Right_eyebrow_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer558.setCoordIndex(new int32_t[]{6}, 1);
HAnimDisplacer558.setDisplacements(new float[]{0.0,0.4975,0.0}, 3);
HAnimSegment546.setDisplacers(HAnimDisplacer558);

HAnimJoint89.addChildren(&HAnimSegment546);

HAnimSegment& HAnimSegment559 =  HAnimSegment();
HAnimSegment559.X3DNode::setName(CString("right_forehead"));
HAnimSegment559.setDEF(CString("hanim_Right_forehead"));
Transform& Transform560 =  Transform();
Transform560.setDEF(CString("Right_forehead_JinBlink"));
Transform560.setTranslation(new float[]{-6.652,27.61,9.229});
Shape& Shape561 =  Shape();
Appearance& Appearance562 =  Appearance();
Appearance562.setUSE(CString("BaseAppearance_JinBlink"));
Shape561.addChild(&Appearance562);

IndexedFaceSet& IndexedFaceSet563 =  IndexedFaceSet();
IndexedFaceSet563.setDEF(CString("Right_forehead-FACES_JinBlink"));
IndexedFaceSet563.setCoordIndex(new int32_t[]{1,4,13,-1,13,9,1,-1,3,9,2,-1,3,15,0,-1,15,14,0,-1,0,14,16,-1,1,0,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,2,5,6,-1,6,3,2,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,2,9,-1,1,9,3,-1,3,0,1,-1,1,20,19,-1,19,4,1,-1,2,10,11,-1,11,5,2,-1,5,11,12,-1,12,7,5,-1}, 104);
IndexedFaceSet563.setCreaseAngle(3.14159);
IndexedFaceSet563.setSolid(false);
IndexedFaceSet563.setTexCoordIndex(new int32_t[]{1,4,13,-1,13,9,1,-1,3,9,0,-1,3,15,2,-1,15,14,2,-1,2,14,16,-1,1,2,16,-1,16,20,1,-1,3,6,17,-1,17,15,3,-1,0,5,6,-1,6,3,0,-1,6,8,18,-1,18,17,6,-1,5,7,8,-1,8,6,5,-1,9,13,10,-1,10,0,9,-1,1,9,3,-1,3,2,1,-1,1,20,19,-1,19,4,1,-1,0,10,11,-1,11,5,0,-1,5,11,12,-1,12,7,5,-1}, 104);
TextureCoordinate& TextureCoordinate564 =  TextureCoordinate();
TextureCoordinate564.setDEF(CString("Right_forehead-TEXCOORD_JinBlink"));
TextureCoordinate564.setPoint(new float[]{0.3563,0.9819,0.3371,0.9436,0.414,0.9365,0.428,0.9618,0.2706,0.9459,0.3807,0.9869,0.434,0.9653,0.3786,0.9951,0.4425,0.9551,0.3372,0.9707,0.3002,0.9788,0.3015,0.9807,0.3016,0.9833,0.2804,0.9652,0.4299,0.8825,0.4655,0.9081,0.3992,0.8783,0.4676,0.8967,0.465,0.9097,0.2728,0.8741,0.3391,0.876}, 42);
IndexedFaceSet563.setTexCoord(&TextureCoordinate564);

Coordinate& Coordinate565 =  Coordinate();
Coordinate565.setDEF(CString("Right_forehead_COORD_JinBlink"));
Coordinate565.setPoint(new float[]{-2.366,-3.832,2.607,1.721,-3.37,5.298,0.9278,3.698,2.337,-2.798,0.5048,1.078,5.256,-3.235,6.945,-0.1169,5.415,-1.676,-3.513,2.123,-2.845,-0.04584,5.238,-6.945,-3.382,0.4603,-6.945,1.306,1.607,4.614,4.278,5.326,2.844,4.148,6.951,-0.7431,4.148,7.108,-6.945,4.686,2.054,6.111,-3.214,-6.697,1.298,-4.876,-4.833,-1.108,-1.586,-6.904,3.028,-5.256,-4.053,-3.68,-4.869,-4.024,-6.945,5.136,-7.108,6.703,1.607,-6.931,5.397}, 63);
IndexedFaceSet563.setCoord(&Coordinate565);

Shape561.setGeometry(&IndexedFaceSet563);

Transform560.addChild(&Shape561);

HAnimSegment559.addChild(&Transform560);

Coordinate& Coordinate566 =  Coordinate();
Coordinate566.setUSE(CString("Right_forehead_COORD_JinBlink"));
HAnimSegment559.setCoord(&Coordinate566);

HAnimDisplacer& HAnimDisplacer567 =  HAnimDisplacer();
HAnimDisplacer567.X3DNode::setName(CString("right_forehead_morphinterpolator"));
HAnimDisplacer567.setDEF(CString("Right_forehead_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer567.setCoordIndex(new int32_t[]{14,16,20}, 3);
HAnimDisplacer567.setDisplacements(new float[]{0.0,-0.094,0.0,0.0,-0.094,0.0,0.557,-0.506,0.0}, 9);
HAnimSegment559.setDisplacers(HAnimDisplacer567);

HAnimDisplacer& HAnimDisplacer568 =  HAnimDisplacer();
HAnimDisplacer568.X3DNode::setName(CString("right_forehead_morphinterpolator"));
HAnimDisplacer568.setDEF(CString("Right_forehead_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer568.setCoordIndex(new int32_t[]{16,20}, 2);
HAnimDisplacer568.setDisplacements(new float[]{0.0,0.135,0.0,0.0,0.384,0.0}, 6);
HAnimSegment559.setDisplacers(HAnimDisplacer568);

HAnimDisplacer& HAnimDisplacer569 =  HAnimDisplacer();
HAnimDisplacer569.X3DNode::setName(CString("right_forehead_morphinterpolator"));
HAnimDisplacer569.setDEF(CString("Right_forehead_MorphInterpolator_JinOuterBrowRaiser"));
HAnimDisplacer569.setCoordIndex(new int32_t[]{14,16}, 2);
HAnimDisplacer569.setDisplacements(new float[]{0.0,0.269,0.0,0.0,0.654,0.0}, 6);
HAnimSegment559.setDisplacers(HAnimDisplacer569);

HAnimJoint89.addChildren(&HAnimSegment559);

HAnimSegment& HAnimSegment570 =  HAnimSegment();
HAnimSegment570.X3DNode::setName(CString("right_lower_eyelid"));
HAnimSegment570.setDEF(CString("hanim_Right_lower_eyelid"));
Transform& Transform571 =  Transform();
Transform571.setDEF(CString("Right_lower_eyelid_JinBlink"));
Transform571.setTranslation(new float[]{-6.11,16.45,11.32});
Shape& Shape572 =  Shape();
Appearance& Appearance573 =  Appearance();
Appearance573.setUSE(CString("BaseAppearance_JinBlink"));
Shape572.addChild(&Appearance573);

IndexedFaceSet& IndexedFaceSet574 =  IndexedFaceSet();
IndexedFaceSet574.setDEF(CString("Right_lower_eyelid-FACES_JinBlink"));
IndexedFaceSet574.setCoordIndex(new int32_t[]{8,9,10,-1,10,3,8,-1,3,0,7,-1,7,8,3,-1,13,1,6,-1,6,14,13,-1,0,2,5,-1,5,7,0,-1,11,12,5,-1,5,2,11,-1,4,9,6,-1,6,1,4,-1,10,9,4,-1}, 52);
IndexedFaceSet574.setCreaseAngle(3.14159);
IndexedFaceSet574.setSolid(false);
IndexedFaceSet574.setTexCoordIndex(new int32_t[]{8,9,10,-1,10,0,8,-1,0,2,7,-1,7,8,0,-1,13,3,6,-1,6,14,13,-1,2,4,5,-1,5,7,2,-1,11,12,5,-1,5,4,11,-1,1,9,6,-1,6,3,1,-1,10,9,1,-1}, 52);
TextureCoordinate& TextureCoordinate575 =  TextureCoordinate();
TextureCoordinate575.setDEF(CString("Right_lower_eyelid-TEXCOORD_JinBlink"));
TextureCoordinate575.setPoint(new float[]{0.3777,0.7936,0.3315,0.7948,0.3916,0.7984,0.309,0.8013,0.4011,0.8053,0.4279,0.7939,0.301,0.7815,0.3993,0.7753,0.3692,0.7714,0.3287,0.7742,0.344,0.7945,0.4198,0.8261,0.4335,0.819,0.2981,0.8094,0.2845,0.7889}, 30);
IndexedFaceSet574.setTexCoord(&TextureCoordinate575);

Coordinate& Coordinate576 =  Coordinate();
Coordinate576.setDEF(CString("Right_lower_eyelid_COORD_JinBlink"));
Coordinate576.setPoint(new float[]{-1.719,-0.0007954,-0.6346,2.666,0.1549,1.996,-2.315,0.3494,-0.8744,-0.989,-0.2676,0.1056,1.449,-0.2205,1.411,-3.651,-0.24,-2.494,3.04,-0.8628,1.994,-2.113,-1.162,-0.9625,-0.5806,-1.427,0.2034,1.577,-1.266,1.24,0.7878,-0.2335,1.055,-3.25,1.427,-1.433,-3.946,1.094,-2.536,3.174,0.6164,2.536,3.946,-0.4586,2.476}, 45);
IndexedFaceSet574.setCoord(&Coordinate576);

Shape572.setGeometry(&IndexedFaceSet574);

Transform571.addChild(&Shape572);

HAnimSegment570.addChild(&Transform571);

Coordinate& Coordinate577 =  Coordinate();
Coordinate577.setUSE(CString("Right_lower_eyelid_COORD_JinBlink"));
HAnimSegment570.setCoord(&Coordinate577);

HAnimDisplacer& HAnimDisplacer578 =  HAnimDisplacer();
HAnimDisplacer578.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer578.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinBlink"));
HAnimDisplacer578.setCoordIndex(new int32_t[]{0,1,2,4}, 4);
HAnimDisplacer578.setDisplacements(new float[]{0.0,0.1171,0.1997,0.0,0.2271,0.251,0.0,0.2126,0.0762,-0.165,0.1045,0.0}, 12);
HAnimSegment570.setDisplacers(HAnimDisplacer578);

HAnimDisplacer& HAnimDisplacer579 =  HAnimDisplacer();
HAnimDisplacer579.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer579.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer579.setCoordIndex(new int32_t[]{5,6,7,8,9,14}, 6);
HAnimDisplacer579.setDisplacements(new float[]{0.0,0.1005,0.079,0.0,0.1344,-0.107,-0.299,0.3808,-0.1835,0.0,0.268,0.0997,0.0,0.2684,0.0,0.0,0.067,-0.082}, 18);
HAnimSegment570.setDisplacers(HAnimDisplacer579);

HAnimDisplacer& HAnimDisplacer580 =  HAnimDisplacer();
HAnimDisplacer580.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer580.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinEyesClosed"));
HAnimDisplacer580.setCoordIndex(new int32_t[]{0,1,2,4}, 4);
HAnimDisplacer580.setDisplacements(new float[]{0.0,0.1171,0.1997,0.0,0.2271,0.251,0.0,0.2126,0.0762,-0.165,0.1045,0.0}, 12);
HAnimSegment570.setDisplacers(HAnimDisplacer580);

HAnimDisplacer& HAnimDisplacer581 =  HAnimDisplacer();
HAnimDisplacer581.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer581.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinLidDroop"));
HAnimDisplacer581.setCoordIndex(new int32_t[]{11}, 1);
HAnimDisplacer581.setDisplacements(new float[]{0.0,-0.349,0.0}, 3);
HAnimSegment570.setDisplacers(HAnimDisplacer581);

HAnimDisplacer& HAnimDisplacer582 =  HAnimDisplacer();
HAnimDisplacer582.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer582.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinLidTightener"));
HAnimDisplacer582.setCoordIndex(new int32_t[]{0,1,2,3,4,10}, 6);
HAnimDisplacer582.setDisplacements(new float[]{0.0,0.3018,0.0,0.0,0.1101,0.0,0.123,0.2262,0.0,0.0,0.3018,0.0,0.0,0.1513,0.0,0.0,0.1512,0.0}, 18);
HAnimSegment570.setDisplacers(HAnimDisplacer582);

HAnimDisplacer& HAnimDisplacer583 =  HAnimDisplacer();
HAnimDisplacer583.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer583.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinSquint"));
HAnimDisplacer583.setCoordIndex(new int32_t[]{0,1,2,3,4,10,11,12}, 8);
HAnimDisplacer583.setDisplacements(new float[]{0.0,0.6387,0.7019,0.0,0.3839,0.263,0.0,0.499,0.4721,0.0,0.7235,0.3988,0.0,0.6387,0.398,0.0,0.6386,0.399,0.0,-0.078,0.0,0.0,-0.078,0.0}, 24);
HAnimSegment570.setDisplacers(HAnimDisplacer583);

HAnimDisplacer& HAnimDisplacer584 =  HAnimDisplacer();
HAnimDisplacer584.X3DNode::setName(CString("right_lower_eyelid_morphinterpolator"));
HAnimDisplacer584.setDEF(CString("Right_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer584.setCoordIndex(new int32_t[]{13}, 1);
HAnimDisplacer584.setDisplacements(new float[]{0.0,0.4976,0.0}, 3);
HAnimSegment570.setDisplacers(HAnimDisplacer584);

HAnimJoint89.addChildren(&HAnimSegment570);

HAnimSegment& HAnimSegment585 =  HAnimSegment();
HAnimSegment585.X3DNode::setName(CString("right_lower_vermillion_lip"));
HAnimSegment585.setDEF(CString("hanim_Right_lower_vermillion_lip"));
Transform& Transform586 =  Transform();
Transform586.setDEF(CString("Right_lower_vermillion_lip_JinBlink"));
Transform586.setTranslation(new float[]{-1.788,8.405,13.04});
Shape& Shape587 =  Shape();
Appearance& Appearance588 =  Appearance();
Appearance588.setUSE(CString("BaseAppearance_JinBlink"));
Shape587.addChild(&Appearance588);

IndexedFaceSet& IndexedFaceSet589 =  IndexedFaceSet();
IndexedFaceSet589.setDEF(CString("Right_lower_vermillion_lip-FACES_JinBlink"));
IndexedFaceSet589.setCoordIndex(new int32_t[]{2,0,1,-1}, 4);
IndexedFaceSet589.setCreaseAngle(3.14159);
IndexedFaceSet589.setSolid(false);
IndexedFaceSet589.setTexCoordIndex(new int32_t[]{2,0,1,-1}, 4);
TextureCoordinate& TextureCoordinate590 =  TextureCoordinate();
TextureCoordinate590.setDEF(CString("Right_lower_vermillion_lip-TEXCOORD_JinBlink"));
TextureCoordinate590.setPoint(new float[]{0.2548,0.6554,0.3007,0.651,0.2652,0.6384}, 6);
IndexedFaceSet589.setTexCoord(&TextureCoordinate590);

Coordinate& Coordinate591 =  Coordinate();
Coordinate591.setDEF(CString("Right_lower_vermillion_lip_COORD_JinBlink"));
Coordinate591.setPoint(new float[]{1.218,0.4506,0.603,-1.218,0.219,-0.603,1.154,-0.4506,0.3592}, 9);
IndexedFaceSet589.setCoord(&Coordinate591);

Shape587.setGeometry(&IndexedFaceSet589);

Transform586.addChild(&Shape587);

HAnimSegment585.addChild(&Transform586);

Coordinate& Coordinate592 =  Coordinate();
Coordinate592.setUSE(CString("Right_lower_vermillion_lip_COORD_JinBlink"));
HAnimSegment585.setCoord(&Coordinate592);

HAnimDisplacer& HAnimDisplacer593 =  HAnimDisplacer();
HAnimDisplacer593.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer593.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer593.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer593.setDisplacements(new float[]{0.0,0.3821,0.435,-0.591,1.323,0.1066,0.0,0.7896,0.4659}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer593);

HAnimDisplacer& HAnimDisplacer594 =  HAnimDisplacer();
HAnimDisplacer594.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer594.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer594.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer594.setDisplacements(new float[]{0.0,0.187,0.0,0.0,-0.1372,0.0,0.0,0.6497,0.364}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer594);

HAnimDisplacer& HAnimDisplacer595 =  HAnimDisplacer();
HAnimDisplacer595.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer595.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer595.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer595.setDisplacements(new float[]{0.0,-0.0896,0.533,-0.379,0.396,0.1527,0.0,0.6332,0.8798}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer595);

HAnimDisplacer& HAnimDisplacer596 =  HAnimDisplacer();
HAnimDisplacer596.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer596.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinJawDrop"));
HAnimDisplacer596.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer596.setDisplacements(new float[]{0.0,-0.6156,0.0,0.0,-0.6154,0.0}, 6);
HAnimSegment585.setDisplacers(HAnimDisplacer596);

HAnimDisplacer& HAnimDisplacer597 =  HAnimDisplacer();
HAnimDisplacer597.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer597.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer597.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer597.setDisplacements(new float[]{0.0,-0.0368,0.837,-0.197,-0.7014,0.0777,0.0,0.5213,1.2488}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer597);

HAnimDisplacer& HAnimDisplacer598 =  HAnimDisplacer();
HAnimDisplacer598.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer598.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer598.setCoordIndex(new int32_t[]{2}, 1);
HAnimDisplacer598.setDisplacements(new float[]{-1.176,0.13,-0.375}, 3);
HAnimSegment585.setDisplacers(HAnimDisplacer598);

HAnimDisplacer& HAnimDisplacer599 =  HAnimDisplacer();
HAnimDisplacer599.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer599.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer599.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer599.setDisplacements(new float[]{-0.2642,-0.7179,0.823,0.8355,0.0,1.0637,0.101,-0.5994,0.7018}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer599);

HAnimDisplacer& HAnimDisplacer600 =  HAnimDisplacer();
HAnimDisplacer600.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer600.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipPressor"));
HAnimDisplacer600.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer600.setDisplacements(new float[]{0.0,-0.3795,0.1337,0.0,-0.21,0.0}, 6);
HAnimSegment585.setDisplacers(HAnimDisplacer600);

HAnimDisplacer& HAnimDisplacer601 =  HAnimDisplacer();
HAnimDisplacer601.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer601.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer601.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer601.setDisplacements(new float[]{0.0,-0.3959,0.859,0.9097,0.0,0.4597,0.0,-0.2497,0.9748}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer601);

HAnimDisplacer& HAnimDisplacer602 =  HAnimDisplacer();
HAnimDisplacer602.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer602.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer602.setCoordIndex(new int32_t[]{1}, 1);
HAnimDisplacer602.setDisplacements(new float[]{-0.973,0.0092,0.0257}, 3);
HAnimSegment585.setDisplacers(HAnimDisplacer602);

HAnimDisplacer& HAnimDisplacer603 =  HAnimDisplacer();
HAnimDisplacer603.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer603.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer603.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer603.setDisplacements(new float[]{0.0,-0.0594,0.1828,-0.125,0.0,0.0,0.0,0.633,0.3625}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer603);

HAnimDisplacer& HAnimDisplacer604 =  HAnimDisplacer();
HAnimDisplacer604.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer604.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer604.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer604.setDisplacements(new float[]{0.042,-0.058,1.082,0.5211,0.1705,1.038,-0.1612,0.0641,0.9158}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer604);

HAnimDisplacer& HAnimDisplacer605 =  HAnimDisplacer();
HAnimDisplacer605.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer605.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"));
HAnimDisplacer605.setCoordIndex(new int32_t[]{0,2}, 2);
HAnimDisplacer605.setDisplacements(new float[]{0.0,-0.5685,0.0,0.0,-0.5684,0.0}, 6);
HAnimSegment585.setDisplacers(HAnimDisplacer605);

HAnimDisplacer& HAnimDisplacer606 =  HAnimDisplacer();
HAnimDisplacer606.X3DNode::setName(CString("right_lower_vermillion_lip_morphinterpolator"));
HAnimDisplacer606.setDEF(CString("Right_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer606.setCoordIndex(new int32_t[]{0,1,2}, 3);
HAnimDisplacer606.setDisplacements(new float[]{-0.176,-2.4736,0.049,0.0,-0.7362,0.0,-0.1963,-2.4594,0.002}, 9);
HAnimSegment585.setDisplacers(HAnimDisplacer606);

HAnimJoint89.addChildren(&HAnimSegment585);

HAnimSegment& HAnimSegment607 =  HAnimSegment();
HAnimSegment607.X3DNode::setName(CString("right_nasolabial_cheek"));
HAnimSegment607.setDEF(CString("hanim_Right_nasolabial_cheek"));
Transform& Transform608 =  Transform();
Transform608.setDEF(CString("Right_nasolabial_cheek_JinBlink"));
Transform608.setTranslation(new float[]{-2.021,10.27,13.53});
Shape& Shape609 =  Shape();
Appearance& Appearance610 =  Appearance();
Appearance610.setUSE(CString("BaseAppearance_JinBlink"));
Shape609.addChild(&Appearance610);

IndexedFaceSet& IndexedFaceSet611 =  IndexedFaceSet();
IndexedFaceSet611.setDEF(CString("Right_nasolabial_cheek-FACES_JinBlink"));
IndexedFaceSet611.setCoordIndex(new int32_t[]{0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1}, 16);
IndexedFaceSet611.setCreaseAngle(3.14159);
IndexedFaceSet611.setSolid(false);
IndexedFaceSet611.setTexCoordIndex(new int32_t[]{0,4,3,-1,3,5,0,-1,5,2,1,-1,1,0,5,-1}, 16);
TextureCoordinate& TextureCoordinate612 =  TextureCoordinate();
TextureCoordinate612.setDEF(CString("Right_nasolabial_cheek-TEXCOORD_JinBlink"));
TextureCoordinate612.setPoint(new float[]{0.2661,0.696,0.2636,0.664,0.3007,0.651,0.2727,0.7092,0.2641,0.7133,0.2788,0.6949}, 12);
IndexedFaceSet611.setTexCoord(&TextureCoordinate612);

Coordinate& Coordinate613 =  Coordinate();
Coordinate613.setDEF(CString("Right_nasolabial_cheek_COORD_JinBlink"));
Coordinate613.setPoint(new float[]{0.8548,0.741,0.5666,0.9852,-0.962,1.035,-0.9852,-1.648,-1.094,0.5035,1.438,0.4388,0.9626,1.648,1.094,0.1761,0.6814,0.2329}, 18);
IndexedFaceSet611.setCoord(&Coordinate613);

Shape609.setGeometry(&IndexedFaceSet611);

Transform608.addChild(&Shape609);

HAnimSegment607.addChild(&Transform608);

Coordinate& Coordinate614 =  Coordinate();
Coordinate614.setUSE(CString("Right_nasolabial_cheek_COORD_JinBlink"));
HAnimSegment607.setCoord(&Coordinate614);

HAnimDisplacer& HAnimDisplacer615 =  HAnimDisplacer();
HAnimDisplacer615.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer615.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer615.setCoordIndex(new int32_t[]{0,1,2,3,4,5}, 6);
HAnimDisplacer615.setDisplacements(new float[]{0.0,0.838,0.0,0.0,0.5164,0.0,-0.5908,1.3226,0.1063,0.0,0.838,0.0,0.0,0.838,0.0,0.0,0.8376,0.0}, 18);
HAnimSegment607.setDisplacers(HAnimDisplacer615);

HAnimDisplacer& HAnimDisplacer616 =  HAnimDisplacer();
HAnimDisplacer616.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer616.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer616.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer616.setDisplacements(new float[]{0.0,0.0967,0.0,0.0,-0.137,0.0}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer616);

HAnimDisplacer& HAnimDisplacer617 =  HAnimDisplacer();
HAnimDisplacer617.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer617.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinDimpler"));
HAnimDisplacer617.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer617.setDisplacements(new float[]{0.0,-0.069,0.044,-0.3788,0.396,0.1524}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer617);

HAnimDisplacer& HAnimDisplacer618 =  HAnimDisplacer();
HAnimDisplacer618.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer618.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer618.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer618.setDisplacements(new float[]{0.0,-0.0221,0.125,-0.1968,-0.701,0.077}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer618);

HAnimDisplacer& HAnimDisplacer619 =  HAnimDisplacer();
HAnimDisplacer619.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer619.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer619.setCoordIndex(new int32_t[]{5}, 1);
HAnimDisplacer619.setDisplacements(new float[]{-1.176,0.13,-0.375}, 3);
HAnimSegment607.setDisplacers(HAnimDisplacer619);

HAnimDisplacer& HAnimDisplacer620 =  HAnimDisplacer();
HAnimDisplacer620.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer620.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer620.setCoordIndex(new int32_t[]{1,2,5}, 3);
HAnimDisplacer620.setDisplacements(new float[]{0.1338,0.1022,0.551,0.8357,0.0,1.0634,0.0,0.0,0.1091}, 9);
HAnimSegment607.setDisplacers(HAnimDisplacer620);

HAnimDisplacer& HAnimDisplacer621 =  HAnimDisplacer();
HAnimDisplacer621.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer621.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer621.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer621.setDisplacements(new float[]{0.0618,0.0,0.566,0.9099,0.0,0.4594}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer621);

HAnimDisplacer& HAnimDisplacer622 =  HAnimDisplacer();
HAnimDisplacer622.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer622.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer622.setCoordIndex(new int32_t[]{2}, 1);
HAnimDisplacer622.setDisplacements(new float[]{-0.9728,0.009,0.025}, 3);
HAnimSegment607.setDisplacers(HAnimDisplacer622);

HAnimDisplacer& HAnimDisplacer623 =  HAnimDisplacer();
HAnimDisplacer623.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer623.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipSuck"));
HAnimDisplacer623.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer623.setDisplacements(new float[]{0.0,-0.52,-0.655,-0.1248,0.0,0.0}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer623);

HAnimDisplacer& HAnimDisplacer624 =  HAnimDisplacer();
HAnimDisplacer624.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer624.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipTightener"));
HAnimDisplacer624.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer624.setDisplacements(new float[]{0.0758,-0.0332,0.261,0.5214,0.171,1.0377}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer624);

HAnimDisplacer& HAnimDisplacer625 =  HAnimDisplacer();
HAnimDisplacer625.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer625.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer625.setCoordIndex(new int32_t[]{1,2}, 2);
HAnimDisplacer625.setDisplacements(new float[]{0.0,0.2684,0.0,0.0,-0.736,0.0}, 6);
HAnimSegment607.setDisplacers(HAnimDisplacer625);

HAnimDisplacer& HAnimDisplacer626 =  HAnimDisplacer();
HAnimDisplacer626.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer626.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer626.setCoordIndex(new int32_t[]{0,3,4,5}, 4);
HAnimDisplacer626.setDisplacements(new float[]{0.0,0.376,0.0,0.0781,0.552,0.0,0.0,0.376,0.0,0.0,0.4706,0.0}, 12);
HAnimSegment607.setDisplacers(HAnimDisplacer626);

HAnimDisplacer& HAnimDisplacer627 =  HAnimDisplacer();
HAnimDisplacer627.X3DNode::setName(CString("right_nasolabial_cheek_morphinterpolator"));
HAnimDisplacer627.setDEF(CString("Right_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer627.setCoordIndex(new int32_t[]{0,1,3,4,5}, 5);
HAnimDisplacer627.setDisplacements(new float[]{0.0,0.502,0.0,0.0,0.5016,0.0,0.0,0.294,0.0,0.0,0.294,0.0,0.0,0.5016,0.0}, 15);
HAnimSegment607.setDisplacers(HAnimDisplacer627);

HAnimJoint89.addChildren(&HAnimSegment607);

HAnimSegment& HAnimSegment628 =  HAnimSegment();
HAnimSegment628.X3DNode::setName(CString("right_nostril"));
HAnimSegment628.setDEF(CString("hanim_Right_nostril"));
Transform& Transform629 =  Transform();
Transform629.setDEF(CString("Right_nostril_JinBlink"));
Transform629.setTranslation(new float[]{-0.7684,11.22,15.04});
Shape& Shape630 =  Shape();
Appearance& Appearance631 =  Appearance();
Appearance631.setUSE(CString("BaseAppearance_JinBlink"));
Shape630.addChild(&Appearance631);

IndexedFaceSet& IndexedFaceSet632 =  IndexedFaceSet();
IndexedFaceSet632.setDEF(CString("Right_nostril-FACES_JinBlink"));
IndexedFaceSet632.setCoordIndex(new int32_t[]{0,3,2,-1,1,0,2,-1,4,2,3,-1}, 12);
IndexedFaceSet632.setCreaseAngle(3.14159);
IndexedFaceSet632.setSolid(false);
IndexedFaceSet632.setTexCoordIndex(new int32_t[]{0,3,2,-1,1,0,2,-1,4,2,3,-1}, 12);
TextureCoordinate& TextureCoordinate633 =  TextureCoordinate();
TextureCoordinate633.setDEF(CString("Right_nostril-TEXCOORD_JinBlink"));
TextureCoordinate633.setPoint(new float[]{0.2538,0.7051,0.2511,0.6816,0.2661,0.696,0.2528,0.7186,0.2641,0.7133}, 10);
IndexedFaceSet632.setTexCoord(&TextureCoordinate633);

Coordinate& Coordinate634 =  Coordinate();
Coordinate634.setDEF(CString("Right_nostril_COORD_JinBlink"));
Coordinate634.setPoint(new float[]{0.2923,0.2585,0.9483,0.398,-0.9732,0.1131,-0.398,-0.209,-0.9483,0.3119,0.9732,0.439,-0.2902,0.6978,-0.4206}, 15);
IndexedFaceSet632.setCoord(&Coordinate634);

Shape630.setGeometry(&IndexedFaceSet632);

Transform629.addChild(&Shape630);

HAnimSegment628.addChild(&Transform629);

Coordinate& Coordinate635 =  Coordinate();
Coordinate635.setUSE(CString("Right_nostril_COORD_JinBlink"));
HAnimSegment628.setCoord(&Coordinate635);

HAnimDisplacer& HAnimDisplacer636 =  HAnimDisplacer();
HAnimDisplacer636.X3DNode::setName(CString("right_nostril_morphinterpolator"));
HAnimDisplacer636.setDEF(CString("Right_nostril_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer636.setCoordIndex(new int32_t[]{2,4}, 2);
HAnimDisplacer636.setDisplacements(new float[]{0.0,0.838,0.0,0.0,0.8382,0.0}, 6);
HAnimSegment628.setDisplacers(HAnimDisplacer636);

HAnimDisplacer& HAnimDisplacer637 =  HAnimDisplacer();
HAnimDisplacer637.X3DNode::setName(CString("right_nostril_morphinterpolator"));
HAnimDisplacer637.setDEF(CString("Right_nostril_MorphInterpolator_JinNasolabialDeepener"));
HAnimDisplacer637.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer637.setDisplacements(new float[]{-0.3849,0.0,0.0}, 3);
HAnimSegment628.setDisplacers(HAnimDisplacer637);

HAnimDisplacer& HAnimDisplacer638 =  HAnimDisplacer();
HAnimDisplacer638.X3DNode::setName(CString("right_nostril_morphinterpolator"));
HAnimDisplacer638.setDEF(CString("Right_nostril_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer638.setCoordIndex(new int32_t[]{2,4}, 2);
HAnimDisplacer638.setDisplacements(new float[]{0.0,0.3759,0.0,0.0,0.3762,0.0}, 6);
HAnimSegment628.setDisplacers(HAnimDisplacer638);

HAnimDisplacer& HAnimDisplacer639 =  HAnimDisplacer();
HAnimDisplacer639.X3DNode::setName(CString("right_nostril_morphinterpolator"));
HAnimDisplacer639.setDEF(CString("Right_nostril_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer639.setCoordIndex(new int32_t[]{2,4}, 2);
HAnimDisplacer639.setDisplacements(new float[]{0.0,0.5016,0.0,0.0,0.2937,0.0}, 6);
HAnimSegment628.setDisplacers(HAnimDisplacer639);

HAnimJoint89.addChildren(&HAnimSegment628);

HAnimSegment& HAnimSegment640 =  HAnimSegment();
HAnimSegment640.X3DNode::setName(CString("right_pupil"));
HAnimSegment640.setDEF(CString("hanim_Right_pupil"));
Transform& Transform641 =  Transform();
Transform641.setDEF(CString("Right_pupil_JinBlink"));
Transform641.setTranslation(new float[]{-6.059,17.5,12.33});
Shape& Shape642 =  Shape();
Appearance& Appearance643 =  Appearance();
Appearance643.setUSE(CString("BaseAppearance_JinBlink"));
Shape642.addChild(&Appearance643);

IndexedFaceSet& IndexedFaceSet644 =  IndexedFaceSet();
IndexedFaceSet644.setDEF(CString("Right_pupil-FACES_JinBlink"));
IndexedFaceSet644.setCoordIndex(new int32_t[]{4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1}, 60);
IndexedFaceSet644.setCreaseAngle(3.14159);
IndexedFaceSet644.setSolid(false);
IndexedFaceSet644.setTexCoordIndex(new int32_t[]{4,6,7,-1,7,0,4,-1,7,8,3,-1,3,0,7,-1,12,2,1,-1,1,9,12,-1,10,9,1,-1,5,10,1,-1,1,3,5,-1,0,2,11,-1,11,4,0,-1,2,12,11,-1,3,8,5,-1,0,3,1,-1,1,2,0,-1}, 60);
TextureCoordinate& TextureCoordinate645 =  TextureCoordinate();
TextureCoordinate645.setDEF(CString("Right_pupil-TEXCOORD_JinBlink"));
TextureCoordinate645.setPoint(new float[]{0.3496,0.8297,0.3746,0.8042,0.3491,0.8029,0.3744,0.8314,0.328,0.824,0.3871,0.8321,0.3258,0.833,0.3487,0.8409,0.385,0.8438,0.3777,0.7936,0.3889,0.8064,0.3322,0.8026,0.3442,0.7934}, 26);
IndexedFaceSet644.setTexCoord(&TextureCoordinate645);

Coordinate& Coordinate646 =  Coordinate();
Coordinate646.setDEF(CString("Right_pupil_COORD_JinBlink"));
Coordinate646.setPoint(new float[]{0.4761,0.63,0.6933,-0.8417,-0.7176,-0.6485,0.4665,-0.8077,0.1079,-0.8447,0.7457,-0.2465,1.612,0.3169,1.289,-1.518,0.7946,-0.736,1.517,0.8129,1.347,0.5339,1.273,1.112,-1.311,1.316,-0.204,-1.04,-1.316,-0.9056,-1.612,-0.6212,-1.347,1.373,-0.8544,0.5399,0.7368,-1.282,0.04415}, 39);
IndexedFaceSet644.setCoord(&Coordinate646);

Shape642.setGeometry(&IndexedFaceSet644);

Transform641.addChild(&Shape642);

HAnimSegment640.addChild(&Transform641);

Coordinate& Coordinate647 =  Coordinate();
Coordinate647.setUSE(CString("Right_pupil_COORD_JinBlink"));
HAnimSegment640.setCoord(&Coordinate647);

HAnimDisplacer& HAnimDisplacer648 =  HAnimDisplacer();
HAnimDisplacer648.X3DNode::setName(CString("right_pupil_morphinterpolator"));
HAnimDisplacer648.setDEF(CString("Right_pupil_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer648.setCoordIndex(new int32_t[]{6,7}, 2);
HAnimDisplacer648.setDisplacements(new float[]{0.0,-0.0591,0.0,0.0,-0.059,0.0}, 6);
HAnimSegment640.setDisplacers(HAnimDisplacer648);

HAnimDisplacer& HAnimDisplacer649 =  HAnimDisplacer();
HAnimDisplacer649.X3DNode::setName(CString("right_pupil_morphinterpolator"));
HAnimDisplacer649.setDEF(CString("Right_pupil_MorphInterpolator_JinLidTightener"));
HAnimDisplacer649.setCoordIndex(new int32_t[]{6,7,8,9,12}, 5);
HAnimDisplacer649.setDisplacements(new float[]{0.0,-0.3349,0.0,0.0,-0.3344,0.0,0.0,-0.3345,0.0,0.0,0.301,0.0,0.0,0.151,0.0}, 15);
HAnimSegment640.setDisplacers(HAnimDisplacer649);

HAnimDisplacer& HAnimDisplacer650 =  HAnimDisplacer();
HAnimDisplacer650.X3DNode::setName(CString("right_pupil_morphinterpolator"));
HAnimDisplacer650.setDEF(CString("Right_pupil_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer650.setCoordIndex(new int32_t[]{6,7,8}, 3);
HAnimDisplacer650.setDisplacements(new float[]{0.0,0.4971,0.0,0.0,0.498,0.0,0.0,0.498,0.0}, 9);
HAnimSegment640.setDisplacers(HAnimDisplacer650);

HAnimJoint89.addChildren(&HAnimSegment640);

HAnimSegment& HAnimSegment651 =  HAnimSegment();
HAnimSegment651.X3DNode::setName(CString("right_temple"));
HAnimSegment651.setDEF(CString("hanim_Right_temple"));
Transform& Transform652 =  Transform();
Transform652.setDEF(CString("Right_temple_JinBlink"));
Transform652.setTranslation(new float[]{-10.95,20.56,6.406});
Shape& Shape653 =  Shape();
Appearance& Appearance654 =  Appearance();
Appearance654.setUSE(CString("BaseAppearance_JinBlink"));
Shape653.addChild(&Appearance654);

IndexedFaceSet& IndexedFaceSet655 =  IndexedFaceSet();
IndexedFaceSet655.setDEF(CString("Right_temple-FACES_JinBlink"));
IndexedFaceSet655.setCoordIndex(new int32_t[]{9,12,5,-1,5,7,9,-1,0,5,12,-1,12,11,0,-1,0,8,1,-1,1,2,0,-1,2,5,0,-1,10,9,7,-1,7,6,10,-1,7,5,2,-1,2,3,7,-1,4,6,7,-1,7,3,4,-1}, 52);
IndexedFaceSet655.setCreaseAngle(3.14159);
IndexedFaceSet655.setSolid(false);
IndexedFaceSet655.setTexCoordIndex(new int32_t[]{0,4,5,-1,5,6,0,-1,1,7,15,-1,15,13,1,-1,1,10,2,-1,2,3,1,-1,3,7,1,-1,8,0,6,-1,6,9,8,-1,6,5,11,-1,11,12,6,-1,14,9,6,-1,6,12,14,-1}, 52);
TextureCoordinate& TextureCoordinate656 =  TextureCoordinate();
TextureCoordinate656.setDEF(CString("Right_temple-TEXCOORD_JinBlink"));
TextureCoordinate656.setPoint(new float[]{0.44,0.6625,0.4455,0.863,0.4299,0.8825,0.4655,0.9081,0.4547,0.661,0.4573,0.671,0.4428,0.6714,0.462,0.8557,0.4352,0.6651,0.4342,0.6719,0.4266,0.8643,0.4606,0.684,0.4479,0.6875,0.4335,0.819,0.4319,0.6876,0.4572,0.8171}, 32);
IndexedFaceSet655.setTexCoord(&TextureCoordinate656);

Coordinate& Coordinate657 =  Coordinate();
Coordinate657.setDEF(CString("Right_temple_COORD_JinBlink"));
Coordinate657.setPoint(new float[]{0.312,-0.6258,2.224,1.079,0.3506,4.121,-0.5824,2.214,1.716,-0.9631,2.994,-0.8569,-0.5756,3.023,-4.121,-0.3971,-0.687,1.044,-1.042,-0.4888,-3.649,-1.005,-0.6065,-1.903,1.243,-0.6321,3.914,-1.028,-2.588,-2.479,-1.243,-2.002,-3.446,0.8897,-3.023,2.376,-0.2546,-2.916,0.5272}, 39);
IndexedFaceSet655.setCoord(&Coordinate657);

Shape653.setGeometry(&IndexedFaceSet655);

Transform652.addChild(&Shape653);

HAnimSegment651.addChild(&Transform652);

Coordinate& Coordinate658 =  Coordinate();
Coordinate658.setUSE(CString("Right_temple_COORD_JinBlink"));
HAnimSegment651.setCoord(&Coordinate658);

HAnimDisplacer& HAnimDisplacer659 =  HAnimDisplacer();
HAnimDisplacer659.X3DNode::setName(CString("right_temple_morphinterpolator"));
HAnimDisplacer659.setDEF(CString("Right_temple_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer659.setCoordIndex(new int32_t[]{1,8}, 2);
HAnimDisplacer659.setDisplacements(new float[]{0.0,-0.0942,0.0,0.0,-0.0941,0.0}, 6);
HAnimSegment651.setDisplacers(HAnimDisplacer659);

HAnimDisplacer& HAnimDisplacer660 =  HAnimDisplacer();
HAnimDisplacer660.X3DNode::setName(CString("right_temple_morphinterpolator"));
HAnimDisplacer660.setDEF(CString("Right_temple_MorphInterpolator_JinOuterBrowRaiser"));
HAnimDisplacer660.setCoordIndex(new int32_t[]{1,8}, 2);
HAnimDisplacer660.setDisplacements(new float[]{0.0,0.2686,0.0,0.0,0.2687,0.0}, 6);
HAnimSegment651.setDisplacers(HAnimDisplacer660);

HAnimDisplacer& HAnimDisplacer661 =  HAnimDisplacer();
HAnimDisplacer661.X3DNode::setName(CString("right_temple_morphinterpolator"));
HAnimDisplacer661.setDEF(CString("Right_temple_MorphInterpolator_JinSquint"));
HAnimDisplacer661.setCoordIndex(new int32_t[]{8,11}, 2);
HAnimDisplacer661.setDisplacements(new float[]{-0.003,-0.4639,0.004,0.0,-0.075,0.0}, 6);
HAnimSegment651.setDisplacers(HAnimDisplacer661);

HAnimJoint89.addChildren(&HAnimSegment651);

HAnimSegment& HAnimSegment662 =  HAnimSegment();
HAnimSegment662.X3DNode::setName(CString("right_upper_cutaneous_lip"));
HAnimSegment662.setDEF(CString("hanim_Right_upper_cutaneous_lip"));
Transform& Transform663 =  Transform();
Transform663.setDEF(CString("Right_upper_cutaneous_lip_JinBlink"));
Transform663.setTranslation(new float[]{-0.7684,10.16,14.63});
Shape& Shape664 =  Shape();
Appearance& Appearance665 =  Appearance();
Appearance665.setUSE(CString("BaseAppearance_JinBlink"));
Shape664.addChild(&Appearance665);

IndexedFaceSet& IndexedFaceSet666 =  IndexedFaceSet();
IndexedFaceSet666.setDEF(CString("Right_upper_cutaneous_lip-FACES_JinBlink"));
IndexedFaceSet666.setCoordIndex(new int32_t[]{2,0,1,-1,1,3,2,-1}, 8);
IndexedFaceSet666.setCreaseAngle(3.14159);
IndexedFaceSet666.setSolid(false);
IndexedFaceSet666.setTexCoordIndex(new int32_t[]{2,0,1,-1,1,3,2,-1}, 8);
TextureCoordinate& TextureCoordinate667 =  TextureCoordinate();
TextureCoordinate667.setDEF(CString("Right_upper_cutaneous_lip-TEXCOORD_JinBlink"));
TextureCoordinate667.setPoint(new float[]{0.2661,0.696,0.2636,0.664,0.2511,0.6816,0.2548,0.6653}, 8);
IndexedFaceSet666.setTexCoord(&TextureCoordinate667);

Coordinate& Coordinate668 =  Coordinate();
Coordinate668.setDEF(CString("Right_upper_cutaneous_lip_COORD_JinBlink"));
Coordinate668.setPoint(new float[]{-0.398,0.8515,-0.5307,-0.2676,-0.8515,-0.06256,0.398,0.08738,0.5307,0.1985,-0.7812,0.2164}, 12);
IndexedFaceSet666.setCoord(&Coordinate668);

Shape664.setGeometry(&IndexedFaceSet666);

Transform663.addChild(&Shape664);

HAnimSegment662.addChild(&Transform663);

Coordinate& Coordinate669 =  Coordinate();
Coordinate669.setUSE(CString("Right_upper_cutaneous_lip_COORD_JinBlink"));
HAnimSegment662.setCoord(&Coordinate669);

HAnimDisplacer& HAnimDisplacer670 =  HAnimDisplacer();
HAnimDisplacer670.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer670.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer670.setCoordIndex(new int32_t[]{0,1,3}, 3);
HAnimDisplacer670.setDisplacements(new float[]{0.0,0.8385,0.0,0.0,0.5164,0.0,0.0,0.4847,0.0}, 9);
HAnimSegment662.setDisplacers(HAnimDisplacer670);

HAnimDisplacer& HAnimDisplacer671 =  HAnimDisplacer();
HAnimDisplacer671.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer671.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer671.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer671.setDisplacements(new float[]{0.0,0.0967,0.0,0.0,0.1405,0.0}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer671);

HAnimDisplacer& HAnimDisplacer672 =  HAnimDisplacer();
HAnimDisplacer672.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer672.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer672.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer672.setDisplacements(new float[]{0.0,-0.0689,0.0447,0.0,-0.0689,0.0448}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer672);

HAnimDisplacer& HAnimDisplacer673 =  HAnimDisplacer();
HAnimDisplacer673.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer673.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer673.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer673.setDisplacements(new float[]{0.0,-0.0221,0.1251,0.0,-0.0514,-0.0369}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer673);

HAnimDisplacer& HAnimDisplacer674 =  HAnimDisplacer();
HAnimDisplacer674.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer674.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer674.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer674.setDisplacements(new float[]{0.1339,0.1022,0.5512,0.0736,0.1634,0.5282}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer674);

HAnimDisplacer& HAnimDisplacer675 =  HAnimDisplacer();
HAnimDisplacer675.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer675.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer675.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer675.setDisplacements(new float[]{0.0619,0.0,0.5662,0.0155,0.0,0.5662}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer675);

HAnimDisplacer& HAnimDisplacer676 =  HAnimDisplacer();
HAnimDisplacer676.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer676.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer676.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer676.setDisplacements(new float[]{0.0,-0.5205,-0.6547,0.0,-0.5208,-0.6547}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer676);

HAnimDisplacer& HAnimDisplacer677 =  HAnimDisplacer();
HAnimDisplacer677.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer677.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer677.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer677.setDisplacements(new float[]{0.0754,-0.0332,0.2613,0.0415,-0.0383,0.241}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer677);

HAnimDisplacer& HAnimDisplacer678 =  HAnimDisplacer();
HAnimDisplacer678.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer678.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer678.setCoordIndex(new int32_t[]{1,3}, 2);
HAnimDisplacer678.setDisplacements(new float[]{0.0,0.2684,0.0,0.0,0.2684,0.0}, 6);
HAnimSegment662.setDisplacers(HAnimDisplacer678);

HAnimDisplacer& HAnimDisplacer679 =  HAnimDisplacer();
HAnimDisplacer679.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer679.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer679.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer679.setDisplacements(new float[]{0.0,0.3765,0.0}, 3);
HAnimSegment662.setDisplacers(HAnimDisplacer679);

HAnimDisplacer& HAnimDisplacer680 =  HAnimDisplacer();
HAnimDisplacer680.X3DNode::setName(CString("right_upper_cutaneous_lip_morphinterpolator"));
HAnimDisplacer680.setDEF(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer680.setCoordIndex(new int32_t[]{0,1,3}, 3);
HAnimDisplacer680.setDisplacements(new float[]{0.0,0.5015,0.0,0.0,0.5016,0.0,0.0,0.5016,0.0}, 9);
HAnimSegment662.setDisplacers(HAnimDisplacer680);

HAnimJoint89.addChildren(&HAnimSegment662);

HAnimSegment& HAnimSegment681 =  HAnimSegment();
HAnimSegment681.X3DNode::setName(CString("right_upper_eyelid"));
HAnimSegment681.setDEF(CString("hanim_Right_upper_eyelid"));
Transform& Transform682 =  Transform();
Transform682.setDEF(CString("Right_upper_eyelid_JinBlink"));
Transform682.setTranslation(new float[]{-5.53,17.96,12.21});
Shape& Shape683 =  Shape();
Appearance& Appearance684 =  Appearance();
Appearance684.setUSE(CString("BaseAppearance_JinBlink"));
Shape683.addChild(&Appearance684);

IndexedFaceSet& IndexedFaceSet685 =  IndexedFaceSet();
IndexedFaceSet685.setDEF(CString("Right_upper_eyelid-FACES_JinBlink"));
IndexedFaceSet685.setCoordIndex(new int32_t[]{1,0,2,-1,6,4,3,-1,3,2,6,-1,3,1,2,-1,1,13,0,-1,13,7,0,-1,8,12,5,-1,5,10,8,-1,4,6,10,-1,10,5,4,-1,0,7,9,-1,7,11,9,-1,13,14,11,-1,11,7,13,-1}, 56);
IndexedFaceSet685.setCreaseAngle(3.14159);
IndexedFaceSet685.setSolid(false);
IndexedFaceSet685.setTexCoordIndex(new int32_t[]{2,0,1,-1,4,3,5,-1,5,1,4,-1,5,2,1,-1,2,6,0,-1,6,9,0,-1,11,15,8,-1,8,13,11,-1,3,4,13,-1,13,8,3,-1,0,9,12,-1,10,14,12,-1,7,16,14,-1,14,10,7,-1}, 56);
TextureCoordinate& TextureCoordinate686 =  TextureCoordinate();
TextureCoordinate686.setDEF(CString("Right_upper_eyelid-TEXCOORD_JinBlink"));
TextureCoordinate686.setPoint(new float[]{0.274,0.8322,0.3402,0.8534,0.3285,0.8323,0.3831,0.8437,0.3979,0.8641,0.3487,0.8409,0.2983,0.8142,0.2981,0.8094,0.4198,0.8261,0.2678,0.8154,0.2677,0.8134,0.4455,0.863,0.2534,0.8152,0.4266,0.8643,0.2671,0.7978,0.4335,0.819,0.2845,0.7889}, 34);
IndexedFaceSet685.setTexCoord(&TextureCoordinate686);

Coordinate& Coordinate687 =  Coordinate();
Coordinate687.setDEF(CString("Right_upper_eyelid_COORD_JinBlink"));
Coordinate687.setPoint(new float[]{3.944,0.2777,3.581,0.9888,0.3455,1.465,0.4509,1.393,2.381,0.005327,0.806,1.231,-1.84,0.849,-0.08585,-3.829,-0.08937,-2.326,-2.527,1.923,-0.05675,4.303,-0.6947,2.247,-5.103,1.975,-3.581,5.103,-0.5987,2.53,-4.172,1.969,-1.891,4.353,-1.523,2.057,-4.525,-0.4223,-3.429,2.594,-0.8999,1.643,3.366,-1.975,1.583}, 45);
IndexedFaceSet685.setCoord(&Coordinate687);

Shape683.setGeometry(&IndexedFaceSet685);

Transform682.addChild(&Shape683);

HAnimSegment681.addChild(&Transform682);

Coordinate& Coordinate688 =  Coordinate();
Coordinate688.setUSE(CString("Right_upper_eyelid_COORD_JinBlink"));
HAnimSegment681.setCoord(&Coordinate688);

HAnimDisplacer& HAnimDisplacer689 =  HAnimDisplacer();
HAnimDisplacer689.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer689.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinBlink"));
HAnimDisplacer689.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer689.setDisplacements(new float[]{-0.2496,-2.0425,-0.987,-1.6453,-2.567,-1.8279,-0.478,-2.36,-1.1421}, 9);
HAnimSegment681.setDisplacers(HAnimDisplacer689);

HAnimDisplacer& HAnimDisplacer690 =  HAnimDisplacer();
HAnimDisplacer690.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer690.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinBrowLowerer"));
HAnimDisplacer690.setCoordIndex(new int32_t[]{0,1,2,3,6,10}, 6);
HAnimDisplacer690.setDisplacements(new float[]{0.303,-0.3949,0.0,0.0,-0.0592,0.0,0.5561,-0.5069,0.0,0.0,-0.0591,0.0,0.0,-0.094,0.0,0.0,-0.094,0.0}, 18);
HAnimSegment681.setDisplacers(HAnimDisplacer690);

HAnimDisplacer& HAnimDisplacer691 =  HAnimDisplacer();
HAnimDisplacer691.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer691.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer691.setCoordIndex(new int32_t[]{14}, 1);
HAnimDisplacer691.setDisplacements(new float[]{0.0,0.067,-0.082}, 3);
HAnimSegment681.setDisplacers(HAnimDisplacer691);

HAnimDisplacer& HAnimDisplacer692 =  HAnimDisplacer();
HAnimDisplacer692.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer692.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinEyesClosed"));
HAnimDisplacer692.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer692.setDisplacements(new float[]{-0.2496,-2.0425,-0.987,-1.6453,-2.567,-1.8279,-0.478,-2.36,-1.1421}, 9);
HAnimSegment681.setDisplacers(HAnimDisplacer692);

HAnimDisplacer& HAnimDisplacer693 =  HAnimDisplacer();
HAnimDisplacer693.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer693.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"));
HAnimDisplacer693.setCoordIndex(new int32_t[]{0,2,6}, 3);
HAnimDisplacer693.setDisplacements(new float[]{0.0,0.3842,0.0,0.0,0.384,0.0,0.0,0.135,0.0}, 9);
HAnimSegment681.setDisplacers(HAnimDisplacer693);

HAnimDisplacer& HAnimDisplacer694 =  HAnimDisplacer();
HAnimDisplacer694.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer694.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinLidDroop"));
HAnimDisplacer694.setCoordIndex(new int32_t[]{1,3,4,5}, 4);
HAnimDisplacer694.setDisplacements(new float[]{0.0,-0.7517,0.0,0.0,-1.0484,0.0,0.0,-1.0134,0.0,0.0,-0.3486,0.0}, 12);
HAnimSegment681.setDisplacers(HAnimDisplacer694);

HAnimDisplacer& HAnimDisplacer695 =  HAnimDisplacer();
HAnimDisplacer695.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer695.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinLidTightener"));
HAnimDisplacer695.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer695.setDisplacements(new float[]{0.0,-0.3349,0.0,0.0,-0.3349,0.0,0.0,-0.3349,0.0}, 9);
HAnimSegment681.setDisplacers(HAnimDisplacer695);

HAnimDisplacer& HAnimDisplacer696 =  HAnimDisplacer();
HAnimDisplacer696.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer696.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinOuterBrowRaiser"));
HAnimDisplacer696.setCoordIndex(new int32_t[]{6,10}, 2);
HAnimDisplacer696.setDisplacements(new float[]{0.0,0.654,0.0,0.0,0.268,0.0}, 6);
HAnimSegment681.setDisplacers(HAnimDisplacer696);

HAnimDisplacer& HAnimDisplacer697 =  HAnimDisplacer();
HAnimDisplacer697.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer697.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinSlit"));
HAnimDisplacer697.setCoordIndex(new int32_t[]{1,3,4}, 3);
HAnimDisplacer697.setDisplacements(new float[]{0.0,-1.0868,0.0,0.0,-1.4762,0.0,0.0,-1.3055,0.0}, 9);
HAnimSegment681.setDisplacers(HAnimDisplacer697);

HAnimDisplacer& HAnimDisplacer698 =  HAnimDisplacer();
HAnimDisplacer698.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer698.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinSquint"));
HAnimDisplacer698.setCoordIndex(new int32_t[]{1,3,4,5,6,10,12}, 7);
HAnimDisplacer698.setDisplacements(new float[]{0.0,-0.5962,0.0,0.0,-0.7726,-0.115,0.0,-0.7324,0.0,0.0,-0.0775,0.0,0.0,-0.463,0.0,0.002,-0.464,0.0,0.0,-0.0776,0.0}, 21);
HAnimSegment681.setDisplacers(HAnimDisplacer698);

HAnimDisplacer& HAnimDisplacer699 =  HAnimDisplacer();
HAnimDisplacer699.X3DNode::setName(CString("right_upper_eyelid_morphinterpolator"));
HAnimDisplacer699.setDEF(CString("Right_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"));
HAnimDisplacer699.setCoordIndex(new int32_t[]{1,2,3,4,13}, 5);
HAnimDisplacer699.setDisplacements(new float[]{0.0,0.4975,0.0,0.0,0.497,0.0,0.0,0.498,0.0,0.0,0.498,0.0,0.0,0.4975,0.0}, 15);
HAnimSegment681.setDisplacers(HAnimDisplacer699);

HAnimJoint89.addChildren(&HAnimSegment681);

HAnimSegment& HAnimSegment700 =  HAnimSegment();
HAnimSegment700.X3DNode::setName(CString("right_upper_vermillion_lip"));
HAnimSegment700.setDEF(CString("hanim_Right_upper_vermillion_lip"));
Transform& Transform701 =  Transform();
Transform701.setDEF(CString("Right_upper_vermillion_lip_JinBlink"));
Transform701.setTranslation(new float[]{-1.788,9.002,13.64});
Shape& Shape702 =  Shape();
Appearance& Appearance703 =  Appearance();
Appearance703.setUSE(CString("BaseAppearance_JinBlink"));
Shape702.addChild(&Appearance703);

IndexedFaceSet& IndexedFaceSet704 =  IndexedFaceSet();
IndexedFaceSet704.setDEF(CString("Right_upper_vermillion_lip-FACES_JinBlink"));
IndexedFaceSet704.setCoordIndex(new int32_t[]{3,2,1,-1,1,0,3,-1}, 8);
IndexedFaceSet704.setCreaseAngle(3.14159);
IndexedFaceSet704.setSolid(false);
IndexedFaceSet704.setTexCoordIndex(new int32_t[]{3,2,1,-1,1,0,3,-1}, 8);
TextureCoordinate& TextureCoordinate705 =  TextureCoordinate();
TextureCoordinate705.setDEF(CString("Right_upper_vermillion_lip-TEXCOORD_JinBlink"));
TextureCoordinate705.setPoint(new float[]{0.3007,0.651,0.2636,0.664,0.2548,0.6653,0.2548,0.6553}, 8);
IndexedFaceSet704.setTexCoord(&TextureCoordinate705);

Coordinate& Coordinate706 =  Coordinate();
Coordinate706.setDEF(CString("Right_upper_vermillion_lip_COORD_JinBlink"));
Coordinate706.setPoint(new float[]{-1.218,-0.3781,-1.204,0.7521,0.3078,0.925,1.218,0.3781,1.204,1.218,-0.1506,0.4455}, 12);
IndexedFaceSet704.setCoord(&Coordinate706);

Shape702.setGeometry(&IndexedFaceSet704);

Transform701.addChild(&Shape702);

HAnimSegment700.addChild(&Transform701);

Coordinate& Coordinate707 =  Coordinate();
Coordinate707.setUSE(CString("Right_upper_vermillion_lip_COORD_JinBlink"));
HAnimSegment700.setCoord(&Coordinate707);

HAnimDisplacer& HAnimDisplacer708 =  HAnimDisplacer();
HAnimDisplacer708.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer708.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
HAnimDisplacer708.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer708.setDisplacements(new float[]{-0.591,1.3225,0.107,0.0,0.5164,0.0,0.0,0.4847,0.0,0.0,0.4847,0.0}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer708);

HAnimDisplacer& HAnimDisplacer709 =  HAnimDisplacer();
HAnimDisplacer709.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer709.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer709.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer709.setDisplacements(new float[]{0.0,-0.1372,0.0,0.0,0.0967,0.0,0.0,0.1405,0.0,0.0,0.187,0.0}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer709);

HAnimDisplacer& HAnimDisplacer710 =  HAnimDisplacer();
HAnimDisplacer710.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer710.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinDimpler"));
HAnimDisplacer710.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer710.setDisplacements(new float[]{-0.379,0.3959,0.153,0.0,-0.0689,0.0447,0.0,-0.0688,0.045,0.0,-0.0435,0.4553}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer710);

HAnimDisplacer& HAnimDisplacer711 =  HAnimDisplacer();
HAnimDisplacer711.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer711.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
HAnimDisplacer711.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer711.setDisplacements(new float[]{-0.197,-0.7019,0.078,0.0,-0.0221,0.125,0.0,-0.0513,-0.037,0.0,0.0541,0.5975}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer711);

HAnimDisplacer& HAnimDisplacer712 =  HAnimDisplacer();
HAnimDisplacer712.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer712.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer712.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer712.setDisplacements(new float[]{0.8355,0.0,1.0637,0.134,0.1022,0.551,0.074,0.1634,0.528,0.0,0.1237,0.8775}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer712);

HAnimDisplacer& HAnimDisplacer713 =  HAnimDisplacer();
HAnimDisplacer713.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer713.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer713.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer713.setDisplacements(new float[]{0.9097,0.0,0.4597,0.0619,0.0,0.566,0.016,0.0,0.566,-0.041,0.0,0.366}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer713);

HAnimDisplacer& HAnimDisplacer714 =  HAnimDisplacer();
HAnimDisplacer714.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer714.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"));
HAnimDisplacer714.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer714.setDisplacements(new float[]{-0.973,0.0091,0.026}, 3);
HAnimSegment700.setDisplacers(HAnimDisplacer714);

HAnimDisplacer& HAnimDisplacer715 =  HAnimDisplacer();
HAnimDisplacer715.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer715.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipSuck"));
HAnimDisplacer715.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer715.setDisplacements(new float[]{-0.125,0.0,0.0,0.0,-0.5204,-0.6548,0.0,-0.5204,-0.6547,0.0,-0.135,-0.2471}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer715);

HAnimDisplacer& HAnimDisplacer716 =  HAnimDisplacer();
HAnimDisplacer716.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer716.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipTightener"));
HAnimDisplacer716.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer716.setDisplacements(new float[]{0.5211,0.1704,1.038,0.0755,-0.0332,0.261,0.042,-0.0383,0.241,0.042,-0.0353,0.6945}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer716);

HAnimDisplacer& HAnimDisplacer717 =  HAnimDisplacer();
HAnimDisplacer717.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer717.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer717.setCoordIndex(new int32_t[]{0,1,2,3}, 4);
HAnimDisplacer717.setDisplacements(new float[]{0.0,-0.7359,0.0,0.0,0.2684,0.0,0.0,0.2684,0.0,0.0,0.2684,0.0}, 12);
HAnimSegment700.setDisplacers(HAnimDisplacer717);

HAnimDisplacer& HAnimDisplacer718 =  HAnimDisplacer();
HAnimDisplacer718.X3DNode::setName(CString("right_upper_vermillion_lip_morphinterpolator"));
HAnimDisplacer718.setDEF(CString("Right_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"));
HAnimDisplacer718.setCoordIndex(new int32_t[]{1,2,3}, 3);
HAnimDisplacer718.setDisplacements(new float[]{0.0,0.5016,0.0,0.0,0.5017,0.0,0.0,0.5017,0.0}, 9);
HAnimSegment700.setDisplacers(HAnimDisplacer718);

HAnimJoint89.addChildren(&HAnimSegment700);

HAnimSegment& HAnimSegment719 =  HAnimSegment();
HAnimSegment719.X3DNode::setName(CString("tongue"));
HAnimSegment719.setDEF(CString("hanim_Tongue"));
Transform& Transform720 =  Transform();
Transform720.setDEF(CString("Tongue_JinBlink"));
Transform720.setTranslation(new float[]{0.0,8.886,11.1});
Shape& Shape721 =  Shape();
Appearance& Appearance722 =  Appearance();
Appearance722.setUSE(CString("BaseAppearance_JinBlink"));
Shape721.addChild(&Appearance722);

IndexedFaceSet& IndexedFaceSet723 =  IndexedFaceSet();
IndexedFaceSet723.setDEF(CString("Tongue-FACES_JinBlink"));
IndexedFaceSet723.setCoordIndex(new int32_t[]{0,59,32,-1,32,62,0,-1,8,75,32,-1,32,59,8,-1,20,95,32,-1,32,75,20,-1,17,62,32,-1,32,95,17,-1,4,89,33,-1,33,74,4,-1,18,96,33,-1,33,89,18,-1,29,92,33,-1,33,96,29,-1,11,74,33,-1,33,92,11,-1,12,79,34,-1,34,82,12,-1,22,97,34,-1,34,79,22,-1,31,94,34,-1,34,97,31,-1,15,82,34,-1,34,94,15,-1,1,72,35,-1,35,67,1,-1,9,77,35,-1,35,72,9,-1,10,64,35,-1,35,77,10,-1,5,67,35,-1,35,64,5,-1,2,71,36,-1,36,70,2,-1,8,78,36,-1,36,71,8,-1,11,66,36,-1,36,78,11,-1,6,70,36,-1,36,66,6,-1,8,71,37,-1,37,75,8,-1,2,60,37,-1,37,71,2,-1,24,98,37,-1,37,60,24,-1,20,75,37,-1,37,98,20,-1,10,73,38,-1,38,76,10,-1,7,65,38,-1,38,73,7,-1,27,99,38,-1,38,65,27,-1,21,76,38,-1,38,99,21,-1,9,61,39,-1,39,77,9,-1,3,69,39,-1,39,61,3,-1,7,73,39,-1,39,69,7,-1,10,77,39,-1,39,73,10,-1,8,59,40,-1,40,78,8,-1,0,68,40,-1,40,59,0,-1,4,74,40,-1,40,68,4,-1,11,78,40,-1,40,74,11,-1,0,62,41,-1,41,83,0,-1,17,100,41,-1,41,62,17,-1,22,79,41,-1,41,100,22,-1,12,83,41,-1,41,79,12,-1,1,67,42,-1,42,84,1,-1,5,85,42,-1,42,67,5,-1,14,80,42,-1,42,85,14,-1,13,84,42,-1,42,80,13,-1,5,63,43,-1,43,85,5,-1,26,101,43,-1,43,63,26,-1,23,81,43,-1,43,101,23,-1,14,85,43,-1,43,81,14,-1,4,68,44,-1,44,86,4,-1,0,83,44,-1,44,68,0,-1,12,82,44,-1,44,83,12,-1,15,86,44,-1,44,82,15,-1,28,91,45,-1,45,110,28,-1,9,72,45,-1,45,91,9,-1,1,88,45,-1,45,72,1,-1,25,110,45,-1,45,88,25,-1,26,63,46,-1,46,111,26,-1,5,64,46,-1,46,63,5,-1,10,76,46,-1,46,64,10,-1,21,111,46,-1,46,76,21,-1,30,93,47,-1,47,112,30,-1,13,80,47,-1,47,93,13,-1,14,81,47,-1,47,80,14,-1,23,112,47,-1,47,81,23,-1,16,87,48,-1,48,113,16,-1,3,61,48,-1,48,87,3,-1,9,91,48,-1,48,61,9,-1,28,113,48,-1,48,91,28,-1,19,90,49,-1,49,114,19,-1,6,66,49,-1,49,90,6,-1,11,92,49,-1,49,66,11,-1,29,114,49,-1,49,92,29,-1,25,88,50,-1,50,115,25,-1,1,84,50,-1,50,88,1,-1,13,93,50,-1,50,84,13,-1,30,115,50,-1,50,93,30,-1,18,89,51,-1,51,116,18,-1,4,86,51,-1,51,89,4,-1,15,94,51,-1,51,86,15,-1,31,116,51,-1,51,94,31,-1,20,106,52,-1,52,95,20,-1,28,110,52,-1,52,106,28,-1,25,103,52,-1,52,110,25,-1,17,95,52,-1,52,103,17,-1,18,104,53,-1,53,96,18,-1,26,111,53,-1,53,104,26,-1,21,107,53,-1,53,111,21,-1,29,96,53,-1,53,107,29,-1,22,108,54,-1,54,97,22,-1,30,112,54,-1,54,108,30,-1,23,109,54,-1,54,112,23,-1,31,97,54,-1,54,109,31,-1,24,102,55,-1,55,98,24,-1,16,113,55,-1,55,102,16,-1,28,106,55,-1,55,113,28,-1,20,98,55,-1,55,106,20,-1,27,105,56,-1,56,99,27,-1,19,114,56,-1,56,105,19,-1,29,107,56,-1,56,114,29,-1,21,99,56,-1,56,107,21,-1,17,103,57,-1,57,100,17,-1,25,115,57,-1,57,103,25,-1,30,108,57,-1,57,115,30,-1,22,100,57,-1,57,108,22,-1,26,104,58,-1,58,101,26,-1,18,116,58,-1,58,104,18,-1,31,109,58,-1,58,116,31,-1,23,101,58,-1,58,109,23,-1}, 864);
IndexedFaceSet723.setCreaseAngle(3.14159);
IndexedFaceSet723.setSolid(false);
IndexedFaceSet723.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,18,19,20,-1,20,21,18,-1,22,23,20,-1,20,19,22,-1,24,25,20,-1,20,23,24,-1,26,21,20,-1,20,25,26,-1,27,28,29,-1,29,30,27,-1,31,32,29,-1,29,28,31,-1,33,34,29,-1,29,32,33,-1,35,30,29,-1,29,34,35,-1,36,37,38,-1,38,39,36,-1,4,40,38,-1,38,37,4,-1,17,41,38,-1,38,40,17,-1,42,39,38,-1,38,41,42,-1,4,37,43,-1,43,5,4,-1,36,44,43,-1,43,37,36,-1,45,46,43,-1,43,44,45,-1,6,5,43,-1,43,46,6,-1,33,47,48,-1,48,49,33,-1,50,51,48,-1,48,47,50,-1,52,53,48,-1,48,51,52,-1,54,49,48,-1,48,53,54,-1,31,55,56,-1,56,32,31,-1,57,58,56,-1,56,55,57,-1,50,47,56,-1,56,58,50,-1,33,32,56,-1,56,47,33,-1,4,1,59,-1,59,40,4,-1,0,60,59,-1,59,1,0,-1,9,12,59,-1,59,60,9,-1,17,40,59,-1,59,12,17,-1,0,3,61,-1,61,62,0,-1,8,63,61,-1,61,3,8,-1,22,19,61,-1,61,63,22,-1,18,62,61,-1,61,19,18,-1,27,30,64,-1,64,65,27,-1,35,66,64,-1,64,30,35,-1,67,68,64,-1,64,66,67,-1,69,65,64,-1,64,68,69,-1,35,70,71,-1,71,66,35,-1,72,73,71,-1,71,70,72,-1,74,75,71,-1,71,73,74,-1,67,66,71,-1,71,75,67,-1,9,60,76,-1,76,77,9,-1,0,62,76,-1,76,60,0,-1,18,21,76,-1,76,62,18,-1,26,77,76,-1,76,21,26,-1,78,79,80,-1,80,81,78,-1,31,28,80,-1,80,79,31,-1,27,82,80,-1,80,28,27,-1,83,81,80,-1,80,82,83,-1,72,70,84,-1,84,85,72,-1,35,34,84,-1,84,70,35,-1,33,49,84,-1,84,34,33,-1,54,85,84,-1,84,49,54,-1,86,87,88,-1,88,89,86,-1,69,68,88,-1,88,87,69,-1,67,75,88,-1,88,68,67,-1,74,89,88,-1,88,75,74,-1,90,91,92,-1,92,93,90,-1,57,55,92,-1,92,91,57,-1,31,79,92,-1,92,55,31,-1,78,93,92,-1,92,79,78,-1,94,95,96,-1,96,97,94,-1,42,41,96,-1,96,95,42,-1,17,16,96,-1,96,41,17,-1,15,97,96,-1,96,16,15,-1,83,82,98,-1,98,99,83,-1,27,65,98,-1,98,82,27,-1,69,87,98,-1,98,65,69,-1,86,99,98,-1,98,87,86,-1,13,10,100,-1,100,101,13,-1,9,77,100,-1,100,10,9,-1,26,25,100,-1,100,77,26,-1,24,101,100,-1,100,25,24,-1,6,102,103,-1,103,7,6,-1,78,81,103,-1,103,102,78,-1,83,104,103,-1,103,81,83,-1,8,7,103,-1,103,104,8,-1,13,105,106,-1,106,14,13,-1,72,85,106,-1,106,105,72,-1,54,107,106,-1,106,85,54,-1,15,14,106,-1,106,107,15,-1,22,108,109,-1,109,23,22,-1,86,89,109,-1,109,108,86,-1,74,110,109,-1,109,89,74,-1,24,23,109,-1,109,110,24,-1,45,111,112,-1,112,46,45,-1,90,93,112,-1,112,111,90,-1,78,102,112,-1,112,93,78,-1,6,46,112,-1,112,102,6,-1,52,113,114,-1,114,53,52,-1,94,97,114,-1,114,113,94,-1,15,107,114,-1,114,97,15,-1,54,53,114,-1,114,107,54,-1,8,104,115,-1,115,63,8,-1,83,99,115,-1,115,104,83,-1,86,108,115,-1,115,99,86,-1,22,63,115,-1,115,108,22,-1,72,105,116,-1,116,73,72,-1,13,101,116,-1,116,105,13,-1,24,110,116,-1,116,101,24,-1,74,73,116,-1,116,110,74,-1}, 864);
TextureCoordinate& TextureCoordinate724 =  TextureCoordinate();
TextureCoordinate724.setDEF(CString("Tongue-TEXCOORD_JinBlink"));
TextureCoordinate724.setPoint(new float[]{0.6665,0.04796,0.6621,0.05829,0.6755,0.05429,0.678,0.04407,0.6594,0.0736,0.6739,0.06941,0.6934,0.06941,0.6938,0.05429,0.6944,0.04387,0.6665,0.07002,0.678,0.07332,0.6755,0.08631,0.6621,0.08231,0.6944,0.07293,0.6938,0.08631,0.6934,0.103,0.6739,0.103,0.6594,0.09877,0.6775,0.03908,0.6841,0.03457,0.685,0.04057,0.677,0.04467,0.6959,0.03299,0.6961,0.03821,0.6959,0.0483,0.6841,0.05084,0.6775,0.0521,0.7593,0.04796,0.7636,0.05829,0.7681,0.0703,0.7631,0.05909,0.7664,0.0736,0.7713,0.08619,0.7664,0.09877,0.7636,0.08231,0.7593,0.07002,0.6584,0.1215,0.6584,0.09583,0.6535,0.1086,0.6535,0.1343,0.6545,0.08619,0.6584,0.1214,0.6584,0.1471,0.6734,0.09157,0.6734,0.1172,0.6932,0.1172,0.6932,0.09157,0.7673,0.1214,0.7524,0.1256,0.7519,0.103,0.7673,0.1471,0.7524,0.1513,0.7326,0.1513,0.7326,0.1256,0.7324,0.103,0.7673,0.09583,0.7723,0.1086,0.7673,0.1215,0.7723,0.1343,0.6577,0.0703,0.6627,0.05909,0.6813,0.03662,0.6723,0.04066,0.6952,0.03583,0.7565,0.05069,0.7535,0.04066,0.7535,0.05994,0.7482,0.0521,0.7488,0.04467,0.7482,0.03908,0.7478,0.07332,0.7445,0.06163,0.7314,0.07293,0.7306,0.06006,0.7299,0.0483,0.7417,0.05084,0.6693,0.05069,0.6723,0.05994,0.7324,0.06941,0.7519,0.06941,0.7503,0.05429,0.732,0.05429,0.7478,0.04407,0.7314,0.04387,0.7503,0.08631,0.732,0.08631,0.7299,0.03299,0.7417,0.03457,0.7408,0.04057,0.7296,0.03821,0.7326,0.1172,0.7524,0.1172,0.7524,0.09157,0.7326,0.09157,0.6932,0.1513,0.6734,0.1513,0.6734,0.1256,0.6932,0.1256,0.7445,0.03662,0.7306,0.03583,0.6813,0.06163,0.6952,0.06006,0.7129,0.06941,0.7129,0.05429,0.7129,0.04381,0.7129,0.0728,0.7129,0.08631,0.7129,0.103,0.7129,0.03246,0.7129,0.03742,0.7129,0.04745,0.7129,0.1172,0.7129,0.09157,0.7129,0.1513,0.7129,0.1256,0.7129,0.03556,0.7129,0.05954}, 234);
IndexedFaceSet723.setTexCoord(&TextureCoordinate724);

Coordinate& Coordinate725 =  Coordinate();
Coordinate725.setDEF(CString("Tongue_COORD_JinBlink"));
Coordinate725.setPoint(new float[]{-1.331,-0.2299,0.7138,1.331,-0.2299,0.7138,-1.563,0.07305,-1.268,1.563,0.07305,-1.268,-1.331,-0.07451,0.7385,1.331,-0.07451,0.7385,-1.563,0.2531,-1.239,1.563,0.2531,-1.239,-1.536,-0.127,-0.00304,1.536,-0.127,-0.00304,1.536,0.05032,0.0252,-1.536,0.05032,0.0252,-1.015,-0.2542,1.071,1.015,-0.2542,1.071,1.015,-0.1625,1.086,-1.015,-0.1625,1.086,0.5645,0.04305,-1.272,-0.5313,-0.257,0.7253,-0.5313,-0.05236,0.7579,-0.5645,0.2831,-1.234,-0.5607,-0.1565,-0.007746,0.5607,0.07987,0.02991,-0.4876,-0.283,1.2,0.4876,-0.1751,1.217,-0.5645,0.04305,-1.272,0.5313,-0.257,0.7253,0.5313,-0.05236,0.7579,0.5645,0.2831,-1.234,0.5607,-0.1565,-0.007746,-0.5607,0.07987,0.02991,0.4876,-0.283,1.2,-0.4876,-0.1751,1.217,-1.073,-0.2176,0.4108,-1.073,0.007936,0.4467,-0.7997,-0.2294,1.21,1.585,-0.1049,0.4287,-1.706,0.05553,-0.5782,-1.134,-0.06447,-0.5973,1.134,0.1755,-0.559,1.706,0.05553,-0.5782,-1.585,-0.1049,0.4287,-0.9063,-0.2816,0.9715,1.251,-0.187,0.9442,0.9063,-0.1054,0.9996,-1.251,-0.187,0.9442,1.073,-0.2176,0.4108,1.073,0.007936,0.4467,0.7997,-0.2294,1.21,1.134,-0.06447,-0.5973,-1.134,0.1755,-0.559,0.9063,-0.2816,0.9715,-0.9063,-0.1054,0.9996,0.0,-0.2176,0.4108,0.0,0.007936,0.4467,0.0,-0.2425,1.293,0.0,-0.06447,-0.5973,0.0,0.1755,-0.559,0.0,-0.2846,1.013,0.0,-0.1157,1.04,-1.457,-0.1894,0.4153,-1.134,0.04305,-1.272,1.563,-0.03447,-0.5925,-1.001,-0.2565,0.7175,1.001,-0.05045,0.7503,1.457,-0.02026,0.4422,1.134,0.2831,-1.234,-1.563,0.1455,-0.5638,1.441,-0.1518,0.7236,-1.441,-0.1518,0.7236,1.706,0.1631,-1.253,-1.706,0.1631,-1.253,-1.563,-0.03447,-0.5925,1.457,-0.1894,0.4153,1.563,0.1455,-0.5638,-1.457,-0.02026,0.4422,-1.119,-0.1565,-0.007746,1.119,0.07987,0.02991,1.676,-0.03833,0.01108,-1.676,-0.03833,0.01108,-0.8264,-0.2777,1.145,1.031,-0.2122,1.103,0.8264,-0.1631,1.163,-1.031,-0.2122,1.103,-1.165,-0.2565,0.9437,1.165,-0.2565,0.9437,1.165,-0.1207,0.9654,-1.165,-0.1207,0.9654,1.134,0.04305,-1.272,1.001,-0.2565,0.7175,-1.001,-0.05045,0.7503,-1.134,0.2831,-1.234,1.119,-0.1565,-0.007746,-1.119,0.07987,0.02991,0.8264,-0.2777,1.145,-0.8264,-0.1631,1.163,-0.5493,-0.2176,0.4108,-0.5493,0.007936,0.4467,-0.4809,-0.2392,1.272,-0.5645,-0.06447,-0.5973,0.5645,0.1755,-0.559,-0.5076,-0.2838,1.003,0.5076,-0.1131,1.03,0.0,0.04305,-1.272,0.0,-0.2572,0.7279,0.0,-0.053,0.7605,0.0,0.2831,-1.234,0.0,-0.1565,-0.007746,0.0,0.07987,0.02991,0.0,-0.2847,1.218,0.0,-0.1791,1.235,0.5493,-0.2176,0.4108,0.5493,0.007936,0.4467,0.4809,-0.2392,1.272,0.5645,-0.06447,-0.5973,-0.5645,0.1755,-0.559,0.5076,-0.2838,1.003,-0.5076,-0.1131,1.03}, 351);
IndexedFaceSet723.setCoord(&Coordinate725);

Shape721.setGeometry(&IndexedFaceSet723);

Transform720.addChild(&Shape721);

HAnimSegment719.addChild(&Transform720);

Coordinate& Coordinate726 =  Coordinate();
Coordinate726.setUSE(CString("Tongue_COORD_JinBlink"));
HAnimSegment719.setCoord(&Coordinate726);

HAnimDisplacer& HAnimDisplacer727 =  HAnimDisplacer();
HAnimDisplacer727.X3DNode::setName(CString("tongue_morphinterpolator"));
HAnimDisplacer727.setDEF(CString("Tongue_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer727.setCoordIndex(new int32_t[]{0,1,4,5,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,37,38,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,60,62,63,65,75,76,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116}, 91);
HAnimDisplacer727.setDisplacements(new float[]{0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.112,0.0,0.0,0.25,0.1177,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.2501,0.118,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.25,0.1177,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.2501,0.118,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1615,0.118,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1614,0.1175,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.1799,0.0,0.0,0.1267,0.0,0.0,0.1457,0.0,0.0,0.0572,0.0,0.0,0.2501,0.118,0.0,0.1865,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1404,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1614,0.118,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1615,0.118,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.0572,0.0,0.0,0.25,0.118,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.25,0.1177,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.25,0.118,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1121,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.0572,0.0,0.0,0.25,0.118,0.0,0.1865,0.0}, 273);
HAnimSegment719.setDisplacers(HAnimDisplacer727);

HAnimDisplacer& HAnimDisplacer728 =  HAnimDisplacer();
HAnimDisplacer728.X3DNode::setName(CString("tongue_morphinterpolator"));
HAnimDisplacer728.setDEF(CString("Tongue_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer728.setCoordIndex(new int32_t[]{19,20,27,44,62,65,83,86,90,105}, 10);
HAnimDisplacer728.setDisplacements(new float[]{0.0,0.0,0.322,0.0,0.0,0.0686,-0.0413,0.0,0.436,0.0,0.0,0.0688,0.0,0.0,0.0686,0.0,0.0,0.322,0.0,0.0,0.0683,0.0,0.0,0.0686,0.0,0.0,0.322,0.0,0.0,0.322}, 30);
HAnimSegment719.setDisplacers(HAnimDisplacer728);

HAnimDisplacer& HAnimDisplacer729 =  HAnimDisplacer();
HAnimDisplacer729.X3DNode::setName(CString("tongue_morphinterpolator"));
HAnimDisplacer729.setDEF(CString("Tongue_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer729.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116}, 117);
HAnimDisplacer729.setDisplacements(new float[]{0.0,-1.3011,-0.5882,0.0,-1.3011,-0.5882,0.0,-0.1823,0.11,0.0,-0.1474,0.036,0.0,-1.3165,-0.5403,0.0,-1.3165,-0.5403,0.0,-0.1823,0.11,0.0,-0.1499,0.048,0.0,-1.154,-0.3156,0.0,-1.154,-0.3156,0.0,-1.0543,-0.2883,0.0,-1.0543,-0.2883,0.0,-1.4118,-0.614,0.0,-1.4118,-0.614,0.0,-1.4215,-0.5862,0.0,-1.4215,-0.5862,0.0,-0.1469,0.033,0.0,-1.303,-0.5972,0.0,-1.3236,-0.5343,0.0,-0.1504,0.05,0.0,-1.1455,-0.3322,0.0,-1.0581,-0.2783,0.0,-1.508,-0.6254,0.0,-1.5299,-0.5751,0.0,-0.1469,0.033,0.0,-1.303,-0.5972,0.0,-1.3236,-0.5343,0.0,-0.1504,0.05,0.0,-1.1455,-0.3322,0.0,-1.0581,-0.2783,0.0,-1.508,-0.6254,0.0,-1.5299,-0.5751,0.0,-1.1594,-0.4717,0.0,-1.2139,-0.3495,0.0,-1.5196,-0.6002,0.0,-1.2771,-0.4418,0.0,-0.7623,-0.1091,0.0,-0.7467,-0.1522,0.0,-0.7779,-0.0661,0.0,-0.7623,-0.1091,0.0,-1.2771,-0.4418,0.0,-1.3794,-0.6176,0.0,-1.376,-0.5863,0.0,-1.3976,-0.5635,0.0,-1.376,-0.5863,0.0,-1.1594,-0.4717,0.0,-1.2139,-0.3495,0.0,-1.5196,-0.6002,0.0,-0.7467,-0.1522,0.0,-0.7779,-0.0661,0.0,-1.3794,-0.6176,0.0,-1.3976,-0.5635,0.0,-1.1594,-0.4717,0.0,-1.2139,-0.3495,0.0,-1.5585,-0.6173,0.0,-0.7467,-0.1522,0.0,-0.7779,-0.0661,0.0,-1.3924,-0.6203,0.0,-1.4093,-0.5685,0.0,-1.1636,-0.4622,0.0,-0.1469,0.033,0.0,-0.7506,-0.1415,0.0,-1.3005,-0.5967,0.0,-1.3216,-0.5334,0.0,-1.2107,-0.3581,0.0,-0.1504,0.05,0.0,-0.774,-0.0768,0.0,-1.3082,-0.564,0.0,-1.3082,-0.564,0.0,-0.1487,0.042,0.0,-0.1823,0.109,0.0,-0.7506,-0.1415,0.0,-1.1636,-0.4622,0.0,-0.774,-0.0768,0.0,-1.2107,-0.3581,0.0,-1.1455,-0.3322,0.0,-1.0581,-0.2783,0.0,-1.0047,-0.2827,0.0,-1.0047,-0.2827,0.0,-1.4823,-0.6158,0.0,-1.4248,-0.6028,0.0,-1.5049,-0.5622,0.0,-1.4248,-0.6028,0.0,-1.3715,-0.6082,0.0,-1.3715,-0.6082,0.0,-1.3853,-0.5666,0.0,-1.3853,-0.5666,0.0,-0.1469,0.033,0.0,-1.3005,-0.5967,0.0,-1.3216,-0.5334,0.0,-0.1504,0.05,0.0,-1.1455,-0.3322,0.0,-1.0581,-0.2783,0.0,-1.4823,-0.6158,0.0,-1.5049,-0.5622,0.0,-1.1594,-0.4717,0.0,-1.2139,-0.3495,0.0,-1.5488,-0.6128,0.0,-0.7467,-0.1522,0.0,-0.7779,-0.0661,0.0,-1.3892,-0.62,0.0,-1.4069,-0.5673,0.0,-0.1469,0.033,0.0,-1.3038,-0.5974,0.0,-1.325,-0.5347,0.0,-0.1504,0.05,0.0,-1.1455,-0.3322,0.0,-1.0581,-0.2783,0.0,-1.5163,-0.6283,0.0,-1.5379,-0.5794,0.0,-1.1594,-0.4717,0.0,-1.2139,-0.3495,0.0,-1.5488,-0.6128,0.0,-0.7467,-0.1522,0.0,-0.7779,-0.0661,0.0,-1.3892,-0.62,0.0,-1.4069,-0.5673}, 351);
HAnimSegment719.setDisplacers(HAnimDisplacer729);

HAnimJoint89.addChildren(&HAnimSegment719);

HAnimSegment& HAnimSegment730 =  HAnimSegment();
HAnimSegment730.X3DNode::setName(CString("upper_teeth"));
HAnimSegment730.setDEF(CString("hanim_Upper_teeth"));
Transform& Transform731 =  Transform();
Transform731.setDEF(CString("Upper_teeth_JinBlink"));
Transform731.setTranslation(new float[]{0.0,9.723,11.67});
Shape& Shape732 =  Shape();
Appearance& Appearance733 =  Appearance();
Appearance733.setUSE(CString("BaseAppearance_JinBlink"));
Shape732.addChild(&Appearance733);

IndexedFaceSet& IndexedFaceSet734 =  IndexedFaceSet();
IndexedFaceSet734.setDEF(CString("Upper_teeth-FACES_JinBlink"));
IndexedFaceSet734.setCoordIndex(new int32_t[]{0,521,265,-1,265,524,0,-1,1,525,265,-1,265,521,1,-1,4,523,265,-1,265,525,4,-1,3,524,265,-1,265,523,3,-1,2,522,266,-1,266,526,2,-1,23,558,266,-1,266,522,23,-1,24,551,266,-1,266,558,24,-1,5,526,266,-1,266,551,5,-1,3,523,267,-1,267,528,3,-1,4,529,267,-1,267,523,4,-1,7,527,267,-1,267,529,7,-1,6,528,267,-1,267,527,6,-1,5,551,268,-1,268,530,5,-1,24,559,268,-1,268,551,24,-1,25,552,268,-1,268,559,25,-1,8,530,268,-1,268,552,8,-1,6,527,269,-1,269,532,6,-1,7,533,269,-1,269,527,7,-1,10,531,269,-1,269,533,10,-1,9,532,269,-1,269,531,9,-1,8,552,270,-1,270,534,8,-1,25,560,270,-1,270,552,25,-1,26,553,270,-1,270,560,26,-1,11,534,270,-1,270,553,11,-1,9,531,271,-1,271,536,9,-1,10,537,271,-1,271,531,10,-1,13,535,271,-1,271,537,13,-1,12,536,271,-1,271,535,12,-1,11,553,272,-1,272,538,11,-1,26,561,272,-1,272,553,26,-1,27,554,272,-1,272,561,27,-1,14,538,272,-1,272,554,14,-1,12,535,273,-1,273,540,12,-1,13,541,273,-1,273,535,13,-1,16,539,273,-1,273,541,16,-1,15,540,273,-1,273,539,15,-1,14,554,274,-1,274,542,14,-1,27,562,274,-1,274,554,27,-1,28,555,274,-1,274,562,28,-1,17,542,274,-1,274,555,17,-1,15,539,275,-1,275,544,15,-1,16,545,275,-1,275,539,16,-1,19,543,275,-1,275,545,19,-1,18,544,275,-1,275,543,18,-1,17,555,276,-1,276,546,17,-1,28,563,276,-1,276,555,28,-1,29,556,276,-1,276,563,29,-1,20,546,276,-1,276,556,20,-1,18,543,277,-1,277,548,18,-1,19,549,277,-1,277,543,19,-1,21,547,277,-1,277,549,21,-1,160,548,277,-1,277,547,160,-1,20,556,278,-1,278,550,20,-1,29,564,278,-1,278,556,29,-1,30,557,278,-1,278,564,30,-1,22,550,278,-1,278,557,22,-1,2,526,279,-1,279,580,2,-1,5,581,279,-1,279,526,5,-1,33,565,279,-1,279,581,33,-1,32,580,279,-1,279,565,32,-1,5,530,280,-1,280,581,5,-1,8,582,280,-1,280,530,8,-1,34,566,280,-1,280,582,34,-1,33,581,280,-1,280,566,33,-1,8,534,281,-1,281,582,8,-1,11,583,281,-1,281,534,11,-1,35,567,281,-1,281,583,35,-1,34,582,281,-1,281,567,34,-1,11,538,282,-1,282,583,11,-1,14,584,282,-1,282,538,14,-1,36,568,282,-1,282,584,36,-1,35,583,282,-1,282,568,35,-1,14,542,283,-1,283,584,14,-1,17,585,283,-1,283,542,17,-1,37,569,283,-1,283,585,37,-1,36,584,283,-1,283,569,36,-1,17,546,284,-1,284,585,17,-1,20,586,284,-1,284,546,20,-1,38,570,284,-1,284,586,38,-1,37,585,284,-1,284,570,37,-1,20,550,285,-1,285,586,20,-1,22,587,285,-1,285,550,22,-1,168,571,285,-1,285,587,168,-1,38,586,285,-1,285,571,38,-1,21,549,286,-1,286,839,21,-1,19,588,286,-1,286,549,19,-1,39,572,286,-1,286,588,39,-1,170,839,286,-1,286,572,170,-1,19,545,287,-1,287,588,19,-1,16,589,287,-1,287,545,16,-1,40,573,287,-1,287,589,40,-1,39,588,287,-1,287,573,39,-1,16,541,288,-1,288,589,16,-1,13,590,288,-1,288,541,13,-1,41,574,288,-1,288,590,41,-1,40,589,288,-1,288,574,40,-1,13,537,289,-1,289,590,13,-1,10,591,289,-1,289,537,10,-1,42,575,289,-1,289,591,42,-1,41,590,289,-1,289,575,41,-1,10,533,290,-1,290,591,10,-1,7,592,290,-1,290,533,7,-1,43,576,290,-1,290,592,43,-1,42,591,290,-1,290,576,42,-1,7,529,291,-1,291,592,7,-1,4,593,291,-1,291,529,4,-1,44,577,291,-1,291,593,44,-1,43,592,291,-1,291,577,43,-1,4,525,292,-1,292,593,4,-1,1,579,292,-1,292,525,1,-1,31,578,292,-1,292,579,31,-1,44,593,292,-1,292,578,44,-1,24,558,293,-1,293,595,24,-1,23,594,293,-1,293,558,23,-1,45,595,293,-1,293,594,45,-1,25,559,294,-1,294,596,25,-1,24,595,294,-1,294,559,24,-1,45,596,294,-1,294,595,45,-1,26,560,295,-1,295,597,26,-1,25,596,295,-1,295,560,25,-1,45,597,295,-1,295,596,45,-1,27,561,296,-1,296,598,27,-1,26,597,296,-1,296,561,26,-1,45,598,296,-1,296,597,45,-1,28,562,297,-1,297,599,28,-1,27,598,297,-1,297,562,27,-1,45,599,297,-1,297,598,45,-1,29,563,298,-1,298,600,29,-1,28,599,298,-1,298,563,28,-1,45,600,298,-1,298,599,45,-1,30,564,299,-1,299,601,30,-1,29,600,299,-1,299,564,29,-1,45,601,299,-1,299,600,45,-1,75,667,300,-1,300,670,75,-1,76,668,300,-1,300,667,76,-1,77,669,300,-1,300,668,77,-1,78,670,300,-1,300,669,78,-1,79,675,301,-1,301,678,79,-1,80,676,301,-1,301,675,80,-1,81,677,301,-1,301,676,81,-1,82,678,301,-1,301,677,82,-1,83,683,302,-1,302,686,83,-1,84,684,302,-1,302,683,84,-1,85,685,302,-1,302,684,85,-1,86,686,302,-1,302,685,86,-1,87,691,303,-1,303,694,87,-1,88,692,303,-1,303,691,88,-1,89,693,303,-1,303,692,89,-1,90,694,303,-1,303,693,90,-1,91,699,304,-1,304,702,91,-1,92,700,304,-1,304,699,92,-1,93,701,304,-1,304,700,93,-1,94,702,304,-1,304,701,94,-1,95,707,305,-1,305,710,95,-1,96,708,305,-1,305,707,96,-1,97,709,305,-1,305,708,97,-1,98,710,305,-1,305,709,98,-1,99,715,306,-1,306,718,99,-1,100,716,306,-1,306,715,100,-1,101,717,306,-1,306,716,101,-1,102,718,306,-1,306,717,102,-1,32,565,307,-1,307,609,32,-1,33,610,307,-1,307,565,33,-1,104,752,307,-1,307,610,104,-1,103,609,307,-1,307,752,103,-1,33,603,308,-1,308,610,33,-1,44,611,308,-1,308,603,44,-1,105,753,308,-1,308,611,105,-1,104,610,308,-1,308,753,104,-1,44,578,309,-1,309,611,44,-1,31,612,309,-1,309,578,31,-1,106,754,309,-1,309,612,106,-1,105,611,309,-1,309,754,105,-1,31,602,310,-1,310,612,31,-1,32,609,310,-1,310,602,32,-1,103,755,310,-1,310,609,103,-1,106,612,310,-1,310,755,106,-1,38,571,311,-1,311,617,38,-1,168,618,311,-1,311,571,168,-1,108,756,311,-1,311,618,108,-1,107,617,311,-1,311,756,107,-1,168,900,312,-1,312,618,168,-1,170,619,312,-1,312,900,170,-1,109,757,312,-1,312,619,109,-1,108,618,312,-1,312,757,108,-1,170,572,313,-1,313,619,170,-1,39,620,313,-1,313,572,39,-1,110,758,313,-1,313,620,110,-1,109,619,313,-1,313,758,109,-1,39,604,314,-1,314,620,39,-1,38,617,314,-1,314,604,38,-1,107,759,314,-1,314,617,107,-1,110,620,314,-1,314,759,110,-1,39,573,315,-1,315,625,39,-1,40,626,315,-1,315,573,40,-1,112,760,315,-1,315,626,112,-1,111,625,315,-1,315,760,111,-1,40,605,316,-1,316,626,40,-1,37,627,316,-1,316,605,37,-1,113,761,316,-1,316,627,113,-1,112,626,316,-1,316,761,112,-1,37,570,317,-1,317,627,37,-1,38,628,317,-1,317,570,38,-1,114,762,317,-1,317,628,114,-1,113,627,317,-1,317,762,113,-1,38,604,318,-1,318,628,38,-1,39,625,318,-1,318,604,39,-1,111,763,318,-1,318,625,111,-1,114,628,318,-1,318,763,114,-1,40,574,319,-1,319,633,40,-1,41,634,319,-1,319,574,41,-1,116,764,319,-1,319,634,116,-1,115,633,319,-1,319,764,115,-1,41,606,320,-1,320,634,41,-1,36,635,320,-1,320,606,36,-1,117,765,320,-1,320,635,117,-1,116,634,320,-1,320,765,116,-1,36,569,321,-1,321,635,36,-1,37,636,321,-1,321,569,37,-1,118,766,321,-1,321,636,118,-1,117,635,321,-1,321,766,117,-1,37,605,322,-1,322,636,37,-1,40,633,322,-1,322,605,40,-1,115,767,322,-1,322,633,115,-1,118,636,322,-1,322,767,118,-1,41,575,323,-1,323,641,41,-1,42,642,323,-1,323,575,42,-1,120,768,323,-1,323,642,120,-1,119,641,323,-1,323,768,119,-1,42,607,324,-1,324,642,42,-1,35,643,324,-1,324,607,35,-1,121,769,324,-1,324,643,121,-1,120,642,324,-1,324,769,120,-1,35,568,325,-1,325,643,35,-1,36,644,325,-1,325,568,36,-1,122,770,325,-1,325,644,122,-1,121,643,325,-1,325,770,121,-1,36,606,326,-1,326,644,36,-1,41,641,326,-1,326,606,41,-1,119,771,326,-1,326,641,119,-1,122,644,326,-1,326,771,122,-1,42,576,327,-1,327,649,42,-1,43,650,327,-1,327,576,43,-1,124,772,327,-1,327,650,124,-1,123,649,327,-1,327,772,123,-1,43,608,328,-1,328,650,43,-1,34,651,328,-1,328,608,34,-1,125,773,328,-1,328,651,125,-1,124,650,328,-1,328,773,124,-1,34,567,329,-1,329,651,34,-1,35,652,329,-1,329,567,35,-1,126,774,329,-1,329,652,126,-1,125,651,329,-1,329,774,125,-1,35,607,330,-1,330,652,35,-1,42,649,330,-1,330,607,42,-1,123,775,330,-1,330,649,123,-1,126,652,330,-1,330,775,126,-1,43,577,331,-1,331,657,43,-1,44,658,331,-1,331,577,44,-1,128,776,331,-1,331,658,128,-1,127,657,331,-1,331,776,127,-1,44,603,332,-1,332,658,44,-1,33,659,332,-1,332,603,33,-1,129,777,332,-1,332,659,129,-1,128,658,332,-1,332,777,128,-1,33,566,333,-1,333,659,33,-1,34,660,333,-1,333,566,34,-1,130,778,333,-1,333,660,130,-1,129,659,333,-1,333,778,129,-1,34,608,334,-1,334,660,34,-1,43,657,334,-1,334,608,43,-1,127,779,334,-1,334,657,127,-1,130,660,334,-1,334,779,130,-1,45,594,335,-1,335,953,45,-1,23,666,335,-1,335,594,23,-1,131,780,335,-1,335,666,131,-1,234,953,335,-1,335,780,234,-1,46,613,336,-1,336,671,46,-1,47,672,336,-1,336,613,47,-1,76,667,336,-1,336,672,76,-1,75,671,336,-1,336,667,75,-1,47,614,337,-1,337,672,47,-1,48,673,337,-1,337,614,48,-1,77,668,337,-1,337,673,77,-1,76,672,337,-1,337,668,76,-1,48,615,338,-1,338,673,48,-1,49,674,338,-1,338,615,49,-1,78,669,338,-1,338,674,78,-1,77,673,338,-1,338,669,77,-1,49,616,339,-1,339,674,49,-1,46,671,339,-1,339,616,46,-1,75,670,339,-1,339,671,75,-1,78,674,339,-1,339,670,78,-1,50,621,340,-1,340,679,50,-1,51,680,340,-1,340,621,51,-1,80,675,340,-1,340,680,80,-1,79,679,340,-1,340,675,79,-1,51,622,341,-1,341,680,51,-1,52,681,341,-1,341,622,52,-1,81,676,341,-1,341,681,81,-1,80,680,341,-1,341,676,80,-1,52,623,342,-1,342,681,52,-1,53,682,342,-1,342,623,53,-1,82,677,342,-1,342,682,82,-1,81,681,342,-1,342,677,81,-1,53,624,343,-1,343,682,53,-1,50,679,343,-1,343,624,50,-1,79,678,343,-1,343,679,79,-1,82,682,343,-1,343,678,82,-1,54,629,344,-1,344,687,54,-1,55,688,344,-1,344,629,55,-1,84,683,344,-1,344,688,84,-1,83,687,344,-1,344,683,83,-1,55,630,345,-1,345,688,55,-1,56,689,345,-1,345,630,56,-1,85,684,345,-1,345,689,85,-1,84,688,345,-1,345,684,84,-1,56,631,346,-1,346,689,56,-1,57,690,346,-1,346,631,57,-1,86,685,346,-1,346,690,86,-1,85,689,346,-1,346,685,85,-1,57,632,347,-1,347,690,57,-1,54,687,347,-1,347,632,54,-1,83,686,347,-1,347,687,83,-1,86,690,347,-1,347,686,86,-1,58,637,348,-1,348,695,58,-1,59,696,348,-1,348,637,59,-1,88,691,348,-1,348,696,88,-1,87,695,348,-1,348,691,87,-1,59,638,349,-1,349,696,59,-1,60,697,349,-1,349,638,60,-1,89,692,349,-1,349,697,89,-1,88,696,349,-1,349,692,88,-1,60,639,350,-1,350,697,60,-1,61,698,350,-1,350,639,61,-1,90,693,350,-1,350,698,90,-1,89,697,350,-1,350,693,89,-1,61,640,351,-1,351,698,61,-1,58,695,351,-1,351,640,58,-1,87,694,351,-1,351,695,87,-1,90,698,351,-1,351,694,90,-1,62,645,352,-1,352,703,62,-1,63,704,352,-1,352,645,63,-1,92,699,352,-1,352,704,92,-1,91,703,352,-1,352,699,91,-1,63,646,353,-1,353,704,63,-1,64,705,353,-1,353,646,64,-1,93,700,353,-1,353,705,93,-1,92,704,353,-1,353,700,92,-1,64,647,354,-1,354,705,64,-1,65,706,354,-1,354,647,65,-1,94,701,354,-1,354,706,94,-1,93,705,354,-1,354,701,93,-1,65,648,355,-1,355,706,65,-1,62,703,355,-1,355,648,62,-1,91,702,355,-1,355,703,91,-1,94,706,355,-1,355,702,94,-1,66,653,356,-1,356,711,66,-1,67,712,356,-1,356,653,67,-1,96,707,356,-1,356,712,96,-1,95,711,356,-1,356,707,95,-1,67,654,357,-1,357,712,67,-1,68,713,357,-1,357,654,68,-1,97,708,357,-1,357,713,97,-1,96,712,357,-1,357,708,96,-1,68,655,358,-1,358,713,68,-1,69,714,358,-1,358,655,69,-1,98,709,358,-1,358,714,98,-1,97,713,358,-1,358,709,97,-1,69,656,359,-1,359,714,69,-1,66,711,359,-1,359,656,66,-1,95,710,359,-1,359,711,95,-1,98,714,359,-1,359,710,98,-1,70,661,360,-1,360,719,70,-1,71,720,360,-1,360,661,71,-1,100,715,360,-1,360,720,100,-1,99,719,360,-1,360,715,99,-1,71,662,361,-1,361,720,71,-1,72,721,361,-1,361,662,72,-1,101,716,361,-1,361,721,101,-1,100,720,361,-1,361,716,100,-1,72,663,362,-1,362,721,72,-1,73,722,362,-1,362,663,73,-1,102,717,362,-1,362,722,102,-1,101,721,362,-1,362,717,101,-1,73,664,363,-1,363,722,73,-1,70,719,363,-1,363,664,70,-1,99,718,363,-1,363,719,99,-1,102,722,363,-1,363,718,102,-1,104,724,364,-1,364,752,104,-1,47,613,364,-1,364,724,47,-1,46,723,364,-1,364,613,46,-1,103,752,364,-1,364,723,103,-1,105,725,365,-1,365,753,105,-1,48,614,365,-1,365,725,48,-1,47,724,365,-1,365,614,47,-1,104,753,365,-1,365,724,104,-1,106,726,366,-1,366,754,106,-1,49,615,366,-1,366,726,49,-1,48,725,366,-1,366,615,48,-1,105,754,366,-1,366,725,105,-1,103,723,367,-1,367,755,103,-1,46,616,367,-1,367,723,46,-1,49,726,367,-1,367,616,49,-1,106,755,367,-1,367,726,106,-1,108,728,368,-1,368,756,108,-1,51,621,368,-1,368,728,51,-1,50,727,368,-1,368,621,50,-1,107,756,368,-1,368,727,107,-1,109,729,369,-1,369,757,109,-1,52,622,369,-1,369,729,52,-1,51,728,369,-1,369,622,51,-1,108,757,369,-1,369,728,108,-1,110,730,370,-1,370,758,110,-1,53,623,370,-1,370,730,53,-1,52,729,370,-1,370,623,52,-1,109,758,370,-1,370,729,109,-1,107,727,371,-1,371,759,107,-1,50,624,371,-1,371,727,50,-1,53,730,371,-1,371,624,53,-1,110,759,371,-1,371,730,110,-1,112,732,372,-1,372,760,112,-1,55,629,372,-1,372,732,55,-1,54,731,372,-1,372,629,54,-1,111,760,372,-1,372,731,111,-1,113,733,373,-1,373,761,113,-1,56,630,373,-1,373,733,56,-1,55,732,373,-1,373,630,55,-1,112,761,373,-1,373,732,112,-1,114,734,374,-1,374,762,114,-1,57,631,374,-1,374,734,57,-1,56,733,374,-1,374,631,56,-1,113,762,374,-1,374,733,113,-1,111,731,375,-1,375,763,111,-1,54,632,375,-1,375,731,54,-1,57,734,375,-1,375,632,57,-1,114,763,375,-1,375,734,114,-1,116,736,376,-1,376,764,116,-1,59,637,376,-1,376,736,59,-1,58,735,376,-1,376,637,58,-1,115,764,376,-1,376,735,115,-1,117,737,377,-1,377,765,117,-1,60,638,377,-1,377,737,60,-1,59,736,377,-1,377,638,59,-1,116,765,377,-1,377,736,116,-1,118,738,378,-1,378,766,118,-1,61,639,378,-1,378,738,61,-1,60,737,378,-1,378,639,60,-1,117,766,378,-1,378,737,117,-1,115,735,379,-1,379,767,115,-1,58,640,379,-1,379,735,58,-1,61,738,379,-1,379,640,61,-1,118,767,379,-1,379,738,118,-1,120,740,380,-1,380,768,120,-1,63,645,380,-1,380,740,63,-1,62,739,380,-1,380,645,62,-1,119,768,380,-1,380,739,119,-1,121,741,381,-1,381,769,121,-1,64,646,381,-1,381,741,64,-1,63,740,381,-1,381,646,63,-1,120,769,381,-1,381,740,120,-1,122,742,382,-1,382,770,122,-1,65,647,382,-1,382,742,65,-1,64,741,382,-1,382,647,64,-1,121,770,382,-1,382,741,121,-1,119,739,383,-1,383,771,119,-1,62,648,383,-1,383,739,62,-1,65,742,383,-1,383,648,65,-1,122,771,383,-1,383,742,122,-1,124,744,384,-1,384,772,124,-1,67,653,384,-1,384,744,67,-1,66,743,384,-1,384,653,66,-1,123,772,384,-1,384,743,123,-1,125,745,385,-1,385,773,125,-1,68,654,385,-1,385,745,68,-1,67,744,385,-1,385,654,67,-1,124,773,385,-1,385,744,124,-1,126,746,386,-1,386,774,126,-1,69,655,386,-1,386,746,69,-1,68,745,386,-1,386,655,68,-1,125,774,386,-1,386,745,125,-1,123,743,387,-1,387,775,123,-1,66,656,387,-1,387,743,66,-1,69,746,387,-1,387,656,69,-1,126,775,387,-1,387,746,126,-1,128,748,388,-1,388,776,128,-1,71,661,388,-1,388,748,71,-1,70,747,388,-1,388,661,70,-1,127,776,388,-1,388,747,127,-1,129,749,389,-1,389,777,129,-1,72,662,389,-1,389,749,72,-1,71,748,389,-1,389,662,71,-1,128,777,389,-1,389,748,128,-1,130,750,390,-1,390,778,130,-1,73,663,390,-1,390,750,73,-1,72,749,390,-1,390,663,72,-1,129,778,390,-1,390,749,129,-1,127,747,391,-1,391,779,127,-1,70,664,391,-1,391,747,70,-1,73,750,391,-1,391,664,73,-1,130,779,391,-1,391,750,130,-1,131,751,392,-1,392,780,131,-1,74,665,392,-1,392,751,74,-1,264,1040,392,-1,392,665,264,-1,234,780,392,-1,392,1040,234,-1,132,784,393,-1,393,781,132,-1,135,783,393,-1,393,784,135,-1,134,782,393,-1,393,783,134,-1,133,781,393,-1,393,782,133,-1,136,788,394,-1,394,785,136,-1,139,787,394,-1,394,788,139,-1,138,786,394,-1,394,787,138,-1,137,785,394,-1,394,786,137,-1,135,791,395,-1,395,783,135,-1,141,790,395,-1,395,791,141,-1,140,789,395,-1,395,790,140,-1,134,783,395,-1,395,789,134,-1,139,794,396,-1,396,787,139,-1,143,793,396,-1,396,794,143,-1,142,792,396,-1,396,793,142,-1,138,787,396,-1,396,792,138,-1,141,797,397,-1,397,790,141,-1,145,796,397,-1,397,797,145,-1,144,795,397,-1,397,796,144,-1,140,790,397,-1,397,795,140,-1,143,800,398,-1,398,793,143,-1,147,799,398,-1,398,800,147,-1,146,798,398,-1,398,799,146,-1,142,793,398,-1,398,798,142,-1,145,803,399,-1,399,796,145,-1,149,802,399,-1,399,803,149,-1,148,801,399,-1,399,802,148,-1,144,796,399,-1,399,801,144,-1,147,806,400,-1,400,799,147,-1,151,805,400,-1,400,806,151,-1,150,804,400,-1,400,805,150,-1,146,799,400,-1,400,804,146,-1,149,809,401,-1,401,802,149,-1,153,808,401,-1,401,809,153,-1,152,807,401,-1,401,808,152,-1,148,802,401,-1,401,807,148,-1,151,812,402,-1,402,805,151,-1,155,811,402,-1,402,812,155,-1,154,810,402,-1,402,811,154,-1,150,805,402,-1,402,810,150,-1,153,815,403,-1,403,808,153,-1,157,814,403,-1,403,815,157,-1,156,813,403,-1,403,814,156,-1,152,808,403,-1,403,813,152,-1,155,818,404,-1,404,811,155,-1,159,817,404,-1,404,818,159,-1,158,816,404,-1,404,817,158,-1,154,811,404,-1,404,816,154,-1,157,820,405,-1,405,814,157,-1,160,547,405,-1,405,820,160,-1,21,819,405,-1,405,547,21,-1,156,814,405,-1,405,819,156,-1,159,822,406,-1,406,817,159,-1,22,557,406,-1,406,822,22,-1,30,821,406,-1,406,557,30,-1,158,817,406,-1,406,821,158,-1,136,825,407,-1,407,788,136,-1,162,824,407,-1,407,825,162,-1,161,823,407,-1,407,824,161,-1,139,788,407,-1,407,823,139,-1,139,823,408,-1,408,794,139,-1,161,827,408,-1,408,823,161,-1,163,826,408,-1,408,827,163,-1,143,794,408,-1,408,826,143,-1,143,826,409,-1,409,800,143,-1,163,829,409,-1,409,826,163,-1,164,828,409,-1,409,829,164,-1,147,800,409,-1,409,828,147,-1,147,828,410,-1,410,806,147,-1,164,831,410,-1,410,828,164,-1,165,830,410,-1,410,831,165,-1,151,806,410,-1,410,830,151,-1,151,830,411,-1,411,812,151,-1,165,833,411,-1,411,830,165,-1,166,832,411,-1,411,833,166,-1,155,812,411,-1,411,832,155,-1,155,832,412,-1,412,818,155,-1,166,835,412,-1,412,832,166,-1,167,834,412,-1,412,835,167,-1,159,818,412,-1,412,834,159,-1,159,834,413,-1,413,822,159,-1,167,836,413,-1,413,834,167,-1,168,587,413,-1,413,836,168,-1,22,822,413,-1,413,587,22,-1,21,839,414,-1,414,819,21,-1,170,838,414,-1,414,839,170,-1,169,837,414,-1,414,838,169,-1,156,819,414,-1,414,837,156,-1,156,837,415,-1,415,813,156,-1,169,841,415,-1,415,837,169,-1,171,840,415,-1,415,841,171,-1,152,813,415,-1,415,840,152,-1,152,840,416,-1,416,807,152,-1,171,843,416,-1,416,840,171,-1,172,842,416,-1,416,843,172,-1,148,807,416,-1,416,842,148,-1,148,842,417,-1,417,801,148,-1,172,845,417,-1,417,842,172,-1,173,844,417,-1,417,845,173,-1,144,801,417,-1,417,844,144,-1,144,844,418,-1,418,795,144,-1,173,847,418,-1,418,844,173,-1,174,846,418,-1,418,847,174,-1,140,795,418,-1,418,846,140,-1,140,846,419,-1,419,789,140,-1,174,849,419,-1,419,846,174,-1,175,848,419,-1,419,849,175,-1,134,789,419,-1,419,848,134,-1,134,848,420,-1,420,782,134,-1,175,851,420,-1,420,848,175,-1,176,850,420,-1,420,851,176,-1,133,782,420,-1,420,850,133,-1,138,853,421,-1,421,786,138,-1,45,852,421,-1,421,853,45,-1,137,786,421,-1,421,852,137,-1,142,854,422,-1,422,792,142,-1,45,853,422,-1,422,854,45,-1,138,792,422,-1,422,853,138,-1,146,855,423,-1,423,798,146,-1,45,854,423,-1,423,855,45,-1,142,798,423,-1,423,854,142,-1,150,856,424,-1,424,804,150,-1,45,855,424,-1,424,856,45,-1,146,804,424,-1,424,855,146,-1,154,857,425,-1,425,810,154,-1,45,856,425,-1,425,857,45,-1,150,810,425,-1,425,856,150,-1,158,858,426,-1,426,816,158,-1,45,857,426,-1,426,858,45,-1,154,816,426,-1,426,857,154,-1,30,601,427,-1,427,821,30,-1,45,858,427,-1,427,601,45,-1,158,821,427,-1,427,858,158,-1,177,862,428,-1,428,859,177,-1,180,861,428,-1,428,862,180,-1,179,860,428,-1,428,861,179,-1,178,859,428,-1,428,860,178,-1,181,866,429,-1,429,863,181,-1,184,865,429,-1,429,866,184,-1,183,864,429,-1,429,865,183,-1,182,863,429,-1,429,864,182,-1,185,870,430,-1,430,867,185,-1,188,869,430,-1,430,870,188,-1,187,868,430,-1,430,869,187,-1,186,867,430,-1,430,868,186,-1,189,874,431,-1,431,871,189,-1,192,873,431,-1,431,874,192,-1,191,872,431,-1,431,873,191,-1,190,871,431,-1,431,872,190,-1,193,878,432,-1,432,875,193,-1,196,877,432,-1,432,878,196,-1,195,876,432,-1,432,877,195,-1,194,875,432,-1,432,876,194,-1,197,882,433,-1,433,879,197,-1,200,881,433,-1,433,882,200,-1,199,880,433,-1,433,881,199,-1,198,879,433,-1,433,880,198,-1,201,886,434,-1,434,883,201,-1,204,885,434,-1,434,886,204,-1,203,884,434,-1,434,885,203,-1,202,883,434,-1,434,884,202,-1,162,889,435,-1,435,824,162,-1,206,888,435,-1,435,889,206,-1,205,887,435,-1,435,888,205,-1,161,824,435,-1,435,887,161,-1,161,887,436,-1,436,890,161,-1,205,892,436,-1,436,887,205,-1,207,891,436,-1,436,892,207,-1,175,890,436,-1,436,891,175,-1,175,891,437,-1,437,851,175,-1,207,894,437,-1,437,891,207,-1,208,893,437,-1,437,894,208,-1,176,851,437,-1,437,893,176,-1,176,893,438,-1,438,895,176,-1,208,896,438,-1,438,893,208,-1,206,889,438,-1,438,896,206,-1,162,895,438,-1,438,889,162,-1,167,899,439,-1,439,836,167,-1,210,898,439,-1,439,899,210,-1,209,897,439,-1,439,898,209,-1,168,836,439,-1,439,897,168,-1,168,897,440,-1,440,900,168,-1,209,902,440,-1,440,897,209,-1,211,901,440,-1,440,902,211,-1,170,900,440,-1,440,901,170,-1,170,901,441,-1,441,838,170,-1,211,904,441,-1,441,901,211,-1,212,903,441,-1,441,904,212,-1,169,838,441,-1,441,903,169,-1,169,903,442,-1,442,905,169,-1,212,906,442,-1,442,903,212,-1,210,899,442,-1,442,906,210,-1,167,905,442,-1,442,899,167,-1,169,909,443,-1,443,841,169,-1,214,908,443,-1,443,909,214,-1,213,907,443,-1,443,908,213,-1,171,841,443,-1,443,907,171,-1,171,907,444,-1,444,910,171,-1,213,912,444,-1,444,907,213,-1,215,911,444,-1,444,912,215,-1,166,910,444,-1,444,911,166,-1,166,911,445,-1,445,835,166,-1,215,914,445,-1,445,911,215,-1,216,913,445,-1,445,914,216,-1,167,835,445,-1,445,913,167,-1,167,913,446,-1,446,905,167,-1,216,915,446,-1,446,913,216,-1,214,909,446,-1,446,915,214,-1,169,905,446,-1,446,909,169,-1,171,918,447,-1,447,843,171,-1,218,917,447,-1,447,918,218,-1,217,916,447,-1,447,917,217,-1,172,843,447,-1,447,916,172,-1,172,916,448,-1,448,919,172,-1,217,921,448,-1,448,916,217,-1,219,920,448,-1,448,921,219,-1,165,919,448,-1,448,920,165,-1,165,920,449,-1,449,833,165,-1,219,923,449,-1,449,920,219,-1,220,922,449,-1,449,923,220,-1,166,833,449,-1,449,922,166,-1,166,922,450,-1,450,910,166,-1,220,924,450,-1,450,922,220,-1,218,918,450,-1,450,924,218,-1,171,910,450,-1,450,918,171,-1,172,927,451,-1,451,845,172,-1,222,926,451,-1,451,927,222,-1,221,925,451,-1,451,926,221,-1,173,845,451,-1,451,925,173,-1,173,925,452,-1,452,928,173,-1,221,930,452,-1,452,925,221,-1,223,929,452,-1,452,930,223,-1,164,928,452,-1,452,929,164,-1,164,929,453,-1,453,831,164,-1,223,932,453,-1,453,929,223,-1,224,931,453,-1,453,932,224,-1,165,831,453,-1,453,931,165,-1,165,931,454,-1,454,919,165,-1,224,933,454,-1,454,931,224,-1,222,927,454,-1,454,933,222,-1,172,919,454,-1,454,927,172,-1,173,936,455,-1,455,847,173,-1,226,935,455,-1,455,936,226,-1,225,934,455,-1,455,935,225,-1,174,847,455,-1,455,934,174,-1,174,934,456,-1,456,937,174,-1,225,939,456,-1,456,934,225,-1,227,938,456,-1,456,939,227,-1,163,937,456,-1,456,938,163,-1,163,938,457,-1,457,829,163,-1,227,941,457,-1,457,938,227,-1,228,940,457,-1,457,941,228,-1,164,829,457,-1,457,940,164,-1,164,940,458,-1,458,928,164,-1,228,942,458,-1,458,940,228,-1,226,936,458,-1,458,942,226,-1,173,928,458,-1,458,936,173,-1,174,945,459,-1,459,849,174,-1,230,944,459,-1,459,945,230,-1,229,943,459,-1,459,944,229,-1,175,849,459,-1,459,943,175,-1,175,943,460,-1,460,890,175,-1,229,947,460,-1,460,943,229,-1,231,946,460,-1,460,947,231,-1,161,890,460,-1,460,946,161,-1,161,946,461,-1,461,827,161,-1,231,949,461,-1,461,946,231,-1,232,948,461,-1,461,949,232,-1,163,827,461,-1,461,948,163,-1,163,948,462,-1,462,937,163,-1,232,950,462,-1,462,948,232,-1,230,945,462,-1,462,950,230,-1,174,937,462,-1,462,945,174,-1,45,953,463,-1,463,852,45,-1,234,952,463,-1,463,953,234,-1,233,951,463,-1,463,952,233,-1,137,852,463,-1,463,951,137,-1,235,956,464,-1,464,954,235,-1,177,859,464,-1,464,956,177,-1,178,955,464,-1,464,859,178,-1,236,954,464,-1,464,955,236,-1,236,955,465,-1,465,957,236,-1,178,860,465,-1,465,955,178,-1,179,958,465,-1,465,860,179,-1,237,957,465,-1,465,958,237,-1,237,958,466,-1,466,959,237,-1,179,861,466,-1,466,958,179,-1,180,960,466,-1,466,861,180,-1,238,959,466,-1,466,960,238,-1,238,960,467,-1,467,961,238,-1,180,862,467,-1,467,960,180,-1,177,956,467,-1,467,862,177,-1,235,961,467,-1,467,956,235,-1,239,964,468,-1,468,962,239,-1,181,863,468,-1,468,964,181,-1,182,963,468,-1,468,863,182,-1,240,962,468,-1,468,963,240,-1,240,963,469,-1,469,965,240,-1,182,864,469,-1,469,963,182,-1,183,966,469,-1,469,864,183,-1,241,965,469,-1,469,966,241,-1,241,966,470,-1,470,967,241,-1,183,865,470,-1,470,966,183,-1,184,968,470,-1,470,865,184,-1,242,967,470,-1,470,968,242,-1,242,968,471,-1,471,969,242,-1,184,866,471,-1,471,968,184,-1,181,964,471,-1,471,866,181,-1,239,969,471,-1,471,964,239,-1,243,972,472,-1,472,970,243,-1,185,867,472,-1,472,972,185,-1,186,971,472,-1,472,867,186,-1,244,970,472,-1,472,971,244,-1,244,971,473,-1,473,973,244,-1,186,868,473,-1,473,971,186,-1,187,974,473,-1,473,868,187,-1,245,973,473,-1,473,974,245,-1,245,974,474,-1,474,975,245,-1,187,869,474,-1,474,974,187,-1,188,976,474,-1,474,869,188,-1,246,975,474,-1,474,976,246,-1,246,976,475,-1,475,977,246,-1,188,870,475,-1,475,976,188,-1,185,972,475,-1,475,870,185,-1,243,977,475,-1,475,972,243,-1,247,980,476,-1,476,978,247,-1,189,871,476,-1,476,980,189,-1,190,979,476,-1,476,871,190,-1,248,978,476,-1,476,979,248,-1,248,979,477,-1,477,981,248,-1,190,872,477,-1,477,979,190,-1,191,982,477,-1,477,872,191,-1,249,981,477,-1,477,982,249,-1,249,982,478,-1,478,983,249,-1,191,873,478,-1,478,982,191,-1,192,984,478,-1,478,873,192,-1,250,983,478,-1,478,984,250,-1,250,984,479,-1,479,985,250,-1,192,874,479,-1,479,984,192,-1,189,980,479,-1,479,874,189,-1,247,985,479,-1,479,980,247,-1,251,988,480,-1,480,986,251,-1,193,875,480,-1,480,988,193,-1,194,987,480,-1,480,875,194,-1,252,986,480,-1,480,987,252,-1,252,987,481,-1,481,989,252,-1,194,876,481,-1,481,987,194,-1,195,990,481,-1,481,876,195,-1,253,989,481,-1,481,990,253,-1,253,990,482,-1,482,991,253,-1,195,877,482,-1,482,990,195,-1,196,992,482,-1,482,877,196,-1,254,991,482,-1,482,992,254,-1,254,992,483,-1,483,993,254,-1,196,878,483,-1,483,992,196,-1,193,988,483,-1,483,878,193,-1,251,993,483,-1,483,988,251,-1,255,996,484,-1,484,994,255,-1,197,879,484,-1,484,996,197,-1,198,995,484,-1,484,879,198,-1,256,994,484,-1,484,995,256,-1,256,995,485,-1,485,997,256,-1,198,880,485,-1,485,995,198,-1,199,998,485,-1,485,880,199,-1,257,997,485,-1,485,998,257,-1,257,998,486,-1,486,999,257,-1,199,881,486,-1,486,998,199,-1,200,1000,486,-1,486,881,200,-1,258,999,486,-1,486,1000,258,-1,258,1000,487,-1,487,1001,258,-1,200,882,487,-1,487,1000,200,-1,197,996,487,-1,487,882,197,-1,255,1001,487,-1,487,996,255,-1,259,1004,488,-1,488,1002,259,-1,201,883,488,-1,488,1004,201,-1,202,1003,488,-1,488,883,202,-1,260,1002,488,-1,488,1003,260,-1,260,1003,489,-1,489,1005,260,-1,202,884,489,-1,489,1003,202,-1,203,1006,489,-1,489,884,203,-1,261,1005,489,-1,489,1006,261,-1,261,1006,490,-1,490,1007,261,-1,203,885,490,-1,490,1006,203,-1,204,1008,490,-1,490,885,204,-1,262,1007,490,-1,490,1008,262,-1,262,1008,491,-1,491,1009,262,-1,204,886,491,-1,491,1008,204,-1,201,1004,491,-1,491,886,201,-1,259,1009,491,-1,491,1004,259,-1,205,888,492,-1,492,1010,205,-1,206,1011,492,-1,492,888,206,-1,235,954,492,-1,492,1011,235,-1,236,1010,492,-1,492,954,236,-1,207,892,493,-1,493,1012,207,-1,205,1010,493,-1,493,892,205,-1,236,957,493,-1,493,1010,236,-1,237,1012,493,-1,493,957,237,-1,208,894,494,-1,494,1013,208,-1,207,1012,494,-1,494,894,207,-1,237,959,494,-1,494,1012,237,-1,238,1013,494,-1,494,959,238,-1,206,896,495,-1,495,1011,206,-1,208,1013,495,-1,495,896,208,-1,238,961,495,-1,495,1013,238,-1,235,1011,495,-1,495,961,235,-1,209,898,496,-1,496,1014,209,-1,210,1015,496,-1,496,898,210,-1,239,962,496,-1,496,1015,239,-1,240,1014,496,-1,496,962,240,-1,211,902,497,-1,497,1016,211,-1,209,1014,497,-1,497,902,209,-1,240,965,497,-1,497,1014,240,-1,241,1016,497,-1,497,965,241,-1,212,904,498,-1,498,1017,212,-1,211,1016,498,-1,498,904,211,-1,241,967,498,-1,498,1016,241,-1,242,1017,498,-1,498,967,242,-1,210,906,499,-1,499,1015,210,-1,212,1017,499,-1,499,906,212,-1,242,969,499,-1,499,1017,242,-1,239,1015,499,-1,499,969,239,-1,213,908,500,-1,500,1018,213,-1,214,1019,500,-1,500,908,214,-1,243,970,500,-1,500,1019,243,-1,244,1018,500,-1,500,970,244,-1,215,912,501,-1,501,1020,215,-1,213,1018,501,-1,501,912,213,-1,244,973,501,-1,501,1018,244,-1,245,1020,501,-1,501,973,245,-1,216,914,502,-1,502,1021,216,-1,215,1020,502,-1,502,914,215,-1,245,975,502,-1,502,1020,245,-1,246,1021,502,-1,502,975,246,-1,214,915,503,-1,503,1019,214,-1,216,1021,503,-1,503,915,216,-1,246,977,503,-1,503,1021,246,-1,243,1019,503,-1,503,977,243,-1,217,917,504,-1,504,1022,217,-1,218,1023,504,-1,504,917,218,-1,247,978,504,-1,504,1023,247,-1,248,1022,504,-1,504,978,248,-1,219,921,505,-1,505,1024,219,-1,217,1022,505,-1,505,921,217,-1,248,981,505,-1,505,1022,248,-1,249,1024,505,-1,505,981,249,-1,220,923,506,-1,506,1025,220,-1,219,1024,506,-1,506,923,219,-1,249,983,506,-1,506,1024,249,-1,250,1025,506,-1,506,983,250,-1,218,924,507,-1,507,1023,218,-1,220,1025,507,-1,507,924,220,-1,250,985,507,-1,507,1025,250,-1,247,1023,507,-1,507,985,247,-1,221,926,508,-1,508,1026,221,-1,222,1027,508,-1,508,926,222,-1,251,986,508,-1,508,1027,251,-1,252,1026,508,-1,508,986,252,-1,223,930,509,-1,509,1028,223,-1,221,1026,509,-1,509,930,221,-1,252,989,509,-1,509,1026,252,-1,253,1028,509,-1,509,989,253,-1,224,932,510,-1,510,1029,224,-1,223,1028,510,-1,510,932,223,-1,253,991,510,-1,510,1028,253,-1,254,1029,510,-1,510,991,254,-1,222,933,511,-1,511,1027,222,-1,224,1029,511,-1,511,933,224,-1,254,993,511,-1,511,1029,254,-1,251,1027,511,-1,511,993,251,-1,225,935,512,-1,512,1030,225,-1,226,1031,512,-1,512,935,226,-1,255,994,512,-1,512,1031,255,-1,256,1030,512,-1,512,994,256,-1,227,939,513,-1,513,1032,227,-1,225,1030,513,-1,513,939,225,-1,256,997,513,-1,513,1030,256,-1,257,1032,513,-1,513,997,257,-1,228,941,514,-1,514,1033,228,-1,227,1032,514,-1,514,941,227,-1,257,999,514,-1,514,1032,257,-1,258,1033,514,-1,514,999,258,-1,226,942,515,-1,515,1031,226,-1,228,1033,515,-1,515,942,228,-1,258,1001,515,-1,515,1033,258,-1,255,1031,515,-1,515,1001,255,-1,229,944,516,-1,516,1034,229,-1,230,1035,516,-1,516,944,230,-1,259,1002,516,-1,516,1035,259,-1,260,1034,516,-1,516,1002,260,-1,231,947,517,-1,517,1036,231,-1,229,1034,517,-1,517,947,229,-1,260,1005,517,-1,517,1034,260,-1,261,1036,517,-1,517,1005,261,-1,232,949,518,-1,518,1037,232,-1,231,1036,518,-1,518,949,231,-1,261,1007,518,-1,518,1036,261,-1,262,1037,518,-1,518,1007,262,-1,230,950,519,-1,519,1035,230,-1,232,1037,519,-1,519,950,232,-1,262,1009,519,-1,519,1037,262,-1,259,1035,519,-1,519,1009,259,-1,233,952,520,-1,520,1038,233,-1,234,1040,520,-1,520,952,234,-1,264,1039,520,-1,520,1040,264,-1,263,1038,520,-1,520,1039,263,-1}, 8080);
IndexedFaceSet734.setCreaseAngle(3.14159);
IndexedFaceSet734.setSolid(false);
IndexedFaceSet734.setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,5,2,-1,2,3,4,-1,6,7,2,-1,2,5,6,-1,8,1,2,-1,2,7,8,-1,9,12,11,-1,11,10,9,-1,13,14,11,-1,11,12,13,-1,15,16,11,-1,11,14,15,-1,17,10,11,-1,11,16,17,-1,8,7,19,-1,19,18,8,-1,6,20,19,-1,19,7,6,-1,21,22,19,-1,19,20,21,-1,23,18,19,-1,19,22,23,-1,17,16,25,-1,25,24,17,-1,15,26,25,-1,25,16,15,-1,27,28,25,-1,25,26,27,-1,29,24,25,-1,25,28,29,-1,23,22,31,-1,31,30,23,-1,21,32,31,-1,31,22,21,-1,33,34,31,-1,31,32,33,-1,35,30,31,-1,31,34,35,-1,29,28,37,-1,37,36,29,-1,27,38,37,-1,37,28,27,-1,39,40,37,-1,37,38,39,-1,41,36,37,-1,37,40,41,-1,35,34,43,-1,43,42,35,-1,33,44,43,-1,43,34,33,-1,45,46,43,-1,43,44,45,-1,47,42,43,-1,43,46,47,-1,41,40,87,-1,87,48,41,-1,39,88,87,-1,87,40,39,-1,145,146,87,-1,87,88,145,-1,147,48,87,-1,87,146,147,-1,47,46,149,-1,149,148,47,-1,45,150,149,-1,149,46,45,-1,151,152,149,-1,149,150,151,-1,153,148,149,-1,149,152,153,-1,147,146,155,-1,155,154,147,-1,145,156,155,-1,155,146,145,-1,157,158,155,-1,155,156,157,-1,159,154,155,-1,155,158,159,-1,153,152,161,-1,161,160,153,-1,151,162,161,-1,161,152,151,-1,163,164,161,-1,161,162,163,-1,165,160,161,-1,161,164,165,-1,159,158,167,-1,167,166,159,-1,157,168,167,-1,167,158,157,-1,169,170,167,-1,167,168,169,-1,171,166,167,-1,167,170,171,-1,165,164,173,-1,173,172,165,-1,163,174,173,-1,173,164,163,-1,175,176,173,-1,173,174,175,-1,177,172,173,-1,173,176,177,-1,171,170,179,-1,179,178,171,-1,169,180,179,-1,179,170,169,-1,181,182,179,-1,179,180,181,-1,183,178,179,-1,179,182,183,-1,9,10,185,-1,185,184,9,-1,17,186,185,-1,185,10,17,-1,187,188,185,-1,185,186,187,-1,189,184,185,-1,185,188,189,-1,17,24,190,-1,190,186,17,-1,29,191,190,-1,190,24,29,-1,192,193,190,-1,190,191,192,-1,187,186,190,-1,190,193,187,-1,29,36,194,-1,194,191,29,-1,41,195,194,-1,194,36,41,-1,262,263,194,-1,194,195,262,-1,192,191,194,-1,194,263,192,-1,41,48,292,-1,292,195,41,-1,147,293,292,-1,292,48,147,-1,294,295,292,-1,292,293,294,-1,262,195,292,-1,292,295,262,-1,147,154,296,-1,296,293,147,-1,159,297,296,-1,296,154,159,-1,298,299,296,-1,296,297,298,-1,294,293,296,-1,296,299,294,-1,159,166,300,-1,300,297,159,-1,171,301,300,-1,300,166,171,-1,302,303,300,-1,300,301,302,-1,298,297,300,-1,300,303,298,-1,171,178,304,-1,304,301,171,-1,183,305,304,-1,304,178,183,-1,306,307,304,-1,304,305,306,-1,302,301,304,-1,304,307,302,-1,175,174,309,-1,309,308,175,-1,163,310,309,-1,309,174,163,-1,311,312,309,-1,309,310,311,-1,313,308,309,-1,309,312,313,-1,163,162,314,-1,314,310,163,-1,151,315,314,-1,314,162,151,-1,316,317,314,-1,314,315,316,-1,311,310,314,-1,314,317,311,-1,151,150,318,-1,318,315,151,-1,45,319,318,-1,318,150,45,-1,320,321,318,-1,318,319,320,-1,316,315,318,-1,318,321,316,-1,45,44,322,-1,322,319,45,-1,33,323,322,-1,322,44,33,-1,324,325,322,-1,322,323,324,-1,320,319,322,-1,322,325,320,-1,33,32,326,-1,326,323,33,-1,21,327,326,-1,326,32,21,-1,328,364,326,-1,326,327,328,-1,324,323,326,-1,326,364,324,-1,21,20,421,-1,421,327,21,-1,6,422,421,-1,421,20,6,-1,423,424,421,-1,421,422,423,-1,328,327,421,-1,421,424,328,-1,6,5,425,-1,425,422,6,-1,4,426,425,-1,425,5,4,-1,427,428,425,-1,425,426,427,-1,423,422,425,-1,425,428,423,-1,15,14,430,-1,430,429,15,-1,13,431,430,-1,430,14,13,-1,432,429,430,-1,430,431,432,-1,27,26,434,-1,434,433,27,-1,15,429,434,-1,434,26,15,-1,432,433,434,-1,434,429,432,-1,39,38,436,-1,436,435,39,-1,27,433,436,-1,436,38,27,-1,432,435,436,-1,436,433,432,-1,145,88,438,-1,438,437,145,-1,39,435,438,-1,438,88,39,-1,432,437,438,-1,438,435,432,-1,157,156,440,-1,440,439,157,-1,145,437,440,-1,440,156,145,-1,432,439,440,-1,440,437,432,-1,169,168,442,-1,442,441,169,-1,157,439,442,-1,442,168,157,-1,432,441,442,-1,442,439,432,-1,181,180,444,-1,444,443,181,-1,169,441,444,-1,444,180,169,-1,432,443,444,-1,444,441,432,-1,49,52,51,-1,51,50,49,-1,53,54,51,-1,51,52,53,-1,55,56,51,-1,51,54,55,-1,57,50,51,-1,51,56,57,-1,58,61,60,-1,60,59,58,-1,62,63,60,-1,60,61,62,-1,64,65,60,-1,60,63,64,-1,66,59,60,-1,60,65,66,-1,67,70,69,-1,69,68,67,-1,71,72,69,-1,69,70,71,-1,73,74,69,-1,69,72,73,-1,75,68,69,-1,69,74,75,-1,76,79,78,-1,78,77,76,-1,80,81,78,-1,78,79,80,-1,82,83,78,-1,78,81,82,-1,84,77,78,-1,78,83,84,-1,85,90,89,-1,89,86,85,-1,91,92,89,-1,89,90,91,-1,93,94,89,-1,89,92,93,-1,95,86,89,-1,89,94,95,-1,96,99,98,-1,98,97,96,-1,100,101,98,-1,98,99,100,-1,102,103,98,-1,98,101,102,-1,104,97,98,-1,98,103,104,-1,105,108,107,-1,107,106,105,-1,109,110,107,-1,107,108,109,-1,111,112,107,-1,107,110,111,-1,113,106,107,-1,107,112,113,-1,114,117,116,-1,116,115,114,-1,118,119,116,-1,116,117,118,-1,120,121,116,-1,116,119,120,-1,122,115,116,-1,116,121,122,-1,118,124,123,-1,123,119,118,-1,125,126,123,-1,123,124,125,-1,127,128,123,-1,123,126,127,-1,120,119,123,-1,123,128,120,-1,125,130,129,-1,129,126,125,-1,131,132,129,-1,129,130,131,-1,133,134,129,-1,129,132,133,-1,127,126,129,-1,129,134,127,-1,131,136,135,-1,135,132,131,-1,114,115,135,-1,135,136,114,-1,122,137,135,-1,135,115,122,-1,133,132,135,-1,135,137,133,-1,138,141,140,-1,140,139,138,-1,142,143,140,-1,140,141,142,-1,144,196,140,-1,140,143,144,-1,197,139,140,-1,140,196,197,-1,142,199,198,-1,198,143,142,-1,200,201,198,-1,198,199,200,-1,202,203,198,-1,198,201,202,-1,144,143,198,-1,198,203,144,-1,200,205,204,-1,204,201,200,-1,206,207,204,-1,204,205,206,-1,208,209,204,-1,204,207,208,-1,202,201,204,-1,204,209,202,-1,206,211,210,-1,210,207,206,-1,138,139,210,-1,210,211,138,-1,197,212,210,-1,210,139,197,-1,208,207,210,-1,210,212,208,-1,206,215,214,-1,214,213,206,-1,216,217,214,-1,214,215,216,-1,218,219,214,-1,214,217,218,-1,220,213,214,-1,214,219,220,-1,216,222,221,-1,221,217,216,-1,223,224,221,-1,221,222,223,-1,225,226,221,-1,221,224,225,-1,218,217,221,-1,221,226,218,-1,223,228,227,-1,227,224,223,-1,138,229,227,-1,227,228,138,-1,230,231,227,-1,227,229,230,-1,225,224,227,-1,227,231,225,-1,138,211,232,-1,232,229,138,-1,206,213,232,-1,232,211,206,-1,220,233,232,-1,232,213,220,-1,230,229,232,-1,232,233,230,-1,216,236,235,-1,235,234,216,-1,237,238,235,-1,235,236,237,-1,239,240,235,-1,235,238,239,-1,241,234,235,-1,235,240,241,-1,237,243,242,-1,242,238,237,-1,244,245,242,-1,242,243,244,-1,246,247,242,-1,242,245,246,-1,239,238,242,-1,242,247,239,-1,244,249,248,-1,248,245,244,-1,223,250,248,-1,248,249,223,-1,251,252,248,-1,248,250,251,-1,246,245,248,-1,248,252,246,-1,223,222,253,-1,253,250,223,-1,216,234,253,-1,253,222,216,-1,241,254,253,-1,253,234,241,-1,251,250,253,-1,253,254,251,-1,237,257,256,-1,256,255,237,-1,258,259,256,-1,256,257,258,-1,260,261,256,-1,256,259,260,-1,264,255,256,-1,256,261,264,-1,258,266,265,-1,265,259,258,-1,267,268,265,-1,265,266,267,-1,269,270,265,-1,265,268,269,-1,260,259,265,-1,265,270,260,-1,267,272,271,-1,271,268,267,-1,244,273,271,-1,271,272,244,-1,274,275,271,-1,271,273,274,-1,269,268,271,-1,271,275,269,-1,244,243,276,-1,276,273,244,-1,237,255,276,-1,276,243,237,-1,264,277,276,-1,276,255,264,-1,274,273,276,-1,276,277,274,-1,258,280,279,-1,279,278,258,-1,281,282,279,-1,279,280,281,-1,283,284,279,-1,279,282,283,-1,285,278,279,-1,279,284,285,-1,281,287,286,-1,286,282,281,-1,288,289,286,-1,286,287,288,-1,290,291,286,-1,286,289,290,-1,283,282,286,-1,286,291,283,-1,288,330,329,-1,329,289,288,-1,267,331,329,-1,329,330,267,-1,332,333,329,-1,329,331,332,-1,290,289,329,-1,329,333,290,-1,267,266,334,-1,334,331,267,-1,258,278,334,-1,334,266,258,-1,285,335,334,-1,334,278,285,-1,332,331,334,-1,334,335,332,-1,281,338,337,-1,337,336,281,-1,125,339,337,-1,337,338,125,-1,340,341,337,-1,337,339,340,-1,342,336,337,-1,337,341,342,-1,125,124,343,-1,343,339,125,-1,118,344,343,-1,343,124,118,-1,345,346,343,-1,343,344,345,-1,340,339,343,-1,343,346,340,-1,118,348,347,-1,347,344,118,-1,288,349,347,-1,347,348,288,-1,350,351,347,-1,347,349,350,-1,345,344,347,-1,347,351,345,-1,288,287,352,-1,352,349,288,-1,281,336,352,-1,352,287,281,-1,342,353,352,-1,352,336,342,-1,350,349,352,-1,352,353,350,-1,432,431,446,-1,446,445,432,-1,13,447,446,-1,446,431,13,-1,448,449,446,-1,446,447,448,-1,450,445,446,-1,446,449,450,-1,354,357,356,-1,356,355,354,-1,358,359,356,-1,356,357,358,-1,53,52,356,-1,356,359,53,-1,49,355,356,-1,356,52,49,-1,358,361,360,-1,360,359,358,-1,362,363,360,-1,360,361,362,-1,55,54,360,-1,360,363,55,-1,53,359,360,-1,360,54,53,-1,362,366,365,-1,365,363,362,-1,367,368,365,-1,365,366,367,-1,57,56,365,-1,365,368,57,-1,55,363,365,-1,365,56,55,-1,367,370,369,-1,369,368,367,-1,354,355,369,-1,369,370,354,-1,49,50,369,-1,369,355,49,-1,57,368,369,-1,369,50,57,-1,371,374,373,-1,373,372,371,-1,375,376,373,-1,373,374,375,-1,62,61,373,-1,373,376,62,-1,58,372,373,-1,373,61,58,-1,375,378,377,-1,377,376,375,-1,379,380,377,-1,377,378,379,-1,64,63,377,-1,377,380,64,-1,62,376,377,-1,377,63,62,-1,379,382,381,-1,381,380,379,-1,383,384,381,-1,381,382,383,-1,66,65,381,-1,381,384,66,-1,64,380,381,-1,381,65,64,-1,383,386,385,-1,385,384,383,-1,371,372,385,-1,385,386,371,-1,58,59,385,-1,385,372,58,-1,66,384,385,-1,385,59,66,-1,387,390,389,-1,389,388,387,-1,391,392,389,-1,389,390,391,-1,71,70,389,-1,389,392,71,-1,67,388,389,-1,389,70,67,-1,391,394,393,-1,393,392,391,-1,395,396,393,-1,393,394,395,-1,73,72,393,-1,393,396,73,-1,71,392,393,-1,393,72,71,-1,395,398,397,-1,397,396,395,-1,399,400,397,-1,397,398,399,-1,75,74,397,-1,397,400,75,-1,73,396,397,-1,397,74,73,-1,399,402,401,-1,401,400,399,-1,387,388,401,-1,401,402,387,-1,67,68,401,-1,401,388,67,-1,75,400,401,-1,401,68,75,-1,403,406,405,-1,405,404,403,-1,407,408,405,-1,405,406,407,-1,80,79,405,-1,405,408,80,-1,76,404,405,-1,405,79,76,-1,407,410,409,-1,409,408,407,-1,411,412,409,-1,409,410,411,-1,82,81,409,-1,409,412,82,-1,80,408,409,-1,409,81,80,-1,411,414,413,-1,413,412,411,-1,415,416,413,-1,413,414,415,-1,84,83,413,-1,413,416,84,-1,82,412,413,-1,413,83,82,-1,415,418,417,-1,417,416,415,-1,403,404,417,-1,417,418,403,-1,76,77,417,-1,417,404,76,-1,84,416,417,-1,417,77,84,-1,419,458,457,-1,457,420,419,-1,459,460,457,-1,457,458,459,-1,91,90,457,-1,457,460,91,-1,85,420,457,-1,457,90,85,-1,459,462,461,-1,461,460,459,-1,463,464,461,-1,461,462,463,-1,93,92,461,-1,461,464,93,-1,91,460,461,-1,461,92,91,-1,463,466,465,-1,465,464,463,-1,467,468,465,-1,465,466,467,-1,95,94,465,-1,465,468,95,-1,93,464,465,-1,465,94,93,-1,467,470,469,-1,469,468,467,-1,419,420,469,-1,469,470,419,-1,85,86,469,-1,469,420,85,-1,95,468,469,-1,469,86,95,-1,471,474,473,-1,473,472,471,-1,475,476,473,-1,473,474,475,-1,100,99,473,-1,473,476,100,-1,96,472,473,-1,473,99,96,-1,475,478,477,-1,477,476,475,-1,479,480,477,-1,477,478,479,-1,102,101,477,-1,477,480,102,-1,100,476,477,-1,477,101,100,-1,479,482,481,-1,481,480,479,-1,483,484,481,-1,481,482,483,-1,104,103,481,-1,481,484,104,-1,102,480,481,-1,481,103,102,-1,483,486,485,-1,485,484,483,-1,471,472,485,-1,485,486,471,-1,96,97,485,-1,485,472,96,-1,104,484,485,-1,485,97,104,-1,487,490,489,-1,489,488,487,-1,491,493,489,-1,489,490,491,-1,109,108,489,-1,489,493,109,-1,105,488,489,-1,489,108,105,-1,491,495,494,-1,494,493,491,-1,496,497,494,-1,494,495,496,-1,111,110,494,-1,494,497,111,-1,109,493,494,-1,494,110,109,-1,496,499,498,-1,498,497,496,-1,500,501,498,-1,498,499,500,-1,113,112,498,-1,498,501,113,-1,111,497,498,-1,498,112,111,-1,500,503,502,-1,502,501,500,-1,487,488,502,-1,502,503,487,-1,105,106,502,-1,502,488,105,-1,113,501,502,-1,502,106,113,-1,120,505,504,-1,504,121,120,-1,358,357,504,-1,504,505,358,-1,354,506,504,-1,504,357,354,-1,122,121,504,-1,504,506,122,-1,127,508,507,-1,507,128,127,-1,362,361,507,-1,507,508,362,-1,358,505,507,-1,507,361,358,-1,120,128,507,-1,507,505,120,-1,133,510,509,-1,509,134,133,-1,367,366,509,-1,509,510,367,-1,362,508,509,-1,509,366,362,-1,127,134,509,-1,509,508,127,-1,122,506,511,-1,511,137,122,-1,354,370,511,-1,511,506,354,-1,367,510,511,-1,511,370,367,-1,133,137,511,-1,511,510,133,-1,144,513,512,-1,512,196,144,-1,375,374,512,-1,512,513,375,-1,371,514,512,-1,512,374,371,-1,197,196,512,-1,512,514,197,-1,202,516,515,-1,515,203,202,-1,379,378,515,-1,515,516,379,-1,375,513,515,-1,515,378,375,-1,144,203,515,-1,515,513,144,-1,208,518,517,-1,517,209,208,-1,383,382,517,-1,517,518,383,-1,379,516,517,-1,517,382,379,-1,202,209,517,-1,517,516,202,-1,197,514,519,-1,519,212,197,-1,371,386,519,-1,519,514,371,-1,383,518,519,-1,519,386,383,-1,208,212,519,-1,519,518,208,-1,218,521,520,-1,520,219,218,-1,391,390,520,-1,520,521,391,-1,387,522,520,-1,520,390,387,-1,220,219,520,-1,520,522,220,-1,225,524,523,-1,523,226,225,-1,395,394,523,-1,523,524,395,-1,391,521,523,-1,523,394,391,-1,218,226,523,-1,523,521,218,-1,230,526,525,-1,525,231,230,-1,399,398,525,-1,525,526,399,-1,395,524,525,-1,525,398,395,-1,225,231,525,-1,525,524,225,-1,220,522,527,-1,527,233,220,-1,387,402,527,-1,527,522,387,-1,399,526,527,-1,527,402,399,-1,230,233,527,-1,527,526,230,-1,239,529,528,-1,528,240,239,-1,407,406,528,-1,528,529,407,-1,403,530,528,-1,528,406,403,-1,241,240,528,-1,528,530,241,-1,246,532,531,-1,531,247,246,-1,411,410,531,-1,531,532,411,-1,407,529,531,-1,531,410,407,-1,239,247,531,-1,531,529,239,-1,251,534,533,-1,533,252,251,-1,415,414,533,-1,533,534,415,-1,411,532,533,-1,533,414,411,-1,246,252,533,-1,533,532,246,-1,241,530,535,-1,535,254,241,-1,403,418,535,-1,535,530,403,-1,415,534,535,-1,535,418,415,-1,251,254,535,-1,535,534,251,-1,260,537,536,-1,536,261,260,-1,459,458,536,-1,536,537,459,-1,419,538,536,-1,536,458,419,-1,264,261,536,-1,536,538,264,-1,269,540,539,-1,539,270,269,-1,463,462,539,-1,539,540,463,-1,459,537,539,-1,539,462,459,-1,260,270,539,-1,539,537,260,-1,274,542,541,-1,541,275,274,-1,467,466,541,-1,541,542,467,-1,463,540,541,-1,541,466,463,-1,269,275,541,-1,541,540,269,-1,264,538,543,-1,543,277,264,-1,419,470,543,-1,543,538,419,-1,467,542,543,-1,543,470,467,-1,274,277,543,-1,543,542,274,-1,283,545,544,-1,544,284,283,-1,475,474,544,-1,544,545,475,-1,471,546,544,-1,544,474,471,-1,285,284,544,-1,544,546,285,-1,290,548,547,-1,547,291,290,-1,479,478,547,-1,547,548,479,-1,475,545,547,-1,547,478,475,-1,283,291,547,-1,547,545,283,-1,332,600,598,-1,598,333,332,-1,483,482,598,-1,598,600,483,-1,479,548,598,-1,598,482,479,-1,290,333,598,-1,598,548,290,-1,285,546,602,-1,602,335,285,-1,471,486,602,-1,602,546,471,-1,483,600,602,-1,602,486,483,-1,332,335,602,-1,602,600,332,-1,340,606,604,-1,604,341,340,-1,491,490,604,-1,604,606,491,-1,487,609,604,-1,604,490,487,-1,342,341,604,-1,604,609,342,-1,345,642,616,-1,616,346,345,-1,496,495,616,-1,616,642,496,-1,491,606,616,-1,616,495,491,-1,340,346,616,-1,616,606,340,-1,350,644,643,-1,643,351,350,-1,500,499,643,-1,643,644,500,-1,496,642,643,-1,643,499,496,-1,345,351,643,-1,643,642,345,-1,342,609,645,-1,645,353,342,-1,487,503,645,-1,645,609,487,-1,500,644,645,-1,645,503,500,-1,350,353,645,-1,645,644,350,-1,448,452,451,-1,451,449,448,-1,453,454,451,-1,451,452,453,-1,455,456,451,-1,451,454,455,-1,450,449,451,-1,451,456,450,-1,492,551,550,-1,550,549,492,-1,552,553,550,-1,550,551,552,-1,554,555,550,-1,550,553,554,-1,556,549,550,-1,550,555,556,-1,557,560,559,-1,559,558,557,-1,561,562,559,-1,559,560,561,-1,563,564,559,-1,559,562,563,-1,565,558,559,-1,559,564,565,-1,552,567,566,-1,566,553,552,-1,568,569,566,-1,566,567,568,-1,570,571,566,-1,566,569,570,-1,554,553,566,-1,566,571,554,-1,561,573,572,-1,572,562,561,-1,574,575,572,-1,572,573,574,-1,576,577,572,-1,572,575,576,-1,563,562,572,-1,572,577,563,-1,568,579,578,-1,578,569,568,-1,580,581,578,-1,578,579,580,-1,582,583,578,-1,578,581,582,-1,570,569,578,-1,578,583,570,-1,574,585,584,-1,584,575,574,-1,586,587,584,-1,584,585,586,-1,588,589,584,-1,584,587,588,-1,576,575,584,-1,584,589,576,-1,580,591,590,-1,590,581,580,-1,592,593,590,-1,590,591,592,-1,594,595,590,-1,590,593,594,-1,582,581,590,-1,590,595,582,-1,586,597,596,-1,596,587,586,-1,599,601,596,-1,596,597,599,-1,603,605,596,-1,596,601,603,-1,588,587,596,-1,596,605,588,-1,592,608,607,-1,607,593,592,-1,610,611,607,-1,607,608,610,-1,612,613,607,-1,607,611,612,-1,594,593,607,-1,607,613,594,-1,599,615,614,-1,614,601,599,-1,617,618,614,-1,614,615,617,-1,619,620,614,-1,614,618,619,-1,603,601,614,-1,614,620,603,-1,610,622,621,-1,621,611,610,-1,623,624,621,-1,621,622,623,-1,625,626,621,-1,621,624,625,-1,612,611,621,-1,621,626,612,-1,617,628,627,-1,627,618,617,-1,629,630,627,-1,627,628,629,-1,631,632,627,-1,627,630,631,-1,619,618,627,-1,627,632,619,-1,623,634,633,-1,633,624,623,-1,177,176,633,-1,633,634,177,-1,175,635,633,-1,633,176,175,-1,625,624,633,-1,633,635,625,-1,629,637,636,-1,636,630,629,-1,183,182,636,-1,636,637,183,-1,181,638,636,-1,636,182,181,-1,631,630,636,-1,636,638,631,-1,557,640,639,-1,639,560,557,-1,641,707,639,-1,639,640,641,-1,708,793,639,-1,639,707,708,-1,561,560,639,-1,639,793,561,-1,561,793,822,-1,822,573,561,-1,708,823,822,-1,822,793,708,-1,824,825,822,-1,822,823,824,-1,574,573,822,-1,822,825,574,-1,574,825,826,-1,826,585,574,-1,824,827,826,-1,826,825,824,-1,828,829,826,-1,826,827,828,-1,586,585,826,-1,826,829,586,-1,586,829,830,-1,830,597,586,-1,828,831,830,-1,830,829,828,-1,832,833,830,-1,830,831,832,-1,599,597,830,-1,830,833,599,-1,599,833,834,-1,834,615,599,-1,832,835,834,-1,834,833,832,-1,836,837,834,-1,834,835,836,-1,617,615,834,-1,834,837,617,-1,617,837,838,-1,838,628,617,-1,836,839,838,-1,838,837,836,-1,840,841,838,-1,838,839,840,-1,629,628,838,-1,838,841,629,-1,629,841,842,-1,842,637,629,-1,840,843,842,-1,842,841,840,-1,306,305,842,-1,842,843,306,-1,183,637,842,-1,842,305,183,-1,175,308,844,-1,844,635,175,-1,313,845,844,-1,844,308,313,-1,846,847,844,-1,844,845,846,-1,625,635,844,-1,844,847,625,-1,625,847,848,-1,848,626,625,-1,846,849,848,-1,848,847,846,-1,850,851,848,-1,848,849,850,-1,612,626,848,-1,848,851,612,-1,612,851,852,-1,852,613,612,-1,850,853,852,-1,852,851,850,-1,854,855,852,-1,852,853,854,-1,594,613,852,-1,852,855,594,-1,594,855,856,-1,856,595,594,-1,854,857,856,-1,856,855,854,-1,858,859,856,-1,856,857,858,-1,582,595,856,-1,856,859,582,-1,582,859,860,-1,860,583,582,-1,858,861,860,-1,860,859,858,-1,862,863,860,-1,860,861,862,-1,570,583,860,-1,860,863,570,-1,570,863,864,-1,864,571,570,-1,862,865,864,-1,864,863,862,-1,866,867,864,-1,864,865,866,-1,554,571,864,-1,864,867,554,-1,554,867,868,-1,868,555,554,-1,866,869,868,-1,868,867,866,-1,871,872,868,-1,868,869,871,-1,556,555,868,-1,868,872,556,-1,563,875,874,-1,874,564,563,-1,432,877,874,-1,874,875,432,-1,565,564,874,-1,874,877,565,-1,576,880,878,-1,878,577,576,-1,432,875,878,-1,878,880,432,-1,563,577,878,-1,878,875,563,-1,588,883,881,-1,881,589,588,-1,432,880,881,-1,881,883,432,-1,576,589,881,-1,881,880,576,-1,603,885,884,-1,884,605,603,-1,432,883,884,-1,884,885,432,-1,588,605,884,-1,884,883,588,-1,619,888,887,-1,887,620,619,-1,432,885,887,-1,887,888,432,-1,603,620,887,-1,887,885,603,-1,631,890,889,-1,889,632,631,-1,432,888,889,-1,889,890,432,-1,619,632,889,-1,889,888,619,-1,181,443,891,-1,891,638,181,-1,432,890,891,-1,891,443,432,-1,631,638,891,-1,891,890,631,-1,646,649,648,-1,648,647,646,-1,650,651,648,-1,648,649,650,-1,652,653,648,-1,648,651,652,-1,654,647,648,-1,648,653,654,-1,655,658,657,-1,657,656,655,-1,659,660,657,-1,657,658,659,-1,661,662,657,-1,657,660,661,-1,663,656,657,-1,657,662,663,-1,664,667,666,-1,666,665,664,-1,668,669,666,-1,666,667,668,-1,670,671,666,-1,666,669,670,-1,672,665,666,-1,666,671,672,-1,673,676,675,-1,675,674,673,-1,677,678,675,-1,675,676,677,-1,679,680,675,-1,675,678,679,-1,681,674,675,-1,675,680,681,-1,682,685,684,-1,684,683,682,-1,686,687,684,-1,684,685,686,-1,688,689,684,-1,684,687,688,-1,690,683,684,-1,684,689,690,-1,691,694,693,-1,693,692,691,-1,695,696,693,-1,693,694,695,-1,697,698,693,-1,693,696,697,-1,699,692,693,-1,693,698,699,-1,700,703,702,-1,702,701,700,-1,704,705,702,-1,702,703,704,-1,706,709,702,-1,702,705,706,-1,710,701,702,-1,702,709,710,-1,711,714,713,-1,713,712,711,-1,715,716,713,-1,713,714,715,-1,717,718,713,-1,713,716,717,-1,719,712,713,-1,713,718,719,-1,719,718,721,-1,721,720,719,-1,717,722,721,-1,721,718,717,-1,723,724,721,-1,721,722,723,-1,725,720,721,-1,721,724,725,-1,725,724,727,-1,727,726,725,-1,723,728,727,-1,727,724,723,-1,729,730,727,-1,727,728,729,-1,731,726,727,-1,727,730,731,-1,731,730,733,-1,733,732,731,-1,729,734,733,-1,733,730,729,-1,715,714,733,-1,733,734,715,-1,711,732,733,-1,733,714,711,-1,735,738,737,-1,737,736,735,-1,739,740,737,-1,737,738,739,-1,741,742,737,-1,737,740,741,-1,142,736,737,-1,737,742,142,-1,142,742,743,-1,743,199,142,-1,741,744,743,-1,743,742,741,-1,745,746,743,-1,743,744,745,-1,200,199,743,-1,743,746,200,-1,200,746,748,-1,748,747,200,-1,745,749,748,-1,748,746,745,-1,750,751,748,-1,748,749,750,-1,752,747,748,-1,748,751,752,-1,752,751,754,-1,754,753,752,-1,750,755,754,-1,754,751,750,-1,739,738,754,-1,754,755,739,-1,735,753,754,-1,754,738,735,-1,752,758,757,-1,757,756,752,-1,759,760,757,-1,757,758,759,-1,761,762,757,-1,757,760,761,-1,763,756,757,-1,757,762,763,-1,763,762,765,-1,765,764,763,-1,761,766,765,-1,765,762,761,-1,767,768,765,-1,765,766,767,-1,769,764,765,-1,765,768,769,-1,769,768,771,-1,771,770,769,-1,767,772,771,-1,771,768,767,-1,773,774,771,-1,771,772,773,-1,735,770,771,-1,771,774,735,-1,735,774,775,-1,775,753,735,-1,773,776,775,-1,775,774,773,-1,759,758,775,-1,775,776,759,-1,752,753,775,-1,775,758,752,-1,763,779,778,-1,778,777,763,-1,780,781,778,-1,778,779,780,-1,782,783,778,-1,778,781,782,-1,784,777,778,-1,778,783,784,-1,784,783,786,-1,786,785,784,-1,782,787,786,-1,786,783,782,-1,788,789,786,-1,786,787,788,-1,790,785,786,-1,786,789,790,-1,790,789,792,-1,792,791,790,-1,788,794,792,-1,792,789,788,-1,795,796,792,-1,792,794,795,-1,769,791,792,-1,792,796,769,-1,769,796,797,-1,797,764,769,-1,795,798,797,-1,797,796,795,-1,780,779,797,-1,797,798,780,-1,763,764,797,-1,797,779,763,-1,784,801,800,-1,800,799,784,-1,802,803,800,-1,800,801,802,-1,804,805,800,-1,800,803,804,-1,806,799,800,-1,800,805,806,-1,806,805,808,-1,808,807,806,-1,804,809,808,-1,808,805,804,-1,810,811,808,-1,808,809,810,-1,812,807,808,-1,808,811,812,-1,812,811,814,-1,814,813,812,-1,810,815,814,-1,814,811,810,-1,816,817,814,-1,814,815,816,-1,790,813,814,-1,814,817,790,-1,790,817,818,-1,818,785,790,-1,816,819,818,-1,818,817,816,-1,802,801,818,-1,818,819,802,-1,784,785,818,-1,818,801,784,-1,806,870,821,-1,821,820,806,-1,873,876,821,-1,821,870,873,-1,879,882,821,-1,821,876,879,-1,886,820,821,-1,821,882,886,-1,886,882,901,-1,901,896,886,-1,879,902,901,-1,901,882,879,-1,903,904,901,-1,901,902,903,-1,905,896,901,-1,901,904,905,-1,905,904,907,-1,907,906,905,-1,903,908,907,-1,907,904,903,-1,909,910,907,-1,907,908,909,-1,812,906,907,-1,907,910,812,-1,812,910,911,-1,911,807,812,-1,909,912,911,-1,911,910,909,-1,873,870,911,-1,911,912,873,-1,806,807,911,-1,911,870,806,-1,886,915,914,-1,914,913,886,-1,916,917,914,-1,914,915,916,-1,918,919,914,-1,914,917,918,-1,725,913,914,-1,914,919,725,-1,725,919,920,-1,920,720,725,-1,918,921,920,-1,920,919,918,-1,922,923,920,-1,920,921,922,-1,719,720,920,-1,920,923,719,-1,719,923,925,-1,925,924,719,-1,922,926,925,-1,925,923,922,-1,927,928,925,-1,925,926,927,-1,905,924,925,-1,925,928,905,-1,905,928,929,-1,929,896,905,-1,927,930,929,-1,929,928,927,-1,916,915,929,-1,929,930,916,-1,886,896,929,-1,929,915,886,-1,432,445,892,-1,892,877,432,-1,450,893,892,-1,892,445,450,-1,894,895,892,-1,892,893,894,-1,565,877,892,-1,892,895,565,-1,931,934,933,-1,933,932,931,-1,646,647,933,-1,933,934,646,-1,654,935,933,-1,933,647,654,-1,936,932,933,-1,933,935,936,-1,936,935,938,-1,938,937,936,-1,654,653,938,-1,938,935,654,-1,652,939,938,-1,938,653,652,-1,940,937,938,-1,938,939,940,-1,940,939,942,-1,942,941,940,-1,652,651,942,-1,942,939,652,-1,650,943,942,-1,942,651,650,-1,944,941,942,-1,942,943,944,-1,944,943,946,-1,946,945,944,-1,650,649,946,-1,946,943,650,-1,646,934,946,-1,946,649,646,-1,931,945,946,-1,946,934,931,-1,947,950,949,-1,949,948,947,-1,655,656,949,-1,949,950,655,-1,663,951,949,-1,949,656,663,-1,952,948,949,-1,949,951,952,-1,952,951,954,-1,954,953,952,-1,663,662,954,-1,954,951,663,-1,661,955,954,-1,954,662,661,-1,956,953,954,-1,954,955,956,-1,956,955,958,-1,958,957,956,-1,661,660,958,-1,958,955,661,-1,659,959,958,-1,958,660,659,-1,960,957,958,-1,958,959,960,-1,960,959,962,-1,962,961,960,-1,659,658,962,-1,962,959,659,-1,655,950,962,-1,962,658,655,-1,947,961,962,-1,962,950,947,-1,963,966,965,-1,965,964,963,-1,664,665,965,-1,965,966,664,-1,672,967,965,-1,965,665,672,-1,968,964,965,-1,965,967,968,-1,968,967,970,-1,970,969,968,-1,672,671,970,-1,970,967,672,-1,670,971,970,-1,970,671,670,-1,972,969,970,-1,970,971,972,-1,972,971,974,-1,974,973,972,-1,670,669,974,-1,974,971,670,-1,668,975,974,-1,974,669,668,-1,976,973,974,-1,974,975,976,-1,976,975,978,-1,978,977,976,-1,668,667,978,-1,978,975,668,-1,664,966,978,-1,978,667,664,-1,963,977,978,-1,978,966,963,-1,979,982,981,-1,981,980,979,-1,673,674,981,-1,981,982,673,-1,681,983,981,-1,981,674,681,-1,984,980,981,-1,981,983,984,-1,984,983,986,-1,986,985,984,-1,681,680,986,-1,986,983,681,-1,679,987,986,-1,986,680,679,-1,988,985,986,-1,986,987,988,-1,988,987,990,-1,990,989,988,-1,679,678,990,-1,990,987,679,-1,677,991,990,-1,990,678,677,-1,992,989,990,-1,990,991,992,-1,992,991,994,-1,994,993,992,-1,677,676,994,-1,994,991,677,-1,673,982,994,-1,994,676,673,-1,979,993,994,-1,994,982,979,-1,995,998,997,-1,997,996,995,-1,682,683,997,-1,997,998,682,-1,690,999,997,-1,997,683,690,-1,1000,996,997,-1,997,999,1000,-1,1000,999,1002,-1,1002,1001,1000,-1,690,689,1002,-1,1002,999,690,-1,688,1003,1002,-1,1002,689,688,-1,1004,1001,1002,-1,1002,1003,1004,-1,1004,1003,1006,-1,1006,1005,1004,-1,688,687,1006,-1,1006,1003,688,-1,686,1007,1006,-1,1006,687,686,-1,1008,1005,1006,-1,1006,1007,1008,-1,1008,1007,1010,-1,1010,1009,1008,-1,686,685,1010,-1,1010,1007,686,-1,682,998,1010,-1,1010,685,682,-1,995,1009,1010,-1,1010,998,995,-1,1011,1014,1013,-1,1013,1012,1011,-1,691,692,1013,-1,1013,1014,691,-1,699,1015,1013,-1,1013,692,699,-1,1016,1012,1013,-1,1013,1015,1016,-1,1016,1015,1018,-1,1018,1017,1016,-1,699,698,1018,-1,1018,1015,699,-1,697,1019,1018,-1,1018,698,697,-1,1020,1017,1018,-1,1018,1019,1020,-1,1020,1019,1022,-1,1022,1021,1020,-1,697,696,1022,-1,1022,1019,697,-1,695,1023,1022,-1,1022,696,695,-1,1024,1021,1022,-1,1022,1023,1024,-1,1024,1023,1026,-1,1026,1025,1024,-1,695,694,1026,-1,1026,1023,695,-1,691,1014,1026,-1,1026,694,691,-1,1011,1025,1026,-1,1026,1014,1011,-1,1027,1030,1029,-1,1029,1028,1027,-1,700,701,1029,-1,1029,1030,700,-1,710,1031,1029,-1,1029,701,710,-1,1032,1028,1029,-1,1029,1031,1032,-1,1032,1031,1034,-1,1034,1033,1032,-1,710,709,1034,-1,1034,1031,710,-1,706,1035,1034,-1,1034,709,706,-1,1036,1033,1034,-1,1034,1035,1036,-1,1036,1035,1038,-1,1038,1037,1036,-1,706,705,1038,-1,1038,1035,706,-1,704,1039,1038,-1,1038,705,704,-1,1040,1037,1038,-1,1038,1039,1040,-1,1040,1039,1042,-1,1042,1041,1040,-1,704,703,1042,-1,1042,1039,704,-1,700,1030,1042,-1,1042,703,700,-1,1027,1041,1042,-1,1042,1030,1027,-1,717,716,1044,-1,1044,1043,717,-1,715,1045,1044,-1,1044,716,715,-1,931,932,1044,-1,1044,1045,931,-1,936,1043,1044,-1,1044,932,936,-1,723,722,1047,-1,1047,1046,723,-1,717,1043,1047,-1,1047,722,717,-1,936,937,1047,-1,1047,1043,936,-1,940,1046,1047,-1,1047,937,940,-1,729,728,1049,-1,1049,1048,729,-1,723,1046,1049,-1,1049,728,723,-1,940,941,1049,-1,1049,1046,940,-1,944,1048,1049,-1,1049,941,944,-1,715,734,1050,-1,1050,1045,715,-1,729,1048,1050,-1,1050,734,729,-1,944,945,1050,-1,1050,1048,944,-1,931,1045,1050,-1,1050,945,931,-1,741,740,1052,-1,1052,1051,741,-1,739,1053,1052,-1,1052,740,739,-1,947,948,1052,-1,1052,1053,947,-1,952,1051,1052,-1,1052,948,952,-1,745,744,1055,-1,1055,1054,745,-1,741,1051,1055,-1,1055,744,741,-1,952,953,1055,-1,1055,1051,952,-1,956,1054,1055,-1,1055,953,956,-1,750,749,1057,-1,1057,1056,750,-1,745,1054,1057,-1,1057,749,745,-1,956,957,1057,-1,1057,1054,956,-1,960,1056,1057,-1,1057,957,960,-1,739,755,1058,-1,1058,1053,739,-1,750,1056,1058,-1,1058,755,750,-1,960,961,1058,-1,1058,1056,960,-1,947,1053,1058,-1,1058,961,947,-1,761,760,1060,-1,1060,1059,761,-1,759,1061,1060,-1,1060,760,759,-1,963,964,1060,-1,1060,1061,963,-1,968,1059,1060,-1,1060,964,968,-1,767,766,1063,-1,1063,1062,767,-1,761,1059,1063,-1,1063,766,761,-1,968,969,1063,-1,1063,1059,968,-1,972,1062,1063,-1,1063,969,972,-1,773,772,1065,-1,1065,1064,773,-1,767,1062,1065,-1,1065,772,767,-1,972,973,1065,-1,1065,1062,972,-1,976,1064,1065,-1,1065,973,976,-1,759,776,1066,-1,1066,1061,759,-1,773,1064,1066,-1,1066,776,773,-1,976,977,1066,-1,1066,1064,976,-1,963,1061,1066,-1,1066,977,963,-1,782,781,1068,-1,1068,1067,782,-1,780,1069,1068,-1,1068,781,780,-1,979,980,1068,-1,1068,1069,979,-1,984,1067,1068,-1,1068,980,984,-1,788,787,1071,-1,1071,1070,788,-1,782,1067,1071,-1,1071,787,782,-1,984,985,1071,-1,1071,1067,984,-1,988,1070,1071,-1,1071,985,988,-1,795,794,1073,-1,1073,1072,795,-1,788,1070,1073,-1,1073,794,788,-1,988,989,1073,-1,1073,1070,988,-1,992,1072,1073,-1,1073,989,992,-1,780,798,1074,-1,1074,1069,780,-1,795,1072,1074,-1,1074,798,795,-1,992,993,1074,-1,1074,1072,992,-1,979,1069,1074,-1,1074,993,979,-1,804,803,1076,-1,1076,1075,804,-1,802,1077,1076,-1,1076,803,802,-1,995,996,1076,-1,1076,1077,995,-1,1000,1075,1076,-1,1076,996,1000,-1,810,809,1079,-1,1079,1078,810,-1,804,1075,1079,-1,1079,809,804,-1,1000,1001,1079,-1,1079,1075,1000,-1,1004,1078,1079,-1,1079,1001,1004,-1,816,815,1081,-1,1081,1080,816,-1,810,1078,1081,-1,1081,815,810,-1,1004,1005,1081,-1,1081,1078,1004,-1,1008,1080,1081,-1,1081,1005,1008,-1,802,819,1082,-1,1082,1077,802,-1,816,1080,1082,-1,1082,819,816,-1,1008,1009,1082,-1,1082,1080,1008,-1,995,1077,1082,-1,1082,1009,995,-1,879,876,1084,-1,1084,1083,879,-1,873,1085,1084,-1,1084,876,873,-1,1011,1012,1084,-1,1084,1085,1011,-1,1016,1083,1084,-1,1084,1012,1016,-1,903,902,1087,-1,1087,1086,903,-1,879,1083,1087,-1,1087,902,879,-1,1016,1017,1087,-1,1087,1083,1016,-1,1020,1086,1087,-1,1087,1017,1020,-1,909,908,1089,-1,1089,1088,909,-1,903,1086,1089,-1,1089,908,903,-1,1020,1021,1089,-1,1089,1086,1020,-1,1024,1088,1089,-1,1089,1021,1024,-1,873,912,1090,-1,1090,1085,873,-1,909,1088,1090,-1,1090,912,909,-1,1024,1025,1090,-1,1090,1088,1024,-1,1011,1085,1090,-1,1090,1025,1011,-1,918,917,1092,-1,1092,1091,918,-1,916,1093,1092,-1,1092,917,916,-1,1027,1028,1092,-1,1092,1093,1027,-1,1032,1091,1092,-1,1092,1028,1032,-1,922,921,1095,-1,1095,1094,922,-1,918,1091,1095,-1,1095,921,918,-1,1032,1033,1095,-1,1095,1091,1032,-1,1036,1094,1095,-1,1095,1033,1036,-1,927,926,1097,-1,1097,1096,927,-1,922,1094,1097,-1,1097,926,922,-1,1036,1037,1097,-1,1097,1094,1036,-1,1040,1096,1097,-1,1097,1037,1040,-1,916,930,1098,-1,1098,1093,916,-1,927,1096,1098,-1,1098,930,927,-1,1040,1041,1098,-1,1098,1096,1040,-1,1027,1093,1098,-1,1098,1041,1027,-1,894,893,898,-1,898,897,894,-1,450,456,898,-1,898,893,450,-1,455,899,898,-1,898,456,455,-1,900,897,898,-1,898,899,900,-1}, 8080);
TextureCoordinate& TextureCoordinate735 =  TextureCoordinate();
TextureCoordinate735.setDEF(CString("Upper_teeth-TEXCOORD_JinBlink"));
TextureCoordinate735.setPoint(new float[]{0.8647,0.3354,0.8772,0.3277,0.8746,0.3053,0.8621,0.313,0.8601,0.2951,0.8726,0.2875,0.8849,0.2799,0.8869,0.2977,0.8896,0.3201,0.8597,0.2826,0.8715,0.2769,0.8722,0.2824,0.8598,0.2838,0.8599,0.2848,0.8717,0.2877,0.8824,0.2879,0.8841,0.2797,0.8831,0.2709,0.9015,0.3128,0.8989,0.2904,0.8968,0.2726,0.9082,0.2656,0.9103,0.2834,0.913,0.3058,0.894,0.2646,0.8952,0.2745,0.8933,0.2842,0.9019,0.2784,0.9057,0.268,0.9045,0.2582,0.9239,0.299,0.9213,0.2766,0.9192,0.2589,0.9299,0.2523,0.9321,0.27,0.9347,0.2924,0.9147,0.2519,0.9158,0.2618,0.9122,0.2726,0.9201,0.2673,0.926,0.2555,0.9249,0.2457,0.9454,0.2859,0.9428,0.2634,0.9406,0.2457,0.9501,0.2399,0.9523,0.2576,0.9549,0.28,0.9353,0.2393,0.8544,0.1,0.8519,0.1017,0.8611,0.09569,0.8611,0.09564,0.8678,0.09126,0.8702,0.08971,0.8679,0.09122,0.861,0.09573,0.8541,0.1002,0.9585,0.03203,0.9596,0.03133,0.96,0.03107,0.9584,0.0321,0.9591,0.03167,0.9604,0.03082,0.9615,0.0301,0.9616,0.03005,0.9609,0.0305,0.9593,0.03151,0.9587,0.03191,0.9568,0.03319,0.9582,0.03223,0.9564,0.03343,0.9548,0.03448,0.9542,0.03487,0.9553,0.03415,0.9571,0.03297,0.9524,0.03607,0.9524,0.03602,0.9481,0.03882,0.9494,0.03797,0.9459,0.04029,0.9439,0.04162,0.944,0.04152,0.9468,0.03967,0.9503,0.03741,0.938,0.04546,0.9392,0.04468,0.9364,0.2491,0.931,0.261,0.9309,0.05011,0.9321,0.04928,0.9256,0.05352,0.9225,0.05555,0.9237,0.05479,0.9296,0.05095,0.9361,0.04669,0.9154,0.06023,0.9165,0.05949,0.9084,0.06475,0.9096,0.064,0.9032,0.06814,0.9004,0.07001,0.9016,0.06919,0.9073,0.06551,0.9135,0.06145,0.8925,0.07517,0.8942,0.07408,0.8855,0.07974,0.8861,0.07936,0.8794,0.08374,0.8768,0.08541,0.8787,0.08417,0.8849,0.08013,0.8914,0.07589,0.8536,0.1469,0.8566,0.144,0.8658,0.138,0.8659,0.1387,0.878,0.1308,0.875,0.132,0.8743,0.1261,0.8652,0.1321,0.856,0.1381,0.8782,0.1298,0.8783,0.1303,0.8786,0.1309,0.8752,0.1318,0.8746,0.126,0.8776,0.124,0.8656,0.1381,0.8658,0.1399,0.853,0.1485,0.8561,0.1443,0.8554,0.1385,0.865,0.1322,0.8532,0.1462,0.8533,0.1471,0.8526,0.1403,0.9617,0.0761,0.9624,0.07489,0.9621,0.07506,0.9621,0.07583,0.9628,0.07539,0.9631,0.07441,0.9625,0.06853,0.9377,0.2565,0.9456,0.2435,0.9446,0.2336,0.962,0.2757,0.9593,0.2533,0.9572,0.2355,0.9622,0.2324,0.9644,0.2502,0.967,0.2726,0.9511,0.2295,0.9522,0.2394,0.9455,0.2521,0.9476,0.2503,0.9567,0.2367,0.9557,0.2268,0.9705,0.2705,0.9678,0.2481,0.9657,0.2303,0.9678,0.229,0.97,0.2468,0.9726,0.2692,0.9588,0.2248,0.9599,0.2347,0.9526,0.2478,0.9522,0.2475,0.9618,0.2335,0.9608,0.2236,0.9737,0.2685,0.9711,0.2461,0.9689,0.2284,0.9692,0.2282,0.9714,0.2459,0.974,0.2683,0.9617,0.2231,0.9628,0.233,0.9552,0.2462,0.9532,0.2469,0.963,0.2328,0.9619,0.2229,0.8599,0.282,0.8715,0.2749,0.8828,0.268,0.8829,0.2677,0.8716,0.2747,0.86,0.2819,0.8937,0.2613,0.9042,0.2549,0.9044,0.2545,0.8937,0.2611,0.9144,0.2486,0.9246,0.2423,0.9615,0.06917,0.9618,0.06901,0.9652,0.07305,0.9652,0.0735,0.9676,0.07275,0.967,0.07187,0.9663,0.06605,0.9646,0.0672,0.9672,0.07175,0.9675,0.07342,0.9663,0.07362,0.9661,0.07245,0.9654,0.06663,0.9665,0.06594,0.9641,0.07376,0.9642,0.07421,0.9635,0.06791,0.9653,0.07301,0.9638,0.07396,0.9641,0.07564,0.9606,0.07732,0.9612,0.0757,0.9605,0.06987,0.9631,0.06815,0.9646,0.06719,0.9587,0.07729,0.9588,0.07774,0.9563,0.07961,0.9576,0.078,0.957,0.07212,0.9581,0.07143,0.959,0.07709,0.959,0.07785,0.9616,0.0754,0.961,0.06952,0.9584,0.0712,0.9641,0.07376,0.9635,0.06791,0.9589,0.07716,0.9549,0.0798,0.9552,0.08149,0.9481,0.08548,0.9498,0.08311,0.9491,0.07727,0.9542,0.07397,0.9582,0.07134,0.9469,0.08502,0.9469,0.08547,0.9446,0.08724,0.9469,0.08499,0.9463,0.07912,0.9463,0.07916,0.9507,0.08252,0.9507,0.08326,0.9555,0.07936,0.9549,0.07349,0.9501,0.07664,0.9587,0.0773,0.958,0.07146,0.9454,0.08597,0.9374,0.09121,0.9377,0.09292,0.926,0.0999,0.9284,0.09706,0.9278,0.09122,0.9367,0.08537,0.9248,0.242,0.9144,0.2484,0.9447,0.08014,0.9242,0.09986,0.9242,0.1003,0.9225,0.1017,0.9255,0.09895,0.9249,0.09308,0.9235,0.094,0.9336,0.09368,0.9336,0.0944,0.9426,0.0878,0.942,0.08194,0.933,0.08782,0.9469,0.08503,0.9462,0.07919,0.9228,0.1008,0.9147,0.106,0.915,0.1078,0.9032,0.1148,0.9059,0.1118,0.9052,0.1059,0.9141,0.1002,0.9221,0.09494,0.902,0.1143,0.9021,0.1148,0.9008,0.1158,0.9037,0.1132,0.9031,0.1073,0.9014,0.1084,0.935,0.2359,0.9443,0.2302,0.9455,0.2293,0.9352,0.2356,0.951,0.2261,0.9555,0.2233,0.9564,0.2226,0.9512,0.2258,0.9587,0.2214,0.9606,0.2202,0.9615,0.2195,0.9589,0.221,0.9616,0.2196,0.9618,0.2195,0.9625,0.2189,0.9618,0.2192,0.9679,0.2199,0.9676,0.22,0.9665,0.2207,0.9658,0.2173,0.967,0.2171,0.967,0.2165,0.9644,0.222,0.961,0.2241,0.9605,0.2206,0.9638,0.2191,0.956,0.2272,0.9489,0.2315,0.9488,0.2278,0.9554,0.2242,0.9395,0.2373,0.9288,0.2439,0.928,0.2405,0.939,0.2343,0.9181,0.2504,0.9072,0.2572,0.9066,0.2536,0.9115,0.1082,0.9115,0.1088,0.92,0.1026,0.9193,0.09673,0.9108,0.1023,0.9241,0.09988,0.9235,0.09403,0.8999,0.1157,0.891,0.1215,0.8912,0.1233,0.8816,0.1277,0.881,0.1218,0.8903,0.1157,0.8993,0.1098,0.8783,0.1298,0.8809,0.1281,0.8803,0.1223,0.8776,0.124,0.8893,0.1226,0.8894,0.1233,0.8982,0.1168,0.8975,0.111,0.8887,0.1168,0.902,0.1143,0.9014,0.1085,0.8526,0.1068,0.8521,0.1016,0.8612,0.09563,0.8617,0.1008,0.8709,0.09485,0.8702,0.08973,0.8734,0.08764,0.8741,0.09274,0.8711,0.09469,0.8704,0.08957,0.9176,0.2474,0.861,0.09575,0.8616,0.1009,0.8521,0.1071,0.8516,0.1019,0.8488,0.1037,0.8492,0.109,0.9585,0.03763,0.958,0.03239,0.9578,0.03251,0.9582,0.03778,0.9592,0.03716,0.9587,0.03192,0.9605,0.03073,0.9611,0.0359,0.9628,0.03482,0.9621,0.02971,0.9622,0.02964,0.9629,0.03473,0.9619,0.0354,0.9612,0.03028,0.9595,0.03142,0.96,0.0366,0.961,0.03597,0.9603,0.03087,0.9588,0.03185,0.9595,0.03694,0.9569,0.03863,0.9563,0.0335,0.9541,0.03492,0.9547,0.04012,0.9537,0.04074,0.9533,0.03548,0.9547,0.03454,0.9551,0.03981,0.9577,0.03816,0.9572,0.03292,0.9594,0.03147,0.96,0.03662,0.9546,0.04012,0.9539,0.03504,0.95,0.03763,0.9506,0.04274,0.9457,0.04599,0.9451,0.04082,0.9424,0.0426,0.9429,0.04783,0.943,0.04774,0.9425,0.04248,0.9463,0.04001,0.9468,0.04526,0.9515,0.04215,0.951,0.03695,0.9539,0.03505,0.9546,0.04018,0.9412,0.04889,0.9405,0.0438,0.8957,0.2642,0.8839,0.2714,0.8835,0.2678,0.8953,0.2611,0.8717,0.2789,0.8594,0.2865,0.8595,0.2833,0.8715,0.2757,0.8747,0.2891,0.8686,0.2887,0.862,0.2864,0.866,0.2846,0.8874,0.2834,0.8844,0.2872,0.8993,0.2761,0.8981,0.2788,0.9106,0.2691,0.9119,0.2704,0.9172,0.2651,0.9224,0.2639,0.9201,0.2633,0.9275,0.2608,0.9208,0.2629,0.9294,0.2596,0.8596,0.2851,0.8597,0.2849,0.8598,0.2845,0.8592,0.2791,0.8591,0.2794,0.859,0.2795,0.8574,0.2652,0.8575,0.265,0.8554,0.2465,0.8552,0.2466,0.8551,0.2466,0.8573,0.2653,0.9326,0.04897,0.9332,0.05411,0.9243,0.05992,0.9238,0.05471,0.9197,0.05742,0.9201,0.06267,0.9216,0.06174,0.9211,0.05648,0.9291,0.05126,0.9296,0.05648,0.9386,0.05063,0.938,0.04547,0.942,0.04281,0.9427,0.04792,0.9186,0.06368,0.9179,0.05858,0.91,0.06373,0.9106,0.06889,0.9018,0.07461,0.9013,0.06939,0.8976,0.07184,0.898,0.07709,0.8997,0.07599,0.8993,0.07074,0.9069,0.06578,0.9074,0.07098,0.9159,0.06545,0.9152,0.06031,0.9193,0.05767,0.92,0.06277,0.8958,0.07858,0.8951,0.07347,0.8863,0.07922,0.8869,0.0844,0.8776,0.09047,0.8647,0.3354,0.8771,0.08524,0.8738,0.08737,0.8743,0.09263,0.8769,0.09093,0.8764,0.08568,0.8847,0.08026,0.8853,0.08545,0.894,0.0797,0.8934,0.07458,0.8972,0.07212,0.8979,0.07722,0.8634,0.1163,0.8726,0.1104,0.8542,0.1223,0.8758,0.1082,0.8728,0.1102,0.8633,0.1165,0.8537,0.1227,0.8509,0.1246,0.9599,0.05337,0.9608,0.05274,0.9601,0.05322,0.9628,0.05144,0.9645,0.05032,0.9647,0.05021,0.9637,0.0509,0.9617,0.05214,0.9613,0.05242,0.9587,0.05413,0.9628,0.05146,0.9563,0.05567,0.9553,0.05632,0.9568,0.0554,0.9593,0.05373,0.9617,0.05215,0.9524,0.05824,0.9474,0.06152,0.9564,0.05561,0.9445,0.06339,0.9446,0.06333,0.9484,0.06085,0.9532,0.05771,0.9563,0.0557,0.935,0.06962,0.926,0.07546,0.943,0.06439,0.9218,0.07824,0.9232,0.07731,0.9313,0.07204,0.9403,0.06617,0.9445,0.06343,0.9123,0.08441,0.9035,0.09017,0.9203,0.07919,0.8997,0.09266,0.9014,0.09156,0.8621,0.313,0.8746,0.3053,0.8772,0.3277,0.8896,0.3201,0.8869,0.2977,0.8849,0.2799,0.8726,0.2875,0.8601,0.2951,0.8597,0.2826,0.8598,0.2838,0.8722,0.2824,0.8715,0.2769,0.8831,0.2709,0.8841,0.2797,0.8824,0.2879,0.8717,0.2877,0.8599,0.2848,0.8989,0.2904,0.9015,0.3128,0.913,0.3058,0.9103,0.2834,0.9082,0.2656,0.8968,0.2726,0.8952,0.2745,0.894,0.2646,0.9045,0.2582,0.9057,0.268,0.9019,0.2784,0.8933,0.2842,0.9213,0.2766,0.9239,0.299,0.9347,0.2924,0.9321,0.27,0.9299,0.2523,0.9192,0.2589,0.9158,0.2618,0.9147,0.2519,0.9249,0.2457,0.926,0.2555,0.9201,0.2673,0.9122,0.2726,0.9428,0.2634,0.9454,0.2859,0.9549,0.28,0.9523,0.2576,0.9501,0.2399,0.9406,0.2457,0.9364,0.2491,0.9353,0.2393,0.9091,0.08653,0.9446,0.2336,0.9176,0.08097,0.9456,0.2435,0.9217,0.07828,0.9377,0.2565,0.8886,0.09993,0.931,0.261,0.8792,0.106,0.9593,0.2533,0.962,0.2757,0.8975,0.09409,0.967,0.2726,0.9644,0.2502,0.9622,0.2324,0.9572,0.2355,0.9522,0.2394,0.9511,0.2295,0.8759,0.1082,0.9557,0.2268,0.9567,0.2367,0.9476,0.2503,0.9455,0.2521,0.9678,0.2481,0.9705,0.2705,0.9726,0.2692,0.97,0.2468,0.9678,0.229,0.9657,0.2303,0.9599,0.2347,0.9588,0.2248,0.9608,0.2236,0.9618,0.2335,0.9522,0.2475,0.9526,0.2478,0.9711,0.2461,0.9737,0.2685,0.9689,0.2284,0.9628,0.233,0.9617,0.2231,0.9552,0.2462,0.8715,0.2749,0.8599,0.282,0.86,0.2819,0.8785,0.1065,0.887,0.101,0.8958,0.09522,0.8996,0.09272,0.8544,0.1,0.8611,0.09564,0.8611,0.09569,0.8519,0.1017,0.8541,0.1002,0.861,0.09573,0.8679,0.09122,0.8702,0.08971,0.8678,0.09126,0.9585,0.03203,0.9584,0.0321,0.96,0.03107,0.9596,0.03133,0.9609,0.0305,0.9616,0.03005,0.9615,0.0301,0.9604,0.03082,0.9591,0.03167,0.9593,0.03151,0.9582,0.03223,0.9568,0.03319,0.9587,0.03191,0.9571,0.03297,0.9553,0.03415,0.9542,0.03487,0.9548,0.03448,0.9564,0.03343,0.9524,0.03607,0.9494,0.03797,0.9481,0.03882,0.9524,0.03602,0.9503,0.03741,0.9468,0.03967,0.944,0.04152,0.9439,0.04162,0.9459,0.04029,0.938,0.04546,0.9321,0.04928,0.9309,0.05011,0.9392,0.04468,0.9361,0.04669,0.9296,0.05095,0.9237,0.05479,0.9225,0.05555,0.9256,0.05352,0.9154,0.06023,0.9096,0.064,0.9084,0.06475,0.9165,0.05949,0.9135,0.06145,0.9073,0.06551,0.9016,0.06919,0.9004,0.07001,0.9032,0.06814,0.8925,0.07517,0.8861,0.07936,0.8855,0.07974,0.8942,0.07408,0.8914,0.07589,0.8849,0.08013,0.8787,0.08417,0.8716,0.2747,0.8829,0.2677,0.8768,0.08541,0.8794,0.08374,0.8536,0.1469,0.8659,0.1387,0.8658,0.138,0.8566,0.144,0.856,0.1381,0.8652,0.1321,0.8743,0.1261,0.875,0.132,0.878,0.1308,0.8783,0.1303,0.8782,0.1298,0.8776,0.124,0.8746,0.126,0.8752,0.1318,0.8786,0.1309,0.8658,0.1399,0.8656,0.1381,0.865,0.1322,0.8554,0.1385,0.8561,0.1443,0.853,0.1485,0.8533,0.1471,0.8532,0.1462,0.8526,0.1403,0.9617,0.0761,0.9621,0.07583,0.9621,0.07506,0.9624,0.07489,0.9618,0.06901,0.9615,0.06917,0.9625,0.06853,0.9631,0.07441,0.9652,0.07305,0.9646,0.0672,0.9663,0.06605,0.967,0.07187,0.9675,0.07342,0.9672,0.07175,0.9665,0.06594,0.9654,0.06663,0.9661,0.07245,0.9663,0.07362,0.9642,0.07421,0.9641,0.07376,0.9635,0.06791,0.9641,0.07564,0.9638,0.07396,0.9653,0.07301,0.9646,0.06719,0.9631,0.06815,0.9605,0.06987,0.9612,0.0757,0.9606,0.07732,0.9588,0.07774,0.9587,0.07729,0.9581,0.07143,0.957,0.07212,0.9576,0.078,0.9563,0.07961,0.959,0.07785,0.959,0.07709,0.9584,0.0712,0.961,0.06952,0.9616,0.0754,0.9641,0.07376,0.9635,0.06791,0.9552,0.08149,0.9549,0.0798,0.9589,0.07716,0.9582,0.07134,0.9542,0.07397,0.9491,0.07727,0.9498,0.08311,0.9481,0.08548,0.9469,0.08547,0.9469,0.08502,0.9463,0.07916,0.9463,0.07912,0.9469,0.08499,0.9446,0.08724,0.9507,0.08326,0.9507,0.08252,0.8828,0.268,0.9501,0.07664,0.9549,0.07349,0.9555,0.07936,0.9587,0.0773,0.958,0.07146,0.9377,0.09292,0.9374,0.09121,0.9454,0.08597,0.9447,0.08014,0.9367,0.08537,0.9278,0.09122,0.9284,0.09706,0.926,0.0999,0.9242,0.1003,0.9242,0.09986,0.9235,0.094,0.9249,0.09309,0.9255,0.09895,0.9225,0.1017,0.9336,0.0944,0.9336,0.09368,0.933,0.08782,0.942,0.08194,0.9426,0.0878,0.9469,0.08503,0.9462,0.07919,0.915,0.1078,0.9147,0.106,0.8937,0.2613,0.8937,0.2611,0.9044,0.2545,0.9042,0.2549,0.9144,0.2486,0.9144,0.2484,0.9248,0.242,0.9246,0.2423,0.935,0.2359,0.9352,0.2356,0.9455,0.2293,0.9443,0.2302,0.951,0.2261,0.9512,0.2258,0.9564,0.2226,0.9555,0.2233,0.9587,0.2214,0.9589,0.221,0.9615,0.2195,0.9606,0.2202,0.9616,0.2196,0.9618,0.2192,0.9676,0.22,0.967,0.2171,0.9658,0.2173,0.9665,0.2207,0.9644,0.222,0.9638,0.2191,0.9605,0.2206,0.961,0.2241,0.956,0.2272,0.9554,0.2242,0.9488,0.2278,0.9489,0.2315,0.9395,0.2373,0.939,0.2343,0.928,0.2405,0.9288,0.2439,0.9181,0.2504,0.9176,0.2474,0.9066,0.2536,0.9072,0.2572,0.8957,0.2642,0.8953,0.2611,0.8835,0.2678,0.8839,0.2714,0.8717,0.2789,0.8715,0.2757,0.9228,0.1008,0.8595,0.2833,0.8594,0.2865,0.9221,0.09494,0.8686,0.2887,0.8747,0.2891,0.9141,0.1002,0.862,0.2864,0.8844,0.2872,0.9052,0.1059,0.8874,0.2834,0.8981,0.2788,0.9059,0.1118,0.8993,0.2761,0.9119,0.2704,0.9106,0.2691,0.9032,0.1148,0.9224,0.2639,0.9172,0.2651,0.9275,0.2608,0.9201,0.2633,0.9294,0.2596,0.8597,0.2849,0.8591,0.2794,0.8592,0.2791,0.8598,0.2845,0.9021,0.1148,0.8575,0.265,0.8574,0.2652,0.8552,0.2466,0.8554,0.2465,0.902,0.1143,0.9014,0.1084,0.9031,0.1073,0.9037,0.1132,0.9008,0.1158,0.9115,0.1088,0.9115,0.1082,0.9108,0.1023,0.9193,0.09673,0.92,0.1026,0.9241,0.09988,0.9235,0.09403,0.8912,0.1233,0.891,0.1215,0.8999,0.1157,0.8993,0.1098,0.8903,0.1157,0.881,0.1218,0.8816,0.1277,0.8783,0.1298,0.8776,0.124,0.8803,0.1223,0.8809,0.1281,0.8894,0.1233,0.8893,0.1226,0.8887,0.1168,0.8975,0.111,0.8982,0.1168,0.902,0.1143,0.9014,0.1085,0.8526,0.1068,0.8617,0.1008,0.8612,0.09563,0.8521,0.1016,0.8702,0.08973,0.8709,0.09485,0.8741,0.09274,0.8734,0.08764,0.8704,0.08957,0.8711,0.09469,0.8616,0.1009,0.861,0.09575,0.8516,0.1019,0.8521,0.1071,0.8492,0.109,0.8488,0.1037,0.9585,0.03763,0.9582,0.03778,0.9578,0.03251,0.958,0.03239,0.9587,0.03192,0.9592,0.03716,0.9611,0.0359,0.9605,0.03073,0.9621,0.02971,0.9628,0.03482,0.9629,0.03473,0.9622,0.02964,0.9612,0.03028,0.9619,0.0354,0.96,0.0366,0.9595,0.03142,0.961,0.03597,0.9595,0.03694,0.9588,0.03185,0.9603,0.03087,0.9563,0.0335,0.9569,0.03863,0.9547,0.04012,0.9541,0.03492,0.9533,0.03548,0.9537,0.04074,0.9551,0.03981,0.9547,0.03454,0.9572,0.03292,0.9577,0.03816,0.96,0.03662,0.9594,0.03147,0.9546,0.04012,0.9506,0.04274,0.95,0.03763,0.9539,0.03504,0.9451,0.04082,0.9457,0.04599,0.9429,0.04783,0.9424,0.0426,0.9425,0.04248,0.943,0.04774,0.9468,0.04526,0.9463,0.04001,0.951,0.03695,0.9515,0.04215,0.9546,0.04018,0.9539,0.03505,0.9412,0.04889,0.9332,0.05411,0.9326,0.04897,0.9405,0.0438,0.9238,0.05471,0.9243,0.05992,0.9201,0.06267,0.9197,0.05742,0.9211,0.05648,0.9216,0.06174,0.9296,0.05648,0.9291,0.05126,0.938,0.04547,0.9386,0.05063,0.9427,0.04792,0.942,0.04281,0.9186,0.06368,0.9106,0.06889,0.91,0.06373,0.9179,0.05858,0.9013,0.06939,0.9018,0.07461,0.898,0.07709,0.8976,0.07184,0.8993,0.07074,0.8997,0.07599,0.9074,0.07098,0.9069,0.06578,0.9152,0.06031,0.9159,0.06545,0.92,0.06277,0.9193,0.05767,0.8958,0.07858,0.8869,0.0844,0.8863,0.07922,0.8951,0.07347,0.8771,0.08524,0.8776,0.09047,0.8743,0.09263,0.8738,0.08737,0.8764,0.08568,0.8769,0.09093,0.8853,0.08545,0.8847,0.08026,0.8934,0.07458,0.894,0.0797,0.8979,0.07722,0.8972,0.07212,0.8726,0.1104,0.8634,0.1163,0.8542,0.1223,0.8728,0.1102,0.8758,0.1082,0.8537,0.1227,0.8633,0.1165,0.8509,0.1246,0.9608,0.05274,0.9599,0.05337,0.9601,0.05322,0.9645,0.05032,0.9628,0.05144,0.9637,0.0509,0.9647,0.05021,0.9617,0.05214,0.9587,0.05413,0.9613,0.05242,0.9628,0.05146,0.9553,0.05632,0.9563,0.05567,0.9593,0.05373,0.9568,0.0554,0.9617,0.05215,0.9474,0.06152,0.9524,0.05824,0.9564,0.05561,0.9446,0.06333,0.9445,0.06339,0.9532,0.05771,0.9484,0.06085,0.9563,0.0557,0.926,0.07546,0.935,0.06962,0.943,0.06439,0.9232,0.07731,0.9218,0.07824,0.9403,0.06617,0.9313,0.07204,0.9445,0.06343,0.9035,0.09017,0.9123,0.08441,0.9203,0.07919,0.9014,0.09156,0.8997,0.09266,0.9176,0.08097,0.9091,0.08653,0.9217,0.07828,0.8792,0.106,0.8886,0.09993,0.8975,0.09409,0.8785,0.1065,0.8759,0.1082,0.8958,0.09522,0.887,0.101,0.8996,0.09272}, 2198);
IndexedFaceSet734.setTexCoord(&TextureCoordinate735);

Coordinate& Coordinate736 =  Coordinate();
Coordinate736.setDEF(CString("Upper_teeth_COORD_JinBlink"));
Coordinate736.setPoint(new float[]{-2.78,0.8496,-1.608,-2.777,0.2987,-1.683,-2.125,0.1308,-1.676,-2.789,0.7394,-0.8298,-2.786,0.189,-0.9075,-2.157,0.06281,-0.9464,-2.677,0.6356,-0.09551,-2.674,0.08531,-0.1741,-2.131,-0.02711,-0.275,-2.371,0.5392,0.586,-2.368,-0.01099,0.5068,-2.006,-0.1174,0.3632,-1.911,0.4495,1.22,-1.909,-0.1006,1.14,-1.713,-0.2048,0.9811,-1.336,0.3957,1.601,-1.335,-0.1543,1.52,-1.253,-0.2541,1.33,-0.6794,0.3711,1.775,-0.679,-0.1789,1.694,-0.6546,-0.2767,1.49,0.0,-0.1852,1.738,0.0,-0.2819,1.526,-2.122,0.1608,-1.675,-1.93,0.2856,-0.9938,-1.906,0.2319,-0.3884,-1.794,0.1511,0.183,-1.533,0.07302,0.7347,-1.121,0.02888,1.047,-0.5859,0.00863,1.19,0.0,0.003966,1.223,-2.684,0.1398,-1.684,-2.219,0.1235,-1.665,-2.213,0.01946,-0.946,-2.185,-0.07577,-0.2727,-2.054,-0.1661,0.366,-1.749,-0.258,1.016,-1.275,-0.3067,1.36,-0.6617,-0.3291,1.518,-0.6764,-0.3421,1.653,-1.33,-0.3185,1.486,-1.895,-0.2665,1.118,-2.345,-0.1745,0.4679,-2.642,-0.07965,-0.2028,-2.743,0.02301,-0.9288,0.0,0.1811,-1.486,-2.23,-0.3493,-1.636,-2.257,-0.4254,-1.098,-2.702,-0.4264,-1.091,-2.682,-0.3471,-1.651,-0.5807,-0.7901,1.481,-0.08538,-0.7931,1.503,-0.08698,-0.8081,1.608,-0.5887,-0.8044,1.582,-0.7603,-0.8007,1.556,-1.244,-0.7838,1.437,-1.21,-0.7703,1.341,-0.7458,-0.7868,1.458,-1.402,-0.7742,1.369,-1.811,-0.7368,1.104,-1.714,-0.7257,1.026,-1.351,-0.7613,1.278,-1.943,-0.7183,0.9738,-2.266,-0.6481,0.4769,-2.054,-0.6365,0.3949,-1.813,-0.7073,0.8956,-2.365,-0.6241,0.3072,-2.572,-0.5544,-0.1856,-2.216,-0.5456,-0.2477,-2.106,-0.6128,0.2276,-2.626,-0.5291,-0.3645,-2.692,-0.4533,-0.9005,-2.26,-0.4504,-0.921,-2.233,-0.5219,-0.415,-2.122,-0.3642,-1.749,-2.295,-0.4218,-1.574,-2.314,-0.4778,-1.178,-2.638,-0.4781,-1.176,-2.623,-0.4207,-1.582,-0.5147,-0.8554,1.492,-0.153,-0.8577,1.508,-0.1549,-0.8677,1.579,-0.5193,-0.8651,1.561,-0.8237,-0.8587,1.515,-1.172,-0.8465,1.429,-1.152,-0.8373,1.364,-0.8114,-0.8494,1.449,-1.449,-0.8296,1.31,-1.739,-0.8027,1.119,-1.679,-0.7949,1.064,-1.409,-0.8211,1.249,-1.968,-0.7698,0.8862,-2.192,-0.7184,0.5231,-2.053,-0.7103,0.4657,-1.864,-0.7619,0.8308,-2.357,-0.6756,0.2203,-2.494,-0.6252,-0.1362,-2.251,-0.6185,-0.1834,-2.157,-0.6678,0.1655,-2.581,-0.5804,-0.453,-2.623,-0.5257,-0.8394,-2.316,-0.523,-0.8586,-2.291,-0.5758,-0.4854,-2.228,0.02897,-1.584,-2.256,-0.04748,-1.043,-2.704,-0.04851,-1.036,-2.683,0.03117,-1.599,-0.582,-0.4116,1.532,-0.08377,-0.4146,1.553,-0.08547,-0.4304,1.665,-0.5905,-0.4267,1.639,-0.7592,-0.4232,1.613,-1.246,-0.4061,1.493,-1.21,-0.3918,1.391,-0.7438,-0.4083,1.509,-1.402,-0.3967,1.426,-1.815,-0.3589,1.159,-1.713,-0.3471,1.076,-1.348,-0.383,1.329,-1.945,-0.3406,1.03,-2.27,-0.27,0.5304,-2.052,-0.2581,0.4462,-1.81,-0.3292,0.9487,-2.367,-0.2463,0.3627,-2.575,-0.1762,-0.1332,-2.214,-0.1673,-0.1961,-2.104,-0.2349,0.2818,-2.628,-0.1513,-0.3093,-2.694,-0.07502,-0.8484,-2.258,-0.07211,-0.869,-2.231,-0.144,-0.3604,-2.122,0.08236,-1.686,2.78,0.8496,-1.608,2.777,0.2987,-1.683,2.786,0.189,-0.9075,2.789,0.7394,-0.8298,2.125,0.1308,-1.676,2.122,0.1608,-1.675,1.93,0.2856,-0.9938,2.157,0.06281,-0.9464,2.674,0.08531,-0.1741,2.677,0.6356,-0.09551,1.906,0.2319,-0.3884,2.131,-0.02711,-0.275,2.368,-0.01099,0.5068,2.371,0.5392,0.586,1.794,0.1511,0.183,2.006,-0.1174,0.3632,1.909,-0.1006,1.14,1.911,0.4495,1.22,1.533,0.07302,0.7347,1.713,-0.2048,0.9811,1.335,-0.1543,1.52,1.336,0.3957,1.601,1.121,0.02888,1.047,1.253,-0.2541,1.33,0.679,-0.1789,1.694,0.6794,0.3711,1.775,0.5859,0.00863,1.19,0.6546,-0.2767,1.49,0.0,0.3648,1.819,2.213,0.01946,-0.946,2.219,0.1235,-1.665,2.185,-0.07577,-0.2727,2.054,-0.1661,0.366,1.749,-0.258,1.016,1.275,-0.3067,1.36,0.6617,-0.3291,1.518,0.0,-0.3335,1.55,0.6764,-0.3421,1.653,0.0,-0.3476,1.692,1.33,-0.3185,1.486,1.895,-0.2665,1.118,2.345,-0.1745,0.4679,2.642,-0.07966,-0.2028,2.743,0.02301,-0.9288,2.684,0.1398,-1.684,2.295,-0.4218,-1.574,2.314,-0.4778,-1.178,2.638,-0.4781,-1.176,2.623,-0.4207,-1.582,0.5147,-0.8554,1.492,0.153,-0.8577,1.508,0.1549,-0.8677,1.579,0.5193,-0.8651,1.561,0.8237,-0.8587,1.515,1.172,-0.8465,1.429,1.152,-0.8373,1.364,0.8114,-0.8494,1.449,1.449,-0.8296,1.31,1.739,-0.8027,1.119,1.679,-0.7949,1.064,1.409,-0.8211,1.249,1.968,-0.7698,0.8862,2.192,-0.7184,0.5231,2.053,-0.7103,0.4657,1.864,-0.7619,0.8308,2.357,-0.6756,0.2203,2.494,-0.6252,-0.1362,2.251,-0.6185,-0.1834,2.157,-0.6678,0.1655,2.581,-0.5804,-0.453,2.623,-0.5257,-0.8394,2.316,-0.523,-0.8586,2.291,-0.5758,-0.4854,2.256,-0.04748,-1.043,2.228,0.02897,-1.584,2.704,-0.04851,-1.036,2.683,0.03117,-1.599,0.08377,-0.4146,1.553,0.582,-0.4116,1.532,0.08547,-0.4304,1.665,0.5905,-0.4267,1.639,1.246,-0.4061,1.493,0.7592,-0.4232,1.613,1.21,-0.3918,1.391,0.7438,-0.4083,1.509,1.815,-0.3589,1.159,1.402,-0.3967,1.426,1.713,-0.3471,1.076,1.348,-0.383,1.329,2.27,-0.27,0.5304,1.945,-0.3406,1.03,2.052,-0.2581,0.4462,1.81,-0.3292,0.9487,2.575,-0.1762,-0.1332,2.367,-0.2463,0.3627,2.214,-0.1673,-0.1961,2.104,-0.2349,0.2818,2.694,-0.07502,-0.8484,2.628,-0.1513,-0.3093,2.258,-0.07211,-0.869,2.231,-0.144,-0.3604,2.122,0.08236,-1.686,0.0,0.08788,-1.693,2.23,-0.3493,-1.636,2.257,-0.4254,-1.098,2.702,-0.4264,-1.091,2.682,-0.3471,-1.651,0.5807,-0.7901,1.481,0.08538,-0.7931,1.503,0.08698,-0.8081,1.608,0.5887,-0.8044,1.582,0.7603,-0.8007,1.556,1.244,-0.7838,1.437,1.21,-0.7703,1.341,0.7458,-0.7868,1.458,1.402,-0.7742,1.369,1.811,-0.7368,1.104,1.714,-0.7257,1.026,1.351,-0.7613,1.278,1.943,-0.7183,0.9738,2.266,-0.6481,0.4769,2.054,-0.6365,0.3949,1.813,-0.7073,0.8956,2.365,-0.6241,0.3072,2.572,-0.5544,-0.1856,2.216,-0.5456,-0.2477,2.106,-0.6128,0.2276,2.626,-0.5291,-0.3645,2.692,-0.4533,-0.9005,2.26,-0.4504,-0.921,2.233,-0.5219,-0.415,2.122,-0.3642,-1.749,0.0,-0.363,-1.757,-2.792,0.4871,-1.259,-2.142,0.1746,-1.297,-2.754,0.3796,-0.4991,-2.151,0.1543,-0.5849,-2.546,0.2799,0.2059,-2.083,0.06273,0.0628,-2.157,0.1847,0.8788,-1.879,-0.02861,0.7087,-1.636,0.1112,1.399,-1.501,-0.09869,1.204,-1.014,0.07351,1.665,-0.9654,-0.1327,1.445,-0.3407,0.05918,1.766,-0.3302,-0.1456,1.536,-2.154,0.07289,-1.306,-2.162,-0.02563,-0.6098,-2.094,-0.1175,0.03959,-1.889,-0.2092,0.6885,-1.508,-0.2798,1.188,-0.9686,-0.3141,1.43,-0.3311,-0.327,1.521,-0.3399,-0.299,1.704,-1.011,-0.2848,1.603,-1.63,-0.2473,1.339,-2.148,-0.1741,0.821,-2.536,-0.0793,0.1506,-2.743,0.02005,-0.5519,-2.781,0.1265,-1.305,-1.428,0.2447,-1.416,-1.434,0.2838,-0.9337,-1.388,0.2227,-0.5019,-1.253,0.1618,-0.07126,-1.001,0.1151,0.2591,-0.6436,0.09241,0.4196,-0.2202,0.08385,0.4801,-2.468,-0.4496,-1.378,-0.3355,-0.8615,1.535,-0.9899,-0.848,1.439,-1.569,-0.8121,1.185,-2.019,-0.7401,0.6765,-2.315,-0.6468,0.01655,-2.453,-0.5512,-0.6591,-2.166,0.06133,-1.303,-2.484,0.009624,-0.9372,-2.769,0.0621,-1.308,-2.452,0.1138,-1.674,-0.332,-0.3396,1.532,-0.0005068,-0.3524,1.623,-0.3389,-0.3607,1.682,-0.6704,-0.3479,1.591,-1.007,-0.3466,1.582,-1.308,-0.3254,1.432,-0.9723,-0.3267,1.441,-0.6714,-0.3479,1.591,-1.622,-0.3094,1.319,-1.829,-0.2762,1.084,-1.516,-0.2921,1.196,-1.309,-0.3254,1.432,-2.138,-0.2367,0.8045,-2.208,-0.1815,0.4145,-1.9,-0.2209,0.693,-1.83,-0.2761,1.083,-2.524,-0.1423,0.137,-2.422,-0.0895,-0.2363,-2.106,-0.1286,0.04056,-2.209,-0.1814,0.4139,-2.731,-0.04331,-0.5628,-2.484,0.00952,-0.9364,-2.174,-0.03654,-0.6107,-2.422,-0.08937,-0.2371,-1.061,0.1611,-1.68,-2.173,-0.45,-1.375,-2.483,-0.5009,-1.015,-2.763,-0.4492,-1.381,-2.452,-0.3983,-1.74,-0.3324,-0.8523,1.47,-0.006795,-0.8637,1.55,-0.3385,-0.8706,1.6,-0.6641,-0.8593,1.519,-1.005,-0.8566,1.5,-1.302,-0.837,1.361,-0.9747,-0.8394,1.378,-0.6778,-0.859,1.517,-1.616,-0.8197,1.239,-1.823,-0.788,1.015,-1.522,-0.8045,1.132,-1.315,-0.8361,1.355,-2.13,-0.7474,0.7281,-2.205,-0.6935,0.3471,-1.908,-0.7328,0.6249,-1.833,-0.7867,1.006,-2.516,-0.6533,0.06285,-2.419,-0.6016,-0.3027,-2.114,-0.6402,-0.02979,-2.211,-0.6919,0.3357,-2.724,-0.5545,-0.6358,-2.483,-0.5026,-1.003,-2.181,-0.5479,-0.6824,-2.422,-0.5998,-0.3154,-2.167,-0.1997,-1.34,-2.484,-0.2513,-0.9747,-2.768,-0.199,-1.345,-2.452,-0.1473,-1.71,-0.3321,-0.6012,1.499,-0.00152,-0.6135,1.586,-0.3388,-0.6213,1.641,-0.6694,-0.609,1.554,-1.007,-0.6072,1.542,-1.307,-0.5865,1.395,-0.9732,-0.5883,1.408,-0.6725,-0.6089,1.554,-1.62,-0.5701,1.279,-1.828,-0.5373,1.047,-1.518,-0.5535,1.162,-1.311,-0.5863,1.394,-2.135,-0.4976,0.7662,-2.208,-0.4427,0.3781,-1.903,-0.4822,0.6574,-1.83,-0.5371,1.046,-2.522,-0.4033,0.09959,-2.421,-0.3507,-0.2723,-2.108,-0.3898,0.004185,-2.209,-0.4424,0.3761,-2.729,-0.3044,-0.5999,-2.484,-0.2517,-0.9725,-2.176,-0.2976,-0.6475,-2.422,-0.3503,-0.2749,-1.061,-0.1087,-1.718,2.792,0.4871,-1.259,2.142,0.1746,-1.297,2.754,0.3796,-0.4991,2.151,0.1543,-0.5849,2.546,0.2799,0.2059,2.083,0.06273,0.0628,2.157,0.1847,0.8788,1.879,-0.02861,0.7087,1.636,0.1112,1.399,1.501,-0.09869,1.204,1.014,0.07351,1.665,0.9654,-0.1327,1.445,0.3407,0.05918,1.766,0.3302,-0.1456,1.536,2.154,0.07289,-1.306,2.162,-0.02563,-0.6098,2.094,-0.1175,0.03959,1.889,-0.2092,0.6885,1.508,-0.2798,1.188,0.9686,-0.3141,1.43,0.3311,-0.327,1.521,0.3399,-0.299,1.704,1.011,-0.2848,1.603,1.63,-0.2473,1.339,2.148,-0.1741,0.821,2.536,-0.0793,0.1506,2.743,0.02005,-0.5519,2.781,0.1265,-1.305,1.428,0.2447,-1.416,1.434,0.2838,-0.9336,1.388,0.2227,-0.5019,1.253,0.1618,-0.07126,1.001,0.1151,0.2591,0.6436,0.09241,0.4196,0.2202,0.08385,0.4801,2.468,-0.4496,-1.378,0.3355,-0.8615,1.535,0.9899,-0.848,1.439,1.569,-0.8121,1.185,2.019,-0.7401,0.6765,2.315,-0.6468,0.01655,2.453,-0.5512,-0.6591,2.166,0.06133,-1.303,2.484,0.009624,-0.9372,2.769,0.0621,-1.308,2.452,0.1138,-1.674,0.332,-0.3396,1.532,0.0005065,-0.3524,1.623,0.3389,-0.3607,1.682,0.6704,-0.3479,1.591,1.007,-0.3466,1.582,1.308,-0.3254,1.432,0.9723,-0.3267,1.441,0.6714,-0.3479,1.591,1.622,-0.3094,1.319,1.829,-0.2762,1.084,1.516,-0.2921,1.196,1.309,-0.3254,1.432,2.138,-0.2367,0.8045,2.208,-0.1815,0.4145,1.9,-0.2209,0.693,1.83,-0.2761,1.083,2.524,-0.1423,0.137,2.422,-0.0895,-0.2363,2.106,-0.1286,0.04056,2.209,-0.1814,0.4139,2.731,-0.04332,-0.5628,2.484,0.009519,-0.9364,2.174,-0.03654,-0.6107,2.422,-0.08938,-0.2371,1.061,0.1611,-1.68,2.173,-0.45,-1.375,2.483,-0.5009,-1.015,2.763,-0.4492,-1.381,2.452,-0.3983,-1.74,0.3324,-0.8523,1.47,0.006795,-0.8637,1.55,0.3385,-0.8706,1.6,0.6641,-0.8593,1.519,1.005,-0.8566,1.5,1.302,-0.837,1.361,0.9747,-0.8394,1.378,0.6778,-0.859,1.517,1.616,-0.8197,1.239,1.823,-0.788,1.015,1.522,-0.8045,1.132,1.315,-0.8361,1.355,2.13,-0.7474,0.7281,2.205,-0.6935,0.3471,1.908,-0.7328,0.6249,1.833,-0.7867,1.006,2.516,-0.6533,0.06285,2.419,-0.6016,-0.3027,2.114,-0.6402,-0.02979,2.211,-0.6919,0.3357,2.724,-0.5545,-0.6358,2.483,-0.5026,-1.003,2.181,-0.5479,-0.6824,2.422,-0.5998,-0.3154,2.167,-0.1997,-1.34,2.484,-0.2513,-0.9747,2.768,-0.199,-1.345,2.452,-0.1473,-1.71,0.3321,-0.6012,1.499,0.00152,-0.6135,1.586,0.3388,-0.6213,1.641,0.6694,-0.609,1.554,1.007,-0.6072,1.542,1.307,-0.5865,1.395,0.9732,-0.5883,1.408,0.6725,-0.6089,1.554,1.62,-0.5701,1.279,1.828,-0.5373,1.047,1.518,-0.5535,1.162,1.311,-0.5863,1.394,2.135,-0.4976,0.7662,2.208,-0.4427,0.3781,1.903,-0.4822,0.6574,1.83,-0.5371,1.046,2.522,-0.4033,0.09959,2.421,-0.3507,-0.2723,2.108,-0.3898,0.004185,2.209,-0.4424,0.3761,2.729,-0.3044,-0.5999,2.484,-0.2517,-0.9725,2.176,-0.2976,-0.6475,2.422,-0.3503,-0.2749,1.061,-0.1087,-1.718,-2.78,0.5426,-1.652,-2.122,0.1477,-1.677,-2.789,0.4325,-0.8732,-2.792,0.7941,-1.216,-2.79,0.2435,-1.293,-2.145,0.09869,-1.307,-2.677,0.3286,-0.1389,-2.754,0.6865,-0.4557,-2.751,0.1362,-0.534,-2.154,0.0194,-0.6038,-2.371,0.2322,0.5426,-2.546,0.5868,0.2493,-2.544,0.03659,0.1703,-2.085,-0.07226,0.04428,-1.911,0.1426,1.177,-2.157,0.4917,0.9222,-2.155,-0.05849,0.8426,-1.881,-0.1637,0.6909,-1.336,0.08874,1.557,-1.636,0.4181,1.442,-1.634,-0.1319,1.362,-1.503,-0.2339,1.187,-0.6794,0.06411,1.731,-1.014,0.3805,1.708,-1.013,-0.1695,1.628,-0.9662,-0.268,1.429,0.0,0.05784,1.776,-0.3407,0.3661,1.81,-0.3405,-0.1838,1.729,-0.3304,-0.2809,1.519,-2.154,0.183,-0.9298,-2.128,0.1079,-0.2563,-2.003,0.01768,0.3814,-1.711,-0.06958,0.9984,-1.252,-0.1188,1.346,-0.6541,-0.1414,1.506,0.0,-0.1466,1.543,-1.963,0.2426,-1.32,-1.972,0.2766,-0.6594,-1.909,0.1927,-0.06564,-1.722,0.1089,0.5264,-1.376,0.0447,0.9807,-0.8849,0.0135,1.201,-0.3027,0.001732,1.285,-2.162,0.06963,-1.303,-2.171,-0.0284,-0.6098,-2.102,-0.1204,0.04094,-1.897,-0.2125,0.6923,-1.514,-0.2835,1.194,-0.9712,-0.318,1.438,-0.3317,-0.3309,1.529,-0.3392,-0.34,1.689,-1.009,-0.3259,1.589,-1.625,-0.2886,1.325,-2.141,-0.2157,0.8097,-2.528,-0.1212,0.1413,-2.734,-0.02207,-0.5593,-2.773,0.08362,-1.307,-2.769,0.1812,-1.691,-2.134,0.1242,-1.669,-2.166,0.02262,-0.951,-2.14,-0.07222,-0.2804,-2.014,-0.1627,0.3595,-1.72,-0.2505,0.9801,-1.257,-0.3001,1.331,-0.656,-0.3228,1.492,0.0,-0.328,1.528,-0.6776,-0.2941,1.669,-1.331,-0.2696,1.496,-1.903,-0.2161,1.118,-2.361,-0.1268,0.4862,-2.666,-0.03071,-0.1929,-2.778,0.0726,-0.9234,-1.153,0.1896,-1.613,-1.256,0.2732,-1.231,-1.241,0.2441,-0.8359,-1.167,0.1914,-0.4632,-0.9965,0.1411,-0.1071,-0.7287,0.1121,0.09755,-0.3811,0.09886,0.1912,0.0,0.09574,0.2133,-2.452,0.1247,-1.673,-2.484,0.01499,-0.9361,-0.6709,-0.3425,1.592,-1.309,-0.32,1.433,-1.83,-0.2707,1.084,-2.209,-0.1761,0.415,-2.422,-0.08402,-0.236,-2.227,0.09968,-1.574,-2.255,0.02316,-1.033,-2.704,0.02213,-1.026,-2.684,0.1019,-1.59,-2.169,-0.3874,-1.366,-2.484,-0.4388,-1.003,-2.766,-0.3866,-1.372,-2.452,-0.3352,-1.735,-0.5823,-0.3407,1.54,-0.08337,-0.3438,1.562,-0.08511,-0.36,1.676,-0.591,-0.3563,1.65,-0.3323,-0.7892,1.475,-0.003092,-0.8011,1.559,-0.3387,-0.8086,1.612,-0.6678,-0.7967,1.528,-0.7589,-0.3527,1.625,-1.247,-0.3356,1.504,-1.21,-0.3209,1.4,-0.7432,-0.3375,1.517,-1.006,-0.7945,1.513,-1.306,-0.7743,1.369,-0.9738,-0.7763,1.383,-0.6741,-0.7966,1.527,-1.402,-0.3262,1.438,-1.816,-0.2883,1.17,-1.712,-0.2763,1.085,-1.347,-0.3122,1.338,-1.618,-0.7575,1.251,-1.826,-0.7252,1.022,-1.52,-0.7415,1.137,-1.312,-0.7739,1.366,-1.946,-0.2701,1.041,-2.271,-0.1994,0.5406,-2.051,-0.1873,0.4556,-1.809,-0.2584,0.9582,-2.133,-0.6851,0.7387,-2.207,-0.6305,0.3528,-1.905,-0.67,0.6319,-1.831,-0.7246,1.018,-2.368,-0.1757,0.3733,-2.576,-0.1055,-0.1234,-2.214,-0.09652,-0.1866,-2.103,-0.1642,0.2919,-2.52,-0.5909,0.07258,-2.421,-0.5386,-0.2974,-2.11,-0.5775,-0.02187,-2.209,-0.6299,0.3481,-2.628,-0.08063,-0.299,-2.695,-0.004303,-0.8387,-2.257,-0.001381,-0.8594,-2.231,-0.07339,-0.3502,-2.728,-0.492,-0.6266,-2.483,-0.4395,-0.9976,-2.178,-0.4853,-0.6739,-2.422,-0.5378,-0.3029,-1.061,-0.3634,-1.754,-2.122,0.156,-1.675,-2.249,-0.4499,-1.376,-2.479,-0.4877,-1.108,-2.687,-0.4493,-1.38,-2.456,-0.4115,-1.647,-2.233,-0.4122,-1.642,-2.26,-0.4875,-1.109,-2.699,-0.4886,-1.102,-2.679,-0.41,-1.657,-0.3333,-0.8549,1.488,-0.09134,-0.8631,1.546,-0.3376,-0.868,1.581,-0.5796,-0.8598,1.523,-0.5782,-0.8531,1.476,-0.08821,-0.8561,1.497,-0.08971,-0.8702,1.596,-0.5857,-0.8665,1.57,-1.001,-0.8541,1.482,-1.222,-0.8398,1.381,-0.9791,-0.8419,1.396,-0.7581,-0.8562,1.497,-0.7626,-0.8628,1.544,-1.24,-0.846,1.426,-1.208,-0.8334,1.336,-0.749,-0.8497,1.451,-1.602,-0.8175,1.224,-1.757,-0.7942,1.059,-1.536,-0.8067,1.147,-1.381,-0.8299,1.312,-1.402,-0.8362,1.356,-1.806,-0.7993,1.095,-1.713,-0.7887,1.02,-1.355,-0.824,1.27,-2.1,-0.7454,0.7141,-2.158,-0.7055,0.4315,-1.938,-0.7348,0.6388,-1.881,-0.7747,0.9214,-1.942,-0.7804,0.9611,-2.262,-0.7108,0.4692,-2.056,-0.6995,0.3896,-1.816,-0.7697,0.8859,-2.464,-0.6516,0.05072,-2.393,-0.6132,-0.2206,-2.166,-0.6419,-0.01764,-2.237,-0.6803,0.2537,-2.364,-0.6862,0.2949,-2.568,-0.6172,-0.1924,-2.218,-0.6086,-0.2534,-2.11,-0.6751,0.2169,-2.654,-0.5537,-0.6418,-2.475,-0.5151,-0.9145,-2.252,-0.5488,-0.6764,-2.43,-0.5873,-0.4037,-2.624,-0.5912,-0.3764,-2.689,-0.5162,-0.9068,-2.262,-0.5133,-0.9269,-2.236,-0.5842,-0.4263,-2.228,-0.1614,-1.61,-2.256,-0.2378,-1.07,-2.703,-0.2389,-1.063,-2.683,-0.1593,-1.626,-0.5818,-0.6022,1.506,-0.08417,-0.6052,1.527,-0.08583,-0.6206,1.637,-0.5901,-0.617,1.61,-0.7594,-0.6134,1.585,-1.246,-0.5963,1.465,-1.21,-0.5824,1.366,-0.7444,-0.5989,1.483,-1.401,-0.5869,1.398,-1.813,-0.5492,1.131,-1.713,-0.5377,1.05,-1.349,-0.5735,1.303,-1.944,-0.5309,1.002,-2.268,-0.4604,0.5032,-2.053,-0.4486,0.4199,-1.811,-0.5196,0.9222,-2.366,-0.4366,0.3353,-2.574,-0.3666,-0.1599,-2.215,-0.3577,-0.2226,-2.104,-0.4252,0.2548,-2.627,-0.3416,-0.3366,-2.693,-0.2654,-0.875,-2.258,-0.2625,-0.8956,-2.232,-0.3344,-0.3875,-2.122,-0.111,-1.713,-2.167,-0.009349,-1.313,-2.484,-0.06101,-0.9475,-2.769,-0.008573,-1.318,-2.452,0.04308,-1.684,-0.332,-0.4105,1.524,-0.001013,-0.4231,1.613,-0.3389,-0.4312,1.67,-0.6699,-0.4186,1.581,-1.007,-0.4171,1.57,-1.308,-0.3961,1.422,-0.9727,-0.3976,1.433,-0.672,-0.4186,1.581,-1.621,-0.3799,1.308,-1.829,-0.3469,1.074,-1.517,-0.363,1.188,-1.31,-0.396,1.421,-2.137,-0.3073,0.7938,-2.208,-0.2522,0.4048,-1.901,-0.2917,0.6837,-1.83,-0.3467,1.073,-2.523,-0.2129,0.1268,-2.421,-0.1602,-0.2458,-2.107,-0.1994,0.03084,-2.209,-0.2521,0.4034,-2.73,-0.114,-0.5729,-2.484,-0.06121,-0.946,-2.175,-0.1072,-0.6207,-2.422,-0.16,-0.2476,-1.061,0.08604,-1.691,2.78,0.5426,-1.652,2.79,0.2435,-1.293,2.789,0.4325,-0.8732,2.792,0.7941,-1.216,2.122,0.1477,-1.677,1.963,0.2426,-1.32,2.154,0.183,-0.9298,2.145,0.09869,-1.307,2.751,0.1362,-0.534,2.677,0.3286,-0.1389,2.754,0.6865,-0.4557,1.972,0.2766,-0.6594,2.128,0.1079,-0.2563,2.154,0.0194,-0.6038,2.544,0.03659,0.1703,2.371,0.2322,0.5426,2.546,0.5868,0.2493,1.909,0.1927,-0.06564,2.003,0.01768,0.3814,2.085,-0.07226,0.04428,2.155,-0.05849,0.8426,1.911,0.1426,1.177,2.157,0.4917,0.9222,1.722,0.1089,0.5264,1.711,-0.06958,0.9984,1.881,-0.1637,0.6909,1.634,-0.1319,1.362,1.336,0.08874,1.557,1.636,0.4181,1.442,1.376,0.0447,0.9807,1.252,-0.1188,1.346,1.503,-0.2339,1.187,1.013,-0.1695,1.628,0.6794,0.06411,1.731,1.014,0.3805,1.708,0.8849,0.0135,1.201,0.6541,-0.1414,1.506,0.9662,-0.268,1.429,0.3405,-0.1838,1.729,0.3407,0.3661,1.81,0.3027,0.001732,1.285,0.3304,-0.2809,1.519,2.166,0.02262,-0.951,2.162,0.06963,-1.303,2.134,0.1242,-1.669,2.14,-0.07222,-0.2804,2.171,-0.0284,-0.6098,2.014,-0.1627,0.3595,2.102,-0.1204,0.04094,1.72,-0.2505,0.9801,1.897,-0.2125,0.6923,1.257,-0.3001,1.331,1.514,-0.2835,1.194,0.656,-0.3228,1.492,0.9712,-0.318,1.438,0.3317,-0.3309,1.529,0.6776,-0.2941,1.669,0.3392,-0.34,1.689,0.0,-0.3003,1.713,1.331,-0.2696,1.496,1.009,-0.3259,1.589,1.903,-0.2161,1.118,1.625,-0.2886,1.325,2.361,-0.1268,0.4862,2.141,-0.2157,0.8097,2.666,-0.03072,-0.1929,2.528,-0.1212,0.1413,2.778,0.07259,-0.9234,2.734,-0.02207,-0.5593,2.769,0.1812,-1.691,2.773,0.08362,-1.307,1.153,0.1896,-1.613,1.256,0.2732,-1.231,1.241,0.2441,-0.8359,1.167,0.1914,-0.4632,0.9965,0.1411,-0.1071,0.7287,0.1121,0.09755,0.3811,0.09886,0.1912,2.249,-0.4499,-1.376,2.479,-0.4877,-1.108,2.687,-0.4493,-1.38,2.456,-0.4115,-1.647,0.3333,-0.8549,1.488,0.09134,-0.8631,1.546,0.3376,-0.868,1.581,0.5796,-0.8598,1.523,1.001,-0.8541,1.482,1.222,-0.8398,1.381,0.9791,-0.8419,1.396,0.7581,-0.8562,1.497,1.602,-0.8175,1.224,1.757,-0.7942,1.059,1.536,-0.8067,1.147,1.381,-0.8299,1.312,2.1,-0.7454,0.7141,2.158,-0.7055,0.4315,1.938,-0.7348,0.6388,1.881,-0.7748,0.9214,2.464,-0.6516,0.05072,2.393,-0.6132,-0.2206,2.166,-0.6419,-0.01764,2.237,-0.6803,0.2537,2.654,-0.5537,-0.6418,2.475,-0.5151,-0.9145,2.252,-0.5488,-0.6764,2.43,-0.5873,-0.4037,2.255,0.02316,-1.033,2.167,-0.009349,-1.313,2.227,0.09968,-1.574,2.484,0.01499,-0.9361,2.704,0.02213,-1.026,2.484,-0.06101,-0.9475,2.684,0.1019,-1.59,2.769,-0.008573,-1.318,2.452,0.1247,-1.673,2.452,0.04308,-1.684,0.08337,-0.3438,1.562,0.332,-0.4105,1.524,0.5823,-0.3407,1.54,0.0,-0.347,1.624,0.08511,-0.36,1.676,0.001013,-0.4231,1.613,0.591,-0.3563,1.65,0.3389,-0.4312,1.67,0.6709,-0.3425,1.592,0.6699,-0.4186,1.581,1.247,-0.3356,1.504,1.007,-0.4171,1.57,0.7589,-0.3527,1.625,1.309,-0.32,1.433,1.21,-0.3209,1.4,1.308,-0.3961,1.422,0.7432,-0.3375,1.517,0.9727,-0.3976,1.433,0.672,-0.4186,1.581,1.816,-0.2883,1.17,1.621,-0.3799,1.308,1.402,-0.3262,1.438,1.83,-0.2707,1.084,1.712,-0.2763,1.085,1.829,-0.3469,1.074,1.347,-0.3122,1.338,1.517,-0.363,1.188,1.31,-0.396,1.421,2.271,-0.1994,0.5406,2.137,-0.3073,0.7938,1.946,-0.2701,1.041,2.209,-0.1761,0.415,2.051,-0.1873,0.4556,2.208,-0.2522,0.4048,1.809,-0.2584,0.9582,1.901,-0.2917,0.6837,1.83,-0.3467,1.073,2.576,-0.1055,-0.1234,2.523,-0.2129,0.1268,2.368,-0.1757,0.3733,2.422,-0.08402,-0.236,2.214,-0.09652,-0.1866,2.421,-0.1602,-0.2458,2.103,-0.1642,0.2919,2.107,-0.1994,0.03084,2.209,-0.2521,0.4034,2.695,-0.004304,-0.8387,2.73,-0.114,-0.5729,2.628,-0.08063,-0.299,2.257,-0.001381,-0.8594,2.484,-0.06122,-0.946,2.231,-0.07339,-0.3501,2.175,-0.1072,-0.6207,2.422,-0.16,-0.2476,2.122,0.156,-1.675,1.061,0.08604,-1.691,0.0,0.1637,-1.682,2.169,-0.3874,-1.366,2.26,-0.4875,-1.109,2.233,-0.4122,-1.642,2.484,-0.4388,-1.003,2.699,-0.4886,-1.102,2.766,-0.3866,-1.372,2.679,-0.41,-1.657,2.452,-0.3352,-1.735,0.3322,-0.7892,1.475,0.08821,-0.8561,1.497,0.5782,-0.8531,1.476,0.003092,-0.8011,1.559,0.08971,-0.8702,1.596,0.3387,-0.8086,1.612,0.5857,-0.8665,1.57,0.6678,-0.7967,1.528,1.006,-0.7945,1.513,1.24,-0.846,1.426,0.7626,-0.8628,1.544,1.306,-0.7743,1.369,1.208,-0.8334,1.336,0.9738,-0.7763,1.383,0.749,-0.8497,1.451,0.6741,-0.7966,1.527,1.618,-0.7575,1.251,1.806,-0.7993,1.095,1.402,-0.8362,1.356,1.826,-0.7252,1.022,1.713,-0.7887,1.02,1.52,-0.7415,1.137,1.355,-0.824,1.27,1.312,-0.7739,1.366,2.133,-0.6851,0.7387,2.262,-0.7108,0.4692,1.942,-0.7804,0.9611,2.207,-0.6305,0.3528,2.056,-0.6995,0.3896,1.905,-0.67,0.6319,1.816,-0.7697,0.8859,1.831,-0.7246,1.018,2.52,-0.5909,0.07258,2.568,-0.6172,-0.1924,2.364,-0.6862,0.2949,2.421,-0.5386,-0.2974,2.218,-0.6086,-0.2534,2.11,-0.5775,-0.02187,2.11,-0.6751,0.2169,2.209,-0.6299,0.3481,2.728,-0.492,-0.6266,2.689,-0.5162,-0.9068,2.624,-0.5912,-0.3764,2.483,-0.4395,-0.9976,2.262,-0.5133,-0.9269,2.178,-0.4853,-0.6739,2.236,-0.5842,-0.4263,2.422,-0.5378,-0.3029,2.256,-0.2378,-1.07,2.228,-0.1614,-1.61,2.703,-0.2389,-1.063,2.683,-0.1593,-1.626,0.08417,-0.6052,1.527,0.5817,-0.6022,1.506,0.08583,-0.6206,1.637,0.5901,-0.617,1.61,1.246,-0.5963,1.465,0.7594,-0.6134,1.585,1.21,-0.5824,1.366,0.7444,-0.5989,1.483,1.813,-0.5492,1.131,1.401,-0.5869,1.398,1.713,-0.5377,1.05,1.349,-0.5735,1.303,2.268,-0.4604,0.5032,1.944,-0.5309,1.002,2.053,-0.4486,0.4199,1.811,-0.5196,0.9222,2.574,-0.3666,-0.1599,2.366,-0.4366,0.3353,2.215,-0.3577,-0.2226,2.104,-0.4252,0.2548,2.693,-0.2654,-0.875,2.627,-0.3416,-0.3366,2.258,-0.2625,-0.8956,2.232,-0.3344,-0.3875,2.122,-0.111,-1.713,1.061,-0.3634,-1.754,0.0,-0.1076,-1.721}, 3123);
IndexedFaceSet734.setCoord(&Coordinate736);

Shape732.setGeometry(&IndexedFaceSet734);

Transform731.addChild(&Shape732);

HAnimSegment730.addChild(&Transform731);

Coordinate& Coordinate737 =  Coordinate();
Coordinate737.setUSE(CString("Upper_teeth_COORD_JinBlink"));
HAnimSegment730.setCoord(&Coordinate737);

HAnimDisplacer& HAnimDisplacer738 =  HAnimDisplacer();
HAnimDisplacer738.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer738.setDEF(CString("Upper_teeth_MorphInterpolator_JinBlink"));
HAnimDisplacer738.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer738.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer738);

HAnimDisplacer& HAnimDisplacer739 =  HAnimDisplacer();
HAnimDisplacer739.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer739.setDEF(CString("Upper_teeth_MorphInterpolator_JinCheekRaiser"));
HAnimDisplacer739.setCoordIndex(new int32_t[]{14,132,576,726,886}, 5);
HAnimDisplacer739.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,-0.0001,0.0,0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 15);
HAnimSegment730.setDisplacers(HAnimDisplacer739);

HAnimDisplacer& HAnimDisplacer740 =  HAnimDisplacer();
HAnimDisplacer740.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer740.setDEF(CString("Upper_teeth_MorphInterpolator_JinChinRaiser"));
HAnimDisplacer740.setCoordIndex(new int32_t[]{16,17,19,20,21,22,28,29,30,37,38,39,40,50,51,52,53,54,55,56,57,61,79,80,81,82,83,84,85,86,107,108,109,110,111,112,113,114,118,152,154,155,156,158,159,166,167,168,169,170,171,181,182,183,184,185,186,187,188,209,210,211,212,213,214,215,216,234,239,240,241,242,243,244,245,246,264,275,276,277,278,284,285,286,287,297,298,299,301,302,311,312,313,314,315,316,317,318,322,340,341,342,343,344,345,346,347,351,368,369,370,371,372,373,374,375,379,392,403,404,405,406,412,413,414,415,425,426,427,429,430,439,440,441,442,443,444,445,446,450,468,469,470,471,472,473,474,475,479,496,497,498,499,500,501,502,503,507,520,539,543,545,546,547,549,550,555,556,557,562,563,564,570,571,572,573,585,586,587,588,589,599,600,601,604,605,617,618,619,620,621,622,623,624,625,626,627,628,629,630,631,632,636,640,665,675,676,677,678,679,680,681,682,683,684,685,686,687,688,689,690,694,698,727,728,729,730,731,732,733,734,738,756,757,758,759,760,761,762,763,767,780,808,811,813,814,816,817,818,819,821,822,832,834,835,836,837,838,839,840,841,857,858,863,864,865,866,867,868,869,870,897,898,899,900,901,902,903,904,905,906,907,908,909,910,911,912,913,914,915,924,952,962,963,964,965,966,967,968,969,970,971,972,973,974,975,976,977,985,1014,1015,1016,1017,1018,1019,1020,1021,1039,1040}, 319);
HAnimDisplacer740.setDisplacements(new float[]{0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,0.0787,0.0,0.0,0.2286,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.1799,0.0,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1799,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1,0.0,0.0,0.188,0.0,0.0,0.188,0.0,0.0,0.0999,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,0.0382,0.0,0.0,0.1,0.0,0.0,0.2285,0.0,0.0,0.1,0.0,0.0,0.2286,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0999,0.0,0.0,0.1405,0.0,0.0,0.0999,0.0,0.0,0.1404,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0999,0.0,0.0,0.0381,0.0,0.0,0.1121,0.0,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1121,0.0,0.0,0.1267,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1267,0.0,0.0,0.2286,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0786,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1458,0.0,0.0,0.0382,0.0,0.0,0.1,0.0,0.0,0.2285,0.0,0.0,0.0999,0.0,0.0,0.0999,0.0,0.0,0.0349,0.0,0.0,0.0381,0.0,0.0,0.0349,0.0,0.0,0.1,0.0,0.0,0.0382,0.0,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1864,0.0,0.0,0.1458,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,-0.0056,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,-0.0055,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1458,0.0,0.0,0.0382,0.0,0.0,0.1,0.0,0.0,0.2285,0.0,0.0,0.0999,0.0,0.0,0.0999,0.0,0.0,0.0349,0.0,0.0,0.0381,0.0,0.0,0.0349,0.0,0.0,0.1,0.0,0.0,0.0382,0.0,0.0,0.1457,0.0,0.0,0.1458,0.0,0.0,0.1864,0.0,0.0,0.1458,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0787,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0786,0.0,0.0,0.0999,0.0,0.0,0.1,0.0,0.0,0.0349,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,0.2286,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.1404,0.0,0.0,0.1881,0.0,0.0,0.1881,0.0,0.0,0.1405,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.1458,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0968,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1458,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1458,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0999,0.0,0.0,0.2286,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0968,0.0,0.0,0.0381,0.0,0.0,0.0967,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,-0.0056,0.0,0.0,0.0999,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.2286,0.0,0.0,0.0381,0.0,0.0,0.0349,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1462,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.1268,0.0,0.0,0.1,0.0,0.0,0.0999,0.0,0.0,0.1404,0.0,0.0,0.2286,0.0,0.0,0.1,0.0,0.0,0.2286,0.0,0.0,0.1405,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0382,0.0,0.0,0.0968,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1,0.0,0.0,0.0967,0.0,0.0,0.1,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0001,0.1457,0.0,0.0,0.1457,0.0,0.0,0.1462,0.0,0.0,0.1457,0.0,0.0,0.1865,0.0,0.0,0.1457,0.0,0.0,0.1462,0.0,0.0,0.1457,0.0,0.0,0.0381,0.0,0.0,0.0381,0.0,0.0,0.1267,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.1267,0.0,0.0,0.1458,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0382,0.0,0.0,0.0382,0.0,0.0,0.0381,0.0,0.0,0.0349,0.0,0.0,0.0381,0.0}, 957);
HAnimSegment730.setDisplacers(HAnimDisplacer740);

HAnimDisplacer& HAnimDisplacer741 =  HAnimDisplacer();
HAnimDisplacer741.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer741.setDEF(CString("Upper_teeth_MorphInterpolator_JinEyesClosed"));
HAnimDisplacer741.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer741.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer741);

HAnimDisplacer& HAnimDisplacer742 =  HAnimDisplacer();
HAnimDisplacer742.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer742.setDEF(CString("Upper_teeth_MorphInterpolator_JinLidDroop"));
HAnimDisplacer742.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer742.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer742);

HAnimDisplacer& HAnimDisplacer743 =  HAnimDisplacer();
HAnimDisplacer743.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer743.setDEF(CString("Upper_teeth_MorphInterpolator_JinLipCornerPuller"));
HAnimDisplacer743.setCoordIndex(new int32_t[]{1,219,711,1006}, 4);
HAnimDisplacer743.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,-0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 12);
HAnimSegment730.setDisplacers(HAnimDisplacer743);

HAnimDisplacer& HAnimDisplacer744 =  HAnimDisplacer();
HAnimDisplacer744.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer744.setDEF(CString("Upper_teeth_MorphInterpolator_JinLipFunneler"));
HAnimDisplacer744.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer744.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer744);

HAnimDisplacer& HAnimDisplacer745 =  HAnimDisplacer();
HAnimDisplacer745.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer745.setDEF(CString("Upper_teeth_MorphInterpolator_JinLipPuckerer"));
HAnimDisplacer745.setCoordIndex(new int32_t[]{15,17,18,19,20,21,22,37,38,39,107,108,109,110,111,112,113,114,156,157,159,160,167,168,169,170,209,210,211,212,214,216,264,275,277,284,285,286,287,311,312,313,314,315,317,318,368,369,371,372,374,375,403,405,412,413,414,415,439,440,441,442,443,445,446,496,497,499,500,502,503,539,543,544,546,547,548,549,550,570,571,572,573,585,586,587,588,604,617,618,619,620,625,626,627,628,665,727,728,731,732,733,734,756,757,758,759,760,762,763,814,815,818,819,820,822,834,835,836,837,838,839,841,897,898,899,900,901,902,903,904,905,906,908,909,913,914,915,1014,1015,1019,1021,1039}, 143);
HAnimDisplacer745.setDisplacements(new float[]{0.0,0.0,0.092,0.0,0.0,0.322,0.0,0.0,0.092,0.0,0.0,0.322,-0.0413,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0246,0.0,0.436,0.0261,0.0,0.436,0.0167,0.0,0.436,-0.0327,0.0,0.436,0.0045,0.0,0.322,0.0176,0.0,0.436,0.0716,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.07,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.092,-0.0413,0.0,0.436,0.0,0.0,0.092,-0.1069,0.0,0.436,-0.0411,0.0,0.436,-0.1084,0.0,0.436,-0.0411,0.0,0.436,-0.0123,0.0,0.322,-0.0989,0.0,0.436,-0.0124,0.0,0.322,-0.0998,0.0,0.436,-0.1166,0.0,0.436,-0.1151,0.0,0.436,-0.0411,0.0,0.436,0.0,0.0,0.092,0.0,0.0,0.093,0.0923,0.0,0.322,0.029,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0291,0.0,0.322,-0.0411,0.0,0.436,0.0297,0.0,0.322,0.0256,0.0,0.436,0.0586,0.0,0.436,0.0927,0.0,0.322,0.0256,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.092,0.0,0.0,0.093,-0.1374,0.0,0.436,-0.0369,0.0,0.322,0.0,0.0,0.322,-0.0412,0.0,0.436,-0.037,0.0,0.322,-0.0412,0.0,0.436,-0.0376,0.0,0.322,-0.1078,0.0,0.436,-0.1408,0.0,0.436,-0.1378,0.0,0.436,-0.1078,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,-0.0413,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.093,0.0,0.0,0.093,0.0,0.0,0.093,0.0,0.0,0.322,0.0,0.0,0.092,0.0,0.0,0.092,0.0,0.0,0.322,0.0,0.0,0.322,0.0926,0.0,0.322,0.029,0.0,0.322,0.0298,0.0,0.322,0.0968,0.0,0.322,0.0,0.0,0.322,0.0241,0.0,0.436,-0.0411,0.0,0.436,-0.0413,0.0,0.436,0.0256,0.0,0.436,0.0168,0.0,0.436,-0.0328,0.0,0.436,-0.0327,0.0,0.436,0.0176,0.0,0.436,0.0715,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.07,0.0,0.322,0.0645,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,0.029,0.0,0.322,-0.041,0.0,0.436,0.0298,0.0,0.322,0.0255,0.0,0.436,0.059,0.0,0.436,0.0556,0.0,0.436,0.0257,0.0,0.436,0.0,0.0,0.093,0.0,0.0,0.093,-0.0413,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.092,0.0,0.0,0.322,-0.1063,0.0,0.436,-0.1377,0.0,0.436,-0.0369,0.0,0.322,-0.0413,0.0,0.436,-0.0377,0.0,0.322,-0.0413,0.0,0.436,-0.1418,0.0,0.436,-0.0122,0.0,0.322,-0.0369,0.0,0.322,-0.099,0.0,0.436,-0.0411,0.0,0.436,-0.0124,0.0,0.322,-0.0412,0.0,0.436,-0.0999,0.0,0.436,-0.0377,0.0,0.322,-0.1078,0.0,0.436,-0.1077,0.0,0.436,-0.1412,0.0,0.436,-0.1165,0.0,0.436,-0.115,0.0,0.436,-0.1378,0.0,0.436,-0.1079,0.0,0.436,0.0,0.0,0.322,0.0,0.0,0.322,0.0,0.0,0.322,-0.0413,0.0,0.436,-0.1467,0.0,0.436}, 429);
HAnimSegment730.setDisplacers(HAnimDisplacer745);

HAnimDisplacer& HAnimDisplacer746 =  HAnimDisplacer();
HAnimDisplacer746.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer746.setDEF(CString("Upper_teeth_MorphInterpolator_JinLipsPart"));
HAnimDisplacer746.setCoordIndex(new int32_t[]{14,132,576,726,886}, 5);
HAnimDisplacer746.setDisplacements(new float[]{0.0,-0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0,0.0,-0.0001,0.0,0.0,0.0001,0.0}, 15);
HAnimSegment730.setDisplacers(HAnimDisplacer746);

HAnimDisplacer& HAnimDisplacer747 =  HAnimDisplacer();
HAnimDisplacer747.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer747.setDEF(CString("Upper_teeth_MorphInterpolator_JinLipSuck"));
HAnimDisplacer747.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer747.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer747);

HAnimDisplacer& HAnimDisplacer748 =  HAnimDisplacer();
HAnimDisplacer748.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer748.setDEF(CString("Upper_teeth_MorphInterpolator_JinLipTightener"));
HAnimDisplacer748.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer748.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer748);

HAnimDisplacer& HAnimDisplacer749 =  HAnimDisplacer();
HAnimDisplacer749.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer749.setDEF(CString("Upper_teeth_MorphInterpolator_JinMouthStretch"));
HAnimDisplacer749.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer749.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer749);

HAnimDisplacer& HAnimDisplacer750 =  HAnimDisplacer();
HAnimDisplacer750.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer750.setDEF(CString("Upper_teeth_MorphInterpolator_JinNoseWrinkler"));
HAnimDisplacer750.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer750.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer750);

HAnimDisplacer& HAnimDisplacer751 =  HAnimDisplacer();
HAnimDisplacer751.X3DNode::setName(CString("upper_teeth_morphinterpolator"));
HAnimDisplacer751.setDEF(CString("Upper_teeth_MorphInterpolator_JinSlit"));
HAnimDisplacer751.setCoordIndex(new int32_t[]{14,576,886}, 3);
HAnimDisplacer751.setDisplacements(new float[]{0.0,0.0001,0.0,0.0,0.0001,0.0,0.0,-0.0001,0.0}, 9);
HAnimSegment730.setDisplacers(HAnimDisplacer751);

HAnimJoint89.addChildren(&HAnimSegment730);

HAnimJoint87.addChildren(&HAnimJoint89);

HAnimHumanoid86.setSkeleton(&HAnimJoint87);

HAnimJoint& HAnimJoint752 =  HAnimJoint();
HAnimJoint752.setUSE(CString("hanim0_humanoid_root"));
HAnimHumanoid86.setJoints(&HAnimJoint752);

HAnimJoint& HAnimJoint753 =  HAnimJoint();
HAnimJoint753.setUSE(CString("hanim0_skullbase"));
HAnimHumanoid86.setJoints(&HAnimJoint753);

Transform85.addChild(&HAnimHumanoid86);

Layer15.addChild(&Transform85);

ROUTE& ROUTE754 =  ROUTE();
ROUTE754.setFromField(CString("value_changed"));
ROUTE754.setFromNode(CString("AnimationAdapter_JinBlink"));
ROUTE754.setToField(CString("weight"));
ROUTE754.setToNode(CString("Upper_teeth_MorphInterpolator_JinBlink"));
Layer15.addChild(&ROUTE754);

ROUTE& ROUTE755 =  ROUTE();
ROUTE755.setFromField(CString("value_changed"));
ROUTE755.setFromNode(CString("AnimationAdapter_JinBlink"));
ROUTE755.setToField(CString("weight"));
ROUTE755.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinBlink"));
Layer15.addChild(&ROUTE755);

ROUTE& ROUTE756 =  ROUTE();
ROUTE756.setFromField(CString("value_changed"));
ROUTE756.setFromNode(CString("AnimationAdapter_JinBlink"));
ROUTE756.setToField(CString("weight"));
ROUTE756.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinBlink"));
Layer15.addChild(&ROUTE756);

ROUTE& ROUTE757 =  ROUTE();
ROUTE757.setFromField(CString("value_changed"));
ROUTE757.setFromNode(CString("AnimationAdapter_JinBlink"));
ROUTE757.setToField(CString("weight"));
ROUTE757.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinBlink"));
Layer15.addChild(&ROUTE757);

ROUTE& ROUTE758 =  ROUTE();
ROUTE758.setFromField(CString("value_changed"));
ROUTE758.setFromNode(CString("AnimationAdapter_JinBlink"));
ROUTE758.setToField(CString("weight"));
ROUTE758.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinBlink"));
Layer15.addChild(&ROUTE758);

ROUTE& ROUTE759 =  ROUTE();
ROUTE759.setFromNode(CString("JinBlink_Clock"));
ROUTE759.setFromField(CString("fraction_changed"));
ROUTE759.setToNode(CString("AnimationAdapter_JinBlink"));
ROUTE759.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE759);

ROUTE& ROUTE760 =  ROUTE();
ROUTE760.setFromField(CString("value_changed"));
ROUTE760.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE760.setToField(CString("weight"));
ROUTE760.setToNode(CString("Left_forehead_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE760);

ROUTE& ROUTE761 =  ROUTE();
ROUTE761.setFromField(CString("value_changed"));
ROUTE761.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE761.setToField(CString("weight"));
ROUTE761.setToNode(CString("Glabella_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE761);

ROUTE& ROUTE762 =  ROUTE();
ROUTE762.setFromField(CString("value_changed"));
ROUTE762.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE762.setToField(CString("weight"));
ROUTE762.setToNode(CString("Left_eyebrow_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE762);

ROUTE& ROUTE763 =  ROUTE();
ROUTE763.setFromField(CString("value_changed"));
ROUTE763.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE763.setToField(CString("weight"));
ROUTE763.setToNode(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE763);

ROUTE& ROUTE764 =  ROUTE();
ROUTE764.setFromField(CString("value_changed"));
ROUTE764.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE764.setToField(CString("weight"));
ROUTE764.setToNode(CString("Left_temple_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE764);

ROUTE& ROUTE765 =  ROUTE();
ROUTE765.setFromField(CString("value_changed"));
ROUTE765.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE765.setToField(CString("weight"));
ROUTE765.setToNode(CString("Right_forehead_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE765);

ROUTE& ROUTE766 =  ROUTE();
ROUTE766.setFromField(CString("value_changed"));
ROUTE766.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE766.setToField(CString("weight"));
ROUTE766.setToNode(CString("Right_eyebrow_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE766);

ROUTE& ROUTE767 =  ROUTE();
ROUTE767.setFromField(CString("value_changed"));
ROUTE767.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE767.setToField(CString("weight"));
ROUTE767.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE767);

ROUTE& ROUTE768 =  ROUTE();
ROUTE768.setFromField(CString("value_changed"));
ROUTE768.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE768.setToField(CString("weight"));
ROUTE768.setToNode(CString("Left_pupil_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE768);

ROUTE& ROUTE769 =  ROUTE();
ROUTE769.setFromField(CString("value_changed"));
ROUTE769.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE769.setToField(CString("weight"));
ROUTE769.setToNode(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE769);

ROUTE& ROUTE770 =  ROUTE();
ROUTE770.setFromField(CString("value_changed"));
ROUTE770.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE770.setToField(CString("weight"));
ROUTE770.setToNode(CString("Right_pupil_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE770);

ROUTE& ROUTE771 =  ROUTE();
ROUTE771.setFromField(CString("value_changed"));
ROUTE771.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE771.setToField(CString("weight"));
ROUTE771.setToNode(CString("Right_temple_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE771);

ROUTE& ROUTE772 =  ROUTE();
ROUTE772.setFromField(CString("value_changed"));
ROUTE772.setFromNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE772.setToField(CString("weight"));
ROUTE772.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinBrowLowerer"));
Layer15.addChild(&ROUTE772);

ROUTE& ROUTE773 =  ROUTE();
ROUTE773.setFromNode(CString("JinBrowLowerer_Clock"));
ROUTE773.setFromField(CString("fraction_changed"));
ROUTE773.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE773.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE773);

ROUTE& ROUTE774 =  ROUTE();
ROUTE774.setFromField(CString("value_changed"));
ROUTE774.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE774.setToField(CString("weight"));
ROUTE774.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE774);

ROUTE& ROUTE775 =  ROUTE();
ROUTE775.setFromField(CString("value_changed"));
ROUTE775.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE775.setToField(CString("weight"));
ROUTE775.setToNode(CString("Neck_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE775);

ROUTE& ROUTE776 =  ROUTE();
ROUTE776.setFromField(CString("value_changed"));
ROUTE776.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE776.setToField(CString("weight"));
ROUTE776.setToNode(CString("Occipital_scalp_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE776);

ROUTE& ROUTE777 =  ROUTE();
ROUTE777.setFromField(CString("value_changed"));
ROUTE777.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE777.setToField(CString("weight"));
ROUTE777.setToNode(CString("Chin_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE777);

ROUTE& ROUTE778 =  ROUTE();
ROUTE778.setFromField(CString("value_changed"));
ROUTE778.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE778.setToField(CString("weight"));
ROUTE778.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE778);

ROUTE& ROUTE779 =  ROUTE();
ROUTE779.setFromField(CString("value_changed"));
ROUTE779.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE779.setToField(CString("weight"));
ROUTE779.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE779);

ROUTE& ROUTE780 =  ROUTE();
ROUTE780.setFromField(CString("value_changed"));
ROUTE780.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE780.setToField(CString("weight"));
ROUTE780.setToNode(CString("Left_nostril_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE780);

ROUTE& ROUTE781 =  ROUTE();
ROUTE781.setFromField(CString("value_changed"));
ROUTE781.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE781.setToField(CString("weight"));
ROUTE781.setToNode(CString("Left_dorsum_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE781);

ROUTE& ROUTE782 =  ROUTE();
ROUTE782.setFromField(CString("value_changed"));
ROUTE782.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE782.setToField(CString("weight"));
ROUTE782.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE782);

ROUTE& ROUTE783 =  ROUTE();
ROUTE783.setFromField(CString("value_changed"));
ROUTE783.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE783.setToField(CString("weight"));
ROUTE783.setToNode(CString("Left_cheek_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE783);

ROUTE& ROUTE784 =  ROUTE();
ROUTE784.setFromField(CString("value_changed"));
ROUTE784.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE784.setToField(CString("weight"));
ROUTE784.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE784);

ROUTE& ROUTE785 =  ROUTE();
ROUTE785.setFromField(CString("value_changed"));
ROUTE785.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE785.setToField(CString("weight"));
ROUTE785.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE785);

ROUTE& ROUTE786 =  ROUTE();
ROUTE786.setFromField(CString("value_changed"));
ROUTE786.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE786.setToField(CString("weight"));
ROUTE786.setToNode(CString("Philtrum_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE786);

ROUTE& ROUTE787 =  ROUTE();
ROUTE787.setFromField(CString("value_changed"));
ROUTE787.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE787.setToField(CString("weight"));
ROUTE787.setToNode(CString("Right_cheek_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE787);

ROUTE& ROUTE788 =  ROUTE();
ROUTE788.setFromField(CString("value_changed"));
ROUTE788.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE788.setToField(CString("weight"));
ROUTE788.setToNode(CString("Right_dorsum_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE788);

ROUTE& ROUTE789 =  ROUTE();
ROUTE789.setFromField(CString("value_changed"));
ROUTE789.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE789.setToField(CString("weight"));
ROUTE789.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE789);

ROUTE& ROUTE790 =  ROUTE();
ROUTE790.setFromField(CString("value_changed"));
ROUTE790.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE790.setToField(CString("weight"));
ROUTE790.setToNode(CString("Right_nostril_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE790);

ROUTE& ROUTE791 =  ROUTE();
ROUTE791.setFromField(CString("value_changed"));
ROUTE791.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE791.setToField(CString("weight"));
ROUTE791.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE791);

ROUTE& ROUTE792 =  ROUTE();
ROUTE792.setFromField(CString("value_changed"));
ROUTE792.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE792.setToField(CString("weight"));
ROUTE792.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE792);

ROUTE& ROUTE793 =  ROUTE();
ROUTE793.setFromField(CString("value_changed"));
ROUTE793.setFromNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE793.setToField(CString("weight"));
ROUTE793.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinCheekPuffer"));
Layer15.addChild(&ROUTE793);

ROUTE& ROUTE794 =  ROUTE();
ROUTE794.setFromNode(CString("JinCheekPuffer_Clock"));
ROUTE794.setFromField(CString("fraction_changed"));
ROUTE794.setToNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE794.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE794);

ROUTE& ROUTE795 =  ROUTE();
ROUTE795.setFromField(CString("value_changed"));
ROUTE795.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE795.setToField(CString("weight"));
ROUTE795.setToNode(CString("Upper_teeth_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE795);

ROUTE& ROUTE796 =  ROUTE();
ROUTE796.setFromField(CString("value_changed"));
ROUTE796.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE796.setToField(CString("weight"));
ROUTE796.setToNode(CString("Left_dorsum_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE796);

ROUTE& ROUTE797 =  ROUTE();
ROUTE797.setFromField(CString("value_changed"));
ROUTE797.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE797.setToField(CString("weight"));
ROUTE797.setToNode(CString("Left_cheek_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE797);

ROUTE& ROUTE798 =  ROUTE();
ROUTE798.setFromField(CString("value_changed"));
ROUTE798.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE798.setToField(CString("weight"));
ROUTE798.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE798);

ROUTE& ROUTE799 =  ROUTE();
ROUTE799.setFromField(CString("value_changed"));
ROUTE799.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE799.setToField(CString("weight"));
ROUTE799.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE799);

ROUTE& ROUTE800 =  ROUTE();
ROUTE800.setFromField(CString("value_changed"));
ROUTE800.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE800.setToField(CString("weight"));
ROUTE800.setToNode(CString("Right_cheek_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE800);

ROUTE& ROUTE801 =  ROUTE();
ROUTE801.setFromField(CString("value_changed"));
ROUTE801.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE801.setToField(CString("weight"));
ROUTE801.setToNode(CString("Right_dorsum_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE801);

ROUTE& ROUTE802 =  ROUTE();
ROUTE802.setFromField(CString("value_changed"));
ROUTE802.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE802.setToField(CString("weight"));
ROUTE802.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE802);

ROUTE& ROUTE803 =  ROUTE();
ROUTE803.setFromField(CString("value_changed"));
ROUTE803.setFromNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE803.setToField(CString("weight"));
ROUTE803.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinCheekRaiser"));
Layer15.addChild(&ROUTE803);

ROUTE& ROUTE804 =  ROUTE();
ROUTE804.setFromNode(CString("JinCheekRaiser_Clock"));
ROUTE804.setFromField(CString("fraction_changed"));
ROUTE804.setToNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE804.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE804);

ROUTE& ROUTE805 =  ROUTE();
ROUTE805.setFromField(CString("value_changed"));
ROUTE805.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE805.setToField(CString("weight"));
ROUTE805.setToNode(CString("Lower_teeth_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE805);

ROUTE& ROUTE806 =  ROUTE();
ROUTE806.setFromField(CString("value_changed"));
ROUTE806.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE806.setToField(CString("weight"));
ROUTE806.setToNode(CString("Tongue_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE806);

ROUTE& ROUTE807 =  ROUTE();
ROUTE807.setFromField(CString("value_changed"));
ROUTE807.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE807.setToField(CString("weight"));
ROUTE807.setToNode(CString("Upper_teeth_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE807);

ROUTE& ROUTE808 =  ROUTE();
ROUTE808.setFromField(CString("value_changed"));
ROUTE808.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE808.setToField(CString("weight"));
ROUTE808.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE808);

ROUTE& ROUTE809 =  ROUTE();
ROUTE809.setFromField(CString("value_changed"));
ROUTE809.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE809.setToField(CString("weight"));
ROUTE809.setToNode(CString("Neck_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE809);

ROUTE& ROUTE810 =  ROUTE();
ROUTE810.setFromField(CString("value_changed"));
ROUTE810.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE810.setToField(CString("weight"));
ROUTE810.setToNode(CString("Occipital_scalp_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE810);

ROUTE& ROUTE811 =  ROUTE();
ROUTE811.setFromField(CString("value_changed"));
ROUTE811.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE811.setToField(CString("weight"));
ROUTE811.setToNode(CString("Chin_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE811);

ROUTE& ROUTE812 =  ROUTE();
ROUTE812.setFromField(CString("value_changed"));
ROUTE812.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE812.setToField(CString("weight"));
ROUTE812.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE812);

ROUTE& ROUTE813 =  ROUTE();
ROUTE813.setFromField(CString("value_changed"));
ROUTE813.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE813.setToField(CString("weight"));
ROUTE813.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE813);

ROUTE& ROUTE814 =  ROUTE();
ROUTE814.setFromField(CString("value_changed"));
ROUTE814.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE814.setToField(CString("weight"));
ROUTE814.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE814);

ROUTE& ROUTE815 =  ROUTE();
ROUTE815.setFromField(CString("value_changed"));
ROUTE815.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE815.setToField(CString("weight"));
ROUTE815.setToNode(CString("Left_cheek_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE815);

ROUTE& ROUTE816 =  ROUTE();
ROUTE816.setFromField(CString("value_changed"));
ROUTE816.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE816.setToField(CString("weight"));
ROUTE816.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE816);

ROUTE& ROUTE817 =  ROUTE();
ROUTE817.setFromField(CString("value_changed"));
ROUTE817.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE817.setToField(CString("weight"));
ROUTE817.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE817);

ROUTE& ROUTE818 =  ROUTE();
ROUTE818.setFromField(CString("value_changed"));
ROUTE818.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE818.setToField(CString("weight"));
ROUTE818.setToNode(CString("Philtrum_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE818);

ROUTE& ROUTE819 =  ROUTE();
ROUTE819.setFromField(CString("value_changed"));
ROUTE819.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE819.setToField(CString("weight"));
ROUTE819.setToNode(CString("Right_cheek_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE819);

ROUTE& ROUTE820 =  ROUTE();
ROUTE820.setFromField(CString("value_changed"));
ROUTE820.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE820.setToField(CString("weight"));
ROUTE820.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE820);

ROUTE& ROUTE821 =  ROUTE();
ROUTE821.setFromField(CString("value_changed"));
ROUTE821.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE821.setToField(CString("weight"));
ROUTE821.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE821);

ROUTE& ROUTE822 =  ROUTE();
ROUTE822.setFromField(CString("value_changed"));
ROUTE822.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE822.setToField(CString("weight"));
ROUTE822.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE822);

ROUTE& ROUTE823 =  ROUTE();
ROUTE823.setFromField(CString("value_changed"));
ROUTE823.setFromNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE823.setToField(CString("weight"));
ROUTE823.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinChinRaiser"));
Layer15.addChild(&ROUTE823);

ROUTE& ROUTE824 =  ROUTE();
ROUTE824.setFromNode(CString("JinChinRaiser_Clock"));
ROUTE824.setFromField(CString("fraction_changed"));
ROUTE824.setToNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE824.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE824);

ROUTE& ROUTE825 =  ROUTE();
ROUTE825.setFromField(CString("value_changed"));
ROUTE825.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE825.setToField(CString("weight"));
ROUTE825.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE825);

ROUTE& ROUTE826 =  ROUTE();
ROUTE826.setFromField(CString("value_changed"));
ROUTE826.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE826.setToField(CString("weight"));
ROUTE826.setToNode(CString("Neck_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE826);

ROUTE& ROUTE827 =  ROUTE();
ROUTE827.setFromField(CString("value_changed"));
ROUTE827.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE827.setToField(CString("weight"));
ROUTE827.setToNode(CString("Occipital_scalp_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE827);

ROUTE& ROUTE828 =  ROUTE();
ROUTE828.setFromField(CString("value_changed"));
ROUTE828.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE828.setToField(CString("weight"));
ROUTE828.setToNode(CString("Chin_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE828);

ROUTE& ROUTE829 =  ROUTE();
ROUTE829.setFromField(CString("value_changed"));
ROUTE829.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE829.setToField(CString("weight"));
ROUTE829.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE829);

ROUTE& ROUTE830 =  ROUTE();
ROUTE830.setFromField(CString("value_changed"));
ROUTE830.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE830.setToField(CString("weight"));
ROUTE830.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE830);

ROUTE& ROUTE831 =  ROUTE();
ROUTE831.setFromField(CString("value_changed"));
ROUTE831.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE831.setToField(CString("weight"));
ROUTE831.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE831);

ROUTE& ROUTE832 =  ROUTE();
ROUTE832.setFromField(CString("value_changed"));
ROUTE832.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE832.setToField(CString("weight"));
ROUTE832.setToNode(CString("Left_cheek_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE832);

ROUTE& ROUTE833 =  ROUTE();
ROUTE833.setFromField(CString("value_changed"));
ROUTE833.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE833.setToField(CString("weight"));
ROUTE833.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE833);

ROUTE& ROUTE834 =  ROUTE();
ROUTE834.setFromField(CString("value_changed"));
ROUTE834.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE834.setToField(CString("weight"));
ROUTE834.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE834);

ROUTE& ROUTE835 =  ROUTE();
ROUTE835.setFromField(CString("value_changed"));
ROUTE835.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE835.setToField(CString("weight"));
ROUTE835.setToNode(CString("Philtrum_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE835);

ROUTE& ROUTE836 =  ROUTE();
ROUTE836.setFromField(CString("value_changed"));
ROUTE836.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE836.setToField(CString("weight"));
ROUTE836.setToNode(CString("Right_cheek_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE836);

ROUTE& ROUTE837 =  ROUTE();
ROUTE837.setFromField(CString("value_changed"));
ROUTE837.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE837.setToField(CString("weight"));
ROUTE837.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE837);

ROUTE& ROUTE838 =  ROUTE();
ROUTE838.setFromField(CString("value_changed"));
ROUTE838.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE838.setToField(CString("weight"));
ROUTE838.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE838);

ROUTE& ROUTE839 =  ROUTE();
ROUTE839.setFromField(CString("value_changed"));
ROUTE839.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE839.setToField(CString("weight"));
ROUTE839.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE839);

ROUTE& ROUTE840 =  ROUTE();
ROUTE840.setFromField(CString("value_changed"));
ROUTE840.setFromNode(CString("AnimationAdapter_JinDimpler"));
ROUTE840.setToField(CString("weight"));
ROUTE840.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinDimpler"));
Layer15.addChild(&ROUTE840);

ROUTE& ROUTE841 =  ROUTE();
ROUTE841.setFromNode(CString("JinDimpler_Clock"));
ROUTE841.setFromField(CString("fraction_changed"));
ROUTE841.setToNode(CString("AnimationAdapter_JinDimpler"));
ROUTE841.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE841);

ROUTE& ROUTE842 =  ROUTE();
ROUTE842.setFromField(CString("value_changed"));
ROUTE842.setFromNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE842.setToField(CString("weight"));
ROUTE842.setToNode(CString("Upper_teeth_MorphInterpolator_JinEyesClosed"));
Layer15.addChild(&ROUTE842);

ROUTE& ROUTE843 =  ROUTE();
ROUTE843.setFromField(CString("value_changed"));
ROUTE843.setFromNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE843.setToField(CString("weight"));
ROUTE843.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinEyesClosed"));
Layer15.addChild(&ROUTE843);

ROUTE& ROUTE844 =  ROUTE();
ROUTE844.setFromField(CString("value_changed"));
ROUTE844.setFromNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE844.setToField(CString("weight"));
ROUTE844.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinEyesClosed"));
Layer15.addChild(&ROUTE844);

ROUTE& ROUTE845 =  ROUTE();
ROUTE845.setFromField(CString("value_changed"));
ROUTE845.setFromNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE845.setToField(CString("weight"));
ROUTE845.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinEyesClosed"));
Layer15.addChild(&ROUTE845);

ROUTE& ROUTE846 =  ROUTE();
ROUTE846.setFromField(CString("value_changed"));
ROUTE846.setFromNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE846.setToField(CString("weight"));
ROUTE846.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinEyesClosed"));
Layer15.addChild(&ROUTE846);

ROUTE& ROUTE847 =  ROUTE();
ROUTE847.setFromNode(CString("JinEyesClosed_Clock"));
ROUTE847.setFromField(CString("fraction_changed"));
ROUTE847.setToNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE847.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE847);

ROUTE& ROUTE848 =  ROUTE();
ROUTE848.setFromField(CString("value_changed"));
ROUTE848.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE848.setToField(CString("weight"));
ROUTE848.setToNode(CString("Left_forehead_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE848);

ROUTE& ROUTE849 =  ROUTE();
ROUTE849.setFromField(CString("value_changed"));
ROUTE849.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE849.setToField(CString("weight"));
ROUTE849.setToNode(CString("Glabella_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE849);

ROUTE& ROUTE850 =  ROUTE();
ROUTE850.setFromField(CString("value_changed"));
ROUTE850.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE850.setToField(CString("weight"));
ROUTE850.setToNode(CString("Left_eyebrow_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE850);

ROUTE& ROUTE851 =  ROUTE();
ROUTE851.setFromField(CString("value_changed"));
ROUTE851.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE851.setToField(CString("weight"));
ROUTE851.setToNode(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE851);

ROUTE& ROUTE852 =  ROUTE();
ROUTE852.setFromField(CString("value_changed"));
ROUTE852.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE852.setToField(CString("weight"));
ROUTE852.setToNode(CString("Right_forehead_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE852);

ROUTE& ROUTE853 =  ROUTE();
ROUTE853.setFromField(CString("value_changed"));
ROUTE853.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE853.setToField(CString("weight"));
ROUTE853.setToNode(CString("Right_eyebrow_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE853);

ROUTE& ROUTE854 =  ROUTE();
ROUTE854.setFromField(CString("value_changed"));
ROUTE854.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE854.setToField(CString("weight"));
ROUTE854.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE854);

ROUTE& ROUTE855 =  ROUTE();
ROUTE855.setFromField(CString("value_changed"));
ROUTE855.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE855.setToField(CString("weight"));
ROUTE855.setToNode(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE855);

ROUTE& ROUTE856 =  ROUTE();
ROUTE856.setFromField(CString("value_changed"));
ROUTE856.setFromNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE856.setToField(CString("weight"));
ROUTE856.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinInnerBrowRaiser"));
Layer15.addChild(&ROUTE856);

ROUTE& ROUTE857 =  ROUTE();
ROUTE857.setFromNode(CString("JinInnerBrowRaiser_Clock"));
ROUTE857.setFromField(CString("fraction_changed"));
ROUTE857.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE857.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE857);

ROUTE& ROUTE858 =  ROUTE();
ROUTE858.setFromField(CString("value_changed"));
ROUTE858.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE858.setToField(CString("weight"));
ROUTE858.setToNode(CString("Lower_teeth_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE858);

ROUTE& ROUTE859 =  ROUTE();
ROUTE859.setFromField(CString("value_changed"));
ROUTE859.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE859.setToField(CString("weight"));
ROUTE859.setToNode(CString("Occipital_scalp_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE859);

ROUTE& ROUTE860 =  ROUTE();
ROUTE860.setFromField(CString("value_changed"));
ROUTE860.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE860.setToField(CString("weight"));
ROUTE860.setToNode(CString("Chin_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE860);

ROUTE& ROUTE861 =  ROUTE();
ROUTE861.setFromField(CString("value_changed"));
ROUTE861.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE861.setToField(CString("weight"));
ROUTE861.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE861);

ROUTE& ROUTE862 =  ROUTE();
ROUTE862.setFromField(CString("value_changed"));
ROUTE862.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE862.setToField(CString("weight"));
ROUTE862.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE862);

ROUTE& ROUTE863 =  ROUTE();
ROUTE863.setFromField(CString("value_changed"));
ROUTE863.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE863.setToField(CString("weight"));
ROUTE863.setToNode(CString("Left_cheek_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE863);

ROUTE& ROUTE864 =  ROUTE();
ROUTE864.setFromField(CString("value_changed"));
ROUTE864.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE864.setToField(CString("weight"));
ROUTE864.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE864);

ROUTE& ROUTE865 =  ROUTE();
ROUTE865.setFromField(CString("value_changed"));
ROUTE865.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE865.setToField(CString("weight"));
ROUTE865.setToNode(CString("Right_cheek_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE865);

ROUTE& ROUTE866 =  ROUTE();
ROUTE866.setFromField(CString("value_changed"));
ROUTE866.setFromNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE866.setToField(CString("weight"));
ROUTE866.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinJawDrop"));
Layer15.addChild(&ROUTE866);

ROUTE& ROUTE867 =  ROUTE();
ROUTE867.setFromNode(CString("JinJawDrop_Clock"));
ROUTE867.setFromField(CString("fraction_changed"));
ROUTE867.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE867.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE867);

ROUTE& ROUTE868 =  ROUTE();
ROUTE868.setFromField(CString("value_changed"));
ROUTE868.setFromNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE868.setToField(CString("weight"));
ROUTE868.setToNode(CString("Upper_teeth_MorphInterpolator_JinLidDroop"));
Layer15.addChild(&ROUTE868);

ROUTE& ROUTE869 =  ROUTE();
ROUTE869.setFromField(CString("value_changed"));
ROUTE869.setFromNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE869.setToField(CString("weight"));
ROUTE869.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinLidDroop"));
Layer15.addChild(&ROUTE869);

ROUTE& ROUTE870 =  ROUTE();
ROUTE870.setFromField(CString("value_changed"));
ROUTE870.setFromNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE870.setToField(CString("weight"));
ROUTE870.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinLidDroop"));
Layer15.addChild(&ROUTE870);

ROUTE& ROUTE871 =  ROUTE();
ROUTE871.setFromField(CString("value_changed"));
ROUTE871.setFromNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE871.setToField(CString("weight"));
ROUTE871.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinLidDroop"));
Layer15.addChild(&ROUTE871);

ROUTE& ROUTE872 =  ROUTE();
ROUTE872.setFromField(CString("value_changed"));
ROUTE872.setFromNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE872.setToField(CString("weight"));
ROUTE872.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinLidDroop"));
Layer15.addChild(&ROUTE872);

ROUTE& ROUTE873 =  ROUTE();
ROUTE873.setFromNode(CString("JinLidDroop_Clock"));
ROUTE873.setFromField(CString("fraction_changed"));
ROUTE873.setToNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE873.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE873);

ROUTE& ROUTE874 =  ROUTE();
ROUTE874.setFromField(CString("value_changed"));
ROUTE874.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE874.setToField(CString("weight"));
ROUTE874.setToNode(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE874);

ROUTE& ROUTE875 =  ROUTE();
ROUTE875.setFromField(CString("value_changed"));
ROUTE875.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE875.setToField(CString("weight"));
ROUTE875.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE875);

ROUTE& ROUTE876 =  ROUTE();
ROUTE876.setFromField(CString("value_changed"));
ROUTE876.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE876.setToField(CString("weight"));
ROUTE876.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE876);

ROUTE& ROUTE877 =  ROUTE();
ROUTE877.setFromField(CString("value_changed"));
ROUTE877.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE877.setToField(CString("weight"));
ROUTE877.setToNode(CString("Left_pupil_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE877);

ROUTE& ROUTE878 =  ROUTE();
ROUTE878.setFromField(CString("value_changed"));
ROUTE878.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE878.setToField(CString("weight"));
ROUTE878.setToNode(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE878);

ROUTE& ROUTE879 =  ROUTE();
ROUTE879.setFromField(CString("value_changed"));
ROUTE879.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE879.setToField(CString("weight"));
ROUTE879.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE879);

ROUTE& ROUTE880 =  ROUTE();
ROUTE880.setFromField(CString("value_changed"));
ROUTE880.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE880.setToField(CString("weight"));
ROUTE880.setToNode(CString("Right_pupil_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE880);

ROUTE& ROUTE881 =  ROUTE();
ROUTE881.setFromField(CString("value_changed"));
ROUTE881.setFromNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE881.setToField(CString("weight"));
ROUTE881.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinLidTightener"));
Layer15.addChild(&ROUTE881);

ROUTE& ROUTE882 =  ROUTE();
ROUTE882.setFromNode(CString("JinLidTightener_Clock"));
ROUTE882.setFromField(CString("fraction_changed"));
ROUTE882.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE882.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE882);

ROUTE& ROUTE883 =  ROUTE();
ROUTE883.setFromField(CString("value_changed"));
ROUTE883.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE883.setToField(CString("weight"));
ROUTE883.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE883);

ROUTE& ROUTE884 =  ROUTE();
ROUTE884.setFromField(CString("value_changed"));
ROUTE884.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE884.setToField(CString("weight"));
ROUTE884.setToNode(CString("Neck_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE884);

ROUTE& ROUTE885 =  ROUTE();
ROUTE885.setFromField(CString("value_changed"));
ROUTE885.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE885.setToField(CString("weight"));
ROUTE885.setToNode(CString("Chin_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE885);

ROUTE& ROUTE886 =  ROUTE();
ROUTE886.setFromField(CString("value_changed"));
ROUTE886.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE886.setToField(CString("weight"));
ROUTE886.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE886);

ROUTE& ROUTE887 =  ROUTE();
ROUTE887.setFromField(CString("value_changed"));
ROUTE887.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE887.setToField(CString("weight"));
ROUTE887.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE887);

ROUTE& ROUTE888 =  ROUTE();
ROUTE888.setFromField(CString("value_changed"));
ROUTE888.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE888.setToField(CString("weight"));
ROUTE888.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE888);

ROUTE& ROUTE889 =  ROUTE();
ROUTE889.setFromField(CString("value_changed"));
ROUTE889.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE889.setToField(CString("weight"));
ROUTE889.setToNode(CString("Left_cheek_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE889);

ROUTE& ROUTE890 =  ROUTE();
ROUTE890.setFromField(CString("value_changed"));
ROUTE890.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE890.setToField(CString("weight"));
ROUTE890.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE890);

ROUTE& ROUTE891 =  ROUTE();
ROUTE891.setFromField(CString("value_changed"));
ROUTE891.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE891.setToField(CString("weight"));
ROUTE891.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE891);

ROUTE& ROUTE892 =  ROUTE();
ROUTE892.setFromField(CString("value_changed"));
ROUTE892.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE892.setToField(CString("weight"));
ROUTE892.setToNode(CString("Philtrum_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE892);

ROUTE& ROUTE893 =  ROUTE();
ROUTE893.setFromField(CString("value_changed"));
ROUTE893.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE893.setToField(CString("weight"));
ROUTE893.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE893);

ROUTE& ROUTE894 =  ROUTE();
ROUTE894.setFromField(CString("value_changed"));
ROUTE894.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE894.setToField(CString("weight"));
ROUTE894.setToNode(CString("Right_cheek_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE894);

ROUTE& ROUTE895 =  ROUTE();
ROUTE895.setFromField(CString("value_changed"));
ROUTE895.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE895.setToField(CString("weight"));
ROUTE895.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE895);

ROUTE& ROUTE896 =  ROUTE();
ROUTE896.setFromField(CString("value_changed"));
ROUTE896.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE896.setToField(CString("weight"));
ROUTE896.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE896);

ROUTE& ROUTE897 =  ROUTE();
ROUTE897.setFromField(CString("value_changed"));
ROUTE897.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE897.setToField(CString("weight"));
ROUTE897.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE897);

ROUTE& ROUTE898 =  ROUTE();
ROUTE898.setFromField(CString("value_changed"));
ROUTE898.setFromNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE898.setToField(CString("weight"));
ROUTE898.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerDepressor"));
Layer15.addChild(&ROUTE898);

ROUTE& ROUTE899 =  ROUTE();
ROUTE899.setFromNode(CString("JinLipCornerDepressor_Clock"));
ROUTE899.setFromField(CString("fraction_changed"));
ROUTE899.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE899.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE899);

ROUTE& ROUTE900 =  ROUTE();
ROUTE900.setFromField(CString("value_changed"));
ROUTE900.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE900.setToField(CString("weight"));
ROUTE900.setToNode(CString("Upper_teeth_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE900);

ROUTE& ROUTE901 =  ROUTE();
ROUTE901.setFromField(CString("value_changed"));
ROUTE901.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE901.setToField(CString("weight"));
ROUTE901.setToNode(CString("Left_cheek_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE901);

ROUTE& ROUTE902 =  ROUTE();
ROUTE902.setFromField(CString("value_changed"));
ROUTE902.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE902.setToField(CString("weight"));
ROUTE902.setToNode(CString("Right_cheek_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE902);

ROUTE& ROUTE903 =  ROUTE();
ROUTE903.setFromField(CString("value_changed"));
ROUTE903.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE903.setToField(CString("weight"));
ROUTE903.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE903);

ROUTE& ROUTE904 =  ROUTE();
ROUTE904.setFromField(CString("value_changed"));
ROUTE904.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE904.setToField(CString("weight"));
ROUTE904.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE904);

ROUTE& ROUTE905 =  ROUTE();
ROUTE905.setFromField(CString("value_changed"));
ROUTE905.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE905.setToField(CString("weight"));
ROUTE905.setToNode(CString("Chin_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE905);

ROUTE& ROUTE906 =  ROUTE();
ROUTE906.setFromField(CString("value_changed"));
ROUTE906.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE906.setToField(CString("weight"));
ROUTE906.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE906);

ROUTE& ROUTE907 =  ROUTE();
ROUTE907.setFromField(CString("value_changed"));
ROUTE907.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE907.setToField(CString("weight"));
ROUTE907.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE907);

ROUTE& ROUTE908 =  ROUTE();
ROUTE908.setFromField(CString("value_changed"));
ROUTE908.setFromNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE908.setToField(CString("weight"));
ROUTE908.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipCornerPuller"));
Layer15.addChild(&ROUTE908);

ROUTE& ROUTE909 =  ROUTE();
ROUTE909.setFromNode(CString("JinLipCornerPuller_Clock"));
ROUTE909.setFromField(CString("fraction_changed"));
ROUTE909.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE909.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE909);

ROUTE& ROUTE910 =  ROUTE();
ROUTE910.setFromField(CString("value_changed"));
ROUTE910.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE910.setToField(CString("weight"));
ROUTE910.setToNode(CString("Upper_teeth_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE910);

ROUTE& ROUTE911 =  ROUTE();
ROUTE911.setFromField(CString("value_changed"));
ROUTE911.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE911.setToField(CString("weight"));
ROUTE911.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE911);

ROUTE& ROUTE912 =  ROUTE();
ROUTE912.setFromField(CString("value_changed"));
ROUTE912.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE912.setToField(CString("weight"));
ROUTE912.setToNode(CString("Chin_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE912);

ROUTE& ROUTE913 =  ROUTE();
ROUTE913.setFromField(CString("value_changed"));
ROUTE913.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE913.setToField(CString("weight"));
ROUTE913.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE913);

ROUTE& ROUTE914 =  ROUTE();
ROUTE914.setFromField(CString("value_changed"));
ROUTE914.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE914.setToField(CString("weight"));
ROUTE914.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE914);

ROUTE& ROUTE915 =  ROUTE();
ROUTE915.setFromField(CString("value_changed"));
ROUTE915.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE915.setToField(CString("weight"));
ROUTE915.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE915);

ROUTE& ROUTE916 =  ROUTE();
ROUTE916.setFromField(CString("value_changed"));
ROUTE916.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE916.setToField(CString("weight"));
ROUTE916.setToNode(CString("Left_cheek_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE916);

ROUTE& ROUTE917 =  ROUTE();
ROUTE917.setFromField(CString("value_changed"));
ROUTE917.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE917.setToField(CString("weight"));
ROUTE917.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE917);

ROUTE& ROUTE918 =  ROUTE();
ROUTE918.setFromField(CString("value_changed"));
ROUTE918.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE918.setToField(CString("weight"));
ROUTE918.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE918);

ROUTE& ROUTE919 =  ROUTE();
ROUTE919.setFromField(CString("value_changed"));
ROUTE919.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE919.setToField(CString("weight"));
ROUTE919.setToNode(CString("Philtrum_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE919);

ROUTE& ROUTE920 =  ROUTE();
ROUTE920.setFromField(CString("value_changed"));
ROUTE920.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE920.setToField(CString("weight"));
ROUTE920.setToNode(CString("Right_cheek_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE920);

ROUTE& ROUTE921 =  ROUTE();
ROUTE921.setFromField(CString("value_changed"));
ROUTE921.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE921.setToField(CString("weight"));
ROUTE921.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE921);

ROUTE& ROUTE922 =  ROUTE();
ROUTE922.setFromField(CString("value_changed"));
ROUTE922.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE922.setToField(CString("weight"));
ROUTE922.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE922);

ROUTE& ROUTE923 =  ROUTE();
ROUTE923.setFromField(CString("value_changed"));
ROUTE923.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE923.setToField(CString("weight"));
ROUTE923.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE923);

ROUTE& ROUTE924 =  ROUTE();
ROUTE924.setFromField(CString("value_changed"));
ROUTE924.setFromNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE924.setToField(CString("weight"));
ROUTE924.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipFunneler"));
Layer15.addChild(&ROUTE924);

ROUTE& ROUTE925 =  ROUTE();
ROUTE925.setFromNode(CString("JinLipFunneler_Clock"));
ROUTE925.setFromField(CString("fraction_changed"));
ROUTE925.setToNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE925.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE925);

ROUTE& ROUTE926 =  ROUTE();
ROUTE926.setFromField(CString("value_changed"));
ROUTE926.setFromNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE926.setToField(CString("weight"));
ROUTE926.setToNode(CString("Chin_MorphInterpolator_JinLipPressor"));
Layer15.addChild(&ROUTE926);

ROUTE& ROUTE927 =  ROUTE();
ROUTE927.setFromField(CString("value_changed"));
ROUTE927.setFromNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE927.setToField(CString("weight"));
ROUTE927.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipPressor"));
Layer15.addChild(&ROUTE927);

ROUTE& ROUTE928 =  ROUTE();
ROUTE928.setFromField(CString("value_changed"));
ROUTE928.setFromNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE928.setToField(CString("weight"));
ROUTE928.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipPressor"));
Layer15.addChild(&ROUTE928);

ROUTE& ROUTE929 =  ROUTE();
ROUTE929.setFromField(CString("value_changed"));
ROUTE929.setFromNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE929.setToField(CString("weight"));
ROUTE929.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipPressor"));
Layer15.addChild(&ROUTE929);

ROUTE& ROUTE930 =  ROUTE();
ROUTE930.setFromNode(CString("JinLipPressor_Clock"));
ROUTE930.setFromField(CString("fraction_changed"));
ROUTE930.setToNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE930.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE930);

ROUTE& ROUTE931 =  ROUTE();
ROUTE931.setFromField(CString("value_changed"));
ROUTE931.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE931.setToField(CString("weight"));
ROUTE931.setToNode(CString("Lower_teeth_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE931);

ROUTE& ROUTE932 =  ROUTE();
ROUTE932.setFromField(CString("value_changed"));
ROUTE932.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE932.setToField(CString("weight"));
ROUTE932.setToNode(CString("Tongue_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE932);

ROUTE& ROUTE933 =  ROUTE();
ROUTE933.setFromField(CString("value_changed"));
ROUTE933.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE933.setToField(CString("weight"));
ROUTE933.setToNode(CString("Upper_teeth_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE933);

ROUTE& ROUTE934 =  ROUTE();
ROUTE934.setFromField(CString("value_changed"));
ROUTE934.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE934.setToField(CString("weight"));
ROUTE934.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE934);

ROUTE& ROUTE935 =  ROUTE();
ROUTE935.setFromField(CString("value_changed"));
ROUTE935.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE935.setToField(CString("weight"));
ROUTE935.setToNode(CString("Chin_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE935);

ROUTE& ROUTE936 =  ROUTE();
ROUTE936.setFromField(CString("value_changed"));
ROUTE936.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE936.setToField(CString("weight"));
ROUTE936.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE936);

ROUTE& ROUTE937 =  ROUTE();
ROUTE937.setFromField(CString("value_changed"));
ROUTE937.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE937.setToField(CString("weight"));
ROUTE937.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE937);

ROUTE& ROUTE938 =  ROUTE();
ROUTE938.setFromField(CString("value_changed"));
ROUTE938.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE938.setToField(CString("weight"));
ROUTE938.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE938);

ROUTE& ROUTE939 =  ROUTE();
ROUTE939.setFromField(CString("value_changed"));
ROUTE939.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE939.setToField(CString("weight"));
ROUTE939.setToNode(CString("Left_cheek_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE939);

ROUTE& ROUTE940 =  ROUTE();
ROUTE940.setFromField(CString("value_changed"));
ROUTE940.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE940.setToField(CString("weight"));
ROUTE940.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE940);

ROUTE& ROUTE941 =  ROUTE();
ROUTE941.setFromField(CString("value_changed"));
ROUTE941.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE941.setToField(CString("weight"));
ROUTE941.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE941);

ROUTE& ROUTE942 =  ROUTE();
ROUTE942.setFromField(CString("value_changed"));
ROUTE942.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE942.setToField(CString("weight"));
ROUTE942.setToNode(CString("Philtrum_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE942);

ROUTE& ROUTE943 =  ROUTE();
ROUTE943.setFromField(CString("value_changed"));
ROUTE943.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE943.setToField(CString("weight"));
ROUTE943.setToNode(CString("Right_cheek_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE943);

ROUTE& ROUTE944 =  ROUTE();
ROUTE944.setFromField(CString("value_changed"));
ROUTE944.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE944.setToField(CString("weight"));
ROUTE944.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE944);

ROUTE& ROUTE945 =  ROUTE();
ROUTE945.setFromField(CString("value_changed"));
ROUTE945.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE945.setToField(CString("weight"));
ROUTE945.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE945);

ROUTE& ROUTE946 =  ROUTE();
ROUTE946.setFromField(CString("value_changed"));
ROUTE946.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE946.setToField(CString("weight"));
ROUTE946.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE946);

ROUTE& ROUTE947 =  ROUTE();
ROUTE947.setFromField(CString("value_changed"));
ROUTE947.setFromNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE947.setToField(CString("weight"));
ROUTE947.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipPuckerer"));
Layer15.addChild(&ROUTE947);

ROUTE& ROUTE948 =  ROUTE();
ROUTE948.setFromNode(CString("JinLipPuckerer_Clock"));
ROUTE948.setFromField(CString("fraction_changed"));
ROUTE948.setToNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE948.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE948);

ROUTE& ROUTE949 =  ROUTE();
ROUTE949.setFromField(CString("value_changed"));
ROUTE949.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE949.setToField(CString("weight"));
ROUTE949.setToNode(CString("Upper_teeth_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE949);

ROUTE& ROUTE950 =  ROUTE();
ROUTE950.setFromField(CString("value_changed"));
ROUTE950.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE950.setToField(CString("weight"));
ROUTE950.setToNode(CString("Chin_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE950);

ROUTE& ROUTE951 =  ROUTE();
ROUTE951.setFromField(CString("value_changed"));
ROUTE951.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE951.setToField(CString("weight"));
ROUTE951.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE951);

ROUTE& ROUTE952 =  ROUTE();
ROUTE952.setFromField(CString("value_changed"));
ROUTE952.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE952.setToField(CString("weight"));
ROUTE952.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE952);

ROUTE& ROUTE953 =  ROUTE();
ROUTE953.setFromField(CString("value_changed"));
ROUTE953.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE953.setToField(CString("weight"));
ROUTE953.setToNode(CString("Left_cheek_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE953);

ROUTE& ROUTE954 =  ROUTE();
ROUTE954.setFromField(CString("value_changed"));
ROUTE954.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE954.setToField(CString("weight"));
ROUTE954.setToNode(CString("Right_cheek_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE954);

ROUTE& ROUTE955 =  ROUTE();
ROUTE955.setFromField(CString("value_changed"));
ROUTE955.setFromNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE955.setToField(CString("weight"));
ROUTE955.setToNode(CString("__4_MorphInterpolator_JinLipsPart"));
Layer15.addChild(&ROUTE955);

ROUTE& ROUTE956 =  ROUTE();
ROUTE956.setFromNode(CString("JinLipsPart_Clock"));
ROUTE956.setFromField(CString("fraction_changed"));
ROUTE956.setToNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE956.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE956);

ROUTE& ROUTE957 =  ROUTE();
ROUTE957.setFromField(CString("value_changed"));
ROUTE957.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE957.setToField(CString("weight"));
ROUTE957.setToNode(CString("Lower_teeth_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE957);

ROUTE& ROUTE958 =  ROUTE();
ROUTE958.setFromField(CString("value_changed"));
ROUTE958.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE958.setToField(CString("weight"));
ROUTE958.setToNode(CString("Neck_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE958);

ROUTE& ROUTE959 =  ROUTE();
ROUTE959.setFromField(CString("value_changed"));
ROUTE959.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE959.setToField(CString("weight"));
ROUTE959.setToNode(CString("Chin_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE959);

ROUTE& ROUTE960 =  ROUTE();
ROUTE960.setFromField(CString("value_changed"));
ROUTE960.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE960.setToField(CString("weight"));
ROUTE960.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE960);

ROUTE& ROUTE961 =  ROUTE();
ROUTE961.setFromField(CString("value_changed"));
ROUTE961.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE961.setToField(CString("weight"));
ROUTE961.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE961);

ROUTE& ROUTE962 =  ROUTE();
ROUTE962.setFromField(CString("value_changed"));
ROUTE962.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE962.setToField(CString("weight"));
ROUTE962.setToNode(CString("Left_cheek_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE962);

ROUTE& ROUTE963 =  ROUTE();
ROUTE963.setFromField(CString("value_changed"));
ROUTE963.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE963.setToField(CString("weight"));
ROUTE963.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE963);

ROUTE& ROUTE964 =  ROUTE();
ROUTE964.setFromField(CString("value_changed"));
ROUTE964.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE964.setToField(CString("weight"));
ROUTE964.setToNode(CString("Right_cheek_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE964);

ROUTE& ROUTE965 =  ROUTE();
ROUTE965.setFromField(CString("value_changed"));
ROUTE965.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE965.setToField(CString("weight"));
ROUTE965.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE965);

ROUTE& ROUTE966 =  ROUTE();
ROUTE966.setFromField(CString("value_changed"));
ROUTE966.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE966.setToField(CString("weight"));
ROUTE966.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE966);

ROUTE& ROUTE967 =  ROUTE();
ROUTE967.setFromField(CString("value_changed"));
ROUTE967.setFromNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE967.setToField(CString("weight"));
ROUTE967.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipStretcher"));
Layer15.addChild(&ROUTE967);

ROUTE& ROUTE968 =  ROUTE();
ROUTE968.setFromNode(CString("JinLipStretcher_Clock"));
ROUTE968.setFromField(CString("fraction_changed"));
ROUTE968.setToNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE968.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE968);

ROUTE& ROUTE969 =  ROUTE();
ROUTE969.setFromField(CString("value_changed"));
ROUTE969.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE969.setToField(CString("weight"));
ROUTE969.setToNode(CString("Upper_teeth_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE969);

ROUTE& ROUTE970 =  ROUTE();
ROUTE970.setFromField(CString("value_changed"));
ROUTE970.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE970.setToField(CString("weight"));
ROUTE970.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE970);

ROUTE& ROUTE971 =  ROUTE();
ROUTE971.setFromField(CString("value_changed"));
ROUTE971.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE971.setToField(CString("weight"));
ROUTE971.setToNode(CString("Chin_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE971);

ROUTE& ROUTE972 =  ROUTE();
ROUTE972.setFromField(CString("value_changed"));
ROUTE972.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE972.setToField(CString("weight"));
ROUTE972.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE972);

ROUTE& ROUTE973 =  ROUTE();
ROUTE973.setFromField(CString("value_changed"));
ROUTE973.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE973.setToField(CString("weight"));
ROUTE973.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE973);

ROUTE& ROUTE974 =  ROUTE();
ROUTE974.setFromField(CString("value_changed"));
ROUTE974.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE974.setToField(CString("weight"));
ROUTE974.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE974);

ROUTE& ROUTE975 =  ROUTE();
ROUTE975.setFromField(CString("value_changed"));
ROUTE975.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE975.setToField(CString("weight"));
ROUTE975.setToNode(CString("Left_cheek_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE975);

ROUTE& ROUTE976 =  ROUTE();
ROUTE976.setFromField(CString("value_changed"));
ROUTE976.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE976.setToField(CString("weight"));
ROUTE976.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE976);

ROUTE& ROUTE977 =  ROUTE();
ROUTE977.setFromField(CString("value_changed"));
ROUTE977.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE977.setToField(CString("weight"));
ROUTE977.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE977);

ROUTE& ROUTE978 =  ROUTE();
ROUTE978.setFromField(CString("value_changed"));
ROUTE978.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE978.setToField(CString("weight"));
ROUTE978.setToNode(CString("Philtrum_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE978);

ROUTE& ROUTE979 =  ROUTE();
ROUTE979.setFromField(CString("value_changed"));
ROUTE979.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE979.setToField(CString("weight"));
ROUTE979.setToNode(CString("Right_cheek_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE979);

ROUTE& ROUTE980 =  ROUTE();
ROUTE980.setFromField(CString("value_changed"));
ROUTE980.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE980.setToField(CString("weight"));
ROUTE980.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE980);

ROUTE& ROUTE981 =  ROUTE();
ROUTE981.setFromField(CString("value_changed"));
ROUTE981.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE981.setToField(CString("weight"));
ROUTE981.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE981);

ROUTE& ROUTE982 =  ROUTE();
ROUTE982.setFromField(CString("value_changed"));
ROUTE982.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE982.setToField(CString("weight"));
ROUTE982.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE982);

ROUTE& ROUTE983 =  ROUTE();
ROUTE983.setFromField(CString("value_changed"));
ROUTE983.setFromNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE983.setToField(CString("weight"));
ROUTE983.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipSuck"));
Layer15.addChild(&ROUTE983);

ROUTE& ROUTE984 =  ROUTE();
ROUTE984.setFromNode(CString("JinLipSuck_Clock"));
ROUTE984.setFromField(CString("fraction_changed"));
ROUTE984.setToNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE984.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE984);

ROUTE& ROUTE985 =  ROUTE();
ROUTE985.setFromField(CString("value_changed"));
ROUTE985.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE985.setToField(CString("weight"));
ROUTE985.setToNode(CString("Upper_teeth_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE985);

ROUTE& ROUTE986 =  ROUTE();
ROUTE986.setFromField(CString("value_changed"));
ROUTE986.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE986.setToField(CString("weight"));
ROUTE986.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE986);

ROUTE& ROUTE987 =  ROUTE();
ROUTE987.setFromField(CString("value_changed"));
ROUTE987.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE987.setToField(CString("weight"));
ROUTE987.setToNode(CString("Chin_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE987);

ROUTE& ROUTE988 =  ROUTE();
ROUTE988.setFromField(CString("value_changed"));
ROUTE988.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE988.setToField(CString("weight"));
ROUTE988.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE988);

ROUTE& ROUTE989 =  ROUTE();
ROUTE989.setFromField(CString("value_changed"));
ROUTE989.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE989.setToField(CString("weight"));
ROUTE989.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE989);

ROUTE& ROUTE990 =  ROUTE();
ROUTE990.setFromField(CString("value_changed"));
ROUTE990.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE990.setToField(CString("weight"));
ROUTE990.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE990);

ROUTE& ROUTE991 =  ROUTE();
ROUTE991.setFromField(CString("value_changed"));
ROUTE991.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE991.setToField(CString("weight"));
ROUTE991.setToNode(CString("Left_cheek_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE991);

ROUTE& ROUTE992 =  ROUTE();
ROUTE992.setFromField(CString("value_changed"));
ROUTE992.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE992.setToField(CString("weight"));
ROUTE992.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE992);

ROUTE& ROUTE993 =  ROUTE();
ROUTE993.setFromField(CString("value_changed"));
ROUTE993.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE993.setToField(CString("weight"));
ROUTE993.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE993);

ROUTE& ROUTE994 =  ROUTE();
ROUTE994.setFromField(CString("value_changed"));
ROUTE994.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE994.setToField(CString("weight"));
ROUTE994.setToNode(CString("Philtrum_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE994);

ROUTE& ROUTE995 =  ROUTE();
ROUTE995.setFromField(CString("value_changed"));
ROUTE995.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE995.setToField(CString("weight"));
ROUTE995.setToNode(CString("Right_cheek_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE995);

ROUTE& ROUTE996 =  ROUTE();
ROUTE996.setFromField(CString("value_changed"));
ROUTE996.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE996.setToField(CString("weight"));
ROUTE996.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE996);

ROUTE& ROUTE997 =  ROUTE();
ROUTE997.setFromField(CString("value_changed"));
ROUTE997.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE997.setToField(CString("weight"));
ROUTE997.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE997);

ROUTE& ROUTE998 =  ROUTE();
ROUTE998.setFromField(CString("value_changed"));
ROUTE998.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE998.setToField(CString("weight"));
ROUTE998.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE998);

ROUTE& ROUTE999 =  ROUTE();
ROUTE999.setFromField(CString("value_changed"));
ROUTE999.setFromNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE999.setToField(CString("weight"));
ROUTE999.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLipTightener"));
Layer15.addChild(&ROUTE999);

ROUTE& ROUTE1000 =  ROUTE();
ROUTE1000.setFromNode(CString("JinLipTightener_Clock"));
ROUTE1000.setFromField(CString("fraction_changed"));
ROUTE1000.setToNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE1000.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1000);

ROUTE& ROUTE1001 =  ROUTE();
ROUTE1001.setFromField(CString("value_changed"));
ROUTE1001.setFromNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1001.setToField(CString("weight"));
ROUTE1001.setToNode(CString("Lower_teeth_MorphInterpolator_JinLowerLipDepressor"));
Layer15.addChild(&ROUTE1001);

ROUTE& ROUTE1002 =  ROUTE();
ROUTE1002.setFromField(CString("value_changed"));
ROUTE1002.setFromNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1002.setToField(CString("weight"));
ROUTE1002.setToNode(CString("Neck_MorphInterpolator_JinLowerLipDepressor"));
Layer15.addChild(&ROUTE1002);

ROUTE& ROUTE1003 =  ROUTE();
ROUTE1003.setFromField(CString("value_changed"));
ROUTE1003.setFromNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1003.setToField(CString("weight"));
ROUTE1003.setToNode(CString("Chin_MorphInterpolator_JinLowerLipDepressor"));
Layer15.addChild(&ROUTE1003);

ROUTE& ROUTE1004 =  ROUTE();
ROUTE1004.setFromField(CString("value_changed"));
ROUTE1004.setFromNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1004.setToField(CString("weight"));
ROUTE1004.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"));
Layer15.addChild(&ROUTE1004);

ROUTE& ROUTE1005 =  ROUTE();
ROUTE1005.setFromField(CString("value_changed"));
ROUTE1005.setFromNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1005.setToField(CString("weight"));
ROUTE1005.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"));
Layer15.addChild(&ROUTE1005);

ROUTE& ROUTE1006 =  ROUTE();
ROUTE1006.setFromField(CString("value_changed"));
ROUTE1006.setFromNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1006.setToField(CString("weight"));
ROUTE1006.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinLowerLipDepressor"));
Layer15.addChild(&ROUTE1006);

ROUTE& ROUTE1007 =  ROUTE();
ROUTE1007.setFromNode(CString("JinLowerLipDepressor_Clock"));
ROUTE1007.setFromField(CString("fraction_changed"));
ROUTE1007.setToNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1007.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1007);

ROUTE& ROUTE1008 =  ROUTE();
ROUTE1008.setFromField(CString("value_changed"));
ROUTE1008.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1008.setToField(CString("weight"));
ROUTE1008.setToNode(CString("Lower_teeth_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1008);

ROUTE& ROUTE1009 =  ROUTE();
ROUTE1009.setFromField(CString("value_changed"));
ROUTE1009.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1009.setToField(CString("weight"));
ROUTE1009.setToNode(CString("Tongue_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1009);

ROUTE& ROUTE1010 =  ROUTE();
ROUTE1010.setFromField(CString("value_changed"));
ROUTE1010.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1010.setToField(CString("weight"));
ROUTE1010.setToNode(CString("Upper_teeth_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1010);

ROUTE& ROUTE1011 =  ROUTE();
ROUTE1011.setFromField(CString("value_changed"));
ROUTE1011.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1011.setToField(CString("weight"));
ROUTE1011.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1011);

ROUTE& ROUTE1012 =  ROUTE();
ROUTE1012.setFromField(CString("value_changed"));
ROUTE1012.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1012.setToField(CString("weight"));
ROUTE1012.setToNode(CString("Chin_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1012);

ROUTE& ROUTE1013 =  ROUTE();
ROUTE1013.setFromField(CString("value_changed"));
ROUTE1013.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1013.setToField(CString("weight"));
ROUTE1013.setToNode(CString("Left_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1013);

ROUTE& ROUTE1014 =  ROUTE();
ROUTE1014.setFromField(CString("value_changed"));
ROUTE1014.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1014.setToField(CString("weight"));
ROUTE1014.setToNode(CString("Center_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1014);

ROUTE& ROUTE1015 =  ROUTE();
ROUTE1015.setFromField(CString("value_changed"));
ROUTE1015.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1015.setToField(CString("weight"));
ROUTE1015.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1015);

ROUTE& ROUTE1016 =  ROUTE();
ROUTE1016.setFromField(CString("value_changed"));
ROUTE1016.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1016.setToField(CString("weight"));
ROUTE1016.setToNode(CString("Left_cheek_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1016);

ROUTE& ROUTE1017 =  ROUTE();
ROUTE1017.setFromField(CString("value_changed"));
ROUTE1017.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1017.setToField(CString("weight"));
ROUTE1017.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1017);

ROUTE& ROUTE1018 =  ROUTE();
ROUTE1018.setFromField(CString("value_changed"));
ROUTE1018.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1018.setToField(CString("weight"));
ROUTE1018.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1018);

ROUTE& ROUTE1019 =  ROUTE();
ROUTE1019.setFromField(CString("value_changed"));
ROUTE1019.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1019.setToField(CString("weight"));
ROUTE1019.setToNode(CString("Philtrum_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1019);

ROUTE& ROUTE1020 =  ROUTE();
ROUTE1020.setFromField(CString("value_changed"));
ROUTE1020.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1020.setToField(CString("weight"));
ROUTE1020.setToNode(CString("Right_cheek_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1020);

ROUTE& ROUTE1021 =  ROUTE();
ROUTE1021.setFromField(CString("value_changed"));
ROUTE1021.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1021.setToField(CString("weight"));
ROUTE1021.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1021);

ROUTE& ROUTE1022 =  ROUTE();
ROUTE1022.setFromField(CString("value_changed"));
ROUTE1022.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1022.setToField(CString("weight"));
ROUTE1022.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1022);

ROUTE& ROUTE1023 =  ROUTE();
ROUTE1023.setFromField(CString("value_changed"));
ROUTE1023.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1023.setToField(CString("weight"));
ROUTE1023.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1023);

ROUTE& ROUTE1024 =  ROUTE();
ROUTE1024.setFromField(CString("value_changed"));
ROUTE1024.setFromNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1024.setToField(CString("weight"));
ROUTE1024.setToNode(CString("Right_lower_vermillion_lip_MorphInterpolator_JinMouthStretch"));
Layer15.addChild(&ROUTE1024);

ROUTE& ROUTE1025 =  ROUTE();
ROUTE1025.setFromNode(CString("JinMouthStretch_Clock"));
ROUTE1025.setFromField(CString("fraction_changed"));
ROUTE1025.setToNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1025.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1025);

ROUTE& ROUTE1026 =  ROUTE();
ROUTE1026.setFromField(CString("value_changed"));
ROUTE1026.setFromNode(CString("AnimationAdapter_JinNasolabialDeepener"));
ROUTE1026.setToField(CString("weight"));
ROUTE1026.setToNode(CString("Nasal_tip_MorphInterpolator_JinNasolabialDeepener"));
Layer15.addChild(&ROUTE1026);

ROUTE& ROUTE1027 =  ROUTE();
ROUTE1027.setFromField(CString("value_changed"));
ROUTE1027.setFromNode(CString("AnimationAdapter_JinNasolabialDeepener"));
ROUTE1027.setToField(CString("weight"));
ROUTE1027.setToNode(CString("Left_nostril_MorphInterpolator_JinNasolabialDeepener"));
Layer15.addChild(&ROUTE1027);

ROUTE& ROUTE1028 =  ROUTE();
ROUTE1028.setFromField(CString("value_changed"));
ROUTE1028.setFromNode(CString("AnimationAdapter_JinNasolabialDeepener"));
ROUTE1028.setToField(CString("weight"));
ROUTE1028.setToNode(CString("Right_nostril_MorphInterpolator_JinNasolabialDeepener"));
Layer15.addChild(&ROUTE1028);

ROUTE& ROUTE1029 =  ROUTE();
ROUTE1029.setFromNode(CString("JinNasolabialDeepener_Clock"));
ROUTE1029.setFromField(CString("fraction_changed"));
ROUTE1029.setToNode(CString("AnimationAdapter_JinNasolabialDeepener"));
ROUTE1029.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1029);

ROUTE& ROUTE1030 =  ROUTE();
ROUTE1030.setFromField(CString("value_changed"));
ROUTE1030.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1030.setToField(CString("weight"));
ROUTE1030.setToNode(CString("Upper_teeth_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1030);

ROUTE& ROUTE1031 =  ROUTE();
ROUTE1031.setFromField(CString("value_changed"));
ROUTE1031.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1031.setToField(CString("weight"));
ROUTE1031.setToNode(CString("Left_nostril_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1031);

ROUTE& ROUTE1032 =  ROUTE();
ROUTE1032.setFromField(CString("value_changed"));
ROUTE1032.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1032.setToField(CString("weight"));
ROUTE1032.setToNode(CString("Left_dorsum_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1032);

ROUTE& ROUTE1033 =  ROUTE();
ROUTE1033.setFromField(CString("value_changed"));
ROUTE1033.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1033.setToField(CString("weight"));
ROUTE1033.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1033);

ROUTE& ROUTE1034 =  ROUTE();
ROUTE1034.setFromField(CString("value_changed"));
ROUTE1034.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1034.setToField(CString("weight"));
ROUTE1034.setToNode(CString("Left_cheek_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1034);

ROUTE& ROUTE1035 =  ROUTE();
ROUTE1035.setFromField(CString("value_changed"));
ROUTE1035.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1035.setToField(CString("weight"));
ROUTE1035.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1035);

ROUTE& ROUTE1036 =  ROUTE();
ROUTE1036.setFromField(CString("value_changed"));
ROUTE1036.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1036.setToField(CString("weight"));
ROUTE1036.setToNode(CString("Right_cheek_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1036);

ROUTE& ROUTE1037 =  ROUTE();
ROUTE1037.setFromField(CString("value_changed"));
ROUTE1037.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1037.setToField(CString("weight"));
ROUTE1037.setToNode(CString("Right_dorsum_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1037);

ROUTE& ROUTE1038 =  ROUTE();
ROUTE1038.setFromField(CString("value_changed"));
ROUTE1038.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1038.setToField(CString("weight"));
ROUTE1038.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1038);

ROUTE& ROUTE1039 =  ROUTE();
ROUTE1039.setFromField(CString("value_changed"));
ROUTE1039.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1039.setToField(CString("weight"));
ROUTE1039.setToNode(CString("Right_nostril_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1039);

ROUTE& ROUTE1040 =  ROUTE();
ROUTE1040.setFromField(CString("value_changed"));
ROUTE1040.setFromNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1040.setToField(CString("weight"));
ROUTE1040.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinNoseWrinkler"));
Layer15.addChild(&ROUTE1040);

ROUTE& ROUTE1041 =  ROUTE();
ROUTE1041.setFromNode(CString("JinNoseWrinkler_Clock"));
ROUTE1041.setFromField(CString("fraction_changed"));
ROUTE1041.setToNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1041.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1041);

ROUTE& ROUTE1042 =  ROUTE();
ROUTE1042.setFromField(CString("value_changed"));
ROUTE1042.setFromNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1042.setToField(CString("weight"));
ROUTE1042.setToNode(CString("Right_forehead_MorphInterpolator_JinOuterBrowRaiser"));
Layer15.addChild(&ROUTE1042);

ROUTE& ROUTE1043 =  ROUTE();
ROUTE1043.setFromField(CString("value_changed"));
ROUTE1043.setFromNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1043.setToField(CString("weight"));
ROUTE1043.setToNode(CString("Right_eyebrow_MorphInterpolator_JinOuterBrowRaiser"));
Layer15.addChild(&ROUTE1043);

ROUTE& ROUTE1044 =  ROUTE();
ROUTE1044.setFromField(CString("value_changed"));
ROUTE1044.setFromNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1044.setToField(CString("weight"));
ROUTE1044.setToNode(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinOuterBrowRaiser"));
Layer15.addChild(&ROUTE1044);

ROUTE& ROUTE1045 =  ROUTE();
ROUTE1045.setFromField(CString("value_changed"));
ROUTE1045.setFromNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1045.setToField(CString("weight"));
ROUTE1045.setToNode(CString("Right_temple_MorphInterpolator_JinOuterBrowRaiser"));
Layer15.addChild(&ROUTE1045);

ROUTE& ROUTE1046 =  ROUTE();
ROUTE1046.setFromField(CString("value_changed"));
ROUTE1046.setFromNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1046.setToField(CString("weight"));
ROUTE1046.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinOuterBrowRaiser"));
Layer15.addChild(&ROUTE1046);

ROUTE& ROUTE1047 =  ROUTE();
ROUTE1047.setFromNode(CString("JinOuterBrowRaiser_Clock"));
ROUTE1047.setFromField(CString("fraction_changed"));
ROUTE1047.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1047.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1047);

ROUTE& ROUTE1048 =  ROUTE();
ROUTE1048.setFromField(CString("value_changed"));
ROUTE1048.setFromNode(CString("AnimationAdapter_JinSlit"));
ROUTE1048.setToField(CString("weight"));
ROUTE1048.setToNode(CString("Upper_teeth_MorphInterpolator_JinSlit"));
Layer15.addChild(&ROUTE1048);

ROUTE& ROUTE1049 =  ROUTE();
ROUTE1049.setFromField(CString("value_changed"));
ROUTE1049.setFromNode(CString("AnimationAdapter_JinSlit"));
ROUTE1049.setToField(CString("weight"));
ROUTE1049.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinSlit"));
Layer15.addChild(&ROUTE1049);

ROUTE& ROUTE1050 =  ROUTE();
ROUTE1050.setFromField(CString("value_changed"));
ROUTE1050.setFromNode(CString("AnimationAdapter_JinSlit"));
ROUTE1050.setToField(CString("weight"));
ROUTE1050.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinSlit"));
Layer15.addChild(&ROUTE1050);

ROUTE& ROUTE1051 =  ROUTE();
ROUTE1051.setFromNode(CString("JinSlit_Clock"));
ROUTE1051.setFromField(CString("fraction_changed"));
ROUTE1051.setToNode(CString("AnimationAdapter_JinSlit"));
ROUTE1051.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1051);

ROUTE& ROUTE1052 =  ROUTE();
ROUTE1052.setFromField(CString("value_changed"));
ROUTE1052.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1052.setToField(CString("weight"));
ROUTE1052.setToNode(CString("Left_eyebrow_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1052);

ROUTE& ROUTE1053 =  ROUTE();
ROUTE1053.setFromField(CString("value_changed"));
ROUTE1053.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1053.setToField(CString("weight"));
ROUTE1053.setToNode(CString("Left_temple_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1053);

ROUTE& ROUTE1054 =  ROUTE();
ROUTE1054.setFromField(CString("value_changed"));
ROUTE1054.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1054.setToField(CString("weight"));
ROUTE1054.setToNode(CString("Right_eyebrow_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1054);

ROUTE& ROUTE1055 =  ROUTE();
ROUTE1055.setFromField(CString("value_changed"));
ROUTE1055.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1055.setToField(CString("weight"));
ROUTE1055.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1055);

ROUTE& ROUTE1056 =  ROUTE();
ROUTE1056.setFromField(CString("value_changed"));
ROUTE1056.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1056.setToField(CString("weight"));
ROUTE1056.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1056);

ROUTE& ROUTE1057 =  ROUTE();
ROUTE1057.setFromField(CString("value_changed"));
ROUTE1057.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1057.setToField(CString("weight"));
ROUTE1057.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1057);

ROUTE& ROUTE1058 =  ROUTE();
ROUTE1058.setFromField(CString("value_changed"));
ROUTE1058.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1058.setToField(CString("weight"));
ROUTE1058.setToNode(CString("Right_temple_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1058);

ROUTE& ROUTE1059 =  ROUTE();
ROUTE1059.setFromField(CString("value_changed"));
ROUTE1059.setFromNode(CString("AnimationAdapter_JinSquint"));
ROUTE1059.setToField(CString("weight"));
ROUTE1059.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinSquint"));
Layer15.addChild(&ROUTE1059);

ROUTE& ROUTE1060 =  ROUTE();
ROUTE1060.setFromNode(CString("JinSquint_Clock"));
ROUTE1060.setFromField(CString("fraction_changed"));
ROUTE1060.setToNode(CString("AnimationAdapter_JinSquint"));
ROUTE1060.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1060);

ROUTE& ROUTE1061 =  ROUTE();
ROUTE1061.setFromField(CString("value_changed"));
ROUTE1061.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1061.setToField(CString("weight"));
ROUTE1061.setToNode(CString("Left_eyebrow_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1061);

ROUTE& ROUTE1062 =  ROUTE();
ROUTE1062.setFromField(CString("value_changed"));
ROUTE1062.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1062.setToField(CString("weight"));
ROUTE1062.setToNode(CString("Left_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1062);

ROUTE& ROUTE1063 =  ROUTE();
ROUTE1063.setFromField(CString("value_changed"));
ROUTE1063.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1063.setToField(CString("weight"));
ROUTE1063.setToNode(CString("Right_eyebrow_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1063);

ROUTE& ROUTE1064 =  ROUTE();
ROUTE1064.setFromField(CString("value_changed"));
ROUTE1064.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1064.setToField(CString("weight"));
ROUTE1064.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1064);

ROUTE& ROUTE1065 =  ROUTE();
ROUTE1065.setFromField(CString("value_changed"));
ROUTE1065.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1065.setToField(CString("weight"));
ROUTE1065.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1065);

ROUTE& ROUTE1066 =  ROUTE();
ROUTE1066.setFromField(CString("value_changed"));
ROUTE1066.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1066.setToField(CString("weight"));
ROUTE1066.setToNode(CString("Left_pupil_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1066);

ROUTE& ROUTE1067 =  ROUTE();
ROUTE1067.setFromField(CString("value_changed"));
ROUTE1067.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1067.setToField(CString("weight"));
ROUTE1067.setToNode(CString("Right_bulbar_conjunctiva_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1067);

ROUTE& ROUTE1068 =  ROUTE();
ROUTE1068.setFromField(CString("value_changed"));
ROUTE1068.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1068.setToField(CString("weight"));
ROUTE1068.setToNode(CString("Right_lower_eyelid_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1068);

ROUTE& ROUTE1069 =  ROUTE();
ROUTE1069.setFromField(CString("value_changed"));
ROUTE1069.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1069.setToField(CString("weight"));
ROUTE1069.setToNode(CString("Right_pupil_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1069);

ROUTE& ROUTE1070 =  ROUTE();
ROUTE1070.setFromField(CString("value_changed"));
ROUTE1070.setFromNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1070.setToField(CString("weight"));
ROUTE1070.setToNode(CString("Right_upper_eyelid_MorphInterpolator_JinUpperLidRaiser"));
Layer15.addChild(&ROUTE1070);

ROUTE& ROUTE1071 =  ROUTE();
ROUTE1071.setFromNode(CString("JinUpperLidRaiser_Clock"));
ROUTE1071.setFromField(CString("fraction_changed"));
ROUTE1071.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1071.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1071);

ROUTE& ROUTE1072 =  ROUTE();
ROUTE1072.setFromField(CString("value_changed"));
ROUTE1072.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1072.setToField(CString("weight"));
ROUTE1072.setToNode(CString("Mid_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1072);

ROUTE& ROUTE1073 =  ROUTE();
ROUTE1073.setFromField(CString("value_changed"));
ROUTE1073.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1073.setToField(CString("weight"));
ROUTE1073.setToNode(CString("Left_nostril_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1073);

ROUTE& ROUTE1074 =  ROUTE();
ROUTE1074.setFromField(CString("value_changed"));
ROUTE1074.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1074.setToField(CString("weight"));
ROUTE1074.setToNode(CString("Left_dorsum_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1074);

ROUTE& ROUTE1075 =  ROUTE();
ROUTE1075.setFromField(CString("value_changed"));
ROUTE1075.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1075.setToField(CString("weight"));
ROUTE1075.setToNode(CString("Left_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1075);

ROUTE& ROUTE1076 =  ROUTE();
ROUTE1076.setFromField(CString("value_changed"));
ROUTE1076.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1076.setToField(CString("weight"));
ROUTE1076.setToNode(CString("Left_cheek_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1076);

ROUTE& ROUTE1077 =  ROUTE();
ROUTE1077.setFromField(CString("value_changed"));
ROUTE1077.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1077.setToField(CString("weight"));
ROUTE1077.setToNode(CString("Left_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1077);

ROUTE& ROUTE1078 =  ROUTE();
ROUTE1078.setFromField(CString("value_changed"));
ROUTE1078.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1078.setToField(CString("weight"));
ROUTE1078.setToNode(CString("Left_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1078);

ROUTE& ROUTE1079 =  ROUTE();
ROUTE1079.setFromField(CString("value_changed"));
ROUTE1079.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1079.setToField(CString("weight"));
ROUTE1079.setToNode(CString("Philtrum_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1079);

ROUTE& ROUTE1080 =  ROUTE();
ROUTE1080.setFromField(CString("value_changed"));
ROUTE1080.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1080.setToField(CString("weight"));
ROUTE1080.setToNode(CString("Right_cheek_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1080);

ROUTE& ROUTE1081 =  ROUTE();
ROUTE1081.setFromField(CString("value_changed"));
ROUTE1081.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1081.setToField(CString("weight"));
ROUTE1081.setToNode(CString("Right_dorsum_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1081);

ROUTE& ROUTE1082 =  ROUTE();
ROUTE1082.setFromField(CString("value_changed"));
ROUTE1082.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1082.setToField(CString("weight"));
ROUTE1082.setToNode(CString("Right_nasolabial_cheek_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1082);

ROUTE& ROUTE1083 =  ROUTE();
ROUTE1083.setFromField(CString("value_changed"));
ROUTE1083.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1083.setToField(CString("weight"));
ROUTE1083.setToNode(CString("Right_nostril_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1083);

ROUTE& ROUTE1084 =  ROUTE();
ROUTE1084.setFromField(CString("value_changed"));
ROUTE1084.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1084.setToField(CString("weight"));
ROUTE1084.setToNode(CString("Right_upper_cutaneous_lip_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1084);

ROUTE& ROUTE1085 =  ROUTE();
ROUTE1085.setFromField(CString("value_changed"));
ROUTE1085.setFromNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1085.setToField(CString("weight"));
ROUTE1085.setToNode(CString("Right_upper_vermillion_lip_MorphInterpolator_JinUpperLipRaiser"));
Layer15.addChild(&ROUTE1085);

ROUTE& ROUTE1086 =  ROUTE();
ROUTE1086.setFromNode(CString("JinUpperLipRaiser_Clock"));
ROUTE1086.setFromField(CString("fraction_changed"));
ROUTE1086.setToNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1086.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1086);

ROUTE& ROUTE1087 =  ROUTE();
ROUTE1087.setFromField(CString("value_changed"));
ROUTE1087.setFromNode(CString("AnimationAdapter_JinWink"));
ROUTE1087.setToField(CString("weight"));
ROUTE1087.setToNode(CString("Left_upper_eyelid_MorphInterpolator_JinWink"));
Layer15.addChild(&ROUTE1087);

ROUTE& ROUTE1088 =  ROUTE();
ROUTE1088.setFromField(CString("value_changed"));
ROUTE1088.setFromNode(CString("AnimationAdapter_JinWink"));
ROUTE1088.setToField(CString("weight"));
ROUTE1088.setToNode(CString("Left_lower_eyelid_MorphInterpolator_JinWink"));
Layer15.addChild(&ROUTE1088);

ROUTE& ROUTE1089 =  ROUTE();
ROUTE1089.setFromNode(CString("JinWink_Clock"));
ROUTE1089.setFromField(CString("fraction_changed"));
ROUTE1089.setToNode(CString("AnimationAdapter_JinWink"));
ROUTE1089.setToField(CString("set_fraction"));
Layer15.addChild(&ROUTE1089);

WorldInfo& WorldInfo1090 =  WorldInfo();
WorldInfo1090.setTitle(CString("CleanedYouClocks.x3d"));
Layer15.addChild(&WorldInfo1090);

LayerSet14.addChild(&Layer15);

Layer& Layer1091 =  Layer();
Layer1091.setDEF(CString("Menu"));
Layer1091.setPickable(true);
Layer1091.setObjectType(new CString[]{CString("ALL")}, 1);
Viewpoint& Viewpoint1092 =  Viewpoint();
Viewpoint1092.setPosition(new float[]{0.0,20.0,110.0});
Layer1091.addChild(&Viewpoint1092);

ProtoDeclare& ProtoDeclare1093 =  ProtoDeclare();
ProtoDeclare1093.setName(CString("MenuItem"));
ProtoInterface& ProtoInterface1094 =  ProtoInterface();
field& field1095 =  field();
field1095.setName(CString("translation"));
field1095.setAccessType(CString("inputOutput"));
field1095.setType(CString("SFVec3f"));
ProtoInterface1094.addChild(&field1095);

field& field1096 =  field();
field1096.setName(CString("textTranslation"));
field1096.setAccessType(CString("inputOutput"));
field1096.setType(CString("SFVec3f"));
ProtoInterface1094.addChild(&field1096);

field& field1097 =  field();
field1097.setName(CString("description"));
field1097.setAccessType(CString("inputOutput"));
field1097.setType(CString("SFString"));
ProtoInterface1094.addChild(&field1097);

field& field1098 =  field();
field1098.setName(CString("menuItemString"));
field1098.setAccessType(CString("inputOutput"));
field1098.setType(CString("MFString"));
ProtoInterface1094.addChild(&field1098);

field& field1099 =  field();
field1099.setName(CString("startTime"));
field1099.setAccessType(CString("outputOnly"));
field1099.setType(CString("SFTime"));
field1099.setValue(CString("-1"));
ProtoInterface1094.addChild(&field1099);

field& field1100 =  field();
field1100.setName(CString("stopTime"));
field1100.setAccessType(CString("outputOnly"));
field1100.setType(CString("SFTime"));
field1100.setValue(CString("-1"));
ProtoInterface1094.addChild(&field1100);

field& field1101 =  field();
field1101.setName(CString("enabled"));
field1101.setAccessType(CString("outputOnly"));
field1101.setType(CString("SFBool"));
field1101.setValue(CString("false"));
ProtoInterface1094.addChild(&field1101);

field& field1102 =  field();
field1102.setName(CString("untoggle"));
field1102.setAccessType(CString("inputOnly"));
field1102.setType(CString("SFBool"));
field1102.setValue(CString("false"));
ProtoInterface1094.addChild(&field1102);

field& field1103 =  field();
field1103.setName(CString("size"));
field1103.setAccessType(CString("initializeOnly"));
field1103.setType(CString("SFVec2f"));
field1103.setValue(CString("40 3"));
ProtoInterface1094.addChild(&field1103);

field& field1104 =  field();
field1104.setName(CString("fontSize"));
field1104.setAccessType(CString("inputOutput"));
field1104.setType(CString("SFFloat"));
field1104.setValue(CString("2.4"));
ProtoInterface1094.addChild(&field1104);

field& field1105 =  field();
field1105.setName(CString("spacing"));
field1105.setAccessType(CString("initializeOnly"));
field1105.setType(CString("SFFloat"));
field1105.setValue(CString("1.2"));
ProtoInterface1094.addChild(&field1105);

ProtoDeclare1093.addChild(&ProtoInterface1094);

ProtoBody& ProtoBody1106 =  ProtoBody();
Group& Group1107 =  Group();
Transform& Transform1108 =  Transform();
IS& IS1109 =  IS();
Connect& connect1110 =  Connect();
connect1110.setNodeField(CString("translation"));
connect1110.setProtoField(CString("translation"));
IS1109.addChild(&connect1110);

Transform1108.addChild(&IS1109);

TouchSensor& TouchSensor1111 =  TouchSensor();
TouchSensor1111.setDEF(CString("StartStopAnimationUnit_Sensor"));
IS& IS1112 =  IS();
Connect& connect1113 =  Connect();
connect1113.setNodeField(CString("description"));
connect1113.setProtoField(CString("description"));
IS1112.addChild(&connect1113);

TouchSensor1111.addChild(&IS1112);

Transform1108.addChild(&TouchSensor1111);

Transform& Transform1114 =  Transform();
IS& IS1115 =  IS();
Connect& connect1116 =  Connect();
connect1116.setNodeField(CString("translation"));
connect1116.setProtoField(CString("textTranslation"));
IS1115.addChild(&connect1116);

Transform1114.addChild(&IS1115);

Shape& Shape1117 =  Shape();
Appearance& Appearance1118 =  Appearance();
Material& Material1119 =  Material();
Material1119.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance1118.addChild(&Material1119);

Shape1117.addChild(&Appearance1118);

Text& Text1120 =  Text();
IS& IS1121 =  IS();
Connect& connect1122 =  Connect();
connect1122.setNodeField(CString("string"));
connect1122.setProtoField(CString("menuItemString"));
IS1121.addChild(&connect1122);

Text1120.addChild(&IS1121);

CFontStyle& FontStyle1123 =  CFontStyle();
FontStyle1123.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
IS& IS1124 =  IS();
Connect& connect1125 =  Connect();
connect1125.setNodeField(CString("size"));
connect1125.setProtoField(CString("fontSize"));
IS1124.addChild(&connect1125);

Connect& connect1126 =  Connect();
connect1126.setNodeField(CString("spacing"));
connect1126.setProtoField(CString("spacing"));
IS1124.addChild(&connect1126);

FontStyle1123.addChild(&IS1124);

Text1120.setFontStyle(&FontStyle1123);

Shape1117.setGeometry(&Text1120);

Transform1114.addChild(&Shape1117);

Transform1108.addChild(&Transform1114);

Transform& Transform1127 =  Transform();
Transform1127.setTranslation(new float[]{0.0,0.0,-0.01});
Switch& Switch1128 =  Switch();
Switch1128.setDEF(CString("itemMaterial"));
Switch1128.setWhichChoice(0);
Shape& Shape1129 =  Shape();
Appearance& Appearance1130 =  Appearance();
Material& Material1131 =  Material();
Material1131.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance1130.addChild(&Material1131);

Shape1129.addChild(&Appearance1130);

Rectangle2D& Rectangle2D1132 =  Rectangle2D();
Rectangle2D1132.setSize(new float[]{40.0,3.0});
IS& IS1133 =  IS();
Connect& connect1134 =  Connect();
connect1134.setNodeField(CString("size"));
connect1134.setProtoField(CString("size"));
IS1133.addChild(&connect1134);

Rectangle2D1132.addChild(&IS1133);

Shape1129.setGeometry(Rectangle2D1132);

Switch1128.addChild(&Shape1129);

Shape& Shape1135 =  Shape();
Appearance& Appearance1136 =  Appearance();
Material& Material1137 =  Material();
Material1137.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance1136.addChild(&Material1137);

Shape1135.addChild(&Appearance1136);

Rectangle2D& Rectangle2D1138 =  Rectangle2D();
Rectangle2D1138.setSize(new float[]{40.0,3.0});
IS& IS1139 =  IS();
Connect& connect1140 =  Connect();
connect1140.setNodeField(CString("size"));
connect1140.setProtoField(CString("size"));
IS1139.addChild(&connect1140);

Rectangle2D1138.addChild(&IS1139);

Shape1135.setGeometry(Rectangle2D1138);

Switch1128.addChild(&Shape1135);

Transform1127.addChild(&Switch1128);

Transform1108.addChild(&Transform1127);

Group1107.addChild(&Transform1108);

TimeTrigger& TimeTrigger1141 =  TimeTrigger();
TimeTrigger1141.setDEF(CString("startTime"));
IS& IS1142 =  IS();
Connect& connect1143 =  Connect();
connect1143.setNodeField(CString("triggerTime"));
connect1143.setProtoField(CString("startTime"));
IS1142.addChild(&connect1143);

TimeTrigger1141.addChild(&IS1142);

Group1107.addChild(&TimeTrigger1141);

TimeTrigger& TimeTrigger1144 =  TimeTrigger();
TimeTrigger1144.setDEF(CString("stopTime"));
IS& IS1145 =  IS();
Connect& connect1146 =  Connect();
connect1146.setNodeField(CString("triggerTime"));
connect1146.setProtoField(CString("stopTime"));
IS1145.addChild(&connect1146);

TimeTrigger1144.addChild(&IS1145);

Group1107.addChild(&TimeTrigger1144);

BooleanFilter& BooleanFilter1147 =  BooleanFilter();
BooleanFilter1147.setDEF(CString("veryTrue"));
IS& IS1148 =  IS();
Connect& connect1149 =  Connect();
connect1149.setNodeField(CString("inputTrue"));
connect1149.setProtoField(CString("enabled"));
IS1148.addChild(&connect1149);

BooleanFilter1147.addChild(&IS1148);

Group1107.addChild(&BooleanFilter1147);

BooleanFilter& BooleanFilter1150 =  BooleanFilter();
BooleanFilter1150.setDEF(CString("veryFalse"));
Group1107.addChild(&BooleanFilter1150);

CBooleanSequencer& BooleanSequencer1151 =  CBooleanSequencer();
BooleanSequencer1151.setDEF(CString("clickBetweenStates"));
BooleanSequencer1151.setKey(new float[]{0.0,1.0}, 2);
BooleanSequencer1151.setKeyValue(new boolean[]{true,false});
Group1107.addChild(&BooleanSequencer1151);

IntegerSequencer& IntegerSequencer1152 =  IntegerSequencer();
IntegerSequencer1152.setDEF(CString("toggler"));
IntegerSequencer1152.setKey(new float[]{0.0,1.0}, 2);
IntegerSequencer1152.setKeyValue(MFInt320);
Group1107.addChild(&IntegerSequencer1152);

IntegerSequencer& IntegerSequencer1153 =  IntegerSequencer();
IntegerSequencer1153.setDEF(CString("untoggler"));
IntegerSequencer1153.setKey(new float[]{0.0,1.0}, 2);
IntegerSequencer1153.setKeyValue(MFInt321);
IS& IS1154 =  IS();
Connect& connect1155 =  Connect();
connect1155.setNodeField(CString("next"));
connect1155.setProtoField(CString("untoggle"));
IS1154.addChild(&connect1155);

IntegerSequencer1153.addChild(&IS1154);

Group1107.addChild(&IntegerSequencer1153);

ROUTE& ROUTE1156 =  ROUTE();
ROUTE1156.setFromNode(CString("clickBetweenStates"));
ROUTE1156.setFromField(CString("value_changed"));
ROUTE1156.setToNode(CString("veryTrue"));
ROUTE1156.setToField(CString("set_boolean"));
Group1107.addChild(&ROUTE1156);

ROUTE& ROUTE1157 =  ROUTE();
ROUTE1157.setFromNode(CString("veryTrue"));
ROUTE1157.setFromField(CString("inputTrue"));
ROUTE1157.setToNode(CString("startTime"));
ROUTE1157.setToField(CString("set_boolean"));
Group1107.addChild(&ROUTE1157);

ROUTE& ROUTE1158 =  ROUTE();
ROUTE1158.setFromNode(CString("clickBetweenStates"));
ROUTE1158.setFromField(CString("value_changed"));
ROUTE1158.setToNode(CString("veryFalse"));
ROUTE1158.setToField(CString("set_boolean"));
Group1107.addChild(&ROUTE1158);

ROUTE& ROUTE1159 =  ROUTE();
ROUTE1159.setFromNode(CString("veryFalse"));
ROUTE1159.setFromField(CString("inputFalse"));
ROUTE1159.setToNode(CString("stopTime"));
ROUTE1159.setToField(CString("set_boolean"));
Group1107.addChild(&ROUTE1159);

ROUTE& ROUTE1160 =  ROUTE();
ROUTE1160.setFromNode(CString("StartStopAnimationUnit_Sensor"));
ROUTE1160.setFromField(CString("isActive"));
ROUTE1160.setToNode(CString("toggler"));
ROUTE1160.setToField(CString("next"));
Group1107.addChild(&ROUTE1160);

ROUTE& ROUTE1161 =  ROUTE();
ROUTE1161.setFromNode(CString("toggler"));
ROUTE1161.setFromField(CString("value_changed"));
ROUTE1161.setToNode(CString("itemMaterial"));
ROUTE1161.setToField(CString("whichChoice"));
Group1107.addChild(&ROUTE1161);

ROUTE& ROUTE1162 =  ROUTE();
ROUTE1162.setFromNode(CString("untoggler"));
ROUTE1162.setFromField(CString("value_changed"));
ROUTE1162.setToNode(CString("itemMaterial"));
ROUTE1162.setToField(CString("whichChoice"));
Group1107.addChild(&ROUTE1162);

ROUTE& ROUTE1163 =  ROUTE();
ROUTE1163.setFromNode(CString("StartStopAnimationUnit_Sensor"));
ROUTE1163.setFromField(CString("isActive"));
ROUTE1163.setToNode(CString("clickBetweenStates"));
ROUTE1163.setToField(CString("next"));
Group1107.addChild(&ROUTE1163);

ProtoBody1106.addChild(&Group1107);

ProtoDeclare1093.addChild(&ProtoBody1106);

Layer1091.addChild(&ProtoDeclare1093);

ProximitySensor& ProximitySensor1164 =  ProximitySensor();
ProximitySensor1164.setDEF(CString("HudProx"));
ProximitySensor1164.setSize(new float[]{50.0,50.0,50.0});
Layer1091.addChild(&ProximitySensor1164);

ProtoInstance& ProtoInstance1165 =  ProtoInstance();
ProtoInstance1165.setName(CString("MenuItem"));
ProtoInstance1165.setDEF(CString("AUJinBlink"));
fieldValue& fieldValue1166 =  fieldValue();
fieldValue1166.setName(CString("translation"));
fieldValue1166.setValue(CString("65 63.4 0"));
ProtoInstance1165.addChild(&fieldValue1166);

fieldValue& fieldValue1167 =  fieldValue();
fieldValue1167.setName(CString("textTranslation"));
fieldValue1167.setValue(CString("0 0 0"));
ProtoInstance1165.addChild(&fieldValue1167);

fieldValue& fieldValue1168 =  fieldValue();
fieldValue1168.setName(CString("description"));
fieldValue1168.setValue(CString("Jin Blink"));
ProtoInstance1165.addChild(&fieldValue1168);

fieldValue& fieldValue1169 =  fieldValue();
fieldValue1169.setName(CString("menuItemString"));
fieldValue1169.setValue(CString("\"JinBlink\""));
ProtoInstance1165.addChild(&fieldValue1169);

fieldValue& fieldValue1170 =  fieldValue();
fieldValue1170.setName(CString("size"));
fieldValue1170.setValue(CString("40 3"));
ProtoInstance1165.addChild(&fieldValue1170);

fieldValue& fieldValue1171 =  fieldValue();
fieldValue1171.setName(CString("fontSize"));
fieldValue1171.setValue(CString("2.4"));
ProtoInstance1165.addChild(&fieldValue1171);

fieldValue& fieldValue1172 =  fieldValue();
fieldValue1172.setName(CString("spacing"));
fieldValue1172.setValue(CString("1.2"));
ProtoInstance1165.addChild(&fieldValue1172);

Layer1091.addChild(&ProtoInstance1165);

ROUTE& ROUTE1173 =  ROUTE();
ROUTE1173.setFromNode(CString("JinBlink_Clock"));
ROUTE1173.setFromField(CString("fraction_changed"));
ROUTE1173.setToNode(CString("AnimationAdapter_JinBlink"));
ROUTE1173.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1173);

ROUTE& ROUTE1174 =  ROUTE();
ROUTE1174.setFromNode(CString("AUJinBlink"));
ROUTE1174.setFromField(CString("startTime"));
ROUTE1174.setToNode(CString("JinBlink_Clock"));
ROUTE1174.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1174);

ROUTE& ROUTE1175 =  ROUTE();
ROUTE1175.setFromNode(CString("AUJinBlink"));
ROUTE1175.setFromField(CString("stopTime"));
ROUTE1175.setToNode(CString("JinBlink_Clock"));
ROUTE1175.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1175);

ROUTE& ROUTE1176 =  ROUTE();
ROUTE1176.setFromNode(CString("AUJinBlink"));
ROUTE1176.setFromField(CString("enabled"));
ROUTE1176.setToNode(CString("JinBlink_Clock"));
ROUTE1176.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1176);

ProtoInstance& ProtoInstance1177 =  ProtoInstance();
ProtoInstance1177.setName(CString("MenuItem"));
ProtoInstance1177.setDEF(CString("AUJinBrowLowerer"));
fieldValue& fieldValue1178 =  fieldValue();
fieldValue1178.setName(CString("translation"));
fieldValue1178.setValue(CString("65 60.4 0"));
ProtoInstance1177.addChild(&fieldValue1178);

fieldValue& fieldValue1179 =  fieldValue();
fieldValue1179.setName(CString("textTranslation"));
fieldValue1179.setValue(CString("0 0 0"));
ProtoInstance1177.addChild(&fieldValue1179);

fieldValue& fieldValue1180 =  fieldValue();
fieldValue1180.setName(CString("description"));
fieldValue1180.setValue(CString("Jin Brow Lowerer"));
ProtoInstance1177.addChild(&fieldValue1180);

fieldValue& fieldValue1181 =  fieldValue();
fieldValue1181.setName(CString("menuItemString"));
fieldValue1181.setValue(CString("\"JinBrowLowerer\""));
ProtoInstance1177.addChild(&fieldValue1181);

fieldValue& fieldValue1182 =  fieldValue();
fieldValue1182.setName(CString("size"));
fieldValue1182.setValue(CString("40 3"));
ProtoInstance1177.addChild(&fieldValue1182);

fieldValue& fieldValue1183 =  fieldValue();
fieldValue1183.setName(CString("fontSize"));
fieldValue1183.setValue(CString("2.4"));
ProtoInstance1177.addChild(&fieldValue1183);

fieldValue& fieldValue1184 =  fieldValue();
fieldValue1184.setName(CString("spacing"));
fieldValue1184.setValue(CString("1.2"));
ProtoInstance1177.addChild(&fieldValue1184);

Layer1091.addChild(&ProtoInstance1177);

ROUTE& ROUTE1185 =  ROUTE();
ROUTE1185.setFromNode(CString("JinBrowLowerer_Clock"));
ROUTE1185.setFromField(CString("fraction_changed"));
ROUTE1185.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1185.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1185);

ROUTE& ROUTE1186 =  ROUTE();
ROUTE1186.setFromNode(CString("AUJinBrowLowerer"));
ROUTE1186.setFromField(CString("startTime"));
ROUTE1186.setToNode(CString("JinBrowLowerer_Clock"));
ROUTE1186.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1186);

ROUTE& ROUTE1187 =  ROUTE();
ROUTE1187.setFromNode(CString("AUJinBrowLowerer"));
ROUTE1187.setFromField(CString("stopTime"));
ROUTE1187.setToNode(CString("JinBrowLowerer_Clock"));
ROUTE1187.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1187);

ROUTE& ROUTE1188 =  ROUTE();
ROUTE1188.setFromNode(CString("AUJinBrowLowerer"));
ROUTE1188.setFromField(CString("enabled"));
ROUTE1188.setToNode(CString("JinBrowLowerer_Clock"));
ROUTE1188.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1188);

ProtoInstance& ProtoInstance1189 =  ProtoInstance();
ProtoInstance1189.setName(CString("MenuItem"));
ProtoInstance1189.setDEF(CString("AUJinCheekPuffer"));
fieldValue& fieldValue1190 =  fieldValue();
fieldValue1190.setName(CString("translation"));
fieldValue1190.setValue(CString("65 57.39999999999999 0"));
ProtoInstance1189.addChild(&fieldValue1190);

fieldValue& fieldValue1191 =  fieldValue();
fieldValue1191.setName(CString("textTranslation"));
fieldValue1191.setValue(CString("0 0 0"));
ProtoInstance1189.addChild(&fieldValue1191);

fieldValue& fieldValue1192 =  fieldValue();
fieldValue1192.setName(CString("description"));
fieldValue1192.setValue(CString("Jin Cheek Puffer"));
ProtoInstance1189.addChild(&fieldValue1192);

fieldValue& fieldValue1193 =  fieldValue();
fieldValue1193.setName(CString("menuItemString"));
fieldValue1193.setValue(CString("\"JinCheekPuffer\""));
ProtoInstance1189.addChild(&fieldValue1193);

fieldValue& fieldValue1194 =  fieldValue();
fieldValue1194.setName(CString("size"));
fieldValue1194.setValue(CString("40 3"));
ProtoInstance1189.addChild(&fieldValue1194);

fieldValue& fieldValue1195 =  fieldValue();
fieldValue1195.setName(CString("fontSize"));
fieldValue1195.setValue(CString("2.4"));
ProtoInstance1189.addChild(&fieldValue1195);

fieldValue& fieldValue1196 =  fieldValue();
fieldValue1196.setName(CString("spacing"));
fieldValue1196.setValue(CString("1.2"));
ProtoInstance1189.addChild(&fieldValue1196);

Layer1091.addChild(&ProtoInstance1189);

ROUTE& ROUTE1197 =  ROUTE();
ROUTE1197.setFromNode(CString("JinCheekPuffer_Clock"));
ROUTE1197.setFromField(CString("fraction_changed"));
ROUTE1197.setToNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE1197.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1197);

ROUTE& ROUTE1198 =  ROUTE();
ROUTE1198.setFromNode(CString("AUJinCheekPuffer"));
ROUTE1198.setFromField(CString("startTime"));
ROUTE1198.setToNode(CString("JinCheekPuffer_Clock"));
ROUTE1198.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1198);

ROUTE& ROUTE1199 =  ROUTE();
ROUTE1199.setFromNode(CString("AUJinCheekPuffer"));
ROUTE1199.setFromField(CString("stopTime"));
ROUTE1199.setToNode(CString("JinCheekPuffer_Clock"));
ROUTE1199.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1199);

ROUTE& ROUTE1200 =  ROUTE();
ROUTE1200.setFromNode(CString("AUJinCheekPuffer"));
ROUTE1200.setFromField(CString("enabled"));
ROUTE1200.setToNode(CString("JinCheekPuffer_Clock"));
ROUTE1200.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1200);

ProtoInstance& ProtoInstance1201 =  ProtoInstance();
ProtoInstance1201.setName(CString("MenuItem"));
ProtoInstance1201.setDEF(CString("AUJinCheekRaiser"));
fieldValue& fieldValue1202 =  fieldValue();
fieldValue1202.setName(CString("translation"));
fieldValue1202.setValue(CString("65 54.39999999999999 0"));
ProtoInstance1201.addChild(&fieldValue1202);

fieldValue& fieldValue1203 =  fieldValue();
fieldValue1203.setName(CString("textTranslation"));
fieldValue1203.setValue(CString("0 0 0"));
ProtoInstance1201.addChild(&fieldValue1203);

fieldValue& fieldValue1204 =  fieldValue();
fieldValue1204.setName(CString("description"));
fieldValue1204.setValue(CString("Jin Cheek Raiser"));
ProtoInstance1201.addChild(&fieldValue1204);

fieldValue& fieldValue1205 =  fieldValue();
fieldValue1205.setName(CString("menuItemString"));
fieldValue1205.setValue(CString("\"JinCheekRaiser\""));
ProtoInstance1201.addChild(&fieldValue1205);

fieldValue& fieldValue1206 =  fieldValue();
fieldValue1206.setName(CString("size"));
fieldValue1206.setValue(CString("40 3"));
ProtoInstance1201.addChild(&fieldValue1206);

fieldValue& fieldValue1207 =  fieldValue();
fieldValue1207.setName(CString("fontSize"));
fieldValue1207.setValue(CString("2.4"));
ProtoInstance1201.addChild(&fieldValue1207);

fieldValue& fieldValue1208 =  fieldValue();
fieldValue1208.setName(CString("spacing"));
fieldValue1208.setValue(CString("1.2"));
ProtoInstance1201.addChild(&fieldValue1208);

Layer1091.addChild(&ProtoInstance1201);

ROUTE& ROUTE1209 =  ROUTE();
ROUTE1209.setFromNode(CString("JinCheekRaiser_Clock"));
ROUTE1209.setFromField(CString("fraction_changed"));
ROUTE1209.setToNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE1209.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1209);

ROUTE& ROUTE1210 =  ROUTE();
ROUTE1210.setFromNode(CString("AUJinCheekRaiser"));
ROUTE1210.setFromField(CString("startTime"));
ROUTE1210.setToNode(CString("JinCheekRaiser_Clock"));
ROUTE1210.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1210);

ROUTE& ROUTE1211 =  ROUTE();
ROUTE1211.setFromNode(CString("AUJinCheekRaiser"));
ROUTE1211.setFromField(CString("stopTime"));
ROUTE1211.setToNode(CString("JinCheekRaiser_Clock"));
ROUTE1211.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1211);

ROUTE& ROUTE1212 =  ROUTE();
ROUTE1212.setFromNode(CString("AUJinCheekRaiser"));
ROUTE1212.setFromField(CString("enabled"));
ROUTE1212.setToNode(CString("JinCheekRaiser_Clock"));
ROUTE1212.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1212);

ProtoInstance& ProtoInstance1213 =  ProtoInstance();
ProtoInstance1213.setName(CString("MenuItem"));
ProtoInstance1213.setDEF(CString("AUJinChinRaiser"));
fieldValue& fieldValue1214 =  fieldValue();
fieldValue1214.setName(CString("translation"));
fieldValue1214.setValue(CString("65 51.39999999999999 0"));
ProtoInstance1213.addChild(&fieldValue1214);

fieldValue& fieldValue1215 =  fieldValue();
fieldValue1215.setName(CString("textTranslation"));
fieldValue1215.setValue(CString("0 0 0"));
ProtoInstance1213.addChild(&fieldValue1215);

fieldValue& fieldValue1216 =  fieldValue();
fieldValue1216.setName(CString("description"));
fieldValue1216.setValue(CString("Jin Chin Raiser"));
ProtoInstance1213.addChild(&fieldValue1216);

fieldValue& fieldValue1217 =  fieldValue();
fieldValue1217.setName(CString("menuItemString"));
fieldValue1217.setValue(CString("\"JinChinRaiser\""));
ProtoInstance1213.addChild(&fieldValue1217);

fieldValue& fieldValue1218 =  fieldValue();
fieldValue1218.setName(CString("size"));
fieldValue1218.setValue(CString("40 3"));
ProtoInstance1213.addChild(&fieldValue1218);

fieldValue& fieldValue1219 =  fieldValue();
fieldValue1219.setName(CString("fontSize"));
fieldValue1219.setValue(CString("2.4"));
ProtoInstance1213.addChild(&fieldValue1219);

fieldValue& fieldValue1220 =  fieldValue();
fieldValue1220.setName(CString("spacing"));
fieldValue1220.setValue(CString("1.2"));
ProtoInstance1213.addChild(&fieldValue1220);

Layer1091.addChild(&ProtoInstance1213);

ROUTE& ROUTE1221 =  ROUTE();
ROUTE1221.setFromNode(CString("JinChinRaiser_Clock"));
ROUTE1221.setFromField(CString("fraction_changed"));
ROUTE1221.setToNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE1221.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1221);

ROUTE& ROUTE1222 =  ROUTE();
ROUTE1222.setFromNode(CString("AUJinChinRaiser"));
ROUTE1222.setFromField(CString("startTime"));
ROUTE1222.setToNode(CString("JinChinRaiser_Clock"));
ROUTE1222.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1222);

ROUTE& ROUTE1223 =  ROUTE();
ROUTE1223.setFromNode(CString("AUJinChinRaiser"));
ROUTE1223.setFromField(CString("stopTime"));
ROUTE1223.setToNode(CString("JinChinRaiser_Clock"));
ROUTE1223.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1223);

ROUTE& ROUTE1224 =  ROUTE();
ROUTE1224.setFromNode(CString("AUJinChinRaiser"));
ROUTE1224.setFromField(CString("enabled"));
ROUTE1224.setToNode(CString("JinChinRaiser_Clock"));
ROUTE1224.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1224);

ProtoInstance& ProtoInstance1225 =  ProtoInstance();
ProtoInstance1225.setName(CString("MenuItem"));
ProtoInstance1225.setDEF(CString("AUJinDimpler"));
fieldValue& fieldValue1226 =  fieldValue();
fieldValue1226.setName(CString("translation"));
fieldValue1226.setValue(CString("65 48.39999999999999 0"));
ProtoInstance1225.addChild(&fieldValue1226);

fieldValue& fieldValue1227 =  fieldValue();
fieldValue1227.setName(CString("textTranslation"));
fieldValue1227.setValue(CString("0 0 0"));
ProtoInstance1225.addChild(&fieldValue1227);

fieldValue& fieldValue1228 =  fieldValue();
fieldValue1228.setName(CString("description"));
fieldValue1228.setValue(CString("Jin Dimpler"));
ProtoInstance1225.addChild(&fieldValue1228);

fieldValue& fieldValue1229 =  fieldValue();
fieldValue1229.setName(CString("menuItemString"));
fieldValue1229.setValue(CString("\"JinDimpler\""));
ProtoInstance1225.addChild(&fieldValue1229);

fieldValue& fieldValue1230 =  fieldValue();
fieldValue1230.setName(CString("size"));
fieldValue1230.setValue(CString("40 3"));
ProtoInstance1225.addChild(&fieldValue1230);

fieldValue& fieldValue1231 =  fieldValue();
fieldValue1231.setName(CString("fontSize"));
fieldValue1231.setValue(CString("2.4"));
ProtoInstance1225.addChild(&fieldValue1231);

fieldValue& fieldValue1232 =  fieldValue();
fieldValue1232.setName(CString("spacing"));
fieldValue1232.setValue(CString("1.2"));
ProtoInstance1225.addChild(&fieldValue1232);

Layer1091.addChild(&ProtoInstance1225);

ROUTE& ROUTE1233 =  ROUTE();
ROUTE1233.setFromNode(CString("JinDimpler_Clock"));
ROUTE1233.setFromField(CString("fraction_changed"));
ROUTE1233.setToNode(CString("AnimationAdapter_JinDimpler"));
ROUTE1233.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1233);

ROUTE& ROUTE1234 =  ROUTE();
ROUTE1234.setFromNode(CString("AUJinDimpler"));
ROUTE1234.setFromField(CString("startTime"));
ROUTE1234.setToNode(CString("JinDimpler_Clock"));
ROUTE1234.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1234);

ROUTE& ROUTE1235 =  ROUTE();
ROUTE1235.setFromNode(CString("AUJinDimpler"));
ROUTE1235.setFromField(CString("stopTime"));
ROUTE1235.setToNode(CString("JinDimpler_Clock"));
ROUTE1235.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1235);

ROUTE& ROUTE1236 =  ROUTE();
ROUTE1236.setFromNode(CString("AUJinDimpler"));
ROUTE1236.setFromField(CString("enabled"));
ROUTE1236.setToNode(CString("JinDimpler_Clock"));
ROUTE1236.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1236);

ProtoInstance& ProtoInstance1237 =  ProtoInstance();
ProtoInstance1237.setName(CString("MenuItem"));
ProtoInstance1237.setDEF(CString("AUJinEyesClosed"));
fieldValue& fieldValue1238 =  fieldValue();
fieldValue1238.setName(CString("translation"));
fieldValue1238.setValue(CString("65 45.39999999999999 0"));
ProtoInstance1237.addChild(&fieldValue1238);

fieldValue& fieldValue1239 =  fieldValue();
fieldValue1239.setName(CString("textTranslation"));
fieldValue1239.setValue(CString("0 0 0"));
ProtoInstance1237.addChild(&fieldValue1239);

fieldValue& fieldValue1240 =  fieldValue();
fieldValue1240.setName(CString("description"));
fieldValue1240.setValue(CString("Jin Eyes Closed"));
ProtoInstance1237.addChild(&fieldValue1240);

fieldValue& fieldValue1241 =  fieldValue();
fieldValue1241.setName(CString("menuItemString"));
fieldValue1241.setValue(CString("\"JinEyesClosed\""));
ProtoInstance1237.addChild(&fieldValue1241);

fieldValue& fieldValue1242 =  fieldValue();
fieldValue1242.setName(CString("size"));
fieldValue1242.setValue(CString("40 3"));
ProtoInstance1237.addChild(&fieldValue1242);

fieldValue& fieldValue1243 =  fieldValue();
fieldValue1243.setName(CString("fontSize"));
fieldValue1243.setValue(CString("2.4"));
ProtoInstance1237.addChild(&fieldValue1243);

fieldValue& fieldValue1244 =  fieldValue();
fieldValue1244.setName(CString("spacing"));
fieldValue1244.setValue(CString("1.2"));
ProtoInstance1237.addChild(&fieldValue1244);

Layer1091.addChild(&ProtoInstance1237);

ROUTE& ROUTE1245 =  ROUTE();
ROUTE1245.setFromNode(CString("JinEyesClosed_Clock"));
ROUTE1245.setFromField(CString("fraction_changed"));
ROUTE1245.setToNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE1245.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1245);

ROUTE& ROUTE1246 =  ROUTE();
ROUTE1246.setFromNode(CString("AUJinEyesClosed"));
ROUTE1246.setFromField(CString("startTime"));
ROUTE1246.setToNode(CString("JinEyesClosed_Clock"));
ROUTE1246.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1246);

ROUTE& ROUTE1247 =  ROUTE();
ROUTE1247.setFromNode(CString("AUJinEyesClosed"));
ROUTE1247.setFromField(CString("stopTime"));
ROUTE1247.setToNode(CString("JinEyesClosed_Clock"));
ROUTE1247.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1247);

ROUTE& ROUTE1248 =  ROUTE();
ROUTE1248.setFromNode(CString("AUJinEyesClosed"));
ROUTE1248.setFromField(CString("enabled"));
ROUTE1248.setToNode(CString("JinEyesClosed_Clock"));
ROUTE1248.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1248);

ProtoInstance& ProtoInstance1249 =  ProtoInstance();
ProtoInstance1249.setName(CString("MenuItem"));
ProtoInstance1249.setDEF(CString("AUJinInnerBrowRaiser"));
fieldValue& fieldValue1250 =  fieldValue();
fieldValue1250.setName(CString("translation"));
fieldValue1250.setValue(CString("65 42.39999999999999 0"));
ProtoInstance1249.addChild(&fieldValue1250);

fieldValue& fieldValue1251 =  fieldValue();
fieldValue1251.setName(CString("textTranslation"));
fieldValue1251.setValue(CString("0 0 0"));
ProtoInstance1249.addChild(&fieldValue1251);

fieldValue& fieldValue1252 =  fieldValue();
fieldValue1252.setName(CString("description"));
fieldValue1252.setValue(CString("Jin Inner Brow Raiser"));
ProtoInstance1249.addChild(&fieldValue1252);

fieldValue& fieldValue1253 =  fieldValue();
fieldValue1253.setName(CString("menuItemString"));
fieldValue1253.setValue(CString("\"JinInnerBrowRaiser\""));
ProtoInstance1249.addChild(&fieldValue1253);

fieldValue& fieldValue1254 =  fieldValue();
fieldValue1254.setName(CString("size"));
fieldValue1254.setValue(CString("40 3"));
ProtoInstance1249.addChild(&fieldValue1254);

fieldValue& fieldValue1255 =  fieldValue();
fieldValue1255.setName(CString("fontSize"));
fieldValue1255.setValue(CString("2.4"));
ProtoInstance1249.addChild(&fieldValue1255);

fieldValue& fieldValue1256 =  fieldValue();
fieldValue1256.setName(CString("spacing"));
fieldValue1256.setValue(CString("1.2"));
ProtoInstance1249.addChild(&fieldValue1256);

Layer1091.addChild(&ProtoInstance1249);

ROUTE& ROUTE1257 =  ROUTE();
ROUTE1257.setFromNode(CString("JinInnerBrowRaiser_Clock"));
ROUTE1257.setFromField(CString("fraction_changed"));
ROUTE1257.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1257.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1257);

ROUTE& ROUTE1258 =  ROUTE();
ROUTE1258.setFromNode(CString("AUJinInnerBrowRaiser"));
ROUTE1258.setFromField(CString("startTime"));
ROUTE1258.setToNode(CString("JinInnerBrowRaiser_Clock"));
ROUTE1258.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1258);

ROUTE& ROUTE1259 =  ROUTE();
ROUTE1259.setFromNode(CString("AUJinInnerBrowRaiser"));
ROUTE1259.setFromField(CString("stopTime"));
ROUTE1259.setToNode(CString("JinInnerBrowRaiser_Clock"));
ROUTE1259.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1259);

ROUTE& ROUTE1260 =  ROUTE();
ROUTE1260.setFromNode(CString("AUJinInnerBrowRaiser"));
ROUTE1260.setFromField(CString("enabled"));
ROUTE1260.setToNode(CString("JinInnerBrowRaiser_Clock"));
ROUTE1260.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1260);

ProtoInstance& ProtoInstance1261 =  ProtoInstance();
ProtoInstance1261.setName(CString("MenuItem"));
ProtoInstance1261.setDEF(CString("AUJinJawDrop"));
fieldValue& fieldValue1262 =  fieldValue();
fieldValue1262.setName(CString("translation"));
fieldValue1262.setValue(CString("65 39.39999999999999 0"));
ProtoInstance1261.addChild(&fieldValue1262);

fieldValue& fieldValue1263 =  fieldValue();
fieldValue1263.setName(CString("textTranslation"));
fieldValue1263.setValue(CString("0 0 0"));
ProtoInstance1261.addChild(&fieldValue1263);

fieldValue& fieldValue1264 =  fieldValue();
fieldValue1264.setName(CString("description"));
fieldValue1264.setValue(CString("Jin Jaw Drop"));
ProtoInstance1261.addChild(&fieldValue1264);

fieldValue& fieldValue1265 =  fieldValue();
fieldValue1265.setName(CString("menuItemString"));
fieldValue1265.setValue(CString("\"JinJawDrop\""));
ProtoInstance1261.addChild(&fieldValue1265);

fieldValue& fieldValue1266 =  fieldValue();
fieldValue1266.setName(CString("size"));
fieldValue1266.setValue(CString("40 3"));
ProtoInstance1261.addChild(&fieldValue1266);

fieldValue& fieldValue1267 =  fieldValue();
fieldValue1267.setName(CString("fontSize"));
fieldValue1267.setValue(CString("2.4"));
ProtoInstance1261.addChild(&fieldValue1267);

fieldValue& fieldValue1268 =  fieldValue();
fieldValue1268.setName(CString("spacing"));
fieldValue1268.setValue(CString("1.2"));
ProtoInstance1261.addChild(&fieldValue1268);

Layer1091.addChild(&ProtoInstance1261);

ROUTE& ROUTE1269 =  ROUTE();
ROUTE1269.setFromNode(CString("JinJawDrop_Clock"));
ROUTE1269.setFromField(CString("fraction_changed"));
ROUTE1269.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE1269.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1269);

ROUTE& ROUTE1270 =  ROUTE();
ROUTE1270.setFromNode(CString("AUJinJawDrop"));
ROUTE1270.setFromField(CString("startTime"));
ROUTE1270.setToNode(CString("JinJawDrop_Clock"));
ROUTE1270.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1270);

ROUTE& ROUTE1271 =  ROUTE();
ROUTE1271.setFromNode(CString("AUJinJawDrop"));
ROUTE1271.setFromField(CString("stopTime"));
ROUTE1271.setToNode(CString("JinJawDrop_Clock"));
ROUTE1271.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1271);

ROUTE& ROUTE1272 =  ROUTE();
ROUTE1272.setFromNode(CString("AUJinJawDrop"));
ROUTE1272.setFromField(CString("enabled"));
ROUTE1272.setToNode(CString("JinJawDrop_Clock"));
ROUTE1272.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1272);

ProtoInstance& ProtoInstance1273 =  ProtoInstance();
ProtoInstance1273.setName(CString("MenuItem"));
ProtoInstance1273.setDEF(CString("AUJinLidDroop"));
fieldValue& fieldValue1274 =  fieldValue();
fieldValue1274.setName(CString("translation"));
fieldValue1274.setValue(CString("65 36.39999999999999 0"));
ProtoInstance1273.addChild(&fieldValue1274);

fieldValue& fieldValue1275 =  fieldValue();
fieldValue1275.setName(CString("textTranslation"));
fieldValue1275.setValue(CString("0 0 0"));
ProtoInstance1273.addChild(&fieldValue1275);

fieldValue& fieldValue1276 =  fieldValue();
fieldValue1276.setName(CString("description"));
fieldValue1276.setValue(CString("Jin Lid Droop"));
ProtoInstance1273.addChild(&fieldValue1276);

fieldValue& fieldValue1277 =  fieldValue();
fieldValue1277.setName(CString("menuItemString"));
fieldValue1277.setValue(CString("\"JinLidDroop\""));
ProtoInstance1273.addChild(&fieldValue1277);

fieldValue& fieldValue1278 =  fieldValue();
fieldValue1278.setName(CString("size"));
fieldValue1278.setValue(CString("40 3"));
ProtoInstance1273.addChild(&fieldValue1278);

fieldValue& fieldValue1279 =  fieldValue();
fieldValue1279.setName(CString("fontSize"));
fieldValue1279.setValue(CString("2.4"));
ProtoInstance1273.addChild(&fieldValue1279);

fieldValue& fieldValue1280 =  fieldValue();
fieldValue1280.setName(CString("spacing"));
fieldValue1280.setValue(CString("1.2"));
ProtoInstance1273.addChild(&fieldValue1280);

Layer1091.addChild(&ProtoInstance1273);

ROUTE& ROUTE1281 =  ROUTE();
ROUTE1281.setFromNode(CString("JinLidDroop_Clock"));
ROUTE1281.setFromField(CString("fraction_changed"));
ROUTE1281.setToNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE1281.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1281);

ROUTE& ROUTE1282 =  ROUTE();
ROUTE1282.setFromNode(CString("AUJinLidDroop"));
ROUTE1282.setFromField(CString("startTime"));
ROUTE1282.setToNode(CString("JinLidDroop_Clock"));
ROUTE1282.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1282);

ROUTE& ROUTE1283 =  ROUTE();
ROUTE1283.setFromNode(CString("AUJinLidDroop"));
ROUTE1283.setFromField(CString("stopTime"));
ROUTE1283.setToNode(CString("JinLidDroop_Clock"));
ROUTE1283.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1283);

ROUTE& ROUTE1284 =  ROUTE();
ROUTE1284.setFromNode(CString("AUJinLidDroop"));
ROUTE1284.setFromField(CString("enabled"));
ROUTE1284.setToNode(CString("JinLidDroop_Clock"));
ROUTE1284.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1284);

ProtoInstance& ProtoInstance1285 =  ProtoInstance();
ProtoInstance1285.setName(CString("MenuItem"));
ProtoInstance1285.setDEF(CString("AUJinLidTightener"));
fieldValue& fieldValue1286 =  fieldValue();
fieldValue1286.setName(CString("translation"));
fieldValue1286.setValue(CString("65 33.39999999999999 0"));
ProtoInstance1285.addChild(&fieldValue1286);

fieldValue& fieldValue1287 =  fieldValue();
fieldValue1287.setName(CString("textTranslation"));
fieldValue1287.setValue(CString("0 0 0"));
ProtoInstance1285.addChild(&fieldValue1287);

fieldValue& fieldValue1288 =  fieldValue();
fieldValue1288.setName(CString("description"));
fieldValue1288.setValue(CString("Jin Lid Tightener"));
ProtoInstance1285.addChild(&fieldValue1288);

fieldValue& fieldValue1289 =  fieldValue();
fieldValue1289.setName(CString("menuItemString"));
fieldValue1289.setValue(CString("\"JinLidTightener\""));
ProtoInstance1285.addChild(&fieldValue1289);

fieldValue& fieldValue1290 =  fieldValue();
fieldValue1290.setName(CString("size"));
fieldValue1290.setValue(CString("40 3"));
ProtoInstance1285.addChild(&fieldValue1290);

fieldValue& fieldValue1291 =  fieldValue();
fieldValue1291.setName(CString("fontSize"));
fieldValue1291.setValue(CString("2.4"));
ProtoInstance1285.addChild(&fieldValue1291);

fieldValue& fieldValue1292 =  fieldValue();
fieldValue1292.setName(CString("spacing"));
fieldValue1292.setValue(CString("1.2"));
ProtoInstance1285.addChild(&fieldValue1292);

Layer1091.addChild(&ProtoInstance1285);

ROUTE& ROUTE1293 =  ROUTE();
ROUTE1293.setFromNode(CString("JinLidTightener_Clock"));
ROUTE1293.setFromField(CString("fraction_changed"));
ROUTE1293.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE1293.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1293);

ROUTE& ROUTE1294 =  ROUTE();
ROUTE1294.setFromNode(CString("AUJinLidTightener"));
ROUTE1294.setFromField(CString("startTime"));
ROUTE1294.setToNode(CString("JinLidTightener_Clock"));
ROUTE1294.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1294);

ROUTE& ROUTE1295 =  ROUTE();
ROUTE1295.setFromNode(CString("AUJinLidTightener"));
ROUTE1295.setFromField(CString("stopTime"));
ROUTE1295.setToNode(CString("JinLidTightener_Clock"));
ROUTE1295.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1295);

ROUTE& ROUTE1296 =  ROUTE();
ROUTE1296.setFromNode(CString("AUJinLidTightener"));
ROUTE1296.setFromField(CString("enabled"));
ROUTE1296.setToNode(CString("JinLidTightener_Clock"));
ROUTE1296.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1296);

ProtoInstance& ProtoInstance1297 =  ProtoInstance();
ProtoInstance1297.setName(CString("MenuItem"));
ProtoInstance1297.setDEF(CString("AUJinLipCornerDepressor"));
fieldValue& fieldValue1298 =  fieldValue();
fieldValue1298.setName(CString("translation"));
fieldValue1298.setValue(CString("65 30.399999999999995 0"));
ProtoInstance1297.addChild(&fieldValue1298);

fieldValue& fieldValue1299 =  fieldValue();
fieldValue1299.setName(CString("textTranslation"));
fieldValue1299.setValue(CString("0 0 0"));
ProtoInstance1297.addChild(&fieldValue1299);

fieldValue& fieldValue1300 =  fieldValue();
fieldValue1300.setName(CString("description"));
fieldValue1300.setValue(CString("Jin Lip Corner Depressor"));
ProtoInstance1297.addChild(&fieldValue1300);

fieldValue& fieldValue1301 =  fieldValue();
fieldValue1301.setName(CString("menuItemString"));
fieldValue1301.setValue(CString("\"JinLipCornerDepressor\""));
ProtoInstance1297.addChild(&fieldValue1301);

fieldValue& fieldValue1302 =  fieldValue();
fieldValue1302.setName(CString("size"));
fieldValue1302.setValue(CString("40 3"));
ProtoInstance1297.addChild(&fieldValue1302);

fieldValue& fieldValue1303 =  fieldValue();
fieldValue1303.setName(CString("fontSize"));
fieldValue1303.setValue(CString("2.4"));
ProtoInstance1297.addChild(&fieldValue1303);

fieldValue& fieldValue1304 =  fieldValue();
fieldValue1304.setName(CString("spacing"));
fieldValue1304.setValue(CString("1.2"));
ProtoInstance1297.addChild(&fieldValue1304);

Layer1091.addChild(&ProtoInstance1297);

ROUTE& ROUTE1305 =  ROUTE();
ROUTE1305.setFromNode(CString("JinLipCornerDepressor_Clock"));
ROUTE1305.setFromField(CString("fraction_changed"));
ROUTE1305.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE1305.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1305);

ROUTE& ROUTE1306 =  ROUTE();
ROUTE1306.setFromNode(CString("AUJinLipCornerDepressor"));
ROUTE1306.setFromField(CString("startTime"));
ROUTE1306.setToNode(CString("JinLipCornerDepressor_Clock"));
ROUTE1306.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1306);

ROUTE& ROUTE1307 =  ROUTE();
ROUTE1307.setFromNode(CString("AUJinLipCornerDepressor"));
ROUTE1307.setFromField(CString("stopTime"));
ROUTE1307.setToNode(CString("JinLipCornerDepressor_Clock"));
ROUTE1307.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1307);

ROUTE& ROUTE1308 =  ROUTE();
ROUTE1308.setFromNode(CString("AUJinLipCornerDepressor"));
ROUTE1308.setFromField(CString("enabled"));
ROUTE1308.setToNode(CString("JinLipCornerDepressor_Clock"));
ROUTE1308.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1308);

ProtoInstance& ProtoInstance1309 =  ProtoInstance();
ProtoInstance1309.setName(CString("MenuItem"));
ProtoInstance1309.setDEF(CString("AUJinLipCornerPuller"));
fieldValue& fieldValue1310 =  fieldValue();
fieldValue1310.setName(CString("translation"));
fieldValue1310.setValue(CString("65 27.399999999999995 0"));
ProtoInstance1309.addChild(&fieldValue1310);

fieldValue& fieldValue1311 =  fieldValue();
fieldValue1311.setName(CString("textTranslation"));
fieldValue1311.setValue(CString("0 0 0"));
ProtoInstance1309.addChild(&fieldValue1311);

fieldValue& fieldValue1312 =  fieldValue();
fieldValue1312.setName(CString("description"));
fieldValue1312.setValue(CString("Jin Lip Corner Puller"));
ProtoInstance1309.addChild(&fieldValue1312);

fieldValue& fieldValue1313 =  fieldValue();
fieldValue1313.setName(CString("menuItemString"));
fieldValue1313.setValue(CString("\"JinLipCornerPuller\""));
ProtoInstance1309.addChild(&fieldValue1313);

fieldValue& fieldValue1314 =  fieldValue();
fieldValue1314.setName(CString("size"));
fieldValue1314.setValue(CString("40 3"));
ProtoInstance1309.addChild(&fieldValue1314);

fieldValue& fieldValue1315 =  fieldValue();
fieldValue1315.setName(CString("fontSize"));
fieldValue1315.setValue(CString("2.4"));
ProtoInstance1309.addChild(&fieldValue1315);

fieldValue& fieldValue1316 =  fieldValue();
fieldValue1316.setName(CString("spacing"));
fieldValue1316.setValue(CString("1.2"));
ProtoInstance1309.addChild(&fieldValue1316);

Layer1091.addChild(&ProtoInstance1309);

ROUTE& ROUTE1317 =  ROUTE();
ROUTE1317.setFromNode(CString("JinLipCornerPuller_Clock"));
ROUTE1317.setFromField(CString("fraction_changed"));
ROUTE1317.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE1317.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1317);

ROUTE& ROUTE1318 =  ROUTE();
ROUTE1318.setFromNode(CString("AUJinLipCornerPuller"));
ROUTE1318.setFromField(CString("startTime"));
ROUTE1318.setToNode(CString("JinLipCornerPuller_Clock"));
ROUTE1318.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1318);

ROUTE& ROUTE1319 =  ROUTE();
ROUTE1319.setFromNode(CString("AUJinLipCornerPuller"));
ROUTE1319.setFromField(CString("stopTime"));
ROUTE1319.setToNode(CString("JinLipCornerPuller_Clock"));
ROUTE1319.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1319);

ROUTE& ROUTE1320 =  ROUTE();
ROUTE1320.setFromNode(CString("AUJinLipCornerPuller"));
ROUTE1320.setFromField(CString("enabled"));
ROUTE1320.setToNode(CString("JinLipCornerPuller_Clock"));
ROUTE1320.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1320);

ProtoInstance& ProtoInstance1321 =  ProtoInstance();
ProtoInstance1321.setName(CString("MenuItem"));
ProtoInstance1321.setDEF(CString("AUJinLipFunneler"));
fieldValue& fieldValue1322 =  fieldValue();
fieldValue1322.setName(CString("translation"));
fieldValue1322.setValue(CString("65 24.399999999999995 0"));
ProtoInstance1321.addChild(&fieldValue1322);

fieldValue& fieldValue1323 =  fieldValue();
fieldValue1323.setName(CString("textTranslation"));
fieldValue1323.setValue(CString("0 0 0"));
ProtoInstance1321.addChild(&fieldValue1323);

fieldValue& fieldValue1324 =  fieldValue();
fieldValue1324.setName(CString("description"));
fieldValue1324.setValue(CString("Jin Lip Funneler"));
ProtoInstance1321.addChild(&fieldValue1324);

fieldValue& fieldValue1325 =  fieldValue();
fieldValue1325.setName(CString("menuItemString"));
fieldValue1325.setValue(CString("\"JinLipFunneler\""));
ProtoInstance1321.addChild(&fieldValue1325);

fieldValue& fieldValue1326 =  fieldValue();
fieldValue1326.setName(CString("size"));
fieldValue1326.setValue(CString("40 3"));
ProtoInstance1321.addChild(&fieldValue1326);

fieldValue& fieldValue1327 =  fieldValue();
fieldValue1327.setName(CString("fontSize"));
fieldValue1327.setValue(CString("2.4"));
ProtoInstance1321.addChild(&fieldValue1327);

fieldValue& fieldValue1328 =  fieldValue();
fieldValue1328.setName(CString("spacing"));
fieldValue1328.setValue(CString("1.2"));
ProtoInstance1321.addChild(&fieldValue1328);

Layer1091.addChild(&ProtoInstance1321);

ROUTE& ROUTE1329 =  ROUTE();
ROUTE1329.setFromNode(CString("JinLipFunneler_Clock"));
ROUTE1329.setFromField(CString("fraction_changed"));
ROUTE1329.setToNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE1329.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1329);

ROUTE& ROUTE1330 =  ROUTE();
ROUTE1330.setFromNode(CString("AUJinLipFunneler"));
ROUTE1330.setFromField(CString("startTime"));
ROUTE1330.setToNode(CString("JinLipFunneler_Clock"));
ROUTE1330.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1330);

ROUTE& ROUTE1331 =  ROUTE();
ROUTE1331.setFromNode(CString("AUJinLipFunneler"));
ROUTE1331.setFromField(CString("stopTime"));
ROUTE1331.setToNode(CString("JinLipFunneler_Clock"));
ROUTE1331.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1331);

ROUTE& ROUTE1332 =  ROUTE();
ROUTE1332.setFromNode(CString("AUJinLipFunneler"));
ROUTE1332.setFromField(CString("enabled"));
ROUTE1332.setToNode(CString("JinLipFunneler_Clock"));
ROUTE1332.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1332);

ProtoInstance& ProtoInstance1333 =  ProtoInstance();
ProtoInstance1333.setName(CString("MenuItem"));
ProtoInstance1333.setDEF(CString("AUJinLipPressor"));
fieldValue& fieldValue1334 =  fieldValue();
fieldValue1334.setName(CString("translation"));
fieldValue1334.setValue(CString("65 21.399999999999995 0"));
ProtoInstance1333.addChild(&fieldValue1334);

fieldValue& fieldValue1335 =  fieldValue();
fieldValue1335.setName(CString("textTranslation"));
fieldValue1335.setValue(CString("0 0 0"));
ProtoInstance1333.addChild(&fieldValue1335);

fieldValue& fieldValue1336 =  fieldValue();
fieldValue1336.setName(CString("description"));
fieldValue1336.setValue(CString("Jin Lip Pressor"));
ProtoInstance1333.addChild(&fieldValue1336);

fieldValue& fieldValue1337 =  fieldValue();
fieldValue1337.setName(CString("menuItemString"));
fieldValue1337.setValue(CString("\"JinLipPressor\""));
ProtoInstance1333.addChild(&fieldValue1337);

fieldValue& fieldValue1338 =  fieldValue();
fieldValue1338.setName(CString("size"));
fieldValue1338.setValue(CString("40 3"));
ProtoInstance1333.addChild(&fieldValue1338);

fieldValue& fieldValue1339 =  fieldValue();
fieldValue1339.setName(CString("fontSize"));
fieldValue1339.setValue(CString("2.4"));
ProtoInstance1333.addChild(&fieldValue1339);

fieldValue& fieldValue1340 =  fieldValue();
fieldValue1340.setName(CString("spacing"));
fieldValue1340.setValue(CString("1.2"));
ProtoInstance1333.addChild(&fieldValue1340);

Layer1091.addChild(&ProtoInstance1333);

ROUTE& ROUTE1341 =  ROUTE();
ROUTE1341.setFromNode(CString("JinLipPressor_Clock"));
ROUTE1341.setFromField(CString("fraction_changed"));
ROUTE1341.setToNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE1341.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1341);

ROUTE& ROUTE1342 =  ROUTE();
ROUTE1342.setFromNode(CString("AUJinLipPressor"));
ROUTE1342.setFromField(CString("startTime"));
ROUTE1342.setToNode(CString("JinLipPressor_Clock"));
ROUTE1342.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1342);

ROUTE& ROUTE1343 =  ROUTE();
ROUTE1343.setFromNode(CString("AUJinLipPressor"));
ROUTE1343.setFromField(CString("stopTime"));
ROUTE1343.setToNode(CString("JinLipPressor_Clock"));
ROUTE1343.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1343);

ROUTE& ROUTE1344 =  ROUTE();
ROUTE1344.setFromNode(CString("AUJinLipPressor"));
ROUTE1344.setFromField(CString("enabled"));
ROUTE1344.setToNode(CString("JinLipPressor_Clock"));
ROUTE1344.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1344);

ProtoInstance& ProtoInstance1345 =  ProtoInstance();
ProtoInstance1345.setName(CString("MenuItem"));
ProtoInstance1345.setDEF(CString("AUJinLipPuckerer"));
fieldValue& fieldValue1346 =  fieldValue();
fieldValue1346.setName(CString("translation"));
fieldValue1346.setValue(CString("65 18.4 0"));
ProtoInstance1345.addChild(&fieldValue1346);

fieldValue& fieldValue1347 =  fieldValue();
fieldValue1347.setName(CString("textTranslation"));
fieldValue1347.setValue(CString("0 0 0"));
ProtoInstance1345.addChild(&fieldValue1347);

fieldValue& fieldValue1348 =  fieldValue();
fieldValue1348.setName(CString("description"));
fieldValue1348.setValue(CString("Jin Lip Puckerer"));
ProtoInstance1345.addChild(&fieldValue1348);

fieldValue& fieldValue1349 =  fieldValue();
fieldValue1349.setName(CString("menuItemString"));
fieldValue1349.setValue(CString("\"JinLipPuckerer\""));
ProtoInstance1345.addChild(&fieldValue1349);

fieldValue& fieldValue1350 =  fieldValue();
fieldValue1350.setName(CString("size"));
fieldValue1350.setValue(CString("40 3"));
ProtoInstance1345.addChild(&fieldValue1350);

fieldValue& fieldValue1351 =  fieldValue();
fieldValue1351.setName(CString("fontSize"));
fieldValue1351.setValue(CString("2.4"));
ProtoInstance1345.addChild(&fieldValue1351);

fieldValue& fieldValue1352 =  fieldValue();
fieldValue1352.setName(CString("spacing"));
fieldValue1352.setValue(CString("1.2"));
ProtoInstance1345.addChild(&fieldValue1352);

Layer1091.addChild(&ProtoInstance1345);

ROUTE& ROUTE1353 =  ROUTE();
ROUTE1353.setFromNode(CString("JinLipPuckerer_Clock"));
ROUTE1353.setFromField(CString("fraction_changed"));
ROUTE1353.setToNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE1353.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1353);

ROUTE& ROUTE1354 =  ROUTE();
ROUTE1354.setFromNode(CString("AUJinLipPuckerer"));
ROUTE1354.setFromField(CString("startTime"));
ROUTE1354.setToNode(CString("JinLipPuckerer_Clock"));
ROUTE1354.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1354);

ROUTE& ROUTE1355 =  ROUTE();
ROUTE1355.setFromNode(CString("AUJinLipPuckerer"));
ROUTE1355.setFromField(CString("stopTime"));
ROUTE1355.setToNode(CString("JinLipPuckerer_Clock"));
ROUTE1355.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1355);

ROUTE& ROUTE1356 =  ROUTE();
ROUTE1356.setFromNode(CString("AUJinLipPuckerer"));
ROUTE1356.setFromField(CString("enabled"));
ROUTE1356.setToNode(CString("JinLipPuckerer_Clock"));
ROUTE1356.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1356);

ProtoInstance& ProtoInstance1357 =  ProtoInstance();
ProtoInstance1357.setName(CString("MenuItem"));
ProtoInstance1357.setDEF(CString("AUJinLipsPart"));
fieldValue& fieldValue1358 =  fieldValue();
fieldValue1358.setName(CString("translation"));
fieldValue1358.setValue(CString("65 15.399999999999997 0"));
ProtoInstance1357.addChild(&fieldValue1358);

fieldValue& fieldValue1359 =  fieldValue();
fieldValue1359.setName(CString("textTranslation"));
fieldValue1359.setValue(CString("0 0 0"));
ProtoInstance1357.addChild(&fieldValue1359);

fieldValue& fieldValue1360 =  fieldValue();
fieldValue1360.setName(CString("description"));
fieldValue1360.setValue(CString("Jin Lips Part"));
ProtoInstance1357.addChild(&fieldValue1360);

fieldValue& fieldValue1361 =  fieldValue();
fieldValue1361.setName(CString("menuItemString"));
fieldValue1361.setValue(CString("\"JinLipsPart\""));
ProtoInstance1357.addChild(&fieldValue1361);

fieldValue& fieldValue1362 =  fieldValue();
fieldValue1362.setName(CString("size"));
fieldValue1362.setValue(CString("40 3"));
ProtoInstance1357.addChild(&fieldValue1362);

fieldValue& fieldValue1363 =  fieldValue();
fieldValue1363.setName(CString("fontSize"));
fieldValue1363.setValue(CString("2.4"));
ProtoInstance1357.addChild(&fieldValue1363);

fieldValue& fieldValue1364 =  fieldValue();
fieldValue1364.setName(CString("spacing"));
fieldValue1364.setValue(CString("1.2"));
ProtoInstance1357.addChild(&fieldValue1364);

Layer1091.addChild(&ProtoInstance1357);

ROUTE& ROUTE1365 =  ROUTE();
ROUTE1365.setFromNode(CString("JinLipsPart_Clock"));
ROUTE1365.setFromField(CString("fraction_changed"));
ROUTE1365.setToNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE1365.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1365);

ROUTE& ROUTE1366 =  ROUTE();
ROUTE1366.setFromNode(CString("AUJinLipsPart"));
ROUTE1366.setFromField(CString("startTime"));
ROUTE1366.setToNode(CString("JinLipsPart_Clock"));
ROUTE1366.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1366);

ROUTE& ROUTE1367 =  ROUTE();
ROUTE1367.setFromNode(CString("AUJinLipsPart"));
ROUTE1367.setFromField(CString("stopTime"));
ROUTE1367.setToNode(CString("JinLipsPart_Clock"));
ROUTE1367.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1367);

ROUTE& ROUTE1368 =  ROUTE();
ROUTE1368.setFromNode(CString("AUJinLipsPart"));
ROUTE1368.setFromField(CString("enabled"));
ROUTE1368.setToNode(CString("JinLipsPart_Clock"));
ROUTE1368.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1368);

ProtoInstance& ProtoInstance1369 =  ProtoInstance();
ProtoInstance1369.setName(CString("MenuItem"));
ProtoInstance1369.setDEF(CString("AUJinLipStretcher"));
fieldValue& fieldValue1370 =  fieldValue();
fieldValue1370.setName(CString("translation"));
fieldValue1370.setValue(CString("65 12.399999999999999 0"));
ProtoInstance1369.addChild(&fieldValue1370);

fieldValue& fieldValue1371 =  fieldValue();
fieldValue1371.setName(CString("textTranslation"));
fieldValue1371.setValue(CString("0 0 0"));
ProtoInstance1369.addChild(&fieldValue1371);

fieldValue& fieldValue1372 =  fieldValue();
fieldValue1372.setName(CString("description"));
fieldValue1372.setValue(CString("Jin Lip Stretcher"));
ProtoInstance1369.addChild(&fieldValue1372);

fieldValue& fieldValue1373 =  fieldValue();
fieldValue1373.setName(CString("menuItemString"));
fieldValue1373.setValue(CString("\"JinLipStretcher\""));
ProtoInstance1369.addChild(&fieldValue1373);

fieldValue& fieldValue1374 =  fieldValue();
fieldValue1374.setName(CString("size"));
fieldValue1374.setValue(CString("40 3"));
ProtoInstance1369.addChild(&fieldValue1374);

fieldValue& fieldValue1375 =  fieldValue();
fieldValue1375.setName(CString("fontSize"));
fieldValue1375.setValue(CString("2.4"));
ProtoInstance1369.addChild(&fieldValue1375);

fieldValue& fieldValue1376 =  fieldValue();
fieldValue1376.setName(CString("spacing"));
fieldValue1376.setValue(CString("1.2"));
ProtoInstance1369.addChild(&fieldValue1376);

Layer1091.addChild(&ProtoInstance1369);

ROUTE& ROUTE1377 =  ROUTE();
ROUTE1377.setFromNode(CString("JinLipStretcher_Clock"));
ROUTE1377.setFromField(CString("fraction_changed"));
ROUTE1377.setToNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE1377.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1377);

ROUTE& ROUTE1378 =  ROUTE();
ROUTE1378.setFromNode(CString("AUJinLipStretcher"));
ROUTE1378.setFromField(CString("startTime"));
ROUTE1378.setToNode(CString("JinLipStretcher_Clock"));
ROUTE1378.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1378);

ROUTE& ROUTE1379 =  ROUTE();
ROUTE1379.setFromNode(CString("AUJinLipStretcher"));
ROUTE1379.setFromField(CString("stopTime"));
ROUTE1379.setToNode(CString("JinLipStretcher_Clock"));
ROUTE1379.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1379);

ROUTE& ROUTE1380 =  ROUTE();
ROUTE1380.setFromNode(CString("AUJinLipStretcher"));
ROUTE1380.setFromField(CString("enabled"));
ROUTE1380.setToNode(CString("JinLipStretcher_Clock"));
ROUTE1380.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1380);

ProtoInstance& ProtoInstance1381 =  ProtoInstance();
ProtoInstance1381.setName(CString("MenuItem"));
ProtoInstance1381.setDEF(CString("AUJinLipSuck"));
fieldValue& fieldValue1382 =  fieldValue();
fieldValue1382.setName(CString("translation"));
fieldValue1382.setValue(CString("65 9.399999999999999 0"));
ProtoInstance1381.addChild(&fieldValue1382);

fieldValue& fieldValue1383 =  fieldValue();
fieldValue1383.setName(CString("textTranslation"));
fieldValue1383.setValue(CString("0 0 0"));
ProtoInstance1381.addChild(&fieldValue1383);

fieldValue& fieldValue1384 =  fieldValue();
fieldValue1384.setName(CString("description"));
fieldValue1384.setValue(CString("Jin Lip Suck"));
ProtoInstance1381.addChild(&fieldValue1384);

fieldValue& fieldValue1385 =  fieldValue();
fieldValue1385.setName(CString("menuItemString"));
fieldValue1385.setValue(CString("\"JinLipSuck\""));
ProtoInstance1381.addChild(&fieldValue1385);

fieldValue& fieldValue1386 =  fieldValue();
fieldValue1386.setName(CString("size"));
fieldValue1386.setValue(CString("40 3"));
ProtoInstance1381.addChild(&fieldValue1386);

fieldValue& fieldValue1387 =  fieldValue();
fieldValue1387.setName(CString("fontSize"));
fieldValue1387.setValue(CString("2.4"));
ProtoInstance1381.addChild(&fieldValue1387);

fieldValue& fieldValue1388 =  fieldValue();
fieldValue1388.setName(CString("spacing"));
fieldValue1388.setValue(CString("1.2"));
ProtoInstance1381.addChild(&fieldValue1388);

Layer1091.addChild(&ProtoInstance1381);

ROUTE& ROUTE1389 =  ROUTE();
ROUTE1389.setFromNode(CString("JinLipSuck_Clock"));
ROUTE1389.setFromField(CString("fraction_changed"));
ROUTE1389.setToNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE1389.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1389);

ROUTE& ROUTE1390 =  ROUTE();
ROUTE1390.setFromNode(CString("AUJinLipSuck"));
ROUTE1390.setFromField(CString("startTime"));
ROUTE1390.setToNode(CString("JinLipSuck_Clock"));
ROUTE1390.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1390);

ROUTE& ROUTE1391 =  ROUTE();
ROUTE1391.setFromNode(CString("AUJinLipSuck"));
ROUTE1391.setFromField(CString("stopTime"));
ROUTE1391.setToNode(CString("JinLipSuck_Clock"));
ROUTE1391.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1391);

ROUTE& ROUTE1392 =  ROUTE();
ROUTE1392.setFromNode(CString("AUJinLipSuck"));
ROUTE1392.setFromField(CString("enabled"));
ROUTE1392.setToNode(CString("JinLipSuck_Clock"));
ROUTE1392.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1392);

ProtoInstance& ProtoInstance1393 =  ProtoInstance();
ProtoInstance1393.setName(CString("MenuItem"));
ProtoInstance1393.setDEF(CString("AUJinLipTightener"));
fieldValue& fieldValue1394 =  fieldValue();
fieldValue1394.setName(CString("translation"));
fieldValue1394.setValue(CString("65 6.399999999999999 0"));
ProtoInstance1393.addChild(&fieldValue1394);

fieldValue& fieldValue1395 =  fieldValue();
fieldValue1395.setName(CString("textTranslation"));
fieldValue1395.setValue(CString("0 0 0"));
ProtoInstance1393.addChild(&fieldValue1395);

fieldValue& fieldValue1396 =  fieldValue();
fieldValue1396.setName(CString("description"));
fieldValue1396.setValue(CString("Jin Lip Tightener"));
ProtoInstance1393.addChild(&fieldValue1396);

fieldValue& fieldValue1397 =  fieldValue();
fieldValue1397.setName(CString("menuItemString"));
fieldValue1397.setValue(CString("\"JinLipTightener\""));
ProtoInstance1393.addChild(&fieldValue1397);

fieldValue& fieldValue1398 =  fieldValue();
fieldValue1398.setName(CString("size"));
fieldValue1398.setValue(CString("40 3"));
ProtoInstance1393.addChild(&fieldValue1398);

fieldValue& fieldValue1399 =  fieldValue();
fieldValue1399.setName(CString("fontSize"));
fieldValue1399.setValue(CString("2.4"));
ProtoInstance1393.addChild(&fieldValue1399);

fieldValue& fieldValue1400 =  fieldValue();
fieldValue1400.setName(CString("spacing"));
fieldValue1400.setValue(CString("1.2"));
ProtoInstance1393.addChild(&fieldValue1400);

Layer1091.addChild(&ProtoInstance1393);

ROUTE& ROUTE1401 =  ROUTE();
ROUTE1401.setFromNode(CString("JinLipTightener_Clock"));
ROUTE1401.setFromField(CString("fraction_changed"));
ROUTE1401.setToNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE1401.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1401);

ROUTE& ROUTE1402 =  ROUTE();
ROUTE1402.setFromNode(CString("AUJinLipTightener"));
ROUTE1402.setFromField(CString("startTime"));
ROUTE1402.setToNode(CString("JinLipTightener_Clock"));
ROUTE1402.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1402);

ROUTE& ROUTE1403 =  ROUTE();
ROUTE1403.setFromNode(CString("AUJinLipTightener"));
ROUTE1403.setFromField(CString("stopTime"));
ROUTE1403.setToNode(CString("JinLipTightener_Clock"));
ROUTE1403.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1403);

ROUTE& ROUTE1404 =  ROUTE();
ROUTE1404.setFromNode(CString("AUJinLipTightener"));
ROUTE1404.setFromField(CString("enabled"));
ROUTE1404.setToNode(CString("JinLipTightener_Clock"));
ROUTE1404.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1404);

ProtoInstance& ProtoInstance1405 =  ProtoInstance();
ProtoInstance1405.setName(CString("MenuItem"));
ProtoInstance1405.setDEF(CString("AUJinLowerLipDepressor"));
fieldValue& fieldValue1406 =  fieldValue();
fieldValue1406.setName(CString("translation"));
fieldValue1406.setValue(CString("65 3.399999999999995 0"));
ProtoInstance1405.addChild(&fieldValue1406);

fieldValue& fieldValue1407 =  fieldValue();
fieldValue1407.setName(CString("textTranslation"));
fieldValue1407.setValue(CString("0 0 0"));
ProtoInstance1405.addChild(&fieldValue1407);

fieldValue& fieldValue1408 =  fieldValue();
fieldValue1408.setName(CString("description"));
fieldValue1408.setValue(CString("Jin Lower Lip Depressor"));
ProtoInstance1405.addChild(&fieldValue1408);

fieldValue& fieldValue1409 =  fieldValue();
fieldValue1409.setName(CString("menuItemString"));
fieldValue1409.setValue(CString("\"JinLowerLipDepressor\""));
ProtoInstance1405.addChild(&fieldValue1409);

fieldValue& fieldValue1410 =  fieldValue();
fieldValue1410.setName(CString("size"));
fieldValue1410.setValue(CString("40 3"));
ProtoInstance1405.addChild(&fieldValue1410);

fieldValue& fieldValue1411 =  fieldValue();
fieldValue1411.setName(CString("fontSize"));
fieldValue1411.setValue(CString("2.4"));
ProtoInstance1405.addChild(&fieldValue1411);

fieldValue& fieldValue1412 =  fieldValue();
fieldValue1412.setName(CString("spacing"));
fieldValue1412.setValue(CString("1.2"));
ProtoInstance1405.addChild(&fieldValue1412);

Layer1091.addChild(&ProtoInstance1405);

ROUTE& ROUTE1413 =  ROUTE();
ROUTE1413.setFromNode(CString("JinLowerLipDepressor_Clock"));
ROUTE1413.setFromField(CString("fraction_changed"));
ROUTE1413.setToNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1413.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1413);

ROUTE& ROUTE1414 =  ROUTE();
ROUTE1414.setFromNode(CString("AUJinLowerLipDepressor"));
ROUTE1414.setFromField(CString("startTime"));
ROUTE1414.setToNode(CString("JinLowerLipDepressor_Clock"));
ROUTE1414.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1414);

ROUTE& ROUTE1415 =  ROUTE();
ROUTE1415.setFromNode(CString("AUJinLowerLipDepressor"));
ROUTE1415.setFromField(CString("stopTime"));
ROUTE1415.setToNode(CString("JinLowerLipDepressor_Clock"));
ROUTE1415.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1415);

ROUTE& ROUTE1416 =  ROUTE();
ROUTE1416.setFromNode(CString("AUJinLowerLipDepressor"));
ROUTE1416.setFromField(CString("enabled"));
ROUTE1416.setToNode(CString("JinLowerLipDepressor_Clock"));
ROUTE1416.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1416);

ProtoInstance& ProtoInstance1417 =  ProtoInstance();
ProtoInstance1417.setName(CString("MenuItem"));
ProtoInstance1417.setDEF(CString("AUJinMouthStretch"));
fieldValue& fieldValue1418 =  fieldValue();
fieldValue1418.setName(CString("translation"));
fieldValue1418.setValue(CString("65 0.399999999999995 0"));
ProtoInstance1417.addChild(&fieldValue1418);

fieldValue& fieldValue1419 =  fieldValue();
fieldValue1419.setName(CString("textTranslation"));
fieldValue1419.setValue(CString("0 0 0"));
ProtoInstance1417.addChild(&fieldValue1419);

fieldValue& fieldValue1420 =  fieldValue();
fieldValue1420.setName(CString("description"));
fieldValue1420.setValue(CString("Jin Mouth Stretch"));
ProtoInstance1417.addChild(&fieldValue1420);

fieldValue& fieldValue1421 =  fieldValue();
fieldValue1421.setName(CString("menuItemString"));
fieldValue1421.setValue(CString("\"JinMouthStretch\""));
ProtoInstance1417.addChild(&fieldValue1421);

fieldValue& fieldValue1422 =  fieldValue();
fieldValue1422.setName(CString("size"));
fieldValue1422.setValue(CString("40 3"));
ProtoInstance1417.addChild(&fieldValue1422);

fieldValue& fieldValue1423 =  fieldValue();
fieldValue1423.setName(CString("fontSize"));
fieldValue1423.setValue(CString("2.4"));
ProtoInstance1417.addChild(&fieldValue1423);

fieldValue& fieldValue1424 =  fieldValue();
fieldValue1424.setName(CString("spacing"));
fieldValue1424.setValue(CString("1.2"));
ProtoInstance1417.addChild(&fieldValue1424);

Layer1091.addChild(&ProtoInstance1417);

ROUTE& ROUTE1425 =  ROUTE();
ROUTE1425.setFromNode(CString("JinMouthStretch_Clock"));
ROUTE1425.setFromField(CString("fraction_changed"));
ROUTE1425.setToNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1425.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1425);

ROUTE& ROUTE1426 =  ROUTE();
ROUTE1426.setFromNode(CString("AUJinMouthStretch"));
ROUTE1426.setFromField(CString("startTime"));
ROUTE1426.setToNode(CString("JinMouthStretch_Clock"));
ROUTE1426.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1426);

ROUTE& ROUTE1427 =  ROUTE();
ROUTE1427.setFromNode(CString("AUJinMouthStretch"));
ROUTE1427.setFromField(CString("stopTime"));
ROUTE1427.setToNode(CString("JinMouthStretch_Clock"));
ROUTE1427.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1427);

ROUTE& ROUTE1428 =  ROUTE();
ROUTE1428.setFromNode(CString("AUJinMouthStretch"));
ROUTE1428.setFromField(CString("enabled"));
ROUTE1428.setToNode(CString("JinMouthStretch_Clock"));
ROUTE1428.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1428);

ProtoInstance& ProtoInstance1429 =  ProtoInstance();
ProtoInstance1429.setName(CString("MenuItem"));
ProtoInstance1429.setDEF(CString("AUJinNasolabialDeepener"));
fieldValue& fieldValue1430 =  fieldValue();
fieldValue1430.setName(CString("translation"));
fieldValue1430.setValue(CString("65 -2.6000000000000085 0"));
ProtoInstance1429.addChild(&fieldValue1430);

fieldValue& fieldValue1431 =  fieldValue();
fieldValue1431.setName(CString("textTranslation"));
fieldValue1431.setValue(CString("0 0 0"));
ProtoInstance1429.addChild(&fieldValue1431);

fieldValue& fieldValue1432 =  fieldValue();
fieldValue1432.setName(CString("description"));
fieldValue1432.setValue(CString("Jin Nasolabial Deepener"));
ProtoInstance1429.addChild(&fieldValue1432);

fieldValue& fieldValue1433 =  fieldValue();
fieldValue1433.setName(CString("menuItemString"));
fieldValue1433.setValue(CString("\"JinNasolabialDeepener\""));
ProtoInstance1429.addChild(&fieldValue1433);

fieldValue& fieldValue1434 =  fieldValue();
fieldValue1434.setName(CString("size"));
fieldValue1434.setValue(CString("40 3"));
ProtoInstance1429.addChild(&fieldValue1434);

fieldValue& fieldValue1435 =  fieldValue();
fieldValue1435.setName(CString("fontSize"));
fieldValue1435.setValue(CString("2.4"));
ProtoInstance1429.addChild(&fieldValue1435);

fieldValue& fieldValue1436 =  fieldValue();
fieldValue1436.setName(CString("spacing"));
fieldValue1436.setValue(CString("1.2"));
ProtoInstance1429.addChild(&fieldValue1436);

Layer1091.addChild(&ProtoInstance1429);

ROUTE& ROUTE1437 =  ROUTE();
ROUTE1437.setFromNode(CString("JinNasolabialDeepener_Clock"));
ROUTE1437.setFromField(CString("fraction_changed"));
ROUTE1437.setToNode(CString("AnimationAdapter_JinNasolabialDeepener"));
ROUTE1437.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1437);

ROUTE& ROUTE1438 =  ROUTE();
ROUTE1438.setFromNode(CString("AUJinNasolabialDeepener"));
ROUTE1438.setFromField(CString("startTime"));
ROUTE1438.setToNode(CString("JinNasolabialDeepener_Clock"));
ROUTE1438.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1438);

ROUTE& ROUTE1439 =  ROUTE();
ROUTE1439.setFromNode(CString("AUJinNasolabialDeepener"));
ROUTE1439.setFromField(CString("stopTime"));
ROUTE1439.setToNode(CString("JinNasolabialDeepener_Clock"));
ROUTE1439.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1439);

ROUTE& ROUTE1440 =  ROUTE();
ROUTE1440.setFromNode(CString("AUJinNasolabialDeepener"));
ROUTE1440.setFromField(CString("enabled"));
ROUTE1440.setToNode(CString("JinNasolabialDeepener_Clock"));
ROUTE1440.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1440);

ProtoInstance& ProtoInstance1441 =  ProtoInstance();
ProtoInstance1441.setName(CString("MenuItem"));
ProtoInstance1441.setDEF(CString("AUJinNoseWrinkler"));
fieldValue& fieldValue1442 =  fieldValue();
fieldValue1442.setName(CString("translation"));
fieldValue1442.setValue(CString("65 -5.6000000000000085 0"));
ProtoInstance1441.addChild(&fieldValue1442);

fieldValue& fieldValue1443 =  fieldValue();
fieldValue1443.setName(CString("textTranslation"));
fieldValue1443.setValue(CString("0 0 0"));
ProtoInstance1441.addChild(&fieldValue1443);

fieldValue& fieldValue1444 =  fieldValue();
fieldValue1444.setName(CString("description"));
fieldValue1444.setValue(CString("Jin Nose Wrinkler"));
ProtoInstance1441.addChild(&fieldValue1444);

fieldValue& fieldValue1445 =  fieldValue();
fieldValue1445.setName(CString("menuItemString"));
fieldValue1445.setValue(CString("\"JinNoseWrinkler\""));
ProtoInstance1441.addChild(&fieldValue1445);

fieldValue& fieldValue1446 =  fieldValue();
fieldValue1446.setName(CString("size"));
fieldValue1446.setValue(CString("40 3"));
ProtoInstance1441.addChild(&fieldValue1446);

fieldValue& fieldValue1447 =  fieldValue();
fieldValue1447.setName(CString("fontSize"));
fieldValue1447.setValue(CString("2.4"));
ProtoInstance1441.addChild(&fieldValue1447);

fieldValue& fieldValue1448 =  fieldValue();
fieldValue1448.setName(CString("spacing"));
fieldValue1448.setValue(CString("1.2"));
ProtoInstance1441.addChild(&fieldValue1448);

Layer1091.addChild(&ProtoInstance1441);

ROUTE& ROUTE1449 =  ROUTE();
ROUTE1449.setFromNode(CString("JinNoseWrinkler_Clock"));
ROUTE1449.setFromField(CString("fraction_changed"));
ROUTE1449.setToNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1449.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1449);

ROUTE& ROUTE1450 =  ROUTE();
ROUTE1450.setFromNode(CString("AUJinNoseWrinkler"));
ROUTE1450.setFromField(CString("startTime"));
ROUTE1450.setToNode(CString("JinNoseWrinkler_Clock"));
ROUTE1450.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1450);

ROUTE& ROUTE1451 =  ROUTE();
ROUTE1451.setFromNode(CString("AUJinNoseWrinkler"));
ROUTE1451.setFromField(CString("stopTime"));
ROUTE1451.setToNode(CString("JinNoseWrinkler_Clock"));
ROUTE1451.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1451);

ROUTE& ROUTE1452 =  ROUTE();
ROUTE1452.setFromNode(CString("AUJinNoseWrinkler"));
ROUTE1452.setFromField(CString("enabled"));
ROUTE1452.setToNode(CString("JinNoseWrinkler_Clock"));
ROUTE1452.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1452);

ProtoInstance& ProtoInstance1453 =  ProtoInstance();
ProtoInstance1453.setName(CString("MenuItem"));
ProtoInstance1453.setDEF(CString("AUJinOuterBrowRaiser"));
fieldValue& fieldValue1454 =  fieldValue();
fieldValue1454.setName(CString("translation"));
fieldValue1454.setValue(CString("65 -8.600000000000009 0"));
ProtoInstance1453.addChild(&fieldValue1454);

fieldValue& fieldValue1455 =  fieldValue();
fieldValue1455.setName(CString("textTranslation"));
fieldValue1455.setValue(CString("0 0 0"));
ProtoInstance1453.addChild(&fieldValue1455);

fieldValue& fieldValue1456 =  fieldValue();
fieldValue1456.setName(CString("description"));
fieldValue1456.setValue(CString("Jin Outer Brow Raiser"));
ProtoInstance1453.addChild(&fieldValue1456);

fieldValue& fieldValue1457 =  fieldValue();
fieldValue1457.setName(CString("menuItemString"));
fieldValue1457.setValue(CString("\"JinOuterBrowRaiser\""));
ProtoInstance1453.addChild(&fieldValue1457);

fieldValue& fieldValue1458 =  fieldValue();
fieldValue1458.setName(CString("size"));
fieldValue1458.setValue(CString("40 3"));
ProtoInstance1453.addChild(&fieldValue1458);

fieldValue& fieldValue1459 =  fieldValue();
fieldValue1459.setName(CString("fontSize"));
fieldValue1459.setValue(CString("2.4"));
ProtoInstance1453.addChild(&fieldValue1459);

fieldValue& fieldValue1460 =  fieldValue();
fieldValue1460.setName(CString("spacing"));
fieldValue1460.setValue(CString("1.2"));
ProtoInstance1453.addChild(&fieldValue1460);

Layer1091.addChild(&ProtoInstance1453);

ROUTE& ROUTE1461 =  ROUTE();
ROUTE1461.setFromNode(CString("JinOuterBrowRaiser_Clock"));
ROUTE1461.setFromField(CString("fraction_changed"));
ROUTE1461.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1461.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1461);

ROUTE& ROUTE1462 =  ROUTE();
ROUTE1462.setFromNode(CString("AUJinOuterBrowRaiser"));
ROUTE1462.setFromField(CString("startTime"));
ROUTE1462.setToNode(CString("JinOuterBrowRaiser_Clock"));
ROUTE1462.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1462);

ROUTE& ROUTE1463 =  ROUTE();
ROUTE1463.setFromNode(CString("AUJinOuterBrowRaiser"));
ROUTE1463.setFromField(CString("stopTime"));
ROUTE1463.setToNode(CString("JinOuterBrowRaiser_Clock"));
ROUTE1463.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1463);

ROUTE& ROUTE1464 =  ROUTE();
ROUTE1464.setFromNode(CString("AUJinOuterBrowRaiser"));
ROUTE1464.setFromField(CString("enabled"));
ROUTE1464.setToNode(CString("JinOuterBrowRaiser_Clock"));
ROUTE1464.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1464);

ProtoInstance& ProtoInstance1465 =  ProtoInstance();
ProtoInstance1465.setName(CString("MenuItem"));
ProtoInstance1465.setDEF(CString("AUJinSlit"));
fieldValue& fieldValue1466 =  fieldValue();
fieldValue1466.setName(CString("translation"));
fieldValue1466.setValue(CString("65 -11.600000000000009 0"));
ProtoInstance1465.addChild(&fieldValue1466);

fieldValue& fieldValue1467 =  fieldValue();
fieldValue1467.setName(CString("textTranslation"));
fieldValue1467.setValue(CString("0 0 0"));
ProtoInstance1465.addChild(&fieldValue1467);

fieldValue& fieldValue1468 =  fieldValue();
fieldValue1468.setName(CString("description"));
fieldValue1468.setValue(CString("Jin Slit"));
ProtoInstance1465.addChild(&fieldValue1468);

fieldValue& fieldValue1469 =  fieldValue();
fieldValue1469.setName(CString("menuItemString"));
fieldValue1469.setValue(CString("\"JinSlit\""));
ProtoInstance1465.addChild(&fieldValue1469);

fieldValue& fieldValue1470 =  fieldValue();
fieldValue1470.setName(CString("size"));
fieldValue1470.setValue(CString("40 3"));
ProtoInstance1465.addChild(&fieldValue1470);

fieldValue& fieldValue1471 =  fieldValue();
fieldValue1471.setName(CString("fontSize"));
fieldValue1471.setValue(CString("2.4"));
ProtoInstance1465.addChild(&fieldValue1471);

fieldValue& fieldValue1472 =  fieldValue();
fieldValue1472.setName(CString("spacing"));
fieldValue1472.setValue(CString("1.2"));
ProtoInstance1465.addChild(&fieldValue1472);

Layer1091.addChild(&ProtoInstance1465);

ROUTE& ROUTE1473 =  ROUTE();
ROUTE1473.setFromNode(CString("JinSlit_Clock"));
ROUTE1473.setFromField(CString("fraction_changed"));
ROUTE1473.setToNode(CString("AnimationAdapter_JinSlit"));
ROUTE1473.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1473);

ROUTE& ROUTE1474 =  ROUTE();
ROUTE1474.setFromNode(CString("AUJinSlit"));
ROUTE1474.setFromField(CString("startTime"));
ROUTE1474.setToNode(CString("JinSlit_Clock"));
ROUTE1474.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1474);

ROUTE& ROUTE1475 =  ROUTE();
ROUTE1475.setFromNode(CString("AUJinSlit"));
ROUTE1475.setFromField(CString("stopTime"));
ROUTE1475.setToNode(CString("JinSlit_Clock"));
ROUTE1475.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1475);

ROUTE& ROUTE1476 =  ROUTE();
ROUTE1476.setFromNode(CString("AUJinSlit"));
ROUTE1476.setFromField(CString("enabled"));
ROUTE1476.setToNode(CString("JinSlit_Clock"));
ROUTE1476.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1476);

ProtoInstance& ProtoInstance1477 =  ProtoInstance();
ProtoInstance1477.setName(CString("MenuItem"));
ProtoInstance1477.setDEF(CString("AUJinSquint"));
fieldValue& fieldValue1478 =  fieldValue();
fieldValue1478.setName(CString("translation"));
fieldValue1478.setValue(CString("65 -14.600000000000001 0"));
ProtoInstance1477.addChild(&fieldValue1478);

fieldValue& fieldValue1479 =  fieldValue();
fieldValue1479.setName(CString("textTranslation"));
fieldValue1479.setValue(CString("0 0 0"));
ProtoInstance1477.addChild(&fieldValue1479);

fieldValue& fieldValue1480 =  fieldValue();
fieldValue1480.setName(CString("description"));
fieldValue1480.setValue(CString("Jin Squint"));
ProtoInstance1477.addChild(&fieldValue1480);

fieldValue& fieldValue1481 =  fieldValue();
fieldValue1481.setName(CString("menuItemString"));
fieldValue1481.setValue(CString("\"JinSquint\""));
ProtoInstance1477.addChild(&fieldValue1481);

fieldValue& fieldValue1482 =  fieldValue();
fieldValue1482.setName(CString("size"));
fieldValue1482.setValue(CString("40 3"));
ProtoInstance1477.addChild(&fieldValue1482);

fieldValue& fieldValue1483 =  fieldValue();
fieldValue1483.setName(CString("fontSize"));
fieldValue1483.setValue(CString("2.4"));
ProtoInstance1477.addChild(&fieldValue1483);

fieldValue& fieldValue1484 =  fieldValue();
fieldValue1484.setName(CString("spacing"));
fieldValue1484.setValue(CString("1.2"));
ProtoInstance1477.addChild(&fieldValue1484);

Layer1091.addChild(&ProtoInstance1477);

ROUTE& ROUTE1485 =  ROUTE();
ROUTE1485.setFromNode(CString("JinSquint_Clock"));
ROUTE1485.setFromField(CString("fraction_changed"));
ROUTE1485.setToNode(CString("AnimationAdapter_JinSquint"));
ROUTE1485.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1485);

ROUTE& ROUTE1486 =  ROUTE();
ROUTE1486.setFromNode(CString("AUJinSquint"));
ROUTE1486.setFromField(CString("startTime"));
ROUTE1486.setToNode(CString("JinSquint_Clock"));
ROUTE1486.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1486);

ROUTE& ROUTE1487 =  ROUTE();
ROUTE1487.setFromNode(CString("AUJinSquint"));
ROUTE1487.setFromField(CString("stopTime"));
ROUTE1487.setToNode(CString("JinSquint_Clock"));
ROUTE1487.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1487);

ROUTE& ROUTE1488 =  ROUTE();
ROUTE1488.setFromNode(CString("AUJinSquint"));
ROUTE1488.setFromField(CString("enabled"));
ROUTE1488.setToNode(CString("JinSquint_Clock"));
ROUTE1488.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1488);

ProtoInstance& ProtoInstance1489 =  ProtoInstance();
ProtoInstance1489.setName(CString("MenuItem"));
ProtoInstance1489.setDEF(CString("AUJinUpperLidRaiser"));
fieldValue& fieldValue1490 =  fieldValue();
fieldValue1490.setName(CString("translation"));
fieldValue1490.setValue(CString("65 -17.6 0"));
ProtoInstance1489.addChild(&fieldValue1490);

fieldValue& fieldValue1491 =  fieldValue();
fieldValue1491.setName(CString("textTranslation"));
fieldValue1491.setValue(CString("0 0 0"));
ProtoInstance1489.addChild(&fieldValue1491);

fieldValue& fieldValue1492 =  fieldValue();
fieldValue1492.setName(CString("description"));
fieldValue1492.setValue(CString("Jin Upper Lid Raiser"));
ProtoInstance1489.addChild(&fieldValue1492);

fieldValue& fieldValue1493 =  fieldValue();
fieldValue1493.setName(CString("menuItemString"));
fieldValue1493.setValue(CString("\"JinUpperLidRaiser\""));
ProtoInstance1489.addChild(&fieldValue1493);

fieldValue& fieldValue1494 =  fieldValue();
fieldValue1494.setName(CString("size"));
fieldValue1494.setValue(CString("40 3"));
ProtoInstance1489.addChild(&fieldValue1494);

fieldValue& fieldValue1495 =  fieldValue();
fieldValue1495.setName(CString("fontSize"));
fieldValue1495.setValue(CString("2.4"));
ProtoInstance1489.addChild(&fieldValue1495);

fieldValue& fieldValue1496 =  fieldValue();
fieldValue1496.setName(CString("spacing"));
fieldValue1496.setValue(CString("1.2"));
ProtoInstance1489.addChild(&fieldValue1496);

Layer1091.addChild(&ProtoInstance1489);

ROUTE& ROUTE1497 =  ROUTE();
ROUTE1497.setFromNode(CString("JinUpperLidRaiser_Clock"));
ROUTE1497.setFromField(CString("fraction_changed"));
ROUTE1497.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1497.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1497);

ROUTE& ROUTE1498 =  ROUTE();
ROUTE1498.setFromNode(CString("AUJinUpperLidRaiser"));
ROUTE1498.setFromField(CString("startTime"));
ROUTE1498.setToNode(CString("JinUpperLidRaiser_Clock"));
ROUTE1498.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1498);

ROUTE& ROUTE1499 =  ROUTE();
ROUTE1499.setFromNode(CString("AUJinUpperLidRaiser"));
ROUTE1499.setFromField(CString("stopTime"));
ROUTE1499.setToNode(CString("JinUpperLidRaiser_Clock"));
ROUTE1499.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1499);

ROUTE& ROUTE1500 =  ROUTE();
ROUTE1500.setFromNode(CString("AUJinUpperLidRaiser"));
ROUTE1500.setFromField(CString("enabled"));
ROUTE1500.setToNode(CString("JinUpperLidRaiser_Clock"));
ROUTE1500.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1500);

ProtoInstance& ProtoInstance1501 =  ProtoInstance();
ProtoInstance1501.setName(CString("MenuItem"));
ProtoInstance1501.setDEF(CString("AUJinUpperLipRaiser"));
fieldValue& fieldValue1502 =  fieldValue();
fieldValue1502.setName(CString("translation"));
fieldValue1502.setValue(CString("65 -20.6 0"));
ProtoInstance1501.addChild(&fieldValue1502);

fieldValue& fieldValue1503 =  fieldValue();
fieldValue1503.setName(CString("textTranslation"));
fieldValue1503.setValue(CString("0 0 0"));
ProtoInstance1501.addChild(&fieldValue1503);

fieldValue& fieldValue1504 =  fieldValue();
fieldValue1504.setName(CString("description"));
fieldValue1504.setValue(CString("Jin Upper Lip Raiser"));
ProtoInstance1501.addChild(&fieldValue1504);

fieldValue& fieldValue1505 =  fieldValue();
fieldValue1505.setName(CString("menuItemString"));
fieldValue1505.setValue(CString("\"JinUpperLipRaiser\""));
ProtoInstance1501.addChild(&fieldValue1505);

fieldValue& fieldValue1506 =  fieldValue();
fieldValue1506.setName(CString("size"));
fieldValue1506.setValue(CString("40 3"));
ProtoInstance1501.addChild(&fieldValue1506);

fieldValue& fieldValue1507 =  fieldValue();
fieldValue1507.setName(CString("fontSize"));
fieldValue1507.setValue(CString("2.4"));
ProtoInstance1501.addChild(&fieldValue1507);

fieldValue& fieldValue1508 =  fieldValue();
fieldValue1508.setName(CString("spacing"));
fieldValue1508.setValue(CString("1.2"));
ProtoInstance1501.addChild(&fieldValue1508);

Layer1091.addChild(&ProtoInstance1501);

ROUTE& ROUTE1509 =  ROUTE();
ROUTE1509.setFromNode(CString("JinUpperLipRaiser_Clock"));
ROUTE1509.setFromField(CString("fraction_changed"));
ROUTE1509.setToNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1509.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1509);

ROUTE& ROUTE1510 =  ROUTE();
ROUTE1510.setFromNode(CString("AUJinUpperLipRaiser"));
ROUTE1510.setFromField(CString("startTime"));
ROUTE1510.setToNode(CString("JinUpperLipRaiser_Clock"));
ROUTE1510.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1510);

ROUTE& ROUTE1511 =  ROUTE();
ROUTE1511.setFromNode(CString("AUJinUpperLipRaiser"));
ROUTE1511.setFromField(CString("stopTime"));
ROUTE1511.setToNode(CString("JinUpperLipRaiser_Clock"));
ROUTE1511.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1511);

ROUTE& ROUTE1512 =  ROUTE();
ROUTE1512.setFromNode(CString("AUJinUpperLipRaiser"));
ROUTE1512.setFromField(CString("enabled"));
ROUTE1512.setToNode(CString("JinUpperLipRaiser_Clock"));
ROUTE1512.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1512);

ProtoInstance& ProtoInstance1513 =  ProtoInstance();
ProtoInstance1513.setName(CString("MenuItem"));
ProtoInstance1513.setDEF(CString("AUJinWink"));
fieldValue& fieldValue1514 =  fieldValue();
fieldValue1514.setName(CString("translation"));
fieldValue1514.setValue(CString("65 -23.599999999999994 0"));
ProtoInstance1513.addChild(&fieldValue1514);

fieldValue& fieldValue1515 =  fieldValue();
fieldValue1515.setName(CString("textTranslation"));
fieldValue1515.setValue(CString("0 0 0"));
ProtoInstance1513.addChild(&fieldValue1515);

fieldValue& fieldValue1516 =  fieldValue();
fieldValue1516.setName(CString("description"));
fieldValue1516.setValue(CString("Jin Wink"));
ProtoInstance1513.addChild(&fieldValue1516);

fieldValue& fieldValue1517 =  fieldValue();
fieldValue1517.setName(CString("menuItemString"));
fieldValue1517.setValue(CString("\"JinWink\""));
ProtoInstance1513.addChild(&fieldValue1517);

fieldValue& fieldValue1518 =  fieldValue();
fieldValue1518.setName(CString("size"));
fieldValue1518.setValue(CString("40 3"));
ProtoInstance1513.addChild(&fieldValue1518);

fieldValue& fieldValue1519 =  fieldValue();
fieldValue1519.setName(CString("fontSize"));
fieldValue1519.setValue(CString("2.4"));
ProtoInstance1513.addChild(&fieldValue1519);

fieldValue& fieldValue1520 =  fieldValue();
fieldValue1520.setName(CString("spacing"));
fieldValue1520.setValue(CString("1.2"));
ProtoInstance1513.addChild(&fieldValue1520);

Layer1091.addChild(&ProtoInstance1513);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromNode(CString("JinWink_Clock"));
ROUTE1521.setFromField(CString("fraction_changed"));
ROUTE1521.setToNode(CString("AnimationAdapter_JinWink"));
ROUTE1521.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1521);

ROUTE& ROUTE1522 =  ROUTE();
ROUTE1522.setFromNode(CString("AUJinWink"));
ROUTE1522.setFromField(CString("startTime"));
ROUTE1522.setToNode(CString("JinWink_Clock"));
ROUTE1522.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1522);

ROUTE& ROUTE1523 =  ROUTE();
ROUTE1523.setFromNode(CString("AUJinWink"));
ROUTE1523.setFromField(CString("stopTime"));
ROUTE1523.setToNode(CString("JinWink_Clock"));
ROUTE1523.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1523);

ROUTE& ROUTE1524 =  ROUTE();
ROUTE1524.setFromNode(CString("AUJinWink"));
ROUTE1524.setFromField(CString("enabled"));
ROUTE1524.setToNode(CString("JinWink_Clock"));
ROUTE1524.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1524);

ProtoInstance& ProtoInstance1525 =  ProtoInstance();
ProtoInstance1525.setName(CString("MenuItem"));
ProtoInstance1525.setDEF(CString("HappinessJoy"));
fieldValue& fieldValue1526 =  fieldValue();
fieldValue1526.setName(CString("translation"));
fieldValue1526.setValue(CString("24 63.4 0"));
ProtoInstance1525.addChild(&fieldValue1526);

fieldValue& fieldValue1527 =  fieldValue();
fieldValue1527.setName(CString("textTranslation"));
fieldValue1527.setValue(CString("0 0 0"));
ProtoInstance1525.addChild(&fieldValue1527);

fieldValue& fieldValue1528 =  fieldValue();
fieldValue1528.setName(CString("description"));
fieldValue1528.setValue(CString("HappinessJoy"));
ProtoInstance1525.addChild(&fieldValue1528);

fieldValue& fieldValue1529 =  fieldValue();
fieldValue1529.setName(CString("menuItemString"));
fieldValue1529.setValue(CString("\"HappinessJoy\""));
ProtoInstance1525.addChild(&fieldValue1529);

fieldValue& fieldValue1530 =  fieldValue();
fieldValue1530.setName(CString("size"));
fieldValue1530.setValue(CString("40 3"));
ProtoInstance1525.addChild(&fieldValue1530);

fieldValue& fieldValue1531 =  fieldValue();
fieldValue1531.setName(CString("fontSize"));
fieldValue1531.setValue(CString("2.4"));
ProtoInstance1525.addChild(&fieldValue1531);

fieldValue& fieldValue1532 =  fieldValue();
fieldValue1532.setName(CString("spacing"));
fieldValue1532.setValue(CString("1.2"));
ProtoInstance1525.addChild(&fieldValue1532);

Layer1091.addChild(&ProtoInstance1525);

ROUTE& ROUTE1533 =  ROUTE();
ROUTE1533.setFromNode(CString("HappinessJoy_Clock"));
ROUTE1533.setFromField(CString("fraction_changed"));
ROUTE1533.setToNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE1533.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1533);

ROUTE& ROUTE1534 =  ROUTE();
ROUTE1534.setFromNode(CString("HappinessJoy_Clock"));
ROUTE1534.setFromField(CString("fraction_changed"));
ROUTE1534.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE1534.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1534);

ROUTE& ROUTE1535 =  ROUTE();
ROUTE1535.setFromNode(CString("HappinessJoy"));
ROUTE1535.setFromField(CString("startTime"));
ROUTE1535.setToNode(CString("HappinessJoy_Clock"));
ROUTE1535.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1535);

ROUTE& ROUTE1536 =  ROUTE();
ROUTE1536.setFromNode(CString("HappinessJoy"));
ROUTE1536.setFromField(CString("stopTime"));
ROUTE1536.setToNode(CString("HappinessJoy_Clock"));
ROUTE1536.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1536);

ROUTE& ROUTE1537 =  ROUTE();
ROUTE1537.setFromNode(CString("HappinessJoy"));
ROUTE1537.setFromField(CString("enabled"));
ROUTE1537.setToNode(CString("HappinessJoy_Clock"));
ROUTE1537.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1537);

ProtoInstance& ProtoInstance1538 =  ProtoInstance();
ProtoInstance1538.setName(CString("MenuItem"));
ProtoInstance1538.setDEF(CString("Sadness"));
fieldValue& fieldValue1539 =  fieldValue();
fieldValue1539.setName(CString("translation"));
fieldValue1539.setValue(CString("24 60.61666666666666 0"));
ProtoInstance1538.addChild(&fieldValue1539);

fieldValue& fieldValue1540 =  fieldValue();
fieldValue1540.setName(CString("textTranslation"));
fieldValue1540.setValue(CString("0 0 0"));
ProtoInstance1538.addChild(&fieldValue1540);

fieldValue& fieldValue1541 =  fieldValue();
fieldValue1541.setName(CString("description"));
fieldValue1541.setValue(CString("Sadness"));
ProtoInstance1538.addChild(&fieldValue1541);

fieldValue& fieldValue1542 =  fieldValue();
fieldValue1542.setName(CString("menuItemString"));
fieldValue1542.setValue(CString("\"Sadness\""));
ProtoInstance1538.addChild(&fieldValue1542);

fieldValue& fieldValue1543 =  fieldValue();
fieldValue1543.setName(CString("size"));
fieldValue1543.setValue(CString("40 3"));
ProtoInstance1538.addChild(&fieldValue1543);

fieldValue& fieldValue1544 =  fieldValue();
fieldValue1544.setName(CString("fontSize"));
fieldValue1544.setValue(CString("2.4"));
ProtoInstance1538.addChild(&fieldValue1544);

fieldValue& fieldValue1545 =  fieldValue();
fieldValue1545.setName(CString("spacing"));
fieldValue1545.setValue(CString("1.2"));
ProtoInstance1538.addChild(&fieldValue1545);

Layer1091.addChild(&ProtoInstance1538);

ROUTE& ROUTE1546 =  ROUTE();
ROUTE1546.setFromNode(CString("Sadness_Clock"));
ROUTE1546.setFromField(CString("fraction_changed"));
ROUTE1546.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1546.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1546);

ROUTE& ROUTE1547 =  ROUTE();
ROUTE1547.setFromNode(CString("Sadness_Clock"));
ROUTE1547.setFromField(CString("fraction_changed"));
ROUTE1547.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1547.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1547);

ROUTE& ROUTE1548 =  ROUTE();
ROUTE1548.setFromNode(CString("Sadness_Clock"));
ROUTE1548.setFromField(CString("fraction_changed"));
ROUTE1548.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE1548.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1548);

ROUTE& ROUTE1549 =  ROUTE();
ROUTE1549.setFromNode(CString("Sadness"));
ROUTE1549.setFromField(CString("startTime"));
ROUTE1549.setToNode(CString("Sadness_Clock"));
ROUTE1549.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1549);

ROUTE& ROUTE1550 =  ROUTE();
ROUTE1550.setFromNode(CString("Sadness"));
ROUTE1550.setFromField(CString("stopTime"));
ROUTE1550.setToNode(CString("Sadness_Clock"));
ROUTE1550.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1550);

ROUTE& ROUTE1551 =  ROUTE();
ROUTE1551.setFromNode(CString("Sadness"));
ROUTE1551.setFromField(CString("enabled"));
ROUTE1551.setToNode(CString("Sadness_Clock"));
ROUTE1551.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1551);

ProtoInstance& ProtoInstance1552 =  ProtoInstance();
ProtoInstance1552.setName(CString("MenuItem"));
ProtoInstance1552.setDEF(CString("Surprise"));
fieldValue& fieldValue1553 =  fieldValue();
fieldValue1553.setName(CString("translation"));
fieldValue1553.setValue(CString("24 57.83333333333333 0"));
ProtoInstance1552.addChild(&fieldValue1553);

fieldValue& fieldValue1554 =  fieldValue();
fieldValue1554.setName(CString("textTranslation"));
fieldValue1554.setValue(CString("0 0 0"));
ProtoInstance1552.addChild(&fieldValue1554);

fieldValue& fieldValue1555 =  fieldValue();
fieldValue1555.setName(CString("description"));
fieldValue1555.setValue(CString("Surprise"));
ProtoInstance1552.addChild(&fieldValue1555);

fieldValue& fieldValue1556 =  fieldValue();
fieldValue1556.setName(CString("menuItemString"));
fieldValue1556.setValue(CString("\"Surprise\""));
ProtoInstance1552.addChild(&fieldValue1556);

fieldValue& fieldValue1557 =  fieldValue();
fieldValue1557.setName(CString("size"));
fieldValue1557.setValue(CString("40 3"));
ProtoInstance1552.addChild(&fieldValue1557);

fieldValue& fieldValue1558 =  fieldValue();
fieldValue1558.setName(CString("fontSize"));
fieldValue1558.setValue(CString("2.4"));
ProtoInstance1552.addChild(&fieldValue1558);

fieldValue& fieldValue1559 =  fieldValue();
fieldValue1559.setName(CString("spacing"));
fieldValue1559.setValue(CString("1.2"));
ProtoInstance1552.addChild(&fieldValue1559);

Layer1091.addChild(&ProtoInstance1552);

ROUTE& ROUTE1560 =  ROUTE();
ROUTE1560.setFromNode(CString("Surprise_Clock"));
ROUTE1560.setFromField(CString("fraction_changed"));
ROUTE1560.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1560.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1560);

ROUTE& ROUTE1561 =  ROUTE();
ROUTE1561.setFromNode(CString("Surprise_Clock"));
ROUTE1561.setFromField(CString("fraction_changed"));
ROUTE1561.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1561.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1561);

ROUTE& ROUTE1562 =  ROUTE();
ROUTE1562.setFromNode(CString("Surprise_Clock"));
ROUTE1562.setFromField(CString("fraction_changed"));
ROUTE1562.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1562.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1562);

ROUTE& ROUTE1563 =  ROUTE();
ROUTE1563.setFromNode(CString("Surprise_Clock"));
ROUTE1563.setFromField(CString("fraction_changed"));
ROUTE1563.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE1563.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1563);

ROUTE& ROUTE1564 =  ROUTE();
ROUTE1564.setFromNode(CString("Surprise"));
ROUTE1564.setFromField(CString("startTime"));
ROUTE1564.setToNode(CString("Surprise_Clock"));
ROUTE1564.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1564);

ROUTE& ROUTE1565 =  ROUTE();
ROUTE1565.setFromNode(CString("Surprise"));
ROUTE1565.setFromField(CString("stopTime"));
ROUTE1565.setToNode(CString("Surprise_Clock"));
ROUTE1565.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1565);

ROUTE& ROUTE1566 =  ROUTE();
ROUTE1566.setFromNode(CString("Surprise"));
ROUTE1566.setFromField(CString("enabled"));
ROUTE1566.setToNode(CString("Surprise_Clock"));
ROUTE1566.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1566);

ProtoInstance& ProtoInstance1567 =  ProtoInstance();
ProtoInstance1567.setName(CString("MenuItem"));
ProtoInstance1567.setDEF(CString("Fear"));
fieldValue& fieldValue1568 =  fieldValue();
fieldValue1568.setName(CString("translation"));
fieldValue1568.setValue(CString("24 55.05 0"));
ProtoInstance1567.addChild(&fieldValue1568);

fieldValue& fieldValue1569 =  fieldValue();
fieldValue1569.setName(CString("textTranslation"));
fieldValue1569.setValue(CString("0 0 0"));
ProtoInstance1567.addChild(&fieldValue1569);

fieldValue& fieldValue1570 =  fieldValue();
fieldValue1570.setName(CString("description"));
fieldValue1570.setValue(CString("Fear"));
ProtoInstance1567.addChild(&fieldValue1570);

fieldValue& fieldValue1571 =  fieldValue();
fieldValue1571.setName(CString("menuItemString"));
fieldValue1571.setValue(CString("\"Fear\""));
ProtoInstance1567.addChild(&fieldValue1571);

fieldValue& fieldValue1572 =  fieldValue();
fieldValue1572.setName(CString("size"));
fieldValue1572.setValue(CString("40 3"));
ProtoInstance1567.addChild(&fieldValue1572);

fieldValue& fieldValue1573 =  fieldValue();
fieldValue1573.setName(CString("fontSize"));
fieldValue1573.setValue(CString("2.4"));
ProtoInstance1567.addChild(&fieldValue1573);

fieldValue& fieldValue1574 =  fieldValue();
fieldValue1574.setName(CString("spacing"));
fieldValue1574.setValue(CString("1.2"));
ProtoInstance1567.addChild(&fieldValue1574);

Layer1091.addChild(&ProtoInstance1567);

ROUTE& ROUTE1575 =  ROUTE();
ROUTE1575.setFromNode(CString("Fear_Clock"));
ROUTE1575.setFromField(CString("fraction_changed"));
ROUTE1575.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1575.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1575);

ROUTE& ROUTE1576 =  ROUTE();
ROUTE1576.setFromNode(CString("Fear_Clock"));
ROUTE1576.setFromField(CString("fraction_changed"));
ROUTE1576.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1576.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1576);

ROUTE& ROUTE1577 =  ROUTE();
ROUTE1577.setFromNode(CString("Fear_Clock"));
ROUTE1577.setFromField(CString("fraction_changed"));
ROUTE1577.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1577.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1577);

ROUTE& ROUTE1578 =  ROUTE();
ROUTE1578.setFromNode(CString("Fear_Clock"));
ROUTE1578.setFromField(CString("fraction_changed"));
ROUTE1578.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1578.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1578);

ROUTE& ROUTE1579 =  ROUTE();
ROUTE1579.setFromNode(CString("Fear_Clock"));
ROUTE1579.setFromField(CString("fraction_changed"));
ROUTE1579.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE1579.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1579);

ROUTE& ROUTE1580 =  ROUTE();
ROUTE1580.setFromNode(CString("Fear_Clock"));
ROUTE1580.setFromField(CString("fraction_changed"));
ROUTE1580.setToNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE1580.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1580);

ROUTE& ROUTE1581 =  ROUTE();
ROUTE1581.setFromNode(CString("Fear_Clock"));
ROUTE1581.setFromField(CString("fraction_changed"));
ROUTE1581.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE1581.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1581);

ROUTE& ROUTE1582 =  ROUTE();
ROUTE1582.setFromNode(CString("Fear"));
ROUTE1582.setFromField(CString("startTime"));
ROUTE1582.setToNode(CString("Fear_Clock"));
ROUTE1582.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1582);

ROUTE& ROUTE1583 =  ROUTE();
ROUTE1583.setFromNode(CString("Fear"));
ROUTE1583.setFromField(CString("stopTime"));
ROUTE1583.setToNode(CString("Fear_Clock"));
ROUTE1583.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1583);

ROUTE& ROUTE1584 =  ROUTE();
ROUTE1584.setFromNode(CString("Fear"));
ROUTE1584.setFromField(CString("enabled"));
ROUTE1584.setToNode(CString("Fear_Clock"));
ROUTE1584.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1584);

ProtoInstance& ProtoInstance1585 =  ProtoInstance();
ProtoInstance1585.setName(CString("MenuItem"));
ProtoInstance1585.setDEF(CString("Anger"));
fieldValue& fieldValue1586 =  fieldValue();
fieldValue1586.setName(CString("translation"));
fieldValue1586.setValue(CString("24 52.266666666666666 0"));
ProtoInstance1585.addChild(&fieldValue1586);

fieldValue& fieldValue1587 =  fieldValue();
fieldValue1587.setName(CString("textTranslation"));
fieldValue1587.setValue(CString("0 0 0"));
ProtoInstance1585.addChild(&fieldValue1587);

fieldValue& fieldValue1588 =  fieldValue();
fieldValue1588.setName(CString("description"));
fieldValue1588.setValue(CString("Anger"));
ProtoInstance1585.addChild(&fieldValue1588);

fieldValue& fieldValue1589 =  fieldValue();
fieldValue1589.setName(CString("menuItemString"));
fieldValue1589.setValue(CString("\"Anger\""));
ProtoInstance1585.addChild(&fieldValue1589);

fieldValue& fieldValue1590 =  fieldValue();
fieldValue1590.setName(CString("size"));
fieldValue1590.setValue(CString("40 3"));
ProtoInstance1585.addChild(&fieldValue1590);

fieldValue& fieldValue1591 =  fieldValue();
fieldValue1591.setName(CString("fontSize"));
fieldValue1591.setValue(CString("2.4"));
ProtoInstance1585.addChild(&fieldValue1591);

fieldValue& fieldValue1592 =  fieldValue();
fieldValue1592.setName(CString("spacing"));
fieldValue1592.setValue(CString("1.2"));
ProtoInstance1585.addChild(&fieldValue1592);

Layer1091.addChild(&ProtoInstance1585);

ROUTE& ROUTE1593 =  ROUTE();
ROUTE1593.setFromNode(CString("Anger_Clock"));
ROUTE1593.setFromField(CString("fraction_changed"));
ROUTE1593.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1593.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1593);

ROUTE& ROUTE1594 =  ROUTE();
ROUTE1594.setFromNode(CString("Anger_Clock"));
ROUTE1594.setFromField(CString("fraction_changed"));
ROUTE1594.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1594.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1594);

ROUTE& ROUTE1595 =  ROUTE();
ROUTE1595.setFromNode(CString("Anger_Clock"));
ROUTE1595.setFromField(CString("fraction_changed"));
ROUTE1595.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE1595.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1595);

ROUTE& ROUTE1596 =  ROUTE();
ROUTE1596.setFromNode(CString("Anger_Clock"));
ROUTE1596.setFromField(CString("fraction_changed"));
ROUTE1596.setToNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE1596.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1596);

ROUTE& ROUTE1597 =  ROUTE();
ROUTE1597.setFromNode(CString("Anger"));
ROUTE1597.setFromField(CString("startTime"));
ROUTE1597.setToNode(CString("Anger_Clock"));
ROUTE1597.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1597);

ROUTE& ROUTE1598 =  ROUTE();
ROUTE1598.setFromNode(CString("Anger"));
ROUTE1598.setFromField(CString("stopTime"));
ROUTE1598.setToNode(CString("Anger_Clock"));
ROUTE1598.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1598);

ROUTE& ROUTE1599 =  ROUTE();
ROUTE1599.setFromNode(CString("Anger"));
ROUTE1599.setFromField(CString("enabled"));
ROUTE1599.setToNode(CString("Anger_Clock"));
ROUTE1599.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1599);

ProtoInstance& ProtoInstance1600 =  ProtoInstance();
ProtoInstance1600.setName(CString("MenuItem"));
ProtoInstance1600.setDEF(CString("Disgust"));
fieldValue& fieldValue1601 =  fieldValue();
fieldValue1601.setName(CString("translation"));
fieldValue1601.setValue(CString("24 49.48333333333333 0"));
ProtoInstance1600.addChild(&fieldValue1601);

fieldValue& fieldValue1602 =  fieldValue();
fieldValue1602.setName(CString("textTranslation"));
fieldValue1602.setValue(CString("0 0 0"));
ProtoInstance1600.addChild(&fieldValue1602);

fieldValue& fieldValue1603 =  fieldValue();
fieldValue1603.setName(CString("description"));
fieldValue1603.setValue(CString("Disgust"));
ProtoInstance1600.addChild(&fieldValue1603);

fieldValue& fieldValue1604 =  fieldValue();
fieldValue1604.setName(CString("menuItemString"));
fieldValue1604.setValue(CString("\"Disgust\""));
ProtoInstance1600.addChild(&fieldValue1604);

fieldValue& fieldValue1605 =  fieldValue();
fieldValue1605.setName(CString("size"));
fieldValue1605.setValue(CString("40 3"));
ProtoInstance1600.addChild(&fieldValue1605);

fieldValue& fieldValue1606 =  fieldValue();
fieldValue1606.setName(CString("fontSize"));
fieldValue1606.setValue(CString("2.4"));
ProtoInstance1600.addChild(&fieldValue1606);

fieldValue& fieldValue1607 =  fieldValue();
fieldValue1607.setName(CString("spacing"));
fieldValue1607.setValue(CString("1.2"));
ProtoInstance1600.addChild(&fieldValue1607);

Layer1091.addChild(&ProtoInstance1600);

ROUTE& ROUTE1608 =  ROUTE();
ROUTE1608.setFromNode(CString("Disgust_Clock"));
ROUTE1608.setFromField(CString("fraction_changed"));
ROUTE1608.setToNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1608.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1608);

ROUTE& ROUTE1609 =  ROUTE();
ROUTE1609.setFromNode(CString("Disgust_Clock"));
ROUTE1609.setFromField(CString("fraction_changed"));
ROUTE1609.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE1609.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1609);

ROUTE& ROUTE1610 =  ROUTE();
ROUTE1610.setFromNode(CString("Disgust_Clock"));
ROUTE1610.setFromField(CString("fraction_changed"));
ROUTE1610.setToNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1610.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1610);

ROUTE& ROUTE1611 =  ROUTE();
ROUTE1611.setFromNode(CString("Disgust"));
ROUTE1611.setFromField(CString("startTime"));
ROUTE1611.setToNode(CString("Disgust_Clock"));
ROUTE1611.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1611);

ROUTE& ROUTE1612 =  ROUTE();
ROUTE1612.setFromNode(CString("Disgust"));
ROUTE1612.setFromField(CString("stopTime"));
ROUTE1612.setToNode(CString("Disgust_Clock"));
ROUTE1612.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1612);

ROUTE& ROUTE1613 =  ROUTE();
ROUTE1613.setFromNode(CString("Disgust"));
ROUTE1613.setFromField(CString("enabled"));
ROUTE1613.setToNode(CString("Disgust_Clock"));
ROUTE1613.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1613);

ProtoInstance& ProtoInstance1614 =  ProtoInstance();
ProtoInstance1614.setName(CString("MenuItem"));
ProtoInstance1614.setDEF(CString("Contempt"));
fieldValue& fieldValue1615 =  fieldValue();
fieldValue1615.setName(CString("translation"));
fieldValue1615.setValue(CString("24 46.69999999999999 0"));
ProtoInstance1614.addChild(&fieldValue1615);

fieldValue& fieldValue1616 =  fieldValue();
fieldValue1616.setName(CString("textTranslation"));
fieldValue1616.setValue(CString("0 0 0"));
ProtoInstance1614.addChild(&fieldValue1616);

fieldValue& fieldValue1617 =  fieldValue();
fieldValue1617.setName(CString("description"));
fieldValue1617.setValue(CString("Contempt"));
ProtoInstance1614.addChild(&fieldValue1617);

fieldValue& fieldValue1618 =  fieldValue();
fieldValue1618.setName(CString("menuItemString"));
fieldValue1618.setValue(CString("\"Contempt\""));
ProtoInstance1614.addChild(&fieldValue1618);

fieldValue& fieldValue1619 =  fieldValue();
fieldValue1619.setName(CString("size"));
fieldValue1619.setValue(CString("40 3"));
ProtoInstance1614.addChild(&fieldValue1619);

fieldValue& fieldValue1620 =  fieldValue();
fieldValue1620.setName(CString("fontSize"));
fieldValue1620.setValue(CString("2.4"));
ProtoInstance1614.addChild(&fieldValue1620);

fieldValue& fieldValue1621 =  fieldValue();
fieldValue1621.setName(CString("spacing"));
fieldValue1621.setValue(CString("1.2"));
ProtoInstance1614.addChild(&fieldValue1621);

Layer1091.addChild(&ProtoInstance1614);

ROUTE& ROUTE1622 =  ROUTE();
ROUTE1622.setFromNode(CString("Contempt_Clock"));
ROUTE1622.setFromField(CString("fraction_changed"));
ROUTE1622.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE1622.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1622);

ROUTE& ROUTE1623 =  ROUTE();
ROUTE1623.setFromNode(CString("Contempt_Clock"));
ROUTE1623.setFromField(CString("fraction_changed"));
ROUTE1623.setToNode(CString("AnimationAdapter_JinDimpler"));
ROUTE1623.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1623);

ROUTE& ROUTE1624 =  ROUTE();
ROUTE1624.setFromNode(CString("Contempt"));
ROUTE1624.setFromField(CString("startTime"));
ROUTE1624.setToNode(CString("Contempt_Clock"));
ROUTE1624.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1624);

ROUTE& ROUTE1625 =  ROUTE();
ROUTE1625.setFromNode(CString("Contempt"));
ROUTE1625.setFromField(CString("stopTime"));
ROUTE1625.setToNode(CString("Contempt_Clock"));
ROUTE1625.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1625);

ROUTE& ROUTE1626 =  ROUTE();
ROUTE1626.setFromNode(CString("Contempt"));
ROUTE1626.setFromField(CString("enabled"));
ROUTE1626.setToNode(CString("Contempt_Clock"));
ROUTE1626.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1626);

ProtoInstance& ProtoInstance1627 =  ProtoInstance();
ProtoInstance1627.setName(CString("MenuItem"));
ProtoInstance1627.setDEF(CString("Reset"));
fieldValue& fieldValue1628 =  fieldValue();
fieldValue1628.setName(CString("translation"));
fieldValue1628.setValue(CString("24 41.133333333333326 0"));
ProtoInstance1627.addChild(&fieldValue1628);

fieldValue& fieldValue1629 =  fieldValue();
fieldValue1629.setName(CString("textTranslation"));
fieldValue1629.setValue(CString("0 0 0"));
ProtoInstance1627.addChild(&fieldValue1629);

fieldValue& fieldValue1630 =  fieldValue();
fieldValue1630.setName(CString("description"));
fieldValue1630.setValue(CString("Reset"));
ProtoInstance1627.addChild(&fieldValue1630);

fieldValue& fieldValue1631 =  fieldValue();
fieldValue1631.setName(CString("menuItemString"));
fieldValue1631.setValue(CString("\"Reset\""));
ProtoInstance1627.addChild(&fieldValue1631);

fieldValue& fieldValue1632 =  fieldValue();
fieldValue1632.setName(CString("size"));
fieldValue1632.setValue(CString("40 3"));
ProtoInstance1627.addChild(&fieldValue1632);

fieldValue& fieldValue1633 =  fieldValue();
fieldValue1633.setName(CString("fontSize"));
fieldValue1633.setValue(CString("2.4"));
ProtoInstance1627.addChild(&fieldValue1633);

fieldValue& fieldValue1634 =  fieldValue();
fieldValue1634.setName(CString("spacing"));
fieldValue1634.setValue(CString("1.2"));
ProtoInstance1627.addChild(&fieldValue1634);

Layer1091.addChild(&ProtoInstance1627);

ROUTE& ROUTE1635 =  ROUTE();
ROUTE1635.setFromNode(CString("Reset_Clock"));
ROUTE1635.setFromField(CString("fraction_changed"));
ROUTE1635.setToNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE1635.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1635);

ROUTE& ROUTE1636 =  ROUTE();
ROUTE1636.setFromNode(CString("Reset_Clock"));
ROUTE1636.setFromField(CString("fraction_changed"));
ROUTE1636.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE1636.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1636);

ROUTE& ROUTE1637 =  ROUTE();
ROUTE1637.setFromNode(CString("Reset"));
ROUTE1637.setFromField(CString("enabled"));
ROUTE1637.setToNode(CString("HappinessJoy"));
ROUTE1637.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1637);

ROUTE& ROUTE1638 =  ROUTE();
ROUTE1638.setFromNode(CString("Reset_Clock"));
ROUTE1638.setFromField(CString("startTime"));
ROUTE1638.setToNode(CString("HappinessJoy_Clock"));
ROUTE1638.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1638);

ROUTE& ROUTE1639 =  ROUTE();
ROUTE1639.setFromNode(CString("Reset_Clock"));
ROUTE1639.setFromField(CString("fraction_changed"));
ROUTE1639.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1639.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1639);

ROUTE& ROUTE1640 =  ROUTE();
ROUTE1640.setFromNode(CString("Reset_Clock"));
ROUTE1640.setFromField(CString("fraction_changed"));
ROUTE1640.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1640.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1640);

ROUTE& ROUTE1641 =  ROUTE();
ROUTE1641.setFromNode(CString("Reset_Clock"));
ROUTE1641.setFromField(CString("fraction_changed"));
ROUTE1641.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE1641.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1641);

ROUTE& ROUTE1642 =  ROUTE();
ROUTE1642.setFromNode(CString("Reset"));
ROUTE1642.setFromField(CString("enabled"));
ROUTE1642.setToNode(CString("Sadness"));
ROUTE1642.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1642);

ROUTE& ROUTE1643 =  ROUTE();
ROUTE1643.setFromNode(CString("Reset_Clock"));
ROUTE1643.setFromField(CString("startTime"));
ROUTE1643.setToNode(CString("Sadness_Clock"));
ROUTE1643.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1643);

ROUTE& ROUTE1644 =  ROUTE();
ROUTE1644.setFromNode(CString("Reset_Clock"));
ROUTE1644.setFromField(CString("fraction_changed"));
ROUTE1644.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1644.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1644);

ROUTE& ROUTE1645 =  ROUTE();
ROUTE1645.setFromNode(CString("Reset_Clock"));
ROUTE1645.setFromField(CString("fraction_changed"));
ROUTE1645.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1645.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1645);

ROUTE& ROUTE1646 =  ROUTE();
ROUTE1646.setFromNode(CString("Reset_Clock"));
ROUTE1646.setFromField(CString("fraction_changed"));
ROUTE1646.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1646.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1646);

ROUTE& ROUTE1647 =  ROUTE();
ROUTE1647.setFromNode(CString("Reset_Clock"));
ROUTE1647.setFromField(CString("fraction_changed"));
ROUTE1647.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE1647.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1647);

ROUTE& ROUTE1648 =  ROUTE();
ROUTE1648.setFromNode(CString("Reset"));
ROUTE1648.setFromField(CString("enabled"));
ROUTE1648.setToNode(CString("Surprise"));
ROUTE1648.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1648);

ROUTE& ROUTE1649 =  ROUTE();
ROUTE1649.setFromNode(CString("Reset_Clock"));
ROUTE1649.setFromField(CString("startTime"));
ROUTE1649.setToNode(CString("Surprise_Clock"));
ROUTE1649.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1649);

ROUTE& ROUTE1650 =  ROUTE();
ROUTE1650.setFromNode(CString("Reset_Clock"));
ROUTE1650.setFromField(CString("fraction_changed"));
ROUTE1650.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1650.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1650);

ROUTE& ROUTE1651 =  ROUTE();
ROUTE1651.setFromNode(CString("Reset_Clock"));
ROUTE1651.setFromField(CString("fraction_changed"));
ROUTE1651.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1651.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1651);

ROUTE& ROUTE1652 =  ROUTE();
ROUTE1652.setFromNode(CString("Reset_Clock"));
ROUTE1652.setFromField(CString("fraction_changed"));
ROUTE1652.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1652.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1652);

ROUTE& ROUTE1653 =  ROUTE();
ROUTE1653.setFromNode(CString("Reset_Clock"));
ROUTE1653.setFromField(CString("fraction_changed"));
ROUTE1653.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1653.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1653);

ROUTE& ROUTE1654 =  ROUTE();
ROUTE1654.setFromNode(CString("Reset_Clock"));
ROUTE1654.setFromField(CString("fraction_changed"));
ROUTE1654.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE1654.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1654);

ROUTE& ROUTE1655 =  ROUTE();
ROUTE1655.setFromNode(CString("Reset_Clock"));
ROUTE1655.setFromField(CString("fraction_changed"));
ROUTE1655.setToNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE1655.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1655);

ROUTE& ROUTE1656 =  ROUTE();
ROUTE1656.setFromNode(CString("Reset_Clock"));
ROUTE1656.setFromField(CString("fraction_changed"));
ROUTE1656.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE1656.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1656);

ROUTE& ROUTE1657 =  ROUTE();
ROUTE1657.setFromNode(CString("Reset"));
ROUTE1657.setFromField(CString("enabled"));
ROUTE1657.setToNode(CString("Fear"));
ROUTE1657.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1657);

ROUTE& ROUTE1658 =  ROUTE();
ROUTE1658.setFromNode(CString("Reset_Clock"));
ROUTE1658.setFromField(CString("startTime"));
ROUTE1658.setToNode(CString("Fear_Clock"));
ROUTE1658.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1658);

ROUTE& ROUTE1659 =  ROUTE();
ROUTE1659.setFromNode(CString("Reset_Clock"));
ROUTE1659.setFromField(CString("fraction_changed"));
ROUTE1659.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1659.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1659);

ROUTE& ROUTE1660 =  ROUTE();
ROUTE1660.setFromNode(CString("Reset_Clock"));
ROUTE1660.setFromField(CString("fraction_changed"));
ROUTE1660.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1660.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1660);

ROUTE& ROUTE1661 =  ROUTE();
ROUTE1661.setFromNode(CString("Reset_Clock"));
ROUTE1661.setFromField(CString("fraction_changed"));
ROUTE1661.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE1661.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1661);

ROUTE& ROUTE1662 =  ROUTE();
ROUTE1662.setFromNode(CString("Reset_Clock"));
ROUTE1662.setFromField(CString("fraction_changed"));
ROUTE1662.setToNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE1662.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1662);

ROUTE& ROUTE1663 =  ROUTE();
ROUTE1663.setFromNode(CString("Reset"));
ROUTE1663.setFromField(CString("enabled"));
ROUTE1663.setToNode(CString("Anger"));
ROUTE1663.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1663);

ROUTE& ROUTE1664 =  ROUTE();
ROUTE1664.setFromNode(CString("Reset_Clock"));
ROUTE1664.setFromField(CString("startTime"));
ROUTE1664.setToNode(CString("Anger_Clock"));
ROUTE1664.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1664);

ROUTE& ROUTE1665 =  ROUTE();
ROUTE1665.setFromNode(CString("Reset_Clock"));
ROUTE1665.setFromField(CString("fraction_changed"));
ROUTE1665.setToNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1665.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1665);

ROUTE& ROUTE1666 =  ROUTE();
ROUTE1666.setFromNode(CString("Reset_Clock"));
ROUTE1666.setFromField(CString("fraction_changed"));
ROUTE1666.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE1666.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1666);

ROUTE& ROUTE1667 =  ROUTE();
ROUTE1667.setFromNode(CString("Reset_Clock"));
ROUTE1667.setFromField(CString("fraction_changed"));
ROUTE1667.setToNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1667.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1667);

ROUTE& ROUTE1668 =  ROUTE();
ROUTE1668.setFromNode(CString("Reset"));
ROUTE1668.setFromField(CString("enabled"));
ROUTE1668.setToNode(CString("Disgust"));
ROUTE1668.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1668);

ROUTE& ROUTE1669 =  ROUTE();
ROUTE1669.setFromNode(CString("Reset_Clock"));
ROUTE1669.setFromField(CString("startTime"));
ROUTE1669.setToNode(CString("Disgust_Clock"));
ROUTE1669.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1669);

ROUTE& ROUTE1670 =  ROUTE();
ROUTE1670.setFromNode(CString("Reset_Clock"));
ROUTE1670.setFromField(CString("fraction_changed"));
ROUTE1670.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE1670.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1670);

ROUTE& ROUTE1671 =  ROUTE();
ROUTE1671.setFromNode(CString("Reset_Clock"));
ROUTE1671.setFromField(CString("fraction_changed"));
ROUTE1671.setToNode(CString("AnimationAdapter_JinDimpler"));
ROUTE1671.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1671);

ROUTE& ROUTE1672 =  ROUTE();
ROUTE1672.setFromNode(CString("Reset"));
ROUTE1672.setFromField(CString("enabled"));
ROUTE1672.setToNode(CString("Contempt"));
ROUTE1672.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1672);

ROUTE& ROUTE1673 =  ROUTE();
ROUTE1673.setFromNode(CString("Reset_Clock"));
ROUTE1673.setFromField(CString("startTime"));
ROUTE1673.setToNode(CString("Contempt_Clock"));
ROUTE1673.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1673);

ROUTE& ROUTE1674 =  ROUTE();
ROUTE1674.setFromNode(CString("Reset"));
ROUTE1674.setFromField(CString("startTime"));
ROUTE1674.setToNode(CString("Reset_Clock"));
ROUTE1674.setToField(CString("startTime"));
Layer1091.addChild(&ROUTE1674);

ROUTE& ROUTE1675 =  ROUTE();
ROUTE1675.setFromNode(CString("Reset"));
ROUTE1675.setFromField(CString("stopTime"));
ROUTE1675.setToNode(CString("Reset_Clock"));
ROUTE1675.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1675);

ROUTE& ROUTE1676 =  ROUTE();
ROUTE1676.setFromNode(CString("Reset"));
ROUTE1676.setFromField(CString("enabled"));
ROUTE1676.setToNode(CString("Reset_Clock"));
ROUTE1676.setToField(CString("enabled"));
Layer1091.addChild(&ROUTE1676);

ROUTE& ROUTE1677 =  ROUTE();
ROUTE1677.setFromNode(CString("Reset_Clock"));
ROUTE1677.setFromField(CString("fraction_changed"));
ROUTE1677.setToNode(CString("AnimationAdapter_JinBlink"));
ROUTE1677.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1677);

ROUTE& ROUTE1678 =  ROUTE();
ROUTE1678.setFromNode(CString("Reset_Clock"));
ROUTE1678.setFromField(CString("startTime"));
ROUTE1678.setToNode(CString("JinBlink_Clock"));
ROUTE1678.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1678);

ROUTE& ROUTE1679 =  ROUTE();
ROUTE1679.setFromNode(CString("Reset"));
ROUTE1679.setFromField(CString("enabled"));
ROUTE1679.setToNode(CString("AUJinBlink"));
ROUTE1679.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1679);

ROUTE& ROUTE1680 =  ROUTE();
ROUTE1680.setFromNode(CString("Reset_Clock"));
ROUTE1680.setFromField(CString("fraction_changed"));
ROUTE1680.setToNode(CString("AnimationAdapter_JinBrowLowerer"));
ROUTE1680.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1680);

ROUTE& ROUTE1681 =  ROUTE();
ROUTE1681.setFromNode(CString("Reset_Clock"));
ROUTE1681.setFromField(CString("startTime"));
ROUTE1681.setToNode(CString("JinBrowLowerer_Clock"));
ROUTE1681.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1681);

ROUTE& ROUTE1682 =  ROUTE();
ROUTE1682.setFromNode(CString("Reset"));
ROUTE1682.setFromField(CString("enabled"));
ROUTE1682.setToNode(CString("AUJinBrowLowerer"));
ROUTE1682.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1682);

ROUTE& ROUTE1683 =  ROUTE();
ROUTE1683.setFromNode(CString("Reset_Clock"));
ROUTE1683.setFromField(CString("fraction_changed"));
ROUTE1683.setToNode(CString("AnimationAdapter_JinCheekPuffer"));
ROUTE1683.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1683);

ROUTE& ROUTE1684 =  ROUTE();
ROUTE1684.setFromNode(CString("Reset_Clock"));
ROUTE1684.setFromField(CString("startTime"));
ROUTE1684.setToNode(CString("JinCheekPuffer_Clock"));
ROUTE1684.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1684);

ROUTE& ROUTE1685 =  ROUTE();
ROUTE1685.setFromNode(CString("Reset"));
ROUTE1685.setFromField(CString("enabled"));
ROUTE1685.setToNode(CString("AUJinCheekPuffer"));
ROUTE1685.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1685);

ROUTE& ROUTE1686 =  ROUTE();
ROUTE1686.setFromNode(CString("Reset_Clock"));
ROUTE1686.setFromField(CString("fraction_changed"));
ROUTE1686.setToNode(CString("AnimationAdapter_JinCheekRaiser"));
ROUTE1686.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1686);

ROUTE& ROUTE1687 =  ROUTE();
ROUTE1687.setFromNode(CString("Reset_Clock"));
ROUTE1687.setFromField(CString("startTime"));
ROUTE1687.setToNode(CString("JinCheekRaiser_Clock"));
ROUTE1687.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1687);

ROUTE& ROUTE1688 =  ROUTE();
ROUTE1688.setFromNode(CString("Reset"));
ROUTE1688.setFromField(CString("enabled"));
ROUTE1688.setToNode(CString("AUJinCheekRaiser"));
ROUTE1688.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1688);

ROUTE& ROUTE1689 =  ROUTE();
ROUTE1689.setFromNode(CString("Reset_Clock"));
ROUTE1689.setFromField(CString("fraction_changed"));
ROUTE1689.setToNode(CString("AnimationAdapter_JinChinRaiser"));
ROUTE1689.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1689);

ROUTE& ROUTE1690 =  ROUTE();
ROUTE1690.setFromNode(CString("Reset_Clock"));
ROUTE1690.setFromField(CString("startTime"));
ROUTE1690.setToNode(CString("JinChinRaiser_Clock"));
ROUTE1690.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1690);

ROUTE& ROUTE1691 =  ROUTE();
ROUTE1691.setFromNode(CString("Reset"));
ROUTE1691.setFromField(CString("enabled"));
ROUTE1691.setToNode(CString("AUJinChinRaiser"));
ROUTE1691.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1691);

ROUTE& ROUTE1692 =  ROUTE();
ROUTE1692.setFromNode(CString("Reset_Clock"));
ROUTE1692.setFromField(CString("fraction_changed"));
ROUTE1692.setToNode(CString("AnimationAdapter_JinDimpler"));
ROUTE1692.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1692);

ROUTE& ROUTE1693 =  ROUTE();
ROUTE1693.setFromNode(CString("Reset_Clock"));
ROUTE1693.setFromField(CString("startTime"));
ROUTE1693.setToNode(CString("JinDimpler_Clock"));
ROUTE1693.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1693);

ROUTE& ROUTE1694 =  ROUTE();
ROUTE1694.setFromNode(CString("Reset"));
ROUTE1694.setFromField(CString("enabled"));
ROUTE1694.setToNode(CString("AUJinDimpler"));
ROUTE1694.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1694);

ROUTE& ROUTE1695 =  ROUTE();
ROUTE1695.setFromNode(CString("Reset_Clock"));
ROUTE1695.setFromField(CString("fraction_changed"));
ROUTE1695.setToNode(CString("AnimationAdapter_JinEyesClosed"));
ROUTE1695.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1695);

ROUTE& ROUTE1696 =  ROUTE();
ROUTE1696.setFromNode(CString("Reset_Clock"));
ROUTE1696.setFromField(CString("startTime"));
ROUTE1696.setToNode(CString("JinEyesClosed_Clock"));
ROUTE1696.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1696);

ROUTE& ROUTE1697 =  ROUTE();
ROUTE1697.setFromNode(CString("Reset"));
ROUTE1697.setFromField(CString("enabled"));
ROUTE1697.setToNode(CString("AUJinEyesClosed"));
ROUTE1697.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1697);

ROUTE& ROUTE1698 =  ROUTE();
ROUTE1698.setFromNode(CString("Reset_Clock"));
ROUTE1698.setFromField(CString("fraction_changed"));
ROUTE1698.setToNode(CString("AnimationAdapter_JinInnerBrowRaiser"));
ROUTE1698.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1698);

ROUTE& ROUTE1699 =  ROUTE();
ROUTE1699.setFromNode(CString("Reset_Clock"));
ROUTE1699.setFromField(CString("startTime"));
ROUTE1699.setToNode(CString("JinInnerBrowRaiser_Clock"));
ROUTE1699.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1699);

ROUTE& ROUTE1700 =  ROUTE();
ROUTE1700.setFromNode(CString("Reset"));
ROUTE1700.setFromField(CString("enabled"));
ROUTE1700.setToNode(CString("AUJinInnerBrowRaiser"));
ROUTE1700.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1700);

ROUTE& ROUTE1701 =  ROUTE();
ROUTE1701.setFromNode(CString("Reset_Clock"));
ROUTE1701.setFromField(CString("fraction_changed"));
ROUTE1701.setToNode(CString("AnimationAdapter_JinJawDrop"));
ROUTE1701.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1701);

ROUTE& ROUTE1702 =  ROUTE();
ROUTE1702.setFromNode(CString("Reset_Clock"));
ROUTE1702.setFromField(CString("startTime"));
ROUTE1702.setToNode(CString("JinJawDrop_Clock"));
ROUTE1702.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1702);

ROUTE& ROUTE1703 =  ROUTE();
ROUTE1703.setFromNode(CString("Reset"));
ROUTE1703.setFromField(CString("enabled"));
ROUTE1703.setToNode(CString("AUJinJawDrop"));
ROUTE1703.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1703);

ROUTE& ROUTE1704 =  ROUTE();
ROUTE1704.setFromNode(CString("Reset_Clock"));
ROUTE1704.setFromField(CString("fraction_changed"));
ROUTE1704.setToNode(CString("AnimationAdapter_JinLidDroop"));
ROUTE1704.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1704);

ROUTE& ROUTE1705 =  ROUTE();
ROUTE1705.setFromNode(CString("Reset_Clock"));
ROUTE1705.setFromField(CString("startTime"));
ROUTE1705.setToNode(CString("JinLidDroop_Clock"));
ROUTE1705.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1705);

ROUTE& ROUTE1706 =  ROUTE();
ROUTE1706.setFromNode(CString("Reset"));
ROUTE1706.setFromField(CString("enabled"));
ROUTE1706.setToNode(CString("AUJinLidDroop"));
ROUTE1706.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1706);

ROUTE& ROUTE1707 =  ROUTE();
ROUTE1707.setFromNode(CString("Reset_Clock"));
ROUTE1707.setFromField(CString("fraction_changed"));
ROUTE1707.setToNode(CString("AnimationAdapter_JinLidTightener"));
ROUTE1707.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1707);

ROUTE& ROUTE1708 =  ROUTE();
ROUTE1708.setFromNode(CString("Reset_Clock"));
ROUTE1708.setFromField(CString("startTime"));
ROUTE1708.setToNode(CString("JinLidTightener_Clock"));
ROUTE1708.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1708);

ROUTE& ROUTE1709 =  ROUTE();
ROUTE1709.setFromNode(CString("Reset"));
ROUTE1709.setFromField(CString("enabled"));
ROUTE1709.setToNode(CString("AUJinLidTightener"));
ROUTE1709.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1709);

ROUTE& ROUTE1710 =  ROUTE();
ROUTE1710.setFromNode(CString("Reset_Clock"));
ROUTE1710.setFromField(CString("fraction_changed"));
ROUTE1710.setToNode(CString("AnimationAdapter_JinLipCornerDepressor"));
ROUTE1710.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1710);

ROUTE& ROUTE1711 =  ROUTE();
ROUTE1711.setFromNode(CString("Reset_Clock"));
ROUTE1711.setFromField(CString("startTime"));
ROUTE1711.setToNode(CString("JinLipCornerDepressor_Clock"));
ROUTE1711.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1711);

ROUTE& ROUTE1712 =  ROUTE();
ROUTE1712.setFromNode(CString("Reset"));
ROUTE1712.setFromField(CString("enabled"));
ROUTE1712.setToNode(CString("AUJinLipCornerDepressor"));
ROUTE1712.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1712);

ROUTE& ROUTE1713 =  ROUTE();
ROUTE1713.setFromNode(CString("Reset_Clock"));
ROUTE1713.setFromField(CString("fraction_changed"));
ROUTE1713.setToNode(CString("AnimationAdapter_JinLipCornerPuller"));
ROUTE1713.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1713);

ROUTE& ROUTE1714 =  ROUTE();
ROUTE1714.setFromNode(CString("Reset_Clock"));
ROUTE1714.setFromField(CString("startTime"));
ROUTE1714.setToNode(CString("JinLipCornerPuller_Clock"));
ROUTE1714.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1714);

ROUTE& ROUTE1715 =  ROUTE();
ROUTE1715.setFromNode(CString("Reset"));
ROUTE1715.setFromField(CString("enabled"));
ROUTE1715.setToNode(CString("AUJinLipCornerPuller"));
ROUTE1715.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1715);

ROUTE& ROUTE1716 =  ROUTE();
ROUTE1716.setFromNode(CString("Reset_Clock"));
ROUTE1716.setFromField(CString("fraction_changed"));
ROUTE1716.setToNode(CString("AnimationAdapter_JinLipFunneler"));
ROUTE1716.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1716);

ROUTE& ROUTE1717 =  ROUTE();
ROUTE1717.setFromNode(CString("Reset_Clock"));
ROUTE1717.setFromField(CString("startTime"));
ROUTE1717.setToNode(CString("JinLipFunneler_Clock"));
ROUTE1717.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1717);

ROUTE& ROUTE1718 =  ROUTE();
ROUTE1718.setFromNode(CString("Reset"));
ROUTE1718.setFromField(CString("enabled"));
ROUTE1718.setToNode(CString("AUJinLipFunneler"));
ROUTE1718.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1718);

ROUTE& ROUTE1719 =  ROUTE();
ROUTE1719.setFromNode(CString("Reset_Clock"));
ROUTE1719.setFromField(CString("fraction_changed"));
ROUTE1719.setToNode(CString("AnimationAdapter_JinLipPressor"));
ROUTE1719.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1719);

ROUTE& ROUTE1720 =  ROUTE();
ROUTE1720.setFromNode(CString("Reset_Clock"));
ROUTE1720.setFromField(CString("startTime"));
ROUTE1720.setToNode(CString("JinLipPressor_Clock"));
ROUTE1720.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1720);

ROUTE& ROUTE1721 =  ROUTE();
ROUTE1721.setFromNode(CString("Reset"));
ROUTE1721.setFromField(CString("enabled"));
ROUTE1721.setToNode(CString("AUJinLipPressor"));
ROUTE1721.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1721);

ROUTE& ROUTE1722 =  ROUTE();
ROUTE1722.setFromNode(CString("Reset_Clock"));
ROUTE1722.setFromField(CString("fraction_changed"));
ROUTE1722.setToNode(CString("AnimationAdapter_JinLipPuckerer"));
ROUTE1722.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1722);

ROUTE& ROUTE1723 =  ROUTE();
ROUTE1723.setFromNode(CString("Reset_Clock"));
ROUTE1723.setFromField(CString("startTime"));
ROUTE1723.setToNode(CString("JinLipPuckerer_Clock"));
ROUTE1723.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1723);

ROUTE& ROUTE1724 =  ROUTE();
ROUTE1724.setFromNode(CString("Reset"));
ROUTE1724.setFromField(CString("enabled"));
ROUTE1724.setToNode(CString("AUJinLipPuckerer"));
ROUTE1724.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1724);

ROUTE& ROUTE1725 =  ROUTE();
ROUTE1725.setFromNode(CString("Reset_Clock"));
ROUTE1725.setFromField(CString("fraction_changed"));
ROUTE1725.setToNode(CString("AnimationAdapter_JinLipsPart"));
ROUTE1725.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1725);

ROUTE& ROUTE1726 =  ROUTE();
ROUTE1726.setFromNode(CString("Reset_Clock"));
ROUTE1726.setFromField(CString("startTime"));
ROUTE1726.setToNode(CString("JinLipsPart_Clock"));
ROUTE1726.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1726);

ROUTE& ROUTE1727 =  ROUTE();
ROUTE1727.setFromNode(CString("Reset"));
ROUTE1727.setFromField(CString("enabled"));
ROUTE1727.setToNode(CString("AUJinLipsPart"));
ROUTE1727.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1727);

ROUTE& ROUTE1728 =  ROUTE();
ROUTE1728.setFromNode(CString("Reset_Clock"));
ROUTE1728.setFromField(CString("fraction_changed"));
ROUTE1728.setToNode(CString("AnimationAdapter_JinLipStretcher"));
ROUTE1728.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1728);

ROUTE& ROUTE1729 =  ROUTE();
ROUTE1729.setFromNode(CString("Reset_Clock"));
ROUTE1729.setFromField(CString("startTime"));
ROUTE1729.setToNode(CString("JinLipStretcher_Clock"));
ROUTE1729.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1729);

ROUTE& ROUTE1730 =  ROUTE();
ROUTE1730.setFromNode(CString("Reset"));
ROUTE1730.setFromField(CString("enabled"));
ROUTE1730.setToNode(CString("AUJinLipStretcher"));
ROUTE1730.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1730);

ROUTE& ROUTE1731 =  ROUTE();
ROUTE1731.setFromNode(CString("Reset_Clock"));
ROUTE1731.setFromField(CString("fraction_changed"));
ROUTE1731.setToNode(CString("AnimationAdapter_JinLipSuck"));
ROUTE1731.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1731);

ROUTE& ROUTE1732 =  ROUTE();
ROUTE1732.setFromNode(CString("Reset_Clock"));
ROUTE1732.setFromField(CString("startTime"));
ROUTE1732.setToNode(CString("JinLipSuck_Clock"));
ROUTE1732.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1732);

ROUTE& ROUTE1733 =  ROUTE();
ROUTE1733.setFromNode(CString("Reset"));
ROUTE1733.setFromField(CString("enabled"));
ROUTE1733.setToNode(CString("AUJinLipSuck"));
ROUTE1733.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1733);

ROUTE& ROUTE1734 =  ROUTE();
ROUTE1734.setFromNode(CString("Reset_Clock"));
ROUTE1734.setFromField(CString("fraction_changed"));
ROUTE1734.setToNode(CString("AnimationAdapter_JinLipTightener"));
ROUTE1734.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1734);

ROUTE& ROUTE1735 =  ROUTE();
ROUTE1735.setFromNode(CString("Reset_Clock"));
ROUTE1735.setFromField(CString("startTime"));
ROUTE1735.setToNode(CString("JinLipTightener_Clock"));
ROUTE1735.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1735);

ROUTE& ROUTE1736 =  ROUTE();
ROUTE1736.setFromNode(CString("Reset"));
ROUTE1736.setFromField(CString("enabled"));
ROUTE1736.setToNode(CString("AUJinLipTightener"));
ROUTE1736.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1736);

ROUTE& ROUTE1737 =  ROUTE();
ROUTE1737.setFromNode(CString("Reset_Clock"));
ROUTE1737.setFromField(CString("fraction_changed"));
ROUTE1737.setToNode(CString("AnimationAdapter_JinLowerLipDepressor"));
ROUTE1737.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1737);

ROUTE& ROUTE1738 =  ROUTE();
ROUTE1738.setFromNode(CString("Reset_Clock"));
ROUTE1738.setFromField(CString("startTime"));
ROUTE1738.setToNode(CString("JinLowerLipDepressor_Clock"));
ROUTE1738.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1738);

ROUTE& ROUTE1739 =  ROUTE();
ROUTE1739.setFromNode(CString("Reset"));
ROUTE1739.setFromField(CString("enabled"));
ROUTE1739.setToNode(CString("AUJinLowerLipDepressor"));
ROUTE1739.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1739);

ROUTE& ROUTE1740 =  ROUTE();
ROUTE1740.setFromNode(CString("Reset_Clock"));
ROUTE1740.setFromField(CString("fraction_changed"));
ROUTE1740.setToNode(CString("AnimationAdapter_JinMouthStretch"));
ROUTE1740.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1740);

ROUTE& ROUTE1741 =  ROUTE();
ROUTE1741.setFromNode(CString("Reset_Clock"));
ROUTE1741.setFromField(CString("startTime"));
ROUTE1741.setToNode(CString("JinMouthStretch_Clock"));
ROUTE1741.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1741);

ROUTE& ROUTE1742 =  ROUTE();
ROUTE1742.setFromNode(CString("Reset"));
ROUTE1742.setFromField(CString("enabled"));
ROUTE1742.setToNode(CString("AUJinMouthStretch"));
ROUTE1742.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1742);

ROUTE& ROUTE1743 =  ROUTE();
ROUTE1743.setFromNode(CString("Reset_Clock"));
ROUTE1743.setFromField(CString("fraction_changed"));
ROUTE1743.setToNode(CString("AnimationAdapter_JinNasolabialDeepener"));
ROUTE1743.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1743);

ROUTE& ROUTE1744 =  ROUTE();
ROUTE1744.setFromNode(CString("Reset_Clock"));
ROUTE1744.setFromField(CString("startTime"));
ROUTE1744.setToNode(CString("JinNasolabialDeepener_Clock"));
ROUTE1744.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1744);

ROUTE& ROUTE1745 =  ROUTE();
ROUTE1745.setFromNode(CString("Reset"));
ROUTE1745.setFromField(CString("enabled"));
ROUTE1745.setToNode(CString("AUJinNasolabialDeepener"));
ROUTE1745.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1745);

ROUTE& ROUTE1746 =  ROUTE();
ROUTE1746.setFromNode(CString("Reset_Clock"));
ROUTE1746.setFromField(CString("fraction_changed"));
ROUTE1746.setToNode(CString("AnimationAdapter_JinNoseWrinkler"));
ROUTE1746.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1746);

ROUTE& ROUTE1747 =  ROUTE();
ROUTE1747.setFromNode(CString("Reset_Clock"));
ROUTE1747.setFromField(CString("startTime"));
ROUTE1747.setToNode(CString("JinNoseWrinkler_Clock"));
ROUTE1747.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1747);

ROUTE& ROUTE1748 =  ROUTE();
ROUTE1748.setFromNode(CString("Reset"));
ROUTE1748.setFromField(CString("enabled"));
ROUTE1748.setToNode(CString("AUJinNoseWrinkler"));
ROUTE1748.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1748);

ROUTE& ROUTE1749 =  ROUTE();
ROUTE1749.setFromNode(CString("Reset_Clock"));
ROUTE1749.setFromField(CString("fraction_changed"));
ROUTE1749.setToNode(CString("AnimationAdapter_JinOuterBrowRaiser"));
ROUTE1749.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1749);

ROUTE& ROUTE1750 =  ROUTE();
ROUTE1750.setFromNode(CString("Reset_Clock"));
ROUTE1750.setFromField(CString("startTime"));
ROUTE1750.setToNode(CString("JinOuterBrowRaiser_Clock"));
ROUTE1750.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1750);

ROUTE& ROUTE1751 =  ROUTE();
ROUTE1751.setFromNode(CString("Reset"));
ROUTE1751.setFromField(CString("enabled"));
ROUTE1751.setToNode(CString("AUJinOuterBrowRaiser"));
ROUTE1751.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1751);

ROUTE& ROUTE1752 =  ROUTE();
ROUTE1752.setFromNode(CString("Reset_Clock"));
ROUTE1752.setFromField(CString("fraction_changed"));
ROUTE1752.setToNode(CString("AnimationAdapter_JinSlit"));
ROUTE1752.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1752);

ROUTE& ROUTE1753 =  ROUTE();
ROUTE1753.setFromNode(CString("Reset_Clock"));
ROUTE1753.setFromField(CString("startTime"));
ROUTE1753.setToNode(CString("JinSlit_Clock"));
ROUTE1753.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1753);

ROUTE& ROUTE1754 =  ROUTE();
ROUTE1754.setFromNode(CString("Reset"));
ROUTE1754.setFromField(CString("enabled"));
ROUTE1754.setToNode(CString("AUJinSlit"));
ROUTE1754.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1754);

ROUTE& ROUTE1755 =  ROUTE();
ROUTE1755.setFromNode(CString("Reset_Clock"));
ROUTE1755.setFromField(CString("fraction_changed"));
ROUTE1755.setToNode(CString("AnimationAdapter_JinSquint"));
ROUTE1755.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1755);

ROUTE& ROUTE1756 =  ROUTE();
ROUTE1756.setFromNode(CString("Reset_Clock"));
ROUTE1756.setFromField(CString("startTime"));
ROUTE1756.setToNode(CString("JinSquint_Clock"));
ROUTE1756.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1756);

ROUTE& ROUTE1757 =  ROUTE();
ROUTE1757.setFromNode(CString("Reset"));
ROUTE1757.setFromField(CString("enabled"));
ROUTE1757.setToNode(CString("AUJinSquint"));
ROUTE1757.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1757);

ROUTE& ROUTE1758 =  ROUTE();
ROUTE1758.setFromNode(CString("Reset_Clock"));
ROUTE1758.setFromField(CString("fraction_changed"));
ROUTE1758.setToNode(CString("AnimationAdapter_JinUpperLidRaiser"));
ROUTE1758.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1758);

ROUTE& ROUTE1759 =  ROUTE();
ROUTE1759.setFromNode(CString("Reset_Clock"));
ROUTE1759.setFromField(CString("startTime"));
ROUTE1759.setToNode(CString("JinUpperLidRaiser_Clock"));
ROUTE1759.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1759);

ROUTE& ROUTE1760 =  ROUTE();
ROUTE1760.setFromNode(CString("Reset"));
ROUTE1760.setFromField(CString("enabled"));
ROUTE1760.setToNode(CString("AUJinUpperLidRaiser"));
ROUTE1760.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1760);

ROUTE& ROUTE1761 =  ROUTE();
ROUTE1761.setFromNode(CString("Reset_Clock"));
ROUTE1761.setFromField(CString("fraction_changed"));
ROUTE1761.setToNode(CString("AnimationAdapter_JinUpperLipRaiser"));
ROUTE1761.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1761);

ROUTE& ROUTE1762 =  ROUTE();
ROUTE1762.setFromNode(CString("Reset_Clock"));
ROUTE1762.setFromField(CString("startTime"));
ROUTE1762.setToNode(CString("JinUpperLipRaiser_Clock"));
ROUTE1762.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1762);

ROUTE& ROUTE1763 =  ROUTE();
ROUTE1763.setFromNode(CString("Reset"));
ROUTE1763.setFromField(CString("enabled"));
ROUTE1763.setToNode(CString("AUJinUpperLipRaiser"));
ROUTE1763.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1763);

ROUTE& ROUTE1764 =  ROUTE();
ROUTE1764.setFromNode(CString("Reset_Clock"));
ROUTE1764.setFromField(CString("fraction_changed"));
ROUTE1764.setToNode(CString("AnimationAdapter_JinWink"));
ROUTE1764.setToField(CString("set_fraction"));
Layer1091.addChild(&ROUTE1764);

ROUTE& ROUTE1765 =  ROUTE();
ROUTE1765.setFromNode(CString("Reset_Clock"));
ROUTE1765.setFromField(CString("startTime"));
ROUTE1765.setToNode(CString("JinWink_Clock"));
ROUTE1765.setToField(CString("stopTime"));
Layer1091.addChild(&ROUTE1765);

ROUTE& ROUTE1766 =  ROUTE();
ROUTE1766.setFromNode(CString("Reset"));
ROUTE1766.setFromField(CString("enabled"));
ROUTE1766.setToNode(CString("AUJinWink"));
ROUTE1766.setToField(CString("untoggle"));
Layer1091.addChild(&ROUTE1766);

LayerSet14.addChild(&Layer1091);

Scene13.addChild(&LayerSet14);

X3D0.setScene(&Scene13);

//}
