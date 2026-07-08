//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("SpatialAudioCameraAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("info"));
meta4.setContent(CString("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("28 October 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("5 December 2021"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("CHANGELOG.txt"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("TODO"));
meta9.setContent(CString("credit for audio files"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("https://www.medialab.hmu.gr/minipages/x3domAudio"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("identifier"));
meta11.setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("generator"));
meta12.setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("license"));
meta13.setContent(CString("../license.html"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(CString("SpatialAudioCameraAnimation.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene14.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setBackUrl(new CString[]{CString("images/generic/BK1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")}, 2);
Background17.setBottomUrl(new CString[]{CString("images/generic/DN1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")}, 2);
Background17.setFrontUrl(new CString[]{CString("images/generic/FR1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")}, 2);
Background17.setLeftUrl(new CString[]{CString("images/generic/LF1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")}, 2);
Background17.setRightUrl(new CString[]{CString("images/generic/RT1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")}, 2);
Background17.setTopUrl(new CString[]{CString("images/generic/UP1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")}, 2);
Scene14.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDEF(CString("Camera001"));
Viewpoint18.setDescription(CString("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"));
Viewpoint18.setOrientation(new float[]{1.0,0.0,0.0,-0.523599});
Viewpoint18.setPosition(new float[]{0.0,2000.0,3500.0});
Scene14.addChild(&Viewpoint18);

TimeSensor& TimeSensor19 =  TimeSensor();
TimeSensor19.setDEF(CString("TIMER"));
TimeSensor19.setCycleInterval(33.333332);
TimeSensor19.setLoop(true);
Scene14.addChild(&TimeSensor19);

PositionInterpolator& PositionInterpolator20 =  PositionInterpolator();
PositionInterpolator20.setDEF(CString("Camera001-POS-INTERP"));
PositionInterpolator20.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
PositionInterpolator20.setKeyValue(new float[]{0.0,2000.0,3500.0,0.0,2000.0,0.0,0.0,2000.0,-3500.0,0.0,2000.0,0.0,0.0,2000.0,3500.0}, 15);
Scene14.addChild(&PositionInterpolator20);

OrientationInterpolator& OrientationInterpolator21 =  OrientationInterpolator();
OrientationInterpolator21.setDEF(CString("Camera001-ROT-INTERP"));
OrientationInterpolator21.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator21.setKeyValue(new float[]{1.0,0.0,0.0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0.0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1.0,-0.000001,0.0,-0.523599}, 20);
Scene14.addChild(&OrientationInterpolator21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromField(CString("fraction_changed"));
ROUTE22.setFromNode(CString("TIMER"));
ROUTE22.setToField(CString("set_fraction"));
ROUTE22.setToNode(CString("Camera001-POS-INTERP"));
Scene14.addChild(&ROUTE22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromField(CString("value_changed"));
ROUTE23.setFromNode(CString("Camera001-POS-INTERP"));
ROUTE23.setToField(CString("set_position"));
ROUTE23.setToNode(CString("Camera001"));
Scene14.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromField(CString("fraction_changed"));
ROUTE24.setFromNode(CString("TIMER"));
ROUTE24.setToField(CString("set_fraction"));
ROUTE24.setToNode(CString("Camera001-ROT-INTERP"));
Scene14.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromField(CString("value_changed"));
ROUTE25.setFromNode(CString("Camera001-ROT-INTERP"));
ROUTE25.setToField(CString("set_orientation"));
ROUTE25.setToNode(CString("Camera001"));
Scene14.addChild(&ROUTE25);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Floor"));
Transform26.setTranslation(new float[]{1.241,0.0,0.358});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Appearance28.setDEF(CString("WireColor"));
Material& Material29 =  Material();
Material29.setDiffuseColor(new float[]{0.122,0.114,0.125});
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Box& Box30 =  Box();
Box30.setSize(new float[]{2000.0,1.0,2000.0});
Shape27.setGeometry(&Box30);

Transform26.addChild(&Shape27);

Scene14.addChild(&Transform26);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("TransformAudio1"));
Transform31.setTranslation(new float[]{-933.123474,0.0,-926.253235});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Appearance33.setDEF(CString("WireColor_1"));
Material& Material34 =  Material();
Material34.setDiffuseColor(new float[]{0.690196,0.101961,0.101961});
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Sphere& Sphere35 =  Sphere();
Sphere35.setRadius(100);
Shape32.setGeometry(&Sphere35);

Transform31.addChild(&Shape32);

Billboard& Billboard36 =  Billboard();
Transform& Transform37 =  Transform();
Transform37.setDEF(CString("violin"));
Transform37.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform37.setScale(new float[]{100.0,100.0,100.0});
Transform37.setTranslation(new float[]{0.0,100.0,0.0});
Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setAmbientIntensity(0.0933);
Material40.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material40.setShininess(0.51);
Material40.setSpecularColor(new float[]{0.46,0.46,0.46});
Appearance39.addChild(&Material40);

Shape38.addChild(&Appearance39);

Text& Text41 =  Text();
Text41.setString(new CString[]{CString("Violin")}, 1);
CFontStyle& FontStyle42 =  CFontStyle();
FontStyle42.setDEF(CString("ModelFontStyle"));
FontStyle42.setFamily(new CString[]{CString("Times"), CString("SERIF")}, 2);
FontStyle42.setStyle(CString("BOLD"));
Text41.setFontStyle(&FontStyle42);

Shape38.setGeometry(&Text41);

Transform37.addChild(&Shape38);

Billboard36.addChild(&Transform37);

Transform31.addChild(&Billboard36);

Scene14.addChild(&Transform31);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("TransformAudio2"));
Transform43.setTranslation(new float[]{933.475586,0.0,924.423218});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Appearance45.setDEF(CString("WireColor_2"));
Material& Material46 =  Material();
Material46.setDiffuseColor(new float[]{0.105882,0.694118,0.580392});
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

Sphere& Sphere47 =  Sphere();
Sphere47.setRadius(100);
Shape44.setGeometry(&Sphere47);

Transform43.addChild(&Shape44);

Billboard& Billboard48 =  Billboard();
Transform& Transform49 =  Transform();
Transform49.setDEF(CString("saxophone"));
Transform49.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform49.setScale(new float[]{100.0,100.0,100.0});
Transform49.setTranslation(new float[]{0.0,100.0,0.0});
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setAmbientIntensity(0.0933);
Material52.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material52.setShininess(0.51);
Material52.setSpecularColor(new float[]{0.46,0.46,0.46});
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

Text& Text53 =  Text();
Text53.setString(new CString[]{CString("Saxophone")}, 1);
CFontStyle& FontStyle54 =  CFontStyle();
FontStyle54.setUSE(CString("ModelFontStyle"));
Text53.setFontStyle(&FontStyle54);

Shape50.setGeometry(&Text53);

Transform49.addChild(&Shape50);

Billboard48.addChild(&Transform49);

Transform43.addChild(&Billboard48);

Scene14.addChild(&Transform43);

ListenerPointSource& ListenerPointSource55 =  ListenerPointSource();
ListenerPointSource55.setTrackCurrentView(true);
Scene14.addChild(&ListenerPointSource55);

StreamAudioDestination& StreamAudioDestination56 =  StreamAudioDestination();
SpatialSound& SpatialSound57 =  SpatialSound();
SpatialSound57.setDEF(CString("Audio1"));
Gain& Gain58 =  Gain();
AudioClip& AudioClip59 =  AudioClip();
AudioClip59.setDescription(CString("Violin"));
AudioClip59.setLoop(true);
AudioClip59.setUrl(new CString[]{CString("sound/violin.mp3"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3")}, 2);
Gain58.addChildren(AudioClip59);

SpatialSound57.addChildren(Gain58);

StreamAudioDestination56.addChildren(SpatialSound57);

SpatialSound& SpatialSound60 =  SpatialSound();
SpatialSound60.setDEF(CString("Audio2"));
Gain& Gain61 =  Gain();
AudioClip& AudioClip62 =  AudioClip();
AudioClip62.setDescription(CString("Saxophone"));
AudioClip62.setLoop(true);
AudioClip62.setUrl(new CString[]{CString("sound/saxophone.mp3"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")}, 2);
Gain61.addChildren(AudioClip62);

SpatialSound60.addChildren(Gain61);

StreamAudioDestination56.addChildren(SpatialSound60);

Scene14.addChild(&StreamAudioDestination56);

X3D0.setScene(&Scene14);

//}
