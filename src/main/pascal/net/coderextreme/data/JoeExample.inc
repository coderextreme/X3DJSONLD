function JoeExample: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group3: TGroupNode;
Script4: TScriptNode;
field5: TfieldNode;
field6: TfieldNode;
field7: TfieldNode;
field8: TfieldNode;
Shape9: TShapeNode;
Appearance10: TAppearanceNode;
Material11: TMaterialNode;
Sphere12: TSphereNode;
Sound13: TSoundNode;
AudioClip14: TAudioClipNode;
TouchSensor15: TTouchSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Profile := 'Immersive';
X3D0.Meta['title'] := 'Scripting.x3d';
Group3 := TGroupNode.Create;
Script4 := TScriptNode.Create;
field5 := TfieldNode.Create;
field5.NameField := 'openVault';
field5.Type := 'SFTime';
field5.AccessType := 'inputOnly';
{ .AddField }
Script4.Field := field5;
field6 := TfieldNode.Create;
field6.NameField := 'combinationEntered';
field6.Type := 'SFBool';
field6.AccessType := 'inputOnly';
{ .AddField }
Script4.Field := field6;
field7 := TfieldNode.Create;
field7.NameField := 'vaultUnlocked';
field7.Type := 'SFTime';
field7.AccessType := 'outputOnly';
{ .AddField }
Script4.Field := field7;
field8 := TfieldNode.Create;
field8.NameField := 'unlocked';
field8.Type := 'SFBool';
field8.Value := 'false';
field8.AccessType := 'initializeOnly';
{ .AddField }
Script4.Field := field8;

Script4.SetSourceCode('''ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }''');
{ .AddChildren }
Group3.AddChildren([Script4]);
Shape9 := TShapeNode.Create;
Appearance10 := TAppearanceNode.Create;
Material11 := TMaterialNode.Create;
Material11.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance10.Material := Material11;
{ .SetAppearance }
Shape9.Appearance := Appearance10;
Sphere12 := TSphereNode.Create;
{ .SetGeometry }
Shape9.Geometry := Sphere12;
{ .AddChildren }
Group3.AddChildren([Shape9]);
Sound13 := TSoundNode.Create;
Sound13.MaxBack := 1000;
Sound13.MaxFront := 1000;
Sound13.MinBack := 1000;
Sound13.MinFront := 1000;
AudioClip14 := TAudioClipNode.Create;
AudioClip14.StopTime := 1;
AudioClip14.Description := 'clicking sound';
AudioClip14.SetUrl(['../resources/chandubabamusic1.wav']);
{ .SetSource }
Sound13.Source := AudioClip14;
{ .AddChildren }
Group3.AddChildren([Sound13]);
TouchSensor15 := TTouchSensorNode.Create;
{ .AddChildren }
Group3.AddChildren([TouchSensor15]);
Group3.AddRoute(TouchSensor15.FdIsover, Script4.FdCombinationentered);
{ .AddX3DRoute }
Group3.AddRoute(TouchSensor15.EventTouchtime, Script4.FdOpenvault);
{ .AddX3DRoute }
Group3.AddRoute(Script4.FdVaultunlocked, AudioClip14.FdStarttime);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group3]);
Result := X3D0;
end;
