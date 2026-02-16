print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "creator"
meta2.content = "Holger Seelig"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "created"
meta3.content = "Tue, 10 Feb 2026 12:09:57 GMT"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "modified"
meta4.content = "Tue, 10 Feb 2026 12:34:21 GMT"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
WorldInfo8 = x3d.WorldInfo()

Scene7.children.append(WorldInfo8)
Background9 = x3d.Background()

Scene7.children.append(Background9)
Fog10 = x3d.Fog()

Scene7.children.append(Fog10)
LocalFog11 = x3d.LocalFog()

Scene7.children.append(LocalFog11)
TextureBackground12 = x3d.TextureBackground()

Scene7.children.append(TextureBackground12)
ProximitySensor13 = x3d.ProximitySensor()

Scene7.children.append(ProximitySensor13)
TransformSensor14 = x3d.TransformSensor()

Scene7.children.append(TransformSensor14)
VisibilitySensor15 = x3d.VisibilitySensor()

Scene7.children.append(VisibilitySensor15)
ColorChaser16 = x3d.ColorChaser()

Scene7.children.append(ColorChaser16)
ColorDamper17 = x3d.ColorDamper()

Scene7.children.append(ColorDamper17)
CoordinateChaser18 = x3d.CoordinateChaser()

Scene7.children.append(CoordinateChaser18)
CoordinateDamper19 = x3d.CoordinateDamper()

Scene7.children.append(CoordinateDamper19)
OrientationChaser20 = x3d.OrientationChaser()

Scene7.children.append(OrientationChaser20)
OrientationDamper21 = x3d.OrientationDamper()

Scene7.children.append(OrientationDamper21)
PositionChaser22 = x3d.PositionChaser()

Scene7.children.append(PositionChaser22)
PositionChaser2D23 = x3d.PositionChaser2D()

Scene7.children.append(PositionChaser2D23)
PositionDamper24 = x3d.PositionDamper()

Scene7.children.append(PositionDamper24)
PositionDamper2D25 = x3d.PositionDamper2D()

Scene7.children.append(PositionDamper2D25)
ScalarChaser26 = x3d.ScalarChaser()

Scene7.children.append(ScalarChaser26)
ScalarDamper27 = x3d.ScalarDamper()

Scene7.children.append(ScalarDamper27)
TexCoordChaser2D28 = x3d.TexCoordChaser2D()

Scene7.children.append(TexCoordChaser2D28)
TexCoordDamper2D29 = x3d.TexCoordDamper2D()

Scene7.children.append(TexCoordDamper2D29)
Group30 = x3d.Group()

Scene7.children.append(Group30)
StaticGroup31 = x3d.StaticGroup()

Scene7.children.append(StaticGroup31)
Switch32 = x3d.Switch()
Switch32.whichChoice = -1

Scene7.children.append(Switch32)
Transform33 = x3d.Transform()

Scene7.children.append(Transform33)
ColorInterpolator34 = x3d.ColorInterpolator()

Scene7.children.append(ColorInterpolator34)
CoordinateInterpolator35 = x3d.CoordinateInterpolator()

Scene7.children.append(CoordinateInterpolator35)
CoordinateInterpolator2D36 = x3d.CoordinateInterpolator2D()

Scene7.children.append(CoordinateInterpolator2D36)
EaseInEaseOut37 = x3d.EaseInEaseOut()

Scene7.children.append(EaseInEaseOut37)
NormalInterpolator38 = x3d.NormalInterpolator()

Scene7.children.append(NormalInterpolator38)
OrientationInterpolator39 = x3d.OrientationInterpolator()

Scene7.children.append(OrientationInterpolator39)
PositionInterpolator40 = x3d.PositionInterpolator()

Scene7.children.append(PositionInterpolator40)
PositionInterpolator2D41 = x3d.PositionInterpolator2D()

Scene7.children.append(PositionInterpolator2D41)
ScalarInterpolator42 = x3d.ScalarInterpolator()

