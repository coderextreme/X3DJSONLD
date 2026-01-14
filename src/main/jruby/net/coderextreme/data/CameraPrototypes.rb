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
EnvironmentLight = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Lighting.EnvironmentLight")
EspduTransform = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.DIS.EspduTransform")
ExplosionEmitter = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.ParticleSystems.ExplosionEmitter")
Extrusion = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Geometry3D.Extrusion")
FillProperties = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shape.FillProperties")
FloatVertexAttribute = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Shaders.FloatVertexAttribute")
Fog = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.Fog")
FogCoordinate = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.EnvironmentalEffects.FogCoordinate")
FontLibrary = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Text.FontLibrary")
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
HAnimPose = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.HAnim.HAnimPose")
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
Tangent = JavaUtilities.get_proxy_class("org.web3d.x3d.jsail.Rendering.Tangent")
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
    .setProfile("Immersive")
    .setVersion("4.0")
    .setHead(Head.new()
        .addMeta(Meta.new()
            .setName("title")
            .setContent("CameraPrototypes.x3d")
        )
        .addMeta(Meta.new()
            .setName("description")
            .setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")
        )
        .addMeta(Meta.new()
            .setName("creator")
            .setContent("Don Brutzman and Jeff Weekley")
        )
        .addMeta(Meta.new()
            .setName("created")
            .setContent("16 March 2009")
        )
        .addMeta(Meta.new()
            .setName("modified")
            .setContent("25 October 2016")
        )
        .addMeta(Meta.new()
            .setName("TODO")
            .setContent("Schematron rules, backed up by initialize() checks")
        )
        .addMeta(Meta.new()
            .setName("reference")
            .setContent("BeyondViewpointCameraNodesWeb3D2009.pdf")
        )
        .addMeta(Meta.new()
            .setName("reference")
            .setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")
        )
        .addMeta(Meta.new()
            .setName("subject")
            .setContent("Camera nodes for Viewpoint navigation control")
        )
        .addMeta(Meta.new()
            .setName("reference")
            .setContent("CameraExamples.x3d")
        )
        .addMeta(Meta.new()
            .setName("identifier")
            .setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")
        )
        .addMeta(Meta.new()
            .setName("reference")
            .setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")
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
        .addComments(CommentsBlock.new("=============== Camera =============="))
        .addChild(ProtoDeclare.new()
            .setName("Camera")
            .setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
            .setProtoInterface(ProtoInterface.new()
            .addComments(CommentsBlock.new("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields"))
                .addField(Field.new()
                    .setName("description")
                    .setAccessType("inputOutput")
                    .setAppinfo("Text description to be displayed for this Camera")
                    .setType("SFString")
                )
                .addField(Field.new()
                    .setName("position")
                    .setAccessType("inputOutput")
                    .setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
                    .setType("SFVec3f")
                    .setValue("0 0 10")
                )
                .addField(Field.new()
                    .setName("orientation")
                    .setAccessType("inputOutput")
                    .setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
                    .setType("SFRotation")
                    .setValue("0 0 1 0")
                )
                .addField(Field.new()
                    .setName("fieldOfView")
                    .setAccessType("inputOutput")
                    .setAppinfo("pi/4")
                    .setType("SFFloat")
                    .setValue("0.7854")
                )
                .addField(Field.new()
                    .setName("set_fraction")
                    .setAccessType("inputOnly")
                    .setAppinfo("input fraction drives interpolators")
                    .setType("SFFloat")
                )
                .addField(Field.new()
                    .setName("set_bind")
                    .setAccessType("inputOnly")
                    .setAppinfo("input event binds or unbinds this Camera")
                    .setType("SFBool")
                )
                .addField(Field.new()
                    .setName("bindTime")
                    .setAccessType("outputOnly")
                    .setAppinfo("output event indicates when this Camera is bound")
                    .setType("SFTime")
                )
                .addField(Field.new()
                    .setName("isBound")
                    .setAccessType("outputOnly")
                    .setAppinfo("output event indicates whether this Camera is bound or unbound")
                    .setType("SFBool")
                )
                .addField(Field.new()
                    .setName("nearClipPlane")
                    .setAccessType("inputOutput")
                    .setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]")
                    .setType("SFFloat")
                    .setValue("0.25")
                )
                .addField(Field.new()
                    .setName("farClipPlane")
                    .setAccessType("inputOutput")
                    .setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit")
                    .setType("SFFloat")
                    .setValue("0")
                )
                .addField(Field.new()
                    .setName("shots")
                    .setAccessType("inputOutput")
                    .setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
                    .setType("MFNode")
              .addComments(CommentsBlock.new("initialization nodes (if any) go here"))
                )
                .addField(Field.new()
                    .setName("headlight")
                    .setAccessType("inputOutput")
                    .setAppinfo("Whether camera headlight is on or off")
                    .setType("SFBool")
                    .setValue("true")
                )
                .addField(Field.new()
                    .setName("headlightColor")
                    .setAccessType("inputOutput")
                    .setAppinfo("Camera headlight color")
                    .setType("SFColor")
                    .setValue("1 1 1")
                )
                .addField(Field.new()
                    .setName("headlightIntensity")
                    .setAccessType("inputOutput")
                    .setAppinfo("Camera headlight intensity")
                    .setType("SFFloat")
                    .setValue("1")
                )
                .addField(Field.new()
                    .setName("filterColor")
                    .setAccessType("inputOutput")
                    .setAppinfo("Camera filter color that modifies virtual lens capture")
                    .setType("SFColor")
                    .setValue("1 1 1")
                )
                .addField(Field.new()
                    .setName("filterTransparency")
                    .setAccessType("inputOutput")
                    .setAppinfo("Camera filter transparency that modifies virtual lens capture")
                    .setType("SFFloat")
                    .setValue("1")
                )
                .addField(Field.new()
                    .setName("upVector")
                    .setAccessType("inputOutput")
                    .setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")
                    .setType("SFVec3f")
                    .setValue("0 1 0")
                )
                .addField(Field.new()
                    .setName("fStop")
                    .setAccessType("inputOutput")
                    .setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
                    .setType("SFFloat")
                    .setValue("5.6")
                )
                .addField(Field.new()
                    .setName("focusDistance")
                    .setAccessType("inputOutput")
                    .setAppinfo("Distance to focal plane of sharpest focus")
                    .setType("SFFloat")
                    .setValue("10")
                )
                .addField(Field.new()
                    .setName("isActive")
                    .setAccessType("outputOnly")
                    .setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
                    .setType("SFBool")
                )
                .addField(Field.new()
                    .setName("totalDuration")
                    .setAccessType("outputOnly")
                    .setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
                    .setType("SFTime")
                )
                .addField(Field.new()
                    .setName("offlineRender")
                    .setAccessType("inputOutput")
                    .setAppinfo("OfflineRender node")
                    .setType("SFNode")
              .addComments(CommentsBlock.new("initialization node (if any) goes here"))
                )
                .addField(Field.new()
                    .setName("traceEnabled")
                    .setAccessType("initializeOnly")
                    .setAppinfo("enable console output to trace script computations and prototype progress")
                    .setType("SFBool")
                    .setValue("false")
                )
            )
            .setProtoBody(ProtoBody.new()
                .addChild(Viewpoint.new()
                    .setDEF("CameraViewpoint")
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("description")
                            .setProtoField("description")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("position")
                            .setProtoField("position")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("orientation")
                            .setProtoField("orientation")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("fieldOfView")
                            .setProtoField("fieldOfView")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("set_bind")
                            .setProtoField("set_bind")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("bindTime")
                            .setProtoField("bindTime")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("isBound")
                            .setProtoField("isBound")
                        )
                    )
                )
            .addComments(CommentsBlock.new("NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation"))
                .addChild(NavigationInfo.new()
                    .setDEF("CameraNavInfo")
                    .setType(["EXAMINE", "FLY", "ANY"].to_java Java::java.lang.String)
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("set_bind")
                            .setProtoField("set_bind")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("headlight")
                            .setProtoField("headlight")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("visibilityLimit")
                            .setProtoField("farClipPlane")
                        )
                .addComments(CommentsBlock.new("No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing."))
                    )
                )
            .addComments(CommentsBlock.new("this DirectionalLight replaces NavigationInfo headlight in order to add color capability"))
                .addChild(DirectionalLight.new()
                    .setDEF("CameraDirectionalLight")
                    .setGlobal(true)
              .addComments(CommentsBlock.new("TODO confirm other default field values match NavigationInfo spec"))
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("on")
                            .setProtoField("headlight")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("color")
                            .setProtoField("headlightColor")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("intensity")
                            .setProtoField("headlightIntensity")
                        )
                    )
                )
                .addChild(PositionInterpolator.new()
                    .setDEF("CameraPositionInterpolator")
                    .setKey([0, 1].to_java Java::float)
                    .setKeyValue([0, 0, 0, 0, 0, 0].to_java Java::float)
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("set_fraction")
                            .setProtoField("set_fraction")
                        )
                    )
                )
                .addChild(OrientationInterpolator.new()
                    .setDEF("CameraOrientationInterpolator")
                    .setKey([0, 1].to_java Java::float)
                    .setKeyValue([0, 1, 0, 0, 0, 1, 0, 0].to_java Java::float)
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("set_fraction")
                            .setProtoField("set_fraction")
                        )
                    )
                )
                .addChild(ROUTE.new()
                    .setFromField("value_changed")
                    .setFromNode("CameraPositionInterpolator")
                    .setToField("position")
                    .setToNode("CameraViewpoint")
                )
                .addChild(ROUTE.new()
                    .setFromField("value_changed")
                    .setFromNode("CameraOrientationInterpolator")
                    .setToField("orientation")
                    .setToNode("CameraViewpoint")
                )
                .addChild(Script.new()
                    .setDEF("CameraScript")
                    .setDirectOutput(true)
                    .setMustEvaluate(true)
              .addComments(CommentsBlock.new("binding is controlled externally, all camera operations proceed the same regardless of whether bound or not"))
                    .addField(Field.new()
                        .setName("description")
                        .setAccessType("inputOutput")
                        .setAppinfo("Text description to be displayed for this Camera")
                        .setType("SFString")
                    )
                    .addField(Field.new()
                        .setName("position")
                        .setAccessType("inputOutput")
                        .setAppinfo("Camera position in local transformation frame")
                        .setType("SFVec3f")
                    )
                    .addField(Field.new()
                        .setName("orientation")
                        .setAccessType("inputOutput")
                        .setAppinfo("Camera rotation in local transformation frame")
                        .setType("SFRotation")
                    )
                    .addField(Field.new()
                        .setName("set_fraction")
                        .setAccessType("inputOnly")
                        .setAppinfo("input fraction drives interpolators")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("set_bind")
                        .setAccessType("inputOnly")
                        .setAppinfo("input event binds or unbinds this Camera")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("fieldOfView")
                        .setAccessType("inputOutput")
                        .setAppinfo("pi/4")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("nearClipPlane")
                        .setAccessType("inputOutput")
                        .setAppinfo("Vector distance to near clipping plane")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("farClipPlane")
                        .setAccessType("inputOutput")
                        .setAppinfo("Vector distance to far clipping plane")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("shots")
                        .setAccessType("inputOutput")
                        .setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes")
                        .setType("MFNode")
                .addComments(CommentsBlock.new("initialization nodes (if any) go here"))
                    )
                    .addField(Field.new()
                        .setName("filterColor")
                        .setAccessType("inputOutput")
                        .setAppinfo("Camera filter color that modifies virtual lens capture")
                        .setType("SFColor")
                    )
                    .addField(Field.new()
                        .setName("filterTransparency")
                        .setAccessType("inputOutput")
                        .setAppinfo("Camera filter transparency that modifies virtual lens capture")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("upVector")
                        .setAccessType("inputOutput")
                        .setAppinfo("upVector changes modify camera orientation (and possibly vice versa)")
                        .setType("SFVec3f")
                    )
                    .addField(Field.new()
                        .setName("fStop")
                        .setAccessType("inputOutput")
                        .setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("focusDistance")
                        .setAccessType("inputOutput")
                        .setAppinfo("Distance to focal plane of sharpest focus")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("isActive")
                        .setAccessType("outputOnly")
                        .setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("totalDuration")
                        .setAccessType("outputOnly")
                        .setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
                        .setType("SFTime")
                    )
                    .addField(Field.new()
                        .setName("offlineRender")
                        .setAccessType("inputOutput")
                        .setAppinfo("OfflineRender node")
                        .setType("SFNode")
                .addComments(CommentsBlock.new("initialization node (if any) goes here"))
                    )
                    .addField(Field.new()
                        .setName("ViewpointNode")
                        .setAccessType("initializeOnly")
                        .setAppinfo("node reference to permit getting setting fields from within Script")
                        .setType("SFNode")
                        .addChild(Viewpoint.new()
                            .setUSE("CameraViewpoint")
                        )
                    )
                    .addField(Field.new()
                        .setName("NavInfoNode")
                        .setAccessType("initializeOnly")
                        .setAppinfo("node reference to permit getting setting fields from within Script")
                        .setType("SFNode")
                        .addChild(NavigationInfo.new()
                            .setUSE("CameraNavInfo")
                        )
                    )
                    .addField(Field.new()
                        .setName("CameraPI")
                        .setAccessType("initializeOnly")
                        .setAppinfo("node reference to permit getting setting fields from within Script")
                        .setType("SFNode")
                        .addChild(PositionInterpolator.new()
                            .setUSE("CameraPositionInterpolator")
                        )
                    )
                    .addField(Field.new()
                        .setName("CameraOI")
                        .setAccessType("initializeOnly")
                        .setAppinfo("node reference to permit getting setting fields from within Script")
                        .setType("SFNode")
                        .addChild(OrientationInterpolator.new()
                            .setUSE("CameraOrientationInterpolator")
                        )
                    )
                    .addField(Field.new()
                        .setName("key")
                        .setAccessType("inputOutput")
                        .setAppinfo("key array for interpolators")
                        .setType("MFFloat")
                    )
                    .addField(Field.new()
                        .setName("keyValuePosition")
                        .setAccessType("inputOutput")
                        .setAppinfo("keyValue array for PositionInterpolator")
                        .setType("MFVec3f")
                    )
                    .addField(Field.new()
                        .setName("keyValueOrientation")
                        .setAccessType("inputOutput")
                        .setAppinfo("keyValue array for OrientationInterpolator")
                        .setType("MFRotation")
                    )
                    .addField(Field.new()
                        .setName("animated")
                        .setAccessType("inputOutput")
                        .setAppinfo("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events")
                        .setType("SFBool")
                        .setValue("false")
                    )
                    .addField(Field.new()
                        .setName("initialized")
                        .setAccessType("initializeOnly")
                        .setAppinfo("perform checkShots() function once immediately after initialization")
                        .setType("SFBool")
                        .setValue("false")
                    )
                    .addField(Field.new()
                        .setName("shotCount")
                        .setAccessType("initializeOnly")
                        .setAppinfo("how many CameraShot nodes are contained in shots array")
                        .setType("SFInt32")
                        .setValue("0")
                    )
                    .addField(Field.new()
                        .setName("movesCount")
                        .setAccessType("initializeOnly")
                        .setAppinfo("how many CameraMove nodes are contained in moves array")
                        .setType("SFInt32")
                        .setValue("0")
                    )
                    .addField(Field.new()
                        .setName("frameCount")
                        .setAccessType("initializeOnly")
                        .setAppinfo("how many frames were created in current loop")
                        .setType("SFFloat")
                        .setValue("0")
                    )
                    .addField(Field.new()
                        .setName("startTime")
                        .setAccessType("initializeOnly")
                        .setAppinfo("holding variable")
                        .setType("SFTime")
                        .setValue("0")
                    )
                    .addField(Field.new()
                        .setName("priorTraceTime")
                        .setAccessType("initializeOnly")
                        .setAppinfo("holding variable")
                        .setType("SFTime")
                        .setValue("0")
                    )
                    .addField(Field.new()
                        .setName("traceEnabled")
                        .setAccessType("initializeOnly")
                        .setAppinfo("enable console output to trace script computations and prototype progress")
                        .setType("SFBool")
                    )
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("description")
                            .setProtoField("description")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("position")
                            .setProtoField("position")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("orientation")
                            .setProtoField("orientation")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("set_fraction")
                            .setProtoField("set_fraction")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("set_bind")
                            .setProtoField("set_bind")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("fieldOfView")
                            .setProtoField("fieldOfView")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("nearClipPlane")
                            .setProtoField("nearClipPlane")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("farClipPlane")
                            .setProtoField("farClipPlane")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("shots")
                            .setProtoField("shots")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("filterColor")
                            .setProtoField("filterColor")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("filterTransparency")
                            .setProtoField("filterTransparency")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("upVector")
                            .setProtoField("upVector")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("fStop")
                            .setProtoField("fStop")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("focusDistance")
                            .setProtoField("focusDistance")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("isActive")
                            .setProtoField("isActive")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("totalDuration")
                            .setProtoField("totalDuration")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("offlineRender")
                            .setProtoField("offlineRender")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("traceEnabled")
                            .setProtoField("traceEnabled")
                        )
                    )
          .setSourceCode("ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"    alwaysPrint ('initialize complete');\n"+
"}\n"+
"\n"+
"function checkShots (eventValue)\n"+
"{\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"    totalDuration= 0;\n"+
"    shotCount  = shots.length;\n"+
"    movesCount = 0;\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"       movesCount   += shots[i].moves.length;\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"       if (shots[i].moves.length == 0)\n"+
"       {\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"       }\n"+
"    }\n"+
"    // size checks before proceeding\n"+
"    if (shotCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (movesCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (totalDuration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"    // compute interpolators\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"        if (i==0) // initial entries\n"+
"        {\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"        }\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"        {\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"           k++;\n"+
"        }\n"+
"        tracePrint (shots[i].description);\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"        {\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"            if (!animated)\n"+
"            {\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"            }\n"+
"            else\n"+
"            {\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"                if (shotVector.length() >= 0)\n"+
"                {\n"+
"                    // default view direction is along -Z axis\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"                }\n"+
"                else // note (k > 0)\n"+
"                {\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"                }\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"            }\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"            // intermediate trace\n"+
"            tracePrint ('                key=' + key);\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"        }\n"+
"    }\n"+
"    tracePrint ('                key=' + key);\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"    if (key.length != keyValuePosition.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"    }\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"    }\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"    }\n"+
"    tracePrint ('           animated=' + animated);\n"+
"    // set node values\n"+
"    CameraPI.key      = key;\n"+
"    CameraOI.key      = key;\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"    if (!animated) // output results\n"+
"    {\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"    }\n"+
"    tracePrint ('checkShots() complete');\n"+
"}\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"{\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"    outputString = '';\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"    {\n"+
"       outputString += fieldArray[i].toString();\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"    }\n"+
"    return outputString;\n"+
"}\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"{\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"   if (frameCount == 0)\n"+
"   {\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"      startTime      = timestamp;\n"+
"      priorTraceTime = timestamp;\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   if (eventValue == 0)\n"+
"   {\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"      frameCount++;\n"+
"   }\n"+
"   else if (eventValue == 1)\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"      }\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"      frameCount++;\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"   if (initialized == false)\n"+
"   {\n"+
"      checkShots (true);\n"+
"      initialized = true;\n"+
"   }\n"+
"   if (eventValue)\n"+
"   {\n"+
"       tracePrint ('Camera has been bound');\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"       tracePrint ('Camera has been unbound');\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    position = eventValue;\n"+
"}\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    orientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    nearClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    farClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    shots = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterColor = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterTransparency = eventValue;\n"+
"}\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    upVector = eventValue;\n"+
"}\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    focusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    offlineRender = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    animated = eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}")                )
                .addChild(ROUTE.new()
                    .setFromField("position")
                    .setFromNode("CameraScript")
                    .setToField("position")
                    .setToNode("CameraViewpoint")
                )
                .addChild(ROUTE.new()
                    .setFromField("orientation")
                    .setFromNode("CameraScript")
                    .setToField("orientation")
                    .setToNode("CameraViewpoint")
                )
                .addChild(ROUTE.new()
                    .setFromField("isActive")
                    .setFromNode("CameraScript")
                    .setToField("set_bind")
                    .setToNode("CameraViewpoint")
                )
                .addChild(ROUTE.new()
                    .setFromField("isActive")
                    .setFromNode("CameraScript")
                    .setToField("set_bind")
                    .setToNode("CameraNavInfo")
                )
                .addChild(ROUTE.new()
                    .setFromField("isActive")
                    .setFromNode("CameraScript")
                    .setToField("on")
                    .setToNode("CameraDirectionalLight")
                )
            )
        )
        .addComments(CommentsBlock.new("=============== CameraShot =============="))
        .addChild(ProtoDeclare.new()
            .setName("CameraShot")
            .setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
            .setProtoInterface(ProtoInterface.new()
                .addField(Field.new()
                    .setName("description")
                    .setAccessType("inputOutput")
                    .setAppinfo("Text description to be displayed for this CameraShot")
                    .setType("SFString")
                )
                .addField(Field.new()
                    .setName("enabled")
                    .setAccessType("inputOutput")
                    .setAppinfo("Whether this CameraShot can be activated")
                    .setType("SFBool")
                    .setValue("true")
                )
                .addField(Field.new()
                    .setName("moves")
                    .setAccessType("inputOutput")
                    .setAppinfo("Set of CameraMovement nodes")
                    .setType("MFNode")
              .addComments(CommentsBlock.new("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance"))
                )
                .addField(Field.new()
                    .setName("initialPosition")
                    .setAccessType("inputOutput")
                    .setAppinfo("Setup to reinitialize camera position for this shot")
                    .setType("SFVec3f")
                    .setValue("0 0 10")
                )
                .addField(Field.new()
                    .setName("initialOrientation")
                    .setAccessType("inputOutput")
                    .setAppinfo("Setup to reinitialize camera rotation for this shot")
                    .setType("SFRotation")
                    .setValue("0 0 1 0")
                )
                .addField(Field.new()
                    .setName("initialAimPoint")
                    .setAccessType("inputOutput")
                    .setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
                    .setType("SFVec3f")
                    .setValue("0 0 0")
                )
                .addField(Field.new()
                    .setName("initialFieldOfView")
                    .setAccessType("inputOutput")
                    .setAppinfo("pi/4")
                    .setType("SFFloat")
                    .setValue("0.7854")
                )
                .addField(Field.new()
                    .setName("initialFStop")
                    .setAccessType("inputOutput")
                    .setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
                    .setType("SFFloat")
                    .setValue("5.6")
                )
                .addField(Field.new()
                    .setName("initialFocusDistance")
                    .setAccessType("inputOutput")
                    .setAppinfo("Distance to focal plane of sharpest focus")
                    .setType("SFFloat")
                    .setValue("10")
                )
                .addField(Field.new()
                    .setName("shotDuration")
                    .setAccessType("outputOnly")
                    .setAppinfo("Subtotal duration of contained CameraMovement move durations")
                    .setType("SFTime")
                )
                .addField(Field.new()
                    .setName("isActive")
                    .setAccessType("outputOnly")
                    .setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
                    .setType("SFBool")
                )
                .addField(Field.new()
                    .setName("traceEnabled")
                    .setAccessType("initializeOnly")
                    .setAppinfo("enable console output to trace script computations and prototype progress")
                    .setType("SFBool")
                    .setValue("false")
                )
            )
            .setProtoBody(ProtoBody.new()
                .addChild(Script.new()
                    .setDEF("CameraShotScript")
                    .setDirectOutput(true)
                    .setMustEvaluate(true)
                    .addField(Field.new()
                        .setName("description")
                        .setAccessType("inputOutput")
                        .setAppinfo("Text description to be displayed for this CameraShot")
                        .setType("SFString")
                    )
                    .addField(Field.new()
                        .setName("enabled")
                        .setAccessType("inputOutput")
                        .setAppinfo("Whether this CameraShot can be activated")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("moves")
                        .setAccessType("inputOutput")
                        .setAppinfo("Set of CameraMovement nodes")
                        .setType("MFNode")
                .addComments(CommentsBlock.new("initialization nodes (if any) go here"))
                    )
                    .addField(Field.new()
                        .setName("initialPosition")
                        .setAccessType("inputOutput")
                        .setAppinfo("Setup to reinitialize camera position for this shot")
                        .setType("SFVec3f")
                    )
                    .addField(Field.new()
                        .setName("initialOrientation")
                        .setAccessType("inputOutput")
                        .setAppinfo("Setup to reinitialize camera rotation for this shot")
                        .setType("SFRotation")
                    )
                    .addField(Field.new()
                        .setName("initialAimPoint")
                        .setAccessType("inputOutput")
                        .setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
                        .setType("SFVec3f")
                    )
                    .addField(Field.new()
                        .setName("initialFieldOfView")
                        .setAccessType("inputOutput")
                        .setAppinfo("pi/4")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("initialFStop")
                        .setAccessType("inputOutput")
                        .setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("initialFocusDistance")
                        .setAccessType("inputOutput")
                        .setAppinfo("Distance to focal plane of sharpest focus")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("shotDuration")
                        .setAccessType("outputOnly")
                        .setAppinfo("Subtotal duration of contained CameraMovement move durations")
                        .setType("SFTime")
                    )
                    .addField(Field.new()
                        .setName("isActive")
                        .setAccessType("outputOnly")
                        .setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("traceEnabled")
                        .setAccessType("initializeOnly")
                        .setAppinfo("enable console output to trace script computations and prototype progress")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("key")
                        .setAccessType("inputOutput")
                        .setAppinfo("key array for interpolators")
                        .setType("MFFloat")
                    )
                    .addField(Field.new()
                        .setName("keyValuePosition")
                        .setAccessType("inputOutput")
                        .setAppinfo("keyValue array for PositionInterpolator")
                        .setType("MFVec3f")
                    )
                    .addField(Field.new()
                        .setName("keyValueOrientation")
                        .setAccessType("inputOutput")
                        .setAppinfo("keyValue array for OrientationInterpolator")
                        .setType("MFRotation")
                    )
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("description")
                            .setProtoField("description")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("enabled")
                            .setProtoField("enabled")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("moves")
                            .setProtoField("moves")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("initialPosition")
                            .setProtoField("initialPosition")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("initialOrientation")
                            .setProtoField("initialOrientation")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("initialAimPoint")
                            .setProtoField("initialAimPoint")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("initialFieldOfView")
                            .setProtoField("initialFieldOfView")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("initialFStop")
                            .setProtoField("initialFStop")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("initialFocusDistance")
                            .setProtoField("initialFocusDistance")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("shotDuration")
                            .setProtoField("shotDuration")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("isActive")
                            .setProtoField("isActive")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("traceEnabled")
                            .setProtoField("traceEnabled")
                        )
                    )
          .setSourceCode("ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"    shotDuration = 0;\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"    {\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"    }\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    moves = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialAimPoint = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}")                )
            .addComments(CommentsBlock.new("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))
            )
        )
        .addComments(CommentsBlock.new("=============== CameraMovement =============="))
        .addChild(ProtoDeclare.new()
            .setName("CameraMovement")
            .setAppinfo("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
            .setProtoInterface(ProtoInterface.new()
                .addField(Field.new()
                    .setName("description")
                    .setAccessType("inputOutput")
                    .setAppinfo("Text description to be displayed for this CameraMovement")
                    .setType("SFString")
                )
                .addField(Field.new()
                    .setName("enabled")
                    .setAccessType("inputOutput")
                    .setAppinfo("Whether this CameraMovement can be activated")
                    .setType("SFBool")
                    .setValue("true")
                )
                .addField(Field.new()
                    .setName("duration")
                    .setAccessType("inputOutput")
                    .setAppinfo("Duration in seconds for this move")
                    .setType("SFFloat")
                    .setValue("0")
                )
                .addField(Field.new()
                    .setName("goalPosition")
                    .setAccessType("inputOutput")
                    .setAppinfo("Goal camera position for this move")
                    .setType("SFVec3f")
                    .setValue("0 0 10")
                )
                .addField(Field.new()
                    .setName("goalOrientation")
                    .setAccessType("inputOutput")
                    .setAppinfo("Goal camera rotation for this move")
                    .setType("SFRotation")
                    .setValue("0 0 1 0")
                )
                .addField(Field.new()
                    .setName("tracking")
                    .setAccessType("inputOutput")
                    .setAppinfo("Whether or not camera direction is tracking towards the aimPoint")
                    .setType("SFBool")
                    .setValue("false")
                )
                .addField(Field.new()
                    .setName("goalAimPoint")
                    .setAccessType("inputOutput")
                    .setAppinfo("Goal aimPoint for this move, ignored if tracking=false")
                    .setType("SFVec3f")
                    .setValue("0 0 0")
                )
                .addField(Field.new()
                    .setName("goalFieldOfView")
                    .setAccessType("inputOutput")
                    .setAppinfo("Goal fieldOfView for this move")
                    .setType("SFFloat")
                    .setValue("0.7854")
                )
                .addField(Field.new()
                    .setName("goalFStop")
                    .setAccessType("inputOutput")
                    .setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
                    .setType("SFFloat")
                    .setValue("5.6")
                )
                .addField(Field.new()
                    .setName("goalFocusDistance")
                    .setAccessType("inputOutput")
                    .setAppinfo("Distance to focal plane of sharpest focus")
                    .setType("SFFloat")
                    .setValue("10")
                )
                .addField(Field.new()
                    .setName("isActive")
                    .setAccessType("outputOnly")
                    .setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
                    .setType("SFBool")
                )
                .addField(Field.new()
                    .setName("traceEnabled")
                    .setAccessType("initializeOnly")
                    .setAppinfo("enable console output to trace script computations and prototype progress")
                    .setType("SFBool")
                    .setValue("false")
                )
            )
            .setProtoBody(ProtoBody.new()
            .addComments(CommentsBlock.new("First node determines node type of this prototype"))
            .addComments(CommentsBlock.new("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addComments(CommentsBlock.new("Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events"))
                .addChild(Script.new()
                    .setDEF("CameraMovementScript")
                    .setDirectOutput(true)
                    .setMustEvaluate(true)
                    .addField(Field.new()
                        .setName("description")
                        .setAccessType("inputOutput")
                        .setAppinfo("Text description to be displayed for this CameraMovement")
                        .setType("SFString")
                    )
                    .addField(Field.new()
                        .setName("enabled")
                        .setAccessType("inputOutput")
                        .setAppinfo("Whether this CameraMovement can be activated")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("duration")
                        .setAccessType("inputOutput")
                        .setAppinfo("Duration in seconds for this move")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("goalPosition")
                        .setAccessType("inputOutput")
                        .setAppinfo("Goal camera position for this move")
                        .setType("SFVec3f")
                    )
                    .addField(Field.new()
                        .setName("goalOrientation")
                        .setAccessType("inputOutput")
                        .setAppinfo("Goal camera rotation for this move")
                        .setType("SFRotation")
                    )
                    .addField(Field.new()
                        .setName("tracking")
                        .setAccessType("inputOutput")
                        .setAppinfo("Whether or not camera direction is tracking towards the aimPoint")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("goalAimPoint")
                        .setAccessType("inputOutput")
                        .setAppinfo("Goal aimPoint for this move, ignored if tracking=false")
                        .setType("SFVec3f")
                    )
                    .addField(Field.new()
                        .setName("goalFieldOfView")
                        .setAccessType("inputOutput")
                        .setAppinfo("Goal fieldOfView for this move")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("goalFStop")
                        .setAccessType("inputOutput")
                        .setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("goalFocusDistance")
                        .setAccessType("inputOutput")
                        .setAppinfo("Distance to focal plane of sharpest focus")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("isActive")
                        .setAccessType("outputOnly")
                        .setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("traceEnabled")
                        .setAccessType("initializeOnly")
                        .setAppinfo("enable console output to trace script computations and prototype progress")
                        .setType("SFBool")
                    )
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("description")
                            .setProtoField("description")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("enabled")
                            .setProtoField("enabled")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("duration")
                            .setProtoField("duration")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("goalPosition")
                            .setProtoField("goalPosition")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("goalOrientation")
                            .setProtoField("goalOrientation")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("tracking")
                            .setProtoField("tracking")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("goalAimPoint")
                            .setProtoField("goalAimPoint")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("goalFieldOfView")
                            .setProtoField("goalFieldOfView")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("goalFStop")
                            .setProtoField("goalFStop")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("goalFocusDistance")
                            .setProtoField("goalFocusDistance")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("isActive")
                            .setProtoField("isActive")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("traceEnabled")
                            .setProtoField("traceEnabled")
                        )
                    )
          .setSourceCode("ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"                           );\n"+
"    if (duration < 0)\n"+
"    {\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"       duration = 0;\n"+
"    }\n"+
"    else if (duration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"    }\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalAimPoint_changed = eventValue;\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    duration = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    tracking = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}")                )
            .addComments(CommentsBlock.new("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))
            )
        )
        .addComments(CommentsBlock.new("=============== OfflineRender =============="))
        .addChild(ProtoDeclare.new()
            .setName("OfflineRender")
            .setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
            .setProtoInterface(ProtoInterface.new()
            .addComments(CommentsBlock.new("TODO non-photorealistic rendering (NPR) parameters"))
                .addField(Field.new()
                    .setName("description")
                    .setAccessType("inputOutput")
                    .setAppinfo("Text description to be displayed for this OfflineRender")
                    .setType("SFString")
                )
                .addField(Field.new()
                    .setName("enabled")
                    .setAccessType("inputOutput")
                    .setAppinfo("Whether this OfflineRender can be activated")
                    .setType("SFBool")
                    .setValue("true")
                )
                .addField(Field.new()
                    .setName("frameRate")
                    .setAccessType("inputOutput")
                    .setAppinfo("Frames per second recorded for this rendering")
                    .setType("SFFloat")
                    .setValue("30")
                )
                .addField(Field.new()
                    .setName("frameSize")
                    .setAccessType("inputOutput")
                    .setAppinfo("Size of frame in number of pixels width and height")
                    .setType("SFVec2f")
                    .setValue("640 480")
                )
                .addField(Field.new()
                    .setName("pixelAspectRatio")
                    .setAccessType("inputOutput")
                    .setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")
                    .setType("SFFloat")
                    .setValue("1.33")
                )
                .addField(Field.new()
                    .setName("set_startTime")
                    .setAccessType("inputOnly")
                    .setAppinfo("Begin render operation")
                    .setType("SFTime")
                )
                .addField(Field.new()
                    .setName("progress")
                    .setAccessType("outputOnly")
                    .setAppinfo("Progress performing render operation (0..1)")
                    .setType("SFFloat")
                )
                .addField(Field.new()
                    .setName("renderCompleteTime")
                    .setAccessType("outputOnly")
                    .setAppinfo("Render operation complete")
                    .setType("SFTime")
                )
                .addField(Field.new()
                    .setName("movieFormat")
                    .setAccessType("initializeOnly")
                    .setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format")
                    .setType("MFString")
                    .setValue("\"mpeg\"")
                )
                .addField(Field.new()
                    .setName("imageFormat")
                    .setAccessType("initializeOnly")
                    .setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format")
                    .setType("MFString")
                    .setValue("\"png\"")
                )
                .addField(Field.new()
                    .setName("traceEnabled")
                    .setAccessType("initializeOnly")
                    .setAppinfo("enable console output to trace script computations and prototype progress")
                    .setType("SFBool")
                    .setValue("false")
                )
            )
            .setProtoBody(ProtoBody.new()
            .addComments(CommentsBlock.new("First node determines node type of this prototype"))
            .addComments(CommentsBlock.new("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
                .addChild(Script.new()
                    .setDEF("OfflineRenderScript")
                    .setMustEvaluate(true)
                    .addField(Field.new()
                        .setName("description")
                        .setAccessType("inputOutput")
                        .setAppinfo("Text description to be displayed for this OfflineRender")
                        .setType("SFString")
                    )
                    .addField(Field.new()
                        .setName("enabled")
                        .setAccessType("inputOutput")
                        .setAppinfo("Whether this OfflineRender can be activated")
                        .setType("SFBool")
                    )
                    .addField(Field.new()
                        .setName("frameRate")
                        .setAccessType("inputOutput")
                        .setAppinfo("Frames per second recorded for this rendering")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("frameSize")
                        .setAccessType("inputOutput")
                        .setAppinfo("Size of frame in number of pixels width and height")
                        .setType("SFVec2f")
                    )
                    .addField(Field.new()
                        .setName("pixelAspectRatio")
                        .setAccessType("inputOutput")
                        .setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("set_startTime")
                        .setAccessType("inputOnly")
                        .setAppinfo("Begin render operation")
                        .setType("SFTime")
                    )
                    .addField(Field.new()
                        .setName("progress")
                        .setAccessType("outputOnly")
                        .setAppinfo("Progress performing render operation (0..1)")
                        .setType("SFFloat")
                    )
                    .addField(Field.new()
                        .setName("renderCompleteTime")
                        .setAccessType("outputOnly")
                        .setAppinfo("Render operation complete")
                        .setType("SFTime")
                    )
                    .addField(Field.new()
                        .setName("movieFormat")
                        .setAccessType("initializeOnly")
                        .setAppinfo("Format of rendered output movie (mpeg mp4 etc.)")
                        .setType("MFString")
                    )
                    .addField(Field.new()
                        .setName("imageFormat")
                        .setAccessType("initializeOnly")
                        .setAppinfo("Format of rendered output images (png jpeg gif tiff etc.)")
                        .setType("MFString")
                    )
                    .addField(Field.new()
                        .setName("traceEnabled")
                        .setAccessType("initializeOnly")
                        .setAppinfo("enable console output to trace script computations and prototype progress")
                        .setType("SFBool")
                    )
                    .setIS(IS.new()
                        .addConnect(Connect.new()
                            .setNodeField("description")
                            .setProtoField("description")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("enabled")
                            .setProtoField("enabled")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("frameRate")
                            .setProtoField("frameRate")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("frameSize")
                            .setProtoField("frameSize")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("pixelAspectRatio")
                            .setProtoField("pixelAspectRatio")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("set_startTime")
                            .setProtoField("set_startTime")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("progress")
                            .setProtoField("progress")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("renderCompleteTime")
                            .setProtoField("renderCompleteTime")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("movieFormat")
                            .setProtoField("movieFormat")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("imageFormat")
                            .setProtoField("imageFormat")
                        )
                        .addConnect(Connect.new()
                            .setNodeField("traceEnabled")
                            .setProtoField("traceEnabled")
                        )
                    )
          .setSourceCode("ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameRate = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameSize = eventValue;\n"+
"}\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    pixelAspectRatio = eventValue;\n"+
"}\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // do something with input eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}")                )
            .addComments(CommentsBlock.new("Add any ROUTEs here, going from Script to other nodes within ProtoBody"))
            )
        )
        .addComments(CommentsBlock.new("=============== Launch Prototype Example =============="))
        .addChild(Background.new()
            .setSkyColor([0.282353, 0.380392, 0.470588].to_java Java::float)
        )
        .addChild(Anchor.new()
            .setDescription("launch CameraExample scene")
            .setUrl(["CameraExamples.x3d", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d", "CameraExamples.wrl", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"].to_java Java::java.lang.String)
            .addChild(Transform.new()
                .addChild(Shape.new()
                    .setGeometry(Text.new()
                        .setString(["CameraPrototypes.x3d", "defines multiple prototype nodes", "", "Click on this text to see", "CameraExamples.x3d scene"].to_java Java::java.lang.String)
                        .setFontStyle(FontStyle.new()
                            .setJustify(["MIDDLE", "MIDDLE"].to_java Java::java.lang.String)
                        )
                    )
                    .setAppearance(Appearance.new()
                        .setMaterial(Material.new()
                            .setDiffuseColor([1, 1, 0.2].to_java Java::float)
                        )
                    )
                )
            )
        )
    )
x3D0.toFileX3D "../data/CameraPrototypes.new.jruby.x3d"
x3D0.toFileJSON "../data/CameraPrototypes.new.jruby.x3dj"
