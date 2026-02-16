import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.1")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("creator")
meta2.setContent("Holger Seelig")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("created")
meta3.setContent("Tue, 10 Feb 2026 12:09:57 GMT")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("modified")
meta4.setContent("Tue, 10 Feb 2026 12:34:21 GMT")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
WorldInfo8 = x3d.WorldInfo()

Scene7.addChild(WorldInfo8)
Background9 = x3d.Background()

Scene7.addChild(Background9)
Fog10 = x3d.Fog()

Scene7.addChild(Fog10)
LocalFog11 = x3d.LocalFog()

Scene7.addChild(LocalFog11)
TextureBackground12 = x3d.TextureBackground()

Scene7.addChild(TextureBackground12)
ProximitySensor13 = x3d.ProximitySensor()

Scene7.addChild(ProximitySensor13)
TransformSensor14 = x3d.TransformSensor()

Scene7.addChild(TransformSensor14)
VisibilitySensor15 = x3d.VisibilitySensor()

Scene7.addChild(VisibilitySensor15)
ColorChaser16 = x3d.ColorChaser()

Scene7.addChild(ColorChaser16)
ColorDamper17 = x3d.ColorDamper()

Scene7.addChild(ColorDamper17)
CoordinateChaser18 = x3d.CoordinateChaser()

Scene7.addChild(CoordinateChaser18)
CoordinateDamper19 = x3d.CoordinateDamper()

Scene7.addChild(CoordinateDamper19)
OrientationChaser20 = x3d.OrientationChaser()

Scene7.addChild(OrientationChaser20)
OrientationDamper21 = x3d.OrientationDamper()

Scene7.addChild(OrientationDamper21)
PositionChaser22 = x3d.PositionChaser()

Scene7.addChild(PositionChaser22)
PositionChaser2D23 = x3d.PositionChaser2D()

Scene7.addChild(PositionChaser2D23)
PositionDamper24 = x3d.PositionDamper()

Scene7.addChild(PositionDamper24)
PositionDamper2D25 = x3d.PositionDamper2D()

Scene7.addChild(PositionDamper2D25)
ScalarChaser26 = x3d.ScalarChaser()

Scene7.addChild(ScalarChaser26)
ScalarDamper27 = x3d.ScalarDamper()

Scene7.addChild(ScalarDamper27)
TexCoordChaser2D28 = x3d.TexCoordChaser2D()

Scene7.addChild(TexCoordChaser2D28)
TexCoordDamper2D29 = x3d.TexCoordDamper2D()

Scene7.addChild(TexCoordDamper2D29)
Group30 = x3d.Group()

Scene7.addChild(Group30)
StaticGroup31 = x3d.StaticGroup()

Scene7.addChild(StaticGroup31)
Switch32 = x3d.Switch()
Switch32.setWhichChoice(-1)

Scene7.addChild(Switch32)
Transform33 = x3d.Transform()

Scene7.addChild(Transform33)
ColorInterpolator34 = x3d.ColorInterpolator()

Scene7.addChild(ColorInterpolator34)
CoordinateInterpolator35 = x3d.CoordinateInterpolator()

Scene7.addChild(CoordinateInterpolator35)
CoordinateInterpolator2D36 = x3d.CoordinateInterpolator2D()

Scene7.addChild(CoordinateInterpolator2D36)
EaseInEaseOut37 = x3d.EaseInEaseOut()

Scene7.addChild(EaseInEaseOut37)
NormalInterpolator38 = x3d.NormalInterpolator()

Scene7.addChild(NormalInterpolator38)
OrientationInterpolator39 = x3d.OrientationInterpolator()

Scene7.addChild(OrientationInterpolator39)
PositionInterpolator40 = x3d.PositionInterpolator()

Scene7.addChild(PositionInterpolator40)
PositionInterpolator2D41 = x3d.PositionInterpolator2D()

Scene7.addChild(PositionInterpolator2D41)
ScalarInterpolator42 = x3d.ScalarInterpolator()

Scene7.addChild(ScalarInterpolator42)
SplinePositionInterpolator43 = x3d.SplinePositionInterpolator()