Scene7.children.append(ScalarInterpolator42)
SplinePositionInterpolator43 = x3d.SplinePositionInterpolator()

Scene7.children.append(SplinePositionInterpolator43)
SplinePositionInterpolator2D44 = x3d.SplinePositionInterpolator2D()

Scene7.children.append(SplinePositionInterpolator2D44)
SplineScalarInterpolator45 = x3d.SplineScalarInterpolator()

Scene7.children.append(SplineScalarInterpolator45)
SquadOrientationInterpolator46 = x3d.SquadOrientationInterpolator()

Scene7.children.append(SquadOrientationInterpolator46)
LayerSet47 = x3d.LayerSet()

Scene7.layerSet = LayerSet47
DirectionalLight48 = x3d.DirectionalLight()

Scene7.children.append(DirectionalLight48)
EnvironmentLight49 = x3d.EnvironmentLight()
EnvironmentLight49.origin = [0,0,0]
EnvironmentLight49.rotation = [0,0,1,0]

Scene7.children.append(EnvironmentLight49)
PointLight50 = x3d.PointLight()

Scene7.children.append(PointLight50)
SpotLight51 = x3d.SpotLight()
SpotLight51.beamWidth = 0.589049

Scene7.children.append(SpotLight51)
Billboard52 = x3d.Billboard()

Scene7.children.append(Billboard52)
Collision53 = x3d.Collision()

Scene7.children.append(Collision53)
LOD54 = x3d.LOD()

Scene7.children.append(LOD54)
NavigationInfo55 = x3d.NavigationInfo()

Scene7.children.append(NavigationInfo55)
OrthoViewpoint56 = x3d.OrthoViewpoint()

Scene7.children.append(OrthoViewpoint56)
Viewpoint57 = x3d.Viewpoint()

Scene7.children.append(Viewpoint57)
ViewpointGroup58 = x3d.ViewpointGroup()

Scene7.children.append(ViewpointGroup58)
Anchor59 = x3d.Anchor()

Scene7.children.append(Anchor59)
Inline60 = x3d.Inline()

Scene7.children.append(Inline60)
LoadSensor61 = x3d.LoadSensor()

Scene7.children.append(LoadSensor61)
CylinderSensor62 = x3d.CylinderSensor()

Scene7.children.append(CylinderSensor62)
PlaneSensor63 = x3d.PlaneSensor()

Scene7.children.append(PlaneSensor63)
SphereSensor64 = x3d.SphereSensor()

Scene7.children.append(SphereSensor64)
TouchSensor65 = x3d.TouchSensor()

Scene7.children.append(TouchSensor65)
ClipPlane66 = x3d.ClipPlane()

Scene7.children.append(ClipPlane66)
Shape67 = x3d.Shape()

Scene7.children.append(Shape67)
Analyser68 = x3d.Analyser()

Scene7.children.append(Analyser68)
AudioDestination69 = x3d.AudioDestination()

Scene7.children.append(AudioDestination69)
BiquadFilter70 = x3d.BiquadFilter()
BiquadFilter70.type = "LOWPASS"

Scene7.children.append(BiquadFilter70)
BufferAudioSource71 = x3d.BufferAudioSource()

Scene7.children.append(BufferAudioSource71)
ChannelMerger72 = x3d.ChannelMerger()

Scene7.children.append(ChannelMerger72)
ChannelSelector73 = x3d.ChannelSelector()

Scene7.children.append(ChannelSelector73)
ChannelSplitter74 = x3d.ChannelSplitter()

Scene7.children.append(ChannelSplitter74)
Convolver75 = x3d.Convolver()

Scene7.children.append(Convolver75)
Delay76 = x3d.Delay()

Scene7.children.append(Delay76)
DynamicsCompressor77 = x3d.DynamicsCompressor()

Scene7.children.append(DynamicsCompressor77)
Gain78 = x3d.Gain()

Scene7.children.append(Gain78)
ListenerPointSource79 = x3d.ListenerPointSource()

