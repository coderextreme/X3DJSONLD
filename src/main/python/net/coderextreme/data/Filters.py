print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 07:09:54 GMT"

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

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "Filters.x3d"

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()

Scene12.children.append(NavigationInfo14)
Background15 = x3d.Background()
Background15.skyColor = [(0.2, 0.2, 0.2)]

Scene12.children.append(Background15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.description = "View entire audio model"
Viewpoint16.position = [0,500,600]
Viewpoint16.orientation = [1,0,0,-0.5]
Viewpoint16.retainUserOffsets = True

Scene12.children.append(Viewpoint16)
Transform17 = x3d.Transform(DEF="TransformAudio1")
Transform17.translation = [-200,50,0]
Shape18 = x3d.Shape()
Appearance19 = x3d.Appearance(DEF="audio_emit")
Material20 = x3d.Material()
Material20.diffuseColor = [0.1,0.1,0.1]
Material20.specularColor = [0.01,0.01,0.01]
Material20.emissiveColor = [0.8,0.8,0.8]

Appearance19.material = Material20

Shape18.appearance = Appearance19
Sphere21 = x3d.Sphere()
Sphere21.radius = 30

Shape18.geometry = Sphere21

Transform17.children.append(Shape18)

Scene12.children.append(Transform17)
Transform22 = x3d.Transform(DEF="TransformAudio2")
Transform22.translation = [0,50,0]
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance(DEF="audio_emit2")
Material25 = x3d.Material()
Material25.diffuseColor = [0.1,0.1,0.1]
Material25.specularColor = [0.01,0.01,0.01]
Material25.emissiveColor = [0.8,0.8,0.8]

Appearance24.material = Material25

Shape23.appearance = Appearance24
Sphere26 = x3d.Sphere()
Sphere26.radius = 30

Shape23.geometry = Sphere26

Transform22.children.append(Shape23)

Scene12.children.append(Transform22)
Transform27 = x3d.Transform(DEF="TransformAudio3")
Transform27.translation = [200,50,0]
Shape28 = x3d.Shape()
Appearance29 = x3d.Appearance(DEF="audio_emit3")
Material30 = x3d.Material()
Material30.diffuseColor = [0.1,0.1,0.1]
Material30.specularColor = [0.01,0.01,0.01]
Material30.emissiveColor = [0.8,0.8,0.8]

Appearance29.material = Material30

Shape28.appearance = Appearance29
Sphere31 = x3d.Sphere()
Sphere31.radius = 30

Shape28.geometry = Sphere31

Transform27.children.append(Shape28)

Scene12.children.append(Transform27)
Transform32 = x3d.Transform(DEF="AnimData")
Transform32.translation = [0,50,0]

Scene12.children.append(Transform32)
Transform33 = x3d.Transform(DEF="AnimDataBoxH")
Transform33.translation = [0,100,0]

Scene12.children.append(Transform33)
Transform34 = x3d.Transform(DEF="AnimDataBoxM")
Transform34.translation = [15,100,0]

Scene12.children.append(Transform34)
Transform35 = x3d.Transform(DEF="AnimDataBoxL")
Transform35.translation = [30,100,0]

Scene12.children.append(Transform35)
Transform36 = x3d.Transform(DEF="AnimDataBoxMM")
Transform36.translation = [-15,100,0]

Scene12.children.append(Transform36)
Transform37 = x3d.Transform(DEF="AnimDataBoxLM")
Transform37.translation = [-30,100,0]

Scene12.children.append(Transform37)
Transform38 = x3d.Transform()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance(DEF="floor")
Material41 = x3d.Material()
Material41.diffuseColor = [0.1,0.1,0.1]
Material41.specularColor = [0.5,0.6,0.7]
Material41.shininess = 0.8

Appearance40.material = Material41

Shape39.appearance = Appearance40
Cylinder42 = x3d.Cylinder()
Cylinder42.radius = 500

Shape39.geometry = Cylinder42

Transform38.children.append(Shape39)

Scene12.children.append(Transform38)
ListenerPointSource43 = x3d.ListenerPointSource()
ListenerPointSource43.trackCurrentView = True

Scene12.children.append(ListenerPointSource43)
StreamAudioDestination44 = x3d.StreamAudioDestination()
DynamicsCompressor45 = x3d.DynamicsCompressor()
Gain46 = x3d.Gain()
SpatialSound47 = x3d.SpatialSound(DEF="Audio1")
Gain48 = x3d.Gain()
Analyser49 = x3d.Analyser()
BiquadFilter50 = x3d.BiquadFilter()
BiquadFilter50.detune = 50
BiquadFilter50.type = "ALLPASS"
BiquadFilter50.frequency = 600
BiquadFilter50.qualityFactor = 30
AudioClip51 = x3d.AudioClip()
AudioClip51.description = "Techno beat"
AudioClip51.url = ["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"]
AudioClip51.loop = True

BiquadFilter50.children.append(AudioClip51)

Analyser49.children.append(BiquadFilter50)

Gain48.children.append(Analyser49)

SpatialSound47.children.append(Gain48)

Gain46.children.append(SpatialSound47)
SpatialSound52 = x3d.SpatialSound(DEF="Audio2")
Gain53 = x3d.Gain()
Analyser54 = x3d.Analyser()
BiquadFilter55 = x3d.BiquadFilter()
BiquadFilter55.detune = 15
BiquadFilter55.type = "ALLPASS"
BiquadFilter55.frequency = 600
BiquadFilter55.qualityFactor = 15
AudioClip56 = x3d.AudioClip()
AudioClip56.description = "Simple beat"
AudioClip56.url = ["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"]
AudioClip56.loop = True

BiquadFilter55.children.append(AudioClip56)

Analyser54.children.append(BiquadFilter55)

Gain53.children.append(Analyser54)

SpatialSound52.children.append(Gain53)

Gain46.children.append(SpatialSound52)
SpatialSound57 = x3d.SpatialSound(DEF="Audio3")
Gain58 = x3d.Gain()
Analyser59 = x3d.Analyser()
BiquadFilter60 = x3d.BiquadFilter()
BiquadFilter60.type = "ALLPASS"
BiquadFilter60.frequency = 1000
BiquadFilter60.qualityFactor = 0
AudioClip61 = x3d.AudioClip()
AudioClip61.description = "Wobble loop"
AudioClip61.url = ["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"]
AudioClip61.loop = True

BiquadFilter60.children.append(AudioClip61)

Analyser59.children.append(BiquadFilter60)

Gain58.children.append(Analyser59)

SpatialSound57.children.append(Gain58)

Gain46.children.append(SpatialSound57)

DynamicsCompressor45.children.append(Gain46)

StreamAudioDestination44.children.append(DynamicsCompressor45)

Scene12.children.append(StreamAudioDestination44)

X3D0.Scene = Scene12
f = open("../data/Filters.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Filters.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Filters.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
