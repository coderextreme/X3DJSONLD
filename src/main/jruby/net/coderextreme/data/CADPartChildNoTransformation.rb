require "java"
require "../../../X3DJSAIL.4.0.full.jar"

ConfigurationProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ConfigurationProperties")
CommentsBlock = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.CommentsBlock")
AcousticProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.AcousticProperties")
Analyser = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.Analyser")
Anchor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Networking.Anchor")
Appearance = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.Appearance")
Arc2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.Arc2D")
ArcClose2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.ArcClose2D")
AudioClip = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.AudioClip")
AudioDestination = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.AudioDestination")
Background = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.Background")
BallJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.BallJoint")
Billboard = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.Billboard")
BiquadFilter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.BiquadFilter")
BlendedVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.BlendedVolumeStyle")
BooleanFilter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.BooleanFilter")
BooleanSequencer = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.BooleanSequencer")
BooleanToggle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.BooleanToggle")
BooleanTrigger = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.BooleanTrigger")
BoundaryEnhancementVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.BoundaryEnhancementVolumeStyle")
BoundedPhysicsModel = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.BoundedPhysicsModel")
Box = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.Box")
BufferAudioSource = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.BufferAudioSource")
CADAssembly = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CADGeometry.CADAssembly")
CADFace = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CADGeometry.CADFace")
CADLayer = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CADGeometry.CADLayer")
CADPart = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CADGeometry.CADPart")
CartoonVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.CartoonVolumeStyle")
ChannelMerger = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.ChannelMerger")
ChannelSelector = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.ChannelSelector")
ChannelSplitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.ChannelSplitter")
Circle2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.Circle2D")
ClipPlane = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.ClipPlane")
CollidableOffset = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.CollidableOffset")
CollidableShape = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.CollidableShape")
Collision = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.Collision")
CollisionCollection = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.CollisionCollection")
CollisionSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSensor")
CollisionSpace = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSpace")
Color = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.Color")
ColorChaser = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.ColorChaser")
ColorDamper = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.ColorDamper")
ColorInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.ColorInterpolator")
ColorRGBA = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.ColorRGBA")
ComposedCubeMapTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CubeMapTexturing.ComposedCubeMapTexture")
ComposedShader = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.ComposedShader")
ComposedTexture3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.ComposedTexture3D")
ComposedVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.ComposedVolumeStyle")
Cone = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.Cone")
ConeEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.ConeEmitter")
Contact = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.Contact")
Contour2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.Contour2D")
ContourPolyline2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.ContourPolyline2D")
Convolver = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.Convolver")
Coordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.Coordinate")
CoordinateChaser = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.CoordinateChaser")
CoordinateDamper = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.CoordinateDamper")
CoordinateDouble = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.CoordinateDouble")
CoordinateInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.CoordinateInterpolator")
CoordinateInterpolator2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.CoordinateInterpolator2D")
Cylinder = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.Cylinder")
CylinderSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.PointingDeviceSensor.CylinderSensor")
Delay = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.Delay")
DirectionalLight = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Lighting.DirectionalLight")
DISEntityManager = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.DISEntityManager")
DISEntityTypeMapping = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.DISEntityTypeMapping")
Disk2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.Disk2D")
DoubleAxisHingeJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.DoubleAxisHingeJoint")
DynamicsCompressor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.DynamicsCompressor")
EaseInEaseOut = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.EaseInEaseOut")
EdgeEnhancementVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.EdgeEnhancementVolumeStyle")
ElevationGrid = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.ElevationGrid")
EspduTransform = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.EspduTransform")
ExplosionEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.ExplosionEmitter")
Extrusion = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.Extrusion")
FillProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.FillProperties")
FloatVertexAttribute = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.FloatVertexAttribute")
Fog = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.Fog")
FogCoordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.FogCoordinate")
FontStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Text.FontStyle")
ForcePhysicsModel = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.ForcePhysicsModel")
Gain = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.Gain")
GeneratedCubeMapTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CubeMapTexturing.GeneratedCubeMapTexture")
GeoCoordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoCoordinate")
GeoElevationGrid = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoElevationGrid")
GeoLocation = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoLocation")
GeoLOD = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoLOD")
GeoMetadata = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoMetadata")
GeoOrigin = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoOrigin")
GeoPositionInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoPositionInterpolator")
GeoProximitySensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoProximitySensor")
GeoTouchSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoTouchSensor")
GeoTransform = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoTransform")
GeoViewpoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geospatial.GeoViewpoint")
Group = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Grouping.Group")
HAnimDisplacer = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimDisplacer")
HAnimHumanoid = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimHumanoid")
HAnimJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimJoint")
HAnimMotion = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimMotion")
HAnimSegment = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimSegment")
HAnimSite = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimSite")
ImageCubeMapTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CubeMapTexturing.ImageCubeMapTexture")
ImageTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.ImageTexture")
ImageTexture3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.ImageTexture3D")
IndexedFaceSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.IndexedFaceSet")
IndexedLineSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.IndexedLineSet")
IndexedQuadSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CADGeometry.IndexedQuadSet")
IndexedTriangleFanSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.IndexedTriangleFanSet")
IndexedTriangleSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.IndexedTriangleSet")
IndexedTriangleStripSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.IndexedTriangleStripSet")
Inline = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Networking.Inline")
IntegerSequencer = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.IntegerSequencer")
IntegerTrigger = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.IntegerTrigger")
IsoSurfaceVolumeData = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.IsoSurfaceVolumeData")
KeySensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.KeyDeviceSensor.KeySensor")
Layer = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layering.Layer")
LayerSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layering.LayerSet")
Layout = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layout.Layout")
LayoutGroup = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layout.LayoutGroup")
LayoutLayer = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layout.LayoutLayer")
LinePickSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Picking.LinePickSensor")
LineProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.LineProperties")
LineSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.LineSet")
ListenerPointSource = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.ListenerPointSource")
LoadSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Networking.LoadSensor")
LocalFog = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.LocalFog")
LOD = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.LOD")
Material = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.Material")
Matrix3VertexAttribute = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.Matrix3VertexAttribute")
Matrix4VertexAttribute = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.Matrix4VertexAttribute")
MetadataBoolean = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.MetadataBoolean")
MetadataDouble = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.MetadataDouble")
MetadataFloat = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.MetadataFloat")
MetadataInteger = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.MetadataInteger")
MetadataSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.MetadataSet")
MetadataString = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.MetadataString")
MicrophoneSource = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.MicrophoneSource")
MotorJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.MotorJoint")
MovieTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.MovieTexture")
MultiTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.MultiTexture")
MultiTextureCoordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.MultiTextureCoordinate")
MultiTextureTransform = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.MultiTextureTransform")
NavigationInfo = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.NavigationInfo")
Normal = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.Normal")
NormalInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.NormalInterpolator")
NurbsCurve = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsCurve")
NurbsCurve2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsCurve2D")
NurbsOrientationInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsOrientationInterpolator")
NurbsPatchSurface = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsPatchSurface")
NurbsPositionInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsPositionInterpolator")
NurbsSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsSet")
NurbsSurfaceInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsSurfaceInterpolator")
NurbsSweptSurface = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsSweptSurface")
NurbsSwungSurface = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsSwungSurface")
NurbsTextureCoordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinate")
NurbsTrimmedSurface = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.NURBS.NurbsTrimmedSurface")
OpacityMapVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.OpacityMapVolumeStyle")
OrientationChaser = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.OrientationChaser")
OrientationDamper = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.OrientationDamper")
OrientationInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.OrientationInterpolator")
OrthoViewpoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.OrthoViewpoint")
OscillatorSource = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.OscillatorSource")
PackagedShader = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.PackagedShader")
ParticleSystem = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.ParticleSystem")
PeriodicWave = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.PeriodicWave")
PhysicalMaterial = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.PhysicalMaterial")
PickableGroup = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Picking.PickableGroup")
PixelTexture = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.PixelTexture")
PixelTexture3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.PixelTexture3D")
PlaneSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.PointingDeviceSensor.PlaneSensor")
PointEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.PointEmitter")
PointLight = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Lighting.PointLight")
PointPickSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Picking.PointPickSensor")
PointProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.PointProperties")
PointSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.PointSet")
Polyline2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.Polyline2D")
PolylineEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.PolylineEmitter")
Polypoint2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.Polypoint2D")
PositionChaser = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.PositionChaser")
PositionChaser2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.PositionChaser2D")
PositionDamper = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.PositionDamper")
PositionDamper2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.PositionDamper2D")
PositionInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.PositionInterpolator")
PositionInterpolator2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.PositionInterpolator2D")
PrimitivePickSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Picking.PrimitivePickSensor")
ProgramShader = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.ProgramShader")
ProjectionVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.ProjectionVolumeStyle")
ProtoInstance = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.ProtoInstance")
ProximitySensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalSensor.ProximitySensor")
QuadSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.CADGeometry.QuadSet")
ReceiverPdu = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.ReceiverPdu")
Rectangle2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.Rectangle2D")
RigidBody = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.RigidBody")
RigidBodyCollection = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyCollection")
ScalarChaser = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.ScalarChaser")
ScalarDamper = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.ScalarDamper")
ScalarInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.ScalarInterpolator")
ScreenFontStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layout.ScreenFontStyle")
ScreenGroup = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layout.ScreenGroup")
Script = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Scripting.Script")
SegmentedVolumeData = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.SegmentedVolumeData")
ShadedVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.ShadedVolumeStyle")
ShaderPart = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.ShaderPart")
ShaderProgram = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.ShaderProgram")
Shape = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.Shape")
SignalPdu = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.SignalPdu")
SilhouetteEnhancementVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.SilhouetteEnhancementVolumeStyle")
SingleAxisHingeJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.SingleAxisHingeJoint")
SliderJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.SliderJoint")
Sound = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.Sound")
SpatialSound = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.SpatialSound")
Sphere = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.Sphere")
SphereSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.PointingDeviceSensor.SphereSensor")
SplinePositionInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator")
SplinePositionInterpolator2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator2D")
SplineScalarInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.SplineScalarInterpolator")
SpotLight = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Lighting.SpotLight")
SquadOrientationInterpolator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Interpolation.SquadOrientationInterpolator")
StaticGroup = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Grouping.StaticGroup")
StreamAudioDestination = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.StreamAudioDestination")
StreamAudioSource = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.StreamAudioSource")
StringSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.KeyDeviceSensor.StringSensor")
SurfaceEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.SurfaceEmitter")
Switch = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Grouping.Switch")
TexCoordChaser2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.TexCoordChaser2D")
TexCoordDamper2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Followers.TexCoordDamper2D")
Text = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Text.Text")
TextureBackground = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.TextureBackground")
TextureCoordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.TextureCoordinate")
TextureCoordinate3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.TextureCoordinate3D")
TextureCoordinate4D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.TextureCoordinate4D")
TextureCoordinateGenerator = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.TextureCoordinateGenerator")
TextureProjector = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.TextureProjection.TextureProjector")
TextureProjectorParallel = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.TextureProjection.TextureProjectorParallel")
TextureProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.TextureProperties")
TextureTransform = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing.TextureTransform")
TextureTransform3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.TextureTransform3D")
TextureTransformMatrix3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Texturing3D.TextureTransformMatrix3D")
TimeSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Time.TimeSensor")
TimeTrigger = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EventUtilities.TimeTrigger")
ToneMappedVolumeStyle = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.ToneMappedVolumeStyle")
TouchSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.PointingDeviceSensor.TouchSensor")
Transform = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Grouping.Transform")
TransformSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalSensor.TransformSensor")
TransmitterPdu = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.TransmitterPdu")
TriangleFanSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.TriangleFanSet")
TriangleSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.TriangleSet")
TriangleSet2D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry2D.TriangleSet2D")
TriangleStripSet = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.TriangleStripSet")
TwoSidedMaterial = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.TwoSidedMaterial")
UniversalJoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.RigidBodyPhysics.UniversalJoint")
UnlitMaterial = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.UnlitMaterial")
Viewpoint = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.Viewpoint")
ViewpointGroup = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Navigation.ViewpointGroup")
Viewport = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Layering.Viewport")
VisibilitySensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalSensor.VisibilitySensor")
VolumeData = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.VolumeRendering.VolumeData")
VolumeEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.VolumeEmitter")
VolumePickSensor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Picking.VolumePickSensor")
WaveShaper = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Sound.WaveShaper")
WindPhysicsModel = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.WindPhysicsModel")
WorldInfo = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.WorldInfo")
Component = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.component")
Connect = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.connect")
EXPORT = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Networking.EXPORT")
ExternProtoDeclare = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.ExternProtoDeclare")
Field = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.field")
FieldValue = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.fieldValue")
Head = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.head")
IMPORT = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Networking.IMPORT")
IS = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.IS")
Meta = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.meta")
ProtoBody = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.ProtoBody")
ProtoDeclare = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.ProtoDeclare")
ProtoInterface = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.ProtoInterface")
ROUTE = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.ROUTE")
Scene = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.Scene")
Unit = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.unit")
X3D = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Core.X3D")
SFBool = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFBool")
MFBool = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFBool")
SFColor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFColor")
MFColor = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFColor")
SFColorRGBA = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFColorRGBA")
MFColorRGBA = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFColorRGBA")
SFDouble = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFDouble")
MFDouble = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFDouble")
SFFloat = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFFloat")
MFFloat = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFFloat")
SFImage = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFImage")
MFImage = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFImage")
SFInt32 = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFInt32")
MFInt32 = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFInt32")
SFMatrix3d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFMatrix3d")
MFMatrix3d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFMatrix3d")
SFMatrix3f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFMatrix3f")
MFMatrix3f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFMatrix3f")
SFMatrix4d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFMatrix4d")
MFMatrix4d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFMatrix4d")
SFMatrix4f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFMatrix4f")
MFMatrix4f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFMatrix4f")
SFString = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFString")
SFNode = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFNode")
MFNode = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFNode")
SFRotation = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFRotation")
MFRotation = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFRotation")
MFString = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFString")
SFTime = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFTime")
MFTime = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFTime")
SFVec2d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFVec2d")
MFVec2d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFVec2d")
SFVec2f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFVec2f")
MFVec2f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFVec2f")
SFVec3d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFVec3d")
MFVec3d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFVec3d")
SFVec3f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFVec3f")
MFVec3f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFVec3f")
SFVec4d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFVec4d")
MFVec4d = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFVec4d")
SFVec4f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.SFVec4f")
MFVec4f = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.fields.MFVec4f")
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
ConfigurationProperties.setXsltEngine(Java::OrgWeb3dX3dJsail::ConfigurationProperties::XSLT_ENGINE_NATIVE_JAVA);
x3D0 = X3D.new
    .setProfile("CADInterchange")
    .setVersion("4.0")
    .setHead(Head.new()
        .addComponent(Component.new()
            .setName("CADGeometry")
            .setLevel(2)
        )
        .addComponent(Component.new()
            .setName("EnvironmentalEffects")
            .setLevel(1)
        )
        .addMeta(Meta.new()
            .setName("title")
            .setContent("CADPartChildNoTransformation.x3d")
        )
        .addMeta(Meta.new()
            .setName("description")
            .setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.")
        )
        .addMeta(Meta.new()
            .setName("creator")
            .setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk")
        )
        .addMeta(Meta.new()
            .setName("translator")
            .setContent("Vince Marchetti bushing generation using python scripts")
        )
        .addMeta(Meta.new()
            .setName("reference")
            .setContent("https://www.web3d.org/member-only/mantis/view.php?id=528")
        )
        .addMeta(Meta.new()
            .setName("warning")
            .setContent("This scene is intended for specification development only.")
        )
        .addMeta(Meta.new()
            .setName("created")
            .setContent("29 June 2012")
        )
        .addMeta(Meta.new()
            .setName("modified")
            .setContent("20 October 2019")
        )
        .addMeta(Meta.new()
            .setName("identifier")
            .setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d")
        )
        .addMeta(Meta.new()
            .setName("generator")
            .setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")
        )
        .addMeta(Meta.new()
            .setName("license")
            .setContent("../license.html")
        )
    )
    .setScene(Scene.new()
        .addChild(WorldInfo.new()
            .setTitle("CADPartChildNoTransformation.x3d")
        )
        .addChild(Background.new()
            .setSkyColor([0.9607843, 1, 0.9607843].to_java Java::float)
        )
        .addChild(Viewpoint.new()
            .setDescription("Hello CAD bushing")
            .setOrientation([1, 0, 0, -0.321751].to_java Java::float)
            .setPosition([0, 5, 15].to_java Java::float)
        )
        .addChild(CADAssembly.new()
            .setName("DesignPatternAssembly")
            .addChild(CADPart.new()
                .setName("CADPartExample")
            .addComments(CommentsBlock.new("the rotation and translation attributes serve to position the bushing within the assembly"))
                .addChild(CADFace.new()
                    .setName("outerSurface")
                    .setShape(Shape.new()
                .addComments(CommentsBlock.new("note solid='true' and so one-sided external rendering only"))
                        .setGeometry(Cylinder.new()
                            .setBottom(false)
                            .setHeight(3.0)
                            .setRadius(2.0)
                            .setTop(false)
                        )
                        .setAppearance(Appearance.new()
                            .setDEF("AppearanceGrey")
                            .setMaterial(Material.new()
                            )
                        )
                    )
                )
                .addChild(CADFace.new()
                    .setName("innerSurface")
                    .setShape(Shape.new()
                .addComments(CommentsBlock.new("note solid='false' and so two-sided internal + external rendering"))
                        .setGeometry(Cylinder.new()
                            .setBottom(false)
                            .setHeight(3.0)
                            .setSolid(false)
                            .setTop(false)
                        )
                        .setAppearance(Appearance.new()
                            .setUSE("AppearanceGrey")
                        )
                    )
                )
                .addChild(CADFace.new()
                    .setName("topCap")
                    .setShape(Shape.new()
                        .setGeometry(IndexedTriangleSet.new()
                            .setIndex([0, 1, 2, 2, 1, 3, 2, 3, 4, 4, 3, 5, 4, 5, 6, 6, 5, 7, 6, 7, 8, 8, 7, 9, 8, 9, 10, 10, 9, 11, 10, 11, 12, 12, 11, 13, 12, 13, 14, 14, 13, 15, 14, 15, 16, 16, 15, 17, 16, 17, 18, 18, 17, 19, 18, 19, 20, 20, 19, 21, 20, 21, 22, 22, 21, 23, 22, 23, 24, 24, 23, 25, 24, 25, 26, 26, 25, 27, 26, 27, 28, 28, 27, 29, 28, 29, 30, 30, 29, 31, 30, 31, 32, 32, 31, 33, 32, 33, 34, 34, 33, 35, 34, 35, 36, 36, 35, 37, 36, 37, 38, 38, 37, 39, 38, 39, 40, 40, 39, 41, 40, 41, 42, 42, 41, 43, 42, 43, 44, 44, 43, 45, 44, 45, 46, 46, 45, 47, 46, 47, 48, 48, 47, 49, 48, 49, 50, 50, 49, 51, 50, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 56, 55, 57, 56, 57, 58, 58, 57, 59, 58, 59, 60, 60, 59, 61, 60, 61, 62, 62, 61, 63, 62, 63, 64, 64, 63, 65].to_java Java::int)
                            .setCoord(Coordinate.new()
                                .setPoint([2, 1.5, 0, 1, 1.5, 0, 1.9616, 1.5, 0.3902, 0.9808, 1.5, 0.1951, 1.8478, 1.5, 0.7654, 0.9239, 1.5, 0.3827, 1.6629, 1.5, 1.1111, 0.8315, 1.5, 0.5556, 1.4142, 1.5, 1.4142, 0.7071, 1.5, 0.7071, 1.1111, 1.5, 1.6629, 0.5556, 1.5, 0.8315, 0.7654, 1.5, 1.8478, 0.3827, 1.5, 0.9239, 0.3902, 1.5, 1.9616, 0.1951, 1.5, 0.9808, 0, 1.5, 2, 0, 1.5, 1, -0.3902, 1.5, 1.9616, -0.1951, 1.5, 0.9808, -0.7654, 1.5, 1.8478, -0.3827, 1.5, 0.9239, -1.1111, 1.5, 1.6629, -0.5556, 1.5, 0.8315, -1.4142, 1.5, 1.4142, -0.7071, 1.5, 0.7071, -1.6629, 1.5, 1.1111, -0.8315, 1.5, 0.5556, -1.8478, 1.5, 0.7654, -0.9239, 1.5, 0.3827, -1.9616, 1.5, 0.3902, -0.9808, 1.5, 0.1951, -2, 1.5, 0, -1, 1.5, 0, -1.9616, 1.5, -0.3902, -0.9808, 1.5, -0.1951, -1.8478, 1.5, -0.7654, -0.9239, 1.5, -0.3827, -1.6629, 1.5, -1.1111, -0.8315, 1.5, -0.5556, -1.4142, 1.5, -1.4142, -0.7071, 1.5, -0.7071, -1.1111, 1.5, -1.6629, -0.5556, 1.5, -0.8315, -0.7654, 1.5, -1.8478, -0.3827, 1.5, -0.9239, -0.3902, 1.5, -1.9616, -0.1951, 1.5, -0.9808, 0, 1.5, -2, 0, 1.5, -1, 0.3902, 1.5, -1.9616, 0.1951, 1.5, -0.9808, 0.7654, 1.5, -1.8478, 0.3827, 1.5, -0.9239, 1.1111, 1.5, -1.6629, 0.5556, 1.5, -0.8315, 1.4142, 1.5, -1.4142, 0.7071, 1.5, -0.7071, 1.6629, 1.5, -1.1111, 0.8315, 1.5, -0.5556, 1.8478, 1.5, -0.7654, 0.9239, 1.5, -0.3827, 1.9616, 1.5, -0.3902, 0.9808, 1.5, -0.1951, 2, 1.5, 0, 1, 1.5, 0].to_java Java::float)
                            )
                        )
                        .setAppearance(Appearance.new()
                            .setUSE("AppearanceGrey")
                        )
                    )
                )
                .addChild(CADFace.new()
                    .setName("bottomCap")
                    .setShape(Shape.new()
                        .setGeometry(IndexedTriangleSet.new()
                            .setIndex([0, 1, 2, 2, 1, 3, 2, 3, 4, 4, 3, 5, 4, 5, 6, 6, 5, 7, 6, 7, 8, 8, 7, 9, 8, 9, 10, 10, 9, 11, 10, 11, 12, 12, 11, 13, 12, 13, 14, 14, 13, 15, 14, 15, 16, 16, 15, 17, 16, 17, 18, 18, 17, 19, 18, 19, 20, 20, 19, 21, 20, 21, 22, 22, 21, 23, 22, 23, 24, 24, 23, 25, 24, 25, 26, 26, 25, 27, 26, 27, 28, 28, 27, 29, 28, 29, 30, 30, 29, 31, 30, 31, 32, 32, 31, 33, 32, 33, 34, 34, 33, 35, 34, 35, 36, 36, 35, 37, 36, 37, 38, 38, 37, 39, 38, 39, 40, 40, 39, 41, 40, 41, 42, 42, 41, 43, 42, 43, 44, 44, 43, 45, 44, 45, 46, 46, 45, 47, 46, 47, 48, 48, 47, 49, 48, 49, 50, 50, 49, 51, 50, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 56, 55, 57, 56, 57, 58, 58, 57, 59, 58, 59, 60, 60, 59, 61, 60, 61, 62, 62, 61, 63, 62, 63, 64, 64, 63, 65].to_java Java::int)
                            .setCoord(Coordinate.new()
                                .setPoint([2, -1.5, 0, 1, -1.5, 0, 1.9616, -1.5, -0.3902, 0.9808, -1.5, -0.1951, 1.8478, -1.5, -0.7654, 0.9239, -1.5, -0.3827, 1.6629, -1.5, -1.1111, 0.8315, -1.5, -0.5556, 1.4142, -1.5, -1.4142, 0.7071, -1.5, -0.7071, 1.1111, -1.5, -1.6629, 0.5556, -1.5, -0.8315, 0.7654, -1.5, -1.8478, 0.3827, -1.5, -0.9239, 0.3902, -1.5, -1.9616, 0.1951, -1.5, -0.9808, 0, -1.5, -2, 0, -1.5, -1, -0.3902, -1.5, -1.9616, -0.1951, -1.5, -0.9808, -0.7654, -1.5, -1.8478, -0.3827, -1.5, -0.9239, -1.1111, -1.5, -1.6629, -0.5556, -1.5, -0.8315, -1.4142, -1.5, -1.4142, -0.7071, -1.5, -0.7071, -1.6629, -1.5, -1.1111, -0.8315, -1.5, -0.5556, -1.8478, -1.5, -0.7654, -0.9239, -1.5, -0.3827, -1.9616, -1.5, -0.3902, -0.9808, -1.5, -0.1951, -2, -1.5, 0, -1, -1.5, 0, -1.9616, -1.5, 0.3902, -0.9808, -1.5, 0.1951, -1.8478, -1.5, 0.7654, -0.9239, -1.5, 0.3827, -1.6629, -1.5, 1.1111, -0.8315, -1.5, 0.5556, -1.4142, -1.5, 1.4142, -0.7071, -1.5, 0.7071, -1.1111, -1.5, 1.6629, -0.5556, -1.5, 0.8315, -0.7654, -1.5, 1.8478, -0.3827, -1.5, 0.9239, -0.3902, -1.5, 1.9616, -0.1951, -1.5, 0.9808, 0, -1.5, 2, 0, -1.5, 1, 0.3902, -1.5, 1.9616, 0.1951, -1.5, 0.9808, 0.7654, -1.5, 1.8478, 0.3827, -1.5, 0.9239, 1.1111, -1.5, 1.6629, 0.5556, -1.5, 0.8315, 1.4142, -1.5, 1.4142, 0.7071, -1.5, 0.7071, 1.6629, -1.5, 1.1111, 0.8315, -1.5, 0.5556, 1.8478, -1.5, 0.7654, 0.9239, -1.5, 0.3827, 1.9616, -1.5, 0.3902, 0.9808, -1.5, 0.1951, 2, -1.5, 0, 1, -1.5, 0].to_java Java::float)
                            )
                        )
                        .setAppearance(Appearance.new()
                            .setUSE("AppearanceGrey")
                        )
                    )
                )
            )
        )
    )
x3D0.toFileX3D "../data/CADPartChildNoTransformation.new.jruby.x3d"
x3D0.toFileJSON "../data/CADPartChildNoTransformation.new.jruby.json"
