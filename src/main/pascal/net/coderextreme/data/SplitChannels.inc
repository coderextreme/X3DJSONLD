function SplitChannels: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
Transform19: TTransformNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Box24: TBoxNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
ImageTexture29: TImageTextureNode;
Box30: TBoxNode;
Transform31: TTransformNode;
Shape32: TShapeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Text35: TTextNode;
FontStyle36: TFontStyleNode;
Transform37: TTransformNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
Box42: TBoxNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
ImageTexture47: TImageTextureNode;
Box48: TBoxNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Text53: TTextNode;
FontStyle54: TFontStyleNode;
Transform55: TTransformNode;
Shape56: TShapeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
Box59: TBoxNode;
ListenerPointSource60: TListenerPointSourceNode;
StreamAudioDestination61: TStreamAudioDestinationNode;
Gain62: TGainNode;
ChannelMerger63: TChannelMergerNode;
ChannelSelector64: TChannelSelectorNode;
Gain65: TGainNode;
ChannelSelector66: TChannelSelectorNode;
Gain67: TGainNode;
ChannelSplitter68: TChannelSplitterNode;
AudioClip69: TAudioClipNode;
Transform70: TTransformNode;
Shape71: TShapeNode;
Appearance72: TAppearanceNode;
Material73: TMaterialNode;
ImageTexture74: TImageTextureNode;
Box75: TBoxNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'SplitChannels.x3d';
X3D0.Meta['description'] := 'This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.';
X3D0.Meta['info'] := 'This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.';
X3D0.Meta['creator'] := 'Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman';
X3D0.Meta['created'] := '28 October 2020';
X3D0.Meta['modified'] := '23 April 2023';
X3D0.Meta['reference'] := 'CHANGELOG.txt';
X3D0.Meta['TODO'] := 'credit for audio files';
X3D0.Meta['reference'] := 'http://www.medialab.hmu.gr/minipages/x3domAudio';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'SplitChannels.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['NONE']);
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Background17 := TBackgroundNode.Create;
Background17.SetSkyColor([Vector3(0.2,0.2,0.21)]);
{ .AddChildren }
Group14.AddChildren([Background17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Orientation := Vector4(1,0,0,-0.5);
Viewpoint18.Position := Vector3(0,500,600);
Viewpoint18.RetainUserOffsets := True;
{ .AddChildren }
Group14.AddChildren([Viewpoint18]);
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(100,400,400);
Transform20 := TTransformNode.Create;
Transform20.Rotation := Vector4(1,0,0,-0.5);
Transform20.Translation := Vector3(0,40,0);
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0,1,0);
Material23.EmissiveColor := Vector3(0.8,0.8,0.8);
Material23.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape21.Appearance := Appearance22;
Box24 := TBoxNode.Create;
Box24.Size := Vector3(10,80,0.01);
{ .SetGeometry }
Shape21.Geometry := Box24;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Transform19.AddChildren([Transform20]);
Transform25 := TTransformNode.Create;
Transform25.Rotation := Vector4(1,0,0,-0.5);
Transform25.Translation := Vector3(-2.7,37,0);
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0,1,0);
Material28.EmissiveColor := Vector3(0.8,0.8,0.8);
Material28.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance27.Material := Material28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['images/line.png','https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png']);
{ .SetTexture }
Appearance27.Texture := ImageTexture29;
{ .SetAppearance }
Shape26.Appearance := Appearance27;
Box30 := TBoxNode.Create;
Box30.Size := Vector3(25,83,0.01);
{ .SetGeometry }
Shape26.Geometry := Box30;
{ .AddChild }
Transform25.AddChildren([Shape26]);
{ .AddChildren }
Transform19.AddChildren([Transform25]);
Transform31 := TTransformNode.Create;
Transform31.Rotation := Vector4(1,0,0,-0.5);
Transform31.Scale := Vector3(10,10,10);
Transform31.Translation := Vector3(0,-10,0);
Shape32 := TShapeNode.Create;
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
Material34.AmbientIntensity := 0.0933;
Material34.DiffuseColor := Vector3(0.345,0.345,0.882);
Material34.Shininess := 0.51;
Material34.SpecularColor := Vector3(0.46,0.46,0.46);
{ .SetMaterial }
Appearance33.Material := Material34;
{ .SetAppearance }
Shape32.Appearance := Appearance33;
Text35 := TTextNode.Create;
Text35.SetText(['Right Channel Volume']);
FontStyle36 := TFontStyleNode.Create;
FontStyle36.Family := ffTimes, ffSerif;
FontStyle36.Style := 'BOLD';
{ .SetFontStyle }
Text35.FontStyle := FontStyle36;
{ .SetGeometry }
Shape32.Geometry := Text35;
{ .AddChild }
Transform31.AddChildren([Shape32]);
{ .AddChildren }
Transform19.AddChildren([Transform31]);
{ .AddChildren }
Group14.AddChildren([Transform19]);
Transform37 := TTransformNode.Create;
Transform37.Translation := Vector3(-100,400,400);
Transform38 := TTransformNode.Create;
Transform38.Rotation := Vector4(1,0,0,-0.5);
Transform38.Translation := Vector3(0,40,0);
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(0,1,0);
Material41.EmissiveColor := Vector3(0.8,0.8,0.8);
Material41.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
Box42 := TBoxNode.Create;
Box42.Size := Vector3(10,80,0.01);
{ .SetGeometry }
Shape39.Geometry := Box42;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
Transform37.AddChildren([Transform38]);
Transform43 := TTransformNode.Create;
Transform43.Rotation := Vector4(1,0,0,-0.5);
Transform43.Translation := Vector3(13.2,37,0);
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0,1,0);
Material46.EmissiveColor := Vector3(0.8,0.8,0.8);
Material46.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance45.Material := Material46;
ImageTexture47 := TImageTextureNode.Create;
ImageTexture47.SetUrl(['images/line.png','https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png']);
{ .SetTexture }
Appearance45.Texture := ImageTexture47;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
Box48 := TBoxNode.Create;
Box48.Size := Vector3(25,83,0.01);
{ .SetGeometry }
Shape44.Geometry := Box48;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
Transform37.AddChildren([Transform43]);
Transform49 := TTransformNode.Create;
Transform49.Rotation := Vector4(1,0,0,-0.5);
Transform49.Scale := Vector3(10,10,10);
Transform49.Translation := Vector3(0,-10,0);
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.AmbientIntensity := 0.0933;
Material52.DiffuseColor := Vector3(0.345,0.345,0.882);
Material52.Shininess := 0.51;
Material52.SpecularColor := Vector3(0.46,0.46,0.46);
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
Text53 := TTextNode.Create;
Text53.SetText(['Left Channel Volume']);
FontStyle54 := TFontStyleNode.Create;
FontStyle54 := FontStyle36;
{ .SetFontStyle }
Text53.FontStyle := FontStyle54;
{ .SetGeometry }
Shape50.Geometry := Text53;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Transform37.AddChildren([Transform49]);
{ .AddChildren }
Group14.AddChildren([Transform37]);
Transform55 := TTransformNode.Create;
Shape56 := TShapeNode.Create;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58.DiffuseColor := Vector3(0.1,0.1,0.1);
Material58.Shininess := 0.8;
Material58.SpecularColor := Vector3(0.5,0.6,0.7);
{ .SetMaterial }
Appearance57.Material := Material58;
{ .SetAppearance }
Shape56.Appearance := Appearance57;
Box59 := TBoxNode.Create;
Box59.Size := Vector3(1500,10,500);
{ .SetGeometry }
Shape56.Geometry := Box59;
{ .AddChild }
Transform55.AddChildren([Shape56]);
{ .AddChildren }
Group14.AddChildren([Transform55]);
ListenerPointSource60 := TListenerPointSourceNode.Create;
ListenerPointSource60.TrackCurrentView := True;
{ .AddChildren }
Group14.AddChildren([ListenerPointSource60]);
StreamAudioDestination61 := TStreamAudioDestinationNode.Create;
Gain62 := TGainNode.Create;
ChannelMerger63 := TChannelMergerNode.Create;
ChannelSelector64 := TChannelSelectorNode.Create;
Gain65 := TGainNode.Create;
Gain65 := Gain65;
{ .AddChildren }
ChannelSelector64.AddChildren([Gain65]);
{ .AddChildren }
ChannelMerger63.AddChildren([ChannelSelector64]);
ChannelSelector66 := TChannelSelectorNode.Create;
ChannelSelector66.ChannelSelection := 1;
Gain67 := TGainNode.Create;
Gain67 := Gain65;
{ .AddChildren }
ChannelSelector66.AddChildren([Gain67]);
{ .AddChildren }
ChannelMerger63.AddChildren([ChannelSelector66]);
{ .AddChildren }
Gain62.AddChildren([ChannelMerger63]);
{ .AddChildren }
StreamAudioDestination61.AddChildren([Gain62]);
{ .AddChildren }
Group14.AddChildren([StreamAudioDestination61]);
ChannelSplitter68 := TChannelSplitterNode.Create;
ChannelSplitter68.ChannelCountMode := 'EXPLICIT';
AudioClip69 := TAudioClipNode.Create;
AudioClip69.Description := 'Violin';
AudioClip69.SetUrl(['sound/violin.mp3','https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3']);
{ .AddOutputs }
ChannelSplitter68.Outputs := AudioClip69;
{ .AddChildren }
Group14.AddChildren([ChannelSplitter68]);
Transform70 := TTransformNode.Create;
Transform70.Rotation := Vector4(1,0,0,-0.5);
Transform70.Translation := Vector3(0,100,0);
Shape71 := TShapeNode.Create;
Appearance72 := TAppearanceNode.Create;
Material73 := TMaterialNode.Create;
Material73.DiffuseColor := Vector3(0.3,1,0.3);
Material73.EmissiveColor := Vector3(0.8,0.8,0.8);
Material73.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance72.Material := Material73;
ImageTexture74 := TImageTextureNode.Create;
ImageTexture74.SetUrl(['images/loudspeaker.png','https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png']);
{ .SetTexture }
Appearance72.Texture := ImageTexture74;
{ .SetAppearance }
Shape71.Appearance := Appearance72;
Box75 := TBoxNode.Create;
Box75.Size := Vector3(100,100,0.001);
{ .SetGeometry }
Shape71.Geometry := Box75;
{ .AddChild }
Transform70.AddChildren([Shape71]);
{ .AddChildren }
Group14.AddChildren([Transform70]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