Scene7.children.append(ListenerPointSource79)
MicrophoneSource80 = x3d.MicrophoneSource()

Scene7.children.append(MicrophoneSource80)
OscillatorSource81 = x3d.OscillatorSource()

Scene7.children.append(OscillatorSource81)
Sound82 = x3d.Sound()

Scene7.children.append(Sound82)
SpatialSound83 = x3d.SpatialSound()

Scene7.children.append(SpatialSound83)
StreamAudioDestination84 = x3d.StreamAudioDestination()

Scene7.children.append(StreamAudioDestination84)
StreamAudioSource85 = x3d.StreamAudioSource()

Scene7.children.append(StreamAudioSource85)
WaveShaper86 = x3d.WaveShaper()

Scene7.children.append(WaveShaper86)
TimeSensor87 = x3d.TimeSensor()

Scene7.children.append(TimeSensor87)
CADAssembly88 = x3d.CADAssembly()

Scene7.children.append(CADAssembly88)
CADFace89 = x3d.CADFace()

Scene7.children.append(CADFace89)
CADLayer90 = x3d.CADLayer()

Scene7.children.append(CADLayer90)
CADPart91 = x3d.CADPart()

Scene7.children.append(CADPart91)
DISEntityManager92 = x3d.DISEntityManager()

Scene7.children.append(DISEntityManager92)
DISEntityTypeMapping93 = x3d.DISEntityTypeMapping()

Scene7.children.append(DISEntityTypeMapping93)
EspduTransform94 = x3d.EspduTransform()

Scene7.children.append(EspduTransform94)
ReceiverPdu95 = x3d.ReceiverPdu()

Scene7.children.append(ReceiverPdu95)
SignalPdu96 = x3d.SignalPdu()

Scene7.children.append(SignalPdu96)
TransmitterPdu97 = x3d.TransmitterPdu()

Scene7.children.append(TransmitterPdu97)
BooleanFilter98 = x3d.BooleanFilter()

Scene7.children.append(BooleanFilter98)
BooleanSequencer99 = x3d.BooleanSequencer()

Scene7.children.append(BooleanSequencer99)
BooleanToggle100 = x3d.BooleanToggle()

Scene7.children.append(BooleanToggle100)
BooleanTrigger101 = x3d.BooleanTrigger()

Scene7.children.append(BooleanTrigger101)
IntegerSequencer102 = x3d.IntegerSequencer()

Scene7.children.append(IntegerSequencer102)
IntegerTrigger103 = x3d.IntegerTrigger()

Scene7.children.append(IntegerTrigger103)
TimeTrigger104 = x3d.TimeTrigger()

Scene7.children.append(TimeTrigger104)
KeySensor105 = x3d.KeySensor()
KeySensor105.enabled = False

Scene7.children.append(KeySensor105)
StringSensor106 = x3d.StringSensor()

Scene7.children.append(StringSensor106)
TextureProjector107 = x3d.TextureProjector()
TextureProjector107.ambientIntensity = 0
TextureProjector107.color = [1,1,1]
TextureProjector107.fieldOfView = 0.7854
TextureProjector107.intensity = 0.7854
TextureProjector107.upVector = [0,1,0]

Scene7.children.append(TextureProjector107)
TextureProjectorParallel108 = x3d.TextureProjectorParallel()
TextureProjectorParallel108.ambientIntensity = 0
TextureProjectorParallel108.color = [1,1,1]
TextureProjectorParallel108.intensity = 0.7854
TextureProjectorParallel108.upVector = [0,1,0]

Scene7.children.append(TextureProjectorParallel108)
HAnimHumanoid109 = x3d.HAnimHumanoid()
HAnimHumanoid109.version = "2.0"

Scene7.children.append(HAnimHumanoid109)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.ulimit = [0,0,0]
HAnimJoint110.llimit = [0,0,0]

Scene7.children.append(HAnimJoint110)
HAnimPose111 = x3d.HAnimPose()
HAnimPose111.loa = -1
HAnimPose111.transitionDuration = 0

