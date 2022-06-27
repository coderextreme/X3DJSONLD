# __init__.py needed for properly configuring pypi distribution of x3d.py package

# According to _Learning Python_ by Mark Lutz, fifth edition:
# - Empty __init__.py no longer required as of Python 3.3.  p. 761
# - Using __init__.py is performance advantage for loading, even when empty.  p. 761
# - Using __all__ list to define exported values for import * is allowed but not required.  p. 735 and 771-772.

# 6.4.1. Importing * From a Package
# https://docs.python.org/3/tutorial/modules.html#importing-from-a-package

# indicates that
#     from packagename import *
# "then imports whatever names are defined in the package" and
# "Although certain modules are designed to export only names that follow certain patterns when you use import *,
#     it is still considered bad practice in production code."

# TODO testing continues to fix x3d.py package's class visibility satisfactorily for end users

__all__ = [
    # Field types
    'SFBool', 'MFBool', 'SFColor', 'MFColor', 'SFColorRGBA', 'MFColorRGBA', 'SFDouble', 'MFDouble', 'SFFloat', 'MFFloat', 'SFImage', 'MFImage', 'SFInt32', 'MFInt32', 'SFMatrix3d', 'MFMatrix3d', 'SFMatrix3f', 'MFMatrix3f', 'SFMatrix4d', 'MFMatrix4d', 'SFMatrix4f', 'MFMatrix4f', 'SFNode', 'MFNode', 'SFRotation', 'MFRotation', 'SFString', 'MFString', 'SFTime', 'MFTime', 'SFVec2d', 'MFVec2d', 'SFVec2f', 'MFVec2f', 'SFVec3d', 'MFVec3d', 'SFVec3f', 'MFVec3f', 'SFVec4d', 'MFVec4d', 'SFVec4f', 'MFVec4f', 

    # Simple Type Enumerations
    'ACCESSTYPECHOICES', 'ALPHAMODECHOICES', 'APPLIEDPARAMETERSCHOICES', 'BIQUADTYPEFILTERCHOICES', 'CHANNELCOUNTMODECHOICES', 'CHANNELINTERPRETATIONCHOICES', 'CLOSURETYPECHOICES', 'COMPONENTNAMECHOICES', 'DISTANCEMODELCHOICES', 'FIELDTYPECHOICES', 'FOGTYPECHOICES', 'FONTFAMILYVALUES', 'FONTSTYLECHOICES', 'FORCEOUTPUTVALUES', 'GENERATEDCUBEMAPTEXTUREUPDATECHOICES', 'GEOMETADATASUMMARYKEYVALUES', 'GEOSYSTEMEARTHELLIPSOIDVALUES', 'GEOSYSTEMSPATIALREFERENCEFRAMEVALUES', 'HANIMFEATUREPOINTNAMEVALUES', 'HANIMHUMANOIDINFOKEYVALUES', 'HANIMJOINTNAMEVALUES', 'HANIMSEGMENTNAMEVALUES', 'HATCHSTYLEVALUES', 'INTERSECTIONTYPEVALUES', 'JUSTIFYCHOICES', 'LAYOUTALIGNCHOICES', 'LAYOUTSCALEMODECHOICES', 'LAYOUTUNITSCHOICES', 'LINETYPEVALUES', 'METADIRECTIONCHOICES', 'METANAMEVALUES', 'MULTITEXTUREFUNCTIONVALUES', 'MULTITEXTUREMODEVALUES', 'MULTITEXTURESOURCEVALUES', 'NAVIGATIONTRANSITIONTYPEVALUES', 'NAVIGATIONTYPEVALUES', 'NETWORKMODECHOICES', 'PARTICLESYSTEMGEOMETRYTYPEVALUES', 'PERIODICWAVETYPECHOICES', 'PHASEFUNCTIONVALUES', 'PICKABLEOBJECTTYPEVALUES', 'PICKSENSORMATCHCRITERIONCHOICES', 'PICKSENSORSORTORDERVALUES', 'PROFILENAMECHOICES', 'PROJECTIONVOLUMESTYLETYPECHOICES', 'SHADERLANGUAGEVALUES', 'SHADERPARTTYPEVALUES', 'TEXTUREBOUNDARYMODECHOICES', 'TEXTURECOMPRESSIONMODECHOICES', 'TEXTURECOORDINATEGENERATORMODECHOICES', 'TEXTUREMAGNIFICATIONMODECHOICES', 'TEXTUREMINIFICATIONMODECHOICES', 'UNITCATEGORYCHOICES', 'VOLUMERENDERINGWEIGHTFUNCTIONCHOICES', 'WAVESHAPEROVERSAMPLECHOICES', 'X3DVERSIONCHOICES', 

    # Abstract Object Types (not used by programmers, internal only)
    # '_X3DBoundedObject', '_X3DFogObject', '_X3DMetadataObject', '_X3DPickableObject', '_X3DProgrammableShaderObject', '_X3DUrlObject', 

    # Abstract Node Types (not used by programmers, internal only)
    # '_X3DAppearanceChildNode', '_X3DAppearanceNode', '_X3DArrayField', '_X3DBackgroundNode', '_X3DBindableNode', '_X3DChaserNode', '_X3DChildNode', '_X3DColorNode', '_X3DComposableVolumeRenderStyleNode', '_X3DComposedGeometryNode', '_X3DCoordinateNode', '_X3DDamperNode', '_X3DDragSensorNode', '_X3DEnvironmentalSensorNode', '_X3DEnvironmentTextureNode', '_X3DField', '_X3DFollowerNode', '_X3DFontStyleNode', '_X3DGeometricPropertyNode', '_X3DGeometryNode', '_X3DGroupingNode', '_X3DInfoNode', '_X3DInterpolatorNode', '_X3DKeyDeviceSensorNode', '_X3DLayerNode', '_X3DLayoutNode', '_X3DLightNode', '_X3DMaterialNode', '_X3DNBodyCollidableNode', '_X3DNBodyCollisionSpaceNode', '_X3DNetworkSensorNode', '_X3DNode', '_X3DNormalNode', '_X3DNurbsControlCurveNode', '_X3DNurbsSurfaceGeometryNode', '_X3DOneSidedMaterialNode', '_X3DParametricGeometryNode', '_X3DParticleEmitterNode', '_X3DParticlePhysicsModelNode', '_X3DPickSensorNode', '_X3DPointingDeviceSensorNode', '_X3DProductStructureChildNode', '_X3DPrototypeInstance', '_X3DRigidJointNode', '_X3DScriptNode', '_X3DSensorNode', '_X3DSequencerNode', '_X3DShaderNode', '_X3DShapeNode', '_X3DSingleTextureCoordinateNode', '_X3DSingleTextureNode', '_X3DSingleTextureTransformNode', '_X3DSoundChannelNode', '_X3DSoundDestinationNode', '_X3DSoundNode', '_X3DSoundProcessingNode', '_X3DSoundSourceNode', '_X3DStatement', '_X3DTexture2DNode', '_X3DTexture3DNode', '_X3DTextureCoordinateNode', '_X3DTextureNode', '_X3DTextureProjectorNode', '_X3DTextureTransformNode', '_X3DTimeDependentNode', '_X3DTouchSensorNode', '_X3DTriggerNode', '_X3DVertexAttributeNode', '_X3DViewpointNode', '_X3DViewportNode', '_X3DVolumeDataNode', '_X3DVolumeRenderStyleNode', 

    # Concrete Nodes
    'AcousticProperties', 'Analyser', 'Anchor', 'Appearance', 'Arc2D', 'ArcClose2D', 'AudioClip', 'AudioDestination', 'Background', 'BallJoint', 'Billboard', 'BiquadFilter', 'BlendedVolumeStyle', 'BooleanFilter', 'BooleanSequencer', 'BooleanToggle', 'BooleanTrigger', 'BoundaryEnhancementVolumeStyle', 'BoundedPhysicsModel', 'Box', 'BufferAudioSource', 'CADAssembly', 'CADFace', 'CADLayer', 'CADPart', 'CartoonVolumeStyle', 'ChannelMerger', 'ChannelSelector', 'ChannelSplitter', 'Circle2D', 'ClipPlane', 'CollidableOffset', 'CollidableShape', 'Collision', 'CollisionCollection', 'CollisionSensor', 'CollisionSpace', 'Color', 'ColorChaser', 'ColorDamper', 'ColorInterpolator', 'ColorRGBA', 'ComposedCubeMapTexture', 'ComposedShader', 'ComposedTexture3D', 'ComposedVolumeStyle', 'Cone', 'ConeEmitter', 'Contact', 'Contour2D', 'ContourPolyline2D', 'Convolver', 'Coordinate', 'CoordinateChaser', 'CoordinateDamper', 'CoordinateDouble', 'CoordinateInterpolator', 'CoordinateInterpolator2D', 'Cylinder', 'CylinderSensor', 'Delay', 'DirectionalLight', 'DISEntityManager', 'DISEntityTypeMapping', 'Disk2D', 'DoubleAxisHingeJoint', 'DynamicsCompressor', 'EaseInEaseOut', 'EdgeEnhancementVolumeStyle', 'ElevationGrid', 'EspduTransform', 'ExplosionEmitter', 'Extrusion', 'FillProperties', 'FloatVertexAttribute', 'Fog', 'FogCoordinate', 'FontStyle', 'ForcePhysicsModel', 'Gain', 'GeneratedCubeMapTexture', 'GeoCoordinate', 'GeoElevationGrid', 'GeoLocation', 'GeoLOD', 'GeoMetadata', 'GeoOrigin', 'GeoPositionInterpolator', 'GeoProximitySensor', 'GeoTouchSensor', 'GeoTransform', 'GeoViewpoint', 'Group', 'HAnimDisplacer', 'HAnimHumanoid', 'HAnimJoint', 'HAnimMotion', 'HAnimSegment', 'HAnimSite', 'ImageCubeMapTexture', 'ImageTexture', 'ImageTexture3D', 'IndexedFaceSet', 'IndexedLineSet', 'IndexedQuadSet', 'IndexedTriangleFanSet', 'IndexedTriangleSet', 'IndexedTriangleStripSet', 'Inline', 'IntegerSequencer', 'IntegerTrigger', 'IsoSurfaceVolumeData', 'KeySensor', 'Layer', 'LayerSet', 'Layout', 'LayoutGroup', 'LayoutLayer', 'LinePickSensor', 'LineProperties', 'LineSet', 'ListenerPointSource', 'LoadSensor', 'LocalFog', 'LOD', 'Material', 'Matrix3VertexAttribute', 'Matrix4VertexAttribute', 'MetadataBoolean', 'MetadataDouble', 'MetadataFloat', 'MetadataInteger', 'MetadataSet', 'MetadataString', 'MicrophoneSource', 'MotorJoint', 'MovieTexture', 'MultiTexture', 'MultiTextureCoordinate', 'MultiTextureTransform', 'NavigationInfo', 'Normal', 'NormalInterpolator', 'NurbsCurve', 'NurbsCurve2D', 'NurbsOrientationInterpolator', 'NurbsPatchSurface', 'NurbsPositionInterpolator', 'NurbsSet', 'NurbsSurfaceInterpolator', 'NurbsSweptSurface', 'NurbsSwungSurface', 'NurbsTextureCoordinate', 'NurbsTrimmedSurface', 'OpacityMapVolumeStyle', 'OrientationChaser', 'OrientationDamper', 'OrientationInterpolator', 'OrthoViewpoint', 'OscillatorSource', 'PackagedShader', 'ParticleSystem', 'PeriodicWave', 'PhysicalMaterial', 'PickableGroup', 'PixelTexture', 'PixelTexture3D', 'PlaneSensor', 'PointEmitter', 'PointLight', 'PointPickSensor', 'PointProperties', 'PointSet', 'Polyline2D', 'PolylineEmitter', 'Polypoint2D', 'PositionChaser', 'PositionChaser2D', 'PositionDamper', 'PositionDamper2D', 'PositionInterpolator', 'PositionInterpolator2D', 'PrimitivePickSensor', 'ProgramShader', 'ProjectionVolumeStyle', 'ProtoInstance', 'ProximitySensor', 'QuadSet', 'ReceiverPdu', 'Rectangle2D', 'RigidBody', 'RigidBodyCollection', 'ScalarChaser', 'ScalarDamper', 'ScalarInterpolator', 'ScreenFontStyle', 'ScreenGroup', 'Script', 'SegmentedVolumeData', 'ShadedVolumeStyle', 'ShaderPart', 'ShaderProgram', 'Shape', 'SignalPdu', 'SilhouetteEnhancementVolumeStyle', 'SingleAxisHingeJoint', 'SliderJoint', 'Sound', 'SpatialSound', 'Sphere', 'SphereSensor', 'SplinePositionInterpolator', 'SplinePositionInterpolator2D', 'SplineScalarInterpolator', 'SpotLight', 'SquadOrientationInterpolator', 'StaticGroup', 'StreamAudioDestination', 'StreamAudioSource', 'StringSensor', 'SurfaceEmitter', 'Switch', 'TexCoordChaser2D', 'TexCoordDamper2D', 'Text', 'TextureBackground', 'TextureCoordinate', 'TextureCoordinate3D', 'TextureCoordinate4D', 'TextureCoordinateGenerator', 'TextureProjector', 'TextureProjectorParallel', 'TextureProperties', 'TextureTransform', 'TextureTransform3D', 'TextureTransformMatrix3D', 'TimeSensor', 'TimeTrigger', 'ToneMappedVolumeStyle', 'TouchSensor', 'Transform', 'TransformSensor', 'TransmitterPdu', 'TriangleFanSet', 'TriangleSet', 'TriangleSet2D', 'TriangleStripSet', 'TwoSidedMaterial', 'UniversalJoint', 'UnlitMaterial', 'Viewpoint', 'ViewpointGroup', 'Viewport', 'VisibilitySensor', 'VolumeData', 'VolumeEmitter', 'VolumePickSensor', 'WaveShaper', 'WindPhysicsModel', 'WorldInfo', 

    # Statements
    'component', 'connect', 'EXPORT', 'ExternProtoDeclare', 'field', 'fieldValue', 'head', 'IMPORT', 'IS', 'meta', 'ProtoBody', 'ProtoDeclare', 'ProtoInterface', 'ROUTE', 'Scene', 'unit', 'X3D', 

    # Utility functions
    'isValidSFBool', 'assertValidSFBool', 'isValidMFBool', 'assertValidMFBool', 'isValidSFColor', 'assertValidSFColor', 'isValidMFColor', 'assertValidMFColor', 'isValidSFColorRGBA', 'assertValidSFColorRGBA', 'isValidMFColorRGBA', 'assertValidMFColorRGBA', 'isValidSFDouble', 'assertValidSFDouble', 'isValidMFDouble', 'assertValidMFDouble', 'isValidSFFloat', 'assertValidSFFloat', 'isValidMFFloat', 'assertValidMFFloat', 'isValidSFImage', 'assertValidSFImage', 'isValidMFImage', 'assertValidMFImage', 'isValidSFInt32', 'assertValidSFInt32', 'isValidMFInt32', 'assertValidMFInt32', 'isValidSFMatrix3d', 'assertValidSFMatrix3d', 'isValidMFMatrix3d', 'assertValidMFMatrix3d', 'isValidSFMatrix3f', 'assertValidSFMatrix3f', 'isValidMFMatrix3f', 'assertValidMFMatrix3f', 'isValidSFMatrix4d', 'assertValidSFMatrix4d', 'isValidMFMatrix4d', 'assertValidMFMatrix4d', 'isValidSFMatrix4f', 'assertValidSFMatrix4f', 'isValidMFMatrix4f', 'assertValidMFMatrix4f', 'isValidSFNode', 'assertValidSFNode', 'isValidMFNode', 'assertValidMFNode', 'isValidSFRotation', 'assertValidSFRotation', 'isValidMFRotation', 'assertValidMFRotation', 'isValidSFString', 'assertValidSFString', 'isValidMFString', 'assertValidMFString', 'isValidSFTime', 'assertValidSFTime', 'isValidMFTime', 'assertValidMFTime', 'isValidSFVec2d', 'assertValidSFVec2d', 'isValidMFVec2d', 'assertValidMFVec2d', 'isValidSFVec2f', 'assertValidSFVec2f', 'isValidMFVec2f', 'assertValidMFVec2f', 'isValidSFVec3d', 'assertValidSFVec3d', 'isValidMFVec3d', 'assertValidMFVec3d', 'isValidSFVec3f', 'assertValidSFVec3f', 'isValidMFVec3f', 'assertValidMFVec3f', 'isValidSFVec4d', 'assertValidSFVec4d', 'isValidMFVec4d', 'assertValidMFVec4d', 'isValidSFVec4f', 'assertValidSFVec4f', 'isValidMFVec4f', 'assertValidMFVec4f', 
    'fixBoolean', 'isPositive', 'assertPositive', 'isNonNegative', 'assertNonNegative', 'isZeroToOne', 'assertZeroToOne', 'isLessThanEquals', 'assertLessThanEquals', 'isLessThan', 'assertLessThan', 'isGreaterThanEquals', 'assertGreaterThanEquals', 'isGreaterThan', 'assertGreaterThan', 'isBoundingBox', 'assertBoundingBox',
    'metaDiagnostics','prependLineNumbers','isX3DNode','isX3DField','isX3DStatement',

    # Utility classes
    'AccessType','FieldType','Comment',

    ]
                
