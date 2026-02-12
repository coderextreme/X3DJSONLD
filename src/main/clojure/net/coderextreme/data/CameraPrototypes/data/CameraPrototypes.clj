(ns CameraPrototypes
  (:import 	(org.web3d.x3d.jsail.Shape AcousticProperties Appearance FillProperties LineProperties Material PhysicalMaterial PointProperties Shape TwoSidedMaterial UnlitMaterial)
	(org.web3d.x3d.jsail.Sound Analyser AudioClip AudioDestination BiquadFilter BufferAudioSource ChannelMerger ChannelSelector ChannelSplitter Convolver Delay DynamicsCompressor Gain ListenerPointSource MicrophoneSource OscillatorSource PeriodicWave Sound SpatialSound StreamAudioDestination StreamAudioSource WaveShaper)
	(org.web3d.x3d.jsail.Networking Anchor Inline LoadSensor EXPORT IMPORT)
	(org.web3d.x3d.jsail.Geometry2D Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)
	(org.web3d.x3d.jsail.EnvironmentalEffects Background Fog FogCoordinate LocalFog TextureBackground)
	(org.web3d.x3d.jsail.RigidBodyPhysics BallJoint CollidableOffset CollidableShape CollisionCollection CollisionSensor CollisionSpace Contact DoubleAxisHingeJoint MotorJoint RigidBody RigidBodyCollection SingleAxisHingeJoint SliderJoint UniversalJoint)
	(org.web3d.x3d.jsail.Navigation Billboard Collision LOD NavigationInfo OrthoViewpoint Viewpoint ViewpointGroup)
	(org.web3d.x3d.jsail.VolumeRendering BlendedVolumeStyle BoundaryEnhancementVolumeStyle CartoonVolumeStyle ComposedVolumeStyle EdgeEnhancementVolumeStyle IsoSurfaceVolumeData OpacityMapVolumeStyle ProjectionVolumeStyle SegmentedVolumeData ShadedVolumeStyle SilhouetteEnhancementVolumeStyle ToneMappedVolumeStyle VolumeData)
	(org.web3d.x3d.jsail.EventUtilities BooleanFilter BooleanSequencer BooleanToggle BooleanTrigger IntegerSequencer IntegerTrigger TimeTrigger)
	(org.web3d.x3d.jsail.ParticleSystems BoundedPhysicsModel ConeEmitter ExplosionEmitter ForcePhysicsModel ParticleSystem PointEmitter PolylineEmitter SurfaceEmitter VolumeEmitter WindPhysicsModel)
	(org.web3d.x3d.jsail.Geometry3D Box Cone Cylinder ElevationGrid Extrusion IndexedFaceSet Sphere)
	(org.web3d.x3d.jsail.CADGeometry CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet)
	(org.web3d.x3d.jsail.Rendering ClipPlane Color ColorRGBA Coordinate CoordinateDouble IndexedLineSet IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet Normal PointSet Tangent TriangleFanSet TriangleSet TriangleStripSet)
	(org.web3d.x3d.jsail.Followers ColorChaser ColorDamper CoordinateChaser CoordinateDamper OrientationChaser OrientationDamper PositionChaser PositionChaser2D PositionDamper PositionDamper2D ScalarChaser ScalarDamper TexCoordChaser2D TexCoordDamper2D)
	(org.web3d.x3d.jsail.Interpolation ColorInterpolator CoordinateInterpolator CoordinateInterpolator2D EaseInEaseOut NormalInterpolator OrientationInterpolator PositionInterpolator PositionInterpolator2D ScalarInterpolator SplinePositionInterpolator SplinePositionInterpolator2D SplineScalarInterpolator SquadOrientationInterpolator)
	(org.web3d.x3d.jsail.CubeMapTexturing ComposedCubeMapTexture GeneratedCubeMapTexture ImageCubeMapTexture)
	(org.web3d.x3d.jsail.Shaders ComposedShader FloatVertexAttribute Matrix3VertexAttribute Matrix4VertexAttribute PackagedShader ProgramShader ShaderPart ShaderProgram)
	(org.web3d.x3d.jsail.Texturing3D ComposedTexture3D ImageTexture3D PixelTexture3D TextureCoordinate3D TextureCoordinate4D TextureTransform3D TextureTransformMatrix3D)
	(org.web3d.x3d.jsail.NURBS Contour2D ContourPolyline2D NurbsCurve NurbsCurve2D NurbsOrientationInterpolator NurbsPatchSurface NurbsPositionInterpolator NurbsSet NurbsSurfaceInterpolator NurbsSweptSurface NurbsSwungSurface NurbsTextureCoordinate NurbsTrimmedSurface)
	(org.web3d.x3d.jsail.PointingDeviceSensor CylinderSensor PlaneSensor SphereSensor TouchSensor)
	(org.web3d.x3d.jsail.Lighting DirectionalLight EnvironmentLight PointLight SpotLight)
	(org.web3d.x3d.jsail.DIS DISEntityManager DISEntityTypeMapping EspduTransform ReceiverPdu SignalPdu TransmitterPdu)
	(org.web3d.x3d.jsail.Text FontLibrary FontStyle Text)
	(org.web3d.x3d.jsail.Geospatial GeoCoordinate GeoElevationGrid GeoLocation GeoLOD GeoMetadata GeoOrigin GeoPositionInterpolator GeoProximitySensor GeoTouchSensor GeoTransform GeoViewpoint)
	(org.web3d.x3d.jsail.Grouping Group StaticGroup Switch Transform)
	(org.web3d.x3d.jsail.HAnim HAnimDisplacer HAnimHumanoid HAnimJoint HAnimMotion HAnimPose HAnimSegment HAnimSite)
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
(def X3D0 (doto (X3D.)
    (.setProfile "Immersive")
    (.setVersion "4.1")
    (.setHead (doto (head. )
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "title")
            (.setContent "CameraPrototypes.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "description")
            (.setContent "Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "Don Brutzman and Jeff Weekley")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "created")
            (.setContent "16 March 2009")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "modified")
            (.setContent "Mon, 09 Feb 2026 12:22:59 GMT")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "TODO")
            (.setContent "Schematron rules, backed up by initialize() checks")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "BeyondViewpointCameraNodesWeb3D2009.pdf")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "subject")
            (.setContent "Camera nodes for Viewpoint navigation control")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "CameraExamples.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "identifier")
            (.setContent "https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")
        ))
    ))
    (.setScene (doto (Scene. )
        (.addChildren (doto (ProtoDeclare. )
            (.setName "Camera")
            (.setAppinfo "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.")
            (.setProtoInterface (doto (ProtoInterface. )
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFString")
                    (.setName "description")
                    (.setAppinfo "Text description to be displayed for this Camera")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec3f")
                    (.setName "position")
                    (.setValue "0 0 10")
                    (.setAppinfo "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFRotation")
                    (.setName "orientation")
                    (.setAppinfo "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "fieldOfView")
                    (.setValue "0.7854")
                    (.setAppinfo "pi/4")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOnly")
                    (.setType "SFFloat")
                    (.setName "set_fraction")
                    (.setAppinfo "input fraction drives interpolators")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOnly")
                    (.setType "SFBool")
                    (.setName "set_bind")
                    (.setAppinfo "input event binds or unbinds this Camera")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFTime")
                    (.setName "bindTime")
                    (.setAppinfo "output event indicates when this Camera is bound")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFBool")
                    (.setName "isBound")
                    (.setAppinfo "output event indicates whether this Camera is bound or unbound")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "nearClipPlane")
                    (.setValue "0.25")
                    (.setAppinfo "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "farClipPlane")
                    (.setAppinfo "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "MFNode")
                    (.setName "shots")
                    (.setAppinfo "Array of CameraShot nodes which in turn contain CameraMovement nodes")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFBool")
                    (.setName "headlight")
                    (.setValue "true")
                    (.setAppinfo "Whether camera headlight is on or off")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFColor")
                    (.setName "headlightColor")
                    (.setValue "1 1 1")
                    (.setAppinfo "Camera headlight color")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "headlightIntensity")
                    (.setValue "1")
                    (.setAppinfo "Camera headlight intensity")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFColor")
                    (.setName "filterColor")
                    (.setValue "1 1 1")
                    (.setAppinfo "Camera filter color that modifies virtual lens capture")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "filterTransparency")
                    (.setValue "1")
                    (.setAppinfo "Camera filter transparency that modifies virtual lens capture")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec3f")
                    (.setName "upVector")
                    (.setValue "0 1 0")
                    (.setAppinfo "upVector changes modify camera orientation (and possibly vice versa)")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "fStop")
                    (.setValue "5.6")
                    (.setAppinfo "Focal length divided effective aperture diameter indicating width of focal plane")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "focusDistance")
                    (.setValue "10")
                    (.setAppinfo "Distance to focal plane of sharpest focus")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFBool")
                    (.setName "isActive")
                    (.setAppinfo "Mark start/stop with true/false output respectively useful to trigger external animations")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFTime")
                    (.setName "totalDuration")
                    (.setAppinfo "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFNode")
                    (.setName "offlineRender")
                    (.setAppinfo "OfflineRender node")
                ))
                (.addField (doto (field. )
                    (.setAccessType "initializeOnly")
                    (.setType "SFBool")
                    (.setName "traceEnabled")
                    (.setAppinfo "enable console output to trace script computations and prototype progress")
                ))
            ))
            (.setProtoBody (doto (ProtoBody. )
                (.addChildren (doto (Viewpoint. )
                    (.setDEF "CameraViewpoint")
                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_bind")
                            (.setProtoField "set_bind")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "description")
                            (.setProtoField "description")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "position")
                            (.setProtoField "position")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "orientation")
                            (.setProtoField "orientation")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "fieldOfView")
                            (.setProtoField "fieldOfView")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "isBound")
                            (.setProtoField "isBound")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "bindTime")
                            (.setProtoField "bindTime")
                        ))
                    ))
                ))
                (.addChildren (doto (NavigationInfo. )
                    (.setDEF "CameraNavInfo")
                    (.setType (into-array ["EXAMINE" "FLY" "ANY"]))
                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_bind")
                            (.setProtoField "set_bind")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "headlight")
                            (.setProtoField "headlight")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "visibilityLimit")
                            (.setProtoField "farClipPlane")
                        ))
                    ))
                ))
                (.addChildren (doto (DirectionalLight. )
                    (.setDEF "CameraDirectionalLight")
                    (.setGlobal true)
                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "on")
                            (.setProtoField "headlight")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "color")
                            (.setProtoField "headlightColor")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "intensity")
                            (.setProtoField "headlightIntensity")
                        ))
                    ))
                ))
                (.addChildren (doto (PositionInterpolator. )
                    (.setDEF "CameraPositionInterpolator")
                    (.setKey (float-array [0 1]))
                    (.setKeyValue (float-array [0 0 0 0 0 0]))
                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_fraction")
                            (.setProtoField "set_fraction")
                        ))
                    ))
                ))
                (.addChildren (doto (OrientationInterpolator. )
                    (.setDEF "CameraOrientationInterpolator")
                    (.setKey (float-array [0 1]))
                    (.setKeyValue (float-array [0 1 0 0 0 1 0 0]))
                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_fraction")
                            (.setProtoField "set_fraction")
                        ))
                    ))
                ))
                (.addChildren (doto (Script. )
                    (.setDEF "CameraScript")
                    (.setDirectOutput true)
                    (.setMustEvaluate true)
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFString")
                        (.setName "description")
                        (.setAppinfo "Text description to be displayed for this Camera")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec3f")
                        (.setName "position")
                        (.setAppinfo "Camera position in local transformation frame")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFRotation")
                        (.setName "orientation")
                        (.setAppinfo "Camera rotation in local transformation frame")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOnly")
                        (.setType "SFFloat")
                        (.setName "set_fraction")
                        (.setAppinfo "input fraction drives interpolators")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOnly")
                        (.setType "SFBool")
                        (.setName "set_bind")
                        (.setAppinfo "input event binds or unbinds this Camera")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "fieldOfView")
                        (.setAppinfo "pi/4")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "nearClipPlane")
                        (.setAppinfo "Vector distance to near clipping plane")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "farClipPlane")
                        (.setAppinfo "Vector distance to far clipping plane")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFNode")
                        (.setName "shots")
                        (.setAppinfo "Array of CameraShot nodes which in turn contain CameraMovement nodes")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFColor")
                        (.setName "filterColor")
                        (.setAppinfo "Camera filter color that modifies virtual lens capture")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "filterTransparency")
                        (.setAppinfo "Camera filter transparency that modifies virtual lens capture")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec3f")
                        (.setName "upVector")
                        (.setAppinfo "upVector changes modify camera orientation (and possibly vice versa)")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "fStop")
                        (.setAppinfo "Focal length divided effective aperture diameter indicating width of focal plane")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "focusDistance")
                        (.setAppinfo "Distance to focal plane of sharpest focus")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFBool")
                        (.setName "isActive")
                        (.setAppinfo "Mark start/stop with true/false output respectively useful to trigger external animations")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFTime")
                        (.setName "totalDuration")
                        (.setAppinfo "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFNode")
                        (.setName "offlineRender")
                        (.setAppinfo "OfflineRender node")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFNode")
                        (.setName "ViewpointNode")
                        (.setAppinfo "node reference to permit getting setting fields from within Script")
                        (.addChildren (doto (Viewpoint. )
                            (.setUSE "CameraViewpoint")
                        ))
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFNode")
                        (.setName "NavInfoNode")
                        (.setAppinfo "node reference to permit getting setting fields from within Script")
                        (.addChildren (doto (NavigationInfo. )
                            (.setUSE "CameraNavInfo")
                        ))
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFNode")
                        (.setName "CameraPI")
                        (.setAppinfo "node reference to permit getting setting fields from within Script")
                        (.addChildren (doto (PositionInterpolator. )
                            (.setUSE "CameraPositionInterpolator")
                        ))
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFNode")
                        (.setName "CameraOI")
                        (.setAppinfo "node reference to permit getting setting fields from within Script")
                        (.addChildren (doto (OrientationInterpolator. )
                            (.setUSE "CameraOrientationInterpolator")
                        ))
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFFloat")
                        (.setName "key")
                        (.setAppinfo "key array for interpolators")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFVec3f")
                        (.setName "keyValuePosition")
                        (.setAppinfo "keyValue array for PositionInterpolator")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFRotation")
                        (.setName "keyValueOrientation")
                        (.setAppinfo "keyValue array for OrientationInterpolator")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFBool")
                        (.setName "animated")
                        (.setAppinfo "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFBool")
                        (.setName "initialized")
                        (.setAppinfo "perform checkShots() function once immediately after initialization")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFInt32")
                        (.setName "shotCount")
                        (.setAppinfo "how many CameraShot nodes are contained in shots array")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFInt32")
                        (.setName "movesCount")
                        (.setAppinfo "how many CameraMove nodes are contained in moves array")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFFloat")
                        (.setName "frameCount")
                        (.setAppinfo "how many frames were created in current loop")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFTime")
                        (.setName "startTime")
                        (.setValue "0")
                        (.setAppinfo "holding variable")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFTime")
                        (.setName "priorTraceTime")
                        (.setValue "0")
                        (.setAppinfo "holding variable")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFBool")
                        (.setName "traceEnabled")
                        (.setAppinfo "enable console output to trace script computations and prototype progress")
                    ))
