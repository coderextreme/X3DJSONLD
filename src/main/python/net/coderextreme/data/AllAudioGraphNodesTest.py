from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("AllAudioGraphNodesTest.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("25 October 2020")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("26 November 2021")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("warning")
meta7.setContent("Developmental test, no actual 3D model expected")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = Scene()
WorldInfo12 = WorldInfo()
WorldInfo12.setTitle("AllAudioGraphNodes.x3d")

Scene11.addChildren(WorldInfo12)
Shape13 = Shape()
Box14 = Box()

Shape13.setGeometry(Box14)
Appearance15 = Appearance()
AcousticProperties16 = AcousticProperties()
AcousticProperties16.setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress")
AcousticProperties16.setDiffuse(0.25)
AcousticProperties16.setRefraction(0.5)
AcousticProperties16.setSpecular(1)

Appearance15.setAcousticProperties(AcousticProperties16)
Material17 = Material()

Appearance15.setMaterial(Material17)

Shape13.setAppearance(Appearance15)

Scene11.addChildren(Shape13)
Sound18 = Sound()
Sound18.setLocation([0,1.6,0])
AudioClip19 = AudioClip()
AudioClip19.setDescription("testing")
AudioClip19.setUrl(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])

Sound18.setSource(AudioClip19)

Scene11.addChildren(Sound18)
Sound20 = Sound()
Sound20.setLocation([0,1.6,0])
MovieTexture21 = MovieTexture()
MovieTexture21.setDescription("testing")
MovieTexture21.setUrl(["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])

Sound20.setSource(MovieTexture21)

Scene11.addChildren(Sound20)
SpatialSound22 = SpatialSound()
Analyser23 = Analyser()
StreamAudioDestination24 = StreamAudioDestination()
BiquadFilter25 = BiquadFilter()
ChannelMerger26 = ChannelMerger()
ChannelSelector27 = ChannelSelector()
ChannelSplitter28 = ChannelSplitter()
Convolver29 = Convolver()
Delay30 = Delay()
DynamicsCompressor31 = DynamicsCompressor()
Gain32 = Gain()
StreamAudioDestination33 = StreamAudioDestination()
WaveShaper34 = WaveShaper()
#The following X3DSoundSourceNode nodes have no audio-graph children
BufferAudioSource35 = BufferAudioSource()

WaveShaper34.addChildren(BufferAudioSource35)
ListenerPointSource36 = ListenerPointSource()

WaveShaper34.addChildren(ListenerPointSource36)
MicrophoneSource37 = MicrophoneSource()

WaveShaper34.addChildren(MicrophoneSource37)
OscillatorSource38 = OscillatorSource()

WaveShaper34.addChildren(OscillatorSource38)
StreamAudioSource39 = StreamAudioSource()

WaveShaper34.addChildren(StreamAudioSource39)

StreamAudioDestination33.addChildren(WaveShaper34)

Gain32.addChildren(StreamAudioDestination33)

DynamicsCompressor31.addChildren(Gain32)

Delay30.addChildren(DynamicsCompressor31)

Convolver29.addChildren(Delay30)

ChannelSplitter28.addOutputs(Convolver29)

ChannelSelector27.addChildren(ChannelSplitter28)

ChannelMerger26.addChildren(ChannelSelector27)

BiquadFilter25.addChildren(ChannelMerger26)

StreamAudioDestination24.addChildren(BiquadFilter25)

Analyser23.addChildren(StreamAudioDestination24)

SpatialSound22.addChildren(Analyser23)

Scene11.addChildren(SpatialSound22)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/AllAudioGraphNodesTest_RoundTrip.x3d")