Scene7.addChild(SplinePositionInterpolator43)
SplinePositionInterpolator2D44 = x3d.SplinePositionInterpolator2D()

Scene7.addChild(SplinePositionInterpolator2D44)
SplineScalarInterpolator45 = x3d.SplineScalarInterpolator()

Scene7.addChild(SplineScalarInterpolator45)
SquadOrientationInterpolator46 = x3d.SquadOrientationInterpolator()

Scene7.addChild(SquadOrientationInterpolator46)
LayerSet47 = x3d.LayerSet()

Scene7.addLayerSet(LayerSet47)
DirectionalLight48 = x3d.DirectionalLight()

Scene7.addChild(DirectionalLight48)
EnvironmentLight49 = x3d.EnvironmentLight()
EnvironmentLight49.setOrigin(x3d.doubleToFloat([0,0,0]))
EnvironmentLight49.setRotation(x3d.doubleToFloat([0,0,1,0]))

Scene7.addChild(EnvironmentLight49)
PointLight50 = x3d.PointLight()

Scene7.addChild(PointLight50)
SpotLight51 = x3d.SpotLight()
SpotLight51.setBeamWidth(0.589049)

Scene7.addChild(SpotLight51)
Billboard52 = x3d.Billboard()

Scene7.addChild(Billboard52)
Collision53 = x3d.Collision()

Scene7.addChild(Collision53)
LOD54 = x3d.LOD()

Scene7.addChild(LOD54)
NavigationInfo55 = x3d.NavigationInfo()

Scene7.addChild(NavigationInfo55)
OrthoViewpoint56 = x3d.OrthoViewpoint()

Scene7.addChild(OrthoViewpoint56)
Viewpoint57 = x3d.Viewpoint()

Scene7.addChild(Viewpoint57)
ViewpointGroup58 = x3d.ViewpointGroup()

Scene7.addChild(ViewpointGroup58)
Anchor59 = x3d.Anchor()

Scene7.addChild(Anchor59)
Inline60 = x3d.Inline()

Scene7.addChild(Inline60)
LoadSensor61 = x3d.LoadSensor()

Scene7.addChild(LoadSensor61)
CylinderSensor62 = x3d.CylinderSensor()

Scene7.addChild(CylinderSensor62)
PlaneSensor63 = x3d.PlaneSensor()

Scene7.addChild(PlaneSensor63)
SphereSensor64 = x3d.SphereSensor()

Scene7.addChild(SphereSensor64)
TouchSensor65 = x3d.TouchSensor()

Scene7.addChild(TouchSensor65)
ClipPlane66 = x3d.ClipPlane()

Scene7.addChild(ClipPlane66)
Shape67 = x3d.Shape()

Scene7.addChild(Shape67)
Analyser68 = x3d.Analyser()

Scene7.addChild(Analyser68)
AudioDestination69 = x3d.AudioDestination()

Scene7.addChild(AudioDestination69)
BiquadFilter70 = x3d.BiquadFilter()
BiquadFilter70.setType("LOWPASS")

Scene7.addChild(BiquadFilter70)
BufferAudioSource71 = x3d.BufferAudioSource()

Scene7.addChild(BufferAudioSource71)
ChannelMerger72 = x3d.ChannelMerger()

Scene7.addChild(ChannelMerger72)
ChannelSelector73 = x3d.ChannelSelector()

Scene7.addChild(ChannelSelector73)
ChannelSplitter74 = x3d.ChannelSplitter()

Scene7.addChild(ChannelSplitter74)
Convolver75 = x3d.Convolver()

Scene7.addChild(Convolver75)
Delay76 = x3d.Delay()

Scene7.addChild(Delay76)
DynamicsCompressor77 = x3d.DynamicsCompressor()

Scene7.addChild(DynamicsCompressor77)
Gain78 = x3d.Gain()

Scene7.addChild(Gain78)
ListenerPointSource79 = x3d.ListenerPointSource()

Scene7.addChild(ListenerPointSource79)
MicrophoneSource80 = x3d.MicrophoneSource()

