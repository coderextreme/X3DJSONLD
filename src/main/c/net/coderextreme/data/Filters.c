#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
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
meta7.content = "4 August 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "TODO";
meta9.content = "credit for audio files";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
children = new MFNode();

children[0] = NavigationInfo15;

Background Background16 = createNode("Background");
Background16.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint17.position = new SFVec3f(new float[0,500,600]);
Viewpoint17.retainUserOffsets = True;
children[2] = Viewpoint17;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "Audio1";
Transform18.translation = new SFVec3f(new float[-200,50,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Appearance20.DEF = "audio_emit";
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material21.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material21.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 30;
Shape19.geometry = Sphere22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

children[3] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.DEF = "Audio2";
Transform23.translation = new SFVec3f(new float[0,50,0]);
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Appearance25.DEF = "audio_emit";
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material26.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material26.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Sphere Sphere27 = createNode("Sphere");
Sphere27.radius = 30;
Shape24.geometry = Sphere27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

children[4] = Transform23;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "Audio3";
Transform28.translation = new SFVec3f(new float[200,50,0]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Appearance30.DEF = "audio_emit";
Material Material31 = createNode("Material");
Material31.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material31.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material31.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

Sphere Sphere32 = createNode("Sphere");
Sphere32.radius = 30;
Shape29.geometry = Sphere32;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

children[5] = Transform28;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "AnimData";
Transform33.translation = new SFVec3f(new float[0,50,0]);
children[6] = Transform33;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "AnimDataBoxH";
Transform34.translation = new SFVec3f(new float[0,100,0]);
children[7] = Transform34;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "AnimDataBoxM";
Transform35.translation = new SFVec3f(new float[15,100,0]);
children[8] = Transform35;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "AnimDataBoxL";
Transform36.translation = new SFVec3f(new float[30,100,0]);
children[9] = Transform36;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "AnimDataBoxMM";
Transform37.translation = new SFVec3f(new float[-15,100,0]);
children[10] = Transform37;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "AnimDataBoxLM";
Transform38.translation = new SFVec3f(new float[-30,100,0]);
children[11] = Transform38;

Transform Transform39 = createNode("Transform");
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Appearance41.DEF = "floor";
Material Material42 = createNode("Material");
Material42.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material42.shininess = 0.8;
Material42.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

Cylinder Cylinder43 = createNode("Cylinder");
Cylinder43.radius = 500;
Shape40.geometry = Cylinder43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

children[12] = Transform39;

AudioDestination AudioDestination44 = createNode("AudioDestination");
AudioDestination44.channelCountMode = "MAX";
DynamicsCompressor DynamicsCompressor45 = createNode("DynamicsCompressor");
DynamicsCompressor45.channelCountMode = "MAX";
DynamicsCompressor45.channelInterpretation = "SPEAKERS";
Gain Gain46 = createNode("Gain");
Gain46.channelCountMode = "MAX";
Gain46.channelInterpretation = "SPEAKERS";
SpatialSound SpatialSound47 = createNode("SpatialSound");
SpatialSound47.USE = "Audio1";
Gain Gain48 = createNode("Gain");
Gain48.channelCountMode = "MAX";
Gain48.channelInterpretation = "SPEAKERS";
Analyser Analyser49 = createNode("Analyser");
Analyser49.channelCountMode = "MAX";
Analyser49.channelInterpretation = "SPEAKERS";
BiquadFilter BiquadFilter50 = createNode("BiquadFilter");
BiquadFilter50.detune = 50;
BiquadFilter50.frequency = 600;
BiquadFilter50.qualityFactor = 30;
BiquadFilter50.type = "allpass";
BiquadFilter50.channelCountMode = "MAX";
BiquadFilter50.channelInterpretation = "SPEAKERS";
AudioClip AudioClip51 = createNode("AudioClip");
AudioClip51.loop = True;
AudioClip51.pauseTime = -1;
AudioClip51.resumeTime = -1;
AudioClip51.stopTime = -1;
AudioClip51.url = new MFString(new java.lang.String["sound/techno_beat.mp3"]);
BiquadFilter50.children = new MFNode();

BiquadFilter50.children[0] = AudioClip51;

Analyser49.children = new MFNode();

Analyser49.children[0] = BiquadFilter50;

Gain48.children = new MFNode();

Gain48.children[0] = Analyser49;

SpatialSound47.children = new MFNode();

SpatialSound47.children[0] = Gain48;

Gain46.children = new MFNode();

Gain46.children[0] = SpatialSound47;

SpatialSound SpatialSound52 = createNode("SpatialSound");
SpatialSound52.USE = "Audio2";
Gain Gain53 = createNode("Gain");
Gain53.channelCountMode = "MAX";
Gain53.channelInterpretation = "SPEAKERS";
Analyser Analyser54 = createNode("Analyser");
Analyser54.channelCountMode = "MAX";
Analyser54.channelInterpretation = "SPEAKERS";
BiquadFilter BiquadFilter55 = createNode("BiquadFilter");
BiquadFilter55.detune = 15;
BiquadFilter55.frequency = 600;
BiquadFilter55.qualityFactor = 15;
BiquadFilter55.type = "allpass";
BiquadFilter55.channelCountMode = "MAX";
BiquadFilter55.channelInterpretation = "SPEAKERS";
AudioClip AudioClip56 = createNode("AudioClip");
AudioClip56.loop = True;
AudioClip56.pauseTime = -1;
AudioClip56.resumeTime = -1;
AudioClip56.stopTime = -1;
AudioClip56.url = new MFString(new java.lang.String["sound/beat.mp3"]);
BiquadFilter55.children = new MFNode();

BiquadFilter55.children[0] = AudioClip56;

Analyser54.children = new MFNode();

Analyser54.children[0] = BiquadFilter55;

Gain53.children = new MFNode();

Gain53.children[0] = Analyser54;

SpatialSound52.children = new MFNode();

SpatialSound52.children[0] = Gain53;

Gain46.children[1] = SpatialSound52;

SpatialSound SpatialSound57 = createNode("SpatialSound");
SpatialSound57.USE = "Audio3";
Gain Gain58 = createNode("Gain");
Gain58.channelCountMode = "MAX";
Gain58.channelInterpretation = "SPEAKERS";
Analyser Analyser59 = createNode("Analyser");
Analyser59.channelCountMode = "MAX";
Analyser59.channelInterpretation = "SPEAKERS";
BiquadFilter BiquadFilter60 = createNode("BiquadFilter");
BiquadFilter60.frequency = 1000;
BiquadFilter60.qualityFactor = 0;
BiquadFilter60.type = "allpass";
BiquadFilter60.channelCountMode = "MAX";
BiquadFilter60.channelInterpretation = "SPEAKERS";
AudioClip AudioClip61 = createNode("AudioClip");
AudioClip61.loop = True;
AudioClip61.pauseTime = -1;
AudioClip61.resumeTime = -1;
AudioClip61.stopTime = -1;
AudioClip61.url = new MFString(new java.lang.String["sound/wobble_loop.mp3"]);
BiquadFilter60.children = new MFNode();

BiquadFilter60.children[0] = AudioClip61;

Analyser59.children = new MFNode();

Analyser59.children[0] = BiquadFilter60;

Gain58.children = new MFNode();

Gain58.children[0] = Analyser59;

SpatialSound57.children = new MFNode();

SpatialSound57.children[0] = Gain58;

Gain46.children[2] = SpatialSound57;

DynamicsCompressor45.children = new MFNode();

DynamicsCompressor45.children[0] = Gain46;

AudioDestination44.children = new MFNode();

AudioDestination44.children[0] = DynamicsCompressor45;

children[13] = AudioDestination44;

}
