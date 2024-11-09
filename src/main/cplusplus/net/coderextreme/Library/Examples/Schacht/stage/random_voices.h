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
meta3.setContent(CString("Fri, 28 Aug 2015 13:01:10 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 28 Aug 2015 13:01:10 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Random"));
ExternProtoDeclare8.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Random/Random_proto.x3dRandom_proto.x3d")}, 2);
field& field9 =  field();
field9.setName(CString("value"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("numValues"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("stopTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("whichChoice_changed"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("fraction_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo15);

Switch& Switch16 =  Switch();
Switch16.setDEF(CString("_1"));
Switch16.setWhichChoice(3);
Transform& Transform17 =  Transform();
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("vs_1"));
VisibilitySensor& VisibilitySensor19 =  VisibilitySensor();
VisibilitySensor19.setDEF(CString("_2"));
VisibilitySensor19.setSize(new float[]{1.0,1.0,1.0});
Transform18.addChild(&VisibilitySensor19);

Transform17.addChild(&Transform18);

Sound& Sound20 =  Sound();
Sound20.setDEF(CString("create3000"));
Sound20.setMinBack(8.2);
Sound20.setMinFront(8.2);
Sound20.setMaxBack(82);
Sound20.setMaxFront(82);
AudioClip& AudioClip21 =  AudioClip();
AudioClip21.setDEF(CString("create3000_1"));
AudioClip21.setDescription(CString("create3000"));
AudioClip21.setUrl(new CString[]{CString("create3000.wav")}, 1);
AudioClip21.setStartTime(1007130771.72448);
Sound20.setSource(AudioClip21);

Transform17.addChild(&Sound20);

Switch16.addChild(&Transform17);

Transform& Transform22 =  Transform();
Transform& Transform23 =  Transform();
Transform23.setDEF(CString("vs_2"));
VisibilitySensor& VisibilitySensor24 =  VisibilitySensor();
VisibilitySensor24.setDEF(CString("_3"));
VisibilitySensor24.setSize(new float[]{1.0,1.0,1.0});
Transform23.addChild(&VisibilitySensor24);

Transform22.addChild(&Transform23);

Sound& Sound25 =  Sound();
Sound25.setDEF(CString("future-tech"));
Sound25.setMinBack(8.2);
Sound25.setMinFront(8.2);
Sound25.setMaxBack(82);
Sound25.setMaxFront(82);
AudioClip& AudioClip26 =  AudioClip();
AudioClip26.setDEF(CString("future-tech_1"));
AudioClip26.setDescription(CString("future-tech"));
AudioClip26.setUrl(new CString[]{CString("future-tech.wav")}, 1);
AudioClip26.setStartTime(1007130782.19115);
Sound25.setSource(AudioClip26);

Transform22.addChild(&Sound25);

Switch16.addChild(&Transform22);

Transform& Transform27 =  Transform();
Transform& Transform28 =  Transform();
Transform28.setDEF(CString("vs_3"));
VisibilitySensor& VisibilitySensor29 =  VisibilitySensor();
VisibilitySensor29.setDEF(CString("_4"));
VisibilitySensor29.setSize(new float[]{1.0,1.0,1.0});
Transform28.addChild(&VisibilitySensor29);

Transform27.addChild(&Transform28);

Sound& Sound30 =  Sound();
Sound30.setDEF(CString("neopolitics"));
Sound30.setMinBack(8.2);
Sound30.setMinFront(8.2);
Sound30.setMaxBack(82);
Sound30.setMaxFront(82);
AudioClip& AudioClip31 =  AudioClip();
AudioClip31.setDEF(CString("neopolitics_1"));
AudioClip31.setDescription(CString("neopolitics"));
AudioClip31.setUrl(new CString[]{CString("neopolitics.wav")}, 1);
AudioClip31.setStartTime(1007130785.8577);
Sound30.setSource(AudioClip31);

Transform27.addChild(&Sound30);

Switch16.addChild(&Transform27);

Transform& Transform32 =  Transform();
Transform& Transform33 =  Transform();
Transform33.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor34 =  VisibilitySensor();
VisibilitySensor34.setDEF(CString("_5"));
VisibilitySensor34.setSize(new float[]{1.0,1.0,1.0});
Transform33.addChild(&VisibilitySensor34);

Transform32.addChild(&Transform33);

Sound& Sound35 =  Sound();
Sound35.setDEF(CString("revolution"));
Sound35.setMinBack(8.2);
Sound35.setMinFront(8.2);
Sound35.setMaxBack(82);
Sound35.setMaxFront(82);
AudioClip& AudioClip36 =  AudioClip();
AudioClip36.setDEF(CString("revolution_1"));
AudioClip36.setDescription(CString("revolution"));
AudioClip36.setUrl(new CString[]{CString("revolution.wav")}, 1);
AudioClip36.setStartTime(1007298321.90254);
Sound35.setSource(AudioClip36);

Transform32.addChild(&Sound35);

Switch16.addChild(&Transform32);

Scene7.addChild(&Switch16);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("_6"));
TimeSensor37.setCycleInterval(5);
TimeSensor37.setLoop(true);
Scene7.addChild(&TimeSensor37);

Transform& Transform38 =  Transform();
Transform38.setDEF(CString("Random"));
ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(CString("Random"));
ProtoInstance39.setDEF(CString("_7"));
fieldValue& fieldValue40 =  fieldValue();
fieldValue40.setName(CString("value"));
fieldValue40.setValue(CString("3"));
ProtoInstance39.addChild(&fieldValue40);

Transform38.addChild(&ProtoInstance39);

Scene7.addChild(&Transform38);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(CString("_2"));
ROUTE41.setFromField(CString("enterTime"));
ROUTE41.setToNode(CString("create3000_1"));
ROUTE41.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE41);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("_3"));
ROUTE42.setFromField(CString("enterTime"));
ROUTE42.setToNode(CString("future-tech_1"));
ROUTE42.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("_4"));
ROUTE43.setFromField(CString("enterTime"));
ROUTE43.setToNode(CString("neopolitics_1"));
ROUTE43.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("_5"));
ROUTE44.setFromField(CString("enterTime"));
ROUTE44.setToNode(CString("revolution_1"));
ROUTE44.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("_7"));
ROUTE45.setFromField(CString("whichChoice_changed"));
ROUTE45.setToNode(CString("_1"));
ROUTE45.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_6"));
ROUTE46.setFromField(CString("cycleTime"));
ROUTE46.setToNode(CString("_7"));
ROUTE46.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE46);

X3D0.setScene(&Scene7);

//}
