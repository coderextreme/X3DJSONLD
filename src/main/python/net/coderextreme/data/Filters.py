import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Filters.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("info")
meta4.setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("28 October 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("20 April 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("CHANGELOG.txt")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("TODO")
meta9.setContent("credit for audio files")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://www.medialab.teicrete.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
NavigationInfo15 = x3d.NavigationInfo()

Scene14.addChildren(NavigationInfo15)
Background16 = x3d.Background()
Background16.setSkyColor([0.2,0.2,0.2])

Scene14.addChildren(Background16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setBind("true")
Viewpoint17.setOrientation([1,0,0,-0.5])
Viewpoint17.setPosition([0,500,600])
Viewpoint17.setRetainUserOffsets(True)

Scene14.addChildren(Viewpoint17)
Transform18 = x3d.Transform()
Transform18.setDEF("Audio1")
Transform18.setTranslation([-200,50,0])
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Appearance20.setDEF("audio_emit")
Material21 = x3d.Material()
Material21.setDiffuseColor([0.1,0.1,0.1])
Material21.setEmissiveColor([0.8,0.8,0.8])
Material21.setSpecularColor([0.01,0.01,0.01])

Appearance20.setMaterial(Material21)

Shape19.setAppearance(Appearance20)
Sphere22 = x3d.Sphere()
Sphere22.setRadius(30)

Shape19.setGeometry(Sphere22)

Transform18.addChildren(Shape19)

Scene14.addChildren(Transform18)
Transform23 = x3d.Transform()
Transform23.setDEF("Audio2")
Transform23.setTranslation([0,50,0])
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Appearance25.setDEF("audio_emit")
Material26 = x3d.Material()
Material26.setDiffuseColor([0.1,0.1,0.1])
Material26.setEmissiveColor([0.8,0.8,0.8])
Material26.setSpecularColor([0.01,0.01,0.01])

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
Sphere27 = x3d.Sphere()
Sphere27.setRadius(30)

Shape24.setGeometry(Sphere27)

Transform23.addChildren(Shape24)

Scene14.addChildren(Transform23)
Transform28 = x3d.Transform()
Transform28.setDEF("Audio3")
Transform28.setTranslation([200,50,0])
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Appearance30.setDEF("audio_emit")
Material31 = x3d.Material()
Material31.setDiffuseColor([0.1,0.1,0.1])
Material31.setEmissiveColor([0.8,0.8,0.8])
Material31.setSpecularColor([0.01,0.01,0.01])

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
Sphere32 = x3d.Sphere()
Sphere32.setRadius(30)

Shape29.setGeometry(Sphere32)

Transform28.addChildren(Shape29)

Scene14.addChildren(Transform28)
Transform33 = x3d.Transform()
Transform33.setDEF("AnimData")
Transform33.setTranslation([0,50,0])

Scene14.addChildren(Transform33)
Transform34 = x3d.Transform()
Transform34.setDEF("AnimDataBoxH")
Transform34.setTranslation([0,100,0])

Scene14.addChildren(Transform34)
Transform35 = x3d.Transform()
Transform35.setDEF("AnimDataBoxM")
Transform35.setTranslation([15,100,0])

Scene14.addChildren(Transform35)
Transform36 = x3d.Transform()
Transform36.setDEF("AnimDataBoxL")
Transform36.setTranslation([30,100,0])

Scene14.addChildren(Transform36)
Transform37 = x3d.Transform()
Transform37.setDEF("AnimDataBoxMM")
Transform37.setTranslation([-15,100,0])

Scene14.addChildren(Transform37)
Transform38 = x3d.Transform()
Transform38.setDEF("AnimDataBoxLM")
Transform38.setTranslation([-30,100,0])

Scene14.addChildren(Transform38)
Transform39 = x3d.Transform()
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Appearance41.setDEF("floor")
Material42 = x3d.Material()
Material42.setDiffuseColor([0.1,0.1,0.1])
Material42.setShininess(0.8)
Material42.setSpecularColor([0.5,0.6,0.7])

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
Cylinder43 = x3d.Cylinder()
Cylinder43.setRadius(500)

Shape40.setGeometry(Cylinder43)

Transform39.addChildren(Shape40)

Scene14.addChildren(Transform39)
AudioDestination44 = x3d.AudioDestination()
DynamicsCompressor45 = x3d.DynamicsCompressor()
Gain46 = x3d.Gain()
SpatialSound47 = x3d.SpatialSound()
SpatialSound47.setUSE("Audio1")
Gain48 = x3d.Gain()
Analyser49 = x3d.Analyser()
BiquadFilter50 = x3d.BiquadFilter()
BiquadFilter50.setDetune(50)
BiquadFilter50.setFrequency(600)
BiquadFilter50.setQualityFactor(30)
BiquadFilter50.setType("allpass")
AudioClip51 = x3d.AudioClip()
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
SpatialSound52 = x3d.SpatialSound()
SpatialSound52.setUSE("Audio2")
Gain53 = x3d.Gain()
Analyser54 = x3d.Analyser()
BiquadFilter55 = x3d.BiquadFilter()
BiquadFilter55.setDetune(15)
BiquadFilter55.setFrequency(600)
BiquadFilter55.setQualityFactor(15)
BiquadFilter55.setType("allpass")
AudioClip56 = x3d.AudioClip()
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
SpatialSound57 = x3d.SpatialSound()
SpatialSound57.setUSE("Audio3")
Gain58 = x3d.Gain()
Analyser59 = x3d.Analyser()
BiquadFilter60 = x3d.BiquadFilter()
BiquadFilter60.setFrequency(1000)
BiquadFilter60.setQualityFactor(0)
BiquadFilter60.setType("allpass")
AudioClip61 = x3d.AudioClip()
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