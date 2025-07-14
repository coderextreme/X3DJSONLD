print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Filters.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "info"
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "28 October 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "5 December 2021"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "CHANGELOG.txt"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "credit for audio files"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.medialab.hmu.gr/minipages/x3domAudio"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "license"
meta13.content = "../license.html"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "Filters.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()

Scene14.children.append(NavigationInfo16)
Background17 = x3d.Background()

Scene14.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "View entire audio model"
Viewpoint18.orientation = [1,0,0,-0.5]
Viewpoint18.position = [0,500,600]
Viewpoint18.retainUserOffsets = True

Scene14.children.append(Viewpoint18)
Transform19 = x3d.Transform()
Transform19.DEF = "TransformAudio1"
Transform19.translation = [-200,50,0]
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
Appearance21.DEF = "audio_emit"
Material22 = x3d.Material()
Material22.diffuseColor = [0.1,0.1,0.1]
Material22.emissiveColor = [0.8,0.8,0.8]
Material22.specularColor = [0.01,0.01,0.01]

Appearance21.material = Material22

Shape20.appearance = Appearance21
Sphere23 = x3d.Sphere()
Sphere23.radius = 30

Shape20.geometry = Sphere23

Transform19.children.append(Shape20)

Scene14.children.append(Transform19)
Transform24 = x3d.Transform()
Transform24.DEF = "TransformAudio2"
Transform24.translation = [0,50,0]
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance()
Appearance26.DEF = "audio_emit2"
Material27 = x3d.Material()
Material27.diffuseColor = [0.1,0.1,0.1]
Material27.emissiveColor = [0.8,0.8,0.8]
Material27.specularColor = [0.01,0.01,0.01]

Appearance26.material = Material27

Shape25.appearance = Appearance26
Sphere28 = x3d.Sphere()
Sphere28.radius = 30

Shape25.geometry = Sphere28

Transform24.children.append(Shape25)

Scene14.children.append(Transform24)
Transform29 = x3d.Transform()
Transform29.DEF = "TransformAudio3"
Transform29.translation = [200,50,0]
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Appearance31.DEF = "audio_emit3"
Material32 = x3d.Material()
Material32.diffuseColor = [0.1,0.1,0.1]
Material32.emissiveColor = [0.8,0.8,0.8]
Material32.specularColor = [0.01,0.01,0.01]

Appearance31.material = Material32

Shape30.appearance = Appearance31
Sphere33 = x3d.Sphere()
Sphere33.radius = 30

Shape30.geometry = Sphere33

Transform29.children.append(Shape30)

Scene14.children.append(Transform29)
Transform34 = x3d.Transform()
Transform34.DEF = "AnimData"
Transform34.translation = [0,50,0]

Scene14.children.append(Transform34)
Transform35 = x3d.Transform()
Transform35.DEF = "AnimDataBoxH"
Transform35.translation = [0,100,0]

Scene14.children.append(Transform35)
Transform36 = x3d.Transform()
Transform36.DEF = "AnimDataBoxM"
Transform36.translation = [15,100,0]

Scene14.children.append(Transform36)
Transform37 = x3d.Transform()
Transform37.DEF = "AnimDataBoxL"
Transform37.translation = [30,100,0]

Scene14.children.append(Transform37)
Transform38 = x3d.Transform()
Transform38.DEF = "AnimDataBoxMM"
Transform38.translation = [-15,100,0]

Scene14.children.append(Transform38)
Transform39 = x3d.Transform()
Transform39.DEF = "AnimDataBoxLM"
Transform39.translation = [-30,100,0]

Scene14.children.append(Transform39)
Transform40 = x3d.Transform()
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance()
Appearance42.DEF = "floor"
Material43 = x3d.Material()
Material43.diffuseColor = [0.1,0.1,0.1]
Material43.shininess = 0.8
Material43.specularColor = [0.5,0.6,0.7]

Appearance42.material = Material43

Shape41.appearance = Appearance42
Cylinder44 = x3d.Cylinder()
Cylinder44.radius = 500

Shape41.geometry = Cylinder44

Transform40.children.append(Shape41)

Scene14.children.append(Transform40)
ListenerPointSource45 = x3d.ListenerPointSource()
ListenerPointSource45.trackCurrentView = True

Scene14.children.append(ListenerPointSource45)
StreamAudioDestination46 = x3d.StreamAudioDestination()
DynamicsCompressor47 = x3d.DynamicsCompressor()
Gain48 = x3d.Gain()
SpatialSound49 = x3d.SpatialSound()
SpatialSound49.DEF = "Audio1"
Gain50 = x3d.Gain()
Analyser51 = x3d.Analyser()
BiquadFilter52 = x3d.BiquadFilter()
BiquadFilter52.detune = 50
BiquadFilter52.frequency = 600
BiquadFilter52.qualityFactor = 30
BiquadFilter52.type = "ALLPASS"
AudioClip53 = x3d.AudioClip()
AudioClip53.description = "Techno beat"
AudioClip53.loop = True
AudioClip53.url = ["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"]

BiquadFilter52.children.append(AudioClip53)

Analyser51.children.append(BiquadFilter52)

Gain50.children.append(Analyser51)

SpatialSound49.children.append(Gain50)

Gain48.children.append(SpatialSound49)
SpatialSound54 = x3d.SpatialSound()
SpatialSound54.DEF = "Audio2"
Gain55 = x3d.Gain()
Analyser56 = x3d.Analyser()
BiquadFilter57 = x3d.BiquadFilter()
BiquadFilter57.detune = 15
BiquadFilter57.frequency = 600
BiquadFilter57.qualityFactor = 15
BiquadFilter57.type = "ALLPASS"
AudioClip58 = x3d.AudioClip()
AudioClip58.description = "Simple beat"
AudioClip58.loop = True
AudioClip58.url = ["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"]

BiquadFilter57.children.append(AudioClip58)

Analyser56.children.append(BiquadFilter57)

Gain55.children.append(Analyser56)

SpatialSound54.children.append(Gain55)

Gain48.children.append(SpatialSound54)
SpatialSound59 = x3d.SpatialSound()
SpatialSound59.DEF = "Audio3"
Gain60 = x3d.Gain()
Analyser61 = x3d.Analyser()
BiquadFilter62 = x3d.BiquadFilter()
BiquadFilter62.frequency = 1000
BiquadFilter62.qualityFactor = 0
BiquadFilter62.type = "ALLPASS"
AudioClip63 = x3d.AudioClip()
AudioClip63.description = "Wobble loop"
AudioClip63.loop = True
AudioClip63.url = ["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"]

BiquadFilter62.children.append(AudioClip63)

Analyser61.children.append(BiquadFilter62)

Gain60.children.append(Analyser61)

SpatialSound59.children.append(Gain60)

Gain48.children.append(SpatialSound59)

DynamicsCompressor47.children.append(Gain48)

StreamAudioDestination46.children.append(DynamicsCompressor47)

Scene14.children.append(StreamAudioDestination46)

X3D0.Scene = Scene14
f = open("../data/Filters.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Filters.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
