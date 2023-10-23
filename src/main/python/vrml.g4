NCNameStartChar :	[A-Z] | '_' | [a-z] | [#xC0-#xD6] | [#xD8-#xF6] | [#xF8-#x2FF] | [#x370-#x37D] | [#x37F-#x1FFF] | [#x200C-#x200D] | [#x2070-#x218F] | [#x2C00-#x2FEF] | [#x3001-#xD7FF] | [#xF900-#xFDCF] | [#xFDF0-#xFFFD] | [#x10000-#xEFFFF];
NCNameChar : NCNameStartChar | '-' | '.' | [0-9] | #xB7 | [#x0300-#x036F] | [#x203F-#x2040];
NCName	: NCNameStartChar (NCNameChar)*;
NameStartChar : ':' | NCNameStartChar;
NameChar : NameStartChar | '-' | '.' | [0-9] | #xB7 | [#x0300-#x036F] | [#x203F-#x2040];
Name : NameStartChar (NameChar)*;
xsID : NCName
xsIDREF : NCName
xsNMTOKEN : (NameChar)+
xsNMTOKENS : xsNMTOKEN (#x20 xsNMTOKEN)*
xsstring : \S+( \S+)*
SFBool : 'TRUE' | 'FALSE';
SFColor : SFFloat SFFloat SFFloat;
SFColorRGBA : SFFloat SFFloat SFFloat SFFloat;
SFDouble : [+-]?((0|[1-9][0-9]*)(\.[0-9]*)?|\.[0-9]+)([Ee][+-]?[0-9]+)?);
SFFloat : [+-]?((0|[1-9][0-9]*)(\.[0-9]*)?|\.[0-9]+)([Ee][+-]?[0-9]+)?);
SFImage : SFInt32 SFInt32 SFInt32 (SFInt32 | HexSFInt32)*;
SFInt32
: DecimalSFInt32
| HexSFInt32
| OctalSFInt32
| BinarySFInt32
;
DecimalSFInt32 : ('+' | '-')? [1-9][0-9_]* [lL]?;
OctalSFInt32 : ('+' | '-')? '0' [0-7][0-7_]* [lL]?;
HexSFInt32 : ('+' | '-')? '0' [xX] [0-9A-Fa-f][0-9A-Fa-f_]* [lL]?;
BinarySFInt32 : ('+' | '-')? '0' [bB] [0-1][0-1_]* [lL]?;
SFMatrix3d : SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble;
SFMatrix3f : SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat;
SFMatrix4d : SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble SFDouble;
SFMatrix4f : SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat SFFloat;
SFRotation : SFFloatOrDouble SFFloatOrDouble SFFloatOrDouble SFFloatOrDouble;
SFString : TODO;
SFTime : SFDouble;
SFVec2d : SFDouble SFDouble;
SFVec2f : SFFloat SFFloat;
SFVec3d : SFDouble SFDouble SFDouble;
SFVec3f : SFFloat SFFloat SFFloat;
SFVec4d : SFDouble SFDouble  SFDouble SFDouble;
SFVec4f : SFFloat SFFloat SFFloat SFFloat;
accessTypeChoices :  ('initializeOnly'|'inputOnly'|'outputOnly'|'inputOutput');
acronymChoices :  ('CAD'|'HSV'|'JPEG'|'MIDI'|'MIME'|'MF'|'MPEG'|'PNG'|'RGB'|'RURL'|'SAI'|'SF'|'UCS'|'URI'|'URL'|'URN'|'UTF-8');
alphaModeChoices :  ('AUTO'|'OPAQUE'|'MASK'|'BLEND');
appliedParametersChoices :  ('"BOUNCE"'|'"USER_FRICTION"'|'"FRICTION_COEFFICIENT-2"'|'"ERROR_REDUCTION"'|'"CONSTANT_FORCE"'|'"SPEED-1"'|'"SPEED-2"'|'"SLIP-1"'|'"SLIP-2"');
bboxSizeType :  ('');
biquadTypeFilterChoices :  ('LOWPASS'|'HIGHPASS'|'BANDPASS'|'LOWSHELF'|'HIGHSHELF'|'PEAKING'|'NOTCH'|'ALLPASS');
channelCountModeChoices :  ('MAX'|'CLAMPED_MAX'|'EXPLICIT');
channelInterpretationChoices :  ('SPEAKERS'|'DISCRETE');
closureTypeChoices :  ('PIE'|'CHORD');
componentNameChoices :  ('Core'|'CADGeometry'|'CubeMapTexturing'|'DIS'|'EnvironmentalEffects'|'EnvironmentalSensor'|'EventUtilities'|'Followers'|'Geometry2D'|'Geometry3D'|'Geospatial'|'Grouping'|'HAnim'|'H-Anim'|'Interpolation'|'KeyDeviceSensor'|'Layering'|'Layout'|'Lighting'|'Navigation'|'Networking'|'NURBS'|'ParticleSystems'|'Picking'|'PointingDeviceSensor'|'TextureProjection'|'Rendering'|'RigidBodyPhysics'|'Scripting'|'Shaders'|'Shape'|'Sound'|'Text'|'Texturing'|'Texturing3D'|'Time'|'VolumeRendering');
containerFieldChoicesAudioClip :  ('children'|'source'|'watchList');
containerFieldChoicesAudioGraph :  ('children'|'outputs'|'source');
containerFieldChoicesColor :  ('color'|'colorRamp');
containerFieldChoicesDISEntityTypeMapping :  ('children'|'mapping'|'watchList');
containerFieldChoicesGroupLODShapeTransformSwitch :  ('children'|'proxy'|'rootNode'|'shape'|'skin');
containerFieldChoicesHAnimJoint :  ('children'|'joints'|'skeleton');
containerFieldChoicesHAnimMotion :  ('children'|'motions');
containerFieldChoicesHAnimSegment :  ('children'|'segments');
containerFieldChoicesHAnimSite :  ('children'|'sites'|'skeleton'|'viewpoints');
containerFieldChoicesMetadata :  ('metadata'|'value');
containerFieldChoicesPackagedShader :  ('shaders'|'children');
containerFieldChoicesShaderPart :  ('parts'|'children');
containerFieldChoicesSoundSource :  ('children'|'source');
containerFieldChoicesTextureCoordinate :  ('texCoord'|'texCoordRamp');
containerFieldChoicesX3DCoordinateNode :  ('coord'|'controlPoint'|'skinCoord'|'skinBindingCoords');
containerFieldChoicesX3DNormalNode :  ('normal'|'skinNormal'|'skinBindingNormals');
containerFieldChoicesX3DTexture2DNode :  ('texture'|'source'|'backTexture'|'bottomTexture'|'frontTexture'|'leftTexture'|'rightTexture'|'topTexture'|'children'|'baseTexture'|'emissiveTexture'|'metallicRoughnessTexture'|'normalTexture'|'occlusionTexture');
containerFieldChoicesX3DTexture3DNode :  ('gradients'|'segmentIdentifiers'|'surfaceNormals'|'texture'|'voxels'|'children');
containerFieldChoicesX3DUrlObject :  ('children'|'children');
containerFieldChoicesX3dUrlObjectTexture :  ('texture'|'children'|'source'|'backTexture'|'bottomTexture'|'frontTexture'|'leftTexture'|'rightTexture'|'topTexture'|'baseTexture'|'emissiveTexture'|'metallicRoughnessTexture'|'normalTexture'|'occlusionTexture');
distanceModelChoices :  ('LINEAR'|'INVERSE'|'EXPONENTIAL');
fieldTypeChoices :  ('SFBool'|'MFBool'|'SFColor'|'MFColor'|'SFColorRGBA'|'MFColorRGBA'|'SFDouble'|'MFDouble'|'SFFloat'|'MFFloat'|'SFImage'|'MFImage'|'SFInt32'|'MFInt32'|'SFNode'|'MFNode'|'SFRotation'|'MFRotation'|'SFString'|'MFString'|'SFTime'|'MFTime'|'SFVec2d'|'MFVec2d'|'SFVec2f'|'MFVec2f'|'SFVec3d'|'MFVec3d'|'SFVec3f'|'MFVec3f'|'SFVec4d'|'MFVec4d'|'SFVec4f'|'MFVec4f'|'SFMatrix3d'|'MFMatrix3d'|'SFMatrix3f'|'MFMatrix3f'|'SFMatrix4d'|'MFMatrix4d'|'SFMatrix4f'|'MFMatrix4f');
fogTypeChoices :  ('LINEAR'|'EXPONENTIAL');
fontFamilyValues :  ('"SANS"'|'"SERIF"'|'"TYPEWRITER"');
fontStyleChoices :  ('PLAIN'|'BOLD'|'ITALIC'|'BOLDITALIC');
forceOutputValues :  ('"ALL"'|'"NONE"');
generatedCubeMapTextureUpdateChoices :  ('NONE'|'NEXT_FRAME_ONLY'|'ALWAYS');
geoMetadataSummaryKeyValues :  ('title'|'description'|'coordinateSystem'|'horizontalDatum'|'verticalDatum'|'ellipsoid'|'extent'|'resolution'|'originator'|'copyright'|'date'|'metadataFormat'|'dataUrl'|'dataFormat');
geoSystemEarthEllipsoidValues :  ('AM'|'AN'|'BN'|'BR'|'CC'|'CD'|'EA'|'EB'|'EC'|'ED'|'EE'|'EF'|'FA'|'HE'|'HO'|'ID'|'IN'|'KA'|'RF'|'SA'|'WD'|'WE'|'WGS84'|'Zn'|'S');
geoSystemSpatialReferenceFrameValues :  ('GD'|'UTM'|'GC'|'GDC'|'GCC');
geoSystemType :  ('');
glossaryChoices :  ('activate'|'ancestor'|'AudioGraph'|'author'|'AuthoringTool'|'avatar'|'bearing'|'BindableNode'|'browser'|'BrowserExtension'|'BuiltInNode'|'callback'|'child'|'ChildrenNode'|'ClientSystem'|'CollisionProxy'|'ColourModel'|'culling'|'descendant'|'DisplayDevice'|'DragSensor'|'EnvironmentalSensor'|'event'|'EventCascade'|'ExecutionModel'|'ExternaPrototype'|'field'|'FieldName'|'frame'|'generator'|'GeometricPropertyNode'|'GeometryNode'|'grab'|'GroupingNode'|'HostApplication'|'image'|'immersive'|'Inlining'|'instance'|'instantiation'|'InterpolatorNode'|'intranet'|'LevelOfDetail'|'LineTerminator'|'loop'|'multimedia'|'network'|'node'|'nodeType'|'object'|'orderOfPreference'|'panorama'|'parent'|'pixel'|'pointer'|'pointingDevice'|'pointingDeviceSensor'|'polyline'|'profile'|'prototype'|'prototyping'|'ROUTE'|'sceneGraph'|'script'|'scripting'|'sensorNode'|'separatorCharacter'|'sibling'|'simulationTick'|'slerp'|'specialGroupNode'|'statement'|'texel'|'texture'|'textureCoordinates'|'time'|'timestamp'|'transformationHierarchy'|'transparencyChunk'|'traverse'|'user'|'viewer'|'virtualWorld'|'whiteSpace'|'world'|'worldCoordinateSpace'|'X3DBrowser'|'X3DDocumentServer'|'X3DFile'|'XYPlane'|'YZPlane'|'ZXPlane');
hanimFeaturePointNameValues :  ('skull_vertex'|'glabella'|'sellion'|'l_infraorbitale'|'l_tragion'|'l_gonion'|'r_infraorbitale'|'r_tragion'|'r_gonion'|'supramenton'|'cervicale'|'adams_apple'|'suprasternale'|'substernale'|'l_clavicle'|'l_acromion'|'l_axilla_proximal'|'l_axilla_distal'|'l_axilla_posterior_folds'|'r_clavicle'|'r_acromion'|'r_axilla_proximal'|'r_axilla_distal'|'r_axilla_posterior_folds'|'spine_1_middle_back'|'spine_2_lower_back'|'waist_preferred_anterior'|'waist_preferred_posterior'|'l_rib10'|'l_thelion'|'r_rib10'|'r_thelion'|'l_asis'|'l_iliocristale'|'l_psis'|'r_asis'|'r_iliocristale'|'r_psis'|'crotch'|'l_femoral_lateral_epicondyle'|'l_femoral_medial_epicondyle'|'l_suprapatella'|'l_trochanterion'|'r_femoral_lateral_epicondyle'|'r_femoral_medial_epicondyle'|'r_suprapatella'|'r_trochanterion'|'l_tibiale'|'l_medial_malleolus'|'l_lateral_malleolus'|'l_sphyrion'|'r_tibiale'|'r_medial_malleolus'|'r_lateral_malleolus'|'r_sphyrion'|'l_metatarsal_phalanx_1'|'l_metatarsal_phalanx_5'|'l_dactylion'|'l_calcaneus_posterior'|'r_metatarsal_phalanx_1'|'r_metatarsal_phalanx_5'|'r_dactylion'|'r_calcaneus_posterior'|'l_humeral_lateral_epicondyle'|'l_humeral_medial_epicondyle'|'l_olecranon'|'r_humeral_lateral_epicondyle'|'r_humeral_medial_epicondyle'|'r_olecranon'|'l_radiale'|'l_ulnar_styloid'|'l_radial_styloid'|'r_radiale'|'r_ulnar_styloid'|'r_radial_styloid'|'l_metacarpal_phalanx_2'|'l_metacarpal_phalanx_3'|'l_metacarpal_phalanx_5'|'r_metacarpal_phalanx_2'|'r_metacarpal_phalanx_3'|'r_metacarpal_phalanx_5'|'nuchale'|'l_neck_base'|'r_neck_base'|'navel'|'l_ectocanthus'|'r_ectocanthus'|'menton'|'mesosternale'|'opisthocranion'|'l_knee_crease'|'r_knee_crease'|'rear_center_midsagittal_plane'|'buttocks_standing_wall_contact_point'|'l_chest_midsagittal_plane'|'r_chest_midsagittal_plane'|'l_bideltoid'|'r_bideltoid'|'l_carpal_distal_phalanx_1'|'l_carpal_distal_phalanx_2'|'l_carpal_distal_phalanx_3'|'l_carpal_distal_phalanx_4'|'l_carpal_distal_phalanx_5'|'r_carpal_distal_phalanx_1'|'r_carpal_distal_phalanx_2'|'r_carpal_distal_phalanx_3'|'r_carpal_distal_phalanx_4'|'r_carpal_distal_phalanx_5'|'l_tarsal_distal_phalanx_1'|'l_tarsal_distal_phalanx_2'|'l_tarsal_distal_phalanx_3'|'l_tarsal_distal_phalanx_4'|'l_tarsal_distal_phalanx_5'|'r_tarsal_distal_phalanx_1'|'r_tarsal_distal_phalanx_2'|'r_tarsal_distal_phalanx_3'|'r_tarsal_distal_phalanx_4'|'r_tarsal_distal_phalanx_5');
hanimHumanoidInfoKeyValues :  ('authorName'|'authorEmail'|'copyright'|'creationDate'|'usageRestrictions'|'humanoidVersion'|'age'|'gender'|'height'|'weight');
hanimJointNameValues :  ('humanoid_root'|'sacroiliac'|'l_hip'|'l_knee'|'l_talocrural'|'l_talocalcaneonavicular'|'l_cuneonavicular_1'|'l_tarsometatarsal_1'|'l_metatarsophalangeal_1'|'l_tarsal_interphalangeal_1'|'l_cuneonavicular_2'|'l_tarsometatarsal_2'|'l_metatarsophalangeal_2'|'l_tarsal_proximal_interphalangeal_2'|'l_tarsal_distal_interphalangeal_2'|'l_cuneonavicular_3'|'l_tarsometatarsal_3'|'l_metatarsophalangeal_3'|'l_tarsal_proximal_interphalangeal_3'|'l_tarsal_distal_interphalangeal_3'|'l_calcaneocuboid'|'l_transversetarsal'|'l_tarsometatarsal_4'|'l_metatarsophalangeal_4'|'l_tarsal_proximal_interphalangeal_4'|'l_tarsal_distal_interphalangeal_4'|'l_tarsometatarsal_5'|'l_metatarsophalangeal_5'|'l_tarsal_proximal_interphalangeal_5'|'l_tarsal_distal_interphalangeal_5'|'r_hip'|'r_knee'|'r_talocrural'|'r_talocalcaneonavicular'|'r_cuneonavicular_1'|'r_tarsometatarsal_1'|'r_metatarsophalangeal_1'|'r_tarsal_interphalangeal_1'|'r_cuneonavicular_2'|'r_tarsometatarsal_2'|'r_metatarsophalangeal_2'|'r_tarsal_proximal_interphalangeal_2'|'r_tarsal_distal_interphalangeal_2'|'r_cuneonavicular_3'|'r_tarsometatarsal_3'|'r_metatarsophalangeal_3'|'r_tarsal_proximal_interphalangeal_3'|'r_tarsal_distal_interphalangeal_3'|'r_calcaneocuboid'|'r_transversetarsal'|'r_tarsometatarsal_4'|'r_metatarsophalangeal_4'|'r_tarsal_proximal_interphalangeal_4'|'r_tarsal_distal_interphalangeal_4'|'r_tarsometatarsal_5'|'r_metatarsophalangeal_5'|'r_tarsal_proximal_interphalangeal_5'|'r_tarsal_distal_interphalangeal_5'|'vl5'|'vl4'|'vl3'|'vl2'|'vl1'|'vt12'|'vt11'|'vt10'|'vt9'|'vt8'|'vt7'|'vt6'|'vt5'|'vt4'|'vt3'|'vt2'|'vt1'|'vc7'|'vc6'|'vc5'|'vc4'|'vc3'|'vc2'|'vc1'|'skullbase'|'l_eyelid_joint'|'r_eyelid_joint'|'l_eyeball_joint'|'r_eyeball_joint'|'l_eyebrow_joint'|'r_eyebrow_joint'|'temporomandibular'|'l_sternoclavicular'|'l_acromioclavicular'|'l_shoulder'|'l_elbow'|'l_radiocarpal'|'l_midcarpal_1'|'l_carpometacarpal_1'|'l_metacarpophalangeal_1'|'l_carpal_interphalangeal_1'|'l_midcarpal_2'|'l_carpometacarpal_2'|'l_metacarpophalangeal_2'|'l_carpal_proximal_interphalangeal_2'|'l_carpal_distal_interphalangeal_2'|'l_midcarpal_3'|'l_carpometacarpal_3'|'l_metacarpophalangeal_3'|'l_carpal_proximal_interphalangeal_3'|'l_carpal_distal_interphalangeal_3'|'l_midcarpal_4_5'|'l_carpometacarpal_4'|'l_metacarpophalangeal_4'|'l_carpal_proximal_interphalangeal_4'|'l_carpal_distal_interphalangeal_4'|'l_carpometacarpal_5'|'l_metacarpophalangeal_5'|'l_carpal_proximal_interphalangeal_5'|'l_carpal_distal_interphalangeal_5'|'r_sternoclavicular'|'r_acromioclavicular'|'r_shoulder'|'r_elbow'|'r_radiocarpal'|'r_midcarpal_1'|'r_carpometacarpal_1'|'r_metacarpophalangeal_1'|'r_carpal_interphalangeal_1'|'r_midcarpal_2'|'r_carpometacarpal_2'|'r_metacarpophalangeal_2'|'r_carpal_proximal_interphalangeal_2'|'r_carpal_distal_interphalangeal_2'|'r_midcarpal_3'|'r_carpometacarpal_3'|'r_metacarpophalangeal_3'|'r_carpal_proximal_interphalangeal_3'|'r_carpal_distal_interphalangeal_3'|'r_midcarpal_4_5'|'r_carpometacarpal_4'|'r_metacarpophalangeal_4'|'r_carpal_proximal_interphalangeal_4'|'r_carpal_distal_interphalangeal_4'|'r_carpometacarpal_5'|'r_metacarpophalangeal_5'|'r_carpal_proximal_interphalangeal_5'|'r_carpal_distal_interphalangeal_5');
hanimSegmentNameValues :  ('sacrum'|'pelvis'|'l_thigh'|'l_calf'|'l_talus'|'l_navicular'|'l_cuneiform_1'|'l_metatarsal_1'|'l_tarsal_proximal_phalanx_1'|'l_tarsal_distal_phalanx_1'|'l_cuneiform_2'|'l_metatarsal_2'|'l_tarsal_proximal_phalanx_2'|'l_tarsal_middle_phalanx_2'|'l_tarsal_distal_phalanx_2'|'l_cuneiform_3'|'l_metatarsal_3'|'l_tarsal_proximal_phalanx_3'|'l_tarsal_middle_phalanx_3'|'l_tarsal_distal_phalanx_3'|'l_calcaneus'|'l_cuboid'|'l_metatarsal_4'|'l_tarsal_proximal_phalanx_4'|'l_tarsal_middle_phalanx_4'|'l_tarsal_distal_phalanx_4'|'l_metatarsal_5'|'l_tarsal_proximal_phalanx_5'|'l_tarsal_middle_phalanx_5'|'l_tarsal_distal_phalanx_5'|'r_thigh'|'r_calf'|'r_talus'|'r_navicular'|'r_cuneiform_1'|'r_metatarsal_1'|'r_tarsal_proximal_phalanx_1'|'r_tarsal_distal_phalanx_1'|'r_cuneiform_2'|'r_metatarsal_2'|'r_tarsal_proximal_phalanx_2'|'r_tarsal_middle_phalanx_2'|'r_tarsal_distal_phalanx_2'|'r_cuneiform_3'|'r_metatarsal_3'|'r_tarsal_proximal_phalanx_3'|'r_tarsal_middle_phalanx_3'|'r_tarsal_distal_phalanx_3'|'r_calcaneus'|'r_cuboid'|'r_metatarsal_4'|'r_tarsal_proximal_phalanx_4'|'r_tarsal_middle_phalanx_4'|'r_tarsal_distal_phalanx_4'|'r_metatarsal_5'|'r_tarsal_proximal_phalanx_5'|'r_tarsal_middle_phalanx_5'|'r_tarsal_distal_phalanx_5'|'l5'|'l4'|'l3'|'l2'|'l1'|'t12'|'t11'|'t10'|'t9'|'t8'|'t7'|'t6'|'t5'|'t4'|'t3'|'t2'|'t1'|'c7'|'c6'|'c5'|'c4'|'c3'|'c2'|'c1'|'skull'|'l_eyelid'|'r_eyelid'|'l_eyeball'|'r_eyeball'|'l_eyebrow'|'r_eyebrow'|'jaw'|'l_clavicle'|'l_scapula'|'l_upperarm'|'l_forearm'|'l_carpal'|'l_trapezium'|'l_metacarpal_1'|'l_carpal_proximal_phalanx_1'|'l_carpal_distal_phalanx_1'|'l_trapezoid'|'l_metacarpal_2'|'l_carpal_proximal_phalanx_2'|'l_carpal_middle_phalanx_2'|'l_carpal_distal_phalanx_2'|'l_capitate'|'l_metacarpal_3'|'l_carpal_proximal_phalanx_3'|'l_carpal_middle_phalanx_3'|'l_carpal_distal_phalanx_3'|'l_hamate'|'l_metacarpal_4'|'l_carpal_proximal_phalanx_4'|'l_carpal_middle_phalanx_4'|'l_carpal_distal_phalanx_4'|'l_metacarpal_5'|'l_carpal_proximal_phalanx_5'|'l_carpal_middle_phalanx_5'|'l_carpal_distal_phalanx_5'|'r_clavicle'|'r_scapula'|'r_upperarm'|'r_forearm'|'r_carpal'|'r_trapezium'|'r_metacarpal_1'|'r_carpal_proximal_phalanx_1'|'r_carpal_distal_phalanx_1'|'r_trapezoid'|'r_metacarpal_2'|'r_carpal_proximal_phalanx_2'|'r_carpal_middle_phalanx_2'|'r_carpal_distal_phalanx_2'|'r_capitate'|'r_metacarpal_3'|'r_carpal_proximal_phalanx_3'|'r_carpal_middle_phalanx_3'|'r_carpal_distal_phalanx_3'|'r_hamate'|'r_metacarpal_4'|'r_carpal_proximal_phalanx_4'|'r_carpal_middle_phalanx_4'|'r_carpal_distal_phalanx_4'|'r_metacarpal_5'|'r_carpal_proximal_phalanx_5'|'r_carpal_middle_phalanx_5'|'r_carpal_distal_phalanx_5');
hanimVersionChoices :  ('2.0');
hatchStyleValues :  ('1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'|'10'|'11'|'12'|'13'|'14'|'15'|'16'|'17'|'18'|'19');
initializeOnlyAccessTypes :  ('autoCalc'|'bboxCenter'|'bboxSize'|'beginCap'|'bottomRadius'|'category'|'ccw'|'child1Url'|'child2Url'|'child3Url'|'child4Url'|'closed'|'closureType'|'colorKey'|'colorIndex'|'colorPerVertex'|'convex'|'coordIndex'|'country'|'creaseAngle'|'crossSection'|'directOutput'|'domain'|'duration'|'endCap'|'endAngle'|'extra'|'forceTransitions'|'generateMipMaps'|'geoGridOrigin'|'geometryType'|'geoSystem'|'height'|'index'|'initialDestination'|'initialValue'|'innerRadius'|'internal'|'intersectionType'|'kind'|'knot'|'language'|'lineSegments'|'mustEvaluate'|'normalIndex'|'normalPerVertex'|'numComponents'|'order'|'outerRadius'|'phaseFunction'|'radius'|'range'|'repeatR'|'repeatS'|'repeatT'|'rootUrl'|'rotateYUp'|'size'|'sortOrder'|'spatialize'|'specific'|'speedFactor'|'spine'|'startAngle'|'subcategory'|'texCoordIndex'|'texCoordKey'|'uClosed'|'uDimension'|'uKnot'|'uOrder'|'vClosed'|'vDimension'|'vKnot'|'vOrder'|'xDimension'|'xSpacing'|'zDimension'|'zSpacing');
inputOnlyAccessTypes :  ('activate'|'set_articulationParameterValue0'|'set_articulationParameterValue1'|'set_articulationParameterValue2'|'set_articulationParameterValue3'|'set_articulationParameterValue4'|'set_articulationParameterValue5'|'set_articulationParameterValue6'|'set_articulationParameterValue7'|'set_boolean'|'set_bind'|'set_colorIndex'|'set_contacts'|'set_coordIndex'|'set_crossSection'|'set_destination'|'set_fraction'|'set_height'|'set_index'|'set_normalIndex'|'set_orientation'|'set_scale'|'set_spine'|'set_texCoordIndex'|'set_triggerTime');
inputOutputAccessTypes :  ('absorption'|'activeLayer'|'address'|'align'|'alpha'|'alphaCutoff'|'alphaMode'|'ambientIntensity'|'ambientTextureMapping'|'anchorPoint'|'angle'|'angularDampingFactor'|'angularVelocity'|'anisotropicDegree'|'antennaLocation'|'applicationID'|'applied'|'appliedParameters'|'antennaPatternType'|'antennaPatternLength'|'articulationParameterArray'|'articulationParameterChangeIndicatorArray'|'articulationParameterCount'|'articulationParameterDesignatorArray'|'articulationParameterIdPartAttachedToArray'|'articulationParameterTypeArray'|'attack'|'attenuation'|'autoDamp'|'autoDisable'|'autoOffset'|'autoRefresh'|'autoRefreshTimeLimit'|'avatarSize'|'axis'|'axis1'|'axis1Angle'|'axis1Torque'|'axis2'|'axis2Angle'|'axis2Torque'|'axis3Angle'|'axis3Torque'|'axisOfRotation'|'axisRotation'|'backAmbientIntensity'|'backDiffuseColor'|'backEmissiveColor'|'backShininess'|'backSpecularColor'|'backTexture'|'backTransparency'|'backUrl'|'baseColor'|'baseTextureMapping'|'beamWidth'|'bottom'|'bottomTexture'|'bottomUrl'|'bounce'|'boundaryOpacity'|'borderColor'|'borderWidth'|'boundaryModeS'|'boundaryModeT'|'boundaryModeR'|'buffer'|'bufferDuration'|'center'|'castShadow'|'centerOfMass'|'centerOfRotation'|'class'|'clipBoundary'|'channels'|'channelCountMode'|'channelInterpretation'|'channelSelection'|'channelsEnabled'|'gain'|'collisionType'|'color'|'colorSteps'|'coneInnerAngle'|'coneOuterAngle'|'coneOuterGain'|'contactNormal'|'contourStepSize'|'controlPoint'|'constantForceMix'|'contactSurfaceThickness'|'coolColor'|'createParticles'|'cryptoSystem'|'cryptoKeyID'|'cutOffAngle'|'cycleInterval'|'data'|'dataLength'|'deadReckoning'|'delayTime'|'deletionAllowed'|'depth'|'description'|'desiredAngularVelocity1'|'desiredAngularVelocity2'|'detonationLocation'|'detonationRelativeLocation'|'detonationResult'|'detune'|'diffuse'|'diffuseColor'|'diffuseTextureMapping'|'dimensions'|'direction'|'disableAngularSpeed'|'disableLinearSpeed'|'disableTime'|'diskAngle'|'displacements'|'bboxDisplay'|'detune'|'displayed'|'distanceModel'|'easeInEaseOut'|'edgeColor'|'emissiveColor'|'emissiveTextureMapping'|'enabled'|'enabledAxes'|'dopplerEnabled'|'enableHRTF'|'encodingScheme'|'endFrame'|'entityID'|'entityKind'|'entityDomain'|'entityCountry'|'entityCategory'|'entitySubcategory'|'entitySpecific'|'entityExtra'|'errorCorrection'|'eventApplicationID'|'eventEntityID'|'eventNumber'|'eventSiteID'|'family'|'fanCount'|'farDistance'|'fftSize'|'fieldOfView'|'filled'|'finiteRotationAxis'|'fired1'|'fired2'|'fireMissionIndex'|'firingRange'|'firingRate'|'fixed'|'fogType'|'force'|'forceID'|'forceOutput'|'forces'|'frameDuration'|'frameIncrement'|'frameIndex'|'frequency'|'frequencyBinCount'|'frictionCoefficients'|'frictionDirection'|'frontTexture'|'frontUrl'|'function'|'fuse'|'gain'|'geoCenter'|'geoCoords'|'global'|'gradientThreshold'|'gravity'|'groundAngle'|'groundColor'|'gustiness'|'hatchColor'|'hatched'|'hatchStyle'|'headlight'|'horizontal'|'id'|'image'|'inertia'|'info'|'inputSource'|'integerKey'|'intensity'|'intensityThreshold'|'interauralDistance'|'iterations'|'jointBindingPositions'|'jointBindingRotations'|'jointBindingScales'|'joints'|'justify'|'key'|'knee'|'keyVelocity'|'jump'|'keyValue'|'language'|'leftTexture'|'leftToRight'|'leftUrl'|'length'|'lengthOfModulationParameters'|'lifetimeVariation'|'lighting'|'limitOrientation'|'linearAcceleration'|'linearDampingFactor'|'linearVelocity'|'linetype'|'linewidthScaleFactor'|'llimit'|'loa'|'load'|'location'|'loop'|'loopEnd'|'loopStart'|'mapping'|'marking'|'mass'|'magnificationFilter'|'matchCriterion'|'matrix'|'maxAngle'|'maxAngle1'|'maxBack'|'maxChannelCount'|'maxCorrectionSpeed'|'maxDecibels'|'maxDelayTime'|'maxDistance'|'maxExtent'|'maxFront'|'maxParticles'|'maxPosition'|'maxSeparation'|'maxTorque1'|'maxTorque2'|'mediaDeviceID'|'metallic'|'metallicRoughnessTextureMapping'|'minAngle'|'minAngle1'|'minBack'|'minBounceSpeed'|'minDecibels'|'minFront'|'minificationFilter'|'minPosition'|'minSeparation'|'mode'|'modulationTypeSpreadSpectrum'|'modulationTypeMajor'|'modulationTypeDetail'|'modulationTypeSystem'|'momentsOfInertia'|'motionsEnabled'|'motor1Axis'|'motor2Axis'|'motor3Axis'|'multicastRelayHost'|'multicastRelayPort'|'munitionEndPoint'|'munitionStartPoint'|'munitionApplicationID'|'munitionEntityID'|'munitionSiteID'|'munitionQuantity'|'name'|'nearDistance'|'networkMode'|'normalScale'|'normalTextureMapping'|'numberOfChannels'|'normalize'|'normalizeVelocity'|'objectType'|'occlusionStrength'|'occlusionTextureMapping'|'offset'|'offsetUnits'|'on'|'opacityFactor'|'optionsImag'|'optionsReal'|'orientation'|'orthogonalColor'|'oversample'|'parallelColor'|'parameter'|'particleLifetime'|'particleSize'|'pauseTime'|'pickable'|'pitch'|'plane'|'playbackRate'|'point'|'pointSize'|'pointSizeScaleFactor'|'pointSizeMinValue'|'pointSizeMaxValue'|'port'|'position'|'power'|'preferAccuracy'|'priority'|'qualityFactor'|'radioID'|'radioEntityTypeKind'|'radioEntityTypeDomain'|'radioEntityTypeCountry'|'radioEntityTypeCategory'|'radioEntityTypeNomenclature'|'radioEntityTypeNomenclatureVersion'|'ratio'|'readInterval'|'receivedPower'|'receiverState'|'reference'|'referenceDistance'|'refraction'|'relativeAntennaLocation'|'release'|'retainedOpacity'|'retainUserOffsets'|'resumeTime'|'rightTexture'|'rightUrl'|'rolloffFactor'|'rotation'|'roughness'|'rtpHeaderExpected'|'sampleRate'|'samples'|'scale'|'scaleMode'|'scaleOrientation'|'segmentEnabled'|'separateBackColor'|'shininess'|'shadowIntensity'|'shadows'|'side'|'shininessTextureMapping'|'silhouetteBoundaryOpacity'|'silhouetteRetainedOpacity'|'silhouetteSharpness'|'siteID'|'size'|'sizeUnits'|'skeletalConfiguration'|'skinCoordIndex'|'skinCoordWeight'|'skyColor'|'skyAngle'|'sliderForce'|'slipCoefficients'|'slipFactors'|'smoothingTimeConstant'|'softnessConstantForceMix'|'softnessErrorCorrection'|'solid'|'source'|'spacing'|'specular'|'specularColor'|'specularTextureMapping'|'speed'|'startFrame'|'startTime'|'stiffness'|'stopBounce'|'stopErrorCorrection'|'stop1ConstantForceMix'|'stop1Bounce'|'stop2Bounce'|'stop3Bounce'|'stop1ErrorCorrection'|'stop2ErrorCorrection'|'stop3ErrorCorrection'|'stopTime'|'streamIdentifier'|'string'|'stripCount'|'style'|'summary'|'surfaceArea'|'surfaceSpeed'|'surfaceTolerance'|'surfaceValues'|'suspensionErrorCorrection'|'suspensionForce'|'tailTime'|'tau'|'tdlType'|'tessellation'|'tessellationScale'|'textureCompression'|'texturePriority'|'threshold'|'timeOut'|'title'|'toggle'|'tolerance'|'top'|'topTexture'|'topToBottom'|'topUrl'|'torques'|'trackCurrentView'|'transitionTime'|'transitionType'|'translation'|'transmitFrequencyBandwidth'|'transmitState'|'transmitterApplicationID'|'transmitterEntityID'|'transmitterRadioID'|'transmitterSiteID'|'transparency'|'turbulence'|'type'|'ulimit'|'upVector'|'update'|'url'|'useFiniteRotation'|'useGeometry'|'useGlobalGravity'|'uTessellation'|'variation'|'value'|'values'|'version'|'vector'|'vertexCount'|'vertices'|'viewAll'|'visibilityLimit'|'visibilityRange'|'visible'|'vTessellation'|'warhead'|'warmColor'|'weight'|'weightConstant1'|'weightConstant2'|'weightFunction1'|'weightFunction2'|'whichChoice'|'whichGeometry'|'writeInterval'|'yScale');
intersectionTypeValues :  ('BOUNDS'|'GEOMETRY');
justifyChoices :  ('"MIDDLE"'|'"MIDDLE" "BEGIN"'|'"MIDDLE" "END"'|'"MIDDLE" "FIRST"'|'"MIDDLE" "MIDDLE"'|'"BEGIN"'|'"BEGIN" "BEGIN"'|'"BEGIN" "END"'|'"BEGIN" "FIRST"'|'"BEGIN" "MIDDLE"'|'"END"'|'"END" "BEGIN"'|'"END" "END"'|'"END" "FIRST"'|'"END" "MIDDLE"'|'"FIRST"'|'"FIRST" "BEGIN"'|'"FIRST" "END"'|'"FIRST" "FIRST"'|'"FIRST" "MIDDLE"');
layoutAlignChoices :  ('"LEFT" "BOTTOM"'|'"LEFT" "CENTER"'|'"LEFT" "TOP"'|'"CENTER" "BOTTOM"'|'"CENTER" "CENTER"'|'"CENTER" "TOP"'|'"RIGHT" "BOTTOM"'|'"RIGHT" "CENTER"'|'"RIGHT" "TOP"');
layoutScaleModeChoices :  ('"NONE" "NONE"'|'"NONE" "FRACTION"'|'"NONE" "STRETCH"'|'"NONE" "PIXEL"'|'"FRACTION" "NONE"'|'"FRACTION" "FRACTION"'|'"FRACTION" "STRETCH"'|'"FRACTION" "PIXEL"'|'"STRETCH" "NONE"'|'"STRETCH" "FRACTION"'|'"STRETCH" "STRETCH"'|'"STRETCH" "PIXEL"'|'"PIXEL" "NONE"'|'"PIXEL" "FRACTION"'|'"PIXEL" "STRETCH"'|'"PIXEL" "PIXEL"');
layoutUnitsChoices :  ('"WORLD" "WORLD"'|'"WORLD" "FRACTION"'|'"WORLD" "PIXEL"'|'"FRACTION" "WORLD"'|'"FRACTION" "FRACTION"'|'"FRACTION" "PIXEL"'|'"PIXEL" "WORLD"'|'"PIXEL" "FRACTION"'|'"PIXEL" "PIXEL"');
lineTypeValues :  ('1'|'2'|'3'|'4'|'5'|'6'|'7'|'8'|'9'|'10'|'11'|'12'|'13'|'14'|'15'|'16');
loaType :  ('');
metaDirectionChoices :  ('rtl'|'ltr');
metaNameValues :  ('accessRights'|'author'|'CML-version'|'contributor'|'created'|'creator'|'description'|'disclaimer'|'drawing'|'error'|'generator'|'hint'|'identifier'|'Image'|'info'|'information'|'isVersionOf'|'keywords'|'license'|'mediator'|'modified'|'movie'|'MovingImage'|'original'|'photo'|'photograph'|'publisher'|'reference'|'requires'|'rights'|'robots'|'Sound'|'source'|'specificationSection'|'specificationUrl'|'subject'|'Text'|'title'|'TODO'|'translator'|'translated'|'version'|'warning');
multiTextureFunctionValues :  ('"COMPLEMENT"'|'"ALPHAREPLICATE"'|'""');
multiTextureModeValues :  ('"ADD"'|'"ADDSIGNED"'|'"ADDSIGNED2X"'|'"ADDSMOOTH"'|'"BLENDCURRENTALPHA"'|'"BLENDDIFFUSEALPHA"'|'"BLENDFACTORALPHA"'|'"BLENDTEXTUREALPHA"'|'"DOTPRODUCT3"'|'"MODULATE"'|'"MODULATE2X"'|'"MODULATE4X"'|'"MODULATEALPHA_ADDCOLOR"'|'"MODULATEINVALPHA_ADDCOLOR"'|'"MODULATEINVCOLOR_ADDALPHA"'|'"OFF"'|'"REPLACE"'|'"SELECTARG1"'|'"SELECTARG2"'|'"SUBTRACT"');
multiTextureSourceValues :  ('"DIFFUSE"'|'"FACTOR"'|'"SPECULAR"'|'""');
navigationTransitionTypeValues :  ('"TELEPORT"'|'"LINEAR"'|'"ANIMATE"');
navigationTypeValues :  ('"ANY"'|'"WALK"'|'"EXAMINE"'|'"FLY"'|'"LOOKAT"'|'"NONE"'|'"EXPLORE"');
networkModeChoices :  ('standAlone'|'networkReader'|'networkWriter');
outputOnlyAccessTypes :  ('actionKeyPress'|'actionKeyRelease'|'altKey'|'angle'|'angleRate'|'articulationParameterValue0_changed'|'articulationParameterValue1_changed'|'articulationParameterValue2_changed'|'articulationParameterValue3_changed'|'articulationParameterValue4_changed'|'articulationParameterValue5_changed'|'articulationParameterValue6_changed'|'articulationParameterValue7_changed'|'bindTime'|'body1AnchorPoint'|'body1Axis'|'body2AnchorPoint'|'body2Axis'|'centerOfRotation_changed'|'channelCount'|'collideTime'|'controlKey'|'cycleTime'|'detonateTime'|'duration_changed'|'elapsedTime'|'enteredText'|'enterTime'|'exitTime'|'finalText'|'firedTime'|'fraction_changed'|'frameCount'|'geovalue_changed'|'hinge1Angle'|'hinge1AngleRate'|'hinge2Angle'|'hinge2AngleRate'|'hitGeoCoord_changed'|'hitNormal_changed'|'hitPoint_changed'|'hitTexCoord_changed'|'inputFalse'|'inputNegate'|'inputTrue'|'isActive'|'isBound'|'isCollided'|'isDetonated'|'isLoaded'|'isOver'|'isPaused'|'isNetworkReader'|'isNetworkWriter'|'isRtpHeaderHeard'|'isSelected'|'isStandAlone'|'isValid'|'keyPress'|'keyRelease'|'level_changed'|'lineBounds'|'loadTime'|'modifiedFraction_changed'|'motor1Angle'|'motor1AngleRate'|'motor2Angle'|'motor2AngleRate'|'motor3Angle'|'motor3AngleRate'|'next'|'normal_changed'|'orientation_changed'|'origin'|'pickedGeometry'|'pickedNormal'|'pickedPoint'|'pickedTextureCoordinate'|'position_changed'|'previous'|'progress'|'rotation_changed'|'separation'|'separationRate'|'shiftKey'|'textBounds'|'time'|'timestamp'|'touchTime'|'trackPoint_changed'|'transitionComplete'|'translation_changed'|'triggerTime'|'triggerTrue'|'triggerValue'|'value_changed');
particleSystemGeometryTypeValues :  ('LINE'|'POINT'|'QUAD'|'SPRITE'|'TRIANGLE'|'GEOMETRY');
periodicWaveTypeChoices :  ('SINE'|'SQUARE'|'SAWTOOTH'|'TRIANGLE'|'CUSTOM');
phaseFunctionValues :  ('Henyey-Greenstein'|'NONE');
pickableObjectTypeValues :  ('"ALL"'|'"NONE"'|'"TERRAIN"');
pickSensorMatchCriterionChoices :  ('MATCH_ANY'|'MATCH_EVERY'|'MATCH_ONLY_ONE');
pickSensorSortOrderValues :  ('ANY'|'CLOSEST'|'ALL'|'ALL_SORTED');
profileNameChoices :  ('Core'|'Interchange'|'CADInterchange'|'Interactive'|'Immersive'|'MedicalInterchange'|'MPEG4Interactive'|'Full');
projectionVolumeStyleTypeChoices :  ('MAX'|'MIN'|'AVERAGE');
shaderLanguageValues :  ('Cg'|'GLSL'|'HLSL');
shaderPartTypeValues :  ('VERTEX'|'FRAGMENT');
textureBoundaryModeChoices :  ('CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT');
textureCompressionModeChoices :  ('DEFAULT'|'FASTEST'|'HIGH'|'LOW'|'MEDIUM'|'NICEST');
textureCoordinateGeneratorModeChoices :  ('SPHERE'|'CAMERASPACENORMAL'|'CAMERASPACEPOSITION'|'CAMERASPACEREFLECTIONVECTOR'|'SPHERE-LOCAL'|'COORD'|'COORD-EYE'|'NOISE'|'NOISE-EYE'|'SPHERE-REFLECT'|'SPHERE-REFLECT-LOCAL');
textureMagnificationModeChoices :  ('AVG_PIXEL'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NICEST');
textureMinificationModeChoices :  ('AVG_PIXEL'|'AVG_PIXEL_AVG_MIPMAP'|'AVG_PIXEL_NEAREST_MIPMAP'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NEAREST_PIXEL_AVG_MIPMAP'|'NEAREST_PIXEL_NEAREST_MIPMAP'|'NICEST');
unitCategoryChoices :  ('angle'|'force'|'length'|'mass');
unitIntervalType :  ('');
volumeRenderingWeightFunctionChoices :  ('CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE');
waveShaperOversampleChoices :  ('NONE'|'2X'|'4X');
x3dVersionChoices :  ('3.0'|'3.1'|'3.2'|'3.3'|'4.0');
MFBool : '[' (SFBool)* ']';
MFColor : '[' (SFColor)* ']';
MFColorRGBA : '[' (SFColorRGBA)* ']';
MFDouble : '[' (SFDouble)* ']';
MFFloat : '[' (SFFloat)* ']';
MFImage : '[' (SFImage)* ']';
MFInt32 : '[' (SFInt32)* ']';
MFMatrix3d : '[' (SFMatrix3d)* ']';
MFMatrix3f : '[' (SFMatrix3f)* ']';
MFMatrix4d : '[' (SFMatrix4d)* ']';
MFMatrix4f : '[' (SFMatrix4f)* ']';
MFNode : '[' (SFNode)* ']';
MFRotation : '[' (SFRotation)* ']';
MFString : '[' (SFString)* ']';
MFTime : '[' (SFTime)* ']';
MFVec2d : '[' (SFVec2d)* ']';
MFVec2f : '[' (SFVec2f)* ']';
MFVec3d : '[' (SFVec3d)* ']';
MFVec3f : '[' (SFVec3f)* ']';
MFVec4d : '[' (SFVec4d)* ']';
MFVec4f : '[' (SFVec4f)* ']';
X3DAppearanceChildNode
(
X3DMaterialNode
|X3DOneSidedMaterialNode
|Material
|PhysicalMaterial
|UnlitMaterial
|TwoSidedMaterial
|X3DShaderNode
|ComposedShader
|PackagedShader
|ProgramShader
|X3DTextureNode
|X3DEnvironmentTextureNode
|ComposedCubeMapTexture
|GeneratedCubeMapTexture
|ImageCubeMapTexture
|X3DSingleTextureNode
|X3DTexture2DNode
|ImageTexture
|MovieTexture
|PixelTexture
|X3DTexture3DNode
|ComposedTexture3D
|ImageTexture3D
|PixelTexture3D
|MultiTexture
|X3DTextureTransformNode
|X3DSingleTextureTransformNode
|MultiTextureTransform
|TextureTransform
|TextureTransform3D
|TextureTransformMatrix3D
|AcousticProperties
|FillProperties
|LineProperties
|PointProperties
)
;
X3DAppearanceNode
(
Appearance
)
;
X3DArrayField
(

)
;
X3DBackgroundNode
(
Background
|TextureBackground
)
;
X3DBindableNode
(
X3DBackgroundNode
|Background
|TextureBackground
|X3DViewpointNode
|GeoViewpoint
|OrthoViewpoint
|Viewpoint
|Fog
|NavigationInfo
)
;
X3DChaserNode
(
ColorChaser
|CoordinateChaser
|OrientationChaser
|PositionChaser
|PositionChaser2D
|ScalarChaser
|TexCoordChaser2D
)
;
X3DChildNode
(
EXPORT
|ExternProtoDeclare
|IMPORT
|ProtoDeclare
|ROUTE
|X3DBindableNode
|X3DBackgroundNode
|Background
|TextureBackground
|X3DViewpointNode
|GeoViewpoint
|OrthoViewpoint
|Viewpoint
|Fog
|NavigationInfo
|X3DFollowerNode
|X3DChaserNode
|ColorChaser
|CoordinateChaser
|OrientationChaser
|PositionChaser
|PositionChaser2D
|ScalarChaser
|TexCoordChaser2D
|X3DDamperNode
|ColorDamper
|CoordinateDamper
|OrientationDamper
|PositionDamper
|PositionDamper2D
|ScalarDamper
|TexCoordDamper2D
|X3DGroupingNode
|X3DViewportNode
|Viewport
|Anchor
|Billboard
|CADAssembly
|CADLayer
|CADPart
|Collision
|EspduTransform
|GeoLocation
|GeoTransform
|Group
|HAnimSegment
|HAnimSite
|LayoutGroup
|LOD
|PickableGroup
|ScreenGroup
|Switch
|Transform
|X3DInfoNode
|DISEntityTypeMapping
|GeoMetadata
|WorldInfo
|X3DInterpolatorNode
|ColorInterpolator
|CoordinateInterpolator
|CoordinateInterpolator2D
|GeoPositionInterpolator
|NormalInterpolator
|OrientationInterpolator
|PositionInterpolator
|PositionInterpolator2D
|ScalarInterpolator
|SplinePositionInterpolator
|SplinePositionInterpolator2D
|SplineScalarInterpolator
|SquadOrientationInterpolator
|X3DLayoutNode
|Layout
|X3DLightNode
|X3DTextureProjectorNode
|TextureProjector
|TextureProjectorParallel
|DirectionalLight
|PointLight
|SpotLight
|X3DNBodyCollidableNode
|CollidableOffset
|CollidableShape
|X3DProductStructureChildNode
|CADFace
|X3DScriptNode
|Script
|X3DSensorNode
|X3DEnvironmentalSensorNode
|GeoProximitySensor
|ProximitySensor
|TransformSensor
|VisibilitySensor
|X3DKeyDeviceSensorNode
|KeySensor
|StringSensor
|X3DNetworkSensorNode
|LoadSensor
|ReceiverPdu
|SignalPdu
|TransmitterPdu
|X3DPickSensorNode
|LinePickSensor
|PointPickSensor
|PrimitivePickSensor
|VolumePickSensor
|X3DPointingDeviceSensorNode
|X3DDragSensorNode
|CylinderSensor
|PlaneSensor
|SphereSensor
|X3DTouchSensorNode
|GeoTouchSensor
|TouchSensor
|CollisionSensor
|TimeSensor
|X3DSequencerNode
|BooleanSequencer
|IntegerSequencer
|X3DShapeNode
|ParticleSystem
|Shape
|X3DSoundNode
|X3DSoundChannelNode
|ChannelMerger
|ChannelSelector
|ChannelSplitter
|X3DSoundDestinationNode
|AudioDestination
|StreamAudioDestination
|X3DSoundProcessingNode
|Analyser
|BiquadFilter
|Convolver
|Delay
|DynamicsCompressor
|Gain
|WaveShaper
|X3DSoundSourceNode
|AudioClip
|BufferAudioSource
|ListenerPointSource
|MicrophoneSource
|MovieTexture
|OscillatorSource
|StreamAudioSource
|PeriodicWave
|Sound
|SpatialSound
|X3DTimeDependentNode
|X3DTriggerNode
|BooleanTrigger
|IntegerTrigger
|TimeTrigger
|X3DVolumeDataNode
|IsoSurfaceVolumeData
|SegmentedVolumeData
|VolumeData
|BooleanFilter
|BooleanToggle
|ClipPlane
|CollisionCollection
|DISEntityManager
|EaseInEaseOut
|GeoLOD
|HAnimHumanoid
|HAnimJoint
|HAnimMotion
|Inline
|LocalFog
|NurbsOrientationInterpolator
|NurbsPositionInterpolator
|NurbsSet
|NurbsSurfaceInterpolator
|ProtoInstance
|RigidBody
|RigidBodyCollection
|StaticGroup
|ViewpointGroup
)
;
X3DColorNode
(
Color
|ColorRGBA
)
;
X3DComposableVolumeRenderStyleNode
(
BlendedVolumeStyle
|BoundaryEnhancementVolumeStyle
|CartoonVolumeStyle
|ComposedVolumeStyle
|EdgeEnhancementVolumeStyle
|OpacityMapVolumeStyle
|ShadedVolumeStyle
|SilhouetteEnhancementVolumeStyle
|ToneMappedVolumeStyle
)
;
X3DComposedGeometryNode
(
IndexedFaceSet
|IndexedQuadSet
|IndexedTriangleFanSet
|IndexedTriangleSet
|IndexedTriangleStripSet
|QuadSet
|TriangleFanSet
|TriangleSet
|TriangleStripSet
)
;
X3DCoordinateNode
(
Coordinate
|CoordinateDouble
|GeoCoordinate
)
;
X3DDamperNode
(
ColorDamper
|CoordinateDamper
|OrientationDamper
|PositionDamper
|PositionDamper2D
|ScalarDamper
|TexCoordDamper2D
)
;
X3DDragSensorNode
(
CylinderSensor
|PlaneSensor
|SphereSensor
)
;
X3DEnvironmentalSensorNode
(
GeoProximitySensor
|ProximitySensor
|TransformSensor
|VisibilitySensor
)
;
X3DEnvironmentTextureNode
(
ComposedCubeMapTexture
|GeneratedCubeMapTexture
|ImageCubeMapTexture
)
;
X3DField
(

)
;
X3DFollowerNode
(
X3DChaserNode
|ColorChaser
|CoordinateChaser
|OrientationChaser
|PositionChaser
|PositionChaser2D
|ScalarChaser
|TexCoordChaser2D
|X3DDamperNode
|ColorDamper
|CoordinateDamper
|OrientationDamper
|PositionDamper
|PositionDamper2D
|ScalarDamper
|TexCoordDamper2D
)
;
X3DFontStyleNode
(
FontStyle
|ScreenFontStyle
)
;
X3DGeometricPropertyNode
(
X3DColorNode
|Color
|ColorRGBA
|X3DCoordinateNode
|Coordinate
|CoordinateDouble
|GeoCoordinate
|X3DNormalNode
|Normal
|X3DTextureCoordinateNode
|X3DSingleTextureCoordinateNode
|TextureCoordinate
|TextureCoordinate3D
|TextureCoordinate4D
|TextureCoordinateGenerator
|MultiTextureCoordinate
|X3DVertexAttributeNode
|FloatVertexAttribute
|Matrix3VertexAttribute
|Matrix4VertexAttribute
|FogCoordinate
|HAnimDisplacer
)
;
X3DGeometryNode
(
X3DComposedGeometryNode
|IndexedFaceSet
|IndexedQuadSet
|IndexedTriangleFanSet
|IndexedTriangleSet
|IndexedTriangleStripSet
|QuadSet
|TriangleFanSet
|TriangleSet
|TriangleStripSet
|X3DParametricGeometryNode
|X3DNurbsSurfaceGeometryNode
|NurbsPatchSurface
|NurbsTrimmedSurface
|NurbsCurve
|NurbsSweptSurface
|NurbsSwungSurface
|Arc2D
|ArcClose2D
|Box
|Circle2D
|Cone
|Cylinder
|Disk2D
|ElevationGrid
|Extrusion
|GeoElevationGrid
|IndexedLineSet
|LineSet
|PointSet
|Polyline2D
|Polypoint2D
|Rectangle2D
|Sphere
|Text
|TriangleSet2D
)
;
X3DGroupingNode
(
X3DViewportNode
|Viewport
|Anchor
|Billboard
|CADAssembly
|CADLayer
|CADPart
|Collision
|EspduTransform
|GeoLocation
|GeoTransform
|Group
|HAnimSegment
|HAnimSite
|LayoutGroup
|LOD
|PickableGroup
|ScreenGroup
|Switch
|Transform
)
;
X3DInfoNode
(
DISEntityTypeMapping
|GeoMetadata
|WorldInfo
)
;
X3DInterpolatorNode
(
ColorInterpolator
|CoordinateInterpolator
|CoordinateInterpolator2D
|GeoPositionInterpolator
|NormalInterpolator
|OrientationInterpolator
|PositionInterpolator
|PositionInterpolator2D
|ScalarInterpolator
|SplinePositionInterpolator
|SplinePositionInterpolator2D
|SplineScalarInterpolator
|SquadOrientationInterpolator
)
;
X3DKeyDeviceSensorNode
(
KeySensor
|StringSensor
)
;
X3DLayerNode
(
Layer
|LayoutLayer
)
;
X3DLayoutNode
(
Layout
)
;
X3DLightNode
(
X3DTextureProjectorNode
|TextureProjector
|TextureProjectorParallel
|DirectionalLight
|PointLight
|SpotLight
)
;
X3DMaterialNode
(
X3DOneSidedMaterialNode
|Material
|PhysicalMaterial
|UnlitMaterial
|TwoSidedMaterial
)
;
X3DNBodyCollidableNode
(
CollidableOffset
|CollidableShape
)
;
X3DNBodyCollisionSpaceNode
(
CollisionSpace
)
;
X3DNetworkSensorNode
(
EspduTransform
|LoadSensor
|ReceiverPdu
|SignalPdu
|TransmitterPdu
)
;
X3DNode
(
X3DAppearanceChildNode
|X3DMaterialNode
|X3DOneSidedMaterialNode
|Material
|PhysicalMaterial
|UnlitMaterial
|TwoSidedMaterial
|X3DShaderNode
|ComposedShader
|PackagedShader
|ProgramShader
|X3DTextureNode
|X3DEnvironmentTextureNode
|ComposedCubeMapTexture
|GeneratedCubeMapTexture
|ImageCubeMapTexture
|X3DSingleTextureNode
|X3DTexture2DNode
|ImageTexture
|MovieTexture
|PixelTexture
|X3DTexture3DNode
|ComposedTexture3D
|ImageTexture3D
|PixelTexture3D
|MultiTexture
|X3DTextureTransformNode
|X3DSingleTextureTransformNode
|MultiTextureTransform
|TextureTransform
|TextureTransform3D
|TextureTransformMatrix3D
|AcousticProperties
|FillProperties
|LineProperties
|PointProperties
|X3DAppearanceNode
|Appearance
|X3DChildNode
|EXPORT
|ExternProtoDeclare
|IMPORT
|ProtoDeclare
|ROUTE
|X3DBindableNode
|X3DBackgroundNode
|Background
|TextureBackground
|X3DViewpointNode
|GeoViewpoint
|OrthoViewpoint
|Viewpoint
|Fog
|NavigationInfo
|X3DFollowerNode
|X3DChaserNode
|ColorChaser
|CoordinateChaser
|OrientationChaser
|PositionChaser
|PositionChaser2D
|ScalarChaser
|TexCoordChaser2D
|X3DDamperNode
|ColorDamper
|CoordinateDamper
|OrientationDamper
|PositionDamper
|PositionDamper2D
|ScalarDamper
|TexCoordDamper2D
|X3DGroupingNode
|X3DViewportNode
|Viewport
|Anchor
|Billboard
|CADAssembly
|CADLayer
|CADPart
|Collision
|EspduTransform
|GeoLocation
|GeoTransform
|Group
|HAnimSegment
|HAnimSite
|LayoutGroup
|LOD
|PickableGroup
|ScreenGroup
|Switch
|Transform
|X3DInfoNode
|DISEntityTypeMapping
|GeoMetadata
|WorldInfo
|X3DInterpolatorNode
|ColorInterpolator
|CoordinateInterpolator
|CoordinateInterpolator2D
|GeoPositionInterpolator
|NormalInterpolator
|OrientationInterpolator
|PositionInterpolator
|PositionInterpolator2D
|ScalarInterpolator
|SplinePositionInterpolator
|SplinePositionInterpolator2D
|SplineScalarInterpolator
|SquadOrientationInterpolator
|X3DLayoutNode
|Layout
|X3DLightNode
|X3DTextureProjectorNode
|TextureProjector
|TextureProjectorParallel
|DirectionalLight
|PointLight
|SpotLight
|X3DNBodyCollidableNode
|CollidableOffset
|CollidableShape
|X3DProductStructureChildNode
|CADFace
|X3DScriptNode
|Script
|X3DSensorNode
|X3DEnvironmentalSensorNode
|GeoProximitySensor
|ProximitySensor
|TransformSensor
|VisibilitySensor
|X3DKeyDeviceSensorNode
|KeySensor
|StringSensor
|X3DNetworkSensorNode
|LoadSensor
|ReceiverPdu
|SignalPdu
|TransmitterPdu
|X3DPickSensorNode
|LinePickSensor
|PointPickSensor
|PrimitivePickSensor
|VolumePickSensor
|X3DPointingDeviceSensorNode
|X3DDragSensorNode
|CylinderSensor
|PlaneSensor
|SphereSensor
|X3DTouchSensorNode
|GeoTouchSensor
|TouchSensor
|CollisionSensor
|TimeSensor
|X3DSequencerNode
|BooleanSequencer
|IntegerSequencer
|X3DShapeNode
|ParticleSystem
|Shape
|X3DSoundNode
|X3DSoundChannelNode
|ChannelMerger
|ChannelSelector
|ChannelSplitter
|X3DSoundDestinationNode
|AudioDestination
|StreamAudioDestination
|X3DSoundProcessingNode
|Analyser
|BiquadFilter
|Convolver
|Delay
|DynamicsCompressor
|Gain
|WaveShaper
|X3DSoundSourceNode
|AudioClip
|BufferAudioSource
|ListenerPointSource
|MicrophoneSource
|OscillatorSource
|StreamAudioSource
|PeriodicWave
|Sound
|SpatialSound
|X3DTimeDependentNode
|X3DTriggerNode
|BooleanTrigger
|IntegerTrigger
|TimeTrigger
|X3DVolumeDataNode
|IsoSurfaceVolumeData
|SegmentedVolumeData
|VolumeData
|BooleanFilter
|BooleanToggle
|ClipPlane
|CollisionCollection
|DISEntityManager
|EaseInEaseOut
|GeoLOD
|HAnimHumanoid
|HAnimJoint
|HAnimMotion
|Inline
|LocalFog
|NurbsOrientationInterpolator
|NurbsPositionInterpolator
|NurbsSet
|NurbsSurfaceInterpolator
|ProtoInstance
|RigidBody
|RigidBodyCollection
|StaticGroup
|ViewpointGroup
|X3DFontStyleNode
|FontStyle
|ScreenFontStyle
|X3DGeometricPropertyNode
|X3DColorNode
|Color
|ColorRGBA
|X3DCoordinateNode
|Coordinate
|CoordinateDouble
|GeoCoordinate
|X3DNormalNode
|Normal
|X3DTextureCoordinateNode
|X3DSingleTextureCoordinateNode
|TextureCoordinate
|TextureCoordinate3D
|TextureCoordinate4D
|TextureCoordinateGenerator
|MultiTextureCoordinate
|X3DVertexAttributeNode
|FloatVertexAttribute
|Matrix3VertexAttribute
|Matrix4VertexAttribute
|FogCoordinate
|HAnimDisplacer
|X3DGeometryNode
|X3DComposedGeometryNode
|IndexedFaceSet
|IndexedQuadSet
|IndexedTriangleFanSet
|IndexedTriangleSet
|IndexedTriangleStripSet
|QuadSet
|TriangleFanSet
|TriangleSet
|TriangleStripSet
|X3DParametricGeometryNode
|X3DNurbsSurfaceGeometryNode
|NurbsPatchSurface
|NurbsTrimmedSurface
|NurbsCurve
|NurbsSweptSurface
|NurbsSwungSurface
|Arc2D
|ArcClose2D
|Box
|Circle2D
|Cone
|Cylinder
|Disk2D
|ElevationGrid
|Extrusion
|GeoElevationGrid
|IndexedLineSet
|LineSet
|PointSet
|Polyline2D
|Polypoint2D
|Rectangle2D
|Sphere
|Text
|TriangleSet2D
|X3DLayerNode
|Layer
|LayoutLayer
|X3DNBodyCollisionSpaceNode
|CollisionSpace
|X3DNurbsControlCurveNode
|ContourPolyline2D
|NurbsCurve2D
|X3DParticleEmitterNode
|ConeEmitter
|ExplosionEmitter
|PointEmitter
|PolylineEmitter
|SurfaceEmitter
|VolumeEmitter
|X3DParticlePhysicsModelNode
|BoundedPhysicsModel
|ForcePhysicsModel
|WindPhysicsModel
|X3DPrototypeInstance
|X3DRigidJointNode
|BallJoint
|DoubleAxisHingeJoint
|MotorJoint
|SingleAxisHingeJoint
|SliderJoint
|UniversalJoint
|X3DVolumeRenderStyleNode
|X3DComposableVolumeRenderStyleNode
|BlendedVolumeStyle
|BoundaryEnhancementVolumeStyle
|CartoonVolumeStyle
|ComposedVolumeStyle
|EdgeEnhancementVolumeStyle
|OpacityMapVolumeStyle
|ShadedVolumeStyle
|SilhouetteEnhancementVolumeStyle
|ToneMappedVolumeStyle
|ProjectionVolumeStyle
|Contact
|Contour2D
|GeoOrigin
|LayerSet
|MetadataBoolean
|MetadataDouble
|MetadataFloat
|MetadataInteger
|MetadataSet
|MetadataString
|NurbsTextureCoordinate
|ShaderPart
|ShaderProgram
|TextureProperties
)
;
X3DNormalNode
(
Normal
)
;
X3DNurbsControlCurveNode
(
ContourPolyline2D
|NurbsCurve2D
)
;
X3DNurbsSurfaceGeometryNode
(
NurbsPatchSurface
|NurbsTrimmedSurface
)
;
X3DOneSidedMaterialNode
(
Material
|PhysicalMaterial
|UnlitMaterial
)
;
X3DParametricGeometryNode
(
X3DNurbsSurfaceGeometryNode
|NurbsPatchSurface
|NurbsTrimmedSurface
|NurbsCurve
|NurbsSweptSurface
|NurbsSwungSurface
)
;
X3DParticleEmitterNode
(
ConeEmitter
|ExplosionEmitter
|PointEmitter
|PolylineEmitter
|SurfaceEmitter
|VolumeEmitter
)
;
X3DParticlePhysicsModelNode
(
BoundedPhysicsModel
|ForcePhysicsModel
|WindPhysicsModel
)
;
X3DPickSensorNode
(
LinePickSensor
|PointPickSensor
|PrimitivePickSensor
|VolumePickSensor
)
;
X3DPointingDeviceSensorNode
(
X3DDragSensorNode
|CylinderSensor
|PlaneSensor
|SphereSensor
|X3DTouchSensorNode
|GeoTouchSensor
|TouchSensor
)
;
X3DProductStructureChildNode
(
CADAssembly
|CADFace
|CADPart
)
;
X3DPrototypeInstance
(
ProtoInstance
)
;
X3DRigidJointNode
(
BallJoint
|DoubleAxisHingeJoint
|MotorJoint
|SingleAxisHingeJoint
|SliderJoint
|UniversalJoint
)
;
X3DScriptNode
(
Script
)
;
X3DSensorNode
(
X3DEnvironmentalSensorNode
|GeoProximitySensor
|ProximitySensor
|TransformSensor
|VisibilitySensor
|X3DKeyDeviceSensorNode
|KeySensor
|StringSensor
|X3DNetworkSensorNode
|EspduTransform
|LoadSensor
|ReceiverPdu
|SignalPdu
|TransmitterPdu
|X3DPickSensorNode
|LinePickSensor
|PointPickSensor
|PrimitivePickSensor
|VolumePickSensor
|X3DPointingDeviceSensorNode
|X3DDragSensorNode
|CylinderSensor
|PlaneSensor
|SphereSensor
|X3DTouchSensorNode
|GeoTouchSensor
|TouchSensor
|Collision
|CollisionSensor
|TimeSensor
)
;
X3DSequencerNode
(
BooleanSequencer
|IntegerSequencer
)
;
X3DShaderNode
(
ComposedShader
|PackagedShader
|ProgramShader
)
;
X3DShapeNode
(
ParticleSystem
|Shape
)
;
X3DSingleTextureCoordinateNode
(
TextureCoordinate
|TextureCoordinate3D
|TextureCoordinate4D
|TextureCoordinateGenerator
)
;
X3DSingleTextureNode
(
X3DTexture2DNode
|ImageTexture
|MovieTexture
|PixelTexture
)
;
X3DSingleTextureTransformNode
(

)
;
X3DSoundChannelNode
(
ChannelMerger
|ChannelSelector
|ChannelSplitter
)
;
X3DSoundDestinationNode
(
AudioDestination
|StreamAudioDestination
)
;
X3DSoundNode
(
X3DSoundChannelNode
|ChannelMerger
|ChannelSelector
|ChannelSplitter
|X3DSoundDestinationNode
|AudioDestination
|StreamAudioDestination
|X3DSoundProcessingNode
|Analyser
|BiquadFilter
|Convolver
|Delay
|DynamicsCompressor
|Gain
|WaveShaper
|X3DSoundSourceNode
|AudioClip
|BufferAudioSource
|ListenerPointSource
|MicrophoneSource
|MovieTexture
|OscillatorSource
|StreamAudioSource
|PeriodicWave
|Sound
|SpatialSound
)
;
X3DSoundProcessingNode
(
Analyser
|BiquadFilter
|Convolver
|Delay
|DynamicsCompressor
|Gain
|WaveShaper
)
;
X3DSoundSourceNode
(
AudioClip
|BufferAudioSource
|ListenerPointSource
|MicrophoneSource
|MovieTexture
|OscillatorSource
|StreamAudioSource
)
;
X3DStatement
(

)
;
X3DTexture2DNode
(
ImageTexture
|MovieTexture
|PixelTexture
)
;
X3DTexture3DNode
(
ComposedTexture3D
|ImageTexture3D
|PixelTexture3D
)
;
X3DTextureCoordinateNode
(
X3DSingleTextureCoordinateNode
|TextureCoordinate
|TextureCoordinate3D
|TextureCoordinate4D
|TextureCoordinateGenerator
|MultiTextureCoordinate
)
;
X3DTextureNode
(
X3DEnvironmentTextureNode
|ComposedCubeMapTexture
|GeneratedCubeMapTexture
|ImageCubeMapTexture
|X3DSingleTextureNode
|X3DTexture2DNode
|ImageTexture
|MovieTexture
|PixelTexture
|X3DTexture3DNode
|ComposedTexture3D
|ImageTexture3D
|PixelTexture3D
|MultiTexture
)
;
X3DTextureProjectorNode
(
TextureProjector
|TextureProjectorParallel
)
;
X3DTextureTransformNode
(
X3DSingleTextureTransformNode
|MultiTextureTransform
|TextureTransform
|TextureTransform3D
|TextureTransformMatrix3D
)
;
X3DTimeDependentNode
(
X3DSoundProcessingNode
|Analyser
|BiquadFilter
|Convolver
|Delay
|DynamicsCompressor
|Gain
|WaveShaper
|X3DSoundSourceNode
|AudioClip
|BufferAudioSource
|ListenerPointSource
|MicrophoneSource
|MovieTexture
|OscillatorSource
|StreamAudioSource
|TimeSensor
)
;
X3DTouchSensorNode
(
GeoTouchSensor
|TouchSensor
)
;
X3DTriggerNode
(
BooleanTrigger
|IntegerTrigger
|TimeTrigger
)
;
X3DVertexAttributeNode
(
FloatVertexAttribute
|Matrix3VertexAttribute
|Matrix4VertexAttribute
)
;
X3DViewpointNode
(
GeoViewpoint
|OrthoViewpoint
|Viewpoint
)
;
X3DViewportNode
(
Viewport
)
;
X3DVolumeDataNode
(
IsoSurfaceVolumeData
|SegmentedVolumeData
|VolumeData
)
;
X3DVolumeRenderStyleNode
(
X3DComposableVolumeRenderStyleNode
|BlendedVolumeStyle
|BoundaryEnhancementVolumeStyle
|CartoonVolumeStyle
|ComposedVolumeStyle
|EdgeEnhancementVolumeStyle
|OpacityMapVolumeStyle
|ShadedVolumeStyle
|SilhouetteEnhancementVolumeStyle
|ToneMappedVolumeStyle
|ProjectionVolumeStyle
)
;
X3DConcreteNode
(
AcousticProperties
|Analyser
|Anchor
|Appearance
|Arc2D
|ArcClose2D
|AudioClip
|AudioDestination
|Background
|BallJoint
|Billboard
|BiquadFilter
|BlendedVolumeStyle
|BooleanFilter
|BooleanSequencer
|BooleanToggle
|BooleanTrigger
|BoundaryEnhancementVolumeStyle
|BoundedPhysicsModel
|Box
|BufferAudioSource
|CADAssembly
|CADFace
|CADLayer
|CADPart
|CartoonVolumeStyle
|ChannelMerger
|ChannelSelector
|ChannelSplitter
|Circle2D
|ClipPlane
|CollidableOffset
|CollidableShape
|Collision
|CollisionCollection
|CollisionSensor
|CollisionSpace
|Color
|ColorChaser
|ColorDamper
|ColorInterpolator
|ColorRGBA
|ComposedCubeMapTexture
|ComposedShader
|ComposedTexture3D
|ComposedVolumeStyle
|Cone
|ConeEmitter
|Contact
|Contour2D
|ContourPolyline2D
|Convolver
|Coordinate
|CoordinateChaser
|CoordinateDamper
|CoordinateDouble
|CoordinateInterpolator
|CoordinateInterpolator2D
|Cylinder
|CylinderSensor
|Delay
|DirectionalLight
|DISEntityManager
|DISEntityTypeMapping
|Disk2D
|DoubleAxisHingeJoint
|DynamicsCompressor
|EaseInEaseOut
|EdgeEnhancementVolumeStyle
|ElevationGrid
|EspduTransform
|ExplosionEmitter
|Extrusion
|FillProperties
|FloatVertexAttribute
|Fog
|FogCoordinate
|FontStyle
|ForcePhysicsModel
|Gain
|GeneratedCubeMapTexture
|GeoCoordinate
|GeoElevationGrid
|GeoLocation
|GeoLOD
|GeoMetadata
|GeoOrigin
|GeoPositionInterpolator
|GeoProximitySensor
|GeoTouchSensor
|GeoTransform
|GeoViewpoint
|Group
|HAnimDisplacer
|HAnimHumanoid
|HAnimJoint
|HAnimMotion
|HAnimSegment
|HAnimSite
|ImageCubeMapTexture
|ImageTexture
|ImageTexture3D
|IndexedFaceSet
|IndexedLineSet
|IndexedQuadSet
|IndexedTriangleFanSet
|IndexedTriangleSet
|IndexedTriangleStripSet
|Inline
|IntegerSequencer
|IntegerTrigger
|IsoSurfaceVolumeData
|KeySensor
|Layer
|LayerSet
|Layout
|LayoutGroup
|LayoutLayer
|LinePickSensor
|LineProperties
|LineSet
|ListenerPointSource
|LoadSensor
|LocalFog
|LOD
|Material
|Matrix3VertexAttribute
|Matrix4VertexAttribute
|MetadataBoolean
|MetadataDouble
|MetadataFloat
|MetadataInteger
|MetadataSet
|MetadataString
|MicrophoneSource
|MotorJoint
|MovieTexture
|MultiTexture
|MultiTextureCoordinate
|MultiTextureTransform
|NavigationInfo
|Normal
|NormalInterpolator
|NurbsCurve
|NurbsCurve2D
|NurbsOrientationInterpolator
|NurbsPatchSurface
|NurbsPositionInterpolator
|NurbsSet
|NurbsSurfaceInterpolator
|NurbsSweptSurface
|NurbsSwungSurface
|NurbsTextureCoordinate
|NurbsTrimmedSurface
|OpacityMapVolumeStyle
|OrientationChaser
|OrientationDamper
|OrientationInterpolator
|OrthoViewpoint
|OscillatorSource
|PackagedShader
|ParticleSystem
|PeriodicWave
|PhysicalMaterial
|PickableGroup
|PixelTexture
|PixelTexture3D
|PlaneSensor
|PointEmitter
|PointLight
|PointPickSensor
|PointProperties
|PointSet
|Polyline2D
|PolylineEmitter
|Polypoint2D
|PositionChaser
|PositionChaser2D
|PositionDamper
|PositionDamper2D
|PositionInterpolator
|PositionInterpolator2D
|PrimitivePickSensor
|ProgramShader
|ProjectionVolumeStyle
|ProtoInstance
|ProximitySensor
|QuadSet
|ReceiverPdu
|Rectangle2D
|RigidBody
|RigidBodyCollection
|ScalarChaser
|ScalarDamper
|ScalarInterpolator
|ScreenFontStyle
|ScreenGroup
|Script
|SegmentedVolumeData
|ShadedVolumeStyle
|ShaderPart
|ShaderProgram
|Shape
|SignalPdu
|SilhouetteEnhancementVolumeStyle
|SingleAxisHingeJoint
|SliderJoint
|Sound
|SpatialSound
|Sphere
|SphereSensor
|SplinePositionInterpolator
|SplinePositionInterpolator2D
|SplineScalarInterpolator
|SpotLight
|SquadOrientationInterpolator
|StaticGroup
|StreamAudioDestination
|StreamAudioSource
|StringSensor
|SurfaceEmitter
|Switch
|TexCoordChaser2D
|TexCoordDamper2D
|Text
|TextureBackground
|TextureCoordinate
|TextureCoordinate3D
|TextureCoordinate4D
|TextureCoordinateGenerator
|TextureProjector
|TextureProjectorParallel
|TextureProperties
|TextureTransform
|TextureTransform3D
|TextureTransformMatrix3D
|TimeSensor
|TimeTrigger
|ToneMappedVolumeStyle
|TouchSensor
|Transform
|TransformSensor
|TransmitterPdu
|TriangleFanSet
|TriangleSet
|TriangleSet2D
|TriangleStripSet
|TwoSidedMaterial
|UniversalJoint
|UnlitMaterial
|Viewpoint
|ViewpointGroup
|Viewport
|VisibilitySensor
|VolumeData
|VolumeEmitter
|VolumePickSensor
|WaveShaper
|WindPhysicsModel
|WorldInfo
)
;
X3DConcreteStatement
(
component
|connect
|EXPORT
|ExternProtoDeclare
|field
|fieldValue
|head
|IMPORT
|IS
|meta
|ProtoBody
|ProtoDeclare
|ProtoInterface
|ROUTE
|Scene
|unit
|X3D
)
;
X3DBoundedObject
(
X3DGroupingNode
|X3DViewportNode
|Viewport
|Anchor
|Billboard
|CADAssembly
|CADLayer
|CADPart
|Collision
|EspduTransform
|GeoLocation
|GeoTransform
|Group
|HAnimSegment
|HAnimSite
|LayoutGroup
|LOD
|PickableGroup
|ScreenGroup
|Switch
|Transform
|X3DNBodyCollidableNode
|CollidableOffset
|CollidableShape
|X3DNBodyCollisionSpaceNode
|CollisionSpace
|X3DShapeNode
|ParticleSystem
|Shape
|X3DVolumeDataNode
|IsoSurfaceVolumeData
|SegmentedVolumeData
|VolumeData
|CADFace
|CollisionCollection
|GeoLOD
|HAnimHumanoid
|HAnimJoint
|Inline
|NurbsSet
|ReceiverPdu
|RigidBody
|RigidBodyCollection
|SignalPdu
|StaticGroup
|TransmitterPdu
)
;
X3DFogObject
(
Fog
|LocalFog
)
;
X3DMetadataObject
(
MetadataBoolean
|MetadataDouble
|MetadataFloat
|MetadataInteger
|MetadataSet
|MetadataString
)
;
X3DPickableObject
(
X3DLayerNode
|Layer
|LayoutLayer
|PickableGroup
)
;
X3DProgrammableShaderObject
(
ComposedShader
|PackagedShader
|ShaderProgram
)
;
X3DUrlObject
(
X3DScriptNode
|Script
|Anchor
|AudioClip
|BufferAudioSource
|DISEntityTypeMapping
|GeoMetadata
|ImageCubeMapTexture
|ImageTexture
|ImageTexture3D
|Inline
|MovieTexture
|PackagedShader
|ShaderPart
|ShaderProgram
)
;
AcousticProperties
: ('DEF' xsID)? 'AcousticProperties' '{'
(
   'absorption' SFFloat
|  'description' SFString
|  'diffuse' SFFloat
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'refraction' SFFloat
|  'specular' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Analyser
: ('DEF' xsID)? 'Analyser' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'fftSize' SFInt32
|  'frequencyBinCount' SFInt32
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'maxDecibels' SFFloat
|  'metadata' (X3DMetadataObject)
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
Anchor
: ('DEF' xsID)? 'Anchor' '{'
(
   'addChildren' (X3DChildNode)*
|  'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'parameter' MFString
|  'removeChildren' (X3DChildNode)*
|  'url' MFString
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Appearance
: ('DEF' xsID)? 'Appearance' '{'
(
   'acousticProperties' (AcousticProperties)
|  'alphaCutoff' unitIntervalType
|  'alphaMode' SFString
|  'fillProperties' (FillProperties)
|  'IS' (IS)
|  'lineProperties' (LineProperties)
|  'material' (X3DMaterialNode)
|  'metadata' (X3DMetadataObject)
|  'pointProperties' (PointProperties)
|  'shaders' (X3DShaderNode)*
|  'texture' (X3DTextureNode)
|  'textureTransform' (X3DTextureTransformNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Arc2D
: ('DEF' xsID)? 'Arc2D' '{'
(
   'endAngle' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'radius' SFFloat
|  'startAngle' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ArcClose2D
: ('DEF' xsID)? 'ArcClose2D' '{'
(
   'closureType' xsNMTOKEN
|  'endAngle' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'radius' SFFloat
|  'solid' SFBool
|  'startAngle' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
AudioClip
: ('DEF' xsID)? 'AudioClip' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'duration_changed' SFTime
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'load' SFBool
|  'loop' SFBool
|  'metadata' (X3DMetadataObject)
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
AudioDestination
: ('DEF' xsID)? 'AudioDestination' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'maxChannelCount' SFInt32
|  'mediaDeviceID' SFString
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Background
: ('DEF' xsID)? 'Background' '{'
(
   'backUrl' MFString
|  'bindTime' SFTime
|  'bottomUrl' MFString
|  'frontUrl' MFString
|  'groundAngle' MFFloat
|  'groundColor' MFColor
|  'IS' (IS)
|  'isBound' SFBool
|  'leftUrl' MFString
|  'metadata' (X3DMetadataObject)
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
BallJoint
: ('DEF' xsID)? 'BallJoint' '{'
(
   'anchorPoint' SFVec3f
|  'body1' (RigidBody)
|  'body1AnchorPoint' SFVec3f
|  'body2' (RigidBody)
|  'body2AnchorPoint' SFVec3f
|  'forceOutput' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Billboard
: ('DEF' xsID)? 'Billboard' '{'
(
   'addChildren' (X3DChildNode)*
|  'axisOfRotation' SFVec3f
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BiquadFilter
: ('DEF' xsID)? 'BiquadFilter' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'detune' SFFloat
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'frequency' SFFloat
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
|  'pauseTime' SFTime
|  'qualityFactor' SFFloat
|  'resumeTime' SFTime
|  'startTime' SFTime
|  'stopTime' SFTime
|  'tailTime' SFTime
|  'type' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BlendedVolumeStyle
: ('DEF' xsID)? 'BlendedVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'renderStyle' (X3DComposableVolumeRenderStyleNode)
|  'voxels' (X3DTexture3DNode)
|  'weightConstant1' SFFloat
|  'weightConstant2' SFFloat
|  'weightFunction1' xsNMTOKEN
|  'weightFunction2' xsNMTOKEN
|  'weightTransferFunction1' (X3DTexture2DNode)
|  'weightTransferFunction2' (X3DTexture2DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BooleanFilter
: ('DEF' xsID)? 'BooleanFilter' '{'
(
   'inputFalse' SFBool
|  'inputNegate' SFBool
|  'inputTrue' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'set_boolean' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BooleanSequencer
: ('DEF' xsID)? 'BooleanSequencer' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFBool
|  'metadata' (X3DMetadataObject)
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
BooleanToggle
: ('DEF' xsID)? 'BooleanToggle' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'set_boolean' SFBool
|  'toggle' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BooleanTrigger
: ('DEF' xsID)? 'BooleanTrigger' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'set_triggerTime' SFTime
|  'triggerTrue' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BoundaryEnhancementVolumeStyle
: ('DEF' xsID)? 'BoundaryEnhancementVolumeStyle' '{'
(
   'boundaryOpacity' SFFloat
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'opacityFactor' SFFloat
|  'retainedOpacity' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BoundedPhysicsModel
: ('DEF' xsID)? 'BoundedPhysicsModel' '{'
(
   'enabled' SFBool
|  'geometry' (X3DGeometryNode)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Box
: ('DEF' xsID)? 'Box' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'size' SFVec3f
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
BufferAudioSource
: ('DEF' xsID)? 'BufferAudioSource' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'buffer' MFFloat
|  'bufferDuration' SFTime
|  'bufferlength' SFInt32
|  'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'description' SFString
|  'detune' SFFloat
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'length' SFInt32
|  'load' SFBool
|  'loop' SFBool
|  'loopEnd' SFFloat
|  'loopStart' SFFloat
|  'metadata' (X3DMetadataObject)
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
CADAssembly
: ('DEF' xsID)? 'CADAssembly' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CADFace
: ('DEF' xsID)? 'CADFace' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'shape' (Shape|LOD|Transform)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CADLayer
: ('DEF' xsID)? 'CADLayer' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CADPart
: ('DEF' xsID)? 'CADPart' '{'
(
   'addChildren' (CADFace)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' (CADFace)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'removeChildren' (CADFace)*
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
CartoonVolumeStyle
: ('DEF' xsID)? 'CartoonVolumeStyle' '{'
(
   'colorSteps' SFInt32
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'orthogonalColor' SFColorRGBA
|  'parallelColor' SFColorRGBA
|  'surfaceNormals' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ChannelMerger
: ('DEF' xsID)? 'ChannelMerger' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ChannelSelector
: ('DEF' xsID)? 'ChannelSelector' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'channelSelection' SFInt32
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ChannelSplitter
: ('DEF' xsID)? 'ChannelSplitter' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'outputs' (X3DSoundChannelNode|X3DSoundProcessingNode|X3DSoundSourceNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Circle2D
: ('DEF' xsID)? 'Circle2D' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'radius' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ClipPlane
: ('DEF' xsID)? 'ClipPlane' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'plane' SFVec4f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CollidableOffset
: ('DEF' xsID)? 'CollidableOffset' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'collidable' (X3DNBodyCollidableNode)
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'rotation' SFRotation
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CollidableShape
: ('DEF' xsID)? 'CollidableShape' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'rotation' SFRotation
|  'shape' (Shape)
|  'translation' SFVec3f
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Collision
: ('DEF' xsID)? 'Collision' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'collideTime' SFTime
|  'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'proxy' (X3DChildNode)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CollisionCollection
: ('DEF' xsID)? 'CollisionCollection' '{'
(
   'appliedParameters' MFString
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'bounce' SFFloat
|  'collidables' (X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode)*
|  'description' SFString
|  'enabled' SFBool
|  'frictionCoefficients' SFVec2f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
CollisionSensor
: ('DEF' xsID)? 'CollisionSensor' '{'
(
   'collider' (CollisionCollection)
|  'contacts' (Contact)*
|  'description' SFString
|  'enabled' SFBool
|  'intersections' (X3DNBodyCollidableNode)*
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CollisionSpace
: ('DEF' xsID)? 'CollisionSpace' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'collidables' (X3DNBodyCollisionSpaceNode|X3DNBodyCollidableNode)*
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'useGeometry' SFBool
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Color
: ('DEF' xsID)? 'Color' '{'
(
   'color' MFColor
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ColorChaser
: ('DEF' xsID)? 'ColorChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFColor
|  'initialValue' SFColor
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' SFColor
|  'set_value' SFColor
|  'value_changed' SFColor
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ColorDamper
: ('DEF' xsID)? 'ColorDamper' '{'
(
   'initialDestination' SFColor
|  'initialValue' SFColor
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
ColorInterpolator
: ('DEF' xsID)? 'ColorInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFColor
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' SFColor
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ColorRGBA
: ('DEF' xsID)? 'ColorRGBA' '{'
(
   'color' MFColorRGBA
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ComposedCubeMapTexture
: ('DEF' xsID)? 'ComposedCubeMapTexture' '{'
(
   'backTexture' (X3DTexture2DNode)
|  'bottomTexture' (X3DTexture2DNode)
|  'description' SFString
|  'frontTexture' (X3DTexture2DNode)
|  'IS' (IS)
|  'leftTexture' (X3DTexture2DNode)
|  'metadata' (X3DMetadataObject)
|  'rightTexture' (X3DTexture2DNode)
|  'topTexture' (X3DTexture2DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ComposedShader
: ('DEF' xsID)? 'ComposedShader' '{'
(
   'activate' SFBool
|  'field' (field)*
|  'IS' (IS)
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'parts' (ShaderPart)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ComposedTexture3D
: ('DEF' xsID)? 'ComposedTexture3D' '{'
(
   'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'repeatR' SFBool
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'texture' (X3DTexture2DNode)*
|  'textureProperties' (TextureProperties)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ComposedVolumeStyle
: ('DEF' xsID)? 'ComposedVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'renderStyle' (X3DComposableVolumeRenderStyleNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Cone
: ('DEF' xsID)? 'Cone' '{'
(
   'bottom' SFBool
|  'bottomRadius' SFFloat
|  'height' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'side' SFBool
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ConeEmitter
: ('DEF' xsID)? 'ConeEmitter' '{'
(
   'angle' SFFloat
|  'direction' SFVec3f
|  'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
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
Contact
: ('DEF' xsID)? 'Contact' '{'
(
   'appliedParameters' MFString
|  'body1' (RigidBody)
|  'body2' (RigidBody)
|  'bounce' SFFloat
|  'contactNormal' SFVec3f
|  'depth' SFFloat
|  'frictionCoefficients' SFVec2f
|  'frictionDirection' SFVec3f
|  'geometry1' (X3DNBodyCollidableNode)
|  'geometry2' (X3DNBodyCollidableNode)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
Contour2D
: ('DEF' xsID)? 'Contour2D' '{'
(
   'addChildren' (NurbsCurve2D|ContourPolyline2D)*
|  'children' (NurbsCurve2D|ContourPolyline2D)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (NurbsCurve2D|ContourPolyline2D)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ContourPolyline2D
: ('DEF' xsID)? 'ContourPolyline2D' '{'
(
   'controlPoint' MFVec2d
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Convolver
: ('DEF' xsID)? 'Convolver' '{'
(
   'buffer' MFFloat
|  'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
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
Coordinate
: ('DEF' xsID)? 'Coordinate' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'point' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CoordinateChaser
: ('DEF' xsID)? 'CoordinateChaser' '{'
(
   'duration' SFTime
|  'initialDestination' MFVec3f
|  'initialValue' MFVec3f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' MFVec3f
|  'set_value' MFVec3f
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CoordinateDamper
: ('DEF' xsID)? 'CoordinateDamper' '{'
(
   'initialDestination' MFVec3f
|  'initialValue' MFVec3f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
CoordinateDouble
: ('DEF' xsID)? 'CoordinateDouble' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'point' MFVec3d
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CoordinateInterpolator
: ('DEF' xsID)? 'CoordinateInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
CoordinateInterpolator2D
: ('DEF' xsID)? 'CoordinateInterpolator2D' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec2f
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Cylinder
: ('DEF' xsID)? 'Cylinder' '{'
(
   'bottom' SFBool
|  'height' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
CylinderSensor
: ('DEF' xsID)? 'CylinderSensor' '{'
(
   'autoOffset' SFBool
|  'axisRotation' SFRotation
|  'description' SFString
|  'diskAngle' SFFloat
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'maxAngle' SFFloat
|  'metadata' (X3DMetadataObject)
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
Delay
: ('DEF' xsID)? 'Delay' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'delayTime' SFTime
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'maxDelayTime' SFTime
|  'metadata' (X3DMetadataObject)
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
DirectionalLight
: ('DEF' xsID)? 'DirectionalLight' '{'
(
   'ambientIntensity' unitIntervalType
|  'color' SFColor
|  'direction' SFVec3f
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'on' SFBool
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
DISEntityManager
: ('DEF' xsID)? 'DISEntityManager' '{'
(
   'addedEntities' (EspduTransform)*
|  'address' SFString
|  'applicationID' SFInt32
|  'children' (DISEntityTypeMapping)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'port' SFInt32
|  'removedEntities' (EspduTransform)*
|  'siteID' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
DISEntityTypeMapping
: ('DEF' xsID)? 'DISEntityTypeMapping' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'category' SFInt32
|  'country' SFInt32
|  'description' SFString
|  'domain' SFInt32
|  'extra' SFInt32
|  'IS' (IS)
|  'kind' SFInt32
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'specific' SFInt32
|  'subcategory' SFInt32
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Disk2D
: ('DEF' xsID)? 'Disk2D' '{'
(
   'innerRadius' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'outerRadius' SFFloat
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
DoubleAxisHingeJoint
: ('DEF' xsID)? 'DoubleAxisHingeJoint' '{'
(
   'anchorPoint' SFVec3f
|  'axis1' SFVec3f
|  'axis2' SFVec3f
|  'body1' (RigidBody)
|  'body1AnchorPoint' SFVec3f
|  'body1Axis' SFVec3f
|  'body2' (RigidBody)
|  'body2AnchorPoint' SFVec3f
|  'body2Axis' SFVec3f
|  'desiredAngularVelocity1' SFFloat
|  'desiredAngularVelocity2' SFFloat
|  'forceOutput' MFString
|  'hinge1Angle' SFFloat
|  'hinge1AngleRate' SFFloat
|  'hinge2Angle' SFFloat
|  'hinge2AngleRate' SFFloat
|  'IS' (IS)
|  'maxAngle1' SFFloat
|  'maxTorque1' SFFloat
|  'maxTorque2' SFFloat
|  'metadata' (X3DMetadataObject)
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
DynamicsCompressor
: ('DEF' xsID)? 'DynamicsCompressor' '{'
(
   'attack' SFTime
|  'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'knee' SFFloat
|  'metadata' (X3DMetadataObject)
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
EaseInEaseOut
: ('DEF' xsID)? 'EaseInEaseOut' '{'
(
   'easeInEaseOut' MFVec2f
|  'IS' (IS)
|  'key' MFFloat
|  'metadata' (X3DMetadataObject)
|  'modifiedFraction_changed' SFFloat
|  'set_fraction' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
EdgeEnhancementVolumeStyle
: ('DEF' xsID)? 'EdgeEnhancementVolumeStyle' '{'
(
   'edgeColor' SFColorRGBA
|  'enabled' SFBool
|  'gradientThreshold' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'surfaceNormals' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ElevationGrid
: ('DEF' xsID)? 'ElevationGrid' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'creaseAngle' SFFloat
|  'fogCoord' (FogCoordinate)
|  'height' MFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'set_height' MFFloat
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode)
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
EspduTransform
: ('DEF' xsID)? 'EspduTransform' '{'
(
   'addChildren' (X3DChildNode)*
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
|  'children' (X3DChildNode)*
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
|  'IS' (IS)
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
|  'metadata' (X3DMetadataObject)
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'munitionApplicationID' SFInt32
|  'munitionEndPoint' SFVec3f
|  'munitionEntityID' SFInt32
|  'munitionQuantity' SFInt32
|  'munitionSiteID' SFInt32
|  'munitionStartPoint' SFVec3f
|  'networkMode' xsNMTOKEN
|  'port' SFInt32
|  'readInterval' SFTime
|  'removeChildren' (X3DChildNode)*
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
ExplosionEmitter
: ('DEF' xsID)? 'ExplosionEmitter' '{'
(
   'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
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
Extrusion
: ('DEF' xsID)? 'Extrusion' '{'
(
   'beginCap' SFBool
|  'ccw' SFBool
|  'convex' SFBool
|  'creaseAngle' SFFloat
|  'crossSection' MFVec2f
|  'endCap' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
FillProperties
: ('DEF' xsID)? 'FillProperties' '{'
(
   'filled' SFBool
|  'hatchColor' SFColor
|  'hatched' SFBool
|  'hatchStyle' SFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
FloatVertexAttribute
: ('DEF' xsID)? 'FloatVertexAttribute' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'numComponents' SFInt32
|  'value' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Fog
: ('DEF' xsID)? 'Fog' '{'
(
   'bindTime' SFTime
|  'color' SFColor
|  'fogType' xsNMTOKEN
|  'IS' (IS)
|  'isBound' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_bind' SFBool
|  'visibilityRange' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
FogCoordinate
: ('DEF' xsID)? 'FogCoordinate' '{'
(
   'depth' MFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
FontStyle
: ('DEF' xsID)? 'FontStyle' '{'
(
   'class' xsNMTOKENS
|  'family' MFString
|  'horizontal' SFBool
|  'id' xsNMTOKEN
|  'IS' (IS)
|  'justify' MFString
|  'language' SFString
|  'leftToRight' SFBool
|  'metadata' (X3DMetadataObject)
|  'size' SFFloat
|  'spacing' SFFloat
|  'style' xsNMTOKEN
|  'topToBottom' SFBool
)*
'}'
| 'USE' xsIDREF;
ForcePhysicsModel
: ('DEF' xsID)? 'ForcePhysicsModel' '{'
(
   'enabled' SFBool
|  'force' SFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Gain
: ('DEF' xsID)? 'Gain' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
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
GeneratedCubeMapTexture
: ('DEF' xsID)? 'GeneratedCubeMapTexture' '{'
(
   'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'size' SFInt32
|  'textureProperties' (TextureProperties)
|  'update' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoCoordinate
: ('DEF' xsID)? 'GeoCoordinate' '{'
(
   'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'point' MFVec3d
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoElevationGrid
: ('DEF' xsID)? 'GeoElevationGrid' '{'
(
   'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'creaseAngle' SFDouble
|  'geoGridOrigin' SFVec3d
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'height' MFDouble
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'set_height' MFFloat
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode)
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
GeoLocation
: ('DEF' xsID)? 'GeoLocation' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'geoCoords' SFVec3d
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoLOD
: ('DEF' xsID)? 'GeoLOD' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3d
|  'child1Url' MFString
|  'child2Url' MFString
|  'child3Url' MFString
|  'child4Url' MFString
|  'children' (X3DChildNode)*
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'level_changed' SFInt32
|  'metadata' (X3DMetadataObject)
|  'range' SFFloat
|  'rootNode' (X3DChildNode)*
|  'rootUrl' MFString
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoMetadata
: ('DEF' xsID)? 'GeoMetadata' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'data' (X3DNode)*
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'summary' MFString
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoOrigin
: ('DEF' xsID)? 'GeoOrigin' '{'
(
   'geoCoords' SFVec3d
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'rotateYUp' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoPositionInterpolator
: ('DEF' xsID)? 'GeoPositionInterpolator' '{'
(
   'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'geovalue_changed' SFVec3d
|  'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec3d
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoProximitySensor
: ('DEF' xsID)? 'GeoProximitySensor' '{'
(
   'center' SFVec3d
|  'centerOfRotation_changed' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'geoCenter' SFVec3d
|  'geoCoord_changed' SFVec3d
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'orientation_changed' SFRotation
|  'position_changed' SFVec3f
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoTouchSensor
: ('DEF' xsID)? 'GeoTouchSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'hitGeoCoord_changed' SFVec3d
|  'hitNormal_changed' SFVec3f
|  'hitPoint_changed' SFVec3f
|  'hitTexCoord_changed' SFVec2f
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' (X3DMetadataObject)
|  'touchTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
GeoTransform
: ('DEF' xsID)? 'GeoTransform' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'geoCenter' SFVec3d
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
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
GeoViewpoint
: ('DEF' xsID)? 'GeoViewpoint' '{'
(
   'bindTime' SFTime
|  'centerOfRotation' SFVec3d
|  'description' SFString
|  'farDistance' SFFloat
|  'fieldOfView' SFFloat
|  'geoOrigin' (GeoOrigin)
|  'geoSystem' geoSystemType
|  'IS' (IS)
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' (X3DMetadataObject)
|  'navigationInfo' (NavigationInfo)
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
Group
: ('DEF' xsID)? 'Group' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
HAnimDisplacer
: ('DEF' xsID)? 'HAnimDisplacer' '{'
(
   'coordIndex' MFInt32
|  'description' SFString
|  'displacements' MFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'weight' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
HAnimHumanoid
: ('DEF' xsID)? 'HAnimHumanoid' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'description' SFString
|  'info' MFString
|  'IS' (IS)
|  'jointBindingPositions' MFVec3f
|  'jointBindingRotations' MFRotation
|  'jointBindingScales' MFVec3f
|  'joints' (HAnimJoint)*
|  'loa' loaType
|  'metadata' (X3DMetadataObject)
|  'motions' (HAnimMotion)*
|  'motionsEnabled' MFBool
|  'name' xsNMTOKEN
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'scaleOrientation' SFRotation
|  'segments' (HAnimSegment)*
|  'sites' (HAnimSite)*
|  'skeletalConfiguration' SFString
|  'skeleton' (HAnimJoint|HAnimSite)*
|  'skin' (Group|Transform|Shape|IndexedFaceSet)*
|  'skinBindingCoords' (Coordinate|CoordinateDouble)
|  'skinBindingNormals' (X3DNormalNode)
|  'skinCoord' (Coordinate|CoordinateDouble)
|  'skinNormal' (X3DNormalNode)
|  'translation' SFVec3f
|  'version' xsNMTOKEN
|  'viewpoints' (HAnimSite)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
HAnimJoint
: ('DEF' xsID)? 'HAnimJoint' '{'
(
   'addChildren' (HAnimJoint|HAnimSegment)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' (HAnimJoint|HAnimSegment)*
|  'description' SFString
|  'displacers' (HAnimDisplacer)*
|  'IS' (IS)
|  'limitOrientation' SFRotation
|  'llimit' MFFloat
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'removeChildren' (HAnimJoint|HAnimSegment)*
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
HAnimMotion
: ('DEF' xsID)? 'HAnimMotion' '{'
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
|  'IS' (IS)
|  'joints' SFString
|  'loa' loaType
|  'loop' SFBool
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'startFrame' SFInt32
|  'values' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
HAnimSegment
: ('DEF' xsID)? 'HAnimSegment' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'centerOfMass' SFVec3f
|  'children' (X3DChildNode)*
|  'coord' (Coordinate|CoordinateDouble)
|  'description' SFString
|  'displacers' (HAnimDisplacer)*
|  'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
|  'momentsOfInertia' MFFloat
|  'name' xsNMTOKEN
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
HAnimSite
: ('DEF' xsID)? 'HAnimSite' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' (X3DChildNode)*
|  'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'removeChildren' (X3DChildNode)*
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
ImageCubeMapTexture
: ('DEF' xsID)? 'ImageCubeMapTexture' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'textureProperties' (TextureProperties)
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ImageTexture
: ('DEF' xsID)? 'ImageTexture' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' (TextureProperties)
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ImageTexture3D
: ('DEF' xsID)? 'ImageTexture3D' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'repeatR' SFBool
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' (TextureProperties)
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IndexedFaceSet
: ('DEF' xsID)? 'IndexedFaceSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorIndex' MFInt32
|  'colorPerVertex' SFBool
|  'convex' SFBool
|  'coord' (X3DCoordinateNode)
|  'coordIndex' MFInt32
|  'creaseAngle' SFFloat
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalIndex' MFInt32
|  'normalPerVertex' SFBool
|  'set_colorIndex' MFInt32
|  'set_coordIndex' MFInt32
|  'set_normalIndex' MFInt32
|  'set_texCoordIndex' MFInt32
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'texCoordIndex' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IndexedLineSet
: ('DEF' xsID)? 'IndexedLineSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'color' (X3DColorNode)
|  'colorIndex' MFInt32
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'coordIndex' MFInt32
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'set_colorIndex' MFInt32
|  'set_coordIndex' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IndexedQuadSet
: ('DEF' xsID)? 'IndexedQuadSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'index' MFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IndexedTriangleFanSet
: ('DEF' xsID)? 'IndexedTriangleFanSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'index' MFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IndexedTriangleSet
: ('DEF' xsID)? 'IndexedTriangleSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'index' MFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IndexedTriangleStripSet
: ('DEF' xsID)? 'IndexedTriangleStripSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'index' MFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'set_index' MFInt32
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Inline
: ('DEF' xsID)? 'Inline' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'description' SFString
|  'global' SFBool
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'url' MFString
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IntegerSequencer
: ('DEF' xsID)? 'IntegerSequencer' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFInt32
|  'metadata' (X3DMetadataObject)
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
IntegerTrigger
: ('DEF' xsID)? 'IntegerTrigger' '{'
(
   'integerKey' SFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'set_boolean' SFBool
|  'triggerValue' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
IsoSurfaceVolumeData
: ('DEF' xsID)? 'IsoSurfaceVolumeData' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'contourStepSize' SFFloat
|  'dimensions' SFVec3f
|  'gradients' (X3DTexture3DNode)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'renderStyle' (X3DVolumeRenderStyleNode)*
|  'surfaceTolerance' SFFloat
|  'surfaceValues' MFFloat
|  'visible' SFBool
|  'voxels' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
KeySensor
: ('DEF' xsID)? 'KeySensor' '{'
(
   'actionKeyPress' SFInt32
|  'actionKeyRelease' SFInt32
|  'altKey' SFBool
|  'controlKey' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'keyPress' SFString
|  'keyRelease' SFString
|  'metadata' (X3DMetadataObject)
|  'shiftKey' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Layer
: ('DEF' xsID)? 'Layer' '{'
(
   'addChildren' (X3DChildNode)*
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickable' SFBool
|  'removeChildren' (X3DChildNode)*
|  'viewport' (X3DViewportNode)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LayerSet
: ('DEF' xsID)? 'LayerSet' '{'
(
   'activeLayer' SFInt32
|  'IS' (IS)
|  'layers' (X3DLayerNode)*
|  'metadata' (X3DMetadataObject)
|  'order' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Layout
: ('DEF' xsID)? 'Layout' '{'
(
   'align' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'offset' MFFloat
|  'offsetUnits' MFString
|  'scaleMode' MFString
|  'size' MFFloat
|  'sizeUnits' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LayoutGroup
: ('DEF' xsID)? 'LayoutGroup' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'layout' (X3DLayoutNode)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'viewport' (X3DViewportNode)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LayoutLayer
: ('DEF' xsID)? 'LayoutLayer' '{'
(
   'addChildren' (X3DChildNode)*
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'layout' (X3DLayoutNode)
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickable' SFBool
|  'removeChildren' (X3DChildNode)*
|  'viewport' (X3DViewportNode)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LinePickSensor
: ('DEF' xsID)? 'LinePickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' xsNMTOKEN
|  'IS' (IS)
|  'isActive' SFBool
|  'matchCriterion' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickedGeometry' (X3DChildNode)*
|  'pickedNormal' MFVec3f
|  'pickedPoint' MFVec3f
|  'pickedTextureCoordinate' MFVec3f
|  'pickingGeometry' (X3DGeometryNode)
|  'pickTarget' (X3DGroupingNode|X3DShapeNode|Inline)*
|  'sortOrder' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LineProperties
: ('DEF' xsID)? 'LineProperties' '{'
(
   'applied' SFBool
|  'IS' (IS)
|  'linetype' SFInt32
|  'linewidthScaleFactor' SFFloat
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LineSet
: ('DEF' xsID)? 'LineSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'color' (X3DColorNode)
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'vertexCount' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ListenerPointSource
: ('DEF' xsID)? 'ListenerPointSource' '{'
(
   'description' SFString
|  'dopplerEnabled' SFBool
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'interauralDistance' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
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
LoadSensor
: ('DEF' xsID)? 'LoadSensor' '{'
(
   'children' (X3DUrlObject)*
|  'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'isLoaded' SFBool
|  'loadTime' SFTime
|  'metadata' (X3DMetadataObject)
|  'progress' SFFloat
|  'timeOut' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LocalFog
: ('DEF' xsID)? 'LocalFog' '{'
(
   'color' SFColor
|  'enabled' SFBool
|  'fogType' xsNMTOKEN
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'visibilityRange' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
LOD
: ('DEF' xsID)? 'LOD' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' (X3DChildNode)*
|  'forceTransitions' SFBool
|  'IS' (IS)
|  'level_changed' SFInt32
|  'metadata' (X3DMetadataObject)
|  'range' MFFloat
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Material
: ('DEF' xsID)? 'Material' '{'
(
   'ambientIntensity' unitIntervalType
|  'ambientTexture' (X3DSingleTextureNode)
|  'ambientTextureMapping' xsNMTOKEN
|  'diffuseColor' SFColor
|  'diffuseTexture' (X3DSingleTextureNode)
|  'diffuseTextureMapping' xsNMTOKEN
|  'emissiveColor' SFColor
|  'emissiveTexture' (X3DSingleTextureNode)
|  'emissiveTextureMapping' xsNMTOKEN
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normalScale' SFFloat
|  'normalTexture' (X3DSingleTextureNode)
|  'normalTextureMapping' xsNMTOKEN
|  'occlusionStrength' unitIntervalType
|  'occlusionTexture' (X3DSingleTextureNode)
|  'occlusionTextureMapping' xsNMTOKEN
|  'shininess' unitIntervalType
|  'shininessTexture' (X3DSingleTextureNode)
|  'shininessTextureMapping' xsNMTOKEN
|  'specularColor' SFColor
|  'specularTexture' (X3DSingleTextureNode)
|  'specularTextureMapping' xsNMTOKEN
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Matrix3VertexAttribute
: ('DEF' xsID)? 'Matrix3VertexAttribute' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'value' MFMatrix3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Matrix4VertexAttribute
: ('DEF' xsID)? 'Matrix4VertexAttribute' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'value' MFMatrix4f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MetadataBoolean
: ('DEF' xsID)? 'MetadataBoolean' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'reference' SFString
|  'value' MFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MetadataDouble
: ('DEF' xsID)? 'MetadataDouble' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'reference' SFString
|  'value' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MetadataFloat
: ('DEF' xsID)? 'MetadataFloat' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'reference' SFString
|  'value' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MetadataInteger
: ('DEF' xsID)? 'MetadataInteger' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'reference' SFString
|  'value' MFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MetadataSet
: ('DEF' xsID)? 'MetadataSet' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'reference' SFString
|  'value' (X3DMetadataObject)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MetadataString
: ('DEF' xsID)? 'MetadataString' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'reference' SFString
|  'value' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MicrophoneSource
: ('DEF' xsID)? 'MicrophoneSource' '{'
(
   'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'mediaDeviceID' SFString
|  'metadata' (X3DMetadataObject)
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
MotorJoint
: ('DEF' xsID)? 'MotorJoint' '{'
(
   'autoCalc' SFBool
|  'axis1Angle' SFFloat
|  'axis1Torque' SFFloat
|  'axis2Angle' SFFloat
|  'axis2Torque' SFFloat
|  'axis3Angle' SFFloat
|  'axis3Torque' SFFloat
|  'body1' (RigidBody)
|  'body2' (RigidBody)
|  'enabledAxes' SFInt32
|  'forceOutput' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
MovieTexture
: ('DEF' xsID)? 'MovieTexture' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'duration_changed' SFTime
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'load' SFBool
|  'loop' SFBool
|  'metadata' (X3DMetadataObject)
|  'pauseTime' SFTime
|  'pitch' SFFloat
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'resumeTime' SFTime
|  'speed' SFFloat
|  'startTime' SFTime
|  'stopTime' SFTime
|  'textureProperties' (TextureProperties)
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MultiTexture
: ('DEF' xsID)? 'MultiTexture' '{'
(
   'alpha' SFFloat
|  'color' SFColor
|  'description' SFString
|  'function' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'mode' MFString
|  'source' MFString
|  'texture' (X3DSingleTextureNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MultiTextureCoordinate
: ('DEF' xsID)? 'MultiTextureCoordinate' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'texCoord' (X3DSingleTextureCoordinateNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
MultiTextureTransform
: ('DEF' xsID)? 'MultiTextureTransform' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'textureTransform' (X3DSingleTextureTransformNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NavigationInfo
: ('DEF' xsID)? 'NavigationInfo' '{'
(
   'avatarSize' MFFloat
|  'bindTime' SFTime
|  'headlight' SFBool
|  'IS' (IS)
|  'isBound' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_bind' SFBool
|  'speed' SFFloat
|  'transitionComplete' SFBool
|  'transitionTime' SFTime
|  'transitionType' MFString
|  'type' MFString
|  'visibilityLimit' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Normal
: ('DEF' xsID)? 'Normal' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'vector' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NormalInterpolator
: ('DEF' xsID)? 'NormalInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NurbsCurve
: ('DEF' xsID)? 'NurbsCurve' '{'
(
   'closed' SFBool
|  'controlPoint' (Coordinate|CoordinateDouble)
|  'IS' (IS)
|  'knot' MFDouble
|  'metadata' (X3DMetadataObject)
|  'order' SFInt32
|  'tessellation' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NurbsCurve2D
: ('DEF' xsID)? 'NurbsCurve2D' '{'
(
   'closed' SFBool
|  'controlPoint' MFVec2d
|  'IS' (IS)
|  'knot' MFDouble
|  'metadata' (X3DMetadataObject)
|  'order' SFInt32
|  'tessellation' SFInt32
|  'weight' MFDouble
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NurbsOrientationInterpolator
: ('DEF' xsID)? 'NurbsOrientationInterpolator' '{'
(
   'controlPoint' (Coordinate|CoordinateDouble)
|  'IS' (IS)
|  'knot' MFDouble
|  'metadata' (X3DMetadataObject)
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
NurbsPatchSurface
: ('DEF' xsID)? 'NurbsPatchSurface' '{'
(
   'controlPoint' (Coordinate|CoordinateDouble)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|NurbsTextureCoordinate)
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
NurbsPositionInterpolator
: ('DEF' xsID)? 'NurbsPositionInterpolator' '{'
(
   'controlPoint' (Coordinate|CoordinateDouble)
|  'IS' (IS)
|  'knot' MFDouble
|  'metadata' (X3DMetadataObject)
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
NurbsSet
: ('DEF' xsID)? 'NurbsSet' '{'
(
   'addGeometry' (X3DParametricGeometryNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'geometry' (X3DParametricGeometryNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeGeometry' (X3DParametricGeometryNode)*
|  'tessellationScale' SFFloat
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NurbsSurfaceInterpolator
: ('DEF' xsID)? 'NurbsSurfaceInterpolator' '{'
(
   'controlPoint' (Coordinate|CoordinateDouble)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
NurbsSweptSurface
: ('DEF' xsID)? 'NurbsSweptSurface' '{'
(
   'ccw' SFBool
|  'crossSectionCurve' (X3DNurbsControlCurveNode)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'solid' SFBool
|  'trajectoryCurve' (NurbsCurve)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NurbsSwungSurface
: ('DEF' xsID)? 'NurbsSwungSurface' '{'
(
   'ccw' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'profileCurve' (X3DNurbsControlCurveNode)
|  'solid' SFBool
|  'trajectoryCurve' (X3DNurbsControlCurveNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
NurbsTextureCoordinate
: ('DEF' xsID)? 'NurbsTextureCoordinate' '{'
(
   'controlPoint' MFVec2f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
NurbsTrimmedSurface
: ('DEF' xsID)? 'NurbsTrimmedSurface' '{'
(
   'addTrimmingContour' (Contour2D)*
|  'controlPoint' (Coordinate|CoordinateDouble)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeTrimmingContour' (Contour2D)*
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|NurbsTextureCoordinate)
|  'trimmingContour' (Contour2D)*
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
OpacityMapVolumeStyle
: ('DEF' xsID)? 'OpacityMapVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'transferFunction' (X3DTexture2DNode|X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
OrientationChaser
: ('DEF' xsID)? 'OrientationChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFRotation
|  'initialValue' SFRotation
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' SFRotation
|  'set_value' SFRotation
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
OrientationDamper
: ('DEF' xsID)? 'OrientationDamper' '{'
(
   'initialDestination' SFRotation
|  'initialValue' SFRotation
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
OrientationInterpolator
: ('DEF' xsID)? 'OrientationInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFRotation
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
OrthoViewpoint
: ('DEF' xsID)? 'OrthoViewpoint' '{'
(
   'bindTime' SFTime
|  'centerOfRotation' SFVec3f
|  'description' SFString
|  'farDistance' SFFloat
|  'fieldOfView' SFVec4f
|  'IS' (IS)
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' (X3DMetadataObject)
|  'navigationInfo' (NavigationInfo)
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
OscillatorSource
: ('DEF' xsID)? 'OscillatorSource' '{'
(
   'description' SFString
|  'detune' SFFloat
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'frequency' SFFloat
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
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
PackagedShader
: ('DEF' xsID)? 'PackagedShader' '{'
(
   'activate' SFBool
|  'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'field' (field)*
|  'IS' (IS)
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' xsNMTOKEN
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ParticleSystem
: ('DEF' xsID)? 'ParticleSystem' '{'
(
   'appearance' (X3DAppearanceNode)
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'castShadow' SFBool
|  'color' (X3DColorNode)*
|  'colorKey' MFFloat
|  'createParticles' SFBool
|  'emitter' (X3DParticleEmitterNode)
|  'enabled' SFBool
|  'geometry' (X3DGeometryNode)
|  'geometryType' xsNMTOKEN
|  'IS' (IS)
|  'isActive' SFBool
|  'lifetimeVariation' SFFloat
|  'maxParticles' SFInt32
|  'metadata' (X3DMetadataObject)
|  'particleLifetime' SFFloat
|  'particleSize' SFVec2f
|  'physics' (X3DParticlePhysicsModelNode)*
|  'texCoord' (TextureCoordinate|TextureCoordinateGenerator)
|  'texCoordKey' MFFloat
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PeriodicWave
: ('DEF' xsID)? 'PeriodicWave' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'optionsImag' MFFloat
|  'optionsReal' MFFloat
|  'type' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PhysicalMaterial
: ('DEF' xsID)? 'PhysicalMaterial' '{'
(
   'baseColor' SFColor
|  'baseTexture' (X3DSingleTextureNode)
|  'baseTextureMapping' xsNMTOKEN
|  'emissiveColor' SFColor
|  'emissiveTexture' (X3DSingleTextureNode)
|  'emissiveTextureMapping' xsNMTOKEN
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'metallic' unitIntervalType
|  'metallicRoughnessTexture' (X3DSingleTextureNode)
|  'metallicRoughnessTextureMapping' xsNMTOKEN
|  'normalScale' SFFloat
|  'normalTexture' (X3DSingleTextureNode)
|  'normalTextureMapping' xsNMTOKEN
|  'occlusionStrength' unitIntervalType
|  'occlusionTexture' (X3DSingleTextureNode)
|  'occlusionTextureMapping' xsNMTOKEN
|  'roughness' unitIntervalType
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PickableGroup
: ('DEF' xsID)? 'PickableGroup' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickable' SFBool
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PixelTexture
: ('DEF' xsID)? 'PixelTexture' '{'
(
   'description' SFString
|  'image' SFImage
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' (TextureProperties)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PixelTexture3D
: ('DEF' xsID)? 'PixelTexture3D' '{'
(
   'description' SFString
|  'image' MFInt32
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'repeatR' SFBool
|  'repeatS' SFBool
|  'repeatT' SFBool
|  'textureProperties' (TextureProperties)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PlaneSensor
: ('DEF' xsID)? 'PlaneSensor' '{'
(
   'autoOffset' SFBool
|  'axisRotation' SFRotation
|  'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'maxPosition' SFVec2f
|  'metadata' (X3DMetadataObject)
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
PointEmitter
: ('DEF' xsID)? 'PointEmitter' '{'
(
   'direction' SFVec3f
|  'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
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
PointLight
: ('DEF' xsID)? 'PointLight' '{'
(
   'ambientIntensity' unitIntervalType
|  'attenuation' SFVec3f
|  'color' SFColor
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' (IS)
|  'location' SFVec3f
|  'metadata' (X3DMetadataObject)
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
PointPickSensor
: ('DEF' xsID)? 'PointPickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' xsNMTOKEN
|  'IS' (IS)
|  'isActive' SFBool
|  'matchCriterion' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickedGeometry' (X3DChildNode)*
|  'pickedPoint' MFVec3f
|  'pickingGeometry' (X3DGeometryNode)
|  'pickTarget' (X3DGroupingNode|X3DShapeNode|Inline)*
|  'sortOrder' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PointProperties
: ('DEF' xsID)? 'PointProperties' '{'
(
   'attenuation' SFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'pointSizeMaxValue' SFFloat
|  'pointSizeMinValue' SFFloat
|  'pointSizeScaleFactor' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PointSet
: ('DEF' xsID)? 'PointSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'color' (X3DColorNode)
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Polyline2D
: ('DEF' xsID)? 'Polyline2D' '{'
(
   'IS' (IS)
|  'lineSegments' MFVec2f
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PolylineEmitter
: ('DEF' xsID)? 'PolylineEmitter' '{'
(
   'coord' (X3DCoordinateNode)
|  'coordIndex' MFInt32
|  'direction' SFVec3f
|  'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
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
Polypoint2D
: ('DEF' xsID)? 'Polypoint2D' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'point' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PositionChaser
: ('DEF' xsID)? 'PositionChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFVec3f
|  'initialValue' SFVec3f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' SFVec3f
|  'set_value' SFVec3f
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PositionChaser2D
: ('DEF' xsID)? 'PositionChaser2D' '{'
(
   'duration' SFTime
|  'initialDestination' SFVec2f
|  'initialValue' SFVec2f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' SFVec2f
|  'set_value' SFVec2f
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PositionDamper
: ('DEF' xsID)? 'PositionDamper' '{'
(
   'initialDestination' SFVec3f
|  'initialValue' SFVec3f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
PositionDamper2D
: ('DEF' xsID)? 'PositionDamper2D' '{'
(
   'initialDestination' SFVec2f
|  'initialValue' SFVec2f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
PositionInterpolator
: ('DEF' xsID)? 'PositionInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PositionInterpolator2D
: ('DEF' xsID)? 'PositionInterpolator2D' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec2f
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
PrimitivePickSensor
: ('DEF' xsID)? 'PrimitivePickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' xsNMTOKEN
|  'IS' (IS)
|  'isActive' SFBool
|  'matchCriterion' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickedGeometry' (X3DChildNode)*
|  'pickingGeometry' (X3DGeometryNode)
|  'pickTarget' (X3DGroupingNode|X3DShapeNode|Inline)*
|  'sortOrder' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ProgramShader
: ('DEF' xsID)? 'ProgramShader' '{'
(
   'activate' SFBool
|  'IS' (IS)
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'programs' (ShaderProgram)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ProjectionVolumeStyle
: ('DEF' xsID)? 'ProjectionVolumeStyle' '{'
(
   'enabled' SFBool
|  'intensityThreshold' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'type' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ProtoInstance
: ('DEF' xsID)? 'ProtoInstance' '{'
(
   'fieldValue' (fieldValue)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ProximitySensor
: ('DEF' xsID)? 'ProximitySensor' '{'
(
   'center' SFVec3f
|  'centerOfRotation_changed' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'orientation_changed' SFRotation
|  'position_changed' SFVec3f
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
QuadSet
: ('DEF' xsID)? 'QuadSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ReceiverPdu
: ('DEF' xsID)? 'ReceiverPdu' '{'
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
|  'IS' (IS)
|  'isActive' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'metadata' (X3DMetadataObject)
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'networkMode' xsNMTOKEN
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
Rectangle2D
: ('DEF' xsID)? 'Rectangle2D' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'size' SFVec2f
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
RigidBody
: ('DEF' xsID)? 'RigidBody' '{'
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
|  'geometry' (X3DNBodyCollidableNode)*
|  'inertia' SFMatrix3f
|  'IS' (IS)
|  'linearDampingFactor' SFFloat
|  'linearVelocity' SFVec3f
|  'mass' SFFloat
|  'massDensityModel' (Sphere|Box|Cone)
|  'metadata' (X3DMetadataObject)
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
RigidBodyCollection
: ('DEF' xsID)? 'RigidBodyCollection' '{'
(
   'autoDisable' SFBool
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'bodies' (RigidBody)*
|  'collider' (CollisionCollection)
|  'constantForceMix' SFFloat
|  'contactSurfaceThickness' SFFloat
|  'disableAngularSpeed' SFFloat
|  'disableLinearSpeed' SFFloat
|  'disableTime' SFTime
|  'enabled' SFBool
|  'errorCorrection' SFFloat
|  'gravity' SFVec3f
|  'IS' (IS)
|  'iterations' SFInt32
|  'joints' (X3DRigidJointNode)*
|  'maxCorrectionSpeed' SFFloat
|  'metadata' (X3DMetadataObject)
|  'preferAccuracy' SFBool
|  'set_contacts' (Contact)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ScalarChaser
: ('DEF' xsID)? 'ScalarChaser' '{'
(
   'duration' SFTime
|  'initialDestination' SFFloat
|  'initialValue' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' SFFloat
|  'set_value' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ScalarDamper
: ('DEF' xsID)? 'ScalarDamper' '{'
(
   'initialDestination' SFFloat
|  'initialValue' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
ScalarInterpolator
: ('DEF' xsID)? 'ScalarInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFFloat
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ScreenFontStyle
: ('DEF' xsID)? 'ScreenFontStyle' '{'
(
   'class' xsNMTOKENS
|  'family' MFString
|  'horizontal' SFBool
|  'id' xsNMTOKEN
|  'IS' (IS)
|  'justify' MFString
|  'language' SFString
|  'leftToRight' SFBool
|  'metadata' (X3DMetadataObject)
|  'pointSize' SFFloat
|  'spacing' SFFloat
|  'style' xsNMTOKEN
|  'topToBottom' SFBool
)*
'}'
| 'USE' xsIDREF;
ScreenGroup
: ('DEF' xsID)? 'ScreenGroup' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Script
: ('DEF' xsID)? 'Script' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'directOutput' SFBool
|  'field' (field)*
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'mustEvaluate' SFBool
|  'sourceCode' xsstring
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SegmentedVolumeData
: ('DEF' xsID)? 'SegmentedVolumeData' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'dimensions' SFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'renderStyle' (X3DVolumeRenderStyleNode)*
|  'segmentEnabled' MFBool
|  'segmentIdentifiers' (X3DTexture3DNode)
|  'visible' SFBool
|  'voxels' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ShadedVolumeStyle
: ('DEF' xsID)? 'ShadedVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'lighting' SFBool
|  'material' (X3DMaterialNode)
|  'metadata' (X3DMetadataObject)
|  'phaseFunction' SFString
|  'shadows' SFBool
|  'surfaceNormals' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ShaderPart
: ('DEF' xsID)? 'ShaderPart' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'sourceCode' xsstring
|  'type' xsNMTOKEN
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ShaderProgram
: ('DEF' xsID)? 'ShaderProgram' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'field' (field)*
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'sourceCode' xsstring
|  'type' xsNMTOKEN
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Shape
: ('DEF' xsID)? 'Shape' '{'
(
   'appearance' (X3DAppearanceNode)
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'castShadow' SFBool
|  'geometry' (X3DGeometryNode)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SignalPdu
: ('DEF' xsID)? 'SignalPdu' '{'
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
|  'IS' (IS)
|  'isActive' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'metadata' (X3DMetadataObject)
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'networkMode' xsNMTOKEN
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
SilhouetteEnhancementVolumeStyle
: ('DEF' xsID)? 'SilhouetteEnhancementVolumeStyle' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'silhouetteBoundaryOpacity' SFFloat
|  'silhouetteRetainedOpacity' SFFloat
|  'silhouetteSharpness' SFFloat
|  'surfaceNormals' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SingleAxisHingeJoint
: ('DEF' xsID)? 'SingleAxisHingeJoint' '{'
(
   'anchorPoint' SFVec3f
|  'angle' SFFloat
|  'angleRate' SFFloat
|  'axis' SFVec3f
|  'body1' (RigidBody)
|  'body1AnchorPoint' SFVec3f
|  'body2' (RigidBody)
|  'body2AnchorPoint' SFVec3f
|  'forceOutput' MFString
|  'IS' (IS)
|  'maxAngle' SFFloat
|  'metadata' (X3DMetadataObject)
|  'minAngle' SFFloat
|  'stopBounce' SFFloat
|  'stopErrorCorrection' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SliderJoint
: ('DEF' xsID)? 'SliderJoint' '{'
(
   'axis' SFVec3f
|  'body1' (RigidBody)
|  'body2' (RigidBody)
|  'forceOutput' MFString
|  'IS' (IS)
|  'maxSeparation' SFFloat
|  'metadata' (X3DMetadataObject)
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
Sound
: ('DEF' xsID)? 'Sound' '{'
(
   'description' SFString
|  'direction' SFVec3f
|  'enabled' SFBool
|  'intensity' unitIntervalType
|  'IS' (IS)
|  'location' SFVec3f
|  'maxBack' SFFloat
|  'maxFront' SFFloat
|  'metadata' (X3DMetadataObject)
|  'minBack' SFFloat
|  'minFront' SFFloat
|  'priority' unitIntervalType
|  'source' (X3DSoundSourceNode)
|  'spatialize' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SpatialSound
: ('DEF' xsID)? 'SpatialSound' '{'
(
   'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'coneInnerAngle' SFFloat
|  'coneOuterAngle' SFFloat
|  'coneOuterGain' SFFloat
|  'description' SFString
|  'direction' SFVec3f
|  'distanceModel' SFString
|  'dopplerEnabled' SFBool
|  'enabled' SFBool
|  'enableHRTF' SFBool
|  'gain' SFFloat
|  'intensity' unitIntervalType
|  'IS' (IS)
|  'location' SFVec3f
|  'maxDistance' SFFloat
|  'metadata' (X3DMetadataObject)
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
Sphere
: ('DEF' xsID)? 'Sphere' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'radius' SFFloat
|  'solid' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SphereSensor
: ('DEF' xsID)? 'SphereSensor' '{'
(
   'autoOffset' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' (X3DMetadataObject)
|  'offset' SFRotation
|  'rotation_changed' SFRotation
|  'trackPoint_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SplinePositionInterpolator
: ('DEF' xsID)? 'SplinePositionInterpolator' '{'
(
   'closed' SFBool
|  'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec3f
|  'keyVelocity' MFVec3f
|  'metadata' (X3DMetadataObject)
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SplinePositionInterpolator2D
: ('DEF' xsID)? 'SplinePositionInterpolator2D' '{'
(
   'closed' SFBool
|  'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFVec2f
|  'keyVelocity' MFVec2f
|  'metadata' (X3DMetadataObject)
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SplineScalarInterpolator
: ('DEF' xsID)? 'SplineScalarInterpolator' '{'
(
   'closed' SFBool
|  'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFFloat
|  'keyVelocity' MFFloat
|  'metadata' (X3DMetadataObject)
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SpotLight
: ('DEF' xsID)? 'SpotLight' '{'
(
   'ambientIntensity' unitIntervalType
|  'attenuation' SFVec3f
|  'beamWidth' SFFloat
|  'color' SFColor
|  'cutOffAngle' SFFloat
|  'direction' SFVec3f
|  'global' SFBool
|  'intensity' SFFloat
|  'IS' (IS)
|  'location' SFVec3f
|  'metadata' (X3DMetadataObject)
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
SquadOrientationInterpolator
: ('DEF' xsID)? 'SquadOrientationInterpolator' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'keyValue' MFRotation
|  'metadata' (X3DMetadataObject)
|  'normalizeVelocity' SFBool
|  'set_fraction' SFFloat
|  'value_changed' SFRotation
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
StaticGroup
: ('DEF' xsID)? 'StaticGroup' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
StreamAudioDestination
: ('DEF' xsID)? 'StreamAudioDestination' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'mediaDeviceID' SFString
|  'metadata' (X3DMetadataObject)
|  'streamIdentifier' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
StreamAudioSource
: ('DEF' xsID)? 'StreamAudioSource' '{'
(
   'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
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
StringSensor
: ('DEF' xsID)? 'StringSensor' '{'
(
   'deletionAllowed' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'enteredText' SFString
|  'finalText' SFString
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
SurfaceEmitter
: ('DEF' xsID)? 'SurfaceEmitter' '{'
(
   'coordIndex' MFInt32
|  'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
|  'on' SFBool
|  'set_coordIndex' MFInt32
|  'speed' SFFloat
|  'surface' (X3DGeometryNode)
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Switch
: ('DEF' xsID)? 'Switch' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'whichChoice' SFInt32
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TexCoordChaser2D
: ('DEF' xsID)? 'TexCoordChaser2D' '{'
(
   'duration' SFTime
|  'initialDestination' MFVec2f
|  'initialValue' MFVec2f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_destination' MFVec2f
|  'set_value' MFVec2f
|  'value_changed' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TexCoordDamper2D
: ('DEF' xsID)? 'TexCoordDamper2D' '{'
(
   'initialDestination' MFVec2f
|  'initialValue' MFVec2f
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
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
Text
: ('DEF' xsID)? 'Text' '{'
(
   'fontStyle' (X3DFontStyleNode)
|  'IS' (IS)
|  'length' MFFloat
|  'lineBounds' MFVec2f
|  'maxExtent' SFFloat
|  'metadata' (X3DMetadataObject)
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
TextureBackground
: ('DEF' xsID)? 'TextureBackground' '{'
(
   'backTexture' (X3DTexture2DNode|MultiTexture)
|  'bindTime' SFTime
|  'bottomTexture' (X3DTexture2DNode|MultiTexture)
|  'frontTexture' (X3DTexture2DNode|MultiTexture)
|  'groundAngle' MFFloat
|  'groundColor' MFColor
|  'IS' (IS)
|  'isBound' SFBool
|  'leftTexture' (X3DTexture2DNode|MultiTexture)
|  'metadata' (X3DMetadataObject)
|  'rightTexture' (X3DTexture2DNode|MultiTexture)
|  'set_bind' SFBool
|  'skyAngle' MFFloat
|  'skyColor' MFColor
|  'topTexture' (X3DTexture2DNode|MultiTexture)
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureCoordinate
: ('DEF' xsID)? 'TextureCoordinate' '{'
(
   'IS' (IS)
|  'mapping' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'point' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureCoordinate3D
: ('DEF' xsID)? 'TextureCoordinate3D' '{'
(
   'IS' (IS)
|  'mapping' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'point' MFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureCoordinate4D
: ('DEF' xsID)? 'TextureCoordinate4D' '{'
(
   'IS' (IS)
|  'mapping' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'point' MFVec4f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureCoordinateGenerator
: ('DEF' xsID)? 'TextureCoordinateGenerator' '{'
(
   'IS' (IS)
|  'mapping' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'mode' xsNMTOKEN
|  'parameter' MFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureProjector
: ('DEF' xsID)? 'TextureProjector' '{'
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
|  'IS' (IS)
|  'location' SFVec3f
|  'metadata' (X3DMetadataObject)
|  'nearDistance' SFFloat
|  'on' SFBool
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'texture' (X3DTexture2DNode)
|  'upVector' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureProjectorParallel
: ('DEF' xsID)? 'TextureProjectorParallel' '{'
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
|  'IS' (IS)
|  'location' SFVec3f
|  'metadata' (X3DMetadataObject)
|  'nearDistance' SFFloat
|  'on' SFBool
|  'shadowIntensity' unitIntervalType
|  'shadows' SFBool
|  'texture' (X3DTexture2DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureProperties
: ('DEF' xsID)? 'TextureProperties' '{'
(
   'anisotropicDegree' SFFloat
|  'borderColor' SFColorRGBA
|  'borderWidth' SFInt32
|  'boundaryModeR' xsNMTOKEN
|  'boundaryModeS' xsNMTOKEN
|  'boundaryModeT' xsNMTOKEN
|  'generateMipMaps' SFBool
|  'IS' (IS)
|  'magnificationFilter' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'minificationFilter' xsNMTOKEN
|  'textureCompression' xsNMTOKEN
|  'texturePriority' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureTransform
: ('DEF' xsID)? 'TextureTransform' '{'
(
   'center' SFVec2f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'rotation' SFFloat
|  'scale' SFVec2f
|  'translation' SFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureTransform3D
: ('DEF' xsID)? 'TextureTransform3D' '{'
(
   'center' SFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'rotation' SFRotation
|  'scale' SFVec3f
|  'translation' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TextureTransformMatrix3D
: ('DEF' xsID)? 'TextureTransformMatrix3D' '{'
(
   'IS' (IS)
|  'matrix' SFMatrix4f
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TimeSensor
: ('DEF' xsID)? 'TimeSensor' '{'
(
   'cycleInterval' SFTime
|  'cycleTime' SFTime
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'fraction_changed' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'loop' SFBool
|  'metadata' (X3DMetadataObject)
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
TimeTrigger
: ('DEF' xsID)? 'TimeTrigger' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'set_boolean' SFBool
|  'triggerTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ToneMappedVolumeStyle
: ('DEF' xsID)? 'ToneMappedVolumeStyle' '{'
(
   'coolColor' SFColorRGBA
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'surfaceNormals' (X3DTexture3DNode)
|  'warmColor' SFColorRGBA
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TouchSensor
: ('DEF' xsID)? 'TouchSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'hitNormal_changed' SFVec3f
|  'hitPoint_changed' SFVec3f
|  'hitTexCoord_changed' SFVec2f
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' (X3DMetadataObject)
|  'touchTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Transform
: ('DEF' xsID)? 'Transform' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'center' SFVec3f
|  'children' (X3DChildNode)*
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
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
TransformSensor
: ('DEF' xsID)? 'TransformSensor' '{'
(
   'center' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'orientation_changed' SFRotation
|  'position_changed' SFVec3f
|  'size' SFVec3f
|  'targetObject' (X3DGroupingNode|X3DShapeNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TransmitterPdu
: ('DEF' xsID)? 'TransmitterPdu' '{'
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
|  'IS' (IS)
|  'isActive' SFBool
|  'isNetworkReader' SFBool
|  'isNetworkWriter' SFBool
|  'isRtpHeaderHeard' SFBool
|  'isStandAlone' SFBool
|  'lengthOfModulationParameters' SFInt32
|  'metadata' (X3DMetadataObject)
|  'modulationTypeDetail' SFInt32
|  'modulationTypeMajor' SFInt32
|  'modulationTypeSpreadSpectrum' SFInt32
|  'modulationTypeSystem' SFInt32
|  'multicastRelayHost' SFString
|  'multicastRelayPort' SFInt32
|  'networkMode' xsNMTOKEN
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
TriangleFanSet
: ('DEF' xsID)? 'TriangleFanSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fanCount' MFInt32
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TriangleSet
: ('DEF' xsID)? 'TriangleSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TriangleSet2D
: ('DEF' xsID)? 'TriangleSet2D' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'solid' SFBool
|  'vertices' MFVec2f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TriangleStripSet
: ('DEF' xsID)? 'TriangleStripSet' '{'
(
   'attrib' (X3DVertexAttributeNode)*
|  'ccw' SFBool
|  'color' (X3DColorNode)
|  'colorPerVertex' SFBool
|  'coord' (X3DCoordinateNode)
|  'fogCoord' (FogCoordinate)
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normal' (X3DNormalNode)
|  'normalPerVertex' SFBool
|  'solid' SFBool
|  'stripCount' MFInt32
|  'texCoord' (X3DSingleTextureCoordinateNode|MultiTextureCoordinate)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
TwoSidedMaterial
: ('DEF' xsID)? 'TwoSidedMaterial' '{'
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
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
UniversalJoint
: ('DEF' xsID)? 'UniversalJoint' '{'
(
   'anchorPoint' SFVec3f
|  'axis1' SFVec3f
|  'axis2' SFVec3f
|  'body1' (RigidBody)
|  'body1AnchorPoint' SFVec3f
|  'body1Axis' SFVec3f
|  'body2' (RigidBody)
|  'body2AnchorPoint' SFVec3f
|  'body2Axis' SFFloat
|  'forceOutput' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
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
UnlitMaterial
: ('DEF' xsID)? 'UnlitMaterial' '{'
(
   'emissiveColor' SFColor
|  'emissiveTexture' (X3DSingleTextureNode)
|  'emissiveTextureMapping' xsNMTOKEN
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normalScale' SFFloat
|  'normalTexture' (X3DSingleTextureNode)
|  'normalTextureMapping' xsNMTOKEN
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Viewpoint
: ('DEF' xsID)? 'Viewpoint' '{'
(
   'bindTime' SFTime
|  'centerOfRotation' SFVec3f
|  'description' SFString
|  'farDistance' SFFloat
|  'fieldOfView' SFFloat
|  'IS' (IS)
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' (X3DMetadataObject)
|  'navigationInfo' (NavigationInfo)
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
ViewpointGroup
: ('DEF' xsID)? 'ViewpointGroup' '{'
(
   'center' SFVec3f
|  'children' (X3DViewpointNode|ViewpointGroup)*
|  'description' SFString
|  'displayed' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'retainUserOffsets' SFBool
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
Viewport
: ('DEF' xsID)? 'Viewport' '{'
(
   'addChildren' (X3DChildNode)*
|  'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'children' (X3DChildNode)*
|  'clipBoundary' MFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'removeChildren' (X3DChildNode)*
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
VisibilitySensor
: ('DEF' xsID)? 'VisibilitySensor' '{'
(
   'center' SFVec3f
|  'description' SFString
|  'enabled' SFBool
|  'enterTime' SFTime
|  'exitTime' SFTime
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'size' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
VolumeData
: ('DEF' xsID)? 'VolumeData' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'dimensions' SFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'renderStyle' (X3DVolumeRenderStyleNode)
|  'visible' SFBool
|  'voxels' (X3DTexture3DNode)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
VolumeEmitter
: ('DEF' xsID)? 'VolumeEmitter' '{'
(
   'coord' (X3DCoordinateNode)
|  'coordIndex' MFInt32
|  'direction' SFVec3f
|  'internal' SFBool
|  'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
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
VolumePickSensor
: ('DEF' xsID)? 'VolumePickSensor' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'intersectionType' xsNMTOKEN
|  'IS' (IS)
|  'isActive' SFBool
|  'matchCriterion' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickedGeometry' (X3DChildNode)*
|  'pickingGeometry' (X3DGeometryNode)
|  'pickTarget' (X3DGroupingNode|X3DShapeNode|Inline)*
|  'sortOrder' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
WaveShaper
: ('DEF' xsID)? 'WaveShaper' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'children' (Analyser|AudioClip|AudioDestination|BiquadFilter|BufferAudioSource|ChannelMerger|ChannelSelector|ChannelSplitter|Convolver|Delay|DynamicsCompressor|Gain|ListenerPointSource|MicrophoneSource|MovieTexture|OscillatorSource|Sound|SpatialSound|StreamAudioDestination|StreamAudioSource|WaveShaper)*
|  'description' SFString
|  'elapsedTime' SFTime
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'isPaused' SFBool
|  'metadata' (X3DMetadataObject)
|  'oversample' SFString
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
WindPhysicsModel
: ('DEF' xsID)? 'WindPhysicsModel' '{'
(
   'direction' SFVec3f
|  'enabled' SFBool
|  'gustiness' SFFloat
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'speed' SFFloat
|  'turbulence' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
WorldInfo
: ('DEF' xsID)? 'WorldInfo' '{'
(
   'info' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'title' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
component
:  'component' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'level' SFInt32
|  'name' xsNMTOKEN
|  'style' SFString
)*
'}'
;
connect
:  'connect' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'nodeField' xsNMTOKEN
|  'protoField' xsNMTOKEN
|  'style' SFString
)*
'}'
;
EXPORT
:  'EXPORT' '{'
(
   'AS' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'localDEF' xsIDREF
|  'style' SFString
)*
'}'
;
ExternProtoDeclare
:  'ExternProtoDeclare' '{'
(
   'appinfo' SFString
|  'class' xsNMTOKENS
|  'documentation' SFString
|  'field' (field)*
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'url' MFString
)*
'}'
;
field
:  'field' '{'
(
   'accessType' xsNMTOKEN
|  'appinfo' SFString
|  'children' (X3DNode)*
|  'class' xsNMTOKENS
|  'documentation' SFString
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'type' xsNMTOKEN
|  'value' SFString
)*
'}'
;
fieldValue
:  'fieldValue' '{'
(
   'children' (X3DNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'value' SFString
)*
'}'
;
head
:  'head' '{'
(
   'class' xsNMTOKENS
|  'component' (component)*
|  'id' xsNMTOKEN
|  'meta' (meta)*
|  'style' SFString
|  'unit' (unit)*
)*
'}'
;
IMPORT
:  'IMPORT' '{'
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
IS
:  'IS' '{'
(
   'class' xsNMTOKENS
|  'connect' (connect)*
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
meta
:  'meta' '{'
(
   'class' xsNMTOKENS
|  'content' SFString
|  'dir' xsNMTOKEN
|  'http-equiv' SFString
|  'id' xsNMTOKEN
|  'lang' SFString
|  'name' xsNMTOKEN
|  'scheme' SFString
|  'style' SFString
)*
'}'
;
ProtoBody
:  'ProtoBody' '{'
(
   'children' (X3DNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
ProtoDeclare
:  'ProtoDeclare' '{'
(
   'appinfo' SFString
|  'class' xsNMTOKENS
|  'documentation' SFString
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'ProtoBody' (ProtoBody)
|  'ProtoInterface' (ProtoInterface)
|  'style' SFString
)*
'}'
;
ProtoInterface
:  'ProtoInterface' '{'
(
   'class' xsNMTOKENS
|  'field' (field)*
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
ROUTE
:  'ROUTE' '{'
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
Scene
:  'Scene' '{'
(
   'children' (X3DChildNode|X3DMetadataObject|LayerSet)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
;
unit
:  'unit' '{'
(
   'category' xsNMTOKEN
|  'class' xsNMTOKENS
|  'conversionFactor' SFDouble
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
)*
'}'
;
X3D
:  'X3D' '{'
(
   'class' xsNMTOKENS
|  'head' (head)
|  'id' xsNMTOKEN
|  'profile' xsNMTOKEN
|  'Scene' (Scene)
|  'style' SFString
|  'version' xsNMTOKEN
)*
'}'
;