(.setSourceCode "ecmascript:
function initialize () // CameraScript
{
//  tracePrint ('initialize start...');

    NavInfoNode.avatarSize[0]   = nearClipPlane;

    // remaining setups deferred to invocation of checkShots() method
    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization
    alwaysPrint ('initialize complete');
}

function checkShots (eventValue)
{
    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');

    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes
    totalDuration= 0;
    shotCount  = shots.length;
    movesCount = 0;
    for (i = 0; i < shotCount; i++) // shots index
    {
       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);
       movesCount   += shots[i].moves.length;
       totalDuration = totalDuration + shots[i].shotDuration;
       if (shots[i].moves.length == 0)
       {
          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');
       }
    }
    // size checks before proceeding
    if (shotCount == 0)
    {
       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');
       return;
    }
    else if (movesCount == 0)
    {
       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');
       return;
    }
    else if (totalDuration == 0)
    {
       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');
       return;
    }
    tracePrint ('number of contained CameraShot nodes=' + shotCount);
    tracePrint ('number of contained CameraMove nodes=' + movesCount);
    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');

    // compute interpolators
    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation
    for (i = 0; i < shotCount; i++) // shots index
    {
        if (i==0) // initial entries
        {
           key[0]                   = 0.0; // no previous move
           keyValuePosition[0]      = shots[i].initialPosition;
           keyValueOrientation[0]   = shots[i].initialOrientation;
        }
        else     // new shot repositions, reorients camera as clean break from preceding shot/move
        {
           key[k+1]                 = key[k]; // start from end from previous move
           keyValuePosition[k+1]    = shots[i].initialPosition;
           keyValueOrientation[k+1] = shots[i].initialOrientation;
           k++;
        }
        tracePrint (shots[i].description);
        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);

        for (j = 0; j < shots[i].moves.length; j++) // moves index
        {
            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime
            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime
            //  tracePrint ('durationFloat=' + durationFloat);
            key[k+1]               = key[k] + (durationFloat / totalDuration);
            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;
            if (!animated)
            {
                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;
            }
            else
            {
                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)
                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions

                // test if difference vector is zero, if so maintain previous rotation
                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();
                if (shotVector.length() >= 0)
                {
                    // default view direction is along -Z axis
                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);
                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;
                }
                else // note (k > 0)
                {
                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change
                }

                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());
                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());
                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());
                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());
                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());
                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');
            }
            k++; // update index to match latest key, keyValuePosition, keyValueOrientation

            // check animated parameter:  set true if any of moves are tracking moves
            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true
         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);

            // intermediate trace
            tracePrint ('                key=' + key);
            tracePrint ('   keyValuePosition=' + keyValuePosition);
            tracePrint ('keyValueOrientation=' + keyValueOrientation);
            tracePrint ('- ' + shots[i].moves[j].description);
        }
    }
    tracePrint ('                key=' + key);
    tracePrint ('   keyValuePosition=' + keyValuePosition);
    tracePrint ('keyValueOrientation=' + keyValueOrientation);
    if (key.length != keyValuePosition.length)
    {
      alwaysPrint ('warning: internal error during array construction, ' +
                  'key.length=' + key.length + ' must equal ' +
                  'keyValuePosition.length=' + keyValuePosition.length);
    }
    if (key.length != keyValueOrientation.length)
    {
      alwaysPrint ('warning: internal error during array construction, ' +
                  'key.length=' + key.length + ' must equal ' +
                  'keyValueOrientation.length=' + keyValueOrientation.length);
    }
    if (key.length != (shotCount + movesCount))
    {
      alwaysPrint ('warning: internal error during array construction, ' +
                  'key.length=' + key.length + ' must equal ' +
                  '(shotCount + movesCount)=' + (shotCount + movesCount));
    }
    tracePrint ('           animated=' + animated);
    // set node values
    CameraPI.key      = key;
    CameraOI.key      = key;
    CameraPI.keyValue = keyValuePosition;
    CameraOI.keyValue = keyValueOrientation;

    if (!animated) // output results
    {
        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');
        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');
    }
    tracePrint ('checkShots() complete');
}

