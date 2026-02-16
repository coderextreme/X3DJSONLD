####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python 
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.1',
  head=head(
    children=[
    meta(name='creator',content='Holger Seelig'),
    meta(name='created',content='Tue, 10 Feb 2026 12:09:57 GMT'),
    meta(name='modified',content='Tue, 10 Feb 2026 12:34:21 GMT'),
    meta(name='generator',content='x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy'),
    meta(name='generator',content='Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/')]),
  Scene=Scene(
    children=[
    MetadataBoolean(),
    MetadataDouble(),
    MetadataFloat(),
    MetadataInteger(),
    MetadataSet(),
    MetadataString(),
    WorldInfo(),
    Background(),
    Fog(),
    FogCoordinate(),
    LocalFog(),
    TextureBackground(),
    ProximitySensor(),
    TransformSensor(),
    VisibilitySensor(),
    ColorChaser(),
    ColorDamper(),
    CoordinateChaser(),
    CoordinateDamper(),
    OrientationChaser(),
    OrientationDamper(),
    PositionChaser(),
    PositionChaser2D(),
    PositionDamper(),
    PositionDamper2D(),
    ScalarChaser(),
    ScalarDamper(),
    TexCoordChaser2D(),
    TexCoordDamper2D(),
    Box(),
    Cone(),
    Cylinder(),
    ElevationGrid(),
    Extrusion(),
    IndexedFaceSet(),
    Sphere(),
    Group(),
    StaticGroup(),
    Switch(whichChoice=-1),
    Transform(),
    ColorInterpolator(),
    CoordinateInterpolator(),
    CoordinateInterpolator2D(),
    EaseInEaseOut(),
    NormalInterpolator(),
    OrientationInterpolator(),
    PositionInterpolator(),
    PositionInterpolator2D(),
    ScalarInterpolator(),
    SplinePositionInterpolator(),
    SplinePositionInterpolator2D(),
    SplineScalarInterpolator(),
    SquadOrientationInterpolator(),
    Layer(pickable=True,objectType=["ALL"]),
    LayerSet(),
    Viewport(),
    DirectionalLight(),
    EnvironmentLight(origin=0,0,0,rotation=(0,0,1,0)),
    PointLight(),
    SpotLight(beamWidth=0.589049),
    Billboard(),
    Collision(),
    LOD(),
    NavigationInfo(),
    OrthoViewpoint(),
    Viewpoint(),
    ViewpointGroup(),
    Anchor(),
    Inline(),
    LoadSensor(),
    CylinderSensor(),
    PlaneSensor(),
    SphereSensor(),
    TouchSensor(),
    ClipPlane(),
    Color(),
    ColorRGBA(),
    Coordinate(),
    CoordinateDouble(),
    IndexedLineSet(),
    IndexedTriangleFanSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    IndexedTriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    IndexedTriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    LineSet(),
    Normal(),
    PointSet(),
    Tangent(),
    TriangleFanSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    ComposedShader(),
    FloatVertexAttribute(),
    Matrix3VertexAttribute(),
    Matrix4VertexAttribute(),
    PackagedShader(),
    ProgramShader(),
    ShaderPart(),
    ShaderProgram(),
    AcousticProperties(),
    Appearance(),
    FillProperties(),
    LineProperties(),
    Material(),
    PhysicalMaterial(),
    PointProperties(),
    Shape(),
    TwoSidedMaterial(),
    UnlitMaterial(emissiveColor=(1,1,1),normalScale=0),
    Analyser(),
    AudioClip(),
    AudioDestination(),
    BiquadFilter(type='LOWPASS'),
    BufferAudioSource(),
    ChannelMerger(),
    ChannelSelector(),
    ChannelSplitter(),
    Convolver(),
    Delay(),
    DynamicsCompressor(),
    Gain(),
    ListenerPointSource(),
    MicrophoneSource(),
    OscillatorSource(),
    PeriodicWave(),
    Sound(),
    SpatialSound(),
    StreamAudioDestination(),
    StreamAudioSource(),
    WaveShaper(),
    ImageTexture(),
    MovieTexture(),
    MultiTexture(),
    MultiTextureCoordinate(),
    MultiTextureTransform(),
    PixelTexture(),
    TextureCoordinate(),
    TextureCoordinateGenerator(),
    TextureProperties(),
    TextureTransform(),
    TimeSensor(),
    CADAssembly(),
    CADFace(),
    CADLayer(),
    CADPart(),
    IndexedQuadSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    QuadSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
    DISEntityManager(),
    DISEntityTypeMapping(),
    EspduTransform(),
    ReceiverPdu(receivedPower=0.0),
    SignalPdu(),
    TransmitterPdu(relativeAntennaLocation=(0,0,0),transmitFrequencyBandwidth=0.0),
    BooleanFilter(),
    BooleanSequencer(),
    BooleanToggle(),
    BooleanTrigger(),
    IntegerSequencer(),
    IntegerTrigger(),
    TimeTrigger(),
    KeySensor(enabled=False),
    StringSensor(),
    TextureProjector(ambientIntensity=0,color=(1,1,1),fieldOfView=0.7854,intensity=0.7854,upVector=(0,1,0)),
    TextureProjectorParallel(ambientIntensity=0,color=(1,1,1),intensity=0.7854,upVector=(0,1,0)),
    ComposedCubeMapTexture(),
    GeneratedCubeMapTexture(),
    ImageCubeMapTexture(),
    Arc2D(),
    ArcClose2D(closureType='PIE'),
    Circle2D(),
    Disk2D(),
    Polyline2D(),
    Polypoint2D(),
    Rectangle2D(),
    TriangleSet2D(),
    HAnimDisplacer(),
    HAnimHumanoid(version='2.0'),
    HAnimJoint(ulimit=[0,0,0],llimit=[0,0,0]),
    HAnimMotion(endFrame=-1),
    HAnimPose(loa=-1,transitionDuration=0),
    HAnimSegment(),
    HAnimSite(),
    BoundedPhysicsModel(),
    ConeEmitter(),
    ExplosionEmitter(),
    ForcePhysicsModel(),
    ParticleSystem(),
    PointEmitter(),
    PolylineEmitter(),
    SurfaceEmitter(),
    VolumeEmitter(),
    WindPhysicsModel(),
    Script(),
    FontLibrary(),
    FontStyle(),
    Text(),
    ComposedTexture3D(),
    ImageTexture3D(),
    ImageTextureAtlas(),
    PixelTexture3D(),
    TextureCoordinate3D(),
    TextureCoordinate4D(),
    TextureTransform3D(),
    TextureTransformMatrix3D(),
    BallJoint(),
    CollidableOffset(),
    CollidableShape(),
    CollisionCollection(),
    CollisionSensor(),
    CollisionSpace(),
    Contact(),
    DoubleAxisHingeJoint(axis1=(1,0,0),axis2=(0,1,0)),
    MotorJoint(motor1Axis=(1,0,0),motor2Axis=(0,1,0),motor3Axis=(0,0,1)),
    RigidBody(),
    RigidBodyCollection(),
    SingleAxisHingeJoint(axis=(0,1,0)),
    SliderJoint(),
    UniversalJoint(axis1=(1,0,0),axis2=(0,1,0)),
    BlendedVolumeStyle(),
    BoundaryEnhancementVolumeStyle(),
    CartoonVolumeStyle(),
    ComposedVolumeStyle(),
    EdgeEnhancementVolumeStyle(),
    IsoSurfaceVolumeData(),
    OpacityMapVolumeStyle(),
    ProjectionVolumeStyle(),
    SegmentedVolumeData(),
    ShadedVolumeStyle(),
    SilhouetteEnhancementVolumeStyle(),
    ToneMappedVolumeStyle(),
    VolumeData(),
    GeoCoordinate(),
    GeoElevationGrid(),
    GeoLOD(),
    GeoLocation(),
    GeoMetadata(),
    GeoOrigin(),
    GeoPositionInterpolator(),
    GeoProximitySensor(),
    GeoTouchSensor(),
    GeoTransform(),
    GeoViewpoint(),
    Contour2D(),
    ContourPolyline2D(),
    NurbsCurve(),
    NurbsCurve2D(),
    NurbsOrientationInterpolator(),
    NurbsPatchSurface(),
    NurbsPositionInterpolator(),
    NurbsSet(),
    NurbsSurfaceInterpolator(),
    NurbsSweptSurface(),
    NurbsSwungSurface(),
    NurbsTextureCoordinate(),
    NurbsTrimmedSurface(),
    Layout(),
    LayoutGroup(),
    LayoutLayer(pickable=True,objectType=["ALL"]),
    ScreenFontStyle(),
    ScreenGroup(),
    LinePickSensor(),
    PickableGroup(),
    PointPickSensor(),
    PrimitivePickSensor(),
    VolumePickSensor(),])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python load and self-test diagnostics complete.")