# Zen of Python: Flat is better than nested.
# https://en.wikipedia.org/wiki/Zen_of_Python

# Note insertion of period in following incantation for relative import, thanks Vince!
# https://docs.python.org/3/reference/import.html
# https://docs.python.org/3/reference/import.html#package-relative-imports
                
import re # regular expressions library, built in

#print('====================================', flush=True)
#print('PyPi x3d package __init__.py diagnostics', flush=True)
try:
    from x3d.x3d import *
#   print('*** __init__.py successful invocation: from x3d.x3d import *', flush=True)
except:
#   print('*** __init__.py invocation failure: from x3d.x3d import *', flush=True)
    try:
        from .x3d import *
    #   print('*** __init__.py successful invocation: from .x3d import *', flush=True)
    except:
    #   print('*** __init__.py invocation failure: from .x3d import *', flush=True)
        try:
            from x3d import *
        #   print('*** __init__.py successful invocation: from x3d import *', flush=True)
        except:
        #   print('*** __init__.py invocation failure: from x3d import *', flush=True)
            try:
                from src.x3d import *
            #   print('*** __init__.py successful invocation: from src.x3d import *', flush=True)
            except:
            #   print('*** __init__.py invocation failure: from src.x3d import *', flush=True)
                try:
                    from src.x3d.x3d import *
                #   print('*** __init__.py successful invocation: from src.x3d.x3d import *', flush=True)
                except:
                #   print('*** __init__.py invocation failure: from src.x3d.x3d import *', flush=True)
                    print('*** __init__.py invocation failure: unable to perform variations of "from x3d import *"', flush=True)

#print('====================================', flush=True)

