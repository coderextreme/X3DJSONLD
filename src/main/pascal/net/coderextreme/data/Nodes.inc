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
EnvironmentLight49: TEnvironmentLightNode;
PointLight50: TPointLightNode;
SpotLight51: TSpotLightNode;
Billboard52: TBillboardNode;
Collision53: TCollisionNode;
LOD54: TLODNode;
NavigationInfo55: TNavigationInfoNode;
OrthoViewpoint56: TOrthoViewpointNode;
Viewpoint57: TViewpointNode;
ViewpointGroup58: TViewpointGroupNode;
Anchor59: TAnchorNode;
Inline60: TInlineNode;
LoadSensor61: TLoadSensorNode;
CylinderSensor62: TCylinderSensorNode;
PlaneSensor63: TPlaneSensorNode;
SphereSensor64: TSphereSensorNode;
TouchSensor65: TTouchSensorNode;
ClipPlane66: TClipPlaneNode;
Shape67: TShapeNode;
Analyser68: TAnalyserNode;
AudioDestination69: TAudioDestinationNode;
BiquadFilter70: TBiquadFilterNode;
BufferAudioSource71: TBufferAudioSourceNode;
ChannelMerger72: TChannelMergerNode;
ChannelSelector73: TChannelSelectorNode;
ChannelSplitter74: TChannelSplitterNode;
Convolver75: TConvolverNode;
Delay76: TDelayNode;
DynamicsCompressor77: TDynamicsCompressorNode;
Gain78: TGainNode;
ListenerPointSource79: TListenerPointSourceNode;
MicrophoneSource80: TMicrophoneSourceNode;
OscillatorSource81: TOscillatorSourceNode;
Sound82: TSoundNode;
SpatialSound83: TSpatialSoundNode;
StreamAudioDestination84: TStreamAudioDestinationNode;
StreamAudioSource85: TStreamAudioSourceNode;
WaveShaper86: TWaveShaperNode;
TimeSensor87: TTimeSensorNode;
CADAssembly88: TCADAssemblyNode;
CADFace89: TCADFaceNode;
CADLayer90: TCADLayerNode;
CADPart91: TCADPartNode;
DISEntityManager92: TDISEntityManagerNode;
DISEntityTypeMapping93: TDISEntityTypeMappingNode;
EspduTransform94: TEspduTransformNode;
ReceiverPdu95: TReceiverPduNode;
SignalPdu96: TSignalPduNode;
TransmitterPdu97: TTransmitterPduNode;
BooleanFilter98: TBooleanFilterNode;
BooleanSequencer99: TBooleanSequencerNode;
BooleanToggle100: TBooleanToggleNode;
BooleanTrigger101: TBooleanTriggerNode;
IntegerSequencer102: TIntegerSequencerNode;
IntegerTrigger103: TIntegerTriggerNode;
TimeTrigger104: TTimeTriggerNode;
KeySensor105: TKeySensorNode;
StringSensor106: TStringSensorNode;
TextureProjector107: TTextureProjectorNode;
TextureProjectorParallel108: TTextureProjectorParallelNode;
HAnimHumanoid109: THAnimHumanoidNode;
HAnimJoint110: THAnimJointNode;
HAnimPose111: THAnimPoseNode;
HAnimSegment112: THAnimSegmentNode;
HAnimSite113: THAnimSiteNode;
ParticleSystem114: TParticleSystemNode;
Script115: TScriptNode;
FontLibrary116: TFontLibraryNode;
CollidableOffset117: TCollidableOffsetNode;
CollidableShape118: TCollidableShapeNode;
CollisionSensor119: TCollisionSensorNode;
CollisionSpace120: TCollisionSpaceNode;
RigidBodyCollection121: TRigidBodyCollectionNode;
IsoSurfaceVolumeData122: TIsoSurfaceVolumeDataNode;
SegmentedVolumeData123: TSegmentedVolumeDataNode;
VolumeData124: TVolumeDataNode;
GeoLOD125: TGeoLODNode;
GeoLocation126: TGeoLocationNode;
GeoMetadata127: TGeoMetadataNode;
GeoPositionInterpolator128: TGeoPositionInterpolatorNode;
GeoProximitySensor129: TGeoProximitySensorNode;
GeoTouchSensor130: TGeoTouchSensorNode;
GeoTransform131: TGeoTransformNode;
GeoViewpoint132: TGeoViewpointNode;
ContourPolyline2D133: TContourPolyline2DNode;
NurbsCurve2D134: TNurbsCurve2DNode;
NurbsOrientationInterpolator135: TNurbsOrientationInterpolatorNode;
NurbsPositionInterpolator136: TNurbsPositionInterpolatorNode;
NurbsSet137: TNurbsSetNode;
NurbsSurfaceInterpolator138: TNurbsSurfaceInterpolatorNode;
LayoutGroup139: TLayoutGroupNode;
ScreenGroup140: TScreenGroupNode;
LinePickSensor141: TLinePickSensorNode;
PickableGroup142: TPickableGroupNode;
PointPickSensor143: TPointPickSensorNode;
PrimitivePickSensor144: TPrimitivePickSensorNode;
VolumePickSensor145: TVolumePickSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
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
EnvironmentLight49 := TEnvironmentLightNode.Create;
EnvironmentLight49.Origin := Vector3(0,0,0);
EnvironmentLight49.Rotation := Vector4(0,0,1,0);
{ .AddChildren }
Group7.AddChildren([EnvironmentLight49]);
PointLight50 := TPointLightNode.Create;
{ .AddChildren }
Group7.AddChildren([PointLight50]);
SpotLight51 := TSpotLightNode.Create;
SpotLight51.BeamWidth := 0.589049;
{ .AddChildren }
Group7.AddChildren([SpotLight51]);
Billboard52 := TBillboardNode.Create;
{ .AddChildren }
Group7.AddChildren([Billboard52]);
Collision53 := TCollisionNode.Create;
{ .AddChildren }
Group7.AddChildren([Collision53]);
LOD54 := TLODNode.Create;
{ .AddChildren }
Group7.AddChildren([LOD54]);
NavigationInfo55 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo55]);
OrthoViewpoint56 := TOrthoViewpointNode.Create;
{ .AddChildren }
Group7.AddChildren([OrthoViewpoint56]);
Viewpoint57 := TViewpointNode.Create;
{ .AddChildren }
Group7.AddChildren([Viewpoint57]);
ViewpointGroup58 := TViewpointGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([ViewpointGroup58]);
Anchor59 := TAnchorNode.Create;
{ .AddChildren }
Group7.AddChildren([Anchor59]);
Inline60 := TInlineNode.Create;
{ .AddChildren }
Group7.AddChildren([Inline60]);
LoadSensor61 := TLoadSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([LoadSensor61]);
CylinderSensor62 := TCylinderSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([CylinderSensor62]);
PlaneSensor63 := TPlaneSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([PlaneSensor63]);
SphereSensor64 := TSphereSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([SphereSensor64]);
TouchSensor65 := TTouchSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([TouchSensor65]);
ClipPlane66 := TClipPlaneNode.Create;
{ .AddChildren }
Group7.AddChildren([ClipPlane66]);
Shape67 := TShapeNode.Create;
{ .AddChildren }
Group7.AddChildren([Shape67]);
Analyser68 := TAnalyserNode.Create;
{ .AddChildren }
Group7.AddChildren([Analyser68]);
AudioDestination69 := TAudioDestinationNode.Create;
{ .AddChildren }
Group7.AddChildren([AudioDestination69]);
BiquadFilter70 := TBiquadFilterNode.Create;
BiquadFilter70.Type := 'LOWPASS';
{ .AddChildren }
Group7.AddChildren([BiquadFilter70]);
BufferAudioSource71 := TBufferAudioSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([BufferAudioSource71]);
ChannelMerger72 := TChannelMergerNode.Create;
{ .AddChildren }
Group7.AddChildren([ChannelMerger72]);
ChannelSelector73 := TChannelSelectorNode.Create;
{ .AddChildren }
Group7.AddChildren([ChannelSelector73]);
ChannelSplitter74 := TChannelSplitterNode.Create;
{ .AddChildren }
Group7.AddChildren([ChannelSplitter74]);
Convolver75 := TConvolverNode.Create;
{ .AddChildren }
Group7.AddChildren([Convolver75]);
Delay76 := TDelayNode.Create;
{ .AddChildren }
Group7.AddChildren([Delay76]);
DynamicsCompressor77 := TDynamicsCompressorNode.Create;
{ .AddChildren }
Group7.AddChildren([DynamicsCompressor77]);
Gain78 := TGainNode.Create;
{ .AddChildren }
Group7.AddChildren([Gain78]);
ListenerPointSource79 := TListenerPointSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([ListenerPointSource79]);
MicrophoneSource80 := TMicrophoneSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([MicrophoneSource80]);
OscillatorSource81 := TOscillatorSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([OscillatorSource81]);
Sound82 := TSoundNode.Create;
{ .AddChildren }
Group7.AddChildren([Sound82]);
SpatialSound83 := TSpatialSoundNode.Create;
{ .AddChildren }
Group7.AddChildren([SpatialSound83]);
StreamAudioDestination84 := TStreamAudioDestinationNode.Create;
{ .AddChildren }
Group7.AddChildren([StreamAudioDestination84]);
StreamAudioSource85 := TStreamAudioSourceNode.Create;
{ .AddChildren }
Group7.AddChildren([StreamAudioSource85]);
WaveShaper86 := TWaveShaperNode.Create;
{ .AddChildren }
Group7.AddChildren([WaveShaper86]);
TimeSensor87 := TTimeSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([TimeSensor87]);
CADAssembly88 := TCADAssemblyNode.Create;
{ .AddChildren }
Group7.AddChildren([CADAssembly88]);
CADFace89 := TCADFaceNode.Create;
{ .AddChildren }
Group7.AddChildren([CADFace89]);
CADLayer90 := TCADLayerNode.Create;
{ .AddChildren }
Group7.AddChildren([CADLayer90]);
CADPart91 := TCADPartNode.Create;
{ .AddChildren }
Group7.AddChildren([CADPart91]);
DISEntityManager92 := TDISEntityManagerNode.Create;
{ .AddChildren }
Group7.AddChildren([DISEntityManager92]);
DISEntityTypeMapping93 := TDISEntityTypeMappingNode.Create;
{ .AddChildren }
Group7.AddChildren([DISEntityTypeMapping93]);
EspduTransform94 := TEspduTransformNode.Create;
{ .AddChildren }
Group7.AddChildren([EspduTransform94]);
ReceiverPdu95 := TReceiverPduNode.Create;
{ .AddChildren }
Group7.AddChildren([ReceiverPdu95]);
SignalPdu96 := TSignalPduNode.Create;
{ .AddChildren }
Group7.AddChildren([SignalPdu96]);
TransmitterPdu97 := TTransmitterPduNode.Create;
{ .AddChildren }
Group7.AddChildren([TransmitterPdu97]);
BooleanFilter98 := TBooleanFilterNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanFilter98]);
BooleanSequencer99 := TBooleanSequencerNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanSequencer99]);
BooleanToggle100 := TBooleanToggleNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanToggle100]);
BooleanTrigger101 := TBooleanTriggerNode.Create;
{ .AddChildren }
Group7.AddChildren([BooleanTrigger101]);
IntegerSequencer102 := TIntegerSequencerNode.Create;
{ .AddChildren }
Group7.AddChildren([IntegerSequencer102]);
IntegerTrigger103 := TIntegerTriggerNode.Create;
{ .AddChildren }
Group7.AddChildren([IntegerTrigger103]);
TimeTrigger104 := TTimeTriggerNode.Create;
{ .AddChildren }
Group7.AddChildren([TimeTrigger104]);
KeySensor105 := TKeySensorNode.Create;
KeySensor105.Enabled := False;
{ .AddChildren }
Group7.AddChildren([KeySensor105]);
StringSensor106 := TStringSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([StringSensor106]);
TextureProjector107 := TTextureProjectorNode.Create;
TextureProjector107.AmbientIntensity := 0;
TextureProjector107.Color := Vector3(1,1,1);
TextureProjector107.FieldOfView := 0.7854;
TextureProjector107.Intensity := 0.7854;
TextureProjector107.UpVector := Vector3(0,1,0);
{ .AddChildren }
Group7.AddChildren([TextureProjector107]);
TextureProjectorParallel108 := TTextureProjectorParallelNode.Create;
TextureProjectorParallel108.AmbientIntensity := 0;
TextureProjectorParallel108.Color := Vector3(1,1,1);
TextureProjectorParallel108.Intensity := 0.7854;
TextureProjectorParallel108.UpVector := Vector3(0,1,0);
{ .AddChildren }
Group7.AddChildren([TextureProjectorParallel108]);
HAnimHumanoid109 := THAnimHumanoidNode.Create;
HAnimHumanoid109.Version := '2.0';
{ .AddChildren }
Group7.AddChildren([HAnimHumanoid109]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.SetUlimit([0,0,0]);
HAnimJoint110.SetLlimit([0,0,0]);
{ .AddChildren }
Group7.AddChildren([HAnimJoint110]);
HAnimPose111 := THAnimPoseNode.Create;
HAnimPose111.Loa := -1;
HAnimPose111.TransitionDuration := 0;
{ .AddChildren }
Group7.AddChildren([HAnimPose111]);
HAnimSegment112 := THAnimSegmentNode.Create;
{ .AddChildren }
Group7.AddChildren([HAnimSegment112]);
HAnimSite113 := THAnimSiteNode.Create;
{ .AddChildren }
Group7.AddChildren([HAnimSite113]);
ParticleSystem114 := TParticleSystemNode.Create;
{ .AddChildren }
Group7.AddChildren([ParticleSystem114]);
Script115 := TScriptNode.Create;
{ .AddChildren }
Group7.AddChildren([Script115]);
FontLibrary116 := TFontLibraryNode.Create;
{ .AddChildren }
Group7.AddChildren([FontLibrary116]);
CollidableOffset117 := TCollidableOffsetNode.Create;
{ .AddChildren }
Group7.AddChildren([CollidableOffset117]);
CollidableShape118 := TCollidableShapeNode.Create;
{ .AddChildren }
Group7.AddChildren([CollidableShape118]);
CollisionSensor119 := TCollisionSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([CollisionSensor119]);
CollisionSpace120 := TCollisionSpaceNode.Create;
{ .AddChildren }
Group7.AddChildren([CollisionSpace120]);
RigidBodyCollection121 := TRigidBodyCollectionNode.Create;
{ .AddChildren }
Group7.AddChildren([RigidBodyCollection121]);
IsoSurfaceVolumeData122 := TIsoSurfaceVolumeDataNode.Create;
{ .AddChildren }
Group7.AddChildren([IsoSurfaceVolumeData122]);
SegmentedVolumeData123 := TSegmentedVolumeDataNode.Create;
{ .AddChildren }
Group7.AddChildren([SegmentedVolumeData123]);
VolumeData124 := TVolumeDataNode.Create;
{ .AddChildren }
Group7.AddChildren([VolumeData124]);
GeoLOD125 := TGeoLODNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoLOD125]);
GeoLocation126 := TGeoLocationNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoLocation126]);
GeoMetadata127 := TGeoMetadataNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoMetadata127]);
GeoPositionInterpolator128 := TGeoPositionInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoPositionInterpolator128]);
GeoProximitySensor129 := TGeoProximitySensorNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoProximitySensor129]);
GeoTouchSensor130 := TGeoTouchSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoTouchSensor130]);
GeoTransform131 := TGeoTransformNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoTransform131]);
GeoViewpoint132 := TGeoViewpointNode.Create;
{ .AddChildren }
Group7.AddChildren([GeoViewpoint132]);
ContourPolyline2D133 := TContourPolyline2DNode.Create;
{ .AddChildren }
Group7.AddChildren([ContourPolyline2D133]);
NurbsCurve2D134 := TNurbsCurve2DNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsCurve2D134]);
NurbsOrientationInterpolator135 := TNurbsOrientationInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsOrientationInterpolator135]);
NurbsPositionInterpolator136 := TNurbsPositionInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsPositionInterpolator136]);
NurbsSet137 := TNurbsSetNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsSet137]);
NurbsSurfaceInterpolator138 := TNurbsSurfaceInterpolatorNode.Create;
{ .AddChildren }
Group7.AddChildren([NurbsSurfaceInterpolator138]);
LayoutGroup139 := TLayoutGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([LayoutGroup139]);
ScreenGroup140 := TScreenGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([ScreenGroup140]);
LinePickSensor141 := TLinePickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([LinePickSensor141]);
PickableGroup142 := TPickableGroupNode.Create;
{ .AddChildren }
Group7.AddChildren([PickableGroup142]);
PointPickSensor143 := TPointPickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([PointPickSensor143]);
PrimitivePickSensor144 := TPrimitivePickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([PrimitivePickSensor144]);
VolumePickSensor145 := TVolumePickSensorNode.Create;
{ .AddChildren }
Group7.AddChildren([VolumePickSensor145]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