function stripBrackets (fieldArray)
{
    // some browsers add brackets to array output strings, this function strips them
    outputString = '';
    for (i = 0; i < fieldArray.length; i++)
    {
       outputString += fieldArray[i].toString();
       if (i < fieldArray.length - 1) outputString += ' ';
    }
    return outputString;
}

function set_fraction (eventValue, timestamp) // input event received for inputOnly field
{
   // traceEnabled = false;  // for testing purposes

   // if Camera is being animated, immediately recompute interpolator settings
   if (animated) checkShots (true);

   // trace progress on console with reduced output frequency
   if (frameCount == 0)
   {
      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);
      startTime      = timestamp;
      priorTraceTime = timestamp;
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());

      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');
        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');
      }
   }
   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval
   {
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
      priorTraceTime = timestamp;

      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');
        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');
      }
   }
   if (eventValue == 0)
   {
      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored
      frameCount++;
   }
   else if (eventValue == 1)
   {
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
      }
      alwaysPrint ('Animation loop complete.');
      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally
   }
   else
   {
      frameCount++;
   }
}

function set_bind (eventValue) // input event received for inputOnly field
{
   // need to ensure CameraShot nodes are properly initialized
   if (initialized == false)
   {
      checkShots (true);
      initialized = true;
   }
   if (eventValue)
   {
       tracePrint ('Camera has been bound');
   }
   else
   {
       tracePrint ('Camera has been unbound');
   }
}

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_position (eventValue) // input event received for inputOutput field
{
    position = eventValue;
}

