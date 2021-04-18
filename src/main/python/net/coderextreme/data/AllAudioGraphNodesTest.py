import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("AllAudioGraphNodesTest.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("25 October 2020")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("10 April 2021")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("warning")
meta7.setContent("Developmental test, no actual 3D model expected")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("identifier")
meta8.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("generator")
meta9.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
WorldInfo12 = x3d.WorldInfo()
WorldInfo12.setTitle("AllAudioGraphNodes.x3d")

Scene11.addChildren(WorldInfo12)
Shape13 = x3d.Shape()
Box14 = x3d.Box()

Shape13.setGeometry(Box14)
Appearance15 = x3d.Appearance()
AcousticProperties16 = x3d.AcousticProperties()

Appearance15.setAcousticProperties(AcousticProperties16)
Material17 = x3d.Material()

Appearance15.setMaterial(Material17)

Shape13.setAppearance(Appearance15)

Scene11.addChildren(Shape13)
SpatialSound18 = x3d.SpatialSound()
Analyser19 = x3d.Analyser()
AudioDestination20 = x3d.AudioDestination()
BiquadFilter21 = x3d.BiquadFilter()
ChannelMerger22 = x3d.ChannelMerger()
ChannelSelector23 = x3d.ChannelSelector()
ChannelSplitter24 = x3d.ChannelSplitter()
Convolver25 = x3d.Convolver()
Delay26 = x3d.Delay()
DynamicsCompressor27 = x3d.DynamicsCompressor()
Gain28 = x3d.Gain()
StreamAudioDestination29 = x3d.StreamAudioDestination()
WaveShaper30 = x3d.WaveShaper()
#The following X3DSoundSourceNode nodes have no audio-graph children
BufferAudioSource31 = x3d.BufferAudioSource()

WaveShaper30.addChildren(BufferAudioSource31)
ListenerPointSource32 = x3d.ListenerPointSource()

WaveShaper30.addChildren(ListenerPointSource32)
MicrophoneSource33 = x3d.MicrophoneSource()

WaveShaper30.addChildren(MicrophoneSource33)
OscillatorSource34 = x3d.OscillatorSource()

WaveShaper30.addChildren(OscillatorSource34)
StreamAudioSource35 = x3d.StreamAudioSource()

WaveShaper30.addChildren(StreamAudioSource35)

StreamAudioDestination29.addChildren(WaveShaper30)

Gain28.addChildren(StreamAudioDestination29)

DynamicsCompressor27.addChildren(Gain28)

Delay26.addChildren(DynamicsCompressor27)

Convolver25.addChildren(Delay26)

ChannelSplitter24.addOutputs(Convolver25)

ChannelSelector23.addChildren(ChannelSplitter24)

ChannelMerger22.addChildren(ChannelSelector23)

BiquadFilter21.addChildren(ChannelMerger22)

AudioDestination20.addChildren(BiquadFilter21)

Analyser19.addChildren(AudioDestination20)

SpatialSound18.addChildren(Analyser19)

Scene11.addChildren(SpatialSound18)
Sound36 = x3d.Sound()
Sound36.setLocation([0,1.6,0])
AudioClip37 = x3d.AudioClip()
AudioClip37.setDescription("testing")
AudioClip37.setUrl(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])

Sound36.setSource(AudioClip37)

Scene11.addChildren(Sound36)
Sound38 = x3d.Sound()
Sound38.setLocation([0,1.6,0])
MovieTexture39 = x3d.MovieTexture()
MovieTexture39.setDescription("testing")
MovieTexture39.setUrl(["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])

Sound38.setSource(MovieTexture39)

Scene11.addChildren(Sound38)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/AllAudioGraphNodesTest_RoundTrip.x3d")
