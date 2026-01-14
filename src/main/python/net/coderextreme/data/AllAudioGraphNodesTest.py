print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Sound"
component2.level = 3

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "AllAudioGraphNodesTest.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "25 October 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "Mon, 15 Sep 2025 05:18:43 GMT"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "warning"
meta8.content = "Developmental test, no actual 3D model expected"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "identifier"
meta9.content = "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "AllAudioGraphNodesTest.x3d"

Scene10.children.append(WorldInfo11)
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
AcousticProperties14 = x3d.AcousticProperties()
AcousticProperties14.description = "Testing of X3D4 nodes demonstrating W3C Audio API in progress"
AcousticProperties14.diffuse = 0.25
AcousticProperties14.specular = 1
AcousticProperties14.refraction = 0.5

Appearance13.acousticProperties = AcousticProperties14
Material15 = x3d.Material()

Appearance13.material = Material15

Shape12.appearance = Appearance13
Box16 = x3d.Box()

Shape12.geometry = Box16

Scene10.children.append(Shape12)
Sound17 = x3d.Sound()
Sound17.location = [0,1.6,0]
AudioClip18 = x3d.AudioClip()
AudioClip18.description = "testing"
AudioClip18.url = ["sound/saxophone.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]

Sound17.source = AudioClip18

Scene10.children.append(Sound17)
Sound19 = x3d.Sound()
Sound19.location = [0,1.6,0]
MovieTexture20 = x3d.MovieTexture()
MovieTexture20.description = "testing"
MovieTexture20.url = ["bogus.mpg","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"]

Sound19.source = MovieTexture20

Scene10.children.append(Sound19)
SpatialSound21 = x3d.SpatialSound()
Analyser22 = x3d.Analyser()
StreamAudioDestination23 = x3d.StreamAudioDestination()
BiquadFilter24 = x3d.BiquadFilter()
ChannelMerger25 = x3d.ChannelMerger()
ChannelSelector26 = x3d.ChannelSelector()
ChannelSplitter27 = x3d.ChannelSplitter()
Convolver28 = x3d.Convolver()
Delay29 = x3d.Delay()
DynamicsCompressor30 = x3d.DynamicsCompressor()
Gain31 = x3d.Gain()
StreamAudioDestination32 = x3d.StreamAudioDestination()
WaveShaper33 = x3d.WaveShaper()
BufferAudioSource34 = x3d.BufferAudioSource()

WaveShaper33.children.append(BufferAudioSource34)
ListenerPointSource35 = x3d.ListenerPointSource()

WaveShaper33.children.append(ListenerPointSource35)
MicrophoneSource36 = x3d.MicrophoneSource()

WaveShaper33.children.append(MicrophoneSource36)
OscillatorSource37 = x3d.OscillatorSource()

WaveShaper33.children.append(OscillatorSource37)
StreamAudioSource38 = x3d.StreamAudioSource()

WaveShaper33.children.append(StreamAudioSource38)

StreamAudioDestination32.children.append(WaveShaper33)

Gain31.children.append(StreamAudioDestination32)

DynamicsCompressor30.children.append(Gain31)

Delay29.children.append(DynamicsCompressor30)

Convolver28.children.append(Delay29)

ChannelSplitter27.outputs.append(Convolver28)

ChannelSelector26.children.append(ChannelSplitter27)

ChannelMerger25.children.append(ChannelSelector26)

BiquadFilter24.children.append(ChannelMerger25)

StreamAudioDestination23.children.append(BiquadFilter24)

Analyser22.children.append(StreamAudioDestination23)

SpatialSound21.children.append(Analyser22)

Scene10.children.append(SpatialSound21)

X3D0.Scene = Scene10
f = open("../data/AllAudioGraphNodesTest.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/AllAudioGraphNodesTest.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/AllAudioGraphNodesTest.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
