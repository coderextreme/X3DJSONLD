#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Core"));
component9.setLevel(1);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("sphereflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("created"));
meta12.setContent(CString("Jan 17 2022"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("modified"));
meta13.setContent(CString("Sep 3 2023"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("5 or more prismatic flowers"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("identifier"));
meta16.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
NavigationInfo& NavigationInfo18 =  NavigationInfo();
Scene17.addChild(&NavigationInfo18);

Background& Background19 =  Background();
Background19.setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background19.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background19.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background19.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background19.setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background19.setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene17.addChild(&Background19);

Group& Group20 =  Group();
ExternProtoDeclare& ExternProtoDeclare21 =  ExternProtoDeclare();
ExternProtoDeclare21.setName(CString("FlowerProto"));
ExternProtoDeclare21.setUrl(new CString[2]{CString("../data/flowerproto.x3d#FlowerProto"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto")}, 2);
field& field22 =  field();
field22.setName(CString("vertex"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("MFString"));
ExternProtoDeclare21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("fragment"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("MFString"));
ExternProtoDeclare21.addChild(&field23);

Group20.addChild(&ExternProtoDeclare21);

ProtoDeclare& ProtoDeclare24 =  ProtoDeclare();
ProtoDeclare24.setName(CString("flower"));
ProtoBody& ProtoBody25 =  ProtoBody();
Group& Group26 =  Group();
ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("FlowerProto"));
fieldValue& fieldValue28 =  fieldValue();
fieldValue28.setName(CString("vertex"));
fieldValue28.setValue(CString("\"../shaders/x_ite_flowers_chromatic.vs\""));
ProtoInstance27.addChild(&fieldValue28);

fieldValue& fieldValue29 =  fieldValue();
fieldValue29.setName(CString("fragment"));
fieldValue29.setValue(CString("\"../shaders/x_ite.fs\""));
ProtoInstance27.addChild(&fieldValue29);

Group26.addChild(&ProtoInstance27);

ProtoBody25.addChild(&Group26);

ProtoDeclare24.addChild(&ProtoBody25);

Group20.addChild(&ProtoDeclare24);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(CString("flower"));
Group20.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("flower"));
Group20.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("flower"));
Group20.addChild(&ProtoInstance32);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(CString("flower"));
Group20.addChild(&ProtoInstance33);

ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("flower"));
Group20.addChild(&ProtoInstance34);

ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("flower"));
Group20.addChild(&ProtoInstance35);

TimeSensor& TimeSensor36 =  TimeSensor();
TimeSensor36.setDEF(CString("SongTime"));
TimeSensor36.setLoop(True);
Group20.addChild(&TimeSensor36);

Sound& Sound37 =  Sound();
Sound37.setMaxBack(100);
Sound37.setMaxFront(100);
Sound37.setMinBack(20);
Sound37.setMinFront(20);
Sound37.setLocation(new float[3]{0,1,0});
AudioClip& AudioClip38 =  AudioClip();
AudioClip38.setDEF(CString("AudioClip"));
AudioClip38.setDescription(CString("Chandubabamusic #1"));
AudioClip38.setUrl(new CString[2]{CString("../resources/chandubabamusic1.wav"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav")}, 2);
Sound37.setSource(AudioClip38);

Group20.addChild(&Sound37);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromField(CString("cycleTime"));
ROUTE39.setFromNode(CString("SongTime"));
ROUTE39.setToField(CString("startTime"));
ROUTE39.setToNode(CString("AudioClip"));
Group20.addChild(&ROUTE39);

Scene17.addChild(&Group20);

X3D0.setScene(&Scene17);

}