function set_orientation (eventValue) // input event received for inputOutput field
{
    orientation = eventValue;
}

function set_fieldOfView (eventValue) // input event received for inputOutput field
{
    fieldOfView = eventValue;
}

function set_nearClipPlane (eventValue) // input event received for inputOutput field
{
    nearClipPlane = eventValue;
}

function set_farClipPlane (eventValue) // input event received for inputOutput field
{
    farClipPlane = eventValue;
}

function set_shots (eventValue) // input event received for inputOutput field
{
    shots = eventValue;
}

function set_filterColor (eventValue) // input event received for inputOutput field
{
    filterColor = eventValue;
}

function set_filterTransparency (eventValue) // input event received for inputOutput field
{
    filterTransparency = eventValue;
}

function set_upVector (eventValue) // input event received for inputOutput field
{
    upVector = eventValue;
}

function set_fStop (eventValue) // input event received for inputOutput field
{
    fStop = eventValue;
}

function set_focusDistance (eventValue) // input event received for inputOutput field
{
    focusDistance = eventValue;
}

function set_offlineRender (eventValue) // input event received for inputOutput field
{
    offlineRender = eventValue;
}

function set_key (eventValue) // input event received for inputOutput field
{
    key = eventValue;
}

function set_keyValuePosition (eventValue) // input event received for inputOutput field
{
    keyValuePosition = eventValue;
}