Scene7.addChild(MicrophoneSource80)
OscillatorSource81 = x3d.OscillatorSource()

Scene7.addChild(OscillatorSource81)
Sound82 = x3d.Sound()

Scene7.addChild(Sound82)
SpatialSound83 = x3d.SpatialSound()

Scene7.addChild(SpatialSound83)
StreamAudioDestination84 = x3d.StreamAudioDestination()

Scene7.addChild(StreamAudioDestination84)
StreamAudioSource85 = x3d.StreamAudioSource()

Scene7.addChild(StreamAudioSource85)
WaveShaper86 = x3d.WaveShaper()

Scene7.addChild(WaveShaper86)
TimeSensor87 = x3d.TimeSensor()

Scene7.addChild(TimeSensor87)
CADAssembly88 = x3d.CADAssembly()

Scene7.addChild(CADAssembly88)
CADFace89 = x3d.CADFace()

Scene7.addChild(CADFace89)
CADLayer90 = x3d.CADLayer()

Scene7.addChild(CADLayer90)
CADPart91 = x3d.CADPart()

Scene7.addChild(CADPart91)
DISEntityManager92 = x3d.DISEntityManager()

Scene7.addChild(DISEntityManager92)
DISEntityTypeMapping93 = x3d.DISEntityTypeMapping()

Scene7.addChild(DISEntityTypeMapping93)
EspduTransform94 = x3d.EspduTransform()

Scene7.addChild(EspduTransform94)
ReceiverPdu95 = x3d.ReceiverPdu()

Scene7.addChild(ReceiverPdu95)
SignalPdu96 = x3d.SignalPdu()

Scene7.addChild(SignalPdu96)
TransmitterPdu97 = x3d.TransmitterPdu()

Scene7.addChild(TransmitterPdu97)
BooleanFilter98 = x3d.BooleanFilter()

Scene7.addChild(BooleanFilter98)
BooleanSequencer99 = x3d.BooleanSequencer()

Scene7.addChild(BooleanSequencer99)
BooleanToggle100 = x3d.BooleanToggle()

Scene7.addChild(BooleanToggle100)
BooleanTrigger101 = x3d.BooleanTrigger()

Scene7.addChild(BooleanTrigger101)
IntegerSequencer102 = x3d.IntegerSequencer()

Scene7.addChild(IntegerSequencer102)
IntegerTrigger103 = x3d.IntegerTrigger()

Scene7.addChild(IntegerTrigger103)
TimeTrigger104 = x3d.TimeTrigger()

Scene7.addChild(TimeTrigger104)
KeySensor105 = x3d.KeySensor()
KeySensor105.setEnabled(False)

Scene7.addChild(KeySensor105)
StringSensor106 = x3d.StringSensor()

Scene7.addChild(StringSensor106)
TextureProjector107 = x3d.TextureProjector()
TextureProjector107.setAmbientIntensity(0)
TextureProjector107.setColor(x3d.doubleToFloat([1,1,1]))
TextureProjector107.setFieldOfView(0.7854)
TextureProjector107.setIntensity(0.7854)
TextureProjector107.setUpVector(x3d.doubleToFloat([0,1,0]))

Scene7.addChild(TextureProjector107)
TextureProjectorParallel108 = x3d.TextureProjectorParallel()
TextureProjectorParallel108.setAmbientIntensity(0)
TextureProjectorParallel108.setColor(x3d.doubleToFloat([1,1,1]))
TextureProjectorParallel108.setIntensity(0.7854)
TextureProjectorParallel108.setUpVector(x3d.doubleToFloat([0,1,0]))

Scene7.addChild(TextureProjectorParallel108)
HAnimHumanoid109 = x3d.HAnimHumanoid()
HAnimHumanoid109.setVersion("2.0")

Scene7.addChild(HAnimHumanoid109)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint110.setLlimit(x3d.doubleToFloat([0,0,0]))

Scene7.addChild(HAnimJoint110)
HAnimPose111 = x3d.HAnimPose()
HAnimPose111.setLoa(-1)
HAnimPose111.setTransitionDuration(0)

