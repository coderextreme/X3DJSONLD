from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("Filters.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("info")
meta4.setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("created")
meta6.setContent("28 October 2020")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("modified")
meta7.setContent("4 August 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("CHANGELOG.txt")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("TODO")
meta9.setContent("credit for audio files")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("reference")
meta10.setContent("https://www.medialab.hmu.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
NavigationInfo15 = NavigationInfo()

Scene14.addChildren(NavigationInfo15)
Background16 = Background()
Background16.setSkyColor([0.2,0.2,0.2])

Scene14.addChildren(Background16)
Viewpoint17 = Viewpoint()
Viewpoint17.setOrientation([1,0,0,-0.5])
Viewpoint17.setPosition([0,500,600])
Viewpoint17.setRetainUserOffsets(True)

Scene14.addChildren(Viewpoint17)
Transform18 = Transform()
Transform18.setDEF("Audio1")
Transform18.setTranslation([-200,50,0])
Shape19 = Shape()
Appearance20 = Appearance()
Appearance20.setDEF("audio_emit")
Material21 = Material()
Material21.setDiffuseColor([0.1,0.1,0.1])
Material21.setEmissiveColor([0.8,0.8,0.8])
Material21.setSpecularColor([0.01,0.01,0.01])

Appearance20.setMaterial(Material21)

Shape19.setAppearance(Appearance20)
Sphere22 = Sphere()
Sphere22.setRadius(30)

Shape19.setGeometry(Sphere22)

Transform18.addChildren(Shape19)

Scene14.addChildren(Transform18)
Transform23 = Transform()
Transform23.setDEF("Audio2")
Transform23.setTranslation([0,50,0])
Shape24 = Shape()
Appearance25 = Appearance()
Appearance25.setDEF("audio_emit")
Material26 = Material()
Material26.setDiffuseColor([0.1,0.1,0.1])
Material26.setEmissiveColor([0.8,0.8,0.8])
Material26.setSpecularColor([0.01,0.01,0.01])

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
Sphere27 = Sphere()
Sphere27.setRadius(30)

Shape24.setGeometry(Sphere27)

Transform23.addChildren(Shape24)

Scene14.addChildren(Transform23)
Transform28 = Transform()
Transform28.setDEF("Audio3")
Transform28.setTranslation([200,50,0])
Shape29 = Shape()
Appearance30 = Appearance()
Appearance30.setDEF("audio_emit")
Material31 = Material()
Material31.setDiffuseColor([0.1,0.1,0.1])
Material31.setEmissiveColor([0.8,0.8,0.8])
Material31.setSpecularColor([0.01,0.01,0.01])

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Sphere32 = Sphere()
Sphere32.setRadius(30)

Shape29.setGeometry(Sphere32)

Transform28.addChildren(Shape29)

Scene14.addChildren(Transform28)
Transform33 = Transform()
Transform33.setDEF("AnimData")
Transform33.setTranslation([0,50,0])

Scene14.addChildren(Transform33)
Transform34 = Transform()
Transform34.setDEF("AnimDataBoxH")
Transform34.setTranslation([0,100,0])

Scene14.addChildren(Transform34)
Transform35 = Transform()
Transform35.setDEF("AnimDataBoxM")
Transform35.setTranslation([15,100,0])

Scene14.addChildren(Transform35)
Transform36 = Transform()
Transform36.setDEF("AnimDataBoxL")
Transform36.setTranslation([30,100,0])

Scene14.addChildren(Transform36)
Transform37 = Transform()
Transform37.setDEF("AnimDataBoxMM")
Transform37.setTranslation([-15,100,0])

Scene14.addChildren(Transform37)
Transform38 = Transform()
Transform38.setDEF("AnimDataBoxLM")
Transform38.setTranslation([-30,100,0])

Scene14.addChildren(Transform38)
Transform39 = Transform()
Shape40 = Shape()
Appearance41 = Appearance()
Appearance41.setDEF("floor")
Material42 = Material()
Material42.setDiffuseColor([0.1,0.1,0.1])
Material42.setShininess(0.8)
Material42.setSpecularColor([0.5,0.6,0.7])

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
Cylinder43 = Cylinder()
Cylinder43.setRadius(500)

Shape40.setGeometry(Cylinder43)

Transform39.addChildren(Shape40)

Scene14.addChildren(Transform39)
AudioDestination44 = AudioDestination()
AudioDestination44.setChannelCountMode("MAX")
DynamicsCompressor45 = DynamicsCompressor()
DynamicsCompressor45.setChannelCountMode("MAX")
DynamicsCompressor45.setChannelInterpretation("SPEAKERS")
Gain46 = Gain()
Gain46.setChannelCountMode("MAX")
Gain46.setChannelInterpretation("SPEAKERS")
SpatialSound47 = SpatialSound()
SpatialSound47.setUSE("Audio1")
Gain48 = Gain()
Gain48.setChannelCountMode("MAX")
Gain48.setChannelInterpretation("SPEAKERS")
Analyser49 = Analyser()
Analyser49.setChannelCountMode("MAX")
Analyser49.setChannelInterpretation("SPEAKERS")
BiquadFilter50 = BiquadFilter()
BiquadFilter50.setDetune(50)
BiquadFilter50.setFrequency(600)
BiquadFilter50.setQualityFactor(30)
BiquadFilter50.setType("allpass")
BiquadFilter50.setChannelCountMode("MAX")
BiquadFilter50.setChannelInterpretation("SPEAKERS")
AudioClip51 = AudioClip()
AudioClip51.setLoop(True)
AudioClip51.setPauseTime(-1)
AudioClip51.setResumeTime(-1)
AudioClip51.setStopTime(-1)
AudioClip51.setUrl(["sound/techno_beat.mp3"])

BiquadFilter50.addChildren(AudioClip51)

Analyser49.addChildren(BiquadFilter50)

Gain48.addChildren(Analyser49)

SpatialSound47.addChildren(Gain48)

Gain46.addChildren(SpatialSound47)
SpatialSound52 = SpatialSound()
SpatialSound52.setUSE("Audio2")
Gain53 = Gain()
Gain53.setChannelCountMode("MAX")
Gain53.setChannelInterpretation("SPEAKERS")
Analyser54 = Analyser()
Analyser54.setChannelCountMode("MAX")
Analyser54.setChannelInterpretation("SPEAKERS")
BiquadFilter55 = BiquadFilter()
BiquadFilter55.setDetune(15)
BiquadFilter55.setFrequency(600)
BiquadFilter55.setQualityFactor(15)
BiquadFilter55.setType("allpass")
BiquadFilter55.setChannelCountMode("MAX")
BiquadFilter55.setChannelInterpretation("SPEAKERS")
AudioClip56 = AudioClip()
AudioClip56.setLoop(True)
AudioClip56.setPauseTime(-1)
AudioClip56.setResumeTime(-1)
AudioClip56.setStopTime(-1)
AudioClip56.setUrl(["sound/beat.mp3"])

BiquadFilter55.addChildren(AudioClip56)

Analyser54.addChildren(BiquadFilter55)

Gain53.addChildren(Analyser54)

SpatialSound52.addChildren(Gain53)

Gain46.addChildren(SpatialSound52)
SpatialSound57 = SpatialSound()
SpatialSound57.setUSE("Audio3")
Gain58 = Gain()
Gain58.setChannelCountMode("MAX")
Gain58.setChannelInterpretation("SPEAKERS")
Analyser59 = Analyser()
Analyser59.setChannelCountMode("MAX")
Analyser59.setChannelInterpretation("SPEAKERS")
BiquadFilter60 = BiquadFilter()
BiquadFilter60.setFrequency(1000)
BiquadFilter60.setQualityFactor(0)
BiquadFilter60.setType("allpass")
BiquadFilter60.setChannelCountMode("MAX")
BiquadFilter60.setChannelInterpretation("SPEAKERS")
AudioClip61 = AudioClip()
AudioClip61.setLoop(True)
AudioClip61.setPauseTime(-1)
AudioClip61.setResumeTime(-1)
AudioClip61.setStopTime(-1)
AudioClip61.setUrl(["sound/wobble_loop.mp3"])

BiquadFilter60.addChildren(AudioClip61)

Analyser59.addChildren(BiquadFilter60)

Gain58.addChildren(Analyser59)

SpatialSound57.addChildren(Gain58)

Gain46.addChildren(SpatialSound57)

DynamicsCompressor45.addChildren(Gain46)

AudioDestination44.addChildren(DynamicsCompressor45)

Scene14.addChildren(AudioDestination44)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/Filters_RoundTrip.x3d")
