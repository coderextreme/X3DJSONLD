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
meta2.setContent(CString("Filters.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."));
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
meta11.setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"));
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
WorldInfo15.setTitle(CString("Filters.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene14.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene14.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("View entire audio model"));
Viewpoint18.setOrientation(new float[]{1.0,0.0,0.0,-0.5});
Viewpoint18.setPosition(new float[]{0.0,500.0,600.0});
Viewpoint18.setRetainUserOffsets(true);
Scene14.addChild(&Viewpoint18);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("TransformAudio1"));
Transform19.setTranslation(new float[]{-200.0,50.0,0.0});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Appearance21.setDEF(CString("audio_emit"));
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.1,0.1,0.1});
Material22.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material22.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Sphere& Sphere23 =  Sphere();
Sphere23.setRadius(30);
Shape20.setGeometry(&Sphere23);

Transform19.addChild(&Shape20);

Scene14.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("TransformAudio2"));
Transform24.setTranslation(new float[]{0.0,50.0,0.0});
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Appearance26.setDEF(CString("audio_emit2"));
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0.1,0.1,0.1});
Material27.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material27.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance26.addChild(&Material27);

Shape25.addChild(&Appearance26);

Sphere& Sphere28 =  Sphere();
Sphere28.setRadius(30);
Shape25.setGeometry(&Sphere28);

Transform24.addChild(&Shape25);

Scene14.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("TransformAudio3"));
Transform29.setTranslation(new float[]{200.0,50.0,0.0});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Appearance31.setDEF(CString("audio_emit3"));
Material& Material32 =  Material();
Material32.setDiffuseColor(new float[]{0.1,0.1,0.1});
Material32.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material32.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

Sphere& Sphere33 =  Sphere();
Sphere33.setRadius(30);
Shape30.setGeometry(&Sphere33);

Transform29.addChild(&Shape30);

Scene14.addChild(&Transform29);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("AnimData"));
Transform34.setTranslation(new float[]{0.0,50.0,0.0});
Scene14.addChild(&Transform34);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("AnimDataBoxH"));
Transform35.setTranslation(new float[]{0.0,100.0,0.0});
Scene14.addChild(&Transform35);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("AnimDataBoxM"));
Transform36.setTranslation(new float[]{15.0,100.0,0.0});
Scene14.addChild(&Transform36);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("AnimDataBoxL"));
Transform37.setTranslation(new float[]{30.0,100.0,0.0});
Scene14.addChild(&Transform37);

Transform& Transform38 =  Transform();
Transform38.setDEF(CString("AnimDataBoxMM"));
Transform38.setTranslation(new float[]{-15.0,100.0,0.0});
Scene14.addChild(&Transform38);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("AnimDataBoxLM"));
Transform39.setTranslation(new float[]{-30.0,100.0,0.0});
Scene14.addChild(&Transform39);

Transform& Transform40 =  Transform();
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Appearance42.setDEF(CString("floor"));
Material& Material43 =  Material();
Material43.setDiffuseColor(new float[]{0.1,0.1,0.1});
Material43.setShininess(0.8);
Material43.setSpecularColor(new float[]{0.5,0.6,0.7});
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

Cylinder& Cylinder44 =  Cylinder();
Cylinder44.setRadius(500);
Shape41.setGeometry(&Cylinder44);

Transform40.addChild(&Shape41);

Scene14.addChild(&Transform40);

ListenerPointSource& ListenerPointSource45 =  ListenerPointSource();
ListenerPointSource45.setTrackCurrentView(true);
Scene14.addChild(&ListenerPointSource45);

StreamAudioDestination& StreamAudioDestination46 =  StreamAudioDestination();
DynamicsCompressor& DynamicsCompressor47 =  DynamicsCompressor();
Gain& Gain48 =  Gain();
SpatialSound& SpatialSound49 =  SpatialSound();
SpatialSound49.setDEF(CString("Audio1"));
Gain& Gain50 =  Gain();
Analyser& Analyser51 =  Analyser();
BiquadFilter& BiquadFilter52 =  BiquadFilter();
BiquadFilter52.setDetune(50);
BiquadFilter52.setFrequency(600);
BiquadFilter52.setQualityFactor(30);
BiquadFilter52.setType(CString("ALLPASS"));
AudioClip& AudioClip53 =  AudioClip();
AudioClip53.setDescription(CString("Techno beat"));
AudioClip53.setLoop(true);
AudioClip53.setUrl(new CString[]{CString("sound/techno_beat.mp3"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3")}, 2);
BiquadFilter52.addChildren(AudioClip53);

Analyser51.addChildren(BiquadFilter52);

Gain50.addChildren(Analyser51);

SpatialSound49.addChildren(Gain50);

Gain48.addChildren(SpatialSound49);

SpatialSound& SpatialSound54 =  SpatialSound();
SpatialSound54.setDEF(CString("Audio2"));
Gain& Gain55 =  Gain();
Analyser& Analyser56 =  Analyser();
BiquadFilter& BiquadFilter57 =  BiquadFilter();
BiquadFilter57.setDetune(15);
BiquadFilter57.setFrequency(600);
BiquadFilter57.setQualityFactor(15);
BiquadFilter57.setType(CString("ALLPASS"));
AudioClip& AudioClip58 =  AudioClip();
AudioClip58.setDescription(CString("Simple beat"));
AudioClip58.setLoop(true);
AudioClip58.setUrl(new CString[]{CString("sound/beat.mp3"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3")}, 2);
BiquadFilter57.addChildren(AudioClip58);

Analyser56.addChildren(BiquadFilter57);

Gain55.addChildren(Analyser56);

SpatialSound54.addChildren(Gain55);

Gain48.addChildren(SpatialSound54);

SpatialSound& SpatialSound59 =  SpatialSound();
SpatialSound59.setDEF(CString("Audio3"));
Gain& Gain60 =  Gain();
Analyser& Analyser61 =  Analyser();
BiquadFilter& BiquadFilter62 =  BiquadFilter();
BiquadFilter62.setFrequency(1000);
BiquadFilter62.setQualityFactor(0);
BiquadFilter62.setType(CString("ALLPASS"));
AudioClip& AudioClip63 =  AudioClip();
AudioClip63.setDescription(CString("Wobble loop"));
AudioClip63.setLoop(true);
AudioClip63.setUrl(new CString[]{CString("sound/wobble_loop.mp3"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3")}, 2);
BiquadFilter62.addChildren(AudioClip63);

Analyser61.addChildren(BiquadFilter62);

Gain60.addChildren(Analyser61);

SpatialSound59.addChildren(Gain60);

Gain48.addChildren(SpatialSound59);

DynamicsCompressor47.addChildren(Gain48);

StreamAudioDestination46.addChildren(DynamicsCompressor47);

Scene14.addChild(&StreamAudioDestination46);

X3D0.setScene(&Scene14);

//}
