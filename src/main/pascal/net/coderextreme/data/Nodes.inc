function Nodes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
WorldInfo8: TWorldInfoNode;
Background9: TBackgroundNode;
Fog10: TFogNode;
LocalFog11: TLocalFogNode;
TextureBackground12: TTextureBackgroundNode;
ProximitySensor13: TProximitySensorNode;
TransformSensor14: TTransformSensorNode;
VisibilitySensor15: TVisibilitySensorNode;
ColorChaser16: TColorChaserNode;
ColorDamper17: TColorDamperNode;
CoordinateChaser18: TCoordinateChaserNode;
CoordinateDamper19: TCoordinateDamperNode;
OrientationChaser20: TOrientationChaserNode;
OrientationDamper21: TOrientationDamperNode;
PositionChaser22: TPositionChaserNode;
PositionChaser2D23: TPositionChaser2DNode;
PositionDamper24: TPositionDamperNode;
PositionDamper2D25: TPositionDamper2DNode;
ScalarChaser26: TScalarChaserNode;
ScalarDamper27: TScalarDamperNode;
TexCoordChaser2D28: TTexCoordChaser2DNode;
TexCoordDamper2D29: TTexCoordDamper2DNode;
Group30: TGroupNode;
StaticGroup31: TStaticGroupNode;
Switch32: TSwitchNode;
Transform33: TTransformNode;
ColorInterpolator34: TColorInterpolatorNode;
CoordinateInterpolator35: TCoordinateInterpolatorNode;
CoordinateInterpolator2D36: TCoordinateInterpolator2DNode;
EaseInEaseOut37: TEaseInEaseOutNode;
NormalInterpolator38: TNormalInterpolatorNode;
OrientationInterpolator39: TOrientationInterpolatorNode;
PositionInterpolator40: TPositionInterpolatorNode;
PositionInterpolator2D41: TPositionInterpolator2DNode;
ScalarInterpolator42: TScalarInterpolatorNode;
SplinePositionInterpolator43: TSplinePositionInterpolatorNode;
SplinePositionInterpolator2D44: TSplinePositionInterpolator2DNode;
SplineScalarInterpolator45: TSplineScalarInterpolatorNode;
SquadOrientationInterpolator46: TSquadOrientationInterpolatorNode;
LayerSet47: TLayerSetNode;
DirectionalLight48: TDirectionalLightNode;
PointLight49: TPointLightNode;
SpotLight50: TSpotLightNode;
Billboard51: TBillboardNode;
Collision52: TCollisionNode;
LOD53: TLODNode;
NavigationInfo54: TNavigationInfoNode;
OrthoViewpoint55: TOrthoViewpointNode;
Viewpoint56: TViewpointNode;
ViewpointGroup57: TViewpointGroupNode;
Anchor58: TAnchorNode;
Inline59: TInlineNode;
LoadSensor60: TLoadSensorNode;
CylinderSensor61: TCylinderSensorNode;
PlaneSensor62: TPlaneSensorNode;
SphereSensor63: TSphereSensorNode;
TouchSensor64: TTouchSensorNode;
ClipPlane65: TClipPlaneNode;
Shape66: TShapeNode;
Analyser67: TAnalyserNode;
AudioDestination68: TAudioDestinationNode;
BiquadFilter69: TBiquadFilterNode;
BufferAudioSource70: TBufferAudioSourceNode;
ChannelMerger71: TChannelMergerNode;
ChannelSelector72: TChannelSelectorNode;
ChannelSplitter73: TChannelSplitterNode;
Convolver74: TConvolverNode;
Delay75: TDelayNode;
DynamicsCompressor76: TDynamicsCompressorNode;
Gain77: TGainNode;
ListenerPointSource78: TListenerPointSourceNode;
MicrophoneSource79: TMicrophoneSourceNode;
OscillatorSource80: TOscillatorSourceNode;
Sound81: TSoundNode;
SpatialSound82: TSpatialSoundNode;
StreamAudioDestination83: TStreamAudioDestinationNode;
StreamAudioSource84: TStreamAudioSourceNode;
WaveShaper85: TWaveShaperNode;
TimeSensor86: TTimeSensorNode;
CADAssembly87: TCADAssemblyNode;
CADFace88: TCADFaceNode;
CADLayer89: TCADLayerNode;
CADPart90: TCADPartNode;
DISEntityManager91: TDISEntityManagerNode;
DISEntityTypeMapping92: TDISEntityTypeMappingNode;
EspduTransform93: TEspduTransformNode;
ReceiverPdu94: TReceiverPduNode;
SignalPdu95: TSignalPduNode;
TransmitterPdu96: TTransmitterPduNode;
BooleanFilter97: TBooleanFilterNode;
BooleanSequencer98: TBooleanSequencerNode;
BooleanToggle99: TBooleanToggleNode;
BooleanTrigger100: TBooleanTriggerNode;
IntegerSequencer101: TIntegerSequencerNode;
IntegerTrigger102: TIntegerTriggerNode;
TimeTrigger103: TTimeTriggerNode;
KeySensor104: TKeySensorNode;
StringSensor105: TStringSensorNode;
TextureProjector106: TTextureProjectorNode;
TextureProjectorParallel107: TTextureProjectorParallelNode;
HAnimHumanoid108: THAnimHumanoidNode;
HAnimJoint109: THAnimJointNode;
HAnimSegment110: THAnimSegmentNode;
HAnimSite111: THAnimSiteNode;
ParticleSystem112: TParticleSystemNode;
Script113: TScriptNode;
CollidableOffset114: TCollidableOffsetNode;
CollidableShape115: TCollidableShapeNode;
CollisionSensor116: TCollisionSensorNode;
CollisionSpace117: TCollisionSpaceNode;
RigidBodyCollection118: TRigidBodyCollectionNode;
IsoSurfaceVolumeData119: TIsoSurfaceVolumeDataNode;
SegmentedVolumeData120: TSegmentedVolumeDataNode;
VolumeData121: TVolumeDataNode;
GeoLOD122: TGeoLODNode;
GeoLocation123: TGeoLocationNode;
GeoMetadata124: TGeoMetadataNode;
GeoPositionInterpolator125: TGeoPositionInterpolatorNode;
GeoProximitySensor126: TGeoProximitySensorNode;
GeoTouchSensor127: TGeoTouchSensorNode;
GeoTransform128: TGeoTransformNode;
GeoViewpoint129: TGeoViewpointNode;
ContourPolyline2D130: TContourPolyline2DNode;
NurbsCurve2D131: TNurbsCurve2DNode;
NurbsOrientationInterpolator132: TNurbsOrientationInterpolatorNode;
NurbsPositionInterpolator133: TNurbsPositionInterpolatorNode;
NurbsSet134: TNurbsSetNode;
NurbsSurfaceInterpolator135: TNurbsSurfaceInterpolatorNode;
LayoutGroup136: TLayoutGroupNode;
ScreenGroup137: TScreenGroupNode;
LinePickSensor138: TLinePickSensorNode;
PickableGroup139: TPickableGroupNode;
PointPickSensor140: TPointPickSensorNode;
PrimitivePickSensor141: TPrimitivePickSensorNode;
VolumePickSensor142: TVolumePickSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'Holger Seelig';
X3D0.Meta['created'] := 'Tue, 10 Feb 2026 12:09:57 GMT';
X3D0.Meta['modified'] := 'Tue, 10 Feb 2026 12:34:21 GMT';
X3D0.Meta['generator'] := 'x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy';
X3D0.Meta['generator'] := 'Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/';
Group7 := TGroupNode.Create;
WorldInfo8 := TWorldInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([WorldInfo8]);
Background9 := TBackgroundNode.Create;
{ .AddChildren }
Group7.AddChildren([Background9]);
Fog10 := TFogNode.Create;
{ .AddChildren }
Group7.AddChildren([Fog10]);
LocalFog11 := TLocalFogNode.Create;
{ .AddChildren }
Group7.AddChildren([LocalFog11]);
TextureBackground12 := TTextureBackgroundNode.Create;
{ .AddChildren }
Group7.AddChildren([TextureBackground12]);
ProximitySensor13 := TProximitySensorNode.Create;
{ .AddChildren }
Group7.AddChildren([ProximitySensor13]);
TransformSensor14 := TTransformSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([TransformSensor14]);
VisibilitySensor15 := TVisibilitySensorNode.Create;
{ .AddChildren }
Group7.AddChildren([VisibilitySensor15]);
ColorChaser16 := TColorChaserNode.Create;
{ .AddChildren }
Group7.AddChildren([ColorChaser16]);
ColorDamper17 := TColorDamperNode.Create;
{ .AddChildren }
Group7.AddChildren([ColorDamper17]);
CoordinateChaser18 := TCoordinateChaserNode.Create;
{ .AddChildren }
Group7.AddChildren([CoordinateChaser18]);
CoordinateDamper19 := TCoordinateDamperNode.Create;
{ .AddChildren }
Group7.AddChildren([CoordinateDamper19]);
OrientationChaser20 := TOrientationChaserNode.Create;
{ .AddChildren }
Group7.AddChildren([OrientationChaser20]);
OrientationDamper21 := TOrientationDamperNode.Create;
{ .AddChildren }
Group7.AddChildren([OrientationDamper21]);
PositionChaser22 := TPositionChaserNode.Create;
{ .AddChildren }
Group7.AddChildren([PositionChaser22]);
PositionChaser2D23 := TPositionChaser2DNode.Create;
{ .AddChildren }
Group7.AddChildren([PositionChaser2D23]);
PositionDamper24 := TPositionDamperNode.Create;
{ .AddChildren }
Group7.AddChildren([PositionDamper24]);
PositionDamper2D25 := TPositionDamper2DNode.Create;
{ .AddChildren }
Group7.AddChildren([PositionDamper2D25]);
ScalarChaser26 := TScalarChaserNode.Create;
{ .AddChildren }
Group7.AddChildren([ScalarChaser26]);
ScalarDamper27 := TScalarDamperNode.Create;
{ .AddChildren }
Group7.AddChildren([ScalarDamper27]);
TexCoordChaser2D28 := TTexCoordChaser2DNode.Create;
{ .AddChildren }
Group7.AddChildren([TexCoordChaser2D28]);
TexCoordDamper2D29 := TTexCoordDamper2DNode.Create;
{ .AddChildren }
Group7.AddChildren([TexCoordDamper2D29]);
Group30 := TGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([Group30]);
StaticGroup31 := TStaticGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([StaticGroup31]);
Switch32 := TSwitchNode.Create;
Switch32.WhichChoice := -1;
{ .AddChildren }
Group7.AddChildren([Switch32]);
Transform33 := TTransformNode.Create;
{ .AddChildren }
Group7.AddChildren([Transform33]);
ColorInterpolator34 := TColorInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([ColorInterpolator34]);
CoordinateInterpolator35 := TCoordinateInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([CoordinateInterpolator35]);
CoordinateInterpolator2D36 := TCoordinateInterpolator2DNode.Create;
{ .AddChildren }
Group7.AddChildren([CoordinateInterpolator2D36]);
EaseInEaseOut37 := TEaseInEaseOutNode.Create;
{ .AddChildren }
Group7.AddChildren([EaseInEaseOut37]);
NormalInterpolator38 := TNormalInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NormalInterpolator38]);
OrientationInterpolator39 := TOrientationInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([OrientationInterpolator39]);
PositionInterpolator40 := TPositionInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([PositionInterpolator40]);
PositionInterpolator2D41 := TPositionInterpolator2DNode.Create;
{ .AddChildren }
Group7.AddChildren([PositionInterpolator2D41]);
ScalarInterpolator42 := TScalarInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([ScalarInterpolator42]);
SplinePositionInterpolator43 := TSplinePositionInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([SplinePositionInterpolator43]);
SplinePositionInterpolator2D44 := TSplinePositionInterpolator2DNode.Create;
{ .AddChildren }
Group7.AddChildren([SplinePositionInterpolator2D44]);
SplineScalarInterpolator45 := TSplineScalarInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([SplineScalarInterpolator45]);
SquadOrientationInterpolator46 := TSquadOrientationInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([SquadOrientationInterpolator46]);
LayerSet47 := TLayerSetNode.Create;
{ .AddChildren }
Group7.AddChildren([LayerSet47]);
DirectionalLight48 := TDirectionalLightNode.Create;
{ .AddChildren }
Group7.AddChildren([DirectionalLight48]);
PointLight49 := TPointLightNode.Create;
{ .AddChildren }
Group7.AddChildren([PointLight49]);
SpotLight50 := TSpotLightNode.Create;
SpotLight50.BeamWidth := 0.589049;
{ .AddChildren }
Group7.AddChildren([SpotLight50]);
Billboard51 := TBillboardNode.Create;
{ .AddChildren }
Group7.AddChildren([Billboard51]);
Collision52 := TCollisionNode.Create;
{ .AddChildren }
Group7.AddChildren([Collision52]);
LOD53 := TLODNode.Create;
{ .AddChildren }
Group7.AddChildren([LOD53]);
NavigationInfo54 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo54]);
OrthoViewpoint55 := TOrthoViewpointNode.Create;
{ .AddChildren }
Group7.AddChildren([OrthoViewpoint55]);
Viewpoint56 := TViewpointNode.Create;
{ .AddChildren }
Group7.AddChildren([Viewpoint56]);
ViewpointGroup57 := TViewpointGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([ViewpointGroup57]);
Anchor58 := TAnchorNode.Create;
{ .AddChildren }
Group7.AddChildren([Anchor58]);
Inline59 := TInlineNode.Create;
{ .AddChildren }
Group7.AddChildren([Inline59]);
LoadSensor60 := TLoadSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([LoadSensor60]);
CylinderSensor61 := TCylinderSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([CylinderSensor61]);
PlaneSensor62 := TPlaneSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([PlaneSensor62]);
SphereSensor63 := TSphereSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([SphereSensor63]);
TouchSensor64 := TTouchSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([TouchSensor64]);
ClipPlane65 := TClipPlaneNode.Create;
{ .AddChildren }
Group7.AddChildren([ClipPlane65]);
Shape66 := TShapeNode.Create;
{ .AddChildren }
Group7.AddChildren([Shape66]);
Analyser67 := TAnalyserNode.Create;
{ .AddChildren }
Group7.AddChildren([Analyser67]);
AudioDestination68 := TAudioDestinationNode.Create;
{ .AddChildren }
Group7.AddChildren([AudioDestination68]);
BiquadFilter69 := TBiquadFilterNode.Create;
BiquadFilter69.Type := 'LOWPASS';
{ .AddChildren }
Group7.AddChildren([BiquadFilter69]);
BufferAudioSource70 := TBufferAudioSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([BufferAudioSource70]);
ChannelMerger71 := TChannelMergerNode.Create;
{ .AddChildren }
Group7.AddChildren([ChannelMerger71]);
ChannelSelector72 := TChannelSelectorNode.Create;
{ .AddChildren }
Group7.AddChildren([ChannelSelector72]);
ChannelSplitter73 := TChannelSplitterNode.Create;
{ .AddChildren }
Group7.AddChildren([ChannelSplitter73]);
Convolver74 := TConvolverNode.Create;
{ .AddChildren }
Group7.AddChildren([Convolver74]);
Delay75 := TDelayNode.Create;
{ .AddChildren }
Group7.AddChildren([Delay75]);
DynamicsCompressor76 := TDynamicsCompressorNode.Create;
{ .AddChildren }
Group7.AddChildren([DynamicsCompressor76]);
Gain77 := TGainNode.Create;
{ .AddChildren }
Group7.AddChildren([Gain77]);
ListenerPointSource78 := TListenerPointSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([ListenerPointSource78]);
MicrophoneSource79 := TMicrophoneSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([MicrophoneSource79]);
OscillatorSource80 := TOscillatorSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([OscillatorSource80]);
Sound81 := TSoundNode.Create;
{ .AddChildren }
Group7.AddChildren([Sound81]);
SpatialSound82 := TSpatialSoundNode.Create;
{ .AddChildren }
Group7.AddChildren([SpatialSound82]);
StreamAudioDestination83 := TStreamAudioDestinationNode.Create;
{ .AddChildren }
Group7.AddChildren([StreamAudioDestination83]);
StreamAudioSource84 := TStreamAudioSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([StreamAudioSource84]);
WaveShaper85 := TWaveShaperNode.Create;
{ .AddChildren }
Group7.AddChildren([WaveShaper85]);
TimeSensor86 := TTimeSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([TimeSensor86]);
CADAssembly87 := TCADAssemblyNode.Create;
{ .AddChildren }
Group7.AddChildren([CADAssembly87]);
CADFace88 := TCADFaceNode.Create;
{ .AddChildren }
Group7.AddChildren([CADFace88]);
CADLayer89 := TCADLayerNode.Create;
{ .AddChildren }
Group7.AddChildren([CADLayer89]);
CADPart90 := TCADPartNode.Create;
{ .AddChildren }
Group7.AddChildren([CADPart90]);
DISEntityManager91 := TDISEntityManagerNode.Create;
{ .AddChildren }
Group7.AddChildren([DISEntityManager91]);
DISEntityTypeMapping92 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
Group7.AddChildren([DISEntityTypeMapping92]);
EspduTransform93 := TEspduTransformNode.Create;
{ .AddChildren }
Group7.AddChildren([EspduTransform93]);
ReceiverPdu94 := TReceiverPduNode.Create;
{ .AddChildren }
Group7.AddChildren([ReceiverPdu94]);
SignalPdu95 := TSignalPduNode.Create;
{ .AddChildren }
Group7.AddChildren([SignalPdu95]);
TransmitterPdu96 := TTransmitterPduNode.Create;
{ .AddChildren }
Group7.AddChildren([TransmitterPdu96]);
BooleanFilter97 := TBooleanFilterNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanFilter97]);
BooleanSequencer98 := TBooleanSequencerNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanSequencer98]);
BooleanToggle99 := TBooleanToggleNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanToggle99]);
BooleanTrigger100 := TBooleanTriggerNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanTrigger100]);
IntegerSequencer101 := TIntegerSequencerNode.Create;
{ .AddChildren }
Group7.AddChildren([IntegerSequencer101]);
IntegerTrigger102 := TIntegerTriggerNode.Create;
{ .AddChildren }
Group7.AddChildren([IntegerTrigger102]);
TimeTrigger103 := TTimeTriggerNode.Create;
{ .AddChildren }
Group7.AddChildren([TimeTrigger103]);
KeySensor104 := TKeySensorNode.Create;
KeySensor104.Enabled := False;
{ .AddChildren }
Group7.AddChildren([KeySensor104]);
StringSensor105 := TStringSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([StringSensor105]);
TextureProjector106 := TTextureProjectorNode.Create;
TextureProjector106.AmbientIntensity := 0;
TextureProjector106.Color := Vector3(1,1,1);
TextureProjector106.FieldOfView := 0.7854;
TextureProjector106.Intensity := 0.7854;
TextureProjector106.UpVector := Vector3(0,1,0);
{ .AddChildren }
Group7.AddChildren([TextureProjector106]);
TextureProjectorParallel107 := TTextureProjectorParallelNode.Create;
TextureProjectorParallel107.AmbientIntensity := 0;
TextureProjectorParallel107.Color := Vector3(1,1,1);
TextureProjectorParallel107.Intensity := 0.7854;
TextureProjectorParallel107.UpVector := Vector3(0,1,0);
{ .AddChildren }
Group7.AddChildren([TextureProjectorParallel107]);
HAnimHumanoid108 := THAnimHumanoidNode.Create;
HAnimHumanoid108.Version := '2.0';
{ .AddChildren }
Group7.AddChildren([HAnimHumanoid108]);
HAnimJoint109 := THAnimJointNode.Create;
{ .AddChildren }
Group7.AddChildren([HAnimJoint109]);
HAnimSegment110 := THAnimSegmentNode.Create;
{ .AddChildren }
Group7.AddChildren([HAnimSegment110]);
HAnimSite111 := THAnimSiteNode.Create;
{ .AddChildren }
Group7.AddChildren([HAnimSite111]);
ParticleSystem112 := TParticleSystemNode.Create;
{ .AddChildren }
Group7.AddChildren([ParticleSystem112]);
Script113 := TScriptNode.Create;
{ .AddChildren }
Group7.AddChildren([Script113]);
CollidableOffset114 := TCollidableOffsetNode.Create;
{ .AddChildren }
Group7.AddChildren([CollidableOffset114]);
CollidableShape115 := TCollidableShapeNode.Create;
{ .AddChildren }
Group7.AddChildren([CollidableShape115]);
CollisionSensor116 := TCollisionSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([CollisionSensor116]);
CollisionSpace117 := TCollisionSpaceNode.Create;
{ .AddChildren }
Group7.AddChildren([CollisionSpace117]);
RigidBodyCollection118 := TRigidBodyCollectionNode.Create;
{ .AddChildren }
Group7.AddChildren([RigidBodyCollection118]);
IsoSurfaceVolumeData119 := TIsoSurfaceVolumeDataNode.Create;
{ .AddChildren }
Group7.AddChildren([IsoSurfaceVolumeData119]);
SegmentedVolumeData120 := TSegmentedVolumeDataNode.Create;
{ .AddChildren }
Group7.AddChildren([SegmentedVolumeData120]);
VolumeData121 := TVolumeDataNode.Create;
{ .AddChildren }
Group7.AddChildren([VolumeData121]);
GeoLOD122 := TGeoLODNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoLOD122]);
GeoLocation123 := TGeoLocationNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoLocation123]);
GeoMetadata124 := TGeoMetadataNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoMetadata124]);
GeoPositionInterpolator125 := TGeoPositionInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoPositionInterpolator125]);
GeoProximitySensor126 := TGeoProximitySensorNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoProximitySensor126]);
GeoTouchSensor127 := TGeoTouchSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoTouchSensor127]);
GeoTransform128 := TGeoTransformNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoTransform128]);
GeoViewpoint129 := TGeoViewpointNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoViewpoint129]);
ContourPolyline2D130 := TContourPolyline2DNode.Create;
{ .AddChildren }
Group7.AddChildren([ContourPolyline2D130]);
NurbsCurve2D131 := TNurbsCurve2DNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsCurve2D131]);
NurbsOrientationInterpolator132 := TNurbsOrientationInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsOrientationInterpolator132]);
NurbsPositionInterpolator133 := TNurbsPositionInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsPositionInterpolator133]);
NurbsSet134 := TNurbsSetNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsSet134]);
NurbsSurfaceInterpolator135 := TNurbsSurfaceInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsSurfaceInterpolator135]);
LayoutGroup136 := TLayoutGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([LayoutGroup136]);
ScreenGroup137 := TScreenGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([ScreenGroup137]);
LinePickSensor138 := TLinePickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([LinePickSensor138]);
PickableGroup139 := TPickableGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([PickableGroup139]);
PointPickSensor140 := TPointPickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([PointPickSensor140]);
PrimitivePickSensor141 := TPrimitivePickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([PrimitivePickSensor141]);
VolumePickSensor142 := TVolumePickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([VolumePickSensor142]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
