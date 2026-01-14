function AllAudioGraphNodesTest: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Shape12: TShapeNode;
Appearance13: TAppearanceNode;
AcousticProperties14: TAcousticPropertiesNode;
Material15: TMaterialNode;
Box16: TBoxNode;
Sound17: TSoundNode;
AudioClip18: TAudioClipNode;
Sound19: TSoundNode;
MovieTexture20: TMovieTextureNode;
SpatialSound21: TSpatialSoundNode;
Analyser22: TAnalyserNode;
StreamAudioDestination23: TStreamAudioDestinationNode;
BiquadFilter24: TBiquadFilterNode;
ChannelMerger25: TChannelMergerNode;
ChannelSelector26: TChannelSelectorNode;
ChannelSplitter27: TChannelSplitterNode;
Convolver28: TConvolverNode;
Delay29: TDelayNode;
DynamicsCompressor30: TDynamicsCompressorNode;
Gain31: TGainNode;
StreamAudioDestination32: TStreamAudioDestinationNode;
WaveShaper33: TWaveShaperNode;
BufferAudioSource34: TBufferAudioSourceNode;
ListenerPointSource35: TListenerPointSourceNode;
MicrophoneSource36: TMicrophoneSourceNode;
OscillatorSource37: TOscillatorSourceNode;
StreamAudioSource38: TStreamAudioSourceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Sound'] := 3;
X3D0.Meta['title'] := 'AllAudioGraphNodesTest.x3d';
X3D0.Meta['description'] := 'List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['created'] := '25 October 2020';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:18:43 GMT';
X3D0.Meta['warning'] := 'Developmental test, no actual 3D model expected';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'AllAudioGraphNodesTest.x3d';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
AcousticProperties14 := TAcousticPropertiesNode.Create;
AcousticProperties14.Description := 'Testing of X3D4 nodes demonstrating W3C Audio API in progress';
AcousticProperties14.Diffuse := 0.25;
AcousticProperties14.Specular := 1;
AcousticProperties14.Refraction := 0.5;
{ .SetAcousticProperties }
Appearance13.AcousticProperties := AcousticProperties14;
Material15 := TMaterialNode.Create;
{ .SetMaterial }
Appearance13.Material := Material15;
{ .SetAppearance }
Shape12.Appearance := Appearance13;
Box16 := TBoxNode.Create;
{ .SetGeometry }
Shape12.Geometry := Box16;
{ .AddChildren }
Group10.AddChildren([Shape12]);
Sound17 := TSoundNode.Create;
Sound17.Location := Vector3(0,1.6,0);
AudioClip18 := TAudioClipNode.Create;
AudioClip18.Description := 'testing';
AudioClip18.SetUrl(['sound/saxophone.mp3','https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3']);
{ .SetSource }
Sound17.Source := AudioClip18;
{ .AddChildren }
Group10.AddChildren([Sound17]);
Sound19 := TSoundNode.Create;
Sound19.Location := Vector3(0,1.6,0);
MovieTexture20 := TMovieTextureNode.Create;
MovieTexture20.Description := 'testing';
MovieTexture20.SetUrl(['bogus.mpg','https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg']);
{ .SetSource }
Sound19.Source := MovieTexture20;
{ .AddChildren }
Group10.AddChildren([Sound19]);
SpatialSound21 := TSpatialSoundNode.Create;
Analyser22 := TAnalyserNode.Create;
StreamAudioDestination23 := TStreamAudioDestinationNode.Create;
BiquadFilter24 := TBiquadFilterNode.Create;
ChannelMerger25 := TChannelMergerNode.Create;
ChannelSelector26 := TChannelSelectorNode.Create;
ChannelSplitter27 := TChannelSplitterNode.Create;
Convolver28 := TConvolverNode.Create;
Delay29 := TDelayNode.Create;
DynamicsCompressor30 := TDynamicsCompressorNode.Create;
Gain31 := TGainNode.Create;
StreamAudioDestination32 := TStreamAudioDestinationNode.Create;
WaveShaper33 := TWaveShaperNode.Create;
BufferAudioSource34 := TBufferAudioSourceNode.Create;
{ .AddChildren }
WaveShaper33.AddChildren([BufferAudioSource34]);
ListenerPointSource35 := TListenerPointSourceNode.Create;
{ .AddChildren }
WaveShaper33.AddChildren([ListenerPointSource35]);
MicrophoneSource36 := TMicrophoneSourceNode.Create;
{ .AddChildren }
WaveShaper33.AddChildren([MicrophoneSource36]);
OscillatorSource37 := TOscillatorSourceNode.Create;
{ .AddChildren }
WaveShaper33.AddChildren([OscillatorSource37]);
StreamAudioSource38 := TStreamAudioSourceNode.Create;
{ .AddChildren }
WaveShaper33.AddChildren([StreamAudioSource38]);
{ .AddChildren }
StreamAudioDestination32.AddChildren([WaveShaper33]);
{ .AddChildren }
Gain31.AddChildren([StreamAudioDestination32]);
{ .AddChildren }
DynamicsCompressor30.AddChildren([Gain31]);
{ .AddChildren }
Delay29.AddChildren([DynamicsCompressor30]);
{ .AddChildren }
Convolver28.AddChildren([Delay29]);
{ .AddOutputs }
ChannelSplitter27.Outputs := Convolver28;
{ .AddChildren }
ChannelSelector26.AddChildren([ChannelSplitter27]);
{ .AddChildren }
ChannelMerger25.AddChildren([ChannelSelector26]);
{ .AddChildren }
BiquadFilter24.AddChildren([ChannelMerger25]);
{ .AddChildren }
StreamAudioDestination23.AddChildren([BiquadFilter24]);
{ .AddChildren }
Analyser22.AddChildren([StreamAudioDestination23]);
{ .AddChildren }
SpatialSound21.AddChildren([Analyser22]);
{ .AddChildren }
Group10.AddChildren([SpatialSound21]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
