package net.coderextreme;

import java.util.HashSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.web3d.x3d.jsail.fields.MFNode;
import org.web3d.x3d.jsail.fields.SFNode;
import org.web3d.x3d.sai.Shape.X3DAppearanceChildNode;
import org.web3d.x3d.sai.Shape.X3DAppearanceNode;
import org.web3d.x3d.sai.X3DArrayField;
import org.web3d.x3d.sai.EnvironmentalEffects.X3DBackgroundNode;
import org.web3d.x3d.sai.Core.X3DBindableNode;
import org.web3d.x3d.sai.Followers.X3DChaserNode;
import org.web3d.x3d.sai.Core.X3DChildNode;
import org.web3d.x3d.sai.Rendering.X3DColorNode;
import org.web3d.x3d.sai.VolumeRendering.X3DComposableVolumeRenderStyleNode;
import org.web3d.x3d.sai.Rendering.X3DComposedGeometryNode;
import org.web3d.x3d.sai.Rendering.X3DCoordinateNode;
import org.web3d.x3d.sai.Followers.X3DDamperNode;
import org.web3d.x3d.sai.PointingDeviceSensor.X3DDragSensorNode;
import org.web3d.x3d.sai.EnvironmentalSensor.X3DEnvironmentalSensorNode;
import org.web3d.x3d.sai.CubeMapTexturing.X3DEnvironmentTextureNode;
import org.web3d.x3d.sai.X3DField;
import org.web3d.x3d.sai.Followers.X3DFollowerNode;
import org.web3d.x3d.sai.Text.X3DFontStyleNode;
import org.web3d.x3d.sai.Rendering.X3DGeometricPropertyNode;
import org.web3d.x3d.sai.Rendering.X3DGeometryNode;
import org.web3d.x3d.sai.Grouping.X3DGroupingNode;
import org.web3d.x3d.sai.Core.X3DInfoNode;
import org.web3d.x3d.sai.Interpolation.X3DInterpolatorNode;
import org.web3d.x3d.sai.KeyDeviceSensor.X3DKeyDeviceSensorNode;
import org.web3d.x3d.sai.Layering.X3DLayerNode;
import org.web3d.x3d.sai.Layout.X3DLayoutNode;
import org.web3d.x3d.sai.Lighting.X3DLightNode;
import org.web3d.x3d.sai.Shape.X3DMaterialNode;
import org.web3d.x3d.sai.RigidBodyPhysics.X3DNBodyCollidableNode;
import org.web3d.x3d.sai.RigidBodyPhysics.X3DNBodyCollisionSpaceNode;
import org.web3d.x3d.sai.Networking.X3DNetworkSensorNode;
import org.web3d.x3d.sai.Core.X3DNode;
import org.web3d.x3d.sai.Rendering.X3DNormalNode;
import org.web3d.x3d.sai.NURBS.X3DNurbsControlCurveNode;
import org.web3d.x3d.sai.NURBS.X3DNurbsSurfaceGeometryNode;
import org.web3d.x3d.sai.Shape.X3DOneSidedMaterialNode;
import org.web3d.x3d.sai.NURBS.X3DParametricGeometryNode;
import org.web3d.x3d.sai.ParticleSystems.X3DParticleEmitterNode;
import org.web3d.x3d.sai.ParticleSystems.X3DParticlePhysicsModelNode;
import org.web3d.x3d.sai.Picking.X3DPickSensorNode;
import org.web3d.x3d.sai.PointingDeviceSensor.X3DPointingDeviceSensorNode;
import org.web3d.x3d.sai.CADGeometry.X3DProductStructureChildNode;
import org.web3d.x3d.sai.Core.X3DPrototypeInstance;
import org.web3d.x3d.sai.RigidBodyPhysics.X3DRigidJointNode;
import org.web3d.x3d.sai.Scripting.X3DScriptNode;
import org.web3d.x3d.sai.Core.X3DSensorNode;
import org.web3d.x3d.sai.EventUtilities.X3DSequencerNode;
import org.web3d.x3d.sai.Shaders.X3DShaderNode;
import org.web3d.x3d.sai.Shape.X3DShapeNode;
import org.web3d.x3d.sai.Texturing.X3DSingleTextureCoordinateNode;
import org.web3d.x3d.sai.Texturing.X3DSingleTextureNode;
import org.web3d.x3d.sai.Texturing.X3DSingleTextureTransformNode;
import org.web3d.x3d.sai.Sound.X3DSoundChannelNode;
import org.web3d.x3d.sai.Sound.X3DSoundDestinationNode;
import org.web3d.x3d.sai.Sound.X3DSoundNode;
import org.web3d.x3d.sai.Sound.X3DSoundProcessingNode;
import org.web3d.x3d.sai.Sound.X3DSoundSourceNode;
import org.web3d.x3d.sai.Core.X3DStatement;
import org.web3d.x3d.sai.Texturing.X3DTexture2DNode;
import org.web3d.x3d.sai.Texturing3D.X3DTexture3DNode;
import org.web3d.x3d.sai.Texturing.X3DTextureCoordinateNode;
import org.web3d.x3d.sai.Texturing.X3DTextureNode;
import org.web3d.x3d.sai.TextureProjection.X3DTextureProjectorNode;
import org.web3d.x3d.sai.Texturing.X3DTextureTransformNode;
import org.web3d.x3d.sai.Time.X3DTimeDependentNode;
import org.web3d.x3d.sai.PointingDeviceSensor.X3DTouchSensorNode;
import org.web3d.x3d.sai.EventUtilities.X3DTriggerNode;
import org.web3d.x3d.sai.Shaders.X3DVertexAttributeNode;
import org.web3d.x3d.sai.Navigation.X3DViewpointNode;
import org.web3d.x3d.sai.Layering.X3DViewportNode;
import org.web3d.x3d.sai.VolumeRendering.X3DVolumeDataNode;
import org.web3d.x3d.sai.VolumeRendering.X3DVolumeRenderStyleNode;
import org.web3d.x3d.sai.Grouping.X3DBoundedObject;
import org.web3d.x3d.sai.EnvironmentalEffects.X3DFogObject;
import org.web3d.x3d.sai.Core.X3DMetadataObject;
import org.web3d.x3d.sai.Picking.X3DPickableObject;
import org.web3d.x3d.sai.Shaders.X3DProgrammableShaderObject;
import org.web3d.x3d.sai.Networking.X3DUrlObject;
import org.web3d.x3d.jsail.Shape.AcousticProperties;
import org.web3d.x3d.jsail.Sound.Analyser;
import org.web3d.x3d.jsail.Networking.Anchor;
import org.web3d.x3d.jsail.Shape.Appearance;
import org.web3d.x3d.jsail.Geometry2D.Arc2D;
import org.web3d.x3d.jsail.Geometry2D.ArcClose2D;
import org.web3d.x3d.jsail.Sound.AudioClip;
import org.web3d.x3d.jsail.Sound.AudioDestination;
import org.web3d.x3d.jsail.EnvironmentalEffects.Background;
import org.web3d.x3d.jsail.RigidBodyPhysics.BallJoint;
import org.web3d.x3d.jsail.Navigation.Billboard;
import org.web3d.x3d.jsail.Sound.BiquadFilter;
import org.web3d.x3d.jsail.VolumeRendering.BlendedVolumeStyle;
import org.web3d.x3d.jsail.EventUtilities.BooleanFilter;
import org.web3d.x3d.jsail.EventUtilities.BooleanSequencer;
import org.web3d.x3d.jsail.EventUtilities.BooleanToggle;
import org.web3d.x3d.jsail.EventUtilities.BooleanTrigger;
import org.web3d.x3d.jsail.VolumeRendering.BoundaryEnhancementVolumeStyle;
import org.web3d.x3d.jsail.ParticleSystems.BoundedPhysicsModel;
import org.web3d.x3d.jsail.Geometry3D.Box;
import org.web3d.x3d.jsail.Sound.BufferAudioSource;
import org.web3d.x3d.jsail.CADGeometry.CADAssembly;
import org.web3d.x3d.jsail.CADGeometry.CADFace;
import org.web3d.x3d.jsail.CADGeometry.CADLayer;
import org.web3d.x3d.jsail.CADGeometry.CADPart;
import org.web3d.x3d.jsail.VolumeRendering.CartoonVolumeStyle;
import org.web3d.x3d.jsail.Sound.ChannelMerger;
import org.web3d.x3d.jsail.Sound.ChannelSelector;
import org.web3d.x3d.jsail.Sound.ChannelSplitter;
import org.web3d.x3d.jsail.Geometry2D.Circle2D;
import org.web3d.x3d.jsail.Rendering.ClipPlane;
import org.web3d.x3d.jsail.RigidBodyPhysics.CollidableOffset;
import org.web3d.x3d.jsail.RigidBodyPhysics.CollidableShape;
import org.web3d.x3d.jsail.Navigation.Collision;
import org.web3d.x3d.jsail.RigidBodyPhysics.CollisionCollection;
import org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSensor;
import org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSpace;
import org.web3d.x3d.jsail.Rendering.Color;
import org.web3d.x3d.jsail.Followers.ColorChaser;
import org.web3d.x3d.jsail.Followers.ColorDamper;
import org.web3d.x3d.jsail.Interpolation.ColorInterpolator;
import org.web3d.x3d.jsail.Rendering.ColorRGBA;
import org.web3d.x3d.jsail.CubeMapTexturing.ComposedCubeMapTexture;
import org.web3d.x3d.jsail.Shaders.ComposedShader;
import org.web3d.x3d.jsail.Texturing3D.ComposedTexture3D;
import org.web3d.x3d.jsail.VolumeRendering.ComposedVolumeStyle;
import org.web3d.x3d.jsail.Geometry3D.Cone;
import org.web3d.x3d.jsail.ParticleSystems.ConeEmitter;
import org.web3d.x3d.jsail.RigidBodyPhysics.Contact;
import org.web3d.x3d.jsail.NURBS.Contour2D;
import org.web3d.x3d.jsail.NURBS.ContourPolyline2D;
import org.web3d.x3d.jsail.Sound.Convolver;
import org.web3d.x3d.jsail.Rendering.Coordinate;
import org.web3d.x3d.jsail.Followers.CoordinateChaser;
import org.web3d.x3d.jsail.Followers.CoordinateDamper;
import org.web3d.x3d.jsail.Rendering.CoordinateDouble;
import org.web3d.x3d.jsail.Interpolation.CoordinateInterpolator;
import org.web3d.x3d.jsail.Interpolation.CoordinateInterpolator2D;
import org.web3d.x3d.jsail.Geometry3D.Cylinder;
import org.web3d.x3d.jsail.PointingDeviceSensor.CylinderSensor;
import org.web3d.x3d.jsail.Sound.Delay;
import org.web3d.x3d.jsail.Lighting.DirectionalLight;
import org.web3d.x3d.jsail.DIS.DISEntityManager;
import org.web3d.x3d.jsail.DIS.DISEntityTypeMapping;
import org.web3d.x3d.jsail.Geometry2D.Disk2D;
import org.web3d.x3d.jsail.RigidBodyPhysics.DoubleAxisHingeJoint;
import org.web3d.x3d.jsail.Sound.DynamicsCompressor;
import org.web3d.x3d.jsail.Interpolation.EaseInEaseOut;
import org.web3d.x3d.jsail.VolumeRendering.EdgeEnhancementVolumeStyle;
import org.web3d.x3d.jsail.Geometry3D.ElevationGrid;
import org.web3d.x3d.jsail.DIS.EspduTransform;
import org.web3d.x3d.jsail.ParticleSystems.ExplosionEmitter;
import org.web3d.x3d.jsail.Geometry3D.Extrusion;
import org.web3d.x3d.jsail.Shape.FillProperties;
import org.web3d.x3d.jsail.Shaders.FloatVertexAttribute;
import org.web3d.x3d.jsail.EnvironmentalEffects.Fog;
import org.web3d.x3d.jsail.EnvironmentalEffects.FogCoordinate;
import org.web3d.x3d.jsail.Text.FontStyle;
import org.web3d.x3d.jsail.ParticleSystems.ForcePhysicsModel;
import org.web3d.x3d.jsail.Sound.Gain;
import org.web3d.x3d.jsail.CubeMapTexturing.GeneratedCubeMapTexture;
import org.web3d.x3d.jsail.Geospatial.GeoCoordinate;
import org.web3d.x3d.jsail.Geospatial.GeoElevationGrid;
import org.web3d.x3d.jsail.Geospatial.GeoLocation;
import org.web3d.x3d.jsail.Geospatial.GeoLOD;
import org.web3d.x3d.jsail.Geospatial.GeoMetadata;
import org.web3d.x3d.jsail.Geospatial.GeoOrigin;
import org.web3d.x3d.jsail.Geospatial.GeoPositionInterpolator;
import org.web3d.x3d.jsail.Geospatial.GeoProximitySensor;
import org.web3d.x3d.jsail.Geospatial.GeoTouchSensor;
import org.web3d.x3d.jsail.Geospatial.GeoTransform;
import org.web3d.x3d.jsail.Geospatial.GeoViewpoint;
import org.web3d.x3d.jsail.Grouping.Group;
import org.web3d.x3d.jsail.HAnim.HAnimDisplacer;
import org.web3d.x3d.jsail.HAnim.HAnimHumanoid;
import org.web3d.x3d.jsail.HAnim.HAnimJoint;
import org.web3d.x3d.jsail.HAnim.HAnimMotion;
import org.web3d.x3d.jsail.HAnim.HAnimSegment;
import org.web3d.x3d.jsail.HAnim.HAnimSite;
import org.web3d.x3d.jsail.CubeMapTexturing.ImageCubeMapTexture;
import org.web3d.x3d.jsail.Texturing.ImageTexture;
import org.web3d.x3d.jsail.Texturing3D.ImageTexture3D;
import org.web3d.x3d.jsail.Geometry3D.IndexedFaceSet;
import org.web3d.x3d.jsail.Rendering.IndexedLineSet;
import org.web3d.x3d.jsail.CADGeometry.IndexedQuadSet;
import org.web3d.x3d.jsail.Rendering.IndexedTriangleFanSet;
import org.web3d.x3d.jsail.Rendering.IndexedTriangleSet;
import org.web3d.x3d.jsail.Rendering.IndexedTriangleStripSet;
import org.web3d.x3d.jsail.Networking.Inline;
import org.web3d.x3d.jsail.EventUtilities.IntegerSequencer;
import org.web3d.x3d.jsail.EventUtilities.IntegerTrigger;
import org.web3d.x3d.jsail.VolumeRendering.IsoSurfaceVolumeData;
import org.web3d.x3d.jsail.KeyDeviceSensor.KeySensor;
import org.web3d.x3d.jsail.Layering.Layer;
import org.web3d.x3d.jsail.Layering.LayerSet;
import org.web3d.x3d.jsail.Layout.Layout;
import org.web3d.x3d.jsail.Layout.LayoutGroup;
import org.web3d.x3d.jsail.Layout.LayoutLayer;
import org.web3d.x3d.jsail.Picking.LinePickSensor;
import org.web3d.x3d.jsail.Shape.LineProperties;
import org.web3d.x3d.jsail.Rendering.LineSet;
import org.web3d.x3d.jsail.Sound.ListenerPointSource;
import org.web3d.x3d.jsail.Networking.LoadSensor;
import org.web3d.x3d.jsail.EnvironmentalEffects.LocalFog;
import org.web3d.x3d.jsail.Navigation.LOD;
import org.web3d.x3d.jsail.Shape.Material;
import org.web3d.x3d.jsail.Shaders.Matrix3VertexAttribute;
import org.web3d.x3d.jsail.Shaders.Matrix4VertexAttribute;
import org.web3d.x3d.jsail.Core.MetadataBoolean;
import org.web3d.x3d.jsail.Core.MetadataDouble;
import org.web3d.x3d.jsail.Core.MetadataFloat;
import org.web3d.x3d.jsail.Core.MetadataInteger;
import org.web3d.x3d.jsail.Core.MetadataSet;
import org.web3d.x3d.jsail.Core.MetadataString;
import org.web3d.x3d.jsail.Sound.MicrophoneSource;
import org.web3d.x3d.jsail.RigidBodyPhysics.MotorJoint;
import org.web3d.x3d.jsail.Texturing.MovieTexture;
import org.web3d.x3d.jsail.Texturing.MultiTexture;
import org.web3d.x3d.jsail.Texturing.MultiTextureCoordinate;
import org.web3d.x3d.jsail.Texturing.MultiTextureTransform;
import org.web3d.x3d.jsail.Navigation.NavigationInfo;
import org.web3d.x3d.jsail.Rendering.Normal;
import org.web3d.x3d.jsail.Interpolation.NormalInterpolator;
import org.web3d.x3d.jsail.NURBS.NurbsCurve;
import org.web3d.x3d.jsail.NURBS.NurbsCurve2D;
import org.web3d.x3d.jsail.NURBS.NurbsOrientationInterpolator;
import org.web3d.x3d.jsail.NURBS.NurbsPatchSurface;
import org.web3d.x3d.jsail.NURBS.NurbsPositionInterpolator;
import org.web3d.x3d.jsail.NURBS.NurbsSet;
import org.web3d.x3d.jsail.NURBS.NurbsSurfaceInterpolator;
import org.web3d.x3d.jsail.NURBS.NurbsSweptSurface;
import org.web3d.x3d.jsail.NURBS.NurbsSwungSurface;
import org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinate;
import org.web3d.x3d.jsail.NURBS.NurbsTrimmedSurface;
import org.web3d.x3d.jsail.VolumeRendering.OpacityMapVolumeStyle;
import org.web3d.x3d.jsail.Followers.OrientationChaser;
import org.web3d.x3d.jsail.Followers.OrientationDamper;
import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;
import org.web3d.x3d.jsail.Navigation.OrthoViewpoint;
import org.web3d.x3d.jsail.Sound.OscillatorSource;
import org.web3d.x3d.jsail.Shaders.PackagedShader;
import org.web3d.x3d.jsail.ParticleSystems.ParticleSystem;
import org.web3d.x3d.jsail.Sound.PeriodicWave;
import org.web3d.x3d.jsail.Shape.PhysicalMaterial;
import org.web3d.x3d.jsail.Picking.PickableGroup;
import org.web3d.x3d.jsail.Texturing.PixelTexture;
import org.web3d.x3d.jsail.Texturing3D.PixelTexture3D;
import org.web3d.x3d.jsail.PointingDeviceSensor.PlaneSensor;
import org.web3d.x3d.jsail.ParticleSystems.PointEmitter;
import org.web3d.x3d.jsail.Lighting.PointLight;
import org.web3d.x3d.jsail.Picking.PointPickSensor;
import org.web3d.x3d.jsail.Shape.PointProperties;
import org.web3d.x3d.jsail.Rendering.PointSet;
import org.web3d.x3d.jsail.Geometry2D.Polyline2D;
import org.web3d.x3d.jsail.ParticleSystems.PolylineEmitter;
import org.web3d.x3d.jsail.Geometry2D.Polypoint2D;
import org.web3d.x3d.jsail.Followers.PositionChaser;
import org.web3d.x3d.jsail.Followers.PositionChaser2D;
import org.web3d.x3d.jsail.Followers.PositionDamper;
import org.web3d.x3d.jsail.Followers.PositionDamper2D;
import org.web3d.x3d.jsail.Interpolation.PositionInterpolator;
import org.web3d.x3d.jsail.Interpolation.PositionInterpolator2D;
import org.web3d.x3d.jsail.Picking.PrimitivePickSensor;
import org.web3d.x3d.jsail.Shaders.ProgramShader;
import org.web3d.x3d.jsail.VolumeRendering.ProjectionVolumeStyle;
import org.web3d.x3d.jsail.Core.ProtoInstance;
import org.web3d.x3d.jsail.EnvironmentalSensor.ProximitySensor;
import org.web3d.x3d.jsail.CADGeometry.QuadSet;
import org.web3d.x3d.jsail.DIS.ReceiverPdu;
import org.web3d.x3d.jsail.Geometry2D.Rectangle2D;
import org.web3d.x3d.jsail.RigidBodyPhysics.RigidBody;
import org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyCollection;
import org.web3d.x3d.jsail.Followers.ScalarChaser;
import org.web3d.x3d.jsail.Followers.ScalarDamper;
import org.web3d.x3d.jsail.Interpolation.ScalarInterpolator;
import org.web3d.x3d.jsail.Layout.ScreenFontStyle;
import org.web3d.x3d.jsail.Layout.ScreenGroup;
import org.web3d.x3d.jsail.Scripting.Script;
import org.web3d.x3d.jsail.VolumeRendering.SegmentedVolumeData;
import org.web3d.x3d.jsail.VolumeRendering.ShadedVolumeStyle;
import org.web3d.x3d.jsail.Shaders.ShaderPart;
import org.web3d.x3d.jsail.Shaders.ShaderProgram;
import org.web3d.x3d.jsail.Shape.Shape;
import org.web3d.x3d.jsail.DIS.SignalPdu;
import org.web3d.x3d.jsail.VolumeRendering.SilhouetteEnhancementVolumeStyle;
import org.web3d.x3d.jsail.RigidBodyPhysics.SingleAxisHingeJoint;
import org.web3d.x3d.jsail.RigidBodyPhysics.SliderJoint;
import org.web3d.x3d.jsail.Sound.Sound;
import org.web3d.x3d.jsail.Sound.SpatialSound;
import org.web3d.x3d.jsail.Geometry3D.Sphere;
import org.web3d.x3d.jsail.PointingDeviceSensor.SphereSensor;
import org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator;
import org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator2D;
import org.web3d.x3d.jsail.Interpolation.SplineScalarInterpolator;
import org.web3d.x3d.jsail.Lighting.SpotLight;
import org.web3d.x3d.jsail.Interpolation.SquadOrientationInterpolator;
import org.web3d.x3d.jsail.Grouping.StaticGroup;
import org.web3d.x3d.jsail.Sound.StreamAudioDestination;
import org.web3d.x3d.jsail.Sound.StreamAudioSource;
import org.web3d.x3d.jsail.KeyDeviceSensor.StringSensor;
import org.web3d.x3d.jsail.ParticleSystems.SurfaceEmitter;
import org.web3d.x3d.jsail.Grouping.Switch;
import org.web3d.x3d.jsail.Followers.TexCoordChaser2D;
import org.web3d.x3d.jsail.Followers.TexCoordDamper2D;
import org.web3d.x3d.jsail.Text.Text;
import org.web3d.x3d.jsail.EnvironmentalEffects.TextureBackground;
import org.web3d.x3d.jsail.Texturing.TextureCoordinate;
import org.web3d.x3d.jsail.Texturing3D.TextureCoordinate3D;
import org.web3d.x3d.jsail.Texturing3D.TextureCoordinate4D;
import org.web3d.x3d.jsail.Texturing.TextureCoordinateGenerator;
import org.web3d.x3d.jsail.TextureProjection.TextureProjector;
import org.web3d.x3d.jsail.TextureProjection.TextureProjectorParallel;
import org.web3d.x3d.jsail.Texturing.TextureProperties;
import org.web3d.x3d.jsail.Texturing.TextureTransform;
import org.web3d.x3d.jsail.Texturing3D.TextureTransform3D;
import org.web3d.x3d.jsail.Texturing3D.TextureTransformMatrix3D;
import org.web3d.x3d.jsail.Time.TimeSensor;
import org.web3d.x3d.jsail.EventUtilities.TimeTrigger;
import org.web3d.x3d.jsail.VolumeRendering.ToneMappedVolumeStyle;
import org.web3d.x3d.jsail.PointingDeviceSensor.TouchSensor;
import org.web3d.x3d.jsail.Grouping.Transform;
import org.web3d.x3d.jsail.EnvironmentalSensor.TransformSensor;
import org.web3d.x3d.jsail.DIS.TransmitterPdu;
import org.web3d.x3d.jsail.Rendering.TriangleFanSet;
import org.web3d.x3d.jsail.Rendering.TriangleSet;
import org.web3d.x3d.jsail.Geometry2D.TriangleSet2D;
import org.web3d.x3d.jsail.Rendering.TriangleStripSet;
import org.web3d.x3d.jsail.Shape.TwoSidedMaterial;
import org.web3d.x3d.jsail.RigidBodyPhysics.UniversalJoint;
import org.web3d.x3d.jsail.Shape.UnlitMaterial;
import org.web3d.x3d.jsail.ParticleSystems.VariationPhysicsModel;
import org.web3d.x3d.jsail.Navigation.Viewpoint;
import org.web3d.x3d.jsail.Navigation.ViewpointGroup;
import org.web3d.x3d.jsail.Layering.Viewport;
import org.web3d.x3d.jsail.EnvironmentalSensor.VisibilitySensor;
import org.web3d.x3d.jsail.VolumeRendering.VolumeData;
import org.web3d.x3d.jsail.ParticleSystems.VolumeEmitter;
import org.web3d.x3d.jsail.Picking.VolumePickSensor;
import org.web3d.x3d.jsail.Sound.WaveShaper;
import org.web3d.x3d.jsail.ParticleSystems.WindPhysicsModel;
import org.web3d.x3d.jsail.Core.WorldInfo;
import org.web3d.x3d.jsail.Core.component;
import org.web3d.x3d.jsail.Core.connect;
import org.web3d.x3d.jsail.Networking.EXPORT;
import org.web3d.x3d.jsail.Core.ExternProtoDeclare;
import org.web3d.x3d.jsail.Core.field;
import org.web3d.x3d.jsail.Core.fieldValue;
import org.web3d.x3d.jsail.Core.head;
import org.web3d.x3d.jsail.Networking.IMPORT;
import org.web3d.x3d.jsail.Core.IS;
import org.web3d.x3d.jsail.Core.meta;
import org.web3d.x3d.jsail.Core.ProtoBody;
import org.web3d.x3d.jsail.Core.ProtoDeclare;
import org.web3d.x3d.jsail.Core.ProtoInterface;
import org.web3d.x3d.jsail.Core.ROUTE;
import org.web3d.x3d.jsail.Core.Scene;
import org.web3d.x3d.jsail.Core.unit;
import org.web3d.x3d.jsail.Core.X3D;
public class NewNurbsCurve extends org.web3d.x3d.jsail.NURBS.NurbsCurve {
	public void removeAll(HashSet toRemove) {
	}
}