function set_keyValueOrientation (eventValue) // input event received for inputOutput field
{
    keyValueOrientation = eventValue;
}

function set_animated (eventValue) // input event received for inputOutput field
{
    animated = eventValue;
}

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}
function alwaysPrint (outputValue)
{
    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');
    else
         Browser.print ('[Camera] ' + outputString + '\\n');
}")                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "description")
                            (.setProtoField "description")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "position")
                            (.setProtoField "position")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "orientation")
                            (.setProtoField "orientation")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_fraction")
                            (.setProtoField "set_fraction")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_bind")
                            (.setProtoField "set_bind")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "fieldOfView")
                            (.setProtoField "fieldOfView")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "nearClipPlane")
                            (.setProtoField "nearClipPlane")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "farClipPlane")
                            (.setProtoField "farClipPlane")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "shots")
                            (.setProtoField "shots")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "filterColor")
                            (.setProtoField "filterColor")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "filterTransparency")
                            (.setProtoField "filterTransparency")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "upVector")
                            (.setProtoField "upVector")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "fStop")
                            (.setProtoField "fStop")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "focusDistance")
                            (.setProtoField "focusDistance")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "isActive")
                            (.setProtoField "isActive")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "totalDuration")
                            (.setProtoField "totalDuration")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "offlineRender")
                            (.setProtoField "offlineRender")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "traceEnabled")
                            (.setProtoField "traceEnabled")
                        ))
                    ))
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraPositionInterpolator")
                    (.setFromField "value_changed")
                    (.setToNode "CameraViewpoint")
                    (.setToField "set_position")
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraOrientationInterpolator")
                    (.setFromField "value_changed")
                    (.setToNode "CameraViewpoint")
                    (.setToField "set_orientation")
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraScript")
                    (.setFromField "position_changed")
                    (.setToNode "CameraViewpoint")
                    (.setToField "set_position")
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraScript")
                    (.setFromField "orientation_changed")
                    (.setToNode "CameraViewpoint")
                    (.setToField "set_orientation")
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraScript")
                    (.setFromField "isActive")
                    (.setToNode "CameraViewpoint")
                    (.setToField "set_bind")
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraScript")
                    (.setFromField "isActive")
                    (.setToNode "CameraNavInfo")
                    (.setToField "set_bind")
                ))
                (.addChildren (doto (ROUTE. )
                    (.setFromNode "CameraScript")
                    (.setFromField "isActive")
                    (.setToNode "CameraDirectionalLight")
                    (.setToField "set_on")
                ))
            ))
        ))
        (.addChildren (doto (ProtoDeclare. )
            (.setName "CameraShot")
            (.setAppinfo "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.")
            (.setProtoInterface (doto (ProtoInterface. )
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFString")
                    (.setName "description")
                    (.setAppinfo "Text description to be displayed for this CameraShot")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFBool")
                    (.setName "enabled")
                    (.setValue "true")
                    (.setAppinfo "Whether this CameraShot can be activated")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "MFNode")
                    (.setName "moves")
                    (.setAppinfo "Set of CameraMovement nodes")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec3f")
                    (.setName "initialPosition")
                    (.setValue "0 0 10")
                    (.setAppinfo "Setup to reinitialize camera position for this shot")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFRotation")
                    (.setName "initialOrientation")
                    (.setAppinfo "Setup to reinitialize camera rotation for this shot")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec3f")
                    (.setName "initialAimPoint")
                    (.setAppinfo "Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "initialFieldOfView")
                    (.setValue "0.7854")
                    (.setAppinfo "pi/4")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "initialFStop")
                    (.setValue "5.6")
                    (.setAppinfo "Focal length divided effective aperture diameter indicating width of focal plane")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "initialFocusDistance")
                    (.setValue "10")
                    (.setAppinfo "Distance to focal plane of sharpest focus")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFTime")
                    (.setName "shotDuration")
                    (.setAppinfo "Subtotal duration of contained CameraMovement move durations")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFBool")
                    (.setName "isActive")
                    (.setAppinfo "Mark start/stop with true/false output respectively useful to trigger external animations")
                ))
                (.addField (doto (field. )
                    (.setAccessType "initializeOnly")
                    (.setType "SFBool")
                    (.setName "traceEnabled")
                    (.setAppinfo "enable console output to trace script computations and prototype progress")
                ))
            ))
            (.setProtoBody (doto (ProtoBody. )
                (.addChildren (doto (Script. )
                    (.setDEF "CameraShotScript")
                    (.setDirectOutput true)
                    (.setMustEvaluate true)
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFString")
                        (.setName "description")
                        (.setAppinfo "Text description to be displayed for this CameraShot")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFBool")
                        (.setName "enabled")
                        (.setAppinfo "Whether this CameraShot can be activated")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFNode")
                        (.setName "moves")
                        (.setAppinfo "Set of CameraMovement nodes")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec3f")
                        (.setName "initialPosition")
                        (.setAppinfo "Setup to reinitialize camera position for this shot")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFRotation")
                        (.setName "initialOrientation")
                        (.setAppinfo "Setup to reinitialize camera rotation for this shot")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec3f")
                        (.setName "initialAimPoint")
                        (.setAppinfo "Setup to reinitialize aimpoint (relative location for camera direction) for this shot")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "initialFieldOfView")
                        (.setAppinfo "pi/4")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "initialFStop")
                        (.setAppinfo "Focal length divided effective aperture diameter indicating width of focal plane")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "initialFocusDistance")
                        (.setAppinfo "Distance to focal plane of sharpest focus")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFTime")
                        (.setName "shotDuration")
                        (.setAppinfo "Subtotal duration of contained CameraMovement move durations")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFBool")
                        (.setName "isActive")
                        (.setAppinfo "Mark start/stop with true/false output respectively useful to trigger external animations")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFBool")
                        (.setName "traceEnabled")
                        (.setAppinfo "enable console output to trace script computations and prototype progress")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFFloat")
                        (.setName "key")
                        (.setAppinfo "key array for interpolators")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFVec3f")
                        (.setName "keyValuePosition")
                        (.setAppinfo "keyValue array for PositionInterpolator")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "MFRotation")
                        (.setName "keyValueOrientation")
                        (.setAppinfo "keyValue array for OrientationInterpolator")
                    ))