Scene7.addChild(HAnimPose111)
HAnimSegment112 = x3d.HAnimSegment()

Scene7.addChild(HAnimSegment112)
HAnimSite113 = x3d.HAnimSite()

Scene7.addChild(HAnimSite113)
ParticleSystem114 = x3d.ParticleSystem()

Scene7.addChild(ParticleSystem114)
Script115 = x3d.Script()

Scene7.addChild(Script115)
FontLibrary116 = x3d.FontLibrary()

Scene7.addChild(FontLibrary116)
CollidableOffset117 = x3d.CollidableOffset()

Scene7.addChild(CollidableOffset117)
CollidableShape118 = x3d.CollidableShape()

Scene7.addChild(CollidableShape118)
CollisionSensor119 = x3d.CollisionSensor()

Scene7.addChild(CollisionSensor119)
CollisionSpace120 = x3d.CollisionSpace()

Scene7.addChild(CollisionSpace120)
RigidBodyCollection121 = x3d.RigidBodyCollection()

Scene7.addChild(RigidBodyCollection121)
IsoSurfaceVolumeData122 = x3d.IsoSurfaceVolumeData()

Scene7.addChild(IsoSurfaceVolumeData122)
SegmentedVolumeData123 = x3d.SegmentedVolumeData()

Scene7.addChild(SegmentedVolumeData123)
VolumeData124 = x3d.VolumeData()

Scene7.addChild(VolumeData124)
GeoLOD125 = x3d.GeoLOD()

Scene7.addChild(GeoLOD125)
GeoLocation126 = x3d.GeoLocation()

Scene7.addChild(GeoLocation126)
GeoMetadata127 = x3d.GeoMetadata()

Scene7.addChild(GeoMetadata127)
GeoPositionInterpolator128 = x3d.GeoPositionInterpolator()

Scene7.addChild(GeoPositionInterpolator128)
GeoProximitySensor129 = x3d.GeoProximitySensor()

Scene7.addChild(GeoProximitySensor129)
GeoTouchSensor130 = x3d.GeoTouchSensor()

Scene7.addChild(GeoTouchSensor130)
GeoTransform131 = x3d.GeoTransform()

Scene7.addChild(GeoTransform131)
GeoViewpoint132 = x3d.GeoViewpoint()

Scene7.addChild(GeoViewpoint132)
ContourPolyline2D133 = x3d.ContourPolyline2D()

Scene7.addChild(ContourPolyline2D133)
NurbsCurve2D134 = x3d.NurbsCurve2D()

Scene7.addChild(NurbsCurve2D134)
NurbsOrientationInterpolator135 = x3d.NurbsOrientationInterpolator()

Scene7.addChild(NurbsOrientationInterpolator135)
NurbsPositionInterpolator136 = x3d.NurbsPositionInterpolator()

Scene7.addChild(NurbsPositionInterpolator136)
NurbsSet137 = x3d.NurbsSet()

Scene7.addChild(NurbsSet137)
NurbsSurfaceInterpolator138 = x3d.NurbsSurfaceInterpolator()

Scene7.addChild(NurbsSurfaceInterpolator138)
LayoutGroup139 = x3d.LayoutGroup()

Scene7.addChild(LayoutGroup139)
ScreenGroup140 = x3d.ScreenGroup()

Scene7.addChild(ScreenGroup140)
LinePickSensor141 = x3d.LinePickSensor()

Scene7.addChild(LinePickSensor141)
PickableGroup142 = x3d.PickableGroup()

Scene7.addChild(PickableGroup142)
PointPickSensor143 = x3d.PointPickSensor()

Scene7.addChild(PointPickSensor143)
PrimitivePickSensor144 = x3d.PrimitivePickSensor()

Scene7.addChild(PrimitivePickSensor144)
VolumePickSensor145 = x3d.VolumePickSensor()

Scene7.addChild(VolumePickSensor145)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/Nodes.new.graalpy.x3d")
X3D0.toFileJSON("../data/Nodes.new.graalpy.x3dj")
