(ns flowers4
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
    (.setVersion "4.0")
    (.setHead (doto (head. )
        (.addComponent (doto (component. )
            (.setName "Scripting")
            (.setLevel 1)
        ))
        (.addComponent (doto (component. )
            (.setName "EnvironmentalEffects")
            (.setLevel 3)
        ))
        (.addComponent (doto (component. )
            (.setName "Shaders")
            (.setLevel 1)
        ))
        (.addComponent (doto (component. )
            (.setName "CubeMapTexturing")
            (.setLevel 1)
        ))
        (.addComponent (doto (component. )
            (.setName "Texturing")
            (.setLevel 1)
        ))
        (.addComponent (doto (component. )
            (.setName "Rendering")
            (.setLevel 1)
        ))
        (.addComponent (doto (component. )
            (.setName "Shape")
            (.setLevel 4)
        ))
        (.addComponent (doto (component. )
            (.setName "Grouping")
            (.setLevel 3)
        ))
        (.addComponent (doto (component. )
            (.setName "Core")
            (.setLevel 1)
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "title")
            (.setContent "flowers4.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "creator")
            (.setContent "John Carlson")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "generator")
            (.setContent "manual")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "identifier")
            (.setContent "https://coderextreme.net/X3DJSONLD/src/main/personal/flowers4.x3d")
        ))
        (.addMeta (doto (org.web3d.x3d.jsail.Core.meta. )
            (.setName "description")
            (.setContent "an animated flower")
        ))
    ))
    (.setScene (doto (Scene. )
        (.addChildren (doto (NavigationInfo. )
        ))
        (.addChildren (doto (Background. )
            (.setBackUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_back.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]))
            (.setBottomUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]))
            (.setFrontUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_front.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]))
            (.setLeftUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_left.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]))
            (.setRightUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_right.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]))
            (.setTopUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_top.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))
        ))
        (.addChildren (doto (Transform. )
            (.setDEF "transform")
            (.addChild (doto (Shape. )
                (.setAppearance (doto (Appearance. )
                    (.setMaterial (doto (Material. )
                        (.setDiffuseColor (float-array [0.7 0.7 0.7]))
                        (.setSpecularColor (float-array [0.5 0.5 0.5]))
                    ))
                    (.setTexture (doto (ComposedCubeMapTexture. )
                        (.setBackTexture (doto (ImageTexture. )
                            (.setUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_back.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]))
                        ))
                        (.setBottomTexture (doto (ImageTexture. )
                            (.setUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]))
                        ))
                        (.setFrontTexture (doto (ImageTexture. )
                            (.setUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_front.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]))
                        ))
                        (.setLeftTexture (doto (ImageTexture. )
                            (.setUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_left.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]))
                        ))
                        (.setRightTexture (doto (ImageTexture. )
                            (.setUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_right.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]))
                        ))
                        (.setTopTexture (doto (ImageTexture. )
                            (.setUrl (into-array ["../resources/images/all_probes/stpeters_cross/stpeters_top.png" "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))
                        ))
                    ))
                    (.addShaders (doto (ComposedShader. )
                        (.setDEF "shader")
                        (.setLanguage "GLSL")
                        (.addField (doto (field. )
                            (.setName "cube")
                            (.setType "SFInt32")
                            (.setAccessType "inputOutput")
                            (.setValue "0")
                        ))
                        (.addField (doto (field. )
                            (.setName "chromaticDispertion")
                            (.setAccessType "inputOutput")
                            (.setType "SFVec3f")
                            (.setValue "0.98 1 1.033")
                        ))
                        (.addField (doto (field. )
                            (.setName "bias")
                            (.setType "SFFloat")
                            (.setAccessType "inputOutput")
                            (.setValue "0.5")
                        ))
                        (.addField (doto (field. )
                            (.setName "scale")
                            (.setType "SFFloat")
                            (.setAccessType "inputOutput")
                            (.setValue "0.5")
                        ))
                        (.addField (doto (field. )
                            (.setName "power")
                            (.setType "SFFloat")
                            (.setAccessType "inputOutput")
                            (.setValue "2")
                        ))
                        (.addParts (doto (ShaderPart. )
                            (.setUrl (into-array ["../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]))
                            (.setType "VERTEX")
                        ))
                        (.addParts (doto (ShaderPart. )
                            (.setUrl (into-array ["../shaders/x_ite.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]))
                            (.setType "FRAGMENT")
                        ))
                    ))
                ))
(.addComments "<Sphere>")
                (.setGeometry (doto (IndexedFaceSet. )
                    (.setConvex false)
                    (.setDEF "Orbit")
                    (.setCoord (doto (Coordinate. )
                        (.setDEF "OrbitCoordinates")
                    ))
                ))
            ))
        ))
        (.addChildren (doto (Script. )
            (.setDEF "OrbitScript")
            (.addField (doto (field. )
                (.setName "set_fraction")
                (.setAccessType "inputOnly")
                (.setType "SFFloat")
            ))
            (.addField (doto (field. )
                (.setName "coordinates")
                (.setAccessType "inputOutput")
                (.setType "MFVec3f")
            ))
            (.addField (doto (field. )
                (.setName "coordIndexes")
                (.setAccessType "outputOnly")
                (.setType "MFInt32")
            ))
            (.addField (doto (field. )
                (.setName "e")
                (.setType "SFFloat")
                (.setAccessType "inputOutput")
                (.setValue "5")
            ))
            (.addField (doto (field. )
                (.setName "f")
                (.setType "SFFloat")
                (.setAccessType "inputOutput")
                (.setValue "5")
            ))
            (.addField (doto (field. )
                (.setName "g")
                (.setType "SFFloat")
                (.setAccessType "inputOutput")
                (.setValue "5")
            ))
            (.addField (doto (field. )
                (.setName "h")
                (.setType "SFFloat")
                (.setAccessType "inputOutput")
                (.setValue "5")
            ))
(.setSourceCode "ecmascript:
function initialize() {
     var resolution = 100;
     updateCoordinates(resolution);
     var cis = [];
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis.push(i*resolution+j);
	     cis.push(i*resolution+j+1);
	     cis.push((i+1)*resolution+j+1);
	     cis.push((i+1)*resolution+j);
	     cis.push(-1);
	}
    }
    coordIndexes = new MFInt32(...cis);
}

function updateCoordinates(resolution) {
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = [];
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
		crds.push(new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		));
		theta += delta;
	}
	phi += delta;
     }
     coordinates = new MFVec3f(...crds);
}

function set_fraction(fraction, eventTime) {
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	if (e < 1) {
		e = 10;
	}
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	var resolution = 100;
	updateCoordinates(resolution);
}")        ))
        (.addChildren (doto (TimeSensor. )
            (.setDEF "Clock")
            (.setCycleInterval 16.0)
            (.setLoop true)
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "coordIndexes")
            (.setFromNode "OrbitScript")
            (.setToField "set_coordIndex")
            (.setToNode "Orbit")
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "coordinates")
            (.setFromNode "OrbitScript")
            (.setToField "set_point")
            (.setToNode "OrbitCoordinates")
        ))
        (.addChildren (doto (ROUTE. )
            (.setFromField "fraction_changed")
            (.setFromNode "Clock")
            (.setToField "set_fraction")
            (.setToNode "OrbitScript")
        ))
    ))
))
(.toFileX3D X3D0 "../../../../../personal/flowers4.new.clojure.x3d")
(.toFileJSON X3D0 "../../../../../personal/flowers4.new.clojure.json")
(defn -main []
(println "Hello from your main function!"))