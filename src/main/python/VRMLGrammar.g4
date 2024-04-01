grammar VRMLGrammar;

NCNameStartChar :   ( [A-Z] | '_' | [a-z] | 'À'..'Ö' | 'Ø'..'ö' | 'ø'..'˿' | 'Ͱ'..'ͽ' | 'Ϳ'..'῿' | '‌'..'‍' | '⁰'..'↏' | 'Ⰰ'..'⿯' | '、'..'퟿' | '豈'..'﷏' | 'ﷰ'..'�' );
NCNameChar : ( NCNameStartChar | '-' | '.' | [0-9] | '·' | '̀'..'ͯ' | '‿'..'⁀' );
NCName        : NCNameStartChar (NCNameChar)*;
NameStartChar : ( ':' | [A-Z] | '_' | [a-z] | 'À'..'Ö' | 'Ø'..'ö' | 'ø'..'˿' | 'Ͱ'..'ͽ' | 'Ϳ'..'῿' | '‌'..'‍' | '⁰'..'↏' | 'Ⰰ'..'⿯' | '、'..'퟿' | '豈'..'﷏' | 'ﷰ'..'�' );
NameChar :     ( NameStartChar | '-' | '.' | [0-9] | '·' | '̀'..'ͯ' | '‿'..'⁀' );
Name : NameStartChar (NameChar)*;
NotWhite :  ~(' '|'\t'|'\r'|'\n');
White :  (' '|'\t'|'\r'|'\n')+;
xsID : NCName
;xsIDREF : NCName;
xsNMTOKEN : (NameChar)+;
xsNMTOKENS : xsNMTOKEN (' ' xsNMTOKEN)*;
xsstring : NotWhite+ (White+ NotWhite+)*;
dEF : ('DEF' xsID){0,1};
accessTypeChoices : ('initializeOnly'|'inputOnly'|'outputOnly'|'inputOutput');
acronymChoices : ('CAD'|'HSV'|'JPEG'|'MIDI'|'MIME'|'MF'|'MPEG'|'PNG'|'RGB'|'RURL'|'SAI'|'SF'|'UCS'|'URI'|'URL'|'URN'|'UTF-8');
alphaModeChoices : ('AUTO'|'OPAQUE'|'MASK'|'BLEND');
appliedParametersChoices : ('"BOUNCE"'|'"USER_FRICTION"'|'"FRICTION_COEFFICIENT-2"'|'"ERROR_REDUCTION"'|'"CONSTANT_FORCE"'|'"SPEED-1"'|'"SPEED-2"'|'"SLIP-1"'|'"SLIP-2"');
bboxSizeType : SFVec3f;
biquadTypeFilterChoices : ('LOWPASS'|'HIGHPASS'|'BANDPASS'|'LOWSHELF'|'HIGHSHELF'|'PEAKING'|'NOTCH'|'ALLPASS');
channelCountModeChoices : ('MAX'|'CLAMPED_MAX'|'EXPLICIT');
channelInterpretationChoices : ('SPEAKERS'|'DISCRETE');
closureTypeChoices : ('PIE'|'CHORD');
componentNameChoices : ('Core'|'CADGeometry'|'CubeMapTexturing'|'DIS'|'EnvironmentalEffects'|'EnvironmentalSensor'|'EventUtilities'|'Followers'|'Geometry2D'|'Geometry3D'|'Geospatial'|'Grouping'|'HAnim'|'H-Anim'|'Interpolation'|'KeyDeviceSensor'|'Layering'|'Layout'|'Lighting'|'Navigation'|'Networking'|'NURBS'|'ParticleSystems'|'Picking'|'PointingDeviceSensor'|'TextureProjection'|'Rendering'|'RigidBodyPhysics'|'Scripting'|'Shaders'|'Shape'|'Sound'|'Text'|'Texturing'|'Texturing3D'|'Time'|'VolumeRendering');
containerFieldChoicesAudioClip : ('children'|'source'|'watchList');
containerFieldChoicesAudioGraph : ('children'|'outputs'|'source');
containerFieldChoicesColor : ('color'|'colorRamp');
containerFieldChoicesDISEntityTypeMapping : ('children'|'mapping'|'watchList');
containerFieldChoicesGroupLODShapeTransformSwitch : ('children'|'proxy'|'rootNode'|'shape'|'skin');
containerFieldChoicesHAnimJoint : ('children'|'joints'|'skeleton');
containerFieldChoicesHAnimMotion : ('children'|'motions');
containerFieldChoicesHAnimSegment : ('children'|'segments');
containerFieldChoicesHAnimSite : ('children'|'sites'|'skeleton'|'viewpoints');
containerFieldChoicesMetadata : ('metadata'|'value');
containerFieldChoicesPackagedShader : ('shaders'|'children');
containerFieldChoicesShaderPart : ('parts'|'children');
containerFieldChoicesSoundSource : ('children'|'source');
containerFieldChoicesTextureCoordinate : ('texCoord'|'texCoordRamp');
containerFieldChoicesX3DCoordinateNode : ('coord'|'controlPoint'|'skinCoord'|'skinBindingCoords');
containerFieldChoicesX3DNormalNode : ('normal'|'skinNormal'|'skinBindingNormals');
containerFieldChoicesX3DTexture2DNode : ('texture'|'source'|'backTexture'|'bottomTexture'|'frontTexture'|'leftTexture'|'rightTexture'|'topTexture'|'children'|'baseTexture'|'emissiveTexture'|'metallicRoughnessTexture'|'normalTexture'|'occlusionTexture');
containerFieldChoicesX3DTexture3DNode : ('gradients'|'segmentIdentifiers'|'surfaceNormals'|'texture'|'voxels'|'children');
containerFieldChoicesX3DUrlObject : ('children'|'children');
containerFieldChoicesX3dUrlObjectTexture : ('texture'|'children'|'source'|'backTexture'|'bottomTexture'|'frontTexture'|'leftTexture'|'rightTexture'|'topTexture'|'baseTexture'|'emissiveTexture'|'metallicRoughnessTexture'|'normalTexture'|'occlusionTexture');
distanceModelChoices : ('LINEAR'|'INVERSE'|'EXPONENTIAL');
fieldTypeChoices : ('SFBool'|'MFBool'|'SFColor'|'MFColor'|'SFColorRGBA'|'MFColorRGBA'|'SFDouble'|'MFDouble'|'SFFloat'|'MFFloat'|'SFImage'|'MFImage'|'SFInt32'|'MFInt32'|'SFNode'|'MFNode'|'SFRotation'|'MFRotation'|'SFString'|'MFString'|'SFTime'|'MFTime'|'SFVec2d'|'MFVec2d'|'SFVec2f'|'MFVec2f'|'SFVec3d'|'MFVec3d'|'SFVec3f'|'MFVec3f'|'SFVec4d'|'MFVec4d'|'SFVec4f'|'MFVec4f'|'SFMatrix3d'|'MFMatrix3d'|'SFMatrix3f'|'MFMatrix3f'|'SFMatrix4d'|'MFMatrix4d'|'SFMatrix4f'|'MFMatrix4f');
fogTypeChoices : ('LINEAR'|'EXPONENTIAL');
fontFamilyValues : ('"SANS"'|'"SERIF"'|'"TYPEWRITER"');
fontStyleChoices : ('PLAIN'|'BOLD'|'ITALIC'|'BOLDITALIC');
forceOutputValues : ('"ALL"'|'"NONE"');
generatedCubeMapTextureUpdateChoices : ('NONE'|'NEXT_FRAME_ONLY'|'ALWAYS');
geoMetadataSummaryKeyValues : ('title'|'description'|'coordinateSystem'|'horizontalDatum'|'verticalDatum'|'ellipsoid'|'extent'|'resolution'|'originator'|'copyright'|'date'|'metadataFormat'|'dataUrl'|'dataFormat');
geoSystemEarthEllipsoidValues : ('AM'|'AN'|'BN'|'BR'|'CC'|'CD'|'EA'|'EB'|'EC'|'ED'|'EE'|'EF'|'FA'|'HE'|'HO'|'ID'|'IN'|'KA'|'RF'|'SA'|'WD'|'WE'|'WGS84'|'Zn'|'S');
geoSystemSpatialReferenceFrameValues : ('GD'|'UTM'|'GC'|'GDC'|'GCC');
geoSystemType : '[' (MFString)* ']';
glossaryChoices : ('activate'|'ancestor'|'AudioGraph'|'author'|'AuthoringTool'|'avatar'|'bearing'|'BindableNode'|'browser'|'BrowserExtension'|'BuiltInNode'|'callback'|'child'|'ChildrenNode'|'ClientSystem'|'CollisionProxy'|'ColourModel'|'culling'|'descendant'|'DisplayDevice'|'DragSensor'|'EnvironmentalSensor'|'event'|'EventCascade'|'ExecutionModel'|'ExternaPrototype'|'field'|'FieldName'|'frame'|'generator'|'GeometricPropertyNode'|'GeometryNode'|'grab'|'GroupingNode'|'HostApplication'|'image'|'immersive'|'Inlining'|'instance'|'instantiation'|'InterpolatorNode'|'intranet'|'LevelOfDetail'|'LineTerminator'|'loop'|'multimedia'|'network'|'node'|'nodeType'|'object'|'orderOfPreference'|'panorama'|'parent'|'pixel'|'pointer'|'pointingDevice'|'pointingDeviceSensor'|'polyline'|'profile'|'prototype'|'prototyping'|'ROUTE'|'sceneGraph'|'script'|'scripting'|'sensorNode'|'separatorCharacter'|'sibling'|'simulationTick'|'slerp'|'specialGroupNode'|'statement'|'texel'|'texture'|'textureCoordinates'|'time'|'timestamp'|'transformationHierarchy'|'transparencyChunk'|'traverse'|'user'|'viewer'|'virtualWorld'|'whiteSpace'|'world'|'worldCoordinateSpace'|'X3DBrowser'|'X3DDocumentServer'|'X3DFile'|'XYPlane'|'YZPlane'|'ZXPlane');
hanimFeaturePointNameValues : ('skull_vertex'|'glabella'|'sellion'|'l_infraorbitale'|'l_tragion'|'l_gonion'|'r_infraorbitale'|'r_tragion'|'r_gonion'|'supramenton'|'cervicale'|'adams_apple'|'suprasternale'|'substernale'|'l_clavicle'|'l_acromion'|'l_axilla_proximal'|'l_axilla_distal'|'l_axilla_posterior_folds'|'r_clavicle'|'r_acromion'|'r_axilla_proximal'|'r_axilla_distal'|'r_axilla_posterior_folds'|'spine_1_middle_back'|'spine_2_lower_back'|'waist_preferred_anterior'|'waist_preferred_posterior'|'l_rib10'|'l_thelion'|'r_rib10'|'r_thelion'|'l_asis'|'l_iliocristale'|'l_psis'|'r_asis'|'r_iliocristale'|'r_psis'|'crotch'|'l_femoral_lateral_epicondyle'|'l_femoral_medial_epicondyle'|'l_suprapatella'|'l_trochanterion'|'r_femoral_lateral_epicondyle'|'r_femoral_medial_epicondyle'|'r_suprapatella'|'r_trochanterion'|'l_tibiale'|'l_medial_malleolus'|'l_lateral_malleolus'|'l_sphyrion'|'r_tibiale'|'r_medial_malleolus'|'r_lateral_malleolus'|'r_sphyrion'|'l_metatarsal_phalanx_1'|'l_metatarsal_phalanx_5'|'l_dactylion'|'l_calcaneus_posterior'|'r_metatarsal_phalanx_1'|'r_metatarsal_phalanx_5'|'r_dactylion'|'r_calcaneus_posterior'|'l_humeral_lateral_epicondyle'|'l_humeral_medial_epicondyle'|'l_olecranon'|'r_humeral_lateral_epicondyle'|'r_humeral_medial_epicondyle'|'r_olecranon'|'l_radiale'|'l_ulnar_styloid'|'l_radial_styloid'|'r_radiale'|'r_ulnar_styloid'|'r_radial_styloid'|'l_metacarpal_phalanx_2'|'l_metacarpal_phalanx_3'|'l_metacarpal_phalanx_5'|'r_metacarpal_phalanx_2'|'r_metacarpal_phalanx_3'|'r_metacarpal_phalanx_5'|'nuchale'|'l_neck_base'|'r_neck_base'|'navel'|'l_ectocanthus'|'r_ectocanthus'|'menton'|'mesosternale'|'opisthocranion'|'l_knee_crease'|'r_knee_crease'|'rear_center_midsagittal_plane'|'buttocks_standing_wall_contact_point'|'l_chest_midsagittal_plane'|'r_chest_midsagittal_plane'|'l_bideltoid'|'r_bideltoid'|'l_carpal_distal_phalanx_1'|'l_carpal_distal_phalanx_2'|'l_carpal_distal_phalanx_3'|'l_carpal_distal_phalanx_4'|'l_carpal_distal_phalanx_5'|'r_carpal_distal_phalanx_1'|'r_carpal_distal_phalanx_2'|'r_carpal_distal_phalanx_3'|'r_carpal_distal_phalanx_4'|'r_carpal_distal_phalanx_5'|'l_tarsal_distal_phalanx_1'|'l_tarsal_distal_phalanx_2'|'l_tarsal_distal_phalanx_3'|'l_tarsal_distal_phalanx_4'|'l_tarsal_distal_phalanx_5'|'r_tarsal_distal_phalanx_1'|'r_tarsal_distal_phalanx_2'|'r_tarsal_distal_phalanx_3'|'r_tarsal_distal_phalanx_4'|'r_tarsal_distal_phalanx_5');
hanimHumanoidInfoKeyValues : ('authorName'|'authorEmail'|'copyright'|'creationDate'|'usageRestrictions'|'humanoidVersion'|'age'|'gender'|'height'|'weight');
hanimJointNameValues : ('humanoid_root'|'sacroiliac'|'l_hip'|'l_knee'|'l_talocrural'|'l_talocalcaneonavicular'|'l_cuneonavicular_1'|'l_tarsometatarsal_1'|'l_metatarsophalangeal_1'|'l_tarsal_interphalangeal_1'|'l_cuneonavicular_2'|'l_tarsometatarsal_2'|'l_metatarsophalangeal_2'|'l_tarsal_proximal_interphalangeal_2'|'l_tarsal_distal_interphalangeal_2'|'l_cuneonavicular_3'|'l_tarsometatarsal_3'|'l_metatarsophalangeal_3'|'l_tarsal_proximal_interphalangeal_3'|'l_tarsal_distal_interphalangeal_3'|'l_calcaneocuboid'|'l_transversetarsal'|'l_tarsometatarsal_4'|'l_metatarsophalangeal_4'|'l_tarsal_proximal_interphalangeal_4'|'l_tarsal_distal_interphalangeal_4'|'l_tarsometatarsal_5'|'l_metatarsophalangeal_5'|'l_tarsal_proximal_interphalangeal_5'|'l_tarsal_distal_interphalangeal_5'|'r_hip'|'r_knee'|'r_talocrural'|'r_talocalcaneonavicular'|'r_cuneonavicular_1'|'r_tarsometatarsal_1'|'r_metatarsophalangeal_1'|'r_tarsal_interphalangeal_1'|'r_cuneonavicular_2'|'r_tarsometatarsal_2'|'r_metatarsophalangeal_2'|'r_tarsal_proximal_interphalangeal_2'|'r_tarsal_distal_interphalangeal_2'|'r_cuneonavicular_3'|'r_tarsometatarsal_3'|'r_metatarsophalangeal_3'|'r_tarsal_proximal_interphalangeal_3'|'r_tarsal_distal_interphalangeal_3'|'r_calcaneocuboid'|'r_transversetarsal'|'r_tarsometatarsal_4'|'r_metatarsophalangeal_4'|'r_tarsal_proximal_interphalangeal_4'|'r_tarsal_distal_interphalangeal_4'|'r_tarsometatarsal_5'|'r_metatarsophalangeal_5'|'r_tarsal_proximal_interphalangeal_5'|'r_tarsal_distal_interphalangeal_5'|'vl5'|'vl4'|'vl3'|'vl2'|'vl1'|'vt12'|'vt11'|'vt10'|'vt9'|'vt8'|'vt7'|'vt6'|'vt5'|'vt4'|'vt3'|'vt2'|'vt1'|'vc7'|'vc6'|'vc5'|'vc4'|'vc3'|'vc2'|'vc1'|'skullbase'|'l_eyelid_joint'|'r_eyelid_joint'|'l_eyeball_joint'|'r_eyeball_joint'|'l_eyebrow_joint'|'r_eyebrow_joint'|'temporomandibular'|'l_sternoclavicular'|'l_acromioclavicular'|'l_shoulder'|'l_elbow'|'l_radiocarpal'|'l_midcarpal_1'|'l_carpometacarpal_1'|'l_metacarpophalangeal_1'|'l_carpal_interphalangeal_1'|'l_midcarpal_2'|'l_carpometacarpal_2'|'l_metacarpophalangeal_2'|'l_carpal_proximal_interphalangeal_2'|'l_carpal_distal_interphalangeal_2'|'l_midcarpal_3'|'l_carpometacarpal_3'|'l_metacarpophalangeal_3'|'l_carpal_proximal_interphalangeal_3'|'l_carpal_distal_interphalangeal_3'|'l_midcarpal_4_5'|'l_carpometacarpal_4'|'l_metacarpophalangeal_4'|'l_carpal_proximal_interphalangeal_4'|'l_carpal_distal_interphalangeal_4'|'l_carpometacarpal_5'|'l_metacarpophalangeal_5'|'l_carpal_proximal_interphalangeal_5'|'l_carpal_distal_interphalangeal_5'|'r_sternoclavicular'|'r_acromioclavicular'|'r_shoulder'|'r_elbow'|'r_radiocarpal'|'r_midcarpal_1'|'r_carpometacarpal_1'|'r_metacarpophalangeal_1'|'r_carpal_interphalangeal_1'|'r_midcarpal_2'|'r_carpometacarpal_2'|'r_metacarpophalangeal_2'|'r_carpal_proximal_interphalangeal_2'|'r_carpal_distal_interphalangeal_2'|'r_midcarpal_3'|'r_carpometacarpal_3'|'r_metacarpophalangeal_3'|'r_carpal_proximal_interphalangeal_3'|'r_carpal_distal_interphalangeal_3'|'r_midcarpal_4_5'|'r_carpometacarpal_4'|'r_metacarpophalangeal_4'|'r_carpal_proximal_interphalangeal_4'|'r_carpal_distal_interphalangeal_4'|'r_carpometacarpal_5'|'r_metacarpophalangeal_5'|'r_carpal_proximal_interphalangeal_5'|'r_carpal_distal_interphalangeal_5');
hanimSegmentNameValues : ('sacrum'|'pelvis'|'l_thigh'|'l_calf'|'l_talus'|'l_navicular'|'l_cuneiform_1'|'l_metatarsal_1'|'l_tarsal_proximal_phalanx_1'|'l_tarsal_distal_phalanx_1'|'l_cuneiform_2'|'l_metatarsal_2'|'l_tarsal_proximal_phalanx_2'|'l_tarsal_middle_phalanx_2'|'l_tarsal_distal_phalanx_2'|'l_cuneiform_3'|'l_metatarsal_3'|'l_tarsal_proximal_phalanx_3'|'l_tarsal_middle_phalanx_3'|'l_tarsal_distal_phalanx_3'|'l_calcaneus'|'l_cuboid'|'l_metatarsal_4'|'l_tarsal_proximal_phalanx_4'|'l_tarsal_middle_phalanx_4'|'l_tarsal_distal_phalanx_4'|'l_metatarsal_5'|'l_tarsal_proximal_phalanx_5'|'l_tarsal_middle_phalanx_5'|'l_tarsal_distal_phalanx_5'|'r_thigh'|'r_calf'|'r_talus'|'r_navicular'|'r_cuneiform_1'|'r_metatarsal_1'|'r_tarsal_proximal_phalanx_1'|'r_tarsal_distal_phalanx_1'|'r_cuneiform_2'|'r_metatarsal_2'|'r_tarsal_proximal_phalanx_2'|'r_tarsal_middle_phalanx_2'|'r_tarsal_distal_phalanx_2'|'r_cuneiform_3'|'r_metatarsal_3'|'r_tarsal_proximal_phalanx_3'|'r_tarsal_middle_phalanx_3'|'r_tarsal_distal_phalanx_3'|'r_calcaneus'|'r_cuboid'|'r_metatarsal_4'|'r_tarsal_proximal_phalanx_4'|'r_tarsal_middle_phalanx_4'|'r_tarsal_distal_phalanx_4'|'r_metatarsal_5'|'r_tarsal_proximal_phalanx_5'|'r_tarsal_middle_phalanx_5'|'r_tarsal_distal_phalanx_5'|'l5'|'l4'|'l3'|'l2'|'l1'|'t12'|'t11'|'t10'|'t9'|'t8'|'t7'|'t6'|'t5'|'t4'|'t3'|'t2'|'t1'|'c7'|'c6'|'c5'|'c4'|'c3'|'c2'|'c1'|'skull'|'l_eyelid'|'r_eyelid'|'l_eyeball'|'r_eyeball'|'l_eyebrow'|'r_eyebrow'|'jaw'|'l_clavicle'|'l_scapula'|'l_upperarm'|'l_forearm'|'l_carpal'|'l_trapezium'|'l_metacarpal_1'|'l_carpal_proximal_phalanx_1'|'l_carpal_distal_phalanx_1'|'l_trapezoid'|'l_metacarpal_2'|'l_carpal_proximal_phalanx_2'|'l_carpal_middle_phalanx_2'|'l_carpal_distal_phalanx_2'|'l_capitate'|'l_metacarpal_3'|'l_carpal_proximal_phalanx_3'|'l_carpal_middle_phalanx_3'|'l_carpal_distal_phalanx_3'|'l_hamate'|'l_metacarpal_4'|'l_carpal_proximal_phalanx_4'|'l_carpal_middle_phalanx_4'|'l_carpal_distal_phalanx_4'|'l_metacarpal_5'|'l_carpal_proximal_phalanx_5'|'l_carpal_middle_phalanx_5'|'l_carpal_distal_phalanx_5'|'r_clavicle'|'r_scapula'|'r_upperarm'|'r_forearm'|'r_carpal'|'r_trapezium'|'r_metacarpal_1'|'r_carpal_proximal_phalanx_1'|'r_carpal_distal_phalanx_1'|'r_trapezoid'|'r_metacarpal_2'|'r_carpal_proximal_phalanx_2'|'r_carpal_middle_phalanx_2'|'r_carpal_distal_phalanx_2'|'r_capitate'|'r_metacarpal_3'|'r_carpal_proximal_phalanx_3'|'r_carpal_middle_phalanx_3'|'r_carpal_distal_phalanx_3'|'r_hamate'|'r_metacarpal_4'|'r_carpal_proximal_phalanx_4'|'r_carpal_middle_phalanx_4'|'r_carpal_distal_phalanx_4'|'r_metacarpal_5'|'r_carpal_proximal_phalanx_5'|'r_carpal_middle_phalanx_5'|'r_carpal_distal_phalanx_5');
hanimVersionChoices : ('2.0');
hatchStyleValues : ('1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'|'10'|'11'|'12'|'13'|'14'|'15'|'16'|'17'|'18'|'19');
initializeOnlyAccessTypes : ('autoCalc'|'bboxCenter'|'bboxSize'|'beginCap'|'bottomRadius'|'category'|'ccw'|'child1Url'|'child2Url'|'child3Url'|'child4Url'|'closed'|'closureType'|'colorKey'|'colorIndex'|'colorPerVertex'|'convex'|'coordIndex'|'country'|'creaseAngle'|'crossSection'|'directOutput'|'domain'|'duration'|'endCap'|'endAngle'|'extra'|'forceTransitions'|'generateMipMaps'|'geoGridOrigin'|'geometryType'|'geoSystem'|'height'|'index'|'initialDestination'|'initialValue'|'innerRadius'|'internal'|'intersectionType'|'kind'|'knot'|'language'|'lineSegments'|'mustEvaluate'|'normalIndex'|'normalPerVertex'|'numComponents'|'order'|'outerRadius'|'phaseFunction'|'radius'|'range'|'repeatR'|'repeatS'|'repeatT'|'rootUrl'|'rotateYUp'|'size'|'sortOrder'|'spatialize'|'specific'|'speedFactor'|'spine'|'startAngle'|'subcategory'|'texCoordIndex'|'texCoordKey'|'uClosed'|'uDimension'|'uKnot'|'uOrder'|'vClosed'|'vDimension'|'vKnot'|'vOrder'|'xDimension'|'xSpacing'|'zDimension'|'zSpacing');
inputOnlyAccessTypes : ('activate'|'set_articulationParameterValue0'|'set_articulationParameterValue1'|'set_articulationParameterValue2'|'set_articulationParameterValue3'|'set_articulationParameterValue4'|'set_articulationParameterValue5'|'set_articulationParameterValue6'|'set_articulationParameterValue7'|'set_boolean'|'set_bind'|'set_colorIndex'|'set_contacts'|'set_coordIndex'|'set_crossSection'|'set_destination'|'set_fraction'|'set_height'|'set_index'|'set_normalIndex'|'set_orientation'|'set_scale'|'set_spine'|'set_texCoordIndex'|'set_triggerTime');
inputOutputAccessTypes : ('absorption'|'activeLayer'|'address'|'align'|'alpha'|'alphaCutoff'|'alphaMode'|'ambientIntensity'|'ambientTextureMapping'|'anchorPoint'|'angle'|'angularDampingFactor'|'angularVelocity'|'anisotropicDegree'|'antennaLocation'|'applicationID'|'applied'|'appliedParameters'|'antennaPatternType'|'antennaPatternLength'|'articulationParameterArray'|'articulationParameterChangeIndicatorArray'|'articulationParameterCount'|'articulationParameterDesignatorArray'|'articulationParameterIdPartAttachedToArray'|'articulationParameterTypeArray'|'attack'|'attenuation'|'autoDamp'|'autoDisable'|'autoOffset'|'autoRefresh'|'autoRefreshTimeLimit'|'avatarSize'|'axis'|'axis1'|'axis1Angle'|'axis1Torque'|'axis2'|'axis2Angle'|'axis2Torque'|'axis3Angle'|'axis3Torque'|'axisOfRotation'|'axisRotation'|'backAmbientIntensity'|'backDiffuseColor'|'backEmissiveColor'|'backShininess'|'backSpecularColor'|'backTexture'|'backTransparency'|'backUrl'|'baseColor'|'baseTextureMapping'|'beamWidth'|'bottom'|'bottomTexture'|'bottomUrl'|'bounce'|'boundaryOpacity'|'borderColor'|'borderWidth'|'boundaryModeS'|'boundaryModeT'|'boundaryModeR'|'buffer'|'bufferDuration'|'center'|'castShadow'|'centerOfMass'|'centerOfRotation'|'class'|'clipBoundary'|'channels'|'channelCountMode'|'channelInterpretation'|'channelSelection'|'channelsEnabled'|'gain'|'collisionType'|'color'|'colorSteps'|'coneInnerAngle'|'coneOuterAngle'|'coneOuterGain'|'contactNormal'|'contourStepSize'|'controlPoint'|'constantForceMix'|'contactSurfaceThickness'|'coolColor'|'createParticles'|'cryptoSystem'|'cryptoKeyID'|'cutOffAngle'|'cycleInterval'|'data'|'dataLength'|'deadReckoning'|'delayTime'|'deletionAllowed'|'depth'|'description'|'desiredAngularVelocity1'|'desiredAngularVelocity2'|'detonationLocation'|'detonationRelativeLocation'|'detonationResult'|'detune'|'diffuse'|'diffuseColor'|'diffuseTextureMapping'|'dimensions'|'direction'|'disableAngularSpeed'|'disableLinearSpeed'|'disableTime'|'diskAngle'|'displacements'|'bboxDisplay'|'detune'|'displayed'|'distanceModel'|'easeInEaseOut'|'edgeColor'|'emissiveColor'|'emissiveTextureMapping'|'enabled'|'enabledAxes'|'dopplerEnabled'|'enableHRTF'|'encodingScheme'|'endFrame'|'entityID'|'entityKind'|'entityDomain'|'entityCountry'|'entityCategory'|'entitySubcategory'|'entitySpecific'|'entityExtra'|'errorCorrection'|'eventApplicationID'|'eventEntityID'|'eventNumber'|'eventSiteID'|'family'|'fanCount'|'farDistance'|'fftSize'|'fieldOfView'|'filled'|'finiteRotationAxis'|'fired1'|'fired2'|'fireMissionIndex'|'firingRange'|'firingRate'|'fixed'|'fogType'|'force'|'forceID'|'forceOutput'|'forces'|'frameDuration'|'frameIncrement'|'frameIndex'|'frequency'|'frequencyBinCount'|'frictionCoefficients'|'frictionDirection'|'frontTexture'|'frontUrl'|'function'|'fuse'|'gain'|'geoCenter'|'geoCoords'|'global'|'gradientThreshold'|'gravity'|'groundAngle'|'groundColor'|'gustiness'|'hatchColor'|'hatched'|'hatchStyle'|'headlight'|'horizontal'|'id'|'image'|'inertia'|'info'|'inputSource'|'integerKey'|'intensity'|'intensityThreshold'|'interauralDistance'|'iterations'|'jointBindingPositions'|'jointBindingRotations'|'jointBindingScales'|'joints'|'justify'|'key'|'knee'|'keyVelocity'|'jump'|'keyValue'|'language'|'leftTexture'|'leftToRight'|'leftUrl'|'length'|'lengthOfModulationParameters'|'lifetimeVariation'|'lighting'|'limitOrientation'|'linearAcceleration'|'linearDampingFactor'|'linearVelocity'|'linetype'|'linewidthScaleFactor'|'llimit'|'loa'|'load'|'location'|'loop'|'loopEnd'|'loopStart'|'mapping'|'marking'|'mass'|'magnificationFilter'|'matchCriterion'|'matrix'|'maxAngle'|'maxAngle1'|'maxBack'|'maxChannelCount'|'maxCorrectionSpeed'|'maxDecibels'|'maxDelayTime'|'maxDistance'|'maxExtent'|'maxFront'|'maxParticles'|'maxPosition'|'maxSeparation'|'maxTorque1'|'maxTorque2'|'mediaDeviceID'|'metallic'|'metallicRoughnessTextureMapping'|'minAngle'|'minAngle1'|'minBack'|'minBounceSpeed'|'minDecibels'|'minFront'|'minificationFilter'|'minPosition'|'minSeparation'|'mode'|'modulationTypeSpreadSpectrum'|'modulationTypeMajor'|'modulationTypeDetail'|'modulationTypeSystem'|'momentsOfInertia'|'motionsEnabled'|'motor1Axis'|'motor2Axis'|'motor3Axis'|'multicastRelayHost'|'multicastRelayPort'|'munitionEndPoint'|'munitionStartPoint'|'munitionApplicationID'|'munitionEntityID'|'munitionSiteID'|'munitionQuantity'|'name'|'nearDistance'|'networkMode'|'normalScale'|'normalTextureMapping'|'numberOfChannels'|'normalize'|'normalizeVelocity'|'objectType'|'occlusionStrength'|'occlusionTextureMapping'|'offset'|'offsetUnits'|'on'|'opacityFactor'|'optionsImag'|'optionsReal'|'orientation'|'orthogonalColor'|'oversample'|'parallelColor'|'parameter'|'particleLifetime'|'particleSize'|'pauseTime'|'pickable'|'pitch'|'plane'|'playbackRate'|'point'|'pointSize'|'pointSizeScaleFactor'|'pointSizeMinValue'|'pointSizeMaxValue'|'port'|'position'|'power'|'preferAccuracy'|'priority'|'qualityFactor'|'radioID'|'radioEntityTypeKind'|'radioEntityTypeDomain'|'radioEntityTypeCountry'|'radioEntityTypeCategory'|'radioEntityTypeNomenclature'|'radioEntityTypeNomenclatureVersion'|'ratio'|'readInterval'|'receivedPower'|'receiverState'|'reference'|'referenceDistance'|'refraction'|'relativeAntennaLocation'|'release'|'retainedOpacity'|'retainUserOffsets'|'resumeTime'|'rightTexture'|'rightUrl'|'rolloffFactor'|'rotation'|'roughness'|'rtpHeaderExpected'|'sampleRate'|'samples'|'scale'|'scaleMode'|'scaleOrientation'|'segmentEnabled'|'separateBackColor'|'shininess'|'shadowIntensity'|'shadows'|'side'|'shininessTextureMapping'|'silhouetteBoundaryOpacity'|'silhouetteRetainedOpacity'|'silhouetteSharpness'|'siteID'|'size'|'sizeUnits'|'skeletalConfiguration'|'skinCoordIndex'|'skinCoordWeight'|'skyColor'|'skyAngle'|'sliderForce'|'slipCoefficients'|'slipFactors'|'smoothingTimeConstant'|'softnessConstantForceMix'|'softnessErrorCorrection'|'solid'|'source'|'spacing'|'specular'|'specularColor'|'specularTextureMapping'|'speed'|'startFrame'|'startTime'|'stiffness'|'stopBounce'|'stopErrorCorrection'|'stop1ConstantForceMix'|'stop1Bounce'|'stop2Bounce'|'stop3Bounce'|'stop1ErrorCorrection'|'stop2ErrorCorrection'|'stop3ErrorCorrection'|'stopTime'|'streamIdentifier'|'string'|'stripCount'|'style'|'summary'|'surfaceArea'|'surfaceSpeed'|'surfaceTolerance'|'surfaceValues'|'suspensionErrorCorrection'|'suspensionForce'|'tailTime'|'tau'|'tdlType'|'tessellation'|'tessellationScale'|'textureCompression'|'texturePriority'|'threshold'|'timeOut'|'title'|'toggle'|'tolerance'|'top'|'topTexture'|'topToBottom'|'topUrl'|'torques'|'trackCurrentView'|'transitionTime'|'transitionType'|'translation'|'transmitFrequencyBandwidth'|'transmitState'|'transmitterApplicationID'|'transmitterEntityID'|'transmitterRadioID'|'transmitterSiteID'|'transparency'|'turbulence'|'type'|'ulimit'|'upVector'|'update'|'url'|'useFiniteRotation'|'useGeometry'|'useGlobalGravity'|'uTessellation'|'variation'|'value'|'values'|'version'|'vector'|'vertexCount'|'vertices'|'viewAll'|'visibilityLimit'|'visibilityRange'|'visible'|'vTessellation'|'warhead'|'warmColor'|'weight'|'weightConstant1'|'weightConstant2'|'weightFunction1'|'weightFunction2'|'whichChoice'|'whichGeometry'|'writeInterval'|'yScale');
intersectionTypeValues : ('BOUNDS'|'GEOMETRY');
justifyChoices : ('"MIDDLE"'|'"MIDDLE" "BEGIN"'|'"MIDDLE" "END"'|'"MIDDLE" "FIRST"'|'"MIDDLE" "MIDDLE"'|'"BEGIN"'|'"BEGIN" "BEGIN"'|'"BEGIN" "END"'|'"BEGIN" "FIRST"'|'"BEGIN" "MIDDLE"'|'"END"'|'"END" "BEGIN"'|'"END" "END"'|'"END" "FIRST"'|'"END" "MIDDLE"'|'"FIRST"'|'"FIRST" "BEGIN"'|'"FIRST" "END"'|'"FIRST" "FIRST"'|'"FIRST" "MIDDLE"');
layoutAlignChoices : ('"LEFT" "BOTTOM"'|'"LEFT" "CENTER"'|'"LEFT" "TOP"'|'"CENTER" "BOTTOM"'|'"CENTER" "CENTER"'|'"CENTER" "TOP"'|'"RIGHT" "BOTTOM"'|'"RIGHT" "CENTER"'|'"RIGHT" "TOP"');
layoutScaleModeChoices : ('"NONE" "NONE"'|'"NONE" "FRACTION"'|'"NONE" "STRETCH"'|'"NONE" "PIXEL"'|'"FRACTION" "NONE"'|'"FRACTION" "FRACTION"'|'"FRACTION" "STRETCH"'|'"FRACTION" "PIXEL"'|'"STRETCH" "NONE"'|'"STRETCH" "FRACTION"'|'"STRETCH" "STRETCH"'|'"STRETCH" "PIXEL"'|'"PIXEL" "NONE"'|'"PIXEL" "FRACTION"'|'"PIXEL" "STRETCH"'|'"PIXEL" "PIXEL"');
layoutUnitsChoices : ('"WORLD" "WORLD"'|'"WORLD" "FRACTION"'|'"WORLD" "PIXEL"'|'"FRACTION" "WORLD"'|'"FRACTION" "FRACTION"'|'"FRACTION" "PIXEL"'|'"PIXEL" "WORLD"'|'"PIXEL" "FRACTION"'|'"PIXEL" "PIXEL"');
lineTypeValues : ('1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'|'10'|'11'|'12'|'13'|'14'|'15'|'16');
loaType : SFInt32;
metaDirectionChoices : ('rtl'|'ltr');
metaNameValues : ('accessRights'|'author'|'CML-version'|'contributor'|'created'|'creator'|'description'|'disclaimer'|'drawing'|'error'|'generator'|'hint'|'identifier'|'Image'|'info'|'information'|'isVersionOf'|'keywords'|'license'|'mediator'|'modified'|'movie'|'MovingImage'|'original'|'photo'|'photograph'|'publisher'|'reference'|'requires'|'rights'|'robots'|'Sound'|'source'|'specificationSection'|'specificationUrl'|'subject'|'Text'|'title'|'TODO'|'translator'|'translated'|'version'|'warning');
multiTextureFunctionValues : ('"COMPLEMENT"'|'"ALPHAREPLICATE"'|'""');
multiTextureModeValues : ('"ADD"'|'"ADDSIGNED"'|'"ADDSIGNED2X"'|'"ADDSMOOTH"'|'"BLENDCURRENTALPHA"'|'"BLENDDIFFUSEALPHA"'|'"BLENDFACTORALPHA"'|'"BLENDTEXTUREALPHA"'|'"DOTPRODUCT3"'|'"MODULATE"'|'"MODULATE2X"'|'"MODULATE4X"'|'"MODULATEALPHA_ADDCOLOR"'|'"MODULATEINVALPHA_ADDCOLOR"'|'"MODULATEINVCOLOR_ADDALPHA"'|'"OFF"'|'"REPLACE"'|'"SELECTARG1"'|'"SELECTARG2"'|'"SUBTRACT"');
multiTextureSourceValues : ('"DIFFUSE"'|'"FACTOR"'|'"SPECULAR"'|'""');
navigationTransitionTypeValues : ('"TELEPORT"'|'"LINEAR"'|'"ANIMATE"');
navigationTypeValues : ('"ANY"'|'"WALK"'|'"EXAMINE"'|'"FLY"'|'"LOOKAT"'|'"NONE"'|'"EXPLORE"');
networkModeChoices : ('standAlone'|'networkReader'|'networkWriter');
outputOnlyAccessTypes : ('actionKeyPress'|'actionKeyRelease'|'altKey'|'angle'|'angleRate'|'articulationParameterValue0_changed'|'articulationParameterValue1_changed'|'articulationParameterValue2_changed'|'articulationParameterValue3_changed'|'articulationParameterValue4_changed'|'articulationParameterValue5_changed'|'articulationParameterValue6_changed'|'articulationParameterValue7_changed'|'bindTime'|'body1AnchorPoint'|'body1Axis'|'body2AnchorPoint'|'body2Axis'|'centerOfRotation_changed'|'channelCount'|'collideTime'|'controlKey'|'cycleTime'|'detonateTime'|'duration_changed'|'elapsedTime'|'enteredText'|'enterTime'|'exitTime'|'finalText'|'firedTime'|'fraction_changed'|'frameCount'|'geovalue_changed'|'hinge1Angle'|'hinge1AngleRate'|'hinge2Angle'|'hinge2AngleRate'|'hitGeoCoord_changed'|'hitNormal_changed'|'hitPoint_changed'|'hitTexCoord_changed'|'inputFalse'|'inputNegate'|'inputTrue'|'isActive'|'isBound'|'isCollided'|'isDetonated'|'isLoaded'|'isOver'|'isPaused'|'isNetworkReader'|'isNetworkWriter'|'isRtpHeaderHeard'|'isSelected'|'isStandAlone'|'isValid'|'keyPress'|'keyRelease'|'level_changed'|'lineBounds'|'loadTime'|'modifiedFraction_changed'|'motor1Angle'|'motor1AngleRate'|'motor2Angle'|'motor2AngleRate'|'motor3Angle'|'motor3AngleRate'|'next'|'normal_changed'|'orientation_changed'|'origin'|'pickedGeometry'|'pickedNormal'|'pickedPoint'|'pickedTextureCoordinate'|'position_changed'|'previous'|'progress'|'rotation_changed'|'separation'|'separationRate'|'shiftKey'|'textBounds'|'time'|'timestamp'|'touchTime'|'trackPoint_changed'|'transitionComplete'|'translation_changed'|'triggerTime'|'triggerTrue'|'triggerValue'|'value_changed');
particleSystemGeometryTypeValues : ('LINE'|'POINT'|'QUAD'|'SPRITE'|'TRIANGLE'|'GEOMETRY');
periodicWaveTypeChoices : ('SINE'|'SQUARE'|'SAWTOOTH'|'TRIANGLE'|'CUSTOM');
phaseFunctionValues : ('Henyey-Greenstein'|'NONE');
pickableObjectTypeValues : ('"ALL"'|'"NONE"'|'"TERRAIN"');
pickSensorMatchCriterionChoices : ('MATCH_ANY'|'MATCH_EVERY'|'MATCH_ONLY_ONE');
pickSensorSortOrderValues : ('ANY'|'CLOSEST'|'ALL'|'ALL_SORTED');
profileNameChoices : ('Core'|'Interchange'|'CADInterchange'|'Interactive'|'Immersive'|'MedicalInterchange'|'MPEG4Interactive'|'Full');
projectionVolumeStyleTypeChoices : ('MAX'|'MIN'|'AVERAGE');
shaderLanguageValues : ('Cg'|'GLSL'|'HLSL');
shaderPartTypeValues : ('VERTEX'|'FRAGMENT');
textureBoundaryModeChoices : ('CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT');
textureCompressionModeChoices : ('DEFAULT'|'FASTEST'|'HIGH'|'LOW'|'MEDIUM'|'NICEST');
textureCoordinateGeneratorModeChoices : ('SPHERE'|'CAMERASPACENORMAL'|'CAMERASPACEPOSITION'|'CAMERASPACEREFLECTIONVECTOR'|'SPHERE-LOCAL'|'COORD'|'COORD-EYE'|'NOISE'|'NOISE-EYE'|'SPHERE-REFLECT'|'SPHERE-REFLECT-LOCAL');
textureMagnificationModeChoices : ('AVG_PIXEL'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NICEST');
textureMinificationModeChoices : ('AVG_PIXEL'|'AVG_PIXEL_AVG_MIPMAP'|'AVG_PIXEL_NEAREST_MIPMAP'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NEAREST_PIXEL_AVG_MIPMAP'|'NEAREST_PIXEL_NEAREST_MIPMAP'|'NICEST');
unitCategoryChoices : ('angle'|'force'|'length'|'mass');
unitIntervalType : SFFloat;
volumeRenderingWeightFunctionChoices : ('CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE');
waveShaperOversampleChoices : ('NONE'|'2X'|'4X');
x3dVersionChoices : ('3.0'|'3.1'|'3.2'|'3.3'|'4.0');
SFBool : (' '|'\t'|'\r'|'\n')*('TRUE'|'FALSE')(' '|'\t'|'\r'|'\n')*;
MFBool : '[' (' '|'\t'|'\r'|'\n')*(('TRUE'|'FALSE')(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFColor : (' '|'\t'|'\r'|'\n')*(([+]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){2}([+]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFColor : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){2}([+-]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFColorRGBA : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFColorRGBA : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]([.][0-9]*){0,1}|[.][0-9]+)|[1]([.][0]*){0,1})([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFDouble : (' '|'\t'|'\r'|'\n')*([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFDouble : '[' (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFFloat : (' '|'\t'|'\r'|'\n')*([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFFloat : '[' (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFImage : (' '|'\t'|'\r'|'\n')*([+]{0,1}([0]|[1-9][0-9]*)([Ee][+]{0,1}[0-9]+){0,1}(' '|'\t'|'\r'|'\n')+){2}[+]{0,1}[0-4]((' '|'\t'|'\r'|'\n')+([0][x][0-9a-fA-F]{1,16}|[+]{0,1}([0]|[1-9][0-9]*)([Ee][+]{0,1}[0-9]+){0,1}))*(' '|'\t'|'\r'|'\n')*;
MFImage : '[' (' '|'\t'|'\r'|'\n')*(([+]{0,1}([0]|[1-9][0-9]*)([Ee][+]{0,1}[0-9]+){0,1}(' '|'\t'|'\r'|'\n')+){2}[+]{0,1}[0-4]((' '|'\t'|'\r'|'\n')+([0][x][0-9a-fA-F]{1,16}|[+]{0,1}([0]|[1-9][0-9]*)([Ee][+]{0,1}[0-9]+){0,1}))*(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFInt32 : (' '|'\t'|'\r'|'\n')*[+-]{0,1}([0]|[1-9][0-9]*)([Ee][+-]{0,1}[0-9]+){0,1}(' '|'\t'|'\r'|'\n')*;
MFInt32 : '[' (' '|'\t'|'\r'|'\n')*([+-]{0,1}([0]|[1-9][0-9]*)([Ee][+-]{0,1}[0-9]+){0,1}(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFMatrix3d : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){8}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFMatrix3d : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){8}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFMatrix3f : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){8}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFMatrix3f : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){8}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFMatrix4d : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){15}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFMatrix4d : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){15}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFMatrix4f : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){15}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFMatrix4f : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){15}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
mFNode : '[' (sFNode)* ']';
SFRotation : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFRotation : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFString : ["'] ((' '|'\t'|'\r'|'\n')|~(' '|'\t'|'\r'|'\n'))* ['"];
MFString : '[' ((' '|'\t'|'\r'|'\n')|~(' '|'\t'|'\r'|'\n'))* ']';
SFTime : (' '|'\t'|'\r'|'\n')*([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFTime : '[' (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFVec2d : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){1}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFVec2d : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){1}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFVec2f : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){1}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFVec2f : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){1}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFVec3d : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){2}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFVec3d : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){2}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFVec3f : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){2}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFVec3f : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){2}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFVec4d : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFVec4d : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
SFVec4f : (' '|'\t'|'\r'|'\n')*(([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*;
MFVec4f : '[' (' '|'\t'|'\r'|'\n')*((([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')+){3}([+-]{0,1}(([0]|[1-9][0-9]*)([.][0-9]*){0,1}|[.][0-9]+)([Ee][+-]{0,1}[0-9]+){0,1})(' '|'\t'|'\r'|'\n')*[,]{0,1}(' '|'\t'|'\r'|'\n')*)* ']';
x3DAppearanceChildNode : (
x3DMaterialNode
|x3DOneSidedMaterialNode
|material
|physicalMaterial
|unlitMaterial
|twoSidedMaterial
|x3DShaderNode
|composedShader
|packagedShader
|programShader
|x3DTextureNode
|x3DEnvironmentTextureNode
|composedCubeMapTexture
|generatedCubeMapTexture
|imageCubeMapTexture
|x3DSingleTextureNode
|x3DTexture2DNode
|imageTexture
|movieTexture
|pixelTexture
|x3DTexture3DNode
|composedTexture3D
|imageTexture3D
|pixelTexture3D
|multiTexture
|x3DTextureTransformNode
|x3DSingleTextureTransformNode
|multiTextureTransform
|textureTransform
|textureTransform3D
|textureTransformMatrix3D
|acousticProperties
|fillProperties
|lineProperties
|pointProperties
)
;
x3DAppearanceNode : (
appearance
)
;
x3DArrayField : (
mFNode
|MFBool
|MFColor
|MFColorRGBA
|MFDouble
|MFFloat
|MFImage
|MFInt32
|MFMatrix3d
|MFMatrix3f
|MFMatrix4d
|MFMatrix4f
|MFRotation
|MFTime
|MFVec2d
|MFVec2f
|MFVec3d
|MFVec3f
|MFVec4d
|MFVec4f
)
;
x3DBackgroundNode : (
background
|textureBackground
)
;
x3DBindableNode : (
x3DBackgroundNode
|background
|textureBackground
|x3DViewpointNode
|geoViewpoint
|orthoViewpoint
|viewpoint
|fog
|navigationInfo
)
;
x3DChaserNode : (
colorChaser
|coordinateChaser
|orientationChaser
|positionChaser
|positionChaser2D
|scalarChaser
|texCoordChaser2D
)
;
x3DChildNode : (
eXPORT
|externProtoDeclare
|iMPORT
|protoDeclare
|rOUTE
|x3DBindableNode
|x3DBackgroundNode
|background
|textureBackground
|x3DViewpointNode
|geoViewpoint
|orthoViewpoint
|viewpoint
|fog
|navigationInfo
|x3DFollowerNode
|x3DChaserNode
|colorChaser
|coordinateChaser
|orientationChaser
|positionChaser
|positionChaser2D
|scalarChaser
|texCoordChaser2D
|x3DDamperNode
|colorDamper
|coordinateDamper
|orientationDamper
|positionDamper
|positionDamper2D
|scalarDamper
|texCoordDamper2D
|x3DGroupingNode
|x3DViewportNode
|viewport
|anchor
|billboard
|cADAssembly
|cADLayer
|cADPart
|collision
|espduTransform
|geoLocation
|geoTransform
|group
|hAnimSegment
|hAnimSite
|layer
|layoutGroup
|layoutLayer
|lOD
|pickableGroup
|screenGroup
|switch
|transform
|x3DInfoNode
|dISEntityTypeMapping
|geoMetadata
|worldInfo
|x3DInterpolatorNode
|colorInterpolator
|coordinateInterpolator
|coordinateInterpolator2D
|geoPositionInterpolator
|normalInterpolator
|orientationInterpolator
|positionInterpolator
|positionInterpolator2D
|scalarInterpolator
|splinePositionInterpolator
|splinePositionInterpolator2D
|splineScalarInterpolator
|squadOrientationInterpolator
|x3DLayoutNode
|layout
|x3DLightNode
|x3DTextureProjectorNode
|textureProjector
|textureProjectorParallel
|directionalLight
|pointLight
|spotLight
|x3DNBodyCollidableNode
|collidableOffset
|collidableShape
|x3DProductStructureChildNode
|cADFace
|x3DScriptNode
|script
|x3DSensorNode
|x3DEnvironmentalSensorNode
|geoProximitySensor
|proximitySensor
|transformSensor
|visibilitySensor
|x3DKeyDeviceSensorNode
|keySensor
|stringSensor
|x3DNetworkSensorNode
|loadSensor
|receiverPdu
|signalPdu
|transmitterPdu
|x3DPickSensorNode
|linePickSensor
|pointPickSensor
|primitivePickSensor
|volumePickSensor
|x3DPointingDeviceSensorNode
|x3DDragSensorNode
|cylinderSensor
|planeSensor
|sphereSensor
|x3DTouchSensorNode
|geoTouchSensor
|touchSensor
|collisionSensor
|timeSensor
|x3DSequencerNode
|booleanSequencer
|integerSequencer
|x3DShapeNode
|particleSystem
|shape
|x3DSoundNode
|x3DSoundChannelNode
|channelMerger
|channelSelector
|channelSplitter
|x3DSoundDestinationNode
|audioDestination
|streamAudioDestination
|x3DSoundProcessingNode
|analyser
|biquadFilter
|convolver
|delay
|dynamicsCompressor
|gain
|waveShaper
|x3DSoundSourceNode
|audioClip
|bufferAudioSource
|listenerPointSource
|microphoneSource
|movieTexture
|oscillatorSource
|streamAudioSource
|periodicWave
|sound
|spatialSound
|x3DTimeDependentNode
|x3DTriggerNode
|booleanTrigger
|integerTrigger
|timeTrigger
|x3DVolumeDataNode
|isoSurfaceVolumeData
|segmentedVolumeData
|volumeData
|booleanFilter
|booleanToggle
|clipPlane
|collisionCollection
|dISEntityManager
|easeInEaseOut
|geoLOD
|hAnimHumanoid
|hAnimJoint
|hAnimMotion
|inline
|localFog
|nurbsOrientationInterpolator
|nurbsPositionInterpolator
|nurbsSet
|nurbsSurfaceInterpolator
|protoInstance
|rigidBody
|rigidBodyCollection
|staticGroup
|viewpointGroup
)
;
x3DColorNode : (
color
|colorRGBA
)
;
x3DComposableVolumeRenderStyleNode : (
blendedVolumeStyle
|boundaryEnhancementVolumeStyle
|cartoonVolumeStyle
|composedVolumeStyle
|edgeEnhancementVolumeStyle
|opacityMapVolumeStyle
|shadedVolumeStyle
|silhouetteEnhancementVolumeStyle
|toneMappedVolumeStyle
)
;
x3DComposedGeometryNode : (
indexedFaceSet
|indexedQuadSet
|indexedTriangleFanSet
|indexedTriangleSet
|indexedTriangleStripSet
|quadSet
|triangleFanSet
|triangleSet
|triangleStripSet
)
;
x3DCoordinateNode : (
coordinate
|coordinateDouble
|geoCoordinate
)
;
x3DDamperNode : (
colorDamper
|coordinateDamper
|orientationDamper
|positionDamper
|positionDamper2D
|scalarDamper
|texCoordDamper2D
)
;
x3DDragSensorNode : (
cylinderSensor
|planeSensor
|sphereSensor
)
;
x3DEnvironmentalSensorNode : (
geoProximitySensor
|proximitySensor
|transformSensor
|visibilitySensor
)
;
x3DEnvironmentTextureNode : (
composedCubeMapTexture
|generatedCubeMapTexture
|imageCubeMapTexture
)
;
x3DField : (
SFBool
|MFBool
|SFColor
|MFColor
|SFColorRGBA
|MFColorRGBA
|SFDouble
|MFDouble
|SFFloat
|MFFloat
|SFImage
|MFImage
|SFInt32
|MFInt32
|SFMatrix3d
|MFMatrix3d
|SFMatrix3f
|MFMatrix3f
|SFMatrix4d
|MFMatrix4d
|SFMatrix4f
|MFMatrix4f
|sFNode
|SFRotation
|MFRotation
|SFString
|mFNode
|MFString
|SFTime
|MFTime
|SFVec2d
|MFVec2d
|SFVec2f
|MFVec2f
|SFVec3d
|MFVec3d
|SFVec3f
|MFVec3f
|SFVec4d
|MFVec4d
|SFVec4f
|MFVec4f
|x3DArrayField
)
;
x3DFollowerNode : (
x3DChaserNode
|colorChaser
|coordinateChaser
|orientationChaser
|positionChaser
|positionChaser2D
|scalarChaser
|texCoordChaser2D
|x3DDamperNode
|colorDamper
|coordinateDamper
|orientationDamper
|positionDamper
|positionDamper2D
|scalarDamper
|texCoordDamper2D
)
;
x3DFontStyleNode : (
fontStyle
|screenFontStyle
)
;
x3DGeometricPropertyNode : (
x3DColorNode
|color
|colorRGBA
|x3DCoordinateNode
|coordinate
|coordinateDouble
|geoCoordinate
|x3DNormalNode
|normal
|x3DTextureCoordinateNode
|x3DSingleTextureCoordinateNode
|textureCoordinate
|textureCoordinate3D
|textureCoordinate4D
|textureCoordinateGenerator
|multiTextureCoordinate
|x3DVertexAttributeNode
|floatVertexAttribute
|matrix3VertexAttribute
|matrix4VertexAttribute
|fogCoordinate
|hAnimDisplacer
)
;
x3DGeometryNode : (
x3DComposedGeometryNode
|indexedFaceSet
|indexedQuadSet
|indexedTriangleFanSet
|indexedTriangleSet
|indexedTriangleStripSet
|quadSet
|triangleFanSet
|triangleSet
|triangleStripSet
|x3DParametricGeometryNode
|x3DNurbsSurfaceGeometryNode
|nurbsPatchSurface
|nurbsTrimmedSurface
|nurbsCurve
|nurbsSweptSurface
|nurbsSwungSurface
|arc2D
|arcClose2D
|box
|circle2D
|cone
|cylinder
|disk2D
|elevationGrid
|extrusion
|geoElevationGrid
|indexedLineSet
|lineSet
|pointSet
|polyline2D
|polypoint2D
|rectangle2D
|sphere
|text
|triangleSet2D
)
;
x3DGroupingNode : (
x3DViewportNode
|viewport
|anchor
|billboard
|cADAssembly
|cADLayer
|cADPart
|collision
|espduTransform
|geoLocation
|geoTransform
|group
|hAnimSegment
|hAnimSite
|layer
|layoutGroup
|layoutLayer
|lOD
|pickableGroup
|screenGroup
|switch
|transform
)
;
x3DInfoNode : (
dISEntityTypeMapping
|geoMetadata
|worldInfo
)
;
x3DInterpolatorNode : (
colorInterpolator
|coordinateInterpolator
|coordinateInterpolator2D
|geoPositionInterpolator
|normalInterpolator
|orientationInterpolator
|positionInterpolator
|positionInterpolator2D
|scalarInterpolator
|splinePositionInterpolator
|splinePositionInterpolator2D
|splineScalarInterpolator
|squadOrientationInterpolator
)
;
x3DKeyDeviceSensorNode : (
keySensor
|stringSensor
)
;
x3DLayerNode : (
layer
|layoutLayer
)
;
x3DLayoutNode : (
layout
)
;
x3DLightNode : (
x3DTextureProjectorNode
|textureProjector
|textureProjectorParallel
|directionalLight
|pointLight
|spotLight
)
;
x3DMaterialNode : (
x3DOneSidedMaterialNode
|material
|physicalMaterial
|unlitMaterial
|twoSidedMaterial
)
;
x3DNBodyCollidableNode : (
collidableOffset
|collidableShape
)
;
x3DNBodyCollisionSpaceNode : (
collisionSpace
)
;
x3DNetworkSensorNode : (
espduTransform
|loadSensor
|receiverPdu
|signalPdu
|transmitterPdu
)
;
x3DNode : (
x3DAppearanceChildNode
|x3DMaterialNode
|x3DOneSidedMaterialNode
|material
|physicalMaterial
|unlitMaterial
|twoSidedMaterial
|x3DShaderNode
|composedShader
|packagedShader
|programShader
|x3DTextureNode
|x3DEnvironmentTextureNode
|composedCubeMapTexture
|generatedCubeMapTexture
|imageCubeMapTexture
|x3DSingleTextureNode
|x3DTexture2DNode
|imageTexture
|movieTexture
|pixelTexture
|x3DTexture3DNode
|composedTexture3D
|imageTexture3D
|pixelTexture3D
|multiTexture
|x3DTextureTransformNode
|x3DSingleTextureTransformNode
|multiTextureTransform
|textureTransform
|textureTransform3D
|textureTransformMatrix3D
|acousticProperties
|fillProperties
|lineProperties
|pointProperties
|x3DAppearanceNode
|appearance
|x3DChildNode
|eXPORT
|externProtoDeclare
|iMPORT
|protoDeclare
|rOUTE
|x3DBindableNode
|x3DBackgroundNode
|background
|textureBackground
|x3DViewpointNode
|geoViewpoint
|orthoViewpoint
|viewpoint
|fog
|navigationInfo
|x3DFollowerNode
|x3DChaserNode
|colorChaser
|coordinateChaser
|orientationChaser
|positionChaser
|positionChaser2D
|scalarChaser
|texCoordChaser2D
|x3DDamperNode
|colorDamper
|coordinateDamper
|orientationDamper
|positionDamper
|positionDamper2D
|scalarDamper
|texCoordDamper2D
|x3DGroupingNode
|x3DViewportNode
|viewport
|anchor
|billboard
|cADAssembly
|cADLayer
|cADPart
|collision
|espduTransform
|geoLocation
|geoTransform
|group
|hAnimSegment
|hAnimSite
|layer
|layoutGroup
|layoutLayer
|lOD
|pickableGroup
|screenGroup
|switch
|transform
|x3DInfoNode
|dISEntityTypeMapping
|geoMetadata
|worldInfo
|x3DInterpolatorNode
|colorInterpolator
|coordinateInterpolator
|coordinateInterpolator2D
|geoPositionInterpolator
|normalInterpolator
|orientationInterpolator
|positionInterpolator
|positionInterpolator2D
|scalarInterpolator
|splinePositionInterpolator
|splinePositionInterpolator2D
|splineScalarInterpolator
|squadOrientationInterpolator
|x3DLayoutNode
|layout
|x3DLightNode
|x3DTextureProjectorNode
|textureProjector
|textureProjectorParallel
|directionalLight
|pointLight
|spotLight
|x3DNBodyCollidableNode
|collidableOffset
|collidableShape
|x3DProductStructureChildNode
|cADFace
|x3DScriptNode
|script
|x3DSensorNode
|x3DEnvironmentalSensorNode
|geoProximitySensor
|proximitySensor
|transformSensor
|visibilitySensor
|x3DKeyDeviceSensorNode
|keySensor
|stringSensor
|x3DNetworkSensorNode
|loadSensor
|receiverPdu
|signalPdu
|transmitterPdu
|x3DPickSensorNode
|linePickSensor
|pointPickSensor
|primitivePickSensor
|volumePickSensor
|x3DPointingDeviceSensorNode
|x3DDragSensorNode
|cylinderSensor
|planeSensor
|sphereSensor
|x3DTouchSensorNode
|geoTouchSensor
|touchSensor
|collisionSensor
|timeSensor
|x3DSequencerNode
|booleanSequencer
|integerSequencer
|x3DShapeNode
|particleSystem
|shape
|x3DSoundNode
|x3DSoundChannelNode
|channelMerger
|channelSelector
|channelSplitter
|x3DSoundDestinationNode
|audioDestination
|streamAudioDestination
|x3DSoundProcessingNode
|analyser
|biquadFilter
|convolver
|delay
|dynamicsCompressor
|gain
|waveShaper
|x3DSoundSourceNode
|audioClip
|bufferAudioSource
|listenerPointSource
|microphoneSource
|oscillatorSource
|streamAudioSource
|periodicWave
|sound
|spatialSound
|x3DTimeDependentNode
|x3DTriggerNode
|booleanTrigger
|integerTrigger
|timeTrigger
|x3DVolumeDataNode
|isoSurfaceVolumeData
|segmentedVolumeData
|volumeData
|booleanFilter
|booleanToggle
|clipPlane
|collisionCollection
|dISEntityManager
|easeInEaseOut
|geoLOD
|hAnimHumanoid
|hAnimJoint
|hAnimMotion
|inline
|localFog
|nurbsOrientationInterpolator
|nurbsPositionInterpolator
|nurbsSet
|nurbsSurfaceInterpolator
|protoInstance
|rigidBody
|rigidBodyCollection
|staticGroup
|viewpointGroup
|x3DFontStyleNode
|fontStyle
|screenFontStyle
|x3DGeometricPropertyNode
|x3DColorNode
|color
|colorRGBA
|x3DCoordinateNode
|coordinate
|coordinateDouble
|geoCoordinate
|x3DNormalNode
|normal
|x3DTextureCoordinateNode
|x3DSingleTextureCoordinateNode
|textureCoordinate
|textureCoordinate3D
|textureCoordinate4D
|textureCoordinateGenerator
|multiTextureCoordinate
|x3DVertexAttributeNode
|floatVertexAttribute
|matrix3VertexAttribute
|matrix4VertexAttribute
|fogCoordinate
|hAnimDisplacer
|x3DGeometryNode
|x3DComposedGeometryNode
|indexedFaceSet
|indexedQuadSet
|indexedTriangleFanSet
|indexedTriangleSet
|indexedTriangleStripSet
|quadSet
|triangleFanSet
|triangleSet
|triangleStripSet
|x3DParametricGeometryNode
|x3DNurbsSurfaceGeometryNode
|nurbsPatchSurface
|nurbsTrimmedSurface
|nurbsCurve
|nurbsSweptSurface
|nurbsSwungSurface
|arc2D
|arcClose2D
|box
|circle2D
|cone
|cylinder
|disk2D
|elevationGrid
|extrusion
|geoElevationGrid
|indexedLineSet
|lineSet
|pointSet
|polyline2D
|polypoint2D
|rectangle2D
|sphere
|text
|triangleSet2D
|x3DLayerNode
|x3DNBodyCollisionSpaceNode
|collisionSpace
|x3DNurbsControlCurveNode
|contourPolyline2D
|nurbsCurve2D
|x3DParticleEmitterNode
|coneEmitter
|explosionEmitter
|pointEmitter
|polylineEmitter
|surfaceEmitter
|volumeEmitter
|x3DParticlePhysicsModelNode
|boundedPhysicsModel
|forcePhysicsModel
|windPhysicsModel
|x3DPrototypeInstance
|x3DRigidJointNode
|ballJoint
|doubleAxisHingeJoint
|motorJoint
|singleAxisHingeJoint
|sliderJoint
|universalJoint
|x3DVolumeRenderStyleNode
|x3DComposableVolumeRenderStyleNode
|blendedVolumeStyle
|boundaryEnhancementVolumeStyle
|cartoonVolumeStyle
|composedVolumeStyle
|edgeEnhancementVolumeStyle
|opacityMapVolumeStyle
|shadedVolumeStyle
|silhouetteEnhancementVolumeStyle
|toneMappedVolumeStyle
|projectionVolumeStyle
|contact
|contour2D
|geoOrigin
|layerSet
|metadataBoolean
|metadataDouble
|metadataFloat
|metadataInteger
|metadataSet
|metadataString
|nurbsTextureCoordinate
|shaderPart
|shaderProgram
|textureProperties
)
;
x3DNormalNode : (
normal
)
;
x3DNurbsControlCurveNode : (
contourPolyline2D
|nurbsCurve2D
)
;
x3DNurbsSurfaceGeometryNode : (
nurbsPatchSurface
|nurbsTrimmedSurface
)
;
x3DOneSidedMaterialNode : (
material
|physicalMaterial
|unlitMaterial
)
;
x3DParametricGeometryNode : (
x3DNurbsSurfaceGeometryNode
|nurbsPatchSurface
|nurbsTrimmedSurface
|nurbsCurve
|nurbsSweptSurface
|nurbsSwungSurface
)
;
x3DParticleEmitterNode : (
coneEmitter
|explosionEmitter
|pointEmitter
|polylineEmitter
|surfaceEmitter
|volumeEmitter
)
;
x3DParticlePhysicsModelNode : (
boundedPhysicsModel
|forcePhysicsModel
|windPhysicsModel
)
;
x3DPickSensorNode : (
linePickSensor
|pointPickSensor
|primitivePickSensor
|volumePickSensor
)
;
x3DPointingDeviceSensorNode : (
x3DDragSensorNode
|cylinderSensor
|planeSensor
|sphereSensor
|x3DTouchSensorNode
|geoTouchSensor
|touchSensor
)
;
x3DProductStructureChildNode : (
cADAssembly
|cADFace
|cADPart
)
;
x3DPrototypeInstance : (
protoInstance
)
;
x3DRigidJointNode : (
ballJoint
|doubleAxisHingeJoint
|motorJoint
|singleAxisHingeJoint
|sliderJoint
|universalJoint
)
;
x3DScriptNode : (
script
)
;
x3DSensorNode : (
x3DEnvironmentalSensorNode
|geoProximitySensor
|proximitySensor
|transformSensor
|visibilitySensor
|x3DKeyDeviceSensorNode
|keySensor
|stringSensor
|x3DNetworkSensorNode
|espduTransform
|loadSensor
|receiverPdu
|signalPdu
|transmitterPdu
|x3DPickSensorNode
|linePickSensor
|pointPickSensor
|primitivePickSensor
|volumePickSensor
|x3DPointingDeviceSensorNode
|x3DDragSensorNode
|cylinderSensor
|planeSensor
|sphereSensor
|x3DTouchSensorNode
|geoTouchSensor
|touchSensor
|collision
|collisionSensor
|timeSensor
)
;
x3DSequencerNode : (
booleanSequencer
|integerSequencer
)
;
x3DShaderNode : (
composedShader
|packagedShader
|programShader
)
;
x3DShapeNode : (
particleSystem
|shape
)
;
x3DSingleTextureCoordinateNode : (
textureCoordinate
|textureCoordinate3D
|textureCoordinate4D
|textureCoordinateGenerator
)
;
x3DSingleTextureNode : (
x3DTexture2DNode
|imageTexture
|movieTexture
|pixelTexture
)
;
x3DSingleTextureTransformNode : (

)
;
x3DSoundChannelNode : (
channelMerger
|channelSelector
|channelSplitter
)
;
x3DSoundDestinationNode : (
audioDestination
|streamAudioDestination
)
;
x3DSoundNode : (
x3DSoundChannelNode
|channelMerger
|channelSelector
|channelSplitter
|x3DSoundDestinationNode
|audioDestination
|streamAudioDestination
|x3DSoundProcessingNode
|analyser
|biquadFilter
|convolver
|delay
|dynamicsCompressor
|gain
|waveShaper
|x3DSoundSourceNode
|audioClip
|bufferAudioSource
|listenerPointSource
|microphoneSource
|movieTexture
|oscillatorSource
|streamAudioSource
|periodicWave
|sound
|spatialSound
)
;
x3DSoundProcessingNode : (
analyser
|biquadFilter
|convolver
|delay
|dynamicsCompressor
|gain
|waveShaper
)
;
x3DSoundSourceNode : (
audioClip
|bufferAudioSource
|listenerPointSource
|microphoneSource
|movieTexture
|oscillatorSource
|streamAudioSource
)
;
x3DStatement : (

)
;
x3DTexture2DNode : (
imageTexture
|movieTexture
|pixelTexture
)
;
x3DTexture3DNode : (
composedTexture3D
|imageTexture3D
|pixelTexture3D
)
;
x3DTextureCoordinateNode : (
x3DSingleTextureCoordinateNode
|textureCoordinate
|textureCoordinate3D
|textureCoordinate4D
|textureCoordinateGenerator
|multiTextureCoordinate
)
;
x3DTextureNode : (
x3DEnvironmentTextureNode
|composedCubeMapTexture
|generatedCubeMapTexture
|imageCubeMapTexture
|x3DSingleTextureNode
|x3DTexture2DNode
|imageTexture
|movieTexture
|pixelTexture
|x3DTexture3DNode
|composedTexture3D
|imageTexture3D
|pixelTexture3D
|multiTexture
)
;
x3DTextureProjectorNode : (
textureProjector
|textureProjectorParallel
)
;
x3DTextureTransformNode : (
x3DSingleTextureTransformNode
|multiTextureTransform
|textureTransform
|textureTransform3D
|textureTransformMatrix3D
)
;
x3DTimeDependentNode : (
x3DSoundProcessingNode
|analyser
|biquadFilter
|convolver
|delay
|dynamicsCompressor
|gain
|waveShaper
|x3DSoundSourceNode
|audioClip
|bufferAudioSource
|listenerPointSource
|microphoneSource
|movieTexture
|oscillatorSource
|streamAudioSource
|timeSensor
)
;
x3DTouchSensorNode : (
geoTouchSensor
|touchSensor
)
;
x3DTriggerNode : (
booleanTrigger
|integerTrigger
|timeTrigger
)
;
x3DVertexAttributeNode : (
floatVertexAttribute
|matrix3VertexAttribute
|matrix4VertexAttribute
)
;
x3DViewpointNode : (
geoViewpoint
|orthoViewpoint
|viewpoint
)
;
x3DViewportNode : (
viewport
)
;
x3DVolumeDataNode : (
isoSurfaceVolumeData
|segmentedVolumeData
|volumeData
)
;
x3DVolumeRenderStyleNode : (
x3DComposableVolumeRenderStyleNode
|blendedVolumeStyle
|boundaryEnhancementVolumeStyle
|cartoonVolumeStyle
|composedVolumeStyle
|edgeEnhancementVolumeStyle
|opacityMapVolumeStyle
|shadedVolumeStyle
|silhouetteEnhancementVolumeStyle
|toneMappedVolumeStyle
|projectionVolumeStyle
)
;
x3DConcreteNode : (
acousticProperties
|analyser
|anchor
|appearance
|arc2D
|arcClose2D
|audioClip
|audioDestination
|background
|ballJoint
|billboard
|biquadFilter
|blendedVolumeStyle
|booleanFilter
|booleanSequencer
|booleanToggle
|booleanTrigger
|boundaryEnhancementVolumeStyle
|boundedPhysicsModel
|box
|bufferAudioSource
|cADAssembly
|cADFace
|cADLayer
|cADPart
|cartoonVolumeStyle
|channelMerger
|channelSelector
|channelSplitter
|circle2D
|clipPlane
|collidableOffset
|collidableShape
|collision
|collisionCollection
|collisionSensor
|collisionSpace
|color
|colorChaser
|colorDamper
|colorInterpolator
|colorRGBA
|composedCubeMapTexture
|composedShader
|composedTexture3D
|composedVolumeStyle
|cone
|coneEmitter
|contact
|contour2D
|contourPolyline2D
|convolver
|coordinate
|coordinateChaser
|coordinateDamper
|coordinateDouble
|coordinateInterpolator
|coordinateInterpolator2D
|cylinder
|cylinderSensor
|delay
|directionalLight
|dISEntityManager
|dISEntityTypeMapping
|disk2D
|doubleAxisHingeJoint
|dynamicsCompressor
|easeInEaseOut
|edgeEnhancementVolumeStyle
|elevationGrid
|espduTransform
|explosionEmitter
|extrusion
|fillProperties
|floatVertexAttribute
|fog
|fogCoordinate
|fontStyle
|forcePhysicsModel
|gain
|generatedCubeMapTexture
|geoCoordinate
|geoElevationGrid
|geoLocation
|geoLOD
|geoMetadata
|geoOrigin
|geoPositionInterpolator
|geoProximitySensor
|geoTouchSensor
|geoTransform
|geoViewpoint
|group
|hAnimDisplacer
|hAnimHumanoid
|hAnimJoint
|hAnimMotion
|hAnimSegment
|hAnimSite
|imageCubeMapTexture
|imageTexture
|imageTexture3D
|indexedFaceSet
|indexedLineSet
|indexedQuadSet
|indexedTriangleFanSet
|indexedTriangleSet
|indexedTriangleStripSet
|inline
|integerSequencer
|integerTrigger
|isoSurfaceVolumeData
|keySensor
|layer
|layerSet
|layout
|layoutGroup
|layoutLayer
|linePickSensor
|lineProperties
|lineSet
|listenerPointSource
|loadSensor
|localFog
|lOD
|material
|matrix3VertexAttribute
|matrix4VertexAttribute
|metadataBoolean
|metadataDouble
|metadataFloat
|metadataInteger
|metadataSet
|metadataString
|microphoneSource
|motorJoint
|movieTexture
|multiTexture
|multiTextureCoordinate
|multiTextureTransform
|navigationInfo
|normal
|normalInterpolator
|nurbsCurve
|nurbsCurve2D
|nurbsOrientationInterpolator
|nurbsPatchSurface
|nurbsPositionInterpolator
|nurbsSet
|nurbsSurfaceInterpolator
|nurbsSweptSurface
|nurbsSwungSurface
|nurbsTextureCoordinate
|nurbsTrimmedSurface
|opacityMapVolumeStyle
|orientationChaser
|orientationDamper
|orientationInterpolator
|orthoViewpoint
|oscillatorSource
|packagedShader
|particleSystem
|periodicWave
|physicalMaterial
|pickableGroup
|pixelTexture
|pixelTexture3D
|planeSensor
|pointEmitter
|pointLight
|pointPickSensor
|pointProperties
|pointSet
|polyline2D
|polylineEmitter
|polypoint2D
|positionChaser
|positionChaser2D
|positionDamper
|positionDamper2D
|positionInterpolator
|positionInterpolator2D
|primitivePickSensor
|programShader
|projectionVolumeStyle
|protoInstance
|proximitySensor
|quadSet
|receiverPdu
|rectangle2D
|rigidBody
|rigidBodyCollection
|scalarChaser
|scalarDamper
|scalarInterpolator
|screenFontStyle
|screenGroup
|script
|segmentedVolumeData
|shadedVolumeStyle
|shaderPart
|shaderProgram
|shape
|signalPdu
|silhouetteEnhancementVolumeStyle
|singleAxisHingeJoint
|sliderJoint
|sound
|spatialSound
|sphere
|sphereSensor
|splinePositionInterpolator
|splinePositionInterpolator2D
|splineScalarInterpolator
|spotLight
|squadOrientationInterpolator
|staticGroup
|streamAudioDestination
|streamAudioSource
|stringSensor
|surfaceEmitter
|switch
|texCoordChaser2D
|texCoordDamper2D
|text
|textureBackground
|textureCoordinate
|textureCoordinate3D
|textureCoordinate4D
|textureCoordinateGenerator
|textureProjector
|textureProjectorParallel
|textureProperties
|textureTransform
|textureTransform3D
|textureTransformMatrix3D
|timeSensor
|timeTrigger
|toneMappedVolumeStyle
|touchSensor
|transform
|transformSensor
|transmitterPdu
|triangleFanSet
|triangleSet
|triangleSet2D
|triangleStripSet
|twoSidedMaterial
|universalJoint
|unlitMaterial
|viewpoint
|viewpointGroup
|viewport
|visibilitySensor
|volumeData
|volumeEmitter
|volumePickSensor
|waveShaper
|windPhysicsModel
|worldInfo
)
;
x3DBoundedObject : (
x3DGroupingNode
|x3DViewportNode
|viewport
|anchor
|billboard
|cADAssembly
|cADLayer
|cADPart
|collision
|espduTransform
|geoLocation
|geoTransform
|group
|hAnimSegment
|hAnimSite
|layer
|layoutGroup
|layoutLayer
|lOD
|pickableGroup
|screenGroup
|switch
|transform
|x3DNBodyCollidableNode
|collidableOffset
|collidableShape
|x3DNBodyCollisionSpaceNode
|collisionSpace
|x3DShapeNode
|particleSystem
|shape
|x3DVolumeDataNode
|isoSurfaceVolumeData
|segmentedVolumeData
|volumeData
|cADFace
|collisionCollection
|geoLOD
|hAnimHumanoid
|hAnimJoint
|inline
|nurbsSet
|receiverPdu
|rigidBody
|rigidBodyCollection
|signalPdu
|staticGroup
|transmitterPdu
)
;
x3DFogObject : (
fog
|localFog
)
;
x3DMetadataObject : (
metadataBoolean
|metadataDouble
|metadataFloat
|metadataInteger
|metadataSet
|metadataString
)
;
x3DPickableObject : (
x3DLayerNode
|layer
|layoutLayer
|pickableGroup
)
;
x3DProgrammableShaderObject : (
composedShader
|packagedShader
|shaderProgram
)
;
x3DUrlObject : (
x3DScriptNode
|script
|anchor
|audioClip
|bufferAudioSource
|dISEntityTypeMapping
|geoMetadata
|imageCubeMapTexture
|imageTexture
|imageTexture3D
|inline
|movieTexture
|packagedShader
|shaderPart
|shaderProgram
)
;
acousticProperties
: dEF 'AcousticProperties' '{'
(
   'absorption' SFFloat
|  'description' SFString
|  'diffuse' SFFloat
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'refraction' SFFloat
|  'specular' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
analyser
: dEF 'Analyser' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'fftSize' SFInt32
|  'frequencyBinCount' SFInt32
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'maxDecibels' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'minDecibels' SFFloat
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'smoothingTimeConstant' SFFloat
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
anchor
: dEF 'Anchor' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'description' SFString
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'parameter' MFString
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'url' MFString
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
appearance
: dEF 'Appearance' '{'
(
   'acousticProperties' ( acousticProperties )
|  'alphaCutoff' unitIntervalType
|  'alphaMode' alphaModeChoices
|  'backMaterial' ( x3DMaterialNode )
|  'fillProperties' ( fillProperties )
|  'IS' ( iS )
|  'lineProperties' ( lineProperties )
|  'material' ( x3DMaterialNode )
|  'metadata' ( x3DMetadataObject )
|  'pointProperties' ( pointProperties )
|  'shaders' '[' ( x3DShaderNode )* ']'
|  'texture' ( x3DTextureNode )
|  'textureTransform' ( x3DTextureTransformNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
arc2D
: dEF 'Arc2D' '{'
(
   'endAngle' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'radius' SFFloat
|  'startAngle' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
arcClose2D
: dEF 'ArcClose2D' '{'
(
   'closureType' closureTypeChoices
|  'endAngle' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'radius' SFFloat
|  'solid' SFBool
|  'startAngle' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
audioClip
: dEF 'AudioClip' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'duration_changed' SFTime
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'load' SFBool
|  'loop' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'pitch' SFFloat
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
audioDestination
: dEF 'AudioDestination' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'maxChannelCount' SFInt32
|  'mediaDeviceID' SFString
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
background
: dEF 'Background' '{'
(
   'backUrl' MFString
|  'bindTime' SFTime
|  'bottomUrl' MFString
|  'frontUrl' MFString
|  'groundAngle' MFFloat
|  'groundColor' MFColor
|  'IS' ( iS )
|  'isBound' SFBool
|  'leftUrl' MFString
|  'metadata' ( x3DMetadataObject )
|  'rightUrl' MFString
|  'set_bind' SFBool
|  'skyAngle' MFFloat
|  'skyColor' MFColor
|  'topUrl' MFString
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ballJoint
: dEF 'BallJoint' '{'
(
   'anchorPoint' SFVec3f
|  'body1' ( rigidBody )
|  'body1AnchorPoint' SFVec3f
|  'body2' ( rigidBody )
|  'body2AnchorPoint' SFVec3f
|  'forceOutput' '[' (forceOutputValues)* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
billboard
: dEF 'Billboard' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'axisOfRotation' SFVec3f
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
biquadFilter
: dEF 'BiquadFilter' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'detune' SFFloat
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'frequency' SFFloat
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'qualityFactor' SFFloat
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'type' biquadTypeFilterChoices
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
blendedVolumeStyle
: dEF 'BlendedVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'renderStyle' ( x3DComposableVolumeRenderStyleNode )
|  'voxels' ( x3DTexture3DNode )
|  'weightConstant1' SFFloat
|  'weightConstant2' SFFloat
|  'weightFunction1' volumeRenderingWeightFunctionChoices
|  'weightFunction2' volumeRenderingWeightFunctionChoices
|  'weightTransferFunction1' ( x3DTexture2DNode )
|  'weightTransferFunction2' ( x3DTexture2DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
booleanFilter
: dEF 'BooleanFilter' '{'
(
   'inputFalse' SFBool
|  'inputNegate' SFBool
|  'inputTrue' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'set_boolean' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
booleanSequencer
: dEF 'BooleanSequencer' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFBool
|  'metadata' ( x3DMetadataObject )
|  'next' SFBool
|  'previous' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
booleanToggle
: dEF 'BooleanToggle' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'set_boolean' SFBool
|  'toggle' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
booleanTrigger
: dEF 'BooleanTrigger' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'set_triggerTime' SFTime
|  'triggerTrue' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
boundaryEnhancementVolumeStyle
: dEF 'BoundaryEnhancementVolumeStyle' '{'
(
   'boundaryOpacity' SFFloat
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'opacityFactor' SFFloat
|  'retainedOpacity' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
boundedPhysicsModel
: dEF 'BoundedPhysicsModel' '{'
(
   'enabled' SFBool
|  'geometry' ( x3DGeometryNode )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
box
: dEF 'Box' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'size' SFVec3f
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
bufferAudioSource
: dEF 'BufferAudioSource' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'buffer' MFFloat
|  'bufferDuration' SFTime
|  'bufferlength' SFInt32
|  'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'description' SFString
|  'detune' SFFloat
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'length' SFInt32
|  'load' SFBool
|  'loop' SFBool
|  'loopEnd' SFFloat
|  'loopStart' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'numberOfChannels' SFInt32
|  'pauseTime' SFTime
|  'playbackRate' SFFloat
|  'resumeTime' SFTime
|  'sampleRate' SFFloat
|  'startTime' SFTime
|  'stopTime' SFTime
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cADAssembly
: dEF 'CADAssembly' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cADFace
: dEF 'CADFace' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'shape' ( shape|lOD|transform )
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cADLayer
: dEF 'CADLayer' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cADPart
: dEF 'CADPart' '{'
(
   'addChildren' '[' ( cADFace )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' '[' ( cADFace )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'removeChildren' '[' ( cADFace )* ']'
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cartoonVolumeStyle
: dEF 'CartoonVolumeStyle' '{'
(
   'colorSteps' SFInt32
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'orthogonalColor' SFColorRGBA
|  'parallelColor' SFColorRGBA
|  'surfaceNormals' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
channelMerger
: dEF 'ChannelMerger' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
channelSelector
: dEF 'ChannelSelector' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'channelSelection' SFInt32
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
channelSplitter
: dEF 'ChannelSplitter' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'outputs' '[' ( x3DSoundChannelNode|x3DSoundProcessingNode|x3DSoundSourceNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
circle2D
: dEF 'Circle2D' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'radius' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
clipPlane
: dEF 'ClipPlane' '{'
(
   'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'plane' SFVec4f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
collidableOffset
: dEF 'CollidableOffset' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'collidable' ( x3DNBodyCollidableNode )
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'rotation' SFRotation
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
collidableShape
: dEF 'CollidableShape' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'rotation' SFRotation
|  'shape' ( shape )
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
collision
: dEF 'Collision' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'collideTime' SFTime
|  'description' SFString
|  'enabled' SFBool
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'proxy' ( x3DChildNode )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
collisionCollection
: dEF 'CollisionCollection' '{'
(
   'appliedParameters' '[' (appliedParametersChoices)* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'bounce' SFFloat
|  'collidables' '[' ( x3DNBodyCollisionSpaceNode|x3DNBodyCollidableNode )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'frictionCoefficients' SFVec2f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'minBounceSpeed' SFFloat
|  'slipFactors' SFVec2f
|  'softnessConstantForceMix' SFFloat
|  'softnessErrorCorrection' SFFloat
|  'surfaceSpeed' SFVec2f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
collisionSensor
: dEF 'CollisionSensor' '{'
(
   'collider' ( collisionCollection )
|  'contacts' '[' ( contact )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'intersections' '[' ( x3DNBodyCollidableNode )* ']'
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
collisionSpace
: dEF 'CollisionSpace' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'collidables' '[' ( x3DNBodyCollisionSpaceNode|x3DNBodyCollidableNode )* ']'
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'useGeometry' SFBool
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
color
: dEF 'Color' '{'
(
   'color' MFColor
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
colorChaser
: dEF 'ColorChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFColor
|  'initialValue' SFColor
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' SFColor
|  'set_value' SFColor
|  'value_changed' SFColor
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
colorDamper
: dEF 'ColorDamper' '{'
(
   'initialDestination' SFColor
|  'initialValue' SFColor
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' SFColor
|  'set_value' SFColor
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' SFColor
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
colorInterpolator
: dEF 'ColorInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFColor
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' SFColor
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
colorRGBA
: dEF 'ColorRGBA' '{'
(
   'color' MFColorRGBA
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
composedCubeMapTexture
: dEF 'ComposedCubeMapTexture' '{'
(
   'backTexture' ( x3DTexture2DNode )
|  'bottomTexture' ( x3DTexture2DNode )
|  'description' SFString
|  'frontTexture' ( x3DTexture2DNode )
|  'IS' ( iS )
|  'leftTexture' ( x3DTexture2DNode )
|  'metadata' ( x3DMetadataObject )
|  'rightTexture' ( x3DTexture2DNode )
|  'textureProperties' ( textureProperties )
|  'topTexture' ( x3DTexture2DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
composedShader
: dEF 'ComposedShader' '{'
(
   'activate' SFBool
|  'field' '[' ( field )* ']'
|  'IS' ( iS )
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' shaderLanguageValues
|  'metadata' ( x3DMetadataObject )
|  'parts' '[' ( shaderPart )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
composedTexture3D
: dEF 'ComposedTexture3D' '{'
(
   'description' SFString
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'repeatR' SFBool
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'texture' '[' ( x3DTexture2DNode )* ']'
|  'textureProperties' ( textureProperties )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
composedVolumeStyle
: dEF 'ComposedVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'renderStyle' '[' ( x3DComposableVolumeRenderStyleNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cone
: dEF 'Cone' '{'
(
   'bottom' SFBool
|  'bottomRadius' SFFloat
|  'height' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'side' SFBool
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coneEmitter
: dEF 'ConeEmitter' '{'
(
   'angle' SFFloat
|  'direction' SFVec3f
|  'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'position' SFVec3f
|  'speed' SFFloat
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
contact
: dEF 'Contact' '{'
(
   'appliedParameters' '[' (appliedParametersChoices)* ']'
|  'body1' ( rigidBody )
|  'body2' ( rigidBody )
|  'bounce' SFFloat
|  'contactNormal' SFVec3f
|  'depth' SFFloat
|  'frictionCoefficients' SFVec2f
|  'frictionDirection' SFVec3f
|  'geometry1' ( x3DNBodyCollidableNode )
|  'geometry2' ( x3DNBodyCollidableNode )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'minBounceSpeed' SFFloat
|  'position' SFVec3f
|  'slipCoefficients' SFVec2f
|  'softnessConstantForceMix' SFFloat
|  'softnessErrorCorrection' SFFloat
|  'surfaceSpeed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
contour2D
: dEF 'Contour2D' '{'
(
   'addChildren' '[' ( nurbsCurve2D|contourPolyline2D )* ']'
|  'children' '[' ( nurbsCurve2D|contourPolyline2D )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( nurbsCurve2D|contourPolyline2D )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
contourPolyline2D
: dEF 'ContourPolyline2D' '{'
(
   'controlPoint' MFVec2d
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
convolver
: dEF 'Convolver' '{'
(
   'buffer' MFFloat
|  'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'normalize' SFBool
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coordinate
: dEF 'Coordinate' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coordinateChaser
: dEF 'CoordinateChaser' '{'
(
   'duration' SFTime
|  'initialDestination' MFVec3f
|  'initialValue' MFVec3f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' MFVec3f
|  'set_value' MFVec3f
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coordinateDamper
: dEF 'CoordinateDamper' '{'
(
   'initialDestination' MFVec3f
|  'initialValue' MFVec3f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' MFVec3f
|  'set_value' MFVec3f
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coordinateDouble
: dEF 'CoordinateDouble' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec3d
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coordinateInterpolator
: dEF 'CoordinateInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
coordinateInterpolator2D
: dEF 'CoordinateInterpolator2D' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec2f
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cylinder
: dEF 'Cylinder' '{'
(
   'bottom' SFBool
|  'height' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'radius' SFFloat
|  'side' SFBool
|  'solid' SFBool
|  'top' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
cylinderSensor
: dEF 'CylinderSensor' '{'
(
   'autoOffset' SFBool
|  'axisRotation' SFRotation
|  'description' SFString
|  'diskAngle' SFFloat
|  'enabled' SFBool
|  'IS' ( iS )
|  'isActive' SFBool
|  'isOver' SFBool
|  'maxAngle' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'minAngle' SFFloat
|  'offset' SFFloat
|  'rotation_changed' SFRotation
|  'trackPoint_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
delay
: dEF 'Delay' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'delayTime' SFTime
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'maxDelayTime' SFTime
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
directionalLight
: dEF 'DirectionalLight' '{'
(
   'ambientIntensity' unitIntervalType
|  'color' SFColor
|  'direction' SFVec3f
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
dISEntityManager
: dEF 'DISEntityManager' '{'
(
   'addedEntities' '[' ( espduTransform )* ']'
|  'address' SFString
|  'applicationID' SFInt32
|  'children' '[' ( dISEntityTypeMapping )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'port' SFInt32
|  'removedEntities' '[' ( espduTransform )* ']'
|  'siteID' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
dISEntityTypeMapping
: dEF 'DISEntityTypeMapping' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'category' SFInt32
|  'country' SFInt32
|  'description' SFString
|  'domain' SFInt32
|  'extra' SFInt32
|  'IS' ( iS )
|  'kind' SFInt32
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'specific' SFInt32
|  'subcategory' SFInt32
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
disk2D
: dEF 'Disk2D' '{'
(
   'innerRadius' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'outerRadius' SFFloat
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
doubleAxisHingeJoint
: dEF 'DoubleAxisHingeJoint' '{'
(
   'anchorPoint' SFVec3f
|  'axis1' SFVec3f
|  'axis2' SFVec3f
|  'body1' ( rigidBody )
|  'body1AnchorPoint' SFVec3f
|  'body1Axis' SFVec3f
|  'body2' ( rigidBody )
|  'body2AnchorPoint' SFVec3f
|  'body2Axis' SFVec3f
|  'desiredAngularVelocity1' SFFloat
|  'desiredAngularVelocity2' SFFloat
|  'forceOutput' '[' (forceOutputValues)* ']'
|  'hinge1Angle' SFFloat
|  'hinge1AngleRate' SFFloat
|  'hinge2Angle' SFFloat
|  'hinge2AngleRate' SFFloat
|  'IS' ( iS )
|  'maxAngle1' SFFloat
|  'maxTorque1' SFFloat
|  'maxTorque2' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'minAngle1' SFFloat
|  'stop1Bounce' SFFloat
|  'stop1ConstantForceMix' SFFloat
|  'stop1ErrorCorrection' SFFloat
|  'suspensionErrorCorrection' SFFloat
|  'suspensionForce' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
dynamicsCompressor
: dEF 'DynamicsCompressor' '{'
(
   'attack' SFTime
|  'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'knee' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'ratio' SFFloat
|  'reduction' SFFloat
|  'release' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'threshold' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
easeInEaseOut
: dEF 'EaseInEaseOut' '{'
(
   'easeInEaseOut' MFVec2f
|  'IS' ( iS )
|  'key' MFFloat
|  'metadata' ( x3DMetadataObject )
|  'modifiedFraction_changed' SFFloat
|  'set_fraction' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
edgeEnhancementVolumeStyle
: dEF 'EdgeEnhancementVolumeStyle' '{'
(
   'edgeColor' SFColorRGBA
|  'enabled' SFBool
|  'gradientThreshold' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'surfaceNormals' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
elevationGrid
: dEF 'ElevationGrid' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'creaseAngle' SFFloat
|  'fogCoord' ( fogCoordinate )
|  'height' MFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'set_height' MFFloat
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode )
|  'xDimension' SFInt32
|  'xSpacing' SFFloat
|  'zDimension' SFInt32
|  'zSpacing' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
espduTransform
: dEF 'EspduTransform' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'address' SFString
|  'applicationID' SFInt32
|  'articulationParameterArray' MFFloat
|  'articulationParameterChangeIndicatorArray' MFInt32
|  'articulationParameterCount' SFInt32
|  'articulationParameterDesignatorArray' MFInt32
|  'articulationParameterIdPartAttachedToArray' MFInt32
|  'articulationParameterTypeArray' MFInt32
|  'articulationParameterValue0_changed' SFFloat
|  'articulationParameterValue1_changed' SFFloat
|  'articulationParameterValue2_changed' SFFloat
|  'articulationParameterValue3_changed' SFFloat
|  'articulationParameterValue4_changed' SFFloat
|  'articulationParameterValue5_changed' SFFloat
|  'articulationParameterValue6_changed' SFFloat
|  'articulationParameterValue7_changed' SFFloat
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' '[' ( x3DChildNode )* ']'
|  'collideTime' SFTime
|  'collisionType' SFInt32
|  'deadReckoning' SFInt32
|  'description' SFString
|  'detonateTime' SFTime
|  'detonationLocation' SFVec3f
|  'detonationRelativeLocation' SFVec3f
|  'detonationResult' SFInt32
|  'enabled' SFBool
|  'entityCategory' SFInt32
|  'entityCountry' SFInt32
|  'entityDomain' SFInt32
|  'entityExtra' SFInt32
|  'entityID' SFInt32
|  'entityKind' SFInt32
|  'entitySpecific' SFInt32
|  'entitySubcategory' SFInt32
|  'eventApplicationID' SFInt32
|  'eventEntityID' SFInt32
|  'eventNumber' SFInt32
|  'eventSiteID' SFInt32
|  'fired1' SFBool
|  'fired2' SFBool
|  'firedTime' SFTime
|  'fireMissionIndex' SFInt32
|  'firingRange' SFFloat
|  'firingRate' SFInt32
|  'forceID' SFInt32
|  'fuse' SFInt32
|  'geoCoords' SFVec3d
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'isActive' SFBool
|  'isCollided' SFBool
|  'isDetonated' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'linearAcceleration' SFVec3f
|  'linearVelocity' SFVec3f
|  'marking' SFString
|  'metadata' ( x3DMetadataObject )
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'munitionApplicationID' SFInt32
|  'munitionEndPoint' SFVec3f
|  'munitionEntityID' SFInt32
|  'munitionQuantity' SFInt32
|  'munitionSiteID' SFInt32
|  'munitionStartPoint' SFVec3f
|  'networkMode' networkModeChoices
|  'port' SFInt32
|  'readInterval' SFTime
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'rotation' SFRotation
|  'rtpHeaderExpected' SFBool
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'set_articulationParameterValue0' SFFloat
|  'set_articulationParameterValue1' SFFloat
|  'set_articulationParameterValue2' SFFloat
|  'set_articulationParameterValue3' SFFloat
|  'set_articulationParameterValue4' SFFloat
|  'set_articulationParameterValue5' SFFloat
|  'set_articulationParameterValue6' SFFloat
|  'set_articulationParameterValue7' SFFloat
|  'siteID' SFInt32
|  'timestamp' SFTime
|  'translation' SFVec3f
|  'visible' SFBool
|  'warhead' SFInt32
|  'writeInterval' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
explosionEmitter
: dEF 'ExplosionEmitter' '{'
(
   'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'position' SFVec3f
|  'speed' SFFloat
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
extrusion
: dEF 'Extrusion' '{'
(
   'beginCap' SFBool
|  'ccw' SFBool
|  'convex' SFBool
|  'creaseAngle' SFFloat
|  'crossSection' MFVec2f
|  'endCap' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'orientation' MFRotation
|  'scale' MFVec2f
|  'set_crossSection' MFVec2f
|  'set_orientation' MFRotation
|  'set_scale' MFVec2f
|  'set_spine' MFVec3f
|  'solid' SFBool
|  'spine' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
fillProperties
: dEF 'FillProperties' '{'
(
   'filled' SFBool
|  'hatchColor' SFColor
|  'hatched' SFBool
|  'hatchStyle' hatchStyleValues
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
floatVertexAttribute
: dEF 'FloatVertexAttribute' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' xsNMTOKEN
|  'numComponents' SFInt32
|  'value' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
fog
: dEF 'Fog' '{'
(
   'bindTime' SFTime
|  'color' SFColor
|  'fogType' fogTypeChoices
|  'IS' ( iS )
|  'isBound' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_bind' SFBool
|  'visibilityRange' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
fogCoordinate
: dEF 'FogCoordinate' '{'
(
   'depth' MFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
fontStyle
: dEF 'FontStyle' '{'
(
   'class' xsNMTOKENS
|  'family' '[' (fontFamilyValues)* ']'
|  'horizontal' SFBool
|  'id' xsNMTOKEN
|  'IS' ( iS )
|  'justify' '[' (justifyChoices)* ']'
|  'language' SFString
|  'leftToRight' SFBool
|  'metadata' ( x3DMetadataObject )
|  'size' SFFloat
|  'spacing' SFFloat
|  'style' fontStyleChoices
|  'topToBottom' SFBool
)*
'}'
| 'USE' xsIDREF;
forcePhysicsModel
: dEF 'ForcePhysicsModel' '{'
(
   'enabled' SFBool
|  'force' SFVec3f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
gain
: dEF 'Gain' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
generatedCubeMapTexture
: dEF 'GeneratedCubeMapTexture' '{'
(
   'description' SFString
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'size' SFInt32
|  'textureProperties' ( textureProperties )
|  'update' generatedCubeMapTextureUpdateChoices
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoCoordinate
: dEF 'GeoCoordinate' '{'
(
   'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec3d
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoElevationGrid
: dEF 'GeoElevationGrid' '{'
(
   'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'creaseAngle' SFDouble
|  'geoGridOrigin' SFVec3d
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'height' MFDouble
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'set_height' MFDouble
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode )
|  'xDimension' SFInt32
|  'xSpacing' SFDouble
|  'yScale' SFFloat
|  'zDimension' SFInt32
|  'zSpacing' SFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoLocation
: dEF 'GeoLocation' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'geoCoords' SFVec3d
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoLOD
: dEF 'GeoLOD' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3d
|  'child1Url' MFString
|  'child2Url' MFString
|  'child3Url' MFString
|  'child4Url' MFString
|  'children' '[' ( x3DChildNode )* ']'
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'level_changed' SFInt32
|  'metadata' ( x3DMetadataObject )
|  'range' SFFloat
|  'rootNode' '[' ( x3DChildNode )* ']'
|  'rootUrl' MFString
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoMetadata
: dEF 'GeoMetadata' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'data' '[' ( x3DNode )* ']'
|  'description' SFString
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'summary' MFString
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoOrigin
: dEF 'GeoOrigin' '{'
(
   'geoCoords' SFVec3d
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'rotateYUp' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoPositionInterpolator
: dEF 'GeoPositionInterpolator' '{'
(
   'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'geovalue_changed' SFVec3d
|  'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec3d
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoProximitySensor
: dEF 'GeoProximitySensor' '{'
(
   'center' SFVec3d
|  'centerOfRotation_changed' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'geoCenter' SFVec3d
|  'geoCoord_changed' SFVec3d
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'orientation_changed' SFRotation
|  'position_changed' SFVec3f
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoTouchSensor
: dEF 'GeoTouchSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'hitGeoCoord_changed' SFVec3d
|  'hitNormal_changed' SFVec3f
|  'hitPoint_changed' SFVec3f
|  'hitTexCoord_changed' SFVec2f
|  'IS' ( iS )
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' ( x3DMetadataObject )
|  'touchTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoTransform
: dEF 'GeoTransform' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'geoCenter' SFVec3d
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
geoViewpoint
: dEF 'GeoViewpoint' '{'
(
   'bindTime' SFTime
|  'centerOfRotation' SFVec3d
|  'description' SFString
|  'farDistance' SFFloat
|  'fieldOfView' SFFloat
|  'geoOrigin' ( geoOrigin )
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' ( x3DMetadataObject )
|  'navigationInfo' ( navigationInfo )
|  'nearDistance' SFFloat
|  'orientation' SFRotation
|  'position' SFVec3d
|  'retainUserOffsets' SFBool
|  'set_bind' SFBool
|  'speedFactor' SFFloat
|  'viewAll' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
group
: dEF 'Group' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
hAnimDisplacer
: dEF 'HAnimDisplacer' '{'
(
   'coordIndex' MFInt32
|  'description' SFString
|  'displacements' MFVec3f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' hanimFeaturePointNameValues
|  'weight' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
hAnimHumanoid
: dEF 'HAnimHumanoid' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'description' SFString
|  'info' MFString
|  'IS' ( iS )
|  'jointBindingPositions' MFVec3f
|  'jointBindingRotations' MFRotation
|  'jointBindingScales' MFVec3f
|  'joints' '[' ( hAnimJoint )* ']'
|  'loa' loaType
|  'metadata' ( x3DMetadataObject )
|  'motions' '[' ( hAnimMotion )* ']'
|  'motionsEnabled' MFBool
|  'name' xsNMTOKEN
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'segments' '[' ( hAnimSegment )* ']'
|  'sites' '[' ( hAnimSite )* ']'
|  'skeletalConfiguration' SFString
|  'skeleton' '[' ( hAnimJoint|hAnimSite )* ']'
|  'skin' '[' ( group|transform|shape|indexedFaceSet )* ']'
|  'skinBindingCoords' ( coordinate|coordinateDouble )
|  'skinBindingNormals' ( x3DNormalNode )
|  'skinCoord' ( coordinate|coordinateDouble )
|  'skinNormal' ( x3DNormalNode )
|  'translation' SFVec3f
|  'version' hanimVersionChoices
|  'viewpoints' '[' ( hAnimSite )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
hAnimJoint
: dEF 'HAnimJoint' '{'
(
   'addChildren' '[' ( hAnimJoint|hAnimSegment )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' '[' ( hAnimJoint|hAnimSegment )* ']'
|  'description' SFString
|  'displacers' '[' ( hAnimDisplacer )* ']'
|  'IS' ( iS )
|  'limitOrientation' SFRotation
|  'llimit' MFFloat
|  'metadata' ( x3DMetadataObject )
|  'name' hanimJointNameValues
|  'removeChildren' '[' ( hAnimJoint|hAnimSegment )* ']'
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'skinCoordIndex' MFInt32
|  'skinCoordWeight' MFFloat
|  'stiffness' MFFloat
|  'translation' SFVec3f
|  'ulimit' MFFloat
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
hAnimMotion
: dEF 'HAnimMotion' '{'
(
   'channels' SFString
|  'channelsEnabled' MFBool
|  'cycleTime' SFTime
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'endFrame' SFInt32
|  'frameCount' SFInt32
|  'frameDuration' SFTime
|  'frameIncrement' SFInt32
|  'frameIndex' SFInt32
|  'IS' ( iS )
|  'joints' SFString
|  'loa' loaType
|  'loop' SFBool
|  'metadata' ( x3DMetadataObject )
|  'name' xsNMTOKEN
|  'next' SFBool
|  'previous' SFBool
|  'startFrame' SFInt32
|  'values' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
hAnimSegment
: dEF 'HAnimSegment' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'centerOfMass' SFVec3f
|  'children' '[' ( x3DChildNode )* ']'
|  'coord' ( coordinate|coordinateDouble )
|  'description' SFString
|  'displacers' '[' ( hAnimDisplacer )* ']'
|  'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'momentsOfInertia' MFFloat
|  'name' hanimSegmentNameValues
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
hAnimSite
: dEF 'HAnimSite' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' '[' ( x3DChildNode )* ']'
|  'description' SFString
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' hanimFeaturePointNameValues
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
imageCubeMapTexture
: dEF 'ImageCubeMapTexture' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'textureProperties' ( textureProperties )
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
imageTexture
: dEF 'ImageTexture' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' ( textureProperties )
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
imageTexture3D
: dEF 'ImageTexture3D' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'repeatR' SFBool
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' ( textureProperties )
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
indexedFaceSet
: dEF 'IndexedFaceSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorIndex' MFInt32
|  'colorPerVertex' SFBool
|  'convex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'coordIndex' MFInt32
|  'creaseAngle' SFFloat
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalIndex' MFInt32
|  'normalPerVertex' SFBool
|  'set_colorIndex' MFInt32
|  'set_coordIndex' MFInt32
|  'set_normalIndex' MFInt32
|  'set_texCoordIndex' MFInt32
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'texCoordIndex' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
indexedLineSet
: dEF 'IndexedLineSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'color' ( x3DColorNode )
|  'colorIndex' MFInt32
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'coordIndex' MFInt32
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'set_colorIndex' MFInt32
|  'set_coordIndex' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
indexedQuadSet
: dEF 'IndexedQuadSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'index' MFInt32
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
indexedTriangleFanSet
: dEF 'IndexedTriangleFanSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'index' MFInt32
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
indexedTriangleSet
: dEF 'IndexedTriangleSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'index' MFInt32
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
indexedTriangleStripSet
: dEF 'IndexedTriangleStripSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'index' MFInt32
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
inline
: dEF 'Inline' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'description' SFString
|  'global' SFBool
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'url' MFString
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
integerSequencer
: dEF 'IntegerSequencer' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFInt32
|  'metadata' ( x3DMetadataObject )
|  'next' SFBool
|  'previous' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
integerTrigger
: dEF 'IntegerTrigger' '{'
(
   'integerKey' SFInt32
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'set_boolean' SFBool
|  'triggerValue' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
isoSurfaceVolumeData
: dEF 'IsoSurfaceVolumeData' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'contourStepSize' SFFloat
|  'dimensions' SFVec3f
|  'gradients' ( x3DTexture3DNode )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'renderStyle' '[' ( x3DVolumeRenderStyleNode )* ']'
|  'surfaceTolerance' SFFloat
|  'surfaceValues' MFFloat
|  'visible' SFBool
|  'voxels' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
keySensor
: dEF 'KeySensor' '{'
(
   'actionKeyPress' SFInt32
|  'actionKeyRelease' SFInt32
|  'altKey' SFBool
|  'controlKey' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'IS' ( iS )
|  'isActive' SFBool
|  'keyPress' SFString
|  'keyRelease' SFString
|  'metadata' ( x3DMetadataObject )
|  'shiftKey' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
layer
: dEF 'Layer' '{'
(
   'bboxCenter' SFVec3f
|  'bboxSize' bboxSizeType
|  'bboxDisplay' SFBool
|  'addChildren' '[' ( x3DChildNode )* ']'
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickable' SFBool
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'viewport' ( x3DViewportNode )
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
layerSet
: dEF 'LayerSet' '{'
(
   'activeLayer' SFInt32
|  'IS' ( iS )
|  'layers' '[' ( x3DLayerNode )* ']'
|  'metadata' ( x3DMetadataObject )
|  'order' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
layout
: dEF 'Layout' '{'
(
   'align' '[' (layoutAlignChoices)* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'offset' MFFloat
|  'offsetUnits' '[' (layoutUnitsChoices)* ']'
|  'scaleMode' '[' (layoutScaleModeChoices)* ']'
|  'size' MFFloat
|  'sizeUnits' '[' (layoutUnitsChoices)* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
layoutGroup
: dEF 'LayoutGroup' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'layout' ( x3DLayoutNode )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'viewport' ( x3DViewportNode )
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
layoutLayer
: dEF 'LayoutLayer' '{'
(
   'bboxCenter' SFVec3f
|  'bboxSize' bboxSizeType
|  'bboxDisplay' SFBool
|  'addChildren' '[' ( x3DChildNode )* ']'
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'layout' ( x3DLayoutNode )
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickable' SFBool
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'viewport' ( x3DViewportNode )
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
linePickSensor
: dEF 'LinePickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' intersectionTypeValues
|  'IS' ( iS )
|  'isActive' SFBool
|  'matchCriterion' pickSensorMatchCriterionChoices
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickedGeometry' '[' ( x3DChildNode )* ']'
|  'pickedNormal' MFVec3f
|  'pickedPoint' MFVec3f
|  'pickedTextureCoordinate' MFVec3f
|  'pickingGeometry' ( x3DGeometryNode )
|  'pickTarget' '[' ( x3DGroupingNode|x3DShapeNode|inline )* ']'
|  'sortOrder' pickSensorSortOrderValues
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
lineProperties
: dEF 'LineProperties' '{'
(
   'applied' SFBool
|  'IS' ( iS )
|  'linetype' lineTypeValues
|  'linewidthScaleFactor' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
lineSet
: dEF 'LineSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'color' ( x3DColorNode )
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'vertexCount' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
listenerPointSource
: dEF 'ListenerPointSource' '{'
(
   'description' SFString
|  'dopplerEnabled' SFBool
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'interauralDistance' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'orientation' SFRotation
|  'pauseTime' SFTime
|  'position' SFVec3f
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'trackCurrentView' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
loadSensor
: dEF 'LoadSensor' '{'
(
   'children' '[' ( x3DUrlObject )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'IS' ( iS )
|  'isActive' SFBool
|  'isLoaded' SFBool
|  'loadTime' SFTime
|  'metadata' ( x3DMetadataObject )
|  'progress' SFFloat
|  'timeOut' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
localFog
: dEF 'LocalFog' '{'
(
   'color' SFColor
|  'enabled' SFBool
|  'fogType' fogTypeChoices
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'visibilityRange' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
lOD
: dEF 'LOD' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' '[' ( x3DChildNode )* ']'
|  'forceTransitions' SFBool
|  'IS' ( iS )
|  'level_changed' SFInt32
|  'metadata' ( x3DMetadataObject )
|  'range' MFFloat
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
material
: dEF 'Material' '{'
(
   'ambientIntensity' unitIntervalType
|  'ambientTexture' ( x3DSingleTextureNode )
|  'ambientTextureMapping' xsNMTOKEN
|  'diffuseColor' SFColor
|  'diffuseTexture' ( x3DSingleTextureNode )
|  'diffuseTextureMapping' xsNMTOKEN
|  'emissiveColor' SFColor
|  'emissiveTexture' ( x3DSingleTextureNode )
|  'emissiveTextureMapping' xsNMTOKEN
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normalScale' SFFloat
|  'normalTexture' ( x3DSingleTextureNode )
|  'normalTextureMapping' xsNMTOKEN
|  'occlusionStrength' unitIntervalType
|  'occlusionTexture' ( x3DSingleTextureNode )
|  'occlusionTextureMapping' xsNMTOKEN
|  'shininess' unitIntervalType
|  'shininessTexture' ( x3DSingleTextureNode )
|  'shininessTextureMapping' xsNMTOKEN
|  'specularColor' SFColor
|  'specularTexture' ( x3DSingleTextureNode )
|  'specularTextureMapping' xsNMTOKEN
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
matrix3VertexAttribute
: dEF 'Matrix3VertexAttribute' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' xsNMTOKEN
|  'value' MFMatrix3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
matrix4VertexAttribute
: dEF 'Matrix4VertexAttribute' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' xsNMTOKEN
|  'value' MFMatrix4f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metadataBoolean
: dEF 'MetadataBoolean' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'reference' SFString
|  'value' MFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metadataDouble
: dEF 'MetadataDouble' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'reference' SFString
|  'value' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metadataFloat
: dEF 'MetadataFloat' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'reference' SFString
|  'value' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metadataInteger
: dEF 'MetadataInteger' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'reference' SFString
|  'value' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metadataSet
: dEF 'MetadataSet' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'reference' SFString
|  'value' '[' ( x3DMetadataObject )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metadataString
: dEF 'MetadataString' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' SFString
|  'reference' SFString
|  'value' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
microphoneSource
: dEF 'MicrophoneSource' '{'
(
   'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'mediaDeviceID' SFString
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
motorJoint
: dEF 'MotorJoint' '{'
(
   'autoCalc' SFBool
|  'axis1Angle' SFFloat
|  'axis1Torque' SFFloat
|  'axis2Angle' SFFloat
|  'axis2Torque' SFFloat
|  'axis3Angle' SFFloat
|  'axis3Torque' SFFloat
|  'body1' ( rigidBody )
|  'body2' ( rigidBody )
|  'enabledAxes' SFInt32
|  'forceOutput' '[' (forceOutputValues)* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'motor1Angle' SFFloat
|  'motor1AngleRate' SFFloat
|  'motor1Axis' SFVec3f
|  'motor2Angle' SFFloat
|  'motor2AngleRate' SFFloat
|  'motor2Axis' SFVec3f
|  'motor3Angle' SFFloat
|  'motor3AngleRate' SFFloat
|  'motor3Axis' SFVec3f
|  'stop1Bounce' SFFloat
|  'stop1ErrorCorrection' SFFloat
|  'stop2Bounce' SFFloat
|  'stop2ErrorCorrection' SFFloat
|  'stop3Bounce' SFFloat
|  'stop3ErrorCorrection' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
movieTexture
: dEF 'MovieTexture' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'duration_changed' SFTime
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'load' SFBool
|  'loop' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'pitch' SFFloat
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'resumeTime' SFTime
|  'speed' SFFloat
|  'startTime' SFTime
|  'stopTime' SFTime
|  'textureProperties' ( textureProperties )
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
multiTexture
: dEF 'MultiTexture' '{'
(
   'alpha' SFFloat
|  'color' SFColor
|  'description' SFString
|  'function' '[' (multiTextureFunctionValues)* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'mode' '[' (multiTextureModeValues)* ']'
|  'source' '[' (multiTextureSourceValues)* ']'
|  'texture' '[' ( x3DSingleTextureNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
multiTextureCoordinate
: dEF 'MultiTextureCoordinate' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'texCoord' '[' ( x3DSingleTextureCoordinateNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
multiTextureTransform
: dEF 'MultiTextureTransform' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'textureTransform' '[' ( x3DSingleTextureTransformNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
navigationInfo
: dEF 'NavigationInfo' '{'
(
   'avatarSize' MFFloat
|  'bindTime' SFTime
|  'headlight' SFBool
|  'IS' ( iS )
|  'isBound' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_bind' SFBool
|  'speed' SFFloat
|  'transitionComplete' SFBool
|  'transitionTime' SFTime
|  'transitionType' '[' (navigationTransitionTypeValues)* ']'
|  'type' '[' (navigationTypeValues)* ']'
|  'visibilityLimit' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
normal
: dEF 'Normal' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'vector' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
normalInterpolator
: dEF 'NormalInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsCurve
: dEF 'NurbsCurve' '{'
(
   'closed' SFBool
|  'controlPoint' ( coordinate|coordinateDouble )
|  'IS' ( iS )
|  'knot' MFDouble
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'tessellation' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsCurve2D
: dEF 'NurbsCurve2D' '{'
(
   'closed' SFBool
|  'controlPoint' MFVec2d
|  'IS' ( iS )
|  'knot' MFDouble
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'tessellation' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsOrientationInterpolator
: dEF 'NurbsOrientationInterpolator' '{'
(
   'controlPoint' ( coordinate|coordinateDouble )
|  'IS' ( iS )
|  'knot' MFDouble
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_fraction' SFFloat
|  'value_changed' SFRotation
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsPatchSurface
: dEF 'NurbsPatchSurface' '{'
(
   'controlPoint' ( coordinate|coordinateDouble )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|nurbsTextureCoordinate )
|  'uClosed' SFBool
|  'uDimension' SFInt32
|  'uKnot' MFDouble
|  'uOrder' SFInt32
|  'uTessellation' SFInt32
|  'vClosed' SFBool
|  'vDimension' SFInt32
|  'vKnot' MFDouble
|  'vOrder' SFInt32
|  'vTessellation' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsPositionInterpolator
: dEF 'NurbsPositionInterpolator' '{'
(
   'controlPoint' ( coordinate|coordinateDouble )
|  'IS' ( iS )
|  'knot' MFDouble
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsSet
: dEF 'NurbsSet' '{'
(
   'addGeometry' '[' ( x3DParametricGeometryNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'geometry' '[' ( x3DParametricGeometryNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeGeometry' '[' ( x3DParametricGeometryNode )* ']'
|  'tessellationScale' SFFloat
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsSurfaceInterpolator
: dEF 'NurbsSurfaceInterpolator' '{'
(
   'controlPoint' ( coordinate|coordinateDouble )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal_changed' SFVec3f
|  'position_changed' SFVec3f
|  'set_fraction' SFVec2f
|  'uDimension' SFInt32
|  'uKnot' MFDouble
|  'uOrder' SFInt32
|  'vDimension' SFInt32
|  'vKnot' MFDouble
|  'vOrder' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsSweptSurface
: dEF 'NurbsSweptSurface' '{'
(
   'ccw' SFBool
|  'crossSectionCurve' ( x3DNurbsControlCurveNode )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'solid' SFBool
|  'trajectoryCurve' ( nurbsCurve )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsSwungSurface
: dEF 'NurbsSwungSurface' '{'
(
   'ccw' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'profileCurve' ( x3DNurbsControlCurveNode )
|  'solid' SFBool
|  'trajectoryCurve' ( x3DNurbsControlCurveNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsTextureCoordinate
: dEF 'NurbsTextureCoordinate' '{'
(
   'controlPoint' MFVec2f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'uDimension' SFInt32
|  'uKnot' MFDouble
|  'uOrder' SFInt32
|  'vDimension' SFInt32
|  'vKnot' MFDouble
|  'vOrder' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
nurbsTrimmedSurface
: dEF 'NurbsTrimmedSurface' '{'
(
   'addTrimmingContour' '[' ( contour2D )* ']'
|  'controlPoint' ( coordinate|coordinateDouble )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeTrimmingContour' '[' ( contour2D )* ']'
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|nurbsTextureCoordinate )
|  'trimmingContour' '[' ( contour2D )* ']'
|  'uClosed' SFBool
|  'uDimension' SFInt32
|  'uKnot' MFDouble
|  'uOrder' SFInt32
|  'uTessellation' SFInt32
|  'vClosed' SFBool
|  'vDimension' SFInt32
|  'vKnot' MFDouble
|  'vOrder' SFInt32
|  'vTessellation' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
opacityMapVolumeStyle
: dEF 'OpacityMapVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'transferFunction' ( x3DTexture2DNode|x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
orientationChaser
: dEF 'OrientationChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFRotation
|  'initialValue' SFRotation
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' SFRotation
|  'set_value' SFRotation
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
orientationDamper
: dEF 'OrientationDamper' '{'
(
   'initialDestination' SFRotation
|  'initialValue' SFRotation
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' SFRotation
|  'set_value' SFRotation
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
orientationInterpolator
: dEF 'OrientationInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFRotation
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
orthoViewpoint
: dEF 'OrthoViewpoint' '{'
(
   'bindTime' SFTime
|  'centerOfRotation' SFVec3f
|  'description' SFString
|  'farDistance' SFFloat
|  'fieldOfView' MFFloat
|  'IS' ( iS )
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' ( x3DMetadataObject )
|  'navigationInfo' ( navigationInfo )
|  'nearDistance' SFFloat
|  'orientation' SFRotation
|  'position' SFVec3f
|  'retainUserOffsets' SFBool
|  'set_bind' SFBool
|  'viewAll' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
oscillatorSource
: dEF 'OscillatorSource' '{'
(
   'description' SFString
|  'detune' SFFloat
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'frequency' SFFloat
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
packagedShader
: dEF 'PackagedShader' '{'
(
   'activate' SFBool
|  'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'field' '[' ( field )* ']'
|  'IS' ( iS )
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' shaderLanguageValues
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
particleSystem
: dEF 'ParticleSystem' '{'
(
   'appearance' ( x3DAppearanceNode )
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'castShadow' SFBool
|  'color' ( x3DColorNode )
|  'colorKey' MFFloat
|  'createParticles' SFBool
|  'emitter' ( x3DParticleEmitterNode )
|  'enabled' SFBool
|  'geometry' ( x3DGeometryNode )
|  'geometryType' particleSystemGeometryTypeValues
|  'IS' ( iS )
|  'isActive' SFBool
|  'lifetimeVariation' SFFloat
|  'maxParticles' SFInt32
|  'metadata' ( x3DMetadataObject )
|  'particleLifetime' SFFloat
|  'particleSize' SFVec2f
|  'physics' '[' ( x3DParticlePhysicsModelNode )* ']'
|  'texCoord' ( textureCoordinate|textureCoordinateGenerator )
|  'texCoordKey' MFFloat
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
periodicWave
: dEF 'PeriodicWave' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'optionsImag' MFFloat
|  'optionsReal' MFFloat
|  'type' periodicWaveTypeChoices
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
physicalMaterial
: dEF 'PhysicalMaterial' '{'
(
   'baseColor' SFColor
|  'baseTexture' ( x3DSingleTextureNode )
|  'baseTextureMapping' xsNMTOKEN
|  'emissiveColor' SFColor
|  'emissiveTexture' ( x3DSingleTextureNode )
|  'emissiveTextureMapping' xsNMTOKEN
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'metallic' unitIntervalType
|  'metallicRoughnessTexture' ( x3DSingleTextureNode )
|  'metallicRoughnessTextureMapping' xsNMTOKEN
|  'normalScale' SFFloat
|  'normalTexture' ( x3DSingleTextureNode )
|  'normalTextureMapping' xsNMTOKEN
|  'occlusionStrength' unitIntervalType
|  'occlusionTexture' ( x3DSingleTextureNode )
|  'occlusionTextureMapping' xsNMTOKEN
|  'roughness' unitIntervalType
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pickableGroup
: dEF 'PickableGroup' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'description' SFString
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickable' SFBool
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pixelTexture
: dEF 'PixelTexture' '{'
(
   'description' SFString
|  'image' SFImage
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' ( textureProperties )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pixelTexture3D
: dEF 'PixelTexture3D' '{'
(
   'description' SFString
|  'image' MFInt32
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'repeatR' SFBool
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' ( textureProperties )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
planeSensor
: dEF 'PlaneSensor' '{'
(
   'autoOffset' SFBool
|  'axisRotation' SFRotation
|  'description' SFString
|  'enabled' SFBool
|  'IS' ( iS )
|  'isActive' SFBool
|  'isOver' SFBool
|  'maxPosition' SFVec2f
|  'metadata' ( x3DMetadataObject )
|  'minPosition' SFVec2f
|  'offset' SFVec3f
|  'trackPoint_changed' SFVec3f
|  'translation_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pointEmitter
: dEF 'PointEmitter' '{'
(
   'direction' SFVec3f
|  'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'position' SFVec3f
|  'speed' SFFloat
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pointLight
: dEF 'PointLight' '{'
(
   'ambientIntensity' unitIntervalType
|  'attenuation' SFVec3f
|  'color' SFColor
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' ( iS )
|  'location' SFVec3f
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'radius' SFFloat
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pointPickSensor
: dEF 'PointPickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' intersectionTypeValues
|  'IS' ( iS )
|  'isActive' SFBool
|  'matchCriterion' pickSensorMatchCriterionChoices
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickedGeometry' '[' ( x3DChildNode )* ']'
|  'pickedPoint' MFVec3f
|  'pickingGeometry' ( x3DGeometryNode )
|  'pickTarget' '[' ( x3DGroupingNode|x3DShapeNode|inline )* ']'
|  'sortOrder' pickSensorSortOrderValues
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pointProperties
: dEF 'PointProperties' '{'
(
   'attenuation' SFVec3f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'pointSizeMaxValue' SFFloat
|  'pointSizeMinValue' SFFloat
|  'pointSizeScaleFactor' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
pointSet
: dEF 'PointSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'color' ( x3DColorNode )
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
polyline2D
: dEF 'Polyline2D' '{'
(
   'IS' ( iS )
|  'lineSegments' MFVec2f
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
polylineEmitter
: dEF 'PolylineEmitter' '{'
(
   'coord' ( x3DCoordinateNode )
|  'coordIndex' MFInt32
|  'direction' SFVec3f
|  'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'set_coordIndex' MFInt32
|  'speed' SFFloat
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
polypoint2D
: dEF 'Polypoint2D' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
positionChaser
: dEF 'PositionChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFVec3f
|  'initialValue' SFVec3f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' SFVec3f
|  'set_value' SFVec3f
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
positionChaser2D
: dEF 'PositionChaser2D' '{'
(
   'duration' SFTime
|  'initialDestination' SFVec2f
|  'initialValue' SFVec2f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' SFVec2f
|  'set_value' SFVec2f
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
positionDamper
: dEF 'PositionDamper' '{'
(
   'initialDestination' SFVec3f
|  'initialValue' SFVec3f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' SFVec3f
|  'set_value' SFVec3f
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
positionDamper2D
: dEF 'PositionDamper2D' '{'
(
   'initialDestination' SFVec2f
|  'initialValue' SFVec2f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' SFVec2f
|  'set_value' SFVec2f
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
positionInterpolator
: dEF 'PositionInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
positionInterpolator2D
: dEF 'PositionInterpolator2D' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec2f
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
primitivePickSensor
: dEF 'PrimitivePickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' intersectionTypeValues
|  'IS' ( iS )
|  'isActive' SFBool
|  'matchCriterion' pickSensorMatchCriterionChoices
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickedGeometry' '[' ( x3DChildNode )* ']'
|  'pickingGeometry' ( x3DGeometryNode )
|  'pickTarget' '[' ( x3DGroupingNode|x3DShapeNode|inline )* ']'
|  'sortOrder' pickSensorSortOrderValues
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
programShader
: dEF 'ProgramShader' '{'
(
   'activate' SFBool
|  'IS' ( iS )
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' shaderLanguageValues
|  'metadata' ( x3DMetadataObject )
|  'programs' '[' ( shaderProgram )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
projectionVolumeStyle
: dEF 'ProjectionVolumeStyle' '{'
(
   'enabled' SFBool
|  'intensityThreshold' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'type' projectionVolumeStyleTypeChoices
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
protoInstance
: dEF 'ProtoInstance' '{'
(
   'fieldValue' '[' ( fieldValue )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'name' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
proximitySensor
: dEF 'ProximitySensor' '{'
(
   'center' SFVec3f
|  'centerOfRotation_changed' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'orientation_changed' SFRotation
|  'position_changed' SFVec3f
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
quadSet
: dEF 'QuadSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
receiverPdu
: dEF 'ReceiverPdu' '{'
(
   'address' SFString
|  'applicationID' SFInt32
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'description' SFString
|  'enabled' SFBool
|  'entityID' SFInt32
|  'geoCoords' SFVec3d
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'isActive' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'metadata' ( x3DMetadataObject )
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'networkMode' networkModeChoices
|  'port' SFInt32
|  'radioID' SFInt32
|  'readInterval' SFTime
|  'receivedPower' SFFloat
|  'receiverState' SFInt32
|  'rtpHeaderExpected' SFBool
|  'siteID' SFInt32
|  'timestamp' SFTime
|  'transmitterApplicationID' SFInt32
|  'transmitterEntityID' SFInt32
|  'transmitterRadioID' SFInt32
|  'transmitterSiteID' SFInt32
|  'visible' SFBool
|  'whichGeometry' SFInt32
|  'writeInterval' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
rectangle2D
: dEF 'Rectangle2D' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'size' SFVec2f
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
rigidBody
: dEF 'RigidBody' '{'
(
   'angularDampingFactor' SFFloat
|  'angularVelocity' SFVec3f
|  'autoDamp' SFBool
|  'autoDisable' SFBool
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'centerOfMass' SFVec3f
|  'disableAngularSpeed' SFFloat
|  'disableLinearSpeed' SFFloat
|  'disableTime' SFTime
|  'enabled' SFBool
|  'finiteRotationAxis' SFVec3f
|  'fixed' SFBool
|  'forces' MFVec3f
|  'geometry' '[' ( x3DNBodyCollidableNode )* ']'
|  'inertia' SFMatrix3f
|  'IS' ( iS )
|  'linearDampingFactor' SFFloat
|  'linearVelocity' SFVec3f
|  'mass' SFFloat
|  'massDensityModel' ( sphere|box|cone )
|  'metadata' ( x3DMetadataObject )
|  'orientation' SFRotation
|  'position' SFVec3f
|  'torques' MFVec3f
|  'useFiniteRotation' SFBool
|  'useGlobalGravity' SFBool
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
rigidBodyCollection
: dEF 'RigidBodyCollection' '{'
(
   'autoDisable' SFBool
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'bodies' '[' ( rigidBody )* ']'
|  'collider' ( collisionCollection )
|  'constantForceMix' SFFloat
|  'contactSurfaceThickness' SFFloat
|  'disableAngularSpeed' SFFloat
|  'disableLinearSpeed' SFFloat
|  'disableTime' SFTime
|  'enabled' SFBool
|  'errorCorrection' SFFloat
|  'gravity' SFVec3f
|  'IS' ( iS )
|  'iterations' SFInt32
|  'joints' '[' ( x3DRigidJointNode )* ']'
|  'maxCorrectionSpeed' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'preferAccuracy' SFBool
|  'set_contacts' '[' ( contact )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
scalarChaser
: dEF 'ScalarChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFFloat
|  'initialValue' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' SFFloat
|  'set_value' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
scalarDamper
: dEF 'ScalarDamper' '{'
(
   'initialDestination' SFFloat
|  'initialValue' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' SFFloat
|  'set_value' SFFloat
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
scalarInterpolator
: dEF 'ScalarInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFFloat
|  'metadata' ( x3DMetadataObject )
|  'set_fraction' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
screenFontStyle
: dEF 'ScreenFontStyle' '{'
(
   'class' xsNMTOKENS
|  'family' '[' (fontFamilyValues)* ']'
|  'horizontal' SFBool
|  'id' xsNMTOKEN
|  'IS' ( iS )
|  'justify' '[' (justifyChoices)* ']'
|  'language' SFString
|  'leftToRight' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pointSize' SFFloat
|  'spacing' SFFloat
|  'style' fontStyleChoices
|  'topToBottom' SFBool
)*
'}'
| 'USE' xsIDREF;
screenGroup
: dEF 'ScreenGroup' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
script
: dEF 'Script' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'directOutput' SFBool
|  'field' '[' ( field )* ']'
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'mustEvaluate' SFBool
|  'sourceCode' xsstring
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
segmentedVolumeData
: dEF 'SegmentedVolumeData' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'dimensions' SFVec3f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'renderStyle' '[' ( x3DVolumeRenderStyleNode )* ']'
|  'segmentEnabled' MFBool
|  'segmentIdentifiers' ( x3DTexture3DNode )
|  'visible' SFBool
|  'voxels' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
shadedVolumeStyle
: dEF 'ShadedVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' ( iS )
|  'lighting' SFBool
|  'material' ( x3DMaterialNode )
|  'metadata' ( x3DMetadataObject )
|  'phaseFunction' phaseFunctionValues
|  'shadows' SFBool
|  'surfaceNormals' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
shaderPart
: dEF 'ShaderPart' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'sourceCode' xsstring
|  'type' shaderPartTypeValues
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
shaderProgram
: dEF 'ShaderProgram' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'field' '[' ( field )* ']'
|  'IS' ( iS )
|  'load' SFBool
|  'metadata' ( x3DMetadataObject )
|  'sourceCode' xsstring
|  'type' shaderPartTypeValues
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
shape
: dEF 'Shape' '{'
(
   'appearance' ( x3DAppearanceNode )
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'castShadow' SFBool
|  'geometry' ( x3DGeometryNode )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
signalPdu
: dEF 'SignalPdu' '{'
(
   'address' SFString
|  'applicationID' SFInt32
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'data' MFInt32
|  'dataLength' SFInt32
|  'description' SFString
|  'enabled' SFBool
|  'encodingScheme' SFInt32
|  'entityID' SFInt32
|  'geoCoords' SFVec3d
|  'geoSystem' geoSystemType
|  'IS' ( iS )
|  'isActive' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'metadata' ( x3DMetadataObject )
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'networkMode' networkModeChoices
|  'port' SFInt32
|  'radioID' SFInt32
|  'readInterval' SFTime
|  'rtpHeaderExpected' SFBool
|  'sampleRate' SFInt32
|  'samples' SFInt32
|  'siteID' SFInt32
|  'tdlType' SFInt32
|  'timestamp' SFTime
|  'visible' SFBool
|  'whichGeometry' SFInt32
|  'writeInterval' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
silhouetteEnhancementVolumeStyle
: dEF 'SilhouetteEnhancementVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'silhouetteBoundaryOpacity' SFFloat
|  'silhouetteRetainedOpacity' SFFloat
|  'silhouetteSharpness' SFFloat
|  'surfaceNormals' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
singleAxisHingeJoint
: dEF 'SingleAxisHingeJoint' '{'
(
   'anchorPoint' SFVec3f
|  'angle' SFFloat
|  'angleRate' SFFloat
|  'axis' SFVec3f
|  'body1' ( rigidBody )
|  'body1AnchorPoint' SFVec3f
|  'body2' ( rigidBody )
|  'body2AnchorPoint' SFVec3f
|  'forceOutput' '[' (forceOutputValues)* ']'
|  'IS' ( iS )
|  'maxAngle' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'minAngle' SFFloat
|  'stopBounce' SFFloat
|  'stopErrorCorrection' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
sliderJoint
: dEF 'SliderJoint' '{'
(
   'axis' SFVec3f
|  'body1' ( rigidBody )
|  'body2' ( rigidBody )
|  'forceOutput' '[' (forceOutputValues)* ']'
|  'IS' ( iS )
|  'maxSeparation' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'minSeparation' SFFloat
|  'separation' SFFloat
|  'separationRate' SFFloat
|  'sliderForce' SFFloat
|  'stopBounce' SFFloat
|  'stopErrorCorrection' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
sound
: dEF 'Sound' '{'
(
   'description' SFString
|  'direction' SFVec3f
|  'enabled' SFBool
|  'intensity' unitIntervalType
|  'IS' ( iS )
|  'location' SFVec3f
|  'maxBack' SFFloat
|  'maxFront' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'minBack' SFFloat
|  'minFront' SFFloat
|  'priority' unitIntervalType
|  'source' ( x3DSoundSourceNode )
|  'spatialize' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
spatialSound
: dEF 'SpatialSound' '{'
(
   'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'coneInnerAngle' SFFloat
|  'coneOuterAngle' SFFloat
|  'coneOuterGain' SFFloat
|  'description' SFString
|  'direction' SFVec3f
|  'distanceModel' distanceModelChoices
|  'dopplerEnabled' SFBool
|  'enabled' SFBool
|  'enableHRTF' SFBool
|  'gain' SFFloat
|  'intensity' unitIntervalType
|  'IS' ( iS )
|  'location' SFVec3f
|  'maxDistance' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'priority' unitIntervalType
|  'referenceDistance' SFFloat
|  'rolloffFactor' SFFloat
|  'spatialize' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
sphere
: dEF 'Sphere' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'radius' SFFloat
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
sphereSensor
: dEF 'SphereSensor' '{'
(
   'autoOffset' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'IS' ( iS )
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' ( x3DMetadataObject )
|  'offset' SFRotation
|  'rotation_changed' SFRotation
|  'trackPoint_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
splinePositionInterpolator
: dEF 'SplinePositionInterpolator' '{'
(
   'closed' SFBool
|  'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'keyVelocity' MFVec3f
|  'metadata' ( x3DMetadataObject )
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
splinePositionInterpolator2D
: dEF 'SplinePositionInterpolator2D' '{'
(
   'closed' SFBool
|  'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFVec2f
|  'keyVelocity' MFVec2f
|  'metadata' ( x3DMetadataObject )
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
splineScalarInterpolator
: dEF 'SplineScalarInterpolator' '{'
(
   'closed' SFBool
|  'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFFloat
|  'keyVelocity' MFFloat
|  'metadata' ( x3DMetadataObject )
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
spotLight
: dEF 'SpotLight' '{'
(
   'ambientIntensity' unitIntervalType
|  'attenuation' SFVec3f
|  'beamWidth' SFFloat
|  'color' SFColor
|  'cutOffAngle' SFFloat
|  'direction' SFVec3f
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' ( iS )
|  'location' SFVec3f
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'radius' SFFloat
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
squadOrientationInterpolator
: dEF 'SquadOrientationInterpolator' '{'
(
   'IS' ( iS )
|  'key' MFFloat
|  'keyValue' MFRotation
|  'metadata' ( x3DMetadataObject )
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
staticGroup
: dEF 'StaticGroup' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
streamAudioDestination
: dEF 'StreamAudioDestination' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'mediaDeviceID' SFString
|  'metadata' ( x3DMetadataObject )
|  'streamIdentifier' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
streamAudioSource
: dEF 'StreamAudioSource' '{'
(
   'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'streamIdentifier' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
stringSensor
: dEF 'StringSensor' '{'
(
   'deletionAllowed' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'enteredText' SFString
|  'finalText' SFString
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
surfaceEmitter
: dEF 'SurfaceEmitter' '{'
(
   'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'speed' SFFloat
|  'surface' ( x3DGeometryNode )
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
switch
: dEF 'Switch' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'whichChoice' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
texCoordChaser2D
: dEF 'TexCoordChaser2D' '{'
(
   'duration' SFTime
|  'initialDestination' MFVec2f
|  'initialValue' MFVec2f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'set_destination' MFVec2f
|  'set_value' MFVec2f
|  'value_changed' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
texCoordDamper2D
: dEF 'TexCoordDamper2D' '{'
(
   'initialDestination' MFVec2f
|  'initialValue' MFVec2f
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'order' SFInt32
|  'set_destination' MFVec2f
|  'set_value' MFVec2f
|  'tau' SFTime
|  'tolerance' SFFloat
|  'value_changed' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
text
: dEF 'Text' '{'
(
   'fontStyle' ( x3DFontStyleNode )
|  'IS' ( iS )
|  'length' MFFloat
|  'lineBounds' MFVec2f
|  'maxExtent' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'origin' SFVec3f
|  'solid' SFBool
|  'string' MFString
|  'textBounds' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureBackground
: dEF 'TextureBackground' '{'
(
   'backTexture' ( x3DTexture2DNode|multiTexture )
|  'bindTime' SFTime
|  'bottomTexture' ( x3DTexture2DNode|multiTexture )
|  'frontTexture' ( x3DTexture2DNode|multiTexture )
|  'groundAngle' MFFloat
|  'groundColor' MFColor
|  'IS' ( iS )
|  'isBound' SFBool
|  'leftTexture' ( x3DTexture2DNode|multiTexture )
|  'metadata' ( x3DMetadataObject )
|  'rightTexture' ( x3DTexture2DNode|multiTexture )
|  'set_bind' SFBool
|  'skyAngle' MFFloat
|  'skyColor' MFColor
|  'topTexture' ( x3DTexture2DNode|multiTexture )
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureCoordinate
: dEF 'TextureCoordinate' '{'
(
   'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureCoordinate3D
: dEF 'TextureCoordinate3D' '{'
(
   'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureCoordinate4D
: dEF 'TextureCoordinate4D' '{'
(
   'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'metadata' ( x3DMetadataObject )
|  'point' MFVec4f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureCoordinateGenerator
: dEF 'TextureCoordinateGenerator' '{'
(
   'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'metadata' ( x3DMetadataObject )
|  'mode' textureCoordinateGeneratorModeChoices
|  'parameter' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureProjector
: dEF 'TextureProjector' '{'
(
   'ambientIntensity' unitIntervalType
|  'aspectRatio' SFFloat
|  'color' SFColor
|  'description' SFString
|  'direction' SFVec3f
|  'farDistance' SFFloat
|  'fieldOfView' SFFloat
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' ( iS )
|  'location' SFVec3f
|  'metadata' ( x3DMetadataObject )
|  'nearDistance' SFFloat
|  'on' SFBool
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'texture' ( x3DTexture2DNode )
|  'upVector' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureProjectorParallel
: dEF 'TextureProjectorParallel' '{'
(
   'ambientIntensity' unitIntervalType
|  'aspectRatio' SFFloat
|  'color' SFColor
|  'description' SFString
|  'direction' SFVec3f
|  'farDistance' SFFloat
|  'fieldOfView' SFVec4f
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' ( iS )
|  'location' SFVec3f
|  'metadata' ( x3DMetadataObject )
|  'nearDistance' SFFloat
|  'on' SFBool
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'texture' ( x3DTexture2DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureProperties
: dEF 'TextureProperties' '{'
(
   'anisotropicDegree' SFFloat
|  'borderColor' SFColorRGBA
|  'borderWidth' SFInt32
|  'boundaryModeR' textureBoundaryModeChoices
|  'boundaryModeS' textureBoundaryModeChoices
|  'boundaryModeT' textureBoundaryModeChoices
|  'generateMipMaps' SFBool
|  'IS' ( iS )
|  'magnificationFilter' textureMagnificationModeChoices
|  'metadata' ( x3DMetadataObject )
|  'minificationFilter' textureMinificationModeChoices
|  'textureCompression' textureCompressionModeChoices
|  'texturePriority' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureTransform
: dEF 'TextureTransform' '{'
(
   'center' SFVec2f
|  'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'metadata' ( x3DMetadataObject )
|  'rotation' SFFloat
|  'scale' SFVec2f
|  'translation' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureTransform3D
: dEF 'TextureTransform3D' '{'
(
   'center' SFVec3f
|  'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'metadata' ( x3DMetadataObject )
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'translation' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
textureTransformMatrix3D
: dEF 'TextureTransformMatrix3D' '{'
(
   'IS' ( iS )
|  'mapping' xsNMTOKEN
|  'matrix' SFMatrix4f
|  'metadata' ( x3DMetadataObject )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
timeSensor
: dEF 'TimeSensor' '{'
(
   'cycleInterval' SFTime
|  'cycleTime' SFTime
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'fraction_changed' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'loop' SFBool
|  'metadata' ( x3DMetadataObject )
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'time' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
timeTrigger
: dEF 'TimeTrigger' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'set_boolean' SFBool
|  'triggerTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
toneMappedVolumeStyle
: dEF 'ToneMappedVolumeStyle' '{'
(
   'coolColor' SFColorRGBA
|  'enabled' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'surfaceNormals' ( x3DTexture3DNode )
|  'warmColor' SFColorRGBA
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
touchSensor
: dEF 'TouchSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'hitNormal_changed' SFVec3f
|  'hitPoint_changed' SFVec3f
|  'hitTexCoord_changed' SFVec2f
|  'IS' ( iS )
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' ( x3DMetadataObject )
|  'touchTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
transform
: dEF 'Transform' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' '[' ( x3DChildNode )* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
transformSensor
: dEF 'TransformSensor' '{'
(
   'center' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'orientation_changed' SFRotation
|  'position_changed' SFVec3f
|  'size' SFVec3f
|  'targetObject' ( x3DGroupingNode|x3DShapeNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
transmitterPdu
: dEF 'TransmitterPdu' '{'
(
   'address' SFString
|  'antennaLocation' SFVec3f
|  'antennaPatternLength' SFInt32
|  'antennaPatternType' SFInt32
|  'applicationID' SFInt32
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'cryptoKeyID' SFInt32
|  'cryptoSystem' SFInt32
|  'description' SFString
|  'enabled' SFBool
|  'entityID' SFInt32
|  'frequency' SFInt32
|  'geoCoords' SFVec3d
|  'geoSystem' geoSystemType
|  'inputSource' SFInt32
|  'IS' ( iS )
|  'isActive' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'lengthOfModulationParameters' SFInt32
|  'metadata' ( x3DMetadataObject )
|  'modulationTypeDetail' SFInt32
|  'modulationTypeMajor' SFInt32
|  'modulationTypeSpreadSpectrum' SFInt32
|  'modulationTypeSystem' SFInt32
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'networkMode' networkModeChoices
|  'port' SFInt32
|  'power' SFFloat
|  'radioEntityTypeCategory' SFInt32
|  'radioEntityTypeCountry' SFInt32
|  'radioEntityTypeDomain' SFInt32
|  'radioEntityTypeKind' SFInt32
|  'radioEntityTypeNomenclature' SFInt32
|  'radioEntityTypeNomenclatureVersion' SFInt32
|  'radioID' SFInt32
|  'readInterval' SFTime
|  'relativeAntennaLocation' SFVec3f
|  'rtpHeaderExpected' SFBool
|  'siteID' SFInt32
|  'timestamp' SFTime
|  'transmitFrequencyBandwidth' SFFloat
|  'transmitState' SFInt32
|  'visible' SFBool
|  'whichGeometry' SFInt32
|  'writeInterval' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
triangleFanSet
: dEF 'TriangleFanSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fanCount' MFInt32
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
triangleSet
: dEF 'TriangleSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
triangleSet2D
: dEF 'TriangleSet2D' '{'
(
   'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'solid' SFBool
|  'vertices' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
triangleStripSet
: dEF 'TriangleStripSet' '{'
(
   'attrib' '[' ( x3DVertexAttributeNode )* ']'
|  'ccw' SFBool
|  'color' ( x3DColorNode )
|  'colorPerVertex' SFBool
|  'coord' ( x3DCoordinateNode )
|  'fogCoord' ( fogCoordinate )
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normal' ( x3DNormalNode )
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'stripCount' MFInt32
|  'texCoord' ( x3DSingleTextureCoordinateNode|multiTextureCoordinate )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
twoSidedMaterial
: dEF 'TwoSidedMaterial' '{'
(
   'ambientIntensity' unitIntervalType
|  'backAmbientIntensity' unitIntervalType
|  'backDiffuseColor' SFColor
|  'backEmissiveColor' SFColor
|  'backShininess' unitIntervalType
|  'backSpecularColor' SFColor
|  'backTransparency' unitIntervalType
|  'diffuseColor' SFColor
|  'emissiveColor' SFColor
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'separateBackColor' SFBool
|  'shininess' unitIntervalType
|  'specularColor' SFColor
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
universalJoint
: dEF 'UniversalJoint' '{'
(
   'anchorPoint' SFVec3f
|  'axis1' SFVec3f
|  'axis2' SFVec3f
|  'body1' ( rigidBody )
|  'body1AnchorPoint' SFVec3f
|  'body1Axis' SFVec3f
|  'body2' ( rigidBody )
|  'body2AnchorPoint' SFVec3f
|  'body2Axis' SFVec3f
|  'forceOutput' '[' (forceOutputValues)* ']'
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'stop1Bounce' SFFloat
|  'stop1ErrorCorrection' SFFloat
|  'stop2Bounce' SFFloat
|  'stop2ErrorCorrection' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
unlitMaterial
: dEF 'UnlitMaterial' '{'
(
   'emissiveColor' SFColor
|  'emissiveTexture' ( x3DSingleTextureNode )
|  'emissiveTextureMapping' xsNMTOKEN
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'normalScale' SFFloat
|  'normalTexture' ( x3DSingleTextureNode )
|  'normalTextureMapping' xsNMTOKEN
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
viewpoint
: dEF 'Viewpoint' '{'
(
   'bindTime' SFTime
|  'centerOfRotation' SFVec3f
|  'description' SFString
|  'farDistance' SFFloat
|  'fieldOfView' SFFloat
|  'IS' ( iS )
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' ( x3DMetadataObject )
|  'navigationInfo' ( navigationInfo )
|  'nearDistance' SFFloat
|  'orientation' SFRotation
|  'position' SFVec3f
|  'retainUserOffsets' SFBool
|  'set_bind' SFBool
|  'viewAll' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
viewpointGroup
: dEF 'ViewpointGroup' '{'
(
   'center' SFVec3f
|  'children' '[' ( x3DViewpointNode|viewpointGroup )* ']'
|  'description' SFString
|  'displayed' SFBool
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'retainUserOffsets' SFBool
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
viewport
: dEF 'Viewport' '{'
(
   'addChildren' '[' ( x3DChildNode )* ']'
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' '[' ( x3DChildNode )* ']'
|  'clipBoundary' MFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'removeChildren' '[' ( x3DChildNode )* ']'
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
visibilitySensor
: dEF 'VisibilitySensor' '{'
(
   'center' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'IS' ( iS )
|  'isActive' SFBool
|  'metadata' ( x3DMetadataObject )
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
volumeData
: dEF 'VolumeData' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'dimensions' SFVec3f
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'renderStyle' ( x3DVolumeRenderStyleNode )
|  'visible' SFBool
|  'voxels' ( x3DTexture3DNode )
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
volumeEmitter
: dEF 'VolumeEmitter' '{'
(
   'coord' ( x3DCoordinateNode )
|  'coordIndex' MFInt32
|  'direction' SFVec3f
|  'internal' SFBool
|  'IS' ( iS )
|  'mass' SFFloat
|  'metadata' ( x3DMetadataObject )
|  'on' SFBool
|  'set_coordIndex' MFInt32
|  'speed' SFFloat
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
volumePickSensor
: dEF 'VolumePickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' intersectionTypeValues
|  'IS' ( iS )
|  'isActive' SFBool
|  'matchCriterion' pickSensorMatchCriterionChoices
|  'metadata' ( x3DMetadataObject )
|  'objectType' '[' (pickableObjectTypeValues)* ']'
|  'pickedGeometry' '[' ( x3DChildNode )* ']'
|  'pickingGeometry' ( x3DGeometryNode )
|  'pickTarget' '[' ( x3DGroupingNode|x3DShapeNode|inline )* ']'
|  'sortOrder' pickSensorSortOrderValues
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
waveShaper
: dEF 'WaveShaper' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' channelCountModeChoices
|  'channelInterpretation' channelInterpretationChoices
|  'children' '[' ( analyser|audioClip|audioDestination|biquadFilter|bufferAudioSource|channelMerger|channelSelector|channelSplitter|convolver|delay|dynamicsCompressor|gain|listenerPointSource|microphoneSource|movieTexture|oscillatorSource|sound|spatialSound|streamAudioDestination|streamAudioSource|waveShaper )* ']'
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' ( iS )
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' ( x3DMetadataObject )
|  'oversample' waveShaperOversampleChoices
|  'pauseTime' SFTime
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
windPhysicsModel
: dEF 'WindPhysicsModel' '{'
(
   'direction' SFVec3f
|  'enabled' SFBool
|  'gustiness' SFFloat
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'speed' SFFloat
|  'turbulence' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
worldInfo
: dEF 'WorldInfo' '{'
(
   'info' MFString
|  'IS' ( iS )
|  'metadata' ( x3DMetadataObject )
|  'title' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
component
: dEF 'component' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'level' SFInt32
|  'name' componentNameChoices
|  'style' SFString
)*
'}'
;
connect
: dEF 'connect' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'nodeField' xsNMTOKEN
|  'protoField' xsNMTOKEN
|  'style' SFString
)*
'}'
;
eXPORT
: dEF 'EXPORT' '{'
(
   'AS' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'localDEF' xsIDREF
|  'style' SFString
)*
'}'
;
externProtoDeclare
: dEF 'ExternProtoDeclare' '{'
(
   'appinfo' SFString
|  'class' xsNMTOKENS
|  'documentation' SFString
|  'field' '[' ( field )* ']'
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'url' MFString
)*
'}'
;
field
: dEF 'field' '{'
(
   'accessType' accessTypeChoices
|  'appinfo' SFString
|  'children' '[' ( x3DNode )* ']'
|  'class' xsNMTOKENS
|  'documentation' SFString
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'type' fieldTypeChoices
|  'value' SFString
)*
'}'
;
fieldValue
: dEF 'fieldValue' '{'
(
   'children' '[' ( x3DNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'value' SFString
)*
'}'
;
head
: dEF 'head' '{'
(
   'class' xsNMTOKENS
|  'COMPONENT' '[' ( component )* ']'
|  'id' xsNMTOKEN
|  'META' '[' ( meta )* ']'
|  'style' SFString
|  'UNIT' '[' ( unit )* ']'
)*
'}'
;
iMPORT
: dEF 'IMPORT' '{'
(
   'AS' xsID
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'importedDEF' xsNMTOKEN
|  'inlineDEF' xsIDREF
|  'style' SFString
)*
'}'
;
iS
: dEF 'IS' '{'
(
   'class' xsNMTOKENS
|  'connect' '[' ( connect )* ']'
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
meta
: dEF 'meta' '{'
(
   'class' xsNMTOKENS
|  'content' SFString
|  'dir' metaDirectionChoices
|  'http-equiv' SFString
|  'id' xsNMTOKEN
|  'lang' SFString
|  'name' metaNameValues
|  'scheme' SFString
|  'style' SFString
)*
'}'
;
protoBody
: dEF 'ProtoBody' '{'
(
   'children' '[' ( x3DNode )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
protoDeclare
: dEF 'ProtoDeclare' '{'
(
   'appinfo' SFString
|  'class' xsNMTOKENS
|  'documentation' SFString
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'ProtoBody' ( protoBody )
|  'ProtoInterface' ( protoInterface )
|  'style' SFString
)*
'}'
;
protoInterface
: dEF 'ProtoInterface' '{'
(
   'class' xsNMTOKENS
|  'field' '[' ( field )* ']'
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
rOUTE
: dEF 'ROUTE' '{'
(
   'class' xsNMTOKENS
|  'fromField' xsNMTOKEN
|  'fromNode' xsIDREF
|  'id' xsNMTOKEN
|  'style' SFString
|  'toField' xsNMTOKEN
|  'toNode' xsIDREF
)*
'}'
;
scene
: dEF 'Scene' '{'
(
   'children' '[' ( x3DChildNode|x3DMetadataObject|layerSet )* ']'
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
unit
: dEF 'unit' '{'
(
   'category' unitCategoryChoices
|  'class' xsNMTOKENS
|  'conversionFactor' SFDouble
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
)*
'}'
;
x3D
: dEF 'X3D' '{'
(
   'class' xsNMTOKENS
|  'head' ( head )
|  'id' xsNMTOKEN
|  'PROFILE' profileNameChoices
|  'Scene' ( scene )
|  'style' SFString
|  'version' x3dVersionChoices
)*
'}'
;
sFNode : ( x3DAppearanceChildNode
|x3DAppearanceNode
|x3DArrayField
|x3DBackgroundNode
|x3DBindableNode
|x3DChaserNode
|x3DChildNode
|x3DColorNode
|x3DComposableVolumeRenderStyleNode
|x3DComposedGeometryNode
|x3DCoordinateNode
|x3DDamperNode
|x3DDragSensorNode
|x3DEnvironmentalSensorNode
|x3DEnvironmentTextureNode
|x3DField
|x3DFollowerNode
|x3DFontStyleNode
|x3DGeometricPropertyNode
|x3DGeometryNode
|x3DGroupingNode
|x3DInfoNode
|x3DInterpolatorNode
|x3DKeyDeviceSensorNode
|x3DLayerNode
|x3DLayoutNode
|x3DLightNode
|x3DMaterialNode
|x3DNBodyCollidableNode
|x3DNBodyCollisionSpaceNode
|x3DNetworkSensorNode
|x3DNode
|x3DNormalNode
|x3DNurbsControlCurveNode
|x3DNurbsSurfaceGeometryNode
|x3DOneSidedMaterialNode
|x3DParametricGeometryNode
|x3DParticleEmitterNode
|x3DParticlePhysicsModelNode
|x3DPickSensorNode
|x3DPointingDeviceSensorNode
|x3DProductStructureChildNode
|x3DPrototypeInstance
|x3DRigidJointNode
|x3DScriptNode
|x3DSensorNode
|x3DSequencerNode
|x3DShaderNode
|x3DShapeNode
|x3DSingleTextureCoordinateNode
|x3DSingleTextureNode
|x3DSingleTextureTransformNode
|x3DSoundChannelNode
|x3DSoundDestinationNode
|x3DSoundNode
|x3DSoundProcessingNode
|x3DSoundSourceNode
|x3DStatement
|x3DTexture2DNode
|x3DTexture3DNode
|x3DTextureCoordinateNode
|x3DTextureNode
|x3DTextureProjectorNode
|x3DTextureTransformNode
|x3DTimeDependentNode
|x3DTouchSensorNode
|x3DTriggerNode
|x3DVertexAttributeNode
|x3DViewpointNode
|x3DViewportNode
|x3DVolumeDataNode
|x3DVolumeRenderStyleNode
|x3DConcreteNode
|x3DBoundedObject
|x3DFogObject
|x3DMetadataObject
|x3DPickableObject
|x3DProgrammableShaderObject
|x3DUrlObject
|acousticProperties
|analyser
|anchor
|appearance
|arc2D
|arcClose2D
|audioClip
|audioDestination
|background
|ballJoint
|billboard
|biquadFilter
|blendedVolumeStyle
|booleanFilter
|booleanSequencer
|booleanToggle
|booleanTrigger
|boundaryEnhancementVolumeStyle
|boundedPhysicsModel
|box
|bufferAudioSource
|cADAssembly
|cADFace
|cADLayer
|cADPart
|cartoonVolumeStyle
|channelMerger
|channelSelector
|channelSplitter
|circle2D
|clipPlane
|collidableOffset
|collidableShape
|collision
|collisionCollection
|collisionSensor
|collisionSpace
|color
|colorChaser
|colorDamper
|colorInterpolator
|colorRGBA
|composedCubeMapTexture
|composedShader
|composedTexture3D
|composedVolumeStyle
|cone
|coneEmitter
|contact
|contour2D
|contourPolyline2D
|convolver
|coordinate
|coordinateChaser
|coordinateDamper
|coordinateDouble
|coordinateInterpolator
|coordinateInterpolator2D
|cylinder
|cylinderSensor
|delay
|directionalLight
|dISEntityManager
|dISEntityTypeMapping
|disk2D
|doubleAxisHingeJoint
|dynamicsCompressor
|easeInEaseOut
|edgeEnhancementVolumeStyle
|elevationGrid
|espduTransform
|explosionEmitter
|extrusion
|fillProperties
|floatVertexAttribute
|fog
|fogCoordinate
|fontStyle
|forcePhysicsModel
|gain
|generatedCubeMapTexture
|geoCoordinate
|geoElevationGrid
|geoLocation
|geoLOD
|geoMetadata
|geoOrigin
|geoPositionInterpolator
|geoProximitySensor
|geoTouchSensor
|geoTransform
|geoViewpoint
|group
|hAnimDisplacer
|hAnimHumanoid
|hAnimJoint
|hAnimMotion
|hAnimSegment
|hAnimSite
|imageCubeMapTexture
|imageTexture
|imageTexture3D
|indexedFaceSet
|indexedLineSet
|indexedQuadSet
|indexedTriangleFanSet
|indexedTriangleSet
|indexedTriangleStripSet
|inline
|integerSequencer
|integerTrigger
|isoSurfaceVolumeData
|keySensor
|layer
|layerSet
|layout
|layoutGroup
|layoutLayer
|linePickSensor
|lineProperties
|lineSet
|listenerPointSource
|loadSensor
|localFog
|lOD
|material
|matrix3VertexAttribute
|matrix4VertexAttribute
|metadataBoolean
|metadataDouble
|metadataFloat
|metadataInteger
|metadataSet
|metadataString
|microphoneSource
|motorJoint
|movieTexture
|multiTexture
|multiTextureCoordinate
|multiTextureTransform
|navigationInfo
|normal
|normalInterpolator
|nurbsCurve
|nurbsCurve2D
|nurbsOrientationInterpolator
|nurbsPatchSurface
|nurbsPositionInterpolator
|nurbsSet
|nurbsSurfaceInterpolator
|nurbsSweptSurface
|nurbsSwungSurface
|nurbsTextureCoordinate
|nurbsTrimmedSurface
|opacityMapVolumeStyle
|orientationChaser
|orientationDamper
|orientationInterpolator
|orthoViewpoint
|oscillatorSource
|packagedShader
|particleSystem
|periodicWave
|physicalMaterial
|pickableGroup
|pixelTexture
|pixelTexture3D
|planeSensor
|pointEmitter
|pointLight
|pointPickSensor
|pointProperties
|pointSet
|polyline2D
|polylineEmitter
|polypoint2D
|positionChaser
|positionChaser2D
|positionDamper
|positionDamper2D
|positionInterpolator
|positionInterpolator2D
|primitivePickSensor
|programShader
|projectionVolumeStyle
|protoInstance
|proximitySensor
|quadSet
|receiverPdu
|rectangle2D
|rigidBody
|rigidBodyCollection
|scalarChaser
|scalarDamper
|scalarInterpolator
|screenFontStyle
|screenGroup
|script
|segmentedVolumeData
|shadedVolumeStyle
|shaderPart
|shaderProgram
|shape
|signalPdu
|silhouetteEnhancementVolumeStyle
|singleAxisHingeJoint
|sliderJoint
|sound
|spatialSound
|sphere
|sphereSensor
|splinePositionInterpolator
|splinePositionInterpolator2D
|splineScalarInterpolator
|spotLight
|squadOrientationInterpolator
|staticGroup
|streamAudioDestination
|streamAudioSource
|stringSensor
|surfaceEmitter
|switch
|texCoordChaser2D
|texCoordDamper2D
|text
|textureBackground
|textureCoordinate
|textureCoordinate3D
|textureCoordinate4D
|textureCoordinateGenerator
|textureProjector
|textureProjectorParallel
|textureProperties
|textureTransform
|textureTransform3D
|textureTransformMatrix3D
|timeSensor
|timeTrigger
|toneMappedVolumeStyle
|touchSensor
|transform
|transformSensor
|transmitterPdu
|triangleFanSet
|triangleSet
|triangleSet2D
|triangleStripSet
|twoSidedMaterial
|universalJoint
|unlitMaterial
|viewpoint
|viewpointGroup
|viewport
|visibilitySensor
|volumeData
|volumeEmitter
|volumePickSensor
|waveShaper
|windPhysicsModel
|worldInfo
|component
|connect
|eXPORT
|externProtoDeclare
|field
|fieldValue
|head
|iMPORT
|iS
|meta
|protoBody
|protoDeclare
|protoInterface
|rOUTE
|scene
|unit
|x3D );
