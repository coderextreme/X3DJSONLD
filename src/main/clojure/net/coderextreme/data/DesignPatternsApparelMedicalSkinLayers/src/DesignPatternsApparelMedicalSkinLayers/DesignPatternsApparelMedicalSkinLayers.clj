(ns DesignPatternsApparelMedicalSkinLayers
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
    (.setProfile "Immersive")
    (.setVersion "4.0")
    (.setHead (doto (head. )
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "title")
            (.setContent "DesignPatternsApparelMedicalSkinLayers.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "description")
            (.setContent "Design patterns for skin and apparel using HAnim2 standard in X3D4")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "Don Brutzman")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "Joe D. Williams")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "Dick Puk")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "created")
            (.setContent "23 December 2022")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "modified")
            (.setContent "2 July 2023")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "DesignPatternsApparelVariations.txt")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "reference")
            (.setContent "X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "warning")
            (.setContent "Under development. This template example does not produce renderable HAnim models.")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "identifier")
            (.setContent "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d")
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
            (.setTitle "HAnimHumanoid skin design patterns for apparel, medical")
        ))
        (.addChildren (doto (Background. )
            (.setSkyColor (float-array [0 0.6 0.6]))
        ))
        (.addChildren (doto (Group. )
            (.setDEF "MultipleHumanoids")
            (.setMetadata (doto (MetadataString. )
                (.setName "HAnimArchitecture")
                (.setReference "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")
                (.setValue (into-array ["E.4 Multiple humanoids per file"]))
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "SimpleSkeleton")
                (.setDEF "a_SimpleSkeleton")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                        (.addChildren (doto (Shape. )
                            (.setDEF "JointVisualization")
                        ))
                        (.addChildren (doto (Shape. )
                            (.setDEF "SegmentVisualization")
                        ))
                        (.addChildren (doto (HAnimSite. )
                            (.setName "feature01_tip")
                            (.setDEF "a_feature01_tip")
                            (.addChildren (doto (Shape. )
                                (.setDEF "SiteVisualization")
                            ))
                        ))
                    ))
                ))
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "SimpleSkeletonMesh")
                (.setDEF "b_SimpleSkeletonMesh")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                        (.addChildren (doto (Shape. )
                            (.setGeometry (doto (IndexedFaceSet. )
                                (.setDEF "SegmentBoneMesh")
                            ))
                        ))
                    ))
                ))
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "SkinIndexedGeometry")
                (.setDEF "c_SkinIndexedGeometry")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                    ))
                ))
                (.addSkin (doto (IndexedFaceSet. )
                    (.setDEF "SkinMeshIFS")
                    (.setContainerFieldOverride "skin")
                ))
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "SkinShapeIndexedGeometry")
                (.setDEF "d_SkinShapeIndexedGeometry")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                    ))
                ))
                (.addSkin (doto (Shape. )
                    (.setContainerFieldOverride "skin")
                    (.setGeometry (doto (IndexedFaceSet. )
                        (.setUSE "SkinMeshIFS")
                    ))
                ))
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "SkinSwitchShapeIndexedGeometry")
                (.setDEF "e_SkinSwitchShapeIndexedGeometry")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                    ))
                ))
;TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
                (.addSkin (doto (Shape. )
                    (.setContainerFieldOverride "skin")
                    (.setGeometry (doto (IndexedFaceSet. )
                        (.setDEF "IndexedSkinMeshIFS")
                        (.setCoord (doto (Coordinate. )
                            (.setDEF "SkinMeshCoordinate")
                        ))
                    ))
                ))
            ))
;similarly for LOD
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "SynthesizedSkinShapeIndexedTwoPartGeometry")
                (.setDEF "f_SynthesizedSkinShapeIndexedTwoPartGeometry")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                    ))
                ))
                (.addSkin (doto (Shape. )
                    (.setContainerFieldOverride "skin")
                    (.setGeometry (doto (IndexedFaceSet. )
                        (.setDEF "TwoPartIndexedSkinMesh")
                        (.setCoord (doto (Coordinate. )
                            (.setDEF "TwoPartSkinMesh")
                        ))
                    ))
                ))
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "ApparelSkinIndexedGeometryMultipleShapes")
                (.setDEF "g_ApparelSkinIndexedGeometryMultipleShapes")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                    ))
                ))
                (.addSkin (doto (Shape. )
                    (.setContainerFieldOverride "skin")
                ))
;allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
;TODO proposed for X3D4.1 <Shape containerField='apparel'/>
            ))
;==============================
            (.addChildren (doto (HAnimHumanoid. )
                (.setName "AnatomySkinIndexedGeometryMultipleShapes")
                (.setDEF "h_AnatomySkinIndexedGeometryMultipleShapes")
                (.setVersion "2.0")
                (.addSkeleton (doto (HAnimJoint. )
                    (.setName "humanoid_root")
                    (.setUlimit (float-array [0 0 0]))
                    (.setLlimit (float-array [0 0 0]))
                    (.setContainerFieldOverride "skeleton")
                    (.addChildren (doto (HAnimSegment. )
                        (.setName "sacrum")
                    ))
                ))
;allow multiple Shape nodes with containerField='skin', one for each layer of skin
                (.addSkin (doto (Shape. )
                    (.setContainerFieldOverride "skin")
                ))
            ))
;==============================
        ))
        (.addChildren (doto (Viewpoint. )
            (.setDEF "ViewHelpText")
            (.setDescription "Select text to see website")
            (.setPosition (float-array [0 0 12]))
        ))
;Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
        (.addChildren (doto (Anchor. )
            (.setDescription "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches")
            (.setParameter (into-array ["target=blank"]))
            (.setUrl (into-array ["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]))
            (.addChildren (doto (Shape. )
;TODO adjust Text string and Box size, then set Material transparency='1'
                (.setGeometry (doto (Text. )
                    (.setString (into-array ["DesignPatternsApparelMedicalSkinLayers.x3d" "" "explores potential apparel approaches"]))
                    (.setFontStyle (doto (FontStyle. )
                        (.setFamily (into-array ["SANS"]))
                        (.setJustify (into-array ["MIDDLE" "MIDDLE"]))
                        (.setSize 0.6)
                        (.setStyle "BOLD")
                    ))
                ))
                (.setAppearance (doto (Appearance. )
                    (.setMaterial (doto (Material. )
                        (.setDiffuseColor (float-array [0.9 0.9 0.9]))
                    ))
                ))
            ))
            (.addChildren (doto (Shape. )
;Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
                (.setGeometry (doto (Box. )
                    (.setSize (float-array [11 2 0.001]))
                ))
                (.setAppearance (doto (Appearance. )
                    (.setMaterial (doto (Material. )
                        (.setTransparency 1.0)
                    ))
                ))
            ))
        ))
    ))
))
(.toFileX3D X3D0 "../../../../../data/DesignPatternsApparelMedicalSkinLayers.new.clojure.x3d")
(.toFileJSON X3D0 "../../../../../data/DesignPatternsApparelMedicalSkinLayers.new.clojure.json")
(defn -main []
(println "Hello from your main function!"))