(.setSourceCode "ecmascript:
function initialize () // CameraShotScript
{
//  tracePrint ('initialize start...');

    // compute shotDuration by summing durations from contained CameraMovement nodes
    shotDuration = 0;
    for (i = 0; i < moves.length; i++)
    {
        shotDuration = shotDuration + moves[i].duration;
    }
    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');

//  tracePrint ('... initialize() complete');
}

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

function set_moves (eventValue) // input event received for inputOutput field
{
    moves = eventValue;
}

function set_initialPosition (eventValue) // input event received for inputOutput field
{
    initialPosition = eventValue;
}

function set_initialOrientation (eventValue) // input event received for inputOutput field
{
    initialOrientation = eventValue;
}

function set_initialAimPoint (eventValue) // input event received for inputOutput field
{
    initialAimPoint = eventValue;
}

function set_initialFieldOfView (eventValue) // input event received for inputOutput field
{
    initialFieldOfView = eventValue;
}

function set_initialFStop (eventValue) // input event received for inputOutput field
{
    initialFStop = eventValue;
}

function set_initialFocusDistance (eventValue) // input event received for inputOutput field
{
    initialFocusDistance = eventValue;
}

function set_key (eventValue) // input event received for inputOutput field
{
    key = eventValue;
}

function set_keyValuePosition (eventValue) // input event received for inputOutput field
{
    keyValuePosition = eventValue;
}

function set_keyValueOrientation (eventValue) // input event received for inputOutput field
{
    keyValueOrientation = eventValue;
}

// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}
function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');
    else
         Browser.print ('[CameraShot] ' + outputString + '\\n');
}")                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "description")
                            (.setProtoField "description")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "enabled")
                            (.setProtoField "enabled")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "moves")
                            (.setProtoField "moves")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "initialPosition")
                            (.setProtoField "initialPosition")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "initialOrientation")
                            (.setProtoField "initialOrientation")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "initialAimPoint")
                            (.setProtoField "initialAimPoint")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "initialFieldOfView")
                            (.setProtoField "initialFieldOfView")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "initialFStop")
                            (.setProtoField "initialFStop")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "initialFocusDistance")
                            (.setProtoField "initialFocusDistance")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "shotDuration")
                            (.setProtoField "shotDuration")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "isActive")
                            (.setProtoField "isActive")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "traceEnabled")
                            (.setProtoField "traceEnabled")
                        ))
                    ))
                ))
            ))
        ))
        (.addChildren (doto (ProtoDeclare. )
            (.setName "CameraMovement")
            (.setAppinfo "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.")
            (.setProtoInterface (doto (ProtoInterface. )
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFString")
                    (.setName "description")
                    (.setAppinfo "Text description to be displayed for this CameraMovement")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFBool")
                    (.setName "enabled")
                    (.setValue "true")
                    (.setAppinfo "Whether this CameraMovement can be activated")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "duration")
                    (.setAppinfo "Duration in seconds for this move")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec3f")
                    (.setName "goalPosition")
                    (.setValue "0 0 10")
                    (.setAppinfo "Goal camera position for this move")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFRotation")
                    (.setName "goalOrientation")
                    (.setAppinfo "Goal camera rotation for this move")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFBool")
                    (.setName "tracking")
                    (.setAppinfo "Whether or not camera direction is tracking towards the aimPoint")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec3f")
                    (.setName "goalAimPoint")
                    (.setAppinfo "Goal aimPoint for this move, ignored if tracking=false")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "goalFieldOfView")
                    (.setValue "0.7854")
                    (.setAppinfo "Goal fieldOfView for this move")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "goalFStop")
                    (.setValue "5.6")
                    (.setAppinfo "Focal length divided effective aperture diameter indicating width of focal plane")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "goalFocusDistance")
                    (.setValue "10")
                    (.setAppinfo "Distance to focal plane of sharpest focus")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFBool")
                    (.setName "isActive")
                    (.setAppinfo "Mark start/stop with true/false output respectively useful to trigger external animations")
                ))
                (.addField (doto (field. )
                    (.setAccessType "initializeOnly")
                    (.setType "SFBool")
                    (.setName "traceEnabled")
                    (.setAppinfo "enable console output to trace script computations and prototype progress")
                ))
            ))
            (.setProtoBody (doto (ProtoBody. )
                (.addChildren (doto (Script. )
                    (.setDEF "CameraMovementScript")
                    (.setDirectOutput true)
                    (.setMustEvaluate true)
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFString")
                        (.setName "description")
                        (.setAppinfo "Text description to be displayed for this CameraMovement")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFBool")
                        (.setName "enabled")
                        (.setAppinfo "Whether this CameraMovement can be activated")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "duration")
                        (.setAppinfo "Duration in seconds for this move")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec3f")
                        (.setName "goalPosition")
                        (.setAppinfo "Goal camera position for this move")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFRotation")
                        (.setName "goalOrientation")
                        (.setAppinfo "Goal camera rotation for this move")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFBool")
                        (.setName "tracking")
                        (.setAppinfo "Whether or not camera direction is tracking towards the aimPoint")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec3f")
                        (.setName "goalAimPoint")
                        (.setAppinfo "Goal aimPoint for this move, ignored if tracking=false")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "goalFieldOfView")
                        (.setAppinfo "Goal fieldOfView for this move")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "goalFStop")
                        (.setAppinfo "Focal length divided effective aperture diameter indicating width of focal plane")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "goalFocusDistance")
                        (.setAppinfo "Distance to focal plane of sharpest focus")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFBool")
                        (.setName "isActive")
                        (.setAppinfo "Mark start/stop with true/false output respectively useful to trigger external animations")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFBool")
                        (.setName "traceEnabled")
                        (.setAppinfo "enable console output to trace script computations and prototype progress")
                    ))
