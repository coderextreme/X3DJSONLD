(ns bubble
  (:import 	(org.web3d.x3d.jsail.Shape AcousticProperties Appearance FillProperties LineProperties Material PhysicalMaterial PointProperties Shape TwoSidedMaterial UnlitMaterial)
	(org.web3d.x3d.jsail.Sound Analyser AudioClip AudioDestination BiquadFilter BufferAudioSource ChannelMerger ChannelSelector ChannelSplitter Convolver Delay DynamicsCompressor Gain ListenerPointSource MicrophoneSource OscillatorSource PeriodicWave Sound SpatialSound StreamAudioDestination StreamAudioSource WaveShaper)
	(org.web3d.x3d.jsail.Networking Anchor Inline LoadSensor)
	(org.web3d.x3d.jsail.Geometry2D Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)
	(org.web3d.x3d.jsail.EnvironmentalEffects Background Fog FogCoordinate LocalFog TextureBackground)
	(org.web3d.x3d.jsail.RigidBodyPhysics BallJoint CollidableOffset CollidableShape CollisionCollection CollisionSensor CollisionSpace Contact DoubleAxisHingeJoint MotorJoint RigidBody RigidBodyCollection SingleAxisHingeJoint SliderJoint UniversalJoint)
	(org.web3d.x3d.jsail.Navigation Billboard Collision LOD NavigationInfo OrthoViewpoint Viewpoint ViewpointGroup)
	(org.web3d.x3d.jsail.VolumeRendering BlendedVolumeStyle BoundaryEnhancementVolumeStyle CartoonVolumeStyle ComposedVolumeStyle EdgeEnhancementVolumeStyle IsoSurfaceVolumeData OpacityMapVolumeStyle ProjectionVolumeStyle SegmentedVolumeData ShadedVolumeStyle SilhouetteEnhancementVolumeStyle ToneMappedVolumeStyle VolumeData)
	(org.web3d.x3d.jsail.EventUtilities BooleanFilter BooleanSequencer BooleanToggle BooleanTrigger IntegerSequencer IntegerTrigger TimeTrigger)
	(org.web3d.x3d.jsail.ParticleSystems BoundedPhysicsModel ConeEmitter ExplosionEmitter ForcePhysicsModel ParticleSystem PointEmitter PolylineEmitter SurfaceEmitter VolumeEmitter WindPhysicsModel)
	(org.web3d.x3d.jsail.Geometry3D Box Cone Cylinder ElevationGrid Extrusion IndexedFaceSet Sphere)
	(org.web3d.x3d.jsail.CADGeometry CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet)
	(org.web3d.x3d.jsail.Rendering ClipPlane Color ColorRGBA Coordinate CoordinateDouble IndexedLineSet IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet Normal PointSet TriangleFanSet TriangleSet TriangleStripSet)
	(org.web3d.x3d.jsail.Followers ColorChaser ColorDamper CoordinateChaser CoordinateDamper OrientationChaser OrientationDamper PositionChaser PositionChaser2D PositionDamper PositionDamper2D ScalarChaser ScalarDamper TexCoordChaser2D TexCoordDamper2D)
	(org.web3d.x3d.jsail.Interpolation ColorInterpolator CoordinateInterpolator CoordinateInterpolator2D EaseInEaseOut NormalInterpolator OrientationInterpolator PositionInterpolator PositionInterpolator2D ScalarInterpolator SplinePositionInterpolator SplinePositionInterpolator2D SplineScalarInterpolator SquadOrientationInterpolator)
	(org.web3d.x3d.jsail.CubeMapTexturing ComposedCubeMapTexture GeneratedCubeMapTexture ImageCubeMapTexture)
	(org.web3d.x3d.jsail.Shaders ComposedShader FloatVertexAttribute Matrix3VertexAttribute Matrix4VertexAttribute PackagedShader ProgramShader ShaderPart ShaderProgram)
	(org.web3d.x3d.jsail.Texturing3D ComposedTexture3D ImageTexture3D PixelTexture3D TextureCoordinate3D TextureCoordinate4D TextureTransform3D TextureTransformMatrix3D)
	(org.web3d.x3d.jsail.NURBS Contour2D ContourPolyline2D NurbsCurve NurbsCurve2D NurbsOrientationInterpolator NurbsPatchSurface NurbsPositionInterpolator NurbsSet NurbsSurfaceInterpolator NurbsSweptSurface NurbsSwungSurface NurbsTextureCoordinate NurbsTrimmedSurface)
	(org.web3d.x3d.jsail.PointingDeviceSensor CylinderSensor PlaneSensor SphereSensor TouchSensor)
	(org.web3d.x3d.jsail.Lighting DirectionalLight PointLight SpotLight)
	(org.web3d.x3d.jsail.DIS DISEntityManager DISEntityTypeMapping EspduTransform ReceiverPdu SignalPdu TransmitterPdu)
	(org.web3d.x3d.jsail.Text FontStyle Text)
	(org.web3d.x3d.jsail.Geospatial GeoCoordinate GeoElevationGrid GeoLocation GeoLOD GeoMetadata GeoOrigin GeoPositionInterpolator GeoProximitySensor GeoTouchSensor GeoTransform GeoViewpoint)
	(org.web3d.x3d.jsail.Grouping Group StaticGroup Switch Transform)
	(org.web3d.x3d.jsail.HAnim HAnimDisplacer HAnimHumanoid HAnimJoint HAnimMotion HAnimSegment HAnimSite)
	(org.web3d.x3d.jsail.Texturing ImageTexture MovieTexture MultiTexture MultiTextureCoordinate MultiTextureTransform PixelTexture TextureCoordinate TextureCoordinateGenerator TextureProperties TextureTransform)
	(org.web3d.x3d.jsail.KeyDeviceSensor KeySensor StringSensor)
	(org.web3d.x3d.jsail.Layering Layer LayerSet Viewport)
	(org.web3d.x3d.jsail.Layout Layout LayoutGroup LayoutLayer ScreenFontStyle ScreenGroup)
	(org.web3d.x3d.jsail.Picking LinePickSensor PickableGroup PointPickSensor PrimitivePickSensor VolumePickSensor)
	(org.web3d.x3d.jsail.Core MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString ProtoInstance WorldInfo component connect ExternProtoDeclare field fieldValue head IS ProtoBody ProtoDeclare ProtoInterface ROUTE Scene unit X3D CommentsBlock)
	(org.web3d.x3d.jsail.EnvironmentalSensor ProximitySensor TransformSensor VisibilitySensor)
	(org.web3d.x3d.jsail.Scripting Script)
	(org.web3d.x3d.jsail.TextureProjection TextureProjector TextureProjectorParallel)
	(org.web3d.x3d.jsail.Time TimeSensor)
	(org.web3d.x3d.jsail.fields SFBool MFBool SFColor MFColor SFColorRGBA MFColorRGBA SFDouble MFDouble SFFloat MFFloat SFImage MFImage SFInt32 MFInt32 SFMatrix3d MFMatrix3d SFMatrix3f MFMatrix3f SFMatrix4d MFMatrix4d SFMatrix4f MFMatrix4f SFNode MFNode SFRotation MFRotation SFString MFString SFTime MFTime SFVec2d MFVec2d SFVec2f MFVec2f SFVec3d MFVec3d SFVec3f MFVec3f SFVec4d MFVec4d SFVec4f MFVec4f)
	(org.web3d.x3d.jsail ConfigurationProperties)
))
(org.web3d.x3d.jsail.ConfigurationProperties/setXsltEngine org.web3d.x3d.jsail.ConfigurationProperties/XSLT_ENGINE_NATIVE_JAVA)
(org.web3d.x3d.jsail.ConfigurationProperties/setDeleteIntermediateFiles false)
(org.web3d.x3d.jsail.ConfigurationProperties/setStripTrailingZeroes true)
(org.web3d.x3d.jsail.ConfigurationProperties/setStripDefaultAttributes true)
(def EXPORT org.web3d.x3d.jsail.Networking.EXPORT)
(def IMPORT org.web3d.x3d.jsail.Networking.IMPORT)
(def X3D0 (doto (X3D.)
    (.setProfile "Immersive")
    (.setVersion "3.3")
    (.setHead (doto (head. )
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "title")
            (.setContent "bubble.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "John Carlson")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "description")
            (.setContent "Tour around a prismatic sphere")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "generator")
            (.setContent "X3D-Edit, https://savage.nps.edu/X3D-Edit")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "identifier")
            (.setContent "https://coderextreme.net/X3DJSONLD/src/main/personal/bubble.x3d")
        ))
    ))
    (.setScene (doto (Scene. )
        (.addChildren (doto (NavigationInfo. )
            (.setType (into-array ["EXAMINE"]))
        ))
        (.addChildren (doto (Viewpoint. )
            (.setPosition (float-array [0 0 4]))
            (.setOrientation (float-array [1 0 0 0]))
            (.setDescription "Bubble in action")
        ))
        (.addChildren (doto (ProtoDeclare. )
            (.setName "Bubble")
            (.setProtoBody (doto (ProtoBody. )
                (.addChildren (doto (Transform. )
                    (.setDEF "transform")
                    (.addChild (doto (Shape. )
                        (.setGeometry (doto (Sphere. )
                            (.setRadius 0.25)
                        ))
                        (.setAppearance (doto (Appearance. )
                            (.setMaterial (doto (Material. )
                                (.setDiffuseColor (float-array [1 0 0]))
                                (.setTransparency 0.2)
                            ))
                        ))
                    ))
                    (.addChildren (doto (Script. )
                        (.setDEF "bounce")
                        (.addField (doto (field. )
                            (.setName "scale")
                            (.setAccessType "inputOutput")
                            (.setType "SFVec3f")
                            (.setValue "1 1 1")
                        ))
                        (.addField (doto (field. )
                            (.setName "translation")
                            (.setAccessType "inputOutput")
                            (.setType "SFVec3f")
                            (.setValue "0 0 0")
                        ))
                        (.addField (doto (field. )
                            (.setName "velocity")
                            (.setAccessType "inputOutput")
                            (.setType "SFVec3f")
                            (.setValue "0 0 0")
                        ))
                        (.addField (doto (field. )
                            (.setName "scalvel")
                            (.setAccessType "inputOutput")
                            (.setType "SFVec3f")
                            (.setValue "0 0 0")
                        ))
                        (.addField (doto (field. )
                            (.setName "set_fraction")
                            (.setAccessType "inputOnly")
                            (.setType "SFFloat")
                        ))
(.setSourceCode "ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
	translation = new SFVec3f(
		translation.x + velocity.x,
		translation.y + velocity.y,
		translation.z + velocity.z);
	scale = new SFVec3f(
		scale.x + scalvel.x,
		scale.y + scalvel.y,
		scale.z + scalvel.z);
        // if you get to far away or too big, explode
        if ( Math.abs(translation.x) > 256) {
		translation.x = 0;
		initialize();
	}
        if ( Math.abs(translation.y) > 256) {
		translation.y = 0;
		initialize();
	}
        if ( Math.abs(translation.z) > 256) {
		translation.z = 0;
		initialize();
	}
	if (Math.abs(scale.x) > 20) {
		scale.x = scale.x/2;
		translation.x = 0;
		initialize();
	}
	if (Math.abs(scale.y) > 20) {
		scale.y = scale.y/2;
		translation.y = 0;
		initialize();
	}
	if (Math.abs(scale.z) > 20) {
		scale.z = scale.z/2;
		translation.z = 0;
		initialize();
	}
}")                    ))
                    (.addChildren (doto (TimeSensor. )
                        (.setDEF "bubbleClock")
                        (.setCycleInterval 10.0)
                        (.setLoop true)
                    ))
                    (.addChildren (doto (ROUTE. )
                        (.setFromNode "bounce")
                        (.setFromField "translation_changed")
                        (.setToNode "transform")
                        (.setToField "set_translation")
                    ))
                    (.addChildren (doto (ROUTE. )
                        (.setFromNode "bounce")
                        (.setFromField "scale_changed")
                        (.setToNode "transform")
                        (.setToField "set_scale")
                    ))
                    (.addChildren (doto (ROUTE. )
                        (.setFromNode "bubbleClock")
                        (.setFromField "fraction_changed")
                        (.setToNode "bounce")
                        (.setToField "set_fraction")
                    ))
                ))
            ))
        ))
        (.addChildren (doto (ProtoInstance. )
            (.setName "Bubble")
            (.setDEF "bubbleA")
        ))
    ))
))
(.toFileX3D X3D0 "../../../../../personal/bubble.new.clojure.x3d")
(.toFileJSON X3D0 "../../../../../personal/bubble.new.clojure.json")
(defn -main []
(println "Hello from your main function!"))