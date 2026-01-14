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

public class Remove {
public ArrayList removeChildren(ArrayList children, HashSet toRemove) {
	if (children != null) {
		for (int ci = 0; ci < children.size(); ci++) {
			removeChild(children.get(ci), toRemove);
		}
	}
	return children;
}
public X3DNode[] removeChildren(X3DNode[] children, HashSet toRemove) {
	if (children != null) {
		for (int ci = 0; ci < children.length; ci++) {
			removeChild(children[ci], toRemove);
		}
	}
	return children;
}
public void removeChild(Object child, HashSet toRemove) {
switch (child) {
case NewAcousticProperties obj -> {
}
case NewAnalyser obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewAnchor obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewAppearance obj -> {
	{
		X3DNode[] children = obj.getShaders();
		X3DNode[] leftOverShaders = this.removeChildren(children, toRemove);
		obj.setShaders(leftOverShaders);
		X3DNode[] leftOver = obj.removeSelectedShaders(leftOverShaders, toRemove);
		obj.setShaders(leftOver);
	}
}
case NewArc2D obj -> {
}
case NewArcClose2D obj -> {
}
case NewAudioClip obj -> {
}
case NewAudioDestination obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewBackground obj -> {
}
case NewBallJoint obj -> {
}
case NewBillboard obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewBiquadFilter obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewBlendedVolumeStyle obj -> {
}
case NewBooleanFilter obj -> {
}
case NewBooleanSequencer obj -> {
}
case NewBooleanToggle obj -> {
}
case NewBooleanTrigger obj -> {
}
case NewBoundaryEnhancementVolumeStyle obj -> {
}
case NewBoundedPhysicsModel obj -> {
}
case NewBox obj -> {
}
case NewBufferAudioSource obj -> {
}
case NewCADAssembly obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewCADFace obj -> {
}
case NewCADLayer obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewCADPart obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewCartoonVolumeStyle obj -> {
}
case NewChannelMerger obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewChannelSelector obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewChannelSplitter obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
	{
		X3DNode[] children = obj.getOutputs();
		X3DNode[] leftOverOutputs = this.removeChildren(children, toRemove);
		obj.setOutputs(leftOverOutputs);
		X3DNode[] leftOver = obj.removeSelectedOutputs(leftOverOutputs, toRemove);
		obj.setOutputs(leftOver);
	}
}
case NewCircle2D obj -> {
}
case NewClipPlane obj -> {
}
case NewCollidableOffset obj -> {
}
case NewCollidableShape obj -> {
}
case NewCollision obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewCollisionCollection obj -> {
	{
		X3DNode[] children = obj.getCollidables();
		X3DNode[] leftOverCollidables = this.removeChildren(children, toRemove);
		obj.setCollidables(leftOverCollidables);
		X3DNode[] leftOver = obj.removeSelectedCollidables(leftOverCollidables, toRemove);
		obj.setCollidables(leftOver);
	}
}
case NewCollisionSensor obj -> {
	{
		X3DNode[] children = obj.getContacts();
	}
	{
		X3DNode[] children = obj.getIntersections();
	}
}
case NewCollisionSpace obj -> {
	{
		X3DNode[] children = obj.getCollidables();
		X3DNode[] leftOverCollidables = this.removeChildren(children, toRemove);
		obj.setCollidables(leftOverCollidables);
		X3DNode[] leftOver = obj.removeSelectedCollidables(leftOverCollidables, toRemove);
		obj.setCollidables(leftOver);
	}
}
case NewColor obj -> {
}
case NewColorChaser obj -> {
}
case NewColorDamper obj -> {
}
case NewColorInterpolator obj -> {
}
case NewColorRGBA obj -> {
}
case NewComposedCubeMapTexture obj -> {
}
case NewComposedShader obj -> {
	{
		ArrayList<field> children = obj.getFieldList();
		ArrayList<field> leftOverFieldList = this.removeChildren(children, toRemove);
		obj.setFieldList(leftOverFieldList);
		ArrayList<field> leftOver = obj.removeSelectedFieldList(leftOverFieldList, toRemove);
		obj.setFieldList(leftOver);
	}
	{
		X3DNode[] children = obj.getParts();
		X3DNode[] leftOverParts = this.removeChildren(children, toRemove);
		obj.setParts(leftOverParts);
		X3DNode[] leftOver = obj.removeSelectedParts(leftOverParts, toRemove);
		obj.setParts(leftOver);
	}
}
case NewComposedTexture3D obj -> {
	{
		X3DNode[] children = obj.getTexture();
		X3DNode[] leftOverTexture = this.removeChildren(children, toRemove);
		obj.setTexture(leftOverTexture);
		X3DNode[] leftOver = obj.removeSelectedTexture(leftOverTexture, toRemove);
		obj.setTexture(leftOver);
	}
}
case NewComposedVolumeStyle obj -> {
	{
		X3DNode[] children = obj.getRenderStyle();
		X3DNode[] leftOverRenderStyle = this.removeChildren(children, toRemove);
		obj.setRenderStyle(leftOverRenderStyle);
		X3DNode[] leftOver = obj.removeSelectedRenderStyle(leftOverRenderStyle, toRemove);
		obj.setRenderStyle(leftOver);
	}
}
case NewCone obj -> {
}
case NewConeEmitter obj -> {
}
case NewContact obj -> {
}
case NewContour2D obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewContourPolyline2D obj -> {
}
case NewConvolver obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewCoordinate obj -> {
}
case NewCoordinateChaser obj -> {
}
case NewCoordinateDamper obj -> {
}
case NewCoordinateDouble obj -> {
}
case NewCoordinateInterpolator obj -> {
}
case NewCoordinateInterpolator2D obj -> {
}
case NewCylinder obj -> {
}
case NewCylinderSensor obj -> {
}
case NewDelay obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewDirectionalLight obj -> {
}
case NewDISEntityManager obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewDISEntityTypeMapping obj -> {
}
case NewDisk2D obj -> {
}
case NewDoubleAxisHingeJoint obj -> {
}
case NewDynamicsCompressor obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewEaseInEaseOut obj -> {
}
case NewEdgeEnhancementVolumeStyle obj -> {
}
case NewElevationGrid obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewEspduTransform obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewExplosionEmitter obj -> {
}
case NewExtrusion obj -> {
}
case NewFillProperties obj -> {
}
case NewFloatVertexAttribute obj -> {
}
case NewFog obj -> {
}
case NewFogCoordinate obj -> {
}
case NewFontStyle obj -> {
}
case NewForcePhysicsModel obj -> {
}
case NewGain obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewGeneratedCubeMapTexture obj -> {
}
case NewGeoCoordinate obj -> {
}
case NewGeoElevationGrid obj -> {
}
case NewGeoLocation obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewGeoLOD obj -> {
	{
		X3DNode[] children = obj.getChildren();
	}
	{
		X3DNode[] children = obj.getRootNode();
		X3DNode[] leftOverRootNode = this.removeChildren(children, toRemove);
		obj.setRootNode(leftOverRootNode);
		X3DNode[] leftOver = obj.removeSelectedRootNode(leftOverRootNode, toRemove);
		obj.setRootNode(leftOver);
	}
}
case NewGeoMetadata obj -> {
	{
		X3DNode[] children = obj.getData();
		X3DNode[] leftOverData = this.removeChildren(children, toRemove);
		obj.setData(leftOverData);
		X3DNode[] leftOver = obj.removeSelectedData(leftOverData, toRemove);
		obj.setData(leftOver);
	}
}
case NewGeoOrigin obj -> {
}
case NewGeoPositionInterpolator obj -> {
}
case NewGeoProximitySensor obj -> {
}
case NewGeoTouchSensor obj -> {
}
case NewGeoTransform obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewGeoViewpoint obj -> {
}
case NewGroup obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewHAnimDisplacer obj -> {
}
case NewHAnimHumanoid obj -> {
	{
		X3DNode[] children = obj.getJoints();
		X3DNode[] leftOverJoints = this.removeChildren(children, toRemove);
		obj.setJoints(leftOverJoints);
		X3DNode[] leftOver = obj.removeSelectedJoints(leftOverJoints, toRemove);
		obj.setJoints(leftOver);
	}
	{
		X3DNode[] children = obj.getMotions();
		X3DNode[] leftOverMotions = this.removeChildren(children, toRemove);
		obj.setMotions(leftOverMotions);
		X3DNode[] leftOver = obj.removeSelectedMotions(leftOverMotions, toRemove);
		obj.setMotions(leftOver);
	}
	{
		X3DNode[] children = obj.getSegments();
		X3DNode[] leftOverSegments = this.removeChildren(children, toRemove);
		obj.setSegments(leftOverSegments);
		X3DNode[] leftOver = obj.removeSelectedSegments(leftOverSegments, toRemove);
		obj.setSegments(leftOver);
	}
	{
		X3DNode[] children = obj.getSites();
		X3DNode[] leftOverSites = this.removeChildren(children, toRemove);
		obj.setSites(leftOverSites);
		X3DNode[] leftOver = obj.removeSelectedSites(leftOverSites, toRemove);
		obj.setSites(leftOver);
	}
	{
		X3DNode[] children = obj.getSkeleton();
		X3DNode[] leftOverSkeleton = this.removeChildren(children, toRemove);
		obj.setSkeleton(leftOverSkeleton);
		X3DNode[] leftOver = obj.removeSelectedSkeleton(leftOverSkeleton, toRemove);
		obj.setSkeleton(leftOver);
	}
	{
		X3DNode[] children = obj.getSkin();
		X3DNode[] leftOverSkin = this.removeChildren(children, toRemove);
		obj.setSkin(leftOverSkin);
		X3DNode[] leftOver = obj.removeSelectedSkin(leftOverSkin, toRemove);
		obj.setSkin(leftOver);
	}
	{
		X3DNode[] children = obj.getViewpoints();
		X3DNode[] leftOverViewpoints = this.removeChildren(children, toRemove);
		obj.setViewpoints(leftOverViewpoints);
		X3DNode[] leftOver = obj.removeSelectedViewpoints(leftOverViewpoints, toRemove);
		obj.setViewpoints(leftOver);
	}
}
case NewHAnimJoint obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
	{
		X3DNode[] children = obj.getDisplacers();
		X3DNode[] leftOverDisplacers = this.removeChildren(children, toRemove);
		obj.setDisplacers(leftOverDisplacers);
		X3DNode[] leftOver = obj.removeSelectedDisplacers(leftOverDisplacers, toRemove);
		obj.setDisplacers(leftOver);
	}
}
case NewHAnimMotion obj -> {
}
case NewHAnimSegment obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
	{
		X3DNode[] children = obj.getDisplacers();
		X3DNode[] leftOverDisplacers = this.removeChildren(children, toRemove);
		obj.setDisplacers(leftOverDisplacers);
		X3DNode[] leftOver = obj.removeSelectedDisplacers(leftOverDisplacers, toRemove);
		obj.setDisplacers(leftOver);
	}
}
case NewHAnimSite obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewImageCubeMapTexture obj -> {
}
case NewImageTexture obj -> {
}
case NewImageTexture3D obj -> {
}
case NewIndexedFaceSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewIndexedLineSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewIndexedQuadSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewIndexedTriangleFanSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewIndexedTriangleSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewIndexedTriangleStripSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewInline obj -> {
}
case NewIntegerSequencer obj -> {
}
case NewIntegerTrigger obj -> {
}
case NewIsoSurfaceVolumeData obj -> {
	{
		X3DNode[] children = obj.getRenderStyle();
		X3DNode[] leftOverRenderStyle = this.removeChildren(children, toRemove);
		obj.setRenderStyle(leftOverRenderStyle);
		X3DNode[] leftOver = obj.removeSelectedRenderStyle(leftOverRenderStyle, toRemove);
		obj.setRenderStyle(leftOver);
	}
}
case NewKeySensor obj -> {
}
case NewLayer obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewLayerSet obj -> {
	{
		X3DNode[] children = obj.getLayers();
		X3DNode[] leftOverLayers = this.removeChildren(children, toRemove);
		obj.setLayers(leftOverLayers);
		X3DNode[] leftOver = obj.removeSelectedLayers(leftOverLayers, toRemove);
		obj.setLayers(leftOver);
	}
}
case NewLayout obj -> {
}
case NewLayoutGroup obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewLayoutLayer obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewLinePickSensor obj -> {
	{
		X3DNode[] children = obj.getPickedGeometry();
	}
	{
		X3DNode[] children = obj.getPickTarget();
		X3DNode[] leftOverPickTarget = this.removeChildren(children, toRemove);
		obj.setPickTarget(leftOverPickTarget);
		X3DNode[] leftOver = obj.removeSelectedPickTarget(leftOverPickTarget, toRemove);
		obj.setPickTarget(leftOver);
	}
}
case NewLineProperties obj -> {
}
case NewLineSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewListenerPointSource obj -> {
}
case NewLoadSensor obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewLocalFog obj -> {
}
case NewLOD obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewMaterial obj -> {
}
case NewMatrix3VertexAttribute obj -> {
}
case NewMatrix4VertexAttribute obj -> {
}
case NewMetadataBoolean obj -> {
}
case NewMetadataDouble obj -> {
}
case NewMetadataFloat obj -> {
}
case NewMetadataInteger obj -> {
}
case NewMetadataSet obj -> {
	{
		X3DNode[] children = obj.getValue();
		X3DNode[] leftOverValue = this.removeChildren(children, toRemove);
		obj.setValue(leftOverValue);
		X3DNode[] leftOver = obj.removeSelectedValue(leftOverValue, toRemove);
		obj.setValue(leftOver);
	}
}
case NewMetadataString obj -> {
}
case NewMicrophoneSource obj -> {
}
case NewMotorJoint obj -> {
}
case NewMovieTexture obj -> {
}
case NewMultiTexture obj -> {
	{
		X3DNode[] children = obj.getTexture();
		X3DNode[] leftOverTexture = this.removeChildren(children, toRemove);
		obj.setTexture(leftOverTexture);
		X3DNode[] leftOver = obj.removeSelectedTexture(leftOverTexture, toRemove);
		obj.setTexture(leftOver);
	}
}
case NewMultiTextureCoordinate obj -> {
	{
		X3DNode[] children = obj.getTexCoord();
		X3DNode[] leftOverTexCoord = this.removeChildren(children, toRemove);
		obj.setTexCoord(leftOverTexCoord);
		X3DNode[] leftOver = obj.removeSelectedTexCoord(leftOverTexCoord, toRemove);
		obj.setTexCoord(leftOver);
	}
}
case NewMultiTextureTransform obj -> {
	{
		X3DNode[] children = obj.getTextureTransform();
		X3DNode[] leftOverTextureTransform = this.removeChildren(children, toRemove);
		obj.setTextureTransform(leftOverTextureTransform);
		X3DNode[] leftOver = obj.removeSelectedTextureTransform(leftOverTextureTransform, toRemove);
		obj.setTextureTransform(leftOver);
	}
}
case NewNavigationInfo obj -> {
}
case NewNormal obj -> {
}
case NewNormalInterpolator obj -> {
}
case NewNurbsCurve obj -> {
}
case NewNurbsCurve2D obj -> {
}
case NewNurbsOrientationInterpolator obj -> {
}
case NewNurbsPatchSurface obj -> {
}
case NewNurbsPositionInterpolator obj -> {
}
case NewNurbsSet obj -> {
	{
		X3DNode[] children = obj.getGeometry();
		X3DNode[] leftOverGeometry = this.removeChildren(children, toRemove);
		obj.setGeometry(leftOverGeometry);
		X3DNode[] leftOver = obj.removeSelectedGeometry(leftOverGeometry, toRemove);
		obj.setGeometry(leftOver);
	}
}
case NewNurbsSurfaceInterpolator obj -> {
}
case NewNurbsSweptSurface obj -> {
}
case NewNurbsSwungSurface obj -> {
}
case NewNurbsTextureCoordinate obj -> {
}
case NewNurbsTrimmedSurface obj -> {
	{
		X3DNode[] children = obj.getTrimmingContour();
		X3DNode[] leftOverTrimmingContour = this.removeChildren(children, toRemove);
		obj.setTrimmingContour(leftOverTrimmingContour);
		X3DNode[] leftOver = obj.removeSelectedTrimmingContour(leftOverTrimmingContour, toRemove);
		obj.setTrimmingContour(leftOver);
	}
}
case NewOpacityMapVolumeStyle obj -> {
}
case NewOrientationChaser obj -> {
}
case NewOrientationDamper obj -> {
}
case NewOrientationInterpolator obj -> {
}
case NewOrthoViewpoint obj -> {
}
case NewOscillatorSource obj -> {
}
case NewPackagedShader obj -> {
	{
		ArrayList<field> children = obj.getFieldList();
		ArrayList<field> leftOverFieldList = this.removeChildren(children, toRemove);
		obj.setFieldList(leftOverFieldList);
		ArrayList<field> leftOver = obj.removeSelectedFieldList(leftOverFieldList, toRemove);
		obj.setFieldList(leftOver);
	}
}
case NewParticleSystem obj -> {
	{
		X3DNode[] children = obj.getPhysics();
		X3DNode[] leftOverPhysics = this.removeChildren(children, toRemove);
		obj.setPhysics(leftOverPhysics);
		X3DNode[] leftOver = obj.removeSelectedPhysics(leftOverPhysics, toRemove);
		obj.setPhysics(leftOver);
	}
}
case NewPeriodicWave obj -> {
}
case NewPhysicalMaterial obj -> {
}
case NewPickableGroup obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewPixelTexture obj -> {
}
case NewPixelTexture3D obj -> {
}
case NewPlaneSensor obj -> {
}
case NewPointEmitter obj -> {
}
case NewPointLight obj -> {
}
case NewPointPickSensor obj -> {
	{
		X3DNode[] children = obj.getPickedGeometry();
	}
	{
		X3DNode[] children = obj.getPickTarget();
		X3DNode[] leftOverPickTarget = this.removeChildren(children, toRemove);
		obj.setPickTarget(leftOverPickTarget);
		X3DNode[] leftOver = obj.removeSelectedPickTarget(leftOverPickTarget, toRemove);
		obj.setPickTarget(leftOver);
	}
}
case NewPointProperties obj -> {
}
case NewPointSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewPolyline2D obj -> {
}
case NewPolylineEmitter obj -> {
}
case NewPolypoint2D obj -> {
}
case NewPositionChaser obj -> {
}
case NewPositionChaser2D obj -> {
}
case NewPositionDamper obj -> {
}
case NewPositionDamper2D obj -> {
}
case NewPositionInterpolator obj -> {
}
case NewPositionInterpolator2D obj -> {
}
case NewPrimitivePickSensor obj -> {
	{
		X3DNode[] children = obj.getPickedGeometry();
	}
	{
		X3DNode[] children = obj.getPickTarget();
		X3DNode[] leftOverPickTarget = this.removeChildren(children, toRemove);
		obj.setPickTarget(leftOverPickTarget);
		X3DNode[] leftOver = obj.removeSelectedPickTarget(leftOverPickTarget, toRemove);
		obj.setPickTarget(leftOver);
	}
}
case NewProgramShader obj -> {
	{
		X3DNode[] children = obj.getPrograms();
		X3DNode[] leftOverPrograms = this.removeChildren(children, toRemove);
		obj.setPrograms(leftOverPrograms);
		X3DNode[] leftOver = obj.removeSelectedPrograms(leftOverPrograms, toRemove);
		obj.setPrograms(leftOver);
	}
}
case NewProjectionVolumeStyle obj -> {
}
case NewProtoInstance obj -> {
	{
		ArrayList<fieldValue> children = obj.getFieldValueList();
		ArrayList<fieldValue> leftOverFieldValueList = this.removeChildren(children, toRemove);
		obj.setFieldValueList(leftOverFieldValueList);
		ArrayList<fieldValue> leftOver = obj.removeSelectedFieldValueList(leftOverFieldValueList, toRemove);
		obj.setFieldValueList(leftOver);
	}
}
case NewProximitySensor obj -> {
}
case NewQuadSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewReceiverPdu obj -> {
}
case NewRectangle2D obj -> {
}
case NewRigidBody obj -> {
	{
		X3DNode[] children = obj.getGeometry();
		X3DNode[] leftOverGeometry = this.removeChildren(children, toRemove);
		obj.setGeometry(leftOverGeometry);
		X3DNode[] leftOver = obj.removeSelectedGeometry(leftOverGeometry, toRemove);
		obj.setGeometry(leftOver);
	}
}
case NewRigidBodyCollection obj -> {
	{
		X3DNode[] children = obj.getBodies();
		X3DNode[] leftOverBodies = this.removeChildren(children, toRemove);
		obj.setBodies(leftOverBodies);
		X3DNode[] leftOver = obj.removeSelectedBodies(leftOverBodies, toRemove);
		obj.setBodies(leftOver);
	}
	{
		X3DNode[] children = obj.getJoints();
		X3DNode[] leftOverJoints = this.removeChildren(children, toRemove);
		obj.setJoints(leftOverJoints);
		X3DNode[] leftOver = obj.removeSelectedJoints(leftOverJoints, toRemove);
		obj.setJoints(leftOver);
	}
}
case NewScalarChaser obj -> {
}
case NewScalarDamper obj -> {
}
case NewScalarInterpolator obj -> {
}
case NewScreenFontStyle obj -> {
}
case NewScreenGroup obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewScript obj -> {
	{
		ArrayList<field> children = obj.getFieldList();
		ArrayList<field> leftOverFieldList = this.removeChildren(children, toRemove);
		obj.setFieldList(leftOverFieldList);
		ArrayList<field> leftOver = obj.removeSelectedFieldList(leftOverFieldList, toRemove);
		obj.setFieldList(leftOver);
	}
}
case NewSegmentedVolumeData obj -> {
	{
		X3DNode[] children = obj.getRenderStyle();
		X3DNode[] leftOverRenderStyle = this.removeChildren(children, toRemove);
		obj.setRenderStyle(leftOverRenderStyle);
		X3DNode[] leftOver = obj.removeSelectedRenderStyle(leftOverRenderStyle, toRemove);
		obj.setRenderStyle(leftOver);
	}
}
case NewShadedVolumeStyle obj -> {
}
case NewShaderPart obj -> {
}
case NewShaderProgram obj -> {
	{
		ArrayList<field> children = obj.getFieldList();
		ArrayList<field> leftOverFieldList = this.removeChildren(children, toRemove);
		obj.setFieldList(leftOverFieldList);
		ArrayList<field> leftOver = obj.removeSelectedFieldList(leftOverFieldList, toRemove);
		obj.setFieldList(leftOver);
	}
}
case NewShape obj -> {
}
case NewSignalPdu obj -> {
}
case NewSilhouetteEnhancementVolumeStyle obj -> {
}
case NewSingleAxisHingeJoint obj -> {
}
case NewSliderJoint obj -> {
}
case NewSound obj -> {
}
case NewSpatialSound obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewSphere obj -> {
}
case NewSphereSensor obj -> {
}
case NewSplinePositionInterpolator obj -> {
}
case NewSplinePositionInterpolator2D obj -> {
}
case NewSplineScalarInterpolator obj -> {
}
case NewSpotLight obj -> {
}
case NewSquadOrientationInterpolator obj -> {
}
case NewStaticGroup obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewStreamAudioDestination obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewStreamAudioSource obj -> {
}
case NewStringSensor obj -> {
}
case NewSurfaceEmitter obj -> {
}
case NewSwitch obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewTexCoordChaser2D obj -> {
}
case NewTexCoordDamper2D obj -> {
}
case NewText obj -> {
}
case NewTextureBackground obj -> {
}
case NewTextureCoordinate obj -> {
}
case NewTextureCoordinate3D obj -> {
}
case NewTextureCoordinate4D obj -> {
}
case NewTextureCoordinateGenerator obj -> {
}
case NewTextureProjector obj -> {
}
case NewTextureProjectorParallel obj -> {
}
case NewTextureProperties obj -> {
}
case NewTextureTransform obj -> {
}
case NewTextureTransform3D obj -> {
}
case NewTextureTransformMatrix3D obj -> {
}
case NewTimeSensor obj -> {
}
case NewTimeTrigger obj -> {
}
case NewToneMappedVolumeStyle obj -> {
}
case NewTouchSensor obj -> {
}
case NewTransform obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewTransformSensor obj -> {
}
case NewTransmitterPdu obj -> {
}
case NewTriangleFanSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewTriangleSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewTriangleSet2D obj -> {
}
case NewTriangleStripSet obj -> {
	{
		X3DNode[] children = obj.getAttrib();
		X3DNode[] leftOverAttrib = this.removeChildren(children, toRemove);
		obj.setAttrib(leftOverAttrib);
		X3DNode[] leftOver = obj.removeSelectedAttrib(leftOverAttrib, toRemove);
		obj.setAttrib(leftOver);
	}
}
case NewTwoSidedMaterial obj -> {
}
case NewUniversalJoint obj -> {
}
case NewUnlitMaterial obj -> {
}
case NewVariationPhysicsModel obj -> {
}
case NewViewpoint obj -> {
}
case NewViewpointGroup obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewViewport obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewVisibilitySensor obj -> {
}
case NewVolumeData obj -> {
}
case NewVolumeEmitter obj -> {
}
case NewVolumePickSensor obj -> {
	{
		X3DNode[] children = obj.getPickedGeometry();
	}
	{
		X3DNode[] children = obj.getPickTarget();
		X3DNode[] leftOverPickTarget = this.removeChildren(children, toRemove);
		obj.setPickTarget(leftOverPickTarget);
		X3DNode[] leftOver = obj.removeSelectedPickTarget(leftOverPickTarget, toRemove);
		obj.setPickTarget(leftOver);
	}
}
case NewWaveShaper obj -> {
	{
		X3DNode[] children = obj.getChildren();
		X3DNode[] leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		X3DNode[] leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewWindPhysicsModel obj -> {
}
case NewWorldInfo obj -> {
}
case Newcomponent obj -> {
}
case Newconnect obj -> {
}
case NewEXPORT obj -> {
}
case NewExternProtoDeclare obj -> {
	{
		ArrayList<field> children = obj.getFieldList();
		ArrayList<field> leftOverFieldList = this.removeChildren(children, toRemove);
		obj.setFieldList(leftOverFieldList);
		ArrayList<field> leftOver = obj.removeSelectedFieldList(leftOverFieldList, toRemove);
		obj.setFieldList(leftOver);
	}
}
case Newfield obj -> {
	{
		ArrayList<X3DNode> children = obj.getChildren();
		ArrayList<X3DNode> leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		ArrayList<X3DNode> leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewfieldValue obj -> {
	{
		ArrayList<X3DNode> children = obj.getChildren();
		ArrayList<X3DNode> leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		ArrayList<X3DNode> leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case Newhead obj -> {
	{
		ArrayList<component> children = obj.getComponentList();
		ArrayList<component> leftOverComponentList = this.removeChildren(children, toRemove);
		obj.setComponentList(leftOverComponentList);
		ArrayList<component> leftOver = obj.removeSelectedComponentList(leftOverComponentList, toRemove);
		obj.setComponentList(leftOver);
	}
	{
		ArrayList<meta> children = obj.getMetaList();
		ArrayList<meta> leftOverMetaList = this.removeChildren(children, toRemove);
		obj.setMetaList(leftOverMetaList);
		ArrayList<meta> leftOver = obj.removeSelectedMetaList(leftOverMetaList, toRemove);
		obj.setMetaList(leftOver);
	}
	{
		ArrayList<unit> children = obj.getUnitList();
		ArrayList<unit> leftOverUnitList = this.removeChildren(children, toRemove);
		obj.setUnitList(leftOverUnitList);
		ArrayList<unit> leftOver = obj.removeSelectedUnitList(leftOverUnitList, toRemove);
		obj.setUnitList(leftOver);
	}
}
case NewIMPORT obj -> {
}
case NewIS obj -> {
	{
		ArrayList<connect> children = obj.getConnectList();
		ArrayList<connect> leftOverConnectList = this.removeChildren(children, toRemove);
		obj.setConnectList(leftOverConnectList);
		ArrayList<connect> leftOver = obj.removeSelectedConnectList(leftOverConnectList, toRemove);
		obj.setConnectList(leftOver);
	}
}
case Newmeta obj -> {
}
case NewProtoBody obj -> {
	{
		ArrayList<X3DNode> children = obj.getChildren();
		ArrayList<X3DNode> leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		ArrayList<X3DNode> leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case NewProtoDeclare obj -> {
}
case NewProtoInterface obj -> {
	{
		ArrayList<field> children = obj.getFieldList();
		ArrayList<field> leftOverFieldList = this.removeChildren(children, toRemove);
		obj.setFieldList(leftOverFieldList);
		ArrayList<field> leftOver = obj.removeSelectedFieldList(leftOverFieldList, toRemove);
		obj.setFieldList(leftOver);
	}
}
case NewROUTE obj -> {
}
case NewScene obj -> {
	{
		ArrayList<X3DNode> children = obj.getChildren();
		ArrayList<X3DNode> leftOverChildren = this.removeChildren(children, toRemove);
		obj.setChildren(leftOverChildren);
		ArrayList<X3DNode> leftOver = obj.removeSelectedChildren(leftOverChildren, toRemove);
		obj.setChildren(leftOver);
	}
}
case Newunit obj -> {
}
case NewX3D obj -> {
}
default -> {
}
}
}

}
