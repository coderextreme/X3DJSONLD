#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Filters.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "info";
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "28 October 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "5 December 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "credit for audio files";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

head = head1;

WorldInfo WorldInfo14 = createNode("WorldInfo");
WorldInfo14.title = "Filters.x3d";
children = new MFNode();

children[0] = WorldInfo14;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
children[1] = NavigationInfo15;

Background Background16 = createNode("Background");
Background16.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[2] = Background16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "View entire audio model";
Viewpoint17.position = new SFVec3f(new float[0,500,600]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint17.retainUserOffsets = True;
children[3] = Viewpoint17;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "TransformAudio1";
Transform18.translation = new SFVec3f(new float[-200,50,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Appearance20.DEF = "audio_emit";
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material21.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material21.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 30;
Shape19.geometry = Sphere22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

children[4] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "TransformAudio2";
Transform23.translation = new SFVec3f(new float[0,50,0]);
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Appearance25.DEF = "audio_emit2";
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material26.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material26.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Sphere Sphere27 = createNode("Sphere");
Sphere27.radius = 30;
Shape24.geometry = Sphere27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

children[5] = Transform23;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "TransformAudio3";
Transform28.translation = new SFVec3f(new float[200,50,0]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Appearance30.DEF = "audio_emit3";
Material Material31 = createNode("Material");
Material31.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material31.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material31.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

Sphere Sphere32 = createNode("Sphere");
Sphere32.radius = 30;
Shape29.geometry = Sphere32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

children[6] = Transform28;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "AnimData";
Transform33.translation = new SFVec3f(new float[0,50,0]);
children[7] = Transform33;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "AnimDataBoxH";
Transform34.translation = new SFVec3f(new float[0,100,0]);
children[8] = Transform34;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "AnimDataBoxM";
Transform35.translation = new SFVec3f(new float[15,100,0]);
children[9] = Transform35;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "AnimDataBoxL";
Transform36.translation = new SFVec3f(new float[30,100,0]);
children[10] = Transform36;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "AnimDataBoxMM";
Transform37.translation = new SFVec3f(new float[-15,100,0]);
children[11] = Transform37;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "AnimDataBoxLM";
Transform38.translation = new SFVec3f(new float[-30,100,0]);
children[12] = Transform38;

Transform Transform39 = createNode("Transform");
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Appearance41.DEF = "floor";
Material Material42 = createNode("Material");
Material42.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material42.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Material42.shininess = 0.8;
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

Cylinder Cylinder43 = createNode("Cylinder");
Cylinder43.radius = 500;
Shape40.geometry = Cylinder43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

children[13] = Transform39;

ListenerPointSource ListenerPointSource44 = createNode("ListenerPointSource");
ListenerPointSource44.trackCurrentView = True;
children[14] = ListenerPointSource44;

StreamAudioDestination StreamAudioDestination45 = createNode("StreamAudioDestination");
DynamicsCompressor DynamicsCompressor46 = createNode("DynamicsCompressor");
Gain Gain47 = createNode("Gain");
SpatialSound SpatialSound48 = createNode("SpatialSound");
SpatialSound48.DEF = "Audio1";
Gain Gain49 = createNode("Gain");
Analyser Analyser50 = createNode("Analyser");
BiquadFilter BiquadFilter51 = createNode("BiquadFilter");
BiquadFilter51.detune = 50;
BiquadFilter51.frequency = 600;
BiquadFilter51.qualityFactor = 30;
BiquadFilter51.type = "ALLPASS";
AudioClip AudioClip52 = createNode("AudioClip");
AudioClip52.description = "Techno beat";
AudioClip52.url = new MFString(new java.lang.String["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"]);
AudioClip52.loop = True;
BiquadFilter51.children = new MFNode();

BiquadFilter51.children[0] = AudioClip52;

Analyser50.children = new MFNode();

Analyser50.children[0] = BiquadFilter51;

Gain49.children = new MFNode();

Gain49.children[0] = Analyser50;

SpatialSound48.children = new MFNode();

SpatialSound48.children[0] = Gain49;

Gain47.children = new MFNode();

Gain47.children[0] = SpatialSound48;

SpatialSound SpatialSound53 = createNode("SpatialSound");
SpatialSound53.DEF = "Audio2";
Gain Gain54 = createNode("Gain");
Analyser Analyser55 = createNode("Analyser");
BiquadFilter BiquadFilter56 = createNode("BiquadFilter");
BiquadFilter56.detune = 15;
BiquadFilter56.frequency = 600;
BiquadFilter56.qualityFactor = 15;
BiquadFilter56.type = "ALLPASS";
AudioClip AudioClip57 = createNode("AudioClip");
AudioClip57.description = "Simple beat";
AudioClip57.url = new MFString(new java.lang.String["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"]);
AudioClip57.loop = True;
BiquadFilter56.children = new MFNode();

BiquadFilter56.children[0] = AudioClip57;

Analyser55.children = new MFNode();

Analyser55.children[0] = BiquadFilter56;

Gain54.children = new MFNode();

Gain54.children[0] = Analyser55;

SpatialSound53.children = new MFNode();

SpatialSound53.children[0] = Gain54;

Gain47.children[1] = SpatialSound53;

SpatialSound SpatialSound58 = createNode("SpatialSound");
SpatialSound58.DEF = "Audio3";
Gain Gain59 = createNode("Gain");
Analyser Analyser60 = createNode("Analyser");
BiquadFilter BiquadFilter61 = createNode("BiquadFilter");
BiquadFilter61.frequency = 1000;
BiquadFilter61.qualityFactor = 0;
BiquadFilter61.type = "ALLPASS";
AudioClip AudioClip62 = createNode("AudioClip");
AudioClip62.description = "Wobble loop";
AudioClip62.url = new MFString(new java.lang.String["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"]);
AudioClip62.loop = True;
BiquadFilter61.children = new MFNode();

BiquadFilter61.children[0] = AudioClip62;

Analyser60.children = new MFNode();

Analyser60.children[0] = BiquadFilter61;

Gain59.children = new MFNode();

Gain59.children[0] = Analyser60;

SpatialSound58.children = new MFNode();

SpatialSound58.children[0] = Gain59;

Gain47.children[2] = SpatialSound58;

DynamicsCompressor46.children = new MFNode();

DynamicsCompressor46.children[0] = Gain47;

StreamAudioDestination45.children = new MFNode();

StreamAudioDestination45.children[0] = DynamicsCompressor46;

children[15] = StreamAudioDestination45;

}