(.setSourceCode "ecmascript:
function initialize () // CameraMovementScript
{
//  tracePrint ('initialize start...');
    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +
                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()
                           );
    if (duration < 0)
    {
       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');
       duration = 0;
    }
    else if (duration == 0)
    {
       alwaysPrint ('warning: duration=0, nothing to do!');
    }
    tracePrint ('... initialize complete');
}

function set_goalAimPoint (eventValue) // input event received for inputOutput field
{
    goalAimPoint_changed = eventValue;
    tracePrint ('goalAimPoint=' + goalAimPoint.toString());

    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator
}

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

function set_duration (eventValue) // input event received for inputOutput field
{
    duration = eventValue;
}

function set_goalPosition (eventValue) // input event received for inputOutput field
{
    goalPosition = eventValue;
}

function set_goalOrientation (eventValue) // input event received for inputOutput field
{
    goalOrientation = eventValue;
}

function set_tracking (eventValue) // input event received for inputOutput field
{
    tracking = eventValue;
}

function set_goalFieldOfView (eventValue) // input event received for inputOutput field
{
    goalFieldOfView = eventValue;
}

function set_goalFStop (eventValue) // input event received for inputOutput field
{
    goalFStop = eventValue;
}

function set_goalFocusDistance (eventValue) // input event received for inputOutput field
{
    goalFocusDistance = eventValue;
}

// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}

