unit JoeExample;

interface

uses X3DNodes;

function CreateJoeExample: TX3DRootNode;

implementation

uses CastleVectors;

function CreateJoeExample: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group3: TGroupNode;
Script4: TScriptNode;
X3DField5: TX3DField;
X3DField6: TX3DField;
X3DField7: TX3DField;
X3DField8: TX3DField;
Shape9: TShapeNode;
Appearance10: TAppearanceNode;
Material11: TMaterialNode;
Sphere12: TSphereNode;
Sound13: TSoundNode;
AudioClip14: TAudioClipNode;
TouchSensor15: TTouchSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Scripting.x3d';
Group3 := TGroupNode.Create;
Script4 := TScriptNode.Create;
X3DField5 := TX3DField.Create;
X3DField5.NameField := 'openVault';
X3DField5.Type := 'SFTime';
X3DField5.AccessType := 'inputOnly';
{ .SetX3DField }
Script4.X3DField := X3DField5;
X3DField6 := TX3DField.Create;
X3DField6.NameField := 'combinationEntered';
X3DField6.Type := 'SFBool';
X3DField6.AccessType := 'inputOnly';
{ .AddX3DField }
Script4.X3DField := X3DField6;
X3DField7 := TX3DField.Create;
X3DField7.NameField := 'vaultUnlocked';
X3DField7.Type := 'SFTime';
X3DField7.AccessType := 'outputOnly';
{ .AddX3DField }
Script4.X3DField := X3DField7;
X3DField8 := TX3DField.Create;
X3DField8.NameField := 'unlocked';
X3DField8.Type := 'SFBool';
X3DField8.Value := 'false';
X3DField8.AccessType := 'initializeOnly';
{ .AddX3DField }
Script4.X3DField := X3DField8;

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

begin
end.
