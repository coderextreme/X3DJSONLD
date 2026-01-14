import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Sound")
component2.setLevel(3)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("AllAudioGraphNodesTest.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("25 October 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("Mon, 15 Sep 2025 05:18:43 GMT")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("warning")
meta8.setContent("Developmental test, no actual 3D model expected")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("identifier")
meta9.setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")

head1.addMeta(meta9)

X3D0.setHead(head1)
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.setTitle("AllAudioGraphNodesTest.x3d")

Scene10.addChild(WorldInfo11)
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
AcousticProperties14 = x3d.AcousticProperties()
AcousticProperties14.setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress")
AcousticProperties14.setDiffuse(0.25)
AcousticProperties14.setSpecular(1)
AcousticProperties14.setRefraction(0.5)

Appearance13.setAcousticProperties(AcousticProperties14)
Material15 = x3d.Material()

Appearance13.setMaterial(Material15)

Shape12.setAppearance(Appearance13)
Box16 = x3d.Box()

Shape12.setGeometry(Box16)

Scene10.addChild(Shape12)
Sound17 = x3d.Sound()
Sound17.setLocation(x3d.doubleToFloat([0,1.6,0]))
AudioClip18 = x3d.AudioClip()
AudioClip18.setDescription("testing")
AudioClip18.setUrl(["sound/saxophone.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])

Sound17.setSource(AudioClip18)

Scene10.addChild(Sound17)
Sound19 = x3d.Sound()
Sound19.setLocation(x3d.doubleToFloat([0,1.6,0]))
MovieTexture20 = x3d.MovieTexture()
MovieTexture20.setDescription("testing")
MovieTexture20.setUrl(["bogus.mpg","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])

Sound19.setSource(MovieTexture20)

Scene10.addChild(Sound19)
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

WaveShaper33.addChild(BufferAudioSource34)
ListenerPointSource35 = x3d.ListenerPointSource()

WaveShaper33.addChild(ListenerPointSource35)
MicrophoneSource36 = x3d.MicrophoneSource()

WaveShaper33.addChild(MicrophoneSource36)
OscillatorSource37 = x3d.OscillatorSource()

WaveShaper33.addChild(OscillatorSource37)
StreamAudioSource38 = x3d.StreamAudioSource()

WaveShaper33.addChild(StreamAudioSource38)

StreamAudioDestination32.addChild(WaveShaper33)

Gain31.addChild(StreamAudioDestination32)

DynamicsCompressor30.addChild(Gain31)

Delay29.addChild(DynamicsCompressor30)

Convolver28.addChild(Delay29)

ChannelSplitter27.addOutputs(Convolver28)

ChannelSelector26.addChild(ChannelSplitter27)

ChannelMerger25.addChild(ChannelSelector26)

BiquadFilter24.addChild(ChannelMerger25)

StreamAudioDestination23.addChild(BiquadFilter24)

Analyser22.addChild(StreamAudioDestination23)

SpatialSound21.addChild(Analyser22)

Scene10.addChild(SpatialSound21)

X3D0.setScene(Scene10)
X3D0.toFileX3D("../data/AllAudioGraphNodesTest.new.graalpy.x3d")
X3D0.toFileJSON("../data/AllAudioGraphNodesTest.new.graalpy.x3dj")