function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');
    else
         Browser.print ('[CameraMovement] ' + outputString + '\\n');
}")                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "description")
                            (.setProtoField "description")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "enabled")
                            (.setProtoField "enabled")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "duration")
                            (.setProtoField "duration")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "goalPosition")
                            (.setProtoField "goalPosition")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "goalOrientation")
                            (.setProtoField "goalOrientation")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "tracking")
                            (.setProtoField "tracking")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "goalAimPoint")
                            (.setProtoField "goalAimPoint")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "goalFieldOfView")
                            (.setProtoField "goalFieldOfView")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "goalFStop")
                            (.setProtoField "goalFStop")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "goalFocusDistance")
                            (.setProtoField "goalFocusDistance")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "isActive")
                            (.setProtoField "isActive")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "traceEnabled")
                            (.setProtoField "traceEnabled")
                        ))
                    ))
                ))
            ))
        ))
        (.addChildren (doto (ProtoDeclare. )
            (.setName "OfflineRender")
            (.setAppinfo "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).")
            (.setProtoInterface (doto (ProtoInterface. )
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFString")
                    (.setName "description")
                    (.setAppinfo "Text description to be displayed for this OfflineRender")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFBool")
                    (.setName "enabled")
                    (.setValue "true")
                    (.setAppinfo "Whether this OfflineRender can be activated")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "frameRate")
                    (.setValue "30")
                    (.setAppinfo "Frames per second recorded for this rendering")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFVec2f")
                    (.setName "frameSize")
                    (.setValue "640 480")
                    (.setAppinfo "Size of frame in number of pixels width and height")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOutput")
                    (.setType "SFFloat")
                    (.setName "pixelAspectRatio")
                    (.setValue "1.33")
                    (.setAppinfo "Relative dimensions of pixel height/width typically 1.33 or 1")
                ))
                (.addField (doto (field. )
                    (.setAccessType "inputOnly")
                    (.setType "SFTime")
                    (.setName "set_startTime")
                    (.setAppinfo "Begin render operation")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFFloat")
                    (.setName "progress")
                    (.setAppinfo "Progress performing render operation (0..1)")
                ))
                (.addField (doto (field. )
                    (.setAccessType "outputOnly")
                    (.setType "SFTime")
                    (.setName "renderCompleteTime")
                    (.setAppinfo "Render operation complete")
                ))
                (.addField (doto (field. )
                    (.setAccessType "initializeOnly")
                    (.setType "MFString")
                    (.setName "movieFormat")
                    (.setValue "\"mpeg\"")
                    (.setAppinfo "Format of rendered output movie (mpeg mp4 etc.), use first supported format")
                ))
                (.addField (doto (field. )
                    (.setAccessType "initializeOnly")
                    (.setType "MFString")
                    (.setName "imageFormat")
                    (.setValue "\"png\"")
                    (.setAppinfo "Format of rendered output images (png jpeg gif tiff etc.) use first supported format")
                ))
                (.addField (doto (field. )
                    (.setAccessType "initializeOnly")
                    (.setType "SFBool")
                    (.setName "traceEnabled")
                    (.setAppinfo "enable console output to trace script computations and prototype progress")
                ))
            ))
            (.setProtoBody (doto (ProtoBody. )
                (.addChildren (doto (Script. )
                    (.setDEF "OfflineRenderScript")
                    (.setMustEvaluate true)
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFString")
                        (.setName "description")
                        (.setAppinfo "Text description to be displayed for this OfflineRender")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFBool")
                        (.setName "enabled")
                        (.setAppinfo "Whether this OfflineRender can be activated")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "frameRate")
                        (.setAppinfo "Frames per second recorded for this rendering")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFVec2f")
                        (.setName "frameSize")
                        (.setAppinfo "Size of frame in number of pixels width and height")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOutput")
                        (.setType "SFFloat")
                        (.setName "pixelAspectRatio")
                        (.setAppinfo "Relative dimensions of pixel height/width typically 1.33 or 1")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "inputOnly")
                        (.setType "SFTime")
                        (.setName "set_startTime")
                        (.setAppinfo "Begin render operation")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFFloat")
                        (.setName "progress")
                        (.setAppinfo "Progress performing render operation (0..1)")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "outputOnly")
                        (.setType "SFTime")
                        (.setName "renderCompleteTime")
                        (.setAppinfo "Render operation complete")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "MFString")
                        (.setName "movieFormat")
                        (.setAppinfo "Format of rendered output movie (mpeg mp4 etc.)")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "MFString")
                        (.setName "imageFormat")
                        (.setAppinfo "Format of rendered output images (png jpeg gif tiff etc.)")
                    ))
                    (.addField (doto (field. )
                        (.setAccessType "initializeOnly")
                        (.setType "SFBool")
                        (.setName "traceEnabled")
                        (.setAppinfo "enable console output to trace script computations and prototype progress")
                    ))
(.setSourceCode "ecmascript:
function initialize () // OfflineRenderScript
{
//  tracePrint ('initialize start...');

    tracePrint ('... initialize complete');
}

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

function set_frameRate (eventValue) // input event received for inputOutput field
{
    frameRate = eventValue;
}

function set_frameSize (eventValue) // input event received for inputOutput field
{
    frameSize = eventValue;
}

function set_pixelAspectRatio (eventValue) // input event received for inputOutput field
{
    pixelAspectRatio = eventValue;
}

function set_startTime (eventValue) // input event received for inputOnly field
{
   // do something with input eventValue;
}

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}

function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');
    else
         Browser.print ('[OfflineRender] ' + outputString + '\\n');
}")                    (.setIS (doto (IS. )
                        (.addConnect (doto (connect. )
                            (.setNodeField "description")
                            (.setProtoField "description")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "enabled")
                            (.setProtoField "enabled")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "frameRate")
                            (.setProtoField "frameRate")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "frameSize")
                            (.setProtoField "frameSize")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "pixelAspectRatio")
                            (.setProtoField "pixelAspectRatio")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "set_startTime")
                            (.setProtoField "set_startTime")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "progress")
                            (.setProtoField "progress")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "renderCompleteTime")
                            (.setProtoField "renderCompleteTime")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "movieFormat")
                            (.setProtoField "movieFormat")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "imageFormat")
                            (.setProtoField "imageFormat")
                        ))
                        (.addConnect (doto (connect. )
                            (.setNodeField "traceEnabled")
                            (.setProtoField "traceEnabled")
                        ))
                    ))
                ))
            ))
        ))
        (.addChildren (doto (Background. )
            (.setSkyColor (float-array [0.282353 0.380392 0.470588]))
        ))
        (.addChildren (doto (Anchor. )
            (.setDescription "launch CameraExample scene")
            (.setUrl (into-array ["CameraExamples.x3d" "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d" "CameraExamples.wrl" "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]))
            (.addChildren (doto (Transform. )
                (.addChild (doto (Shape. )
                    (.setAppearance (doto (Appearance. )
                        (.setMaterial (doto (Material. )
                            (.setDiffuseColor (float-array [1 1 0.2]))
                        ))
                    ))
                    (.setGeometry (doto (Text. )
                        (.setString (into-array ["CameraPrototypes.x3d" "defines multiple prototype nodes" "" "Click on this text to see" "CameraExamples.x3d scene"]))
                        (.setFontStyle (doto (FontStyle. )
                            (.setJustify (into-array ["MIDDLE" "MIDDLE"]))
                        ))
                    ))
                ))
            ))
        ))
    ))
))
(.toFileX3D X3D0 "../../../../../data/CameraPrototypes.new.clojure.x3d")
(.toFileJSON X3D0 "../../../../../data/CameraPrototypes.new.clojure.x3dj")
(defn -main []
(println "Hello from your clojure.main function!"))