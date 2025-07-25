(ns SpatialAudioCameraAnimation
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
(def EXPORT org.web3d.x3d.jsail.Networking.EXPORT)
(def IMPORT org.web3d.x3d.jsail.Networking.IMPORT)
(def X3D0 (doto (X3D.)
    (.setProfile "Full")
    (.setVersion "4.0")
    (.setHead (doto (head. )
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "title")
            (.setContent "SpatialAudioCameraAnimation.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "description")
            (.setContent "In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "info")
            (.setContent "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "created")
            (.setContent "28 October 2020")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "modified")
            (.setContent "5 December 2021")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "CHANGELOG.txt")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "TODO")
            (.setContent "credit for audio files")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "https://www.medialab.hmu.gr/minipages/x3domAudio")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "identifier")
            (.setContent "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "generator")
            (.setContent "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "license")
            (.setContent "../license.html")
        ))
    ))
    (.setScene (doto (Scene. )
        (.addChildren (doto (WorldInfo. )
            (.setTitle "SpatialAudioCameraAnimation.x3d")
        ))
        (.addChildren (doto (NavigationInfo. )
        ))
        (.addChildren (doto (Background. )
            (.setBackUrl (into-array ["images/generic/BK1.png" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]))
            (.setBottomUrl (into-array ["images/generic/DN1.png" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]))
            (.setFrontUrl (into-array ["images/generic/FR1.png" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]))
            (.setLeftUrl (into-array ["images/generic/LF1.png" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]))
            (.setRightUrl (into-array ["images/generic/RT1.png" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]))
            (.setTopUrl (into-array ["images/generic/UP1.png" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]))
        ))
        (.addChildren (doto (Viewpoint. )
            (.setDEF "Camera001")
            (.setDescription "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view")
            (.setOrientation (float-array [1 0 0 -0.523599]))
            (.setPosition (float-array [0 2000 3500]))
        ))
        (.addChildren (doto (TimeSensor. )
            (.setDEF "TIMER")
            (.setCycleInterval 33.333332)
            (.setLoop true)
        ))
        (.addChildren (doto (PositionInterpolator. )
            (.setDEF "Camera001-POS-INTERP")
            (.setKey (float-array [0 0.25 0.5 0.75 1]))
            (.setKeyValue (float-array [0 2000 3500 0 2000 0 0 2000 -3500 0 2000 0 0 2000 3500]))
        ))
        (.addChildren (doto (OrientationInterpolator. )
            (.setDEF "Camera001-ROT-INTERP")
            (.setKey (float-array [0 0.25 0.5 0.75 1]))
            (.setKeyValue (float-array [1 0 0 -0.523599 0.99999 0.003554 0.002727 -1.309007 0 -0.965926 -0.258819 -3.141593 0.002282 -0.793351 -0.60876 -3.135645 1 -0.000001 0 -0.523599]))
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "fraction_changed")
            (.setFromNode "TIMER")
            (.setToField "set_fraction")
            (.setToNode "Camera001-POS-INTERP")
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "value_changed")
            (.setFromNode "Camera001-POS-INTERP")
            (.setToField "set_position")
            (.setToNode "Camera001")
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "fraction_changed")
            (.setFromNode "TIMER")
            (.setToField "set_fraction")
            (.setToNode "Camera001-ROT-INTERP")
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "value_changed")
            (.setFromNode "Camera001-ROT-INTERP")
            (.setToField "set_orientation")
            (.setToNode "Camera001")
        ))
        (.addChildren (doto (Transform. )
            (.setDEF "Floor")
            (.setTranslation (float-array [1.241 0 0.358]))
            (.addChild (doto (Shape. )
                (.setAppearance (doto (Appearance. )
                    (.setDEF "WireColor")
                    (.setMaterial (doto (Material. )
                        (.setDiffuseColor (float-array [0.122 0.114 0.125]))
                    ))
                ))
                (.setGeometry (doto (Box. )
                    (.setSize (float-array [2000 1 2000]))
                ))
            ))
        ))
        (.addChildren (doto (Transform. )
            (.setDEF "TransformAudio1")
            (.setTranslation (float-array [-933.123474 0 -926.253235]))
            (.addChild (doto (Shape. )
                (.setAppearance (doto (Appearance. )
                    (.setDEF "WireColor_1")
                    (.setMaterial (doto (Material. )
                        (.setDiffuseColor (float-array [0.690196 0.101961 0.101961]))
                    ))
                ))
                (.setGeometry (doto (Sphere. )
                    (.setRadius 100.0)
                ))
            ))
            (.addChildren (doto (Billboard. )
                (.addChildren (doto (Transform. )
                    (.setDEF "violin")
                    (.setRotation (float-array [1 0 0 -0.5]))
                    (.setScale (float-array [100 100 100]))
                    (.setTranslation (float-array [0 100 0]))
                    (.addChild (doto (Shape. )
                        (.setAppearance (doto (Appearance. )
                            (.setMaterial (doto (Material. )
                                (.setAmbientIntensity 0.0933)
                                (.setDiffuseColor (float-array [1 1 1]))
                                (.setShininess 0.51)
                                (.setSpecularColor (float-array [0.46 0.46 0.46]))
                            ))
                        ))
                        (.setGeometry (doto (Text. )
                            (.setString (into-array ["Violin"]))
                            (.setFontStyle (doto (FontStyle. )
                                (.setDEF "ModelFontStyle")
                                (.setFamily (into-array ["Times" "SERIF"]))
                                (.setStyle "BOLD")
                            ))
                        ))
                    ))
                ))
            ))
        ))
        (.addChildren (doto (Transform. )
            (.setDEF "TransformAudio2")
            (.setTranslation (float-array [933.475586 0 924.423218]))
            (.addChild (doto (Shape. )
                (.setAppearance (doto (Appearance. )
                    (.setDEF "WireColor_2")
                    (.setMaterial (doto (Material. )
                        (.setDiffuseColor (float-array [0.105882 0.694118 0.580392]))
                    ))
                ))
                (.setGeometry (doto (Sphere. )
                    (.setRadius 100.0)
                ))
            ))
            (.addChildren (doto (Billboard. )
                (.addChildren (doto (Transform. )
                    (.setDEF "saxophone")
                    (.setRotation (float-array [1 0 0 -0.5]))
                    (.setScale (float-array [100 100 100]))
                    (.setTranslation (float-array [0 100 0]))
                    (.addChild (doto (Shape. )
                        (.setAppearance (doto (Appearance. )
                            (.setMaterial (doto (Material. )
                                (.setAmbientIntensity 0.0933)
                                (.setDiffuseColor (float-array [1 1 1]))
                                (.setShininess 0.51)
                                (.setSpecularColor (float-array [0.46 0.46 0.46]))
                            ))
                        ))
                        (.setGeometry (doto (Text. )
                            (.setString (into-array ["Saxophone"]))
                            (.setFontStyle (doto (FontStyle. )
                                (.setUSE "ModelFontStyle")
                            ))
                        ))
                    ))
                ))
            ))
        ))
        (.addChildren (doto (ListenerPointSource. )
            (.setTrackCurrentView true)
        ))
        (.addChildren (doto (StreamAudioDestination. )
            (.addChildren (doto (SpatialSound. )
                (.setDEF "Audio1")
                (.addChildren (doto (Gain. )
                    (.addChildren (doto (AudioClip. )
                        (.setDescription "Violin")
                        (.setLoop true)
                        (.setUrl (into-array ["sound/violin.mp3" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]))
                    ))
                ))
            ))
            (.addChildren (doto (SpatialSound. )
                (.setDEF "Audio2")
                (.addChildren (doto (Gain. )
                    (.addChildren (doto (AudioClip. )
                        (.setDescription "Saxophone")
                        (.setLoop true)
                        (.setUrl (into-array ["sound/saxophone.mp3" "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]))
                    ))
                ))
            ))
        ))
    ))
))
(.toFileX3D X3D0 "../../../../../data/SpatialAudioCameraAnimation.new.clojure.x3d")
(.toFileJSON X3D0 "../../../../../data/SpatialAudioCameraAnimation.new.clojure.json")
(defn -main []
(println "Hello from your main function!"))