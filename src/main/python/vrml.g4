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
: ('DEF' xsID)? 'X3DAppearanceChildNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DAppearanceNode
: ('DEF' xsID)? 'X3DAppearanceNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DArrayFieldNode
: ('DEF' xsID)? 'X3DArrayField' '{'
(
 
)*
'}'
| 'USE' xsIDREF;
X3DBackgroundNode
: ('DEF' xsID)? 'X3DBackgroundNode' '{'
(
   'bindTime' SFTime
|  'groundAngle' MFFloat
|  'groundColor' MFColor
|  'IS' (IS)
|  'isBound' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_bind' SFBool
|  'skyAngle' MFFloat
|  'skyColor' MFColor
|  'transparency' unitIntervalType
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DBindableNode
: ('DEF' xsID)? 'X3DBindableNode' '{'
(
   'bindTime' SFTime
|  'IS' (IS)
|  'isBound' SFBool
|  'metadata' (X3DMetadataObject)
|  'set_bind' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DChaserNode
: ('DEF' xsID)? 'X3DChaserNode' '{'
(
   'duration' SFTime
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DChildNode
: ('DEF' xsID)? 'X3DChildNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DColorNode
: ('DEF' xsID)? 'X3DColorNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DComposableVolumeRenderStyleNode
: ('DEF' xsID)? 'X3DComposableVolumeRenderStyleNode' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DComposedGeometryNode
: ('DEF' xsID)? 'X3DComposedGeometryNode' '{'
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
X3DCoordinateNode
: ('DEF' xsID)? 'X3DCoordinateNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DDamperNode
: ('DEF' xsID)? 'X3DDamperNode' '{'
(
   'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'order' SFInt32
|  'tau' SFTime
|  'tolerance' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DDragSensorNode
: ('DEF' xsID)? 'X3DDragSensorNode' '{'
(
   'autoOffset' SFBool
|  'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' (X3DMetadataObject)
|  'trackPoint_changed' SFVec3f
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DEnvironmentalSensorNode
: ('DEF' xsID)? 'X3DEnvironmentalSensorNode' '{'
(
   'description' SFString
|  'enabled' SFBool
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
X3DEnvironmentTextureNode
: ('DEF' xsID)? 'X3DEnvironmentTextureNode' '{'
(
   'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DFieldNode
: ('DEF' xsID)? 'X3DField' '{'
(
 
)*
'}'
| 'USE' xsIDREF;
X3DFollowerNode
: ('DEF' xsID)? 'X3DFollowerNode' '{'
(
   'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DFontStyleNode
: ('DEF' xsID)? 'X3DFontStyleNode' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
)*
'}'
| 'USE' xsIDREF;
X3DGeometricPropertyNode
: ('DEF' xsID)? 'X3DGeometricPropertyNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DGeometryNode
: ('DEF' xsID)? 'X3DGeometryNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DGroupingNode
: ('DEF' xsID)? 'X3DGroupingNode' '{'
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
X3DInfoNode
: ('DEF' xsID)? 'X3DInfoNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DInterpolatorNode
: ('DEF' xsID)? 'X3DInterpolatorNode' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'metadata' (X3DMetadataObject)
|  'set_fraction' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DKeyDeviceSensorNode
: ('DEF' xsID)? 'X3DKeyDeviceSensorNode' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DLayerNode
: ('DEF' xsID)? 'X3DLayerNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'objectType' MFString
|  'pickable' SFBool
|  'viewport' (X3DViewportNode)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DLayoutNode
: ('DEF' xsID)? 'X3DLayoutNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DLightNode
: ('DEF' xsID)? 'X3DLightNode' '{'
(
   'ambientIntensity' unitIntervalType
|  'color' SFColor
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
X3DMaterialNode
: ('DEF' xsID)? 'X3DMaterialNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DNBodyCollidableNode
: ('DEF' xsID)? 'X3DNBodyCollidableNode' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
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
X3DNBodyCollisionSpaceNode
: ('DEF' xsID)? 'X3DNBodyCollisionSpaceNode' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DNetworkSensorNode
: ('DEF' xsID)? 'X3DNetworkSensorNode' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DNode
: ('DEF' xsID)? 'X3DNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DNormalNode
: ('DEF' xsID)? 'X3DNormalNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DNurbsControlCurveNode
: ('DEF' xsID)? 'X3DNurbsControlCurveNode' '{'
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
X3DNurbsSurfaceGeometryNode
: ('DEF' xsID)? 'X3DNurbsSurfaceGeometryNode' '{'
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
X3DOneSidedMaterialNode
: ('DEF' xsID)? 'X3DOneSidedMaterialNode' '{'
(
   'emissiveTextureMapping' xsNMTOKEN
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'normalScale' SFFloat
|  'normalTextureMapping' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DParametricGeometryNode
: ('DEF' xsID)? 'X3DParametricGeometryNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DParticleEmitterNode
: ('DEF' xsID)? 'X3DParticleEmitterNode' '{'
(
   'IS' (IS)
|  'mass' SFFloat
|  'metadata' (X3DMetadataObject)
|  'on' SFBool
|  'speed' SFFloat
|  'surfaceArea' SFFloat
|  'variation' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DParticlePhysicsModelNode
: ('DEF' xsID)? 'X3DParticlePhysicsModelNode' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DPickSensorNode
: ('DEF' xsID)? 'X3DPickSensorNode' '{'
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
X3DPointingDeviceSensorNode
: ('DEF' xsID)? 'X3DPointingDeviceSensorNode' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'isOver' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DProductStructureChildNode
: ('DEF' xsID)? 'X3DProductStructureChildNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' SFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DPrototypeInstanceNode
: ('DEF' xsID)? 'X3DPrototypeInstance' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
)*
'}'
| 'USE' xsIDREF;
X3DRigidJointNode
: ('DEF' xsID)? 'X3DRigidJointNode' '{'
(
   'body1' (RigidBody)
|  'body2' (RigidBody)
|  'forceOutput' MFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DScriptNode
: ('DEF' xsID)? 'X3DScriptNode' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'IS' (IS)
|  'load' SFBool
|  'metadata' (X3DMetadataObject)
|  'url' MFString
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSensorNode
: ('DEF' xsID)? 'X3DSensorNode' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'isActive' SFBool
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSequencerNode
: ('DEF' xsID)? 'X3DSequencerNode' '{'
(
   'IS' (IS)
|  'key' MFFloat
|  'metadata' (X3DMetadataObject)
|  'next' SFBool
|  'previous' SFBool
|  'set_fraction' SFFloat
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DShaderNode
: ('DEF' xsID)? 'X3DShaderNode' '{'
(
   'activate' SFBool
|  'IS' (IS)
|  'isSelected' SFBool
|  'isValid' SFBool
|  'language' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DShapeNode
: ('DEF' xsID)? 'X3DShapeNode' '{'
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
X3DSingleTextureCoordinateNode
: ('DEF' xsID)? 'X3DSingleTextureCoordinateNode' '{'
(
   'IS' (IS)
|  'mapping' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSingleTextureNode
: ('DEF' xsID)? 'X3DSingleTextureNode' '{'
(
   'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSingleTextureTransformNode
: ('DEF' xsID)? 'X3DSingleTextureTransformNode' '{'
(
   'IS' (IS)
|  'mapping' xsNMTOKEN
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSoundChannelNode
: ('DEF' xsID)? 'X3DSoundChannelNode' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
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
X3DSoundDestinationNode
: ('DEF' xsID)? 'X3DSoundDestinationNode' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
|  'channelInterpretation' SFString
|  'description' SFString
|  'enabled' SFBool
|  'gain' SFFloat
|  'IS' (IS)
|  'isActive' SFBool
|  'mediaDeviceID' SFString
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSoundNode
: ('DEF' xsID)? 'X3DSoundNode' '{'
(
   'description' SFString
|  'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSoundProcessingNode
: ('DEF' xsID)? 'X3DSoundProcessingNode' '{'
(
   'channelCount' SFInt32
|  'channelCountMode' SFString
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
|  'tailTime' SFTime
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DSoundSourceNode
: ('DEF' xsID)? 'X3DSoundSourceNode' '{'
(
   'description' SFString
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
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DStatementNode
: ('DEF' xsID)? 'X3DStatement' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DTexture2DNode
: ('DEF' xsID)? 'X3DTexture2DNode' '{'
(
   'description' SFString
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
X3DTexture3DNode
: ('DEF' xsID)? 'X3DTexture3DNode' '{'
(
   'description' SFString
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
X3DTextureCoordinateNode
: ('DEF' xsID)? 'X3DTextureCoordinateNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DTextureNode
: ('DEF' xsID)? 'X3DTextureNode' '{'
(
   'description' SFString
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DTextureProjectorNode
: ('DEF' xsID)? 'X3DTextureProjectorNode' '{'
(
   'ambientIntensity' unitIntervalType
|  'aspectRatio' SFFloat
|  'color' SFColor
|  'description' SFString
|  'direction' SFVec3f
|  'farDistance' SFFloat
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
X3DTextureTransformNode
: ('DEF' xsID)? 'X3DTextureTransformNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DTimeDependentNode
: ('DEF' xsID)? 'X3DTimeDependentNode' '{'
(
   'description' SFString
|  'elapsedTime' SFTime
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
X3DTouchSensorNode
: ('DEF' xsID)? 'X3DTouchSensorNode' '{'
(
   'description' SFString
|  'enabled' SFBool
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
X3DTriggerNode
: ('DEF' xsID)? 'X3DTriggerNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DVertexAttributeNode
: ('DEF' xsID)? 'X3DVertexAttributeNode' '{'
(
   'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'name' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DViewpointNode
: ('DEF' xsID)? 'X3DViewpointNode' '{'
(
   'bindTime' SFTime
|  'description' SFString
|  'farDistance' SFFloat
|  'IS' (IS)
|  'isBound' SFBool
|  'jump' SFBool
|  'metadata' (X3DMetadataObject)
|  'navigationInfo' (NavigationInfo)
|  'nearDistance' SFFloat
|  'orientation' SFRotation
|  'retainUserOffsets' SFBool
|  'set_bind' SFBool
|  'viewAll' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DViewportNode
: ('DEF' xsID)? 'X3DViewportNode' '{'
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
X3DVolumeDataNode
: ('DEF' xsID)? 'X3DVolumeDataNode' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'dimensions' SFVec3f
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'visible' SFBool
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DVolumeRenderStyleNode
: ('DEF' xsID)? 'X3DVolumeRenderStyleNode' '{'
(
   'enabled' SFBool
|  'IS' (IS)
|  'metadata' (X3DMetadataObject)
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DBoundedObjectNode
: ('DEF' xsID)? 'X3DBoundedObject' '{'
(
   'bboxCenter' SFVec3f
|  'bboxDisplay' SFBool
|  'bboxSize' bboxSizeType
|  'visible' SFBool
)*
'}'
| 'USE' xsIDREF;
X3DFogObjectNode
: ('DEF' xsID)? 'X3DFogObject' '{'
(
   'color' SFColor
|  'fogType' xsNMTOKEN
|  'visibilityRange' SFFloat
)*
'}'
| 'USE' xsIDREF;
X3DMetadataObjectNode
: ('DEF' xsID)? 'X3DMetadataObject' '{'
(
   'name' SFString
|  'reference' SFString
)*
'}'
| 'USE' xsIDREF;
X3DPickableObjectNode
: ('DEF' xsID)? 'X3DPickableObject' '{'
(
   'pickable' SFBool
)*
'}'
| 'USE' xsIDREF;
X3DProgrammableShaderObjectNode
: ('DEF' xsID)? 'X3DProgrammableShaderObject' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DUrlObjectNode
: ('DEF' xsID)? 'X3DUrlObject' '{'
(
   'autoRefresh' SFTime
|  'autoRefreshTimeLimit' SFTime
|  'description' SFString
|  'load' SFBool
|  'url' MFString
)*
'}'
| 'USE' xsIDREF;
AcousticPropertiesNode
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
AnalyserNode
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
AnchorNode
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
AppearanceNode
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
Arc2DNode
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
ArcClose2DNode
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
AudioClipNode
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
AudioDestinationNode
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
BackgroundNode
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
BallJointNode
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
BillboardNode
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
BiquadFilterNode
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
BlendedVolumeStyleNode
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
BooleanFilterNode
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
BooleanSequencerNode
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
BooleanToggleNode
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
BooleanTriggerNode
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
BoundaryEnhancementVolumeStyleNode
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
BoundedPhysicsModelNode
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
BoxNode
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
BufferAudioSourceNode
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
CADAssemblyNode
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
CADFaceNode
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
CADLayerNode
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
CADPartNode
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
CartoonVolumeStyleNode
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
ChannelMergerNode
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
ChannelSelectorNode
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
ChannelSplitterNode
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
Circle2DNode
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
ClipPlaneNode
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
CollidableOffsetNode
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
CollidableShapeNode
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
CollisionNode
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
CollisionCollectionNode
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
CollisionSensorNode
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
CollisionSpaceNode
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
ColorNode
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
ColorChaserNode
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
ColorDamperNode
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
ColorInterpolatorNode
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
ColorRGBANode
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
ComposedCubeMapTextureNode
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
ComposedShaderNode
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
ComposedTexture3DNode
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
ComposedVolumeStyleNode
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
ConeNode
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
ConeEmitterNode
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
ContactNode
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
Contour2DNode
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
ContourPolyline2DNode
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
ConvolverNode
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
CoordinateNode
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
CoordinateChaserNode
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
CoordinateDamperNode
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
CoordinateDoubleNode
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
CoordinateInterpolatorNode
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
CoordinateInterpolator2DNode
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
CylinderNode
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
CylinderSensorNode
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
DelayNode
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
DirectionalLightNode
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
DISEntityManagerNode
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
DISEntityTypeMappingNode
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
Disk2DNode
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
DoubleAxisHingeJointNode
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
DynamicsCompressorNode
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
EaseInEaseOutNode
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
EdgeEnhancementVolumeStyleNode
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
ElevationGridNode
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
EspduTransformNode
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
ExplosionEmitterNode
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
ExtrusionNode
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
FillPropertiesNode
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
FloatVertexAttributeNode
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
FogNode
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
FogCoordinateNode
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
FontStyleNode
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
ForcePhysicsModelNode
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
GainNode
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
GeneratedCubeMapTextureNode
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
GeoCoordinateNode
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
GeoElevationGridNode
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
GeoLocationNode
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
GeoLODNode
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
GeoMetadataNode
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
GeoOriginNode
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
GeoPositionInterpolatorNode
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
GeoProximitySensorNode
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
GeoTouchSensorNode
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
GeoTransformNode
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
GeoViewpointNode
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
GroupNode
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
HAnimDisplacerNode
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
HAnimHumanoidNode
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
HAnimJointNode
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
HAnimMotionNode
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
HAnimSegmentNode
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
HAnimSiteNode
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
ImageCubeMapTextureNode
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
ImageTextureNode
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
ImageTexture3DNode
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
IndexedFaceSetNode
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
IndexedLineSetNode
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
IndexedQuadSetNode
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
IndexedTriangleFanSetNode
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
IndexedTriangleSetNode
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
IndexedTriangleStripSetNode
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
InlineNode
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
IntegerSequencerNode
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
IntegerTriggerNode
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
IsoSurfaceVolumeDataNode
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
KeySensorNode
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
LayerNode
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
LayerSetNode
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
LayoutNode
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
LayoutGroupNode
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
LayoutLayerNode
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
LinePickSensorNode
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
LinePropertiesNode
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
LineSetNode
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
ListenerPointSourceNode
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
LoadSensorNode
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
LocalFogNode
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
LODNode
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
MaterialNode
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
Matrix3VertexAttributeNode
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
Matrix4VertexAttributeNode
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
MetadataBooleanNode
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
MetadataDoubleNode
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
MetadataFloatNode
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
MetadataIntegerNode
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
MetadataSetNode
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
MetadataStringNode
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
MicrophoneSourceNode
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
MotorJointNode
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
MovieTextureNode
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
MultiTextureNode
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
MultiTextureCoordinateNode
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
MultiTextureTransformNode
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
NavigationInfoNode
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
NormalNode
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
NormalInterpolatorNode
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
NurbsCurveNode
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
NurbsCurve2DNode
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
NurbsOrientationInterpolatorNode
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
NurbsPatchSurfaceNode
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
NurbsPositionInterpolatorNode
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
NurbsSetNode
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
NurbsSurfaceInterpolatorNode
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
NurbsSweptSurfaceNode
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
NurbsSwungSurfaceNode
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
NurbsTextureCoordinateNode
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
NurbsTrimmedSurfaceNode
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
OpacityMapVolumeStyleNode
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
OrientationChaserNode
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
OrientationDamperNode
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
OrientationInterpolatorNode
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
OrthoViewpointNode
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
OscillatorSourceNode
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
PackagedShaderNode
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
ParticleSystemNode
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
PeriodicWaveNode
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
PhysicalMaterialNode
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
PickableGroupNode
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
PixelTextureNode
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
PixelTexture3DNode
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
PlaneSensorNode
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
PointEmitterNode
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
PointLightNode
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
PointPickSensorNode
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
PointPropertiesNode
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
PointSetNode
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
Polyline2DNode
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
PolylineEmitterNode
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
Polypoint2DNode
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
PositionChaserNode
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
PositionChaser2DNode
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
PositionDamperNode
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
PositionDamper2DNode
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
PositionInterpolatorNode
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
PositionInterpolator2DNode
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
PrimitivePickSensorNode
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
ProgramShaderNode
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
ProjectionVolumeStyleNode
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
ProtoInstanceNode
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
ProximitySensorNode
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
QuadSetNode
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
ReceiverPduNode
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
Rectangle2DNode
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
RigidBodyNode
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
RigidBodyCollectionNode
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
ScalarChaserNode
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
ScalarDamperNode
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
ScalarInterpolatorNode
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
ScreenFontStyleNode
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
ScreenGroupNode
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
ScriptNode
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
SegmentedVolumeDataNode
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
ShadedVolumeStyleNode
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
ShaderPartNode
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
ShaderProgramNode
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
ShapeNode
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
SignalPduNode
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
SilhouetteEnhancementVolumeStyleNode
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
SingleAxisHingeJointNode
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
SliderJointNode
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
SoundNode
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
SpatialSoundNode
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
SphereNode
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
SphereSensorNode
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
SplinePositionInterpolatorNode
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
SplinePositionInterpolator2DNode
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
SplineScalarInterpolatorNode
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
SpotLightNode
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
SquadOrientationInterpolatorNode
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
StaticGroupNode
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
StreamAudioDestinationNode
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
StreamAudioSourceNode
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
StringSensorNode
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
SurfaceEmitterNode
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
SwitchNode
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
TexCoordChaser2DNode
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
TexCoordDamper2DNode
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
TextNode
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
TextureBackgroundNode
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
TextureCoordinateNode
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
TextureCoordinate3DNode
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
TextureCoordinate4DNode
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
TextureCoordinateGeneratorNode
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
TextureProjectorNode
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
TextureProjectorParallelNode
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
TexturePropertiesNode
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
TextureTransformNode
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
TextureTransform3DNode
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
TextureTransformMatrix3DNode
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
TimeSensorNode
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
TimeTriggerNode
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
ToneMappedVolumeStyleNode
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
TouchSensorNode
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
TransformNode
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
TransformSensorNode
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
TransmitterPduNode
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
TriangleFanSetNode
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
TriangleSetNode
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
TriangleSet2DNode
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
TriangleStripSetNode
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
TwoSidedMaterialNode
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
UniversalJointNode
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
UnlitMaterialNode
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
ViewpointNode
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
ViewpointGroupNode
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
ViewportNode
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
VisibilitySensorNode
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
VolumeDataNode
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
VolumeEmitterNode
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
VolumePickSensorNode
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
WaveShaperNode
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
WindPhysicsModelNode
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
WorldInfoNode
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
componentNode
: ('DEF' xsID)? 'component' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'level' SFInt32
|  'name' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
connectNode
: ('DEF' xsID)? 'connect' '{'
(
   'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'nodeField' xsNMTOKEN
|  'protoField' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
EXPORTNode
: ('DEF' xsID)? 'EXPORT' '{'
(
   'AS' xsNMTOKEN
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'localDEF' xsIDREF
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ExternProtoDeclareNode
: ('DEF' xsID)? 'ExternProtoDeclare' '{'
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
| 'USE' xsIDREF;
fieldNode
: ('DEF' xsID)? 'field' '{'
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
| 'USE' xsIDREF;
fieldValueNode
: ('DEF' xsID)? 'fieldValue' '{'
(
   'children' (X3DNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
|  'value' SFString
)*
'}'
| 'USE' xsIDREF;
headNode
: ('DEF' xsID)? 'head' '{'
(
   'class' xsNMTOKENS
|  'component' (component)*
|  'id' xsNMTOKEN
|  'meta' (meta)*
|  'style' SFString
|  'unit' (unit)*
)*
'}'
| 'USE' xsIDREF;
IMPORTNode
: ('DEF' xsID)? 'IMPORT' '{'
(
   'AS' xsID
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'importedDEF' xsNMTOKEN
|  'inlineDEF' xsIDREF
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ISNode
: ('DEF' xsID)? 'IS' '{'
(
   'class' xsNMTOKENS
|  'connect' (connect)*
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
metaNode
: ('DEF' xsID)? 'meta' '{'
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
| 'USE' xsIDREF;
ProtoBodyNode
: ('DEF' xsID)? 'ProtoBody' '{'
(
   'children' (X3DNode)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ProtoDeclareNode
: ('DEF' xsID)? 'ProtoDeclare' '{'
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
| 'USE' xsIDREF;
ProtoInterfaceNode
: ('DEF' xsID)? 'ProtoInterface' '{'
(
   'class' xsNMTOKENS
|  'field' (field)*
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
ROUTENode
: ('DEF' xsID)? 'ROUTE' '{'
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
| 'USE' xsIDREF;
SceneNode
: ('DEF' xsID)? 'Scene' '{'
(
   'children' (X3DChildNode|X3DMetadataObject|LayerSet)*
|  'class' xsNMTOKENS
|  'id' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
unitNode
: ('DEF' xsID)? 'unit' '{'
(
   'category' xsNMTOKEN
|  'class' xsNMTOKENS
|  'conversionFactor' SFDouble
|  'id' xsNMTOKEN
|  'name' xsNMTOKEN
|  'style' SFString
)*
'}'
| 'USE' xsIDREF;
X3DNode
: ('DEF' xsID)? 'X3D' '{'
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
| 'USE' xsIDREF;