Scene7.children.append(HAnimPose111)
HAnimSegment112 = x3d.HAnimSegment()

Scene7.children.append(HAnimSegment112)
HAnimSite113 = x3d.HAnimSite()

Scene7.children.append(HAnimSite113)
ParticleSystem114 = x3d.ParticleSystem()

Scene7.children.append(ParticleSystem114)
Script115 = x3d.Script()

Scene7.children.append(Script115)
FontLibrary116 = x3d.FontLibrary()

Scene7.children.append(FontLibrary116)
CollidableOffset117 = x3d.CollidableOffset()

Scene7.children.append(CollidableOffset117)
CollidableShape118 = x3d.CollidableShape()

Scene7.children.append(CollidableShape118)
CollisionSensor119 = x3d.CollisionSensor()

Scene7.children.append(CollisionSensor119)
CollisionSpace120 = x3d.CollisionSpace()

Scene7.children.append(CollisionSpace120)
RigidBodyCollection121 = x3d.RigidBodyCollection()

Scene7.children.append(RigidBodyCollection121)
IsoSurfaceVolumeData122 = x3d.IsoSurfaceVolumeData()

Scene7.children.append(IsoSurfaceVolumeData122)
SegmentedVolumeData123 = x3d.SegmentedVolumeData()

Scene7.children.append(SegmentedVolumeData123)
VolumeData124 = x3d.VolumeData()

Scene7.children.append(VolumeData124)
GeoLOD125 = x3d.GeoLOD()

Scene7.children.append(GeoLOD125)
GeoLocation126 = x3d.GeoLocation()

Scene7.children.append(GeoLocation126)
GeoMetadata127 = x3d.GeoMetadata()

Scene7.children.append(GeoMetadata127)
GeoPositionInterpolator128 = x3d.GeoPositionInterpolator()

Scene7.children.append(GeoPositionInterpolator128)
GeoProximitySensor129 = x3d.GeoProximitySensor()

Scene7.children.append(GeoProximitySensor129)
GeoTouchSensor130 = x3d.GeoTouchSensor()

Scene7.children.append(GeoTouchSensor130)
GeoTransform131 = x3d.GeoTransform()

Scene7.children.append(GeoTransform131)
GeoViewpoint132 = x3d.GeoViewpoint()

Scene7.children.append(GeoViewpoint132)
ContourPolyline2D133 = x3d.ContourPolyline2D()

Scene7.children.append(ContourPolyline2D133)
NurbsCurve2D134 = x3d.NurbsCurve2D()

Scene7.children.append(NurbsCurve2D134)
NurbsOrientationInterpolator135 = x3d.NurbsOrientationInterpolator()

Scene7.children.append(NurbsOrientationInterpolator135)
NurbsPositionInterpolator136 = x3d.NurbsPositionInterpolator()

Scene7.children.append(NurbsPositionInterpolator136)
NurbsSet137 = x3d.NurbsSet()

Scene7.children.append(NurbsSet137)
NurbsSurfaceInterpolator138 = x3d.NurbsSurfaceInterpolator()

Scene7.children.append(NurbsSurfaceInterpolator138)
LayoutGroup139 = x3d.LayoutGroup()

Scene7.children.append(LayoutGroup139)
ScreenGroup140 = x3d.ScreenGroup()

Scene7.children.append(ScreenGroup140)
LinePickSensor141 = x3d.LinePickSensor()

Scene7.children.append(LinePickSensor141)
PickableGroup142 = x3d.PickableGroup()

Scene7.children.append(PickableGroup142)
PointPickSensor143 = x3d.PointPickSensor()

Scene7.children.append(PointPickSensor143)
PrimitivePickSensor144 = x3d.PrimitivePickSensor()

Scene7.children.append(PrimitivePickSensor144)
VolumePickSensor145 = x3d.VolumePickSensor()

Scene7.children.append(VolumePickSensor145)

X3D0.Scene = Scene7
f = open("../data/Nodes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Nodes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Nodes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
