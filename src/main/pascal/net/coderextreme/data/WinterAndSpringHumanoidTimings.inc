function WinterAndSpringHumanoidTimings: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
WorldInfo17: TWorldInfoNode;
Viewpoint18: TViewpointNode;
Viewpoint19: TViewpointNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Text24: TTextNode;
FontStyle25: TFontStyleNode;
Transform26: TTransformNode;
Transform27: TTransformNode;
Transform28: TTransformNode;
PositionInterpolator29: TPositionInterpolatorNode;
MetadataString30: TMetadataStringNode;
PositionInterpolator31: TPositionInterpolatorNode;
MetadataString32: TMetadataStringNode;
PositionInterpolator33: TPositionInterpolatorNode;
MetadataString34: TMetadataStringNode;
PositionInterpolator35: TPositionInterpolatorNode;
MetadataString36: TMetadataStringNode;
Background37: TBackgroundNode;
Background38: TBackgroundNode;
Background39: TBackgroundNode;
Background40: TBackgroundNode;
TimeSensor41: TTimeSensorNode;
TimeSensor42: TTimeSensorNode;
BooleanSequencer43: TBooleanSequencerNode;
BooleanSequencer44: TBooleanSequencerNode;
BooleanSequencer45: TBooleanSequencerNode;
BooleanSequencer46: TBooleanSequencerNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'WinterAndSpringHumanoidTimings.x3d';
X3D0.Meta['description'] := 'Example animation timings, manually translated from tool outputs and export.';
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv';
X3D0.Meta['info'] := 'reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)';
X3D0.Meta['creator'] := 'Katy Schildmeyer';
X3D0.Meta['creator'] := 'Carol McDonald';
X3D0.Meta['translator'] := 'Joe Williams';
X3D0.Meta['translator'] := 'Don Brutzman';
X3D0.Meta['created'] := '2 July 2023';
X3D0.Meta['translated'] := '9 July 2023';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:21:02 GMT';
X3D0.Meta['hint'] := 'MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d';
X3D0.Meta['generator'] := 'Cinema 4D https://www.maxon.net/en/cinema-4d';
Group16 := TGroupNode.Create;
WorldInfo17 := TWorldInfoNode.Create;
WorldInfo17.Title := 'WinterAndSpringHumanoidTimings.x3d';
{ .AddChildren }
Group16.AddChildren([WorldInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Hello characters 1';
Viewpoint18.Position := Vector3(0,2,40);
{ .AddChildren }
Group16.AddChildren([Viewpoint18]);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Description := 'Hello characters 2';
Viewpoint19.Position := Vector3(-15,10,30);
Viewpoint19.Orientation := Vector4(0,1,0,-0.643501);
Viewpoint19.CenterOfRotation := Vector3(0,10,10);
{ .AddChildren }
Group16.AddChildren([Viewpoint19]);
Transform20 := TTransformNode.Create;
Transform20.Translation := Vector3(9.8557,0.95,3.5);
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.960784,0.894118,0);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape21.Appearance := Appearance22;
Text24 := TTextNode.Create;
Text24.SetText(['This scene tests','','experimental approaches','','for human animation']);
FontStyle25 := TFontStyleNode.Create;
FontStyle25.Family := ffSans;
FontStyle25.Style := 'BOLD';
FontStyle25.Size := 0.8;
FontStyle25.Justify := fjMiddle;
FontStyle25.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text24.FontStyle := FontStyle25;
{ .SetGeometry }
Shape21.Geometry := Text24;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Group16.AddChildren([Transform20]);
Transform26 := TTransformNode.Create;
Transform26.Translation := Vector3(11.3657,0.475,3.377131);
{ .AddChildren }
Group16.AddChildren([Transform26]);
Transform27 := TTransformNode.Create;
Transform27.Translation := Vector3(10.55646,0.475,3.391616);
{ .AddChildren }
Group16.AddChildren([Transform27]);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(9.167682,0.475,3.332752);
{ .AddChildren }
Group16.AddChildren([Transform28]);
PositionInterpolator29 := TPositionInterpolatorNode.Create;
PositionInterpolator29.SetKey([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator29.SetKeyValue([Vector3(6.8557,0.95,0.5),Vector3(6.8557,0.95,0.5),Vector3(6.8557,0.95,0.5),Vector3(9.8557,0.95,3.5),Vector3(9.8557,0.95,3.5),Vector3(9.8557,0.95,3.5),Vector3(14.3558,0.95,8),Vector3(16.8558,0.95,15),Vector3(21.3557,0.95,24.5),Vector3(21.3557,0.95,24.5),Vector3(21.3557,0.95,24.5)]);
MetadataString30 := TMetadataStringNode.Create;
MetadataString30.NameField := 'poses';
MetadataString30.SetValue(['Gramps_Stand01','Gramps_Stand01','Gramps_Walk01','Gramps_Stand02','Gramps_Turn01','Gramps_Walk01','Gramps_Walk02','Gramps_Skip01','Gramps_Stand03','Gramps_Stand03','Gramps_Stand03']);
{ .SetMetadata }
PositionInterpolator29.Metadata := MetadataString30;
{ .AddChildren }
Group16.AddChildren([PositionInterpolator29]);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.SetKey([0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator31.SetKeyValue([Vector3(-7.9962,0.4,3),Vector3(-7.9962,0.4,3),Vector3(-7.9962,0.4,3),Vector3(-7.9962,0.4,3),Vector3(9.004,0.475,3.4999),Vector3(11.5048,0.475,3.3699),Vector3(16.0038,0.475,7.8699),Vector3(18.5038,0.475,14.8699),Vector3(23.0038,0.475,24.3699),Vector3(23.0038,0.475,24.3699),Vector3(23.0038,0.475,24.3699)]);
MetadataString32 := TMetadataStringNode.Create;
MetadataString32.NameField := 'poses';
MetadataString32.SetValue(['Leif_Stand01','Leif_Stand01','Leif_Stand01','Leif_Run01','Leif_Turn01','Leif_Walk01','Leif_Walk01','Leif_Skip01','Leif_Stand01','Leif_Stand01','Leif_Stand01']);
{ .SetMetadata }
PositionInterpolator31.Metadata := MetadataString32;
{ .AddChildren }
Group16.AddChildren([PositionInterpolator31]);
PositionInterpolator33 := TPositionInterpolatorNode.Create;
PositionInterpolator33.SetKey([0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator33.SetKeyValue([Vector3(-8.0962,0.4,5.6),Vector3(-8.0962,0.4,5.6),Vector3(-8.0962,0.4,5.6),Vector3(-8.0962,0.4,5.6),Vector3(8.9038,0.475,4.0999),Vector3(10.6538,0.475,3.3499),Vector3(15.1538,0.475,7.8499),Vector3(17.6538,0.475,14.8499),Vector3(22.1538,0.475,24.3499),Vector3(22.1538,0.475,24.3499),Vector3(22.1538,0.475,24.3499)]);
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'poses';
MetadataString34.SetValue(['Lily_Stand01','Lily_Stand01','Lily_Stand01','Leif_Run01','Lily_Turn01','Lily_Walk01','Lily_Walk01','Lily_Skip01','Lily_Stand01','Lily_Stand01','Lily_Stand01']);
{ .SetMetadata }
PositionInterpolator33.Metadata := MetadataString34;
{ .AddChildren }
Group16.AddChildren([PositionInterpolator33]);
PositionInterpolator35 := TPositionInterpolatorNode.Create;
PositionInterpolator35.SetKey([0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1]);
PositionInterpolator35.SetKeyValue([Vector3(-8.0962,0.4,6.4),Vector3(-8.0962,0.4,6.4),Vector3(-8.0962,0.4,6.4),Vector3(-8.0962,0.4,6.4),Vector3(9.40338,0.475,4.3999),Vector3(9.1538,0.475,3.2699),Vector3(13.6538,0.475,7.7699),Vector3(16.1538,0.475,14.7699),Vector3(20.6538,0.475,24.2699),Vector3(20.6538,0.475,24.2699),Vector3(20.6538,0.475,24.2699)]);
MetadataString36 := TMetadataStringNode.Create;
MetadataString36.NameField := 'poses';
MetadataString36.SetValue(['Tufani_Stand01','Tufani_Stand01','Tufani_Stand01','Tufani_Run01','Tufani_Turn01','Tufani_Walk01','Tufani_Walk01','Tufani_Skip01','Tufani_Stand01','Tufani_Stand01','Tufani_Stand01']);
{ .SetMetadata }
PositionInterpolator35.Metadata := MetadataString36;
{ .AddChildren }
Group16.AddChildren([PositionInterpolator35]);
Background37 := TBackgroundNode.Create;
{ .AddChildren }
Group16.AddChildren([Background37]);
Background38 := TBackgroundNode.Create;
Background38.SetSkyColor([Vector3(0,0.71,0.886)]);
Background38.SetGroundAngle([1.57]);
Background38.SetGroundColor([Vector3(0.356863,0.639216,0),Vector3(0.721569,1,0.501961)]);
{ .AddChildren }
Group16.AddChildren([Background38]);
Background39 := TBackgroundNode.Create;
Background39.SetSkyColor([Vector3(0.827,0.827,0.827)]);
{ .AddChildren }
Group16.AddChildren([Background39]);
Background40 := TBackgroundNode.Create;
Background40.SetSkyColor([Vector3(0.6,0.2,0.2)]);
{ .AddChildren }
Group16.AddChildren([Background40]);
TimeSensor41 := TTimeSensorNode.Create;
TimeSensor41.CycleInterval := 5;
TimeSensor41.Loop := True;
{ .AddChildren }
Group16.AddChildren([TimeSensor41]);
TimeSensor42 := TTimeSensorNode.Create;
TimeSensor42.Enabled := False;
TimeSensor42.CycleInterval := 100;
{ .AddChildren }
Group16.AddChildren([TimeSensor42]);
BooleanSequencer43 := TBooleanSequencerNode.Create;
BooleanSequencer43.SetKey([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer43.SetKeyValue(True,True,True,False,False,False,False,False,False,False,False);
{ .AddChildren }
Group16.AddChildren([BooleanSequencer43]);
BooleanSequencer44 := TBooleanSequencerNode.Create;
BooleanSequencer44.SetKey([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer44.SetKeyValue(False,False,False,True,True,False,False,False,False,False,False);
{ .AddChildren }
Group16.AddChildren([BooleanSequencer44]);
BooleanSequencer45 := TBooleanSequencerNode.Create;
BooleanSequencer45.SetKey([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer45.SetKeyValue(False,False,False,False,False,True,True,True,False,False,False);
{ .AddChildren }
Group16.AddChildren([BooleanSequencer45]);
BooleanSequencer46 := TBooleanSequencerNode.Create;
BooleanSequencer46.SetKey([0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1]);
BooleanSequencer46.SetKeyValue(False,False,False,False,False,False,False,False,True,True,True);
{ .AddChildren }
Group16.AddChildren([BooleanSequencer46]);
Group16.AddRoute(BooleanSequencer43.EventValue_changed, Background37.EventSet_bind);
{ .AddX3DRoute }
Group16.AddRoute(BooleanSequencer44.EventValue_changed, Background38.EventSet_bind);
{ .AddX3DRoute }
Group16.AddRoute(BooleanSequencer45.EventValue_changed, Background39.EventSet_bind);
{ .AddX3DRoute }
Group16.AddRoute(BooleanSequencer46.EventValue_changed, Background40.EventSet_bind);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, BooleanSequencer43.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, BooleanSequencer44.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, BooleanSequencer45.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, BooleanSequencer46.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, BooleanSequencer43.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, BooleanSequencer44.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, BooleanSequencer45.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, BooleanSequencer46.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, PositionInterpolator29.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, PositionInterpolator33.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor41.EventFraction_changed, PositionInterpolator35.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, PositionInterpolator29.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, PositionInterpolator33.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor42.EventFraction_changed, PositionInterpolator35.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator29.EventValue_changed, Transform20.FdTranslation);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator31.EventValue_changed, Transform26.FdTranslation);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator33.EventValue_changed, Transform27.FdTranslation);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator35.EventValue_changed, Transform28.FdTranslation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
