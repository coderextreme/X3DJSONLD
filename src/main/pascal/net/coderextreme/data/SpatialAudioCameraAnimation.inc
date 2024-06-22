function SpatialAudioCameraAnimation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
TimeSensor19: TTimeSensorNode;
PositionInterpolator20: TPositionInterpolatorNode;
OrientationInterpolator21: TOrientationInterpolatorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Box30: TBoxNode;
Transform31: TTransformNode;
Shape32: TShapeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Sphere35: TSphereNode;
Billboard36: TBillboardNode;
Transform37: TTransformNode;
Shape38: TShapeNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
Text41: TTextNode;
FontStyle42: TFontStyleNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
Sphere47: TSphereNode;
Billboard48: TBillboardNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Text53: TTextNode;
FontStyle54: TFontStyleNode;
ListenerPointSource55: TListenerPointSourceNode;
StreamAudioDestination56: TStreamAudioDestinationNode;
SpatialSound57: TSpatialSoundNode;
Gain58: TGainNode;
AudioClip59: TAudioClipNode;
SpatialSound60: TSpatialSoundNode;
Gain61: TGainNode;
AudioClip62: TAudioClipNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'SpatialAudioCameraAnimation.x3d';
X3D0.Meta['description'] := 'In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.';
X3D0.Meta['info'] := 'This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.';
X3D0.Meta['creator'] := 'Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman';
X3D0.Meta['created'] := '28 October 2020';
X3D0.Meta['modified'] := '5 December 2021';
X3D0.Meta['reference'] := 'CHANGELOG.txt';
X3D0.Meta['TODO'] := 'credit for audio files';
X3D0.Meta['reference'] := 'https://www.medialab.hmu.gr/minipages/x3domAudio';
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'SpatialAudioCameraAnimation.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['images/generic/BK1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png']);
Background17.SetBottomUrl(['images/generic/DN1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png']);
Background17.SetFrontUrl(['images/generic/FR1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png']);
Background17.SetLeftUrl(['images/generic/LF1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png']);
Background17.SetRightUrl(['images/generic/RT1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png']);
Background17.SetTopUrl(['images/generic/UP1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png']);
{ .AddChildren }
Group14.AddChildren([Background17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view';
Viewpoint18.Orientation := Vector4(1,0,0,-0.523599);
Viewpoint18.Position := Vector3(0,2000,3500);
{ .AddChildren }
Group14.AddChildren([Viewpoint18]);
TimeSensor19 := TTimeSensorNode.Create;
TimeSensor19.CycleInterval := 33.333332;
TimeSensor19.Loop := True;
{ .AddChildren }
Group14.AddChildren([TimeSensor19]);
PositionInterpolator20 := TPositionInterpolatorNode.Create;
PositionInterpolator20.SetKey([0,0.25,0.5,0.75,1]);
PositionInterpolator20.SetKeyValue([Vector3(0,2000,3500),Vector3(0,2000,0),Vector3(0,2000,-3500),Vector3(0,2000,0),Vector3(0,2000,3500)]);
{ .AddChildren }
Group14.AddChildren([PositionInterpolator20]);
OrientationInterpolator21 := TOrientationInterpolatorNode.Create;
OrientationInterpolator21.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator21.SetKeyValue([Vector4(1,0,0,-0.523599),Vector4(0.99999,0.003554,0.002727,-1.309007),Vector4(0,-0.965926,-0.258819,-3.141593),Vector4(0.002282,-0.793351,-0.60876,-3.135645),Vector4(1,-0.000001,0,-0.523599)]);
{ .AddChildren }
Group14.AddChildren([OrientationInterpolator21]);
Group14.AddRoute(TimeSensor19.EventFraction_changed, PositionInterpolator20.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(PositionInterpolator20.EventValue_changed, Viewpoint18.EventSet_position);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor19.EventFraction_changed, OrientationInterpolator21.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator21.EventValue_changed, Viewpoint18.EventSet_orientation);
{ .AddX3DRoute }
Transform26 := TTransformNode.Create;
Transform26.Translation := Vector3(1.241,0,0.358);
Shape27 := TShapeNode.Create;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(0.122,0.114,0.125);
{ .SetMaterial }
Appearance28.Material := Material29;
{ .SetAppearance }
Shape27.Appearance := Appearance28;
Box30 := TBoxNode.Create;
Box30.Size := Vector3(2000,1,2000);
{ .SetGeometry }
Shape27.Geometry := Box30;
{ .AddChild }
Transform26.AddChildren([Shape27]);
{ .AddChildren }
Group14.AddChildren([Transform26]);
Transform31 := TTransformNode.Create;
Transform31.Translation := Vector3(-933.123474,0,-926.253235);
Shape32 := TShapeNode.Create;
Appearance33 := TAppearanceNode.Create;
Material34 := TMaterialNode.Create;
Material34.DiffuseColor := Vector3(0.690196,0.101961,0.101961);
{ .SetMaterial }
Appearance33.Material := Material34;
{ .SetAppearance }
Shape32.Appearance := Appearance33;
Sphere35 := TSphereNode.Create;
Sphere35.Radius := 100;
{ .SetGeometry }
Shape32.Geometry := Sphere35;
{ .AddChild }
Transform31.AddChildren([Shape32]);
Billboard36 := TBillboardNode.Create;
Transform37 := TTransformNode.Create;
Transform37.Rotation := Vector4(1,0,0,-0.5);
Transform37.Scale := Vector3(100,100,100);
Transform37.Translation := Vector3(0,100,0);
Shape38 := TShapeNode.Create;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.AmbientIntensity := 0.0933;
Material40.DiffuseColor := Vector3(1,1,1);
Material40.Shininess := 0.51;
Material40.SpecularColor := Vector3(0.46,0.46,0.46);
{ .SetMaterial }
Appearance39.Material := Material40;
{ .SetAppearance }
Shape38.Appearance := Appearance39;
Text41 := TTextNode.Create;
Text41.SetText(['Violin']);
FontStyle42 := TFontStyleNode.Create;
FontStyle42.Family := ffTimes, ffSerif;
FontStyle42.Style := 'BOLD';
{ .SetFontStyle }
Text41.FontStyle := FontStyle42;
{ .SetGeometry }
Shape38.Geometry := Text41;
{ .AddChild }
Transform37.AddChildren([Shape38]);
{ .AddChildren }
Billboard36.AddChildren([Transform37]);
{ .AddChildren }
Transform31.AddChildren([Billboard36]);
{ .AddChildren }
Group14.AddChildren([Transform31]);
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(933.475586,0,924.423218);
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.105882,0.694118,0.580392);
{ .SetMaterial }
Appearance45.Material := Material46;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
Sphere47 := TSphereNode.Create;
Sphere47.Radius := 100;
{ .SetGeometry }
Shape44.Geometry := Sphere47;
{ .AddChild }
Transform43.AddChildren([Shape44]);
Billboard48 := TBillboardNode.Create;
Transform49 := TTransformNode.Create;
Transform49.Rotation := Vector4(1,0,0,-0.5);
Transform49.Scale := Vector3(100,100,100);
Transform49.Translation := Vector3(0,100,0);
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.AmbientIntensity := 0.0933;
Material52.DiffuseColor := Vector3(1,1,1);
Material52.Shininess := 0.51;
Material52.SpecularColor := Vector3(0.46,0.46,0.46);
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
Text53 := TTextNode.Create;
Text53.SetText(['Saxophone']);
FontStyle54 := TFontStyleNode.Create;
FontStyle54 := FontStyle42;
{ .SetFontStyle }
Text53.FontStyle := FontStyle54;
{ .SetGeometry }
Shape50.Geometry := Text53;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Billboard48.AddChildren([Transform49]);
{ .AddChildren }
Transform43.AddChildren([Billboard48]);
{ .AddChildren }
Group14.AddChildren([Transform43]);
ListenerPointSource55 := TListenerPointSourceNode.Create;
ListenerPointSource55.TrackCurrentView := True;
{ .AddChildren }
Group14.AddChildren([ListenerPointSource55]);
StreamAudioDestination56 := TStreamAudioDestinationNode.Create;
SpatialSound57 := TSpatialSoundNode.Create;
Gain58 := TGainNode.Create;
AudioClip59 := TAudioClipNode.Create;
AudioClip59.Description := 'Violin';
AudioClip59.Loop := True;
AudioClip59.SetUrl(['sound/violin.mp3','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3']);
{ .AddChildren }
Gain58.AddChildren([AudioClip59]);
{ .AddChildren }
SpatialSound57.AddChildren([Gain58]);
{ .AddChildren }
StreamAudioDestination56.AddChildren([SpatialSound57]);
SpatialSound60 := TSpatialSoundNode.Create;
Gain61 := TGainNode.Create;
AudioClip62 := TAudioClipNode.Create;
AudioClip62.Description := 'Saxophone';
AudioClip62.Loop := True;
AudioClip62.SetUrl(['sound/saxophone.mp3','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3']);
{ .AddChildren }
Gain61.AddChildren([AudioClip62]);
{ .AddChildren }
SpatialSound60.AddChildren([Gain61]);
{ .AddChildren }
StreamAudioDestination56.AddChildren([SpatialSound60]);
{ .AddChildren }
Group14.AddChildren([StreamAudioDestination56]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
