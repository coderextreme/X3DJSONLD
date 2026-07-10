function Filters: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Sphere23: TSphereNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
Sphere28: TSphereNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Appearance31: TAppearanceNode;
Material32: TMaterialNode;
Sphere33: TSphereNode;
Transform34: TTransformNode;
Transform35: TTransformNode;
Transform36: TTransformNode;
Transform37: TTransformNode;
Transform38: TTransformNode;
Transform39: TTransformNode;
Transform40: TTransformNode;
Shape41: TShapeNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Cylinder44: TCylinderNode;
ListenerPointSource45: TListenerPointSourceNode;
StreamAudioDestination46: TStreamAudioDestinationNode;
DynamicsCompressor47: TDynamicsCompressorNode;
Gain48: TGainNode;
SpatialSound49: TSpatialSoundNode;
Gain50: TGainNode;
Analyser51: TAnalyserNode;
BiquadFilter52: TBiquadFilterNode;
AudioClip53: TAudioClipNode;
SpatialSound54: TSpatialSoundNode;
Gain55: TGainNode;
Analyser56: TAnalyserNode;
BiquadFilter57: TBiquadFilterNode;
AudioClip58: TAudioClipNode;
SpatialSound59: TSpatialSoundNode;
Gain60: TGainNode;
Analyser61: TAnalyserNode;
BiquadFilter62: TBiquadFilterNode;
AudioClip63: TAudioClipNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Filters.x3d';
X3D0.Meta['description'] := 'This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.';
X3D0.Meta['info'] := 'This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.';
X3D0.Meta['creator'] := 'Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman';
X3D0.Meta['created'] := '28 October 2020';
X3D0.Meta['modified'] := '5 December 2021';
X3D0.Meta['reference'] := 'CHANGELOG.txt';
X3D0.Meta['TODO'] := 'credit for audio files';
X3D0.Meta['reference'] := 'https://www.medialab.hmu.gr/minipages/x3domAudio';
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'Filters.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Background17 := TBackgroundNode.Create;
Background17.SetSkyColor([Vector3(0.2,0.2,0.2)]);
{ .AddChildren }
Group14.AddChildren([Background17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'View entire audio model';
Viewpoint18.Orientation := Vector4(1,0,0,-0.5);
Viewpoint18.Position := Vector3(0,500,600);
Viewpoint18.RetainUserOffsets := True;
{ .AddChildren }
Group14.AddChildren([Viewpoint18]);
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(-200,50,0);
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.1,0.1,0.1);
Material22.EmissiveColor := Vector3(0.8,0.8,0.8);
Material22.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
Sphere23 := TSphereNode.Create;
Sphere23.Radius := 30;
{ .SetGeometry }
Shape20.Geometry := Sphere23;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group14.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,50,0);
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0.1,0.1,0.1);
Material27.EmissiveColor := Vector3(0.8,0.8,0.8);
Material27.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape25.Appearance := Appearance26;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 30;
{ .SetGeometry }
Shape25.Geometry := Sphere28;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Group14.AddChildren([Transform24]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(200,50,0);
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Material32 := TMaterialNode.Create;
Material32.DiffuseColor := Vector3(0.1,0.1,0.1);
Material32.EmissiveColor := Vector3(0.8,0.8,0.8);
Material32.SpecularColor := Vector3(0.01,0.01,0.01);
{ .SetMaterial }
Appearance31.Material := Material32;
{ .SetAppearance }
Shape30.Appearance := Appearance31;
Sphere33 := TSphereNode.Create;
Sphere33.Radius := 30;
{ .SetGeometry }
Shape30.Geometry := Sphere33;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Group14.AddChildren([Transform29]);
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0,50,0);
{ .AddChildren }
Group14.AddChildren([Transform34]);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,100,0);
{ .AddChildren }
Group14.AddChildren([Transform35]);
Transform36 := TTransformNode.Create;
Transform36.Translation := Vector3(15,100,0);
{ .AddChildren }
Group14.AddChildren([Transform36]);
Transform37 := TTransformNode.Create;
Transform37.Translation := Vector3(30,100,0);
{ .AddChildren }
Group14.AddChildren([Transform37]);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(-15,100,0);
{ .AddChildren }
Group14.AddChildren([Transform38]);
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(-30,100,0);
{ .AddChildren }
Group14.AddChildren([Transform39]);
Transform40 := TTransformNode.Create;
Shape41 := TShapeNode.Create;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(0.1,0.1,0.1);
Material43.Shininess := 0.8;
Material43.SpecularColor := Vector3(0.5,0.6,0.7);
{ .SetMaterial }
Appearance42.Material := Material43;
{ .SetAppearance }
Shape41.Appearance := Appearance42;
Cylinder44 := TCylinderNode.Create;
Cylinder44.Radius := 500;
{ .SetGeometry }
Shape41.Geometry := Cylinder44;
{ .AddChild }
Transform40.AddChildren([Shape41]);
{ .AddChildren }
Group14.AddChildren([Transform40]);
ListenerPointSource45 := TListenerPointSourceNode.Create;
ListenerPointSource45.TrackCurrentView := True;
{ .AddChildren }
Group14.AddChildren([ListenerPointSource45]);
StreamAudioDestination46 := TStreamAudioDestinationNode.Create;
DynamicsCompressor47 := TDynamicsCompressorNode.Create;
Gain48 := TGainNode.Create;
SpatialSound49 := TSpatialSoundNode.Create;
Gain50 := TGainNode.Create;
Analyser51 := TAnalyserNode.Create;
BiquadFilter52 := TBiquadFilterNode.Create;
BiquadFilter52.Detune := 50;
BiquadFilter52.Frequency := 600;
BiquadFilter52.QualityFactor := 30;
BiquadFilter52.Type := 'ALLPASS';
AudioClip53 := TAudioClipNode.Create;
AudioClip53.Description := 'Techno beat';
AudioClip53.Loop := True;
AudioClip53.SetUrl(['sound/techno_beat.mp3','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3']);
{ .AddChildren }
BiquadFilter52.AddChildren([AudioClip53]);
{ .AddChildren }
Analyser51.AddChildren([BiquadFilter52]);
{ .AddChildren }
Gain50.AddChildren([Analyser51]);
{ .AddChildren }
SpatialSound49.AddChildren([Gain50]);
{ .AddChildren }
Gain48.AddChildren([SpatialSound49]);
SpatialSound54 := TSpatialSoundNode.Create;
Gain55 := TGainNode.Create;
Analyser56 := TAnalyserNode.Create;
BiquadFilter57 := TBiquadFilterNode.Create;
BiquadFilter57.Detune := 15;
BiquadFilter57.Frequency := 600;
BiquadFilter57.QualityFactor := 15;
BiquadFilter57.Type := 'ALLPASS';
AudioClip58 := TAudioClipNode.Create;
AudioClip58.Description := 'Simple beat';
AudioClip58.Loop := True;
AudioClip58.SetUrl(['sound/beat.mp3','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3']);
{ .AddChildren }
BiquadFilter57.AddChildren([AudioClip58]);
{ .AddChildren }
Analyser56.AddChildren([BiquadFilter57]);
{ .AddChildren }
Gain55.AddChildren([Analyser56]);
{ .AddChildren }
SpatialSound54.AddChildren([Gain55]);
{ .AddChildren }
Gain48.AddChildren([SpatialSound54]);
SpatialSound59 := TSpatialSoundNode.Create;
Gain60 := TGainNode.Create;
Analyser61 := TAnalyserNode.Create;
BiquadFilter62 := TBiquadFilterNode.Create;
BiquadFilter62.Frequency := 1000;
BiquadFilter62.QualityFactor := 0;
BiquadFilter62.Type := 'ALLPASS';
AudioClip63 := TAudioClipNode.Create;
AudioClip63.Description := 'Wobble loop';
AudioClip63.Loop := True;
AudioClip63.SetUrl(['sound/wobble_loop.mp3','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3']);
{ .AddChildren }
BiquadFilter62.AddChildren([AudioClip63]);
{ .AddChildren }
Analyser61.AddChildren([BiquadFilter62]);
{ .AddChildren }
Gain60.AddChildren([Analyser61]);
{ .AddChildren }
SpatialSound59.AddChildren([Gain60]);
{ .AddChildren }
Gain48.AddChildren([SpatialSound59]);
{ .AddChildren }
DynamicsCompressor47.AddChildren([Gain48]);
{ .AddChildren }
StreamAudioDestination46.AddChildren([DynamicsCompressor47]);
{ .AddChildren }
Group14.AddChildren([StreamAudioDestination46]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
