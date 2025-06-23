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
meta7.setContent("5 December 2021")

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
meta10.setContent("https://www.medialab.hmu.gr/minipages/x3domAudio")

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
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("Filters.x3d")

Scene14.addChildren(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()

Scene14.addChildren(NavigationInfo16)
Background17 = x3d.Background()
Background17.setSkyColor([0.2,0.2,0.2])

Scene14.addChildren(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDescription("View entire audio model")
Viewpoint18.setOrientation([1,0,0,-0.5])
Viewpoint18.setPosition([0,500,600])
Viewpoint18.setRetainUserOffsets(True)

Scene14.addChildren(Viewpoint18)
Transform19 = x3d.Transform()
Transform19.setDEF("TransformAudio1")
Transform19.setTranslation([-200,50,0])
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Appearance21.setDEF("audio_emit")
Material22 = x3d.Material()
Material22.setDiffuseColor([0.1,0.1,0.1])
Material22.setEmissiveColor([0.8,0.8,0.8])
Material22.setSpecularColor([0.01,0.01,0.01])

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
Sphere23 = x3d.Sphere()
Sphere23.setRadius(30)

Shape20.setGeometry(Sphere23)

Transform19.addChild(Shape20)

Scene14.addChildren(Transform19)
Transform24 = x3d.Transform()
Transform24.setDEF("TransformAudio2")
Transform24.setTranslation([0,50,0])
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Appearance26.setDEF("audio_emit2")
Material27 = x3d.Material()
Material27.setDiffuseColor([0.1,0.1,0.1])
Material27.setEmissiveColor([0.8,0.8,0.8])
Material27.setSpecularColor([0.01,0.01,0.01])

Appearance26.setMaterial(Material27)

Shape25.setAppearance(Appearance26)
Sphere28 = x3d.Sphere()
Sphere28.setRadius(30)

Shape25.setGeometry(Sphere28)

Transform24.addChild(Shape25)

Scene14.addChildren(Transform24)
Transform29 = x3d.Transform()
Transform29.setDEF("TransformAudio3")
Transform29.setTranslation([200,50,0])
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Appearance31.setDEF("audio_emit3")
Material32 = x3d.Material()
Material32.setDiffuseColor([0.1,0.1,0.1])
Material32.setEmissiveColor([0.8,0.8,0.8])
Material32.setSpecularColor([0.01,0.01,0.01])

Appearance31.setMaterial(Material32)

Shape30.setAppearance(Appearance31)
Sphere33 = x3d.Sphere()
Sphere33.setRadius(30)

Shape30.setGeometry(Sphere33)

Transform29.addChild(Shape30)

Scene14.addChildren(Transform29)
Transform34 = x3d.Transform()
Transform34.setDEF("AnimData")
Transform34.setTranslation([0,50,0])

Scene14.addChildren(Transform34)
Transform35 = x3d.Transform()
Transform35.setDEF("AnimDataBoxH")
Transform35.setTranslation([0,100,0])

Scene14.addChildren(Transform35)
Transform36 = x3d.Transform()
Transform36.setDEF("AnimDataBoxM")
Transform36.setTranslation([15,100,0])

Scene14.addChildren(Transform36)
Transform37 = x3d.Transform()
Transform37.setDEF("AnimDataBoxL")
Transform37.setTranslation([30,100,0])

Scene14.addChildren(Transform37)
Transform38 = x3d.Transform()
Transform38.setDEF("AnimDataBoxMM")
Transform38.setTranslation([-15,100,0])

Scene14.addChildren(Transform38)
Transform39 = x3d.Transform()
Transform39.setDEF("AnimDataBoxLM")
Transform39.setTranslation([-30,100,0])

Scene14.addChildren(Transform39)
Transform40 = x3d.Transform()
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance()
Appearance42.setDEF("floor")
Material43 = x3d.Material()
Material43.setDiffuseColor([0.1,0.1,0.1])
Material43.setShininess(0.8)
Material43.setSpecularColor([0.5,0.6,0.7])

Appearance42.setMaterial(Material43)

Shape41.setAppearance(Appearance42)
Cylinder44 = x3d.Cylinder()
Cylinder44.setRadius(500)

Shape41.setGeometry(Cylinder44)

Transform40.addChild(Shape41)

Scene14.addChildren(Transform40)
ListenerPointSource45 = x3d.ListenerPointSource()
ListenerPointSource45.setTrackCurrentView(True)

Scene14.addChildren(ListenerPointSource45)
StreamAudioDestination46 = x3d.StreamAudioDestination()
DynamicsCompressor47 = x3d.DynamicsCompressor()
Gain48 = x3d.Gain()
SpatialSound49 = x3d.SpatialSound()
SpatialSound49.setDEF("Audio1")
Gain50 = x3d.Gain()
Analyser51 = x3d.Analyser()
BiquadFilter52 = x3d.BiquadFilter()
BiquadFilter52.setDetune(50)
BiquadFilter52.setFrequency(600)
BiquadFilter52.setQualityFactor(30)
BiquadFilter52.setType("ALLPASS")
AudioClip53 = x3d.AudioClip()
AudioClip53.setDescription("Techno beat")
AudioClip53.setLoop(True)
AudioClip53.setUrl(["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"])

BiquadFilter52.addChildren(AudioClip53)

Analyser51.addChildren(BiquadFilter52)

Gain50.addChildren(Analyser51)

SpatialSound49.addChildren(Gain50)

Gain48.addChildren(SpatialSound49)
SpatialSound54 = x3d.SpatialSound()
SpatialSound54.setDEF("Audio2")
Gain55 = x3d.Gain()
Analyser56 = x3d.Analyser()
BiquadFilter57 = x3d.BiquadFilter()
BiquadFilter57.setDetune(15)
BiquadFilter57.setFrequency(600)
BiquadFilter57.setQualityFactor(15)
BiquadFilter57.setType("ALLPASS")
AudioClip58 = x3d.AudioClip()
AudioClip58.setDescription("Simple beat")
AudioClip58.setLoop(True)
AudioClip58.setUrl(["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"])

BiquadFilter57.addChildren(AudioClip58)

Analyser56.addChildren(BiquadFilter57)

Gain55.addChildren(Analyser56)

SpatialSound54.addChildren(Gain55)

Gain48.addChildren(SpatialSound54)
SpatialSound59 = x3d.SpatialSound()
SpatialSound59.setDEF("Audio3")
Gain60 = x3d.Gain()
Analyser61 = x3d.Analyser()
BiquadFilter62 = x3d.BiquadFilter()
BiquadFilter62.setFrequency(1000)
BiquadFilter62.setQualityFactor(0)
BiquadFilter62.setType("ALLPASS")
AudioClip63 = x3d.AudioClip()
AudioClip63.setDescription("Wobble loop")
AudioClip63.setLoop(True)
AudioClip63.setUrl(["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"])

BiquadFilter62.addChildren(AudioClip63)

Analyser61.addChildren(BiquadFilter62)

Gain60.addChildren(Analyser61)

SpatialSound59.addChildren(Gain60)

Gain48.addChildren(SpatialSound59)

DynamicsCompressor47.addChildren(Gain48)

StreamAudioDestination46.addChildren(DynamicsCompressor47)

Scene14.addChildren(StreamAudioDestination46)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/Filters.new.python.x3d")
X3D0.toFileJSON("../data/Filters.new.python.json")
