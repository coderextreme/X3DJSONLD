unit JoeExample;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateJoeExample: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group3: TGroupNode;
Script4: TScriptNode;
SFTime5: TSFTime;
SFBool6: TSFBool;
SFTime7: TSFTime;
SFBool8: TSFBool;
Shape9: TShapeNode;
Appearance10: TAppearanceNode;
Material11: TMaterialNode;
Sphere12: TSphereNode;
Sound13: TSoundNode;
AudioClip14: TAudioClipNode;
TouchSensor15: TTouchSensorNode;

procedure InitJoeExamplePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Scripting.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group3 := TGroupNode.Create;
Script4 := TScriptNode.Create;
SFTime5 := TSFTime.CreateUndefined(Script4, false, 'openVault');
{ METHOD .Fd.AddCustomField }
Script4.AddCustomField(SFTime5);
SFBool6 := TSFBool.CreateUndefined(Script4, false, 'combinationEntered');
{ METHOD .Fd.AddCustomField }
Script4.AddCustomField(SFBool6);
SFTime7 := TSFTime.CreateUndefined(Script4, false, 'vaultUnlocked');
{ METHOD .Fd.AddCustomField }
Script4.AddCustomField(SFTime7);
SFBool8 := TSFBool.CreateUndefined(Script4, false, 'unlocked');
SFBool8.Value := 'false';
{ METHOD .Fd.AddCustomField }
Script4.AddCustomField(SFBool8);

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
{ METHOD .FdChildren.Add }
Group3.FdChildren.Add(Script4);
Shape9 := TShapeNode.Create;
Appearance10 := TAppearanceNode.Create;
Material11 := TMaterialNode.Create;
Material11.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance10.Material := Material11;
{ METHOD .Appearance }
Shape9.Appearance := Appearance10;
Sphere12 := TSphereNode.Create;
{ METHOD .Geometry }
Shape9.Geometry := Sphere12;
{ METHOD .FdChildren.Add }
Group3.FdChildren.Add(Shape9);
Sound13 := TSoundNode.Create;
Sound13.MaxBack := 1000;
Sound13.MaxFront := 1000;
Sound13.MinBack := 1000;
Sound13.MinFront := 1000;
AudioClip14 := TAudioClipNode.Create;
AudioClip14.StopTime := 1;
AudioClip14.Description := 'clicking sound';
AudioClip14.SetUrl(['../resources/chandubabamusic1.wav']);
{ METHOD .Source }
Sound13.Source := AudioClip14;
{ METHOD .FdChildren.Add }
Group3.FdChildren.Add(Sound13);
TouchSensor15 := TTouchSensorNode.Create;
{ METHOD .FdChildren.Add }
Group3.FdChildren.Add(TouchSensor15);
{ Original "TS.EventIsOver TO OpenVault.combinationEntered }
{ Sample TS.EventIsOver TO OpenVault.combinationEntered}
Group3.AddRoute(TouchSensor15.EventIsOver, SFBool6);
{ METHOD .AddX3DROUTE }
{ Original "TS.EventTouchTime TO OpenVault.openVault }
{ Sample TS.EventTouchTime TO OpenVault.openVault}
Group3.AddRoute(TouchSensor15.EventTouchTime, SFTime5);
{ METHOD .AddX3DROUTE }
{ Original "OpenVault.vaultUnlocked TO Click.startTime }
{ Sample OpenVault.vaultUnlocked TO Click.startTime}
Group3.AddRoute(OpenVault.[object Object], AudioClip14.startTime);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group3]);
end;

function CreateJoeExample: TX3DRootNode;
begin
InitJoeExamplePart0;
Result := X3D0;
end;

begin
end.
