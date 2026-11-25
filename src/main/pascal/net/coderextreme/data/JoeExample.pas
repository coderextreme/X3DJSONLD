unit JoeExample;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateJoeExample: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group3: TGroupNode;
  Script4: TScriptNode;
  FieldVal5: TX3DEvent;
  FieldVal6: TX3DEvent;
  FieldVal7: TX3DEvent;
  FieldVal8: TSFBool;
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
Group3 := TGroupNode.Create;
Script4 := TScriptNode.Create;
Script4.X3DName := 'OpenVault';
FieldVal5 := TSFTime.CreateEvent(Script4, 'openVault', True);
Script4.AddCustomFieldOrEvent(FieldVal5);
FieldVal6 := TSFBool.CreateEvent(Script4, 'combinationEntered', True);
Script4.AddCustomFieldOrEvent(FieldVal6);
FieldVal7 := TSFTime.CreateEvent(Script4, 'vaultUnlocked', False);
Script4.AddCustomFieldOrEvent(FieldVal7);
FieldVal8 := TSFBool.Create(Script4, False, 'unlocked', False);
Script4.AddCustomFieldOrEvent(FieldVal8);
Script4.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '      function combinationEntered (value) {' + LineEnding +
  '' + LineEnding +
  '        unlocked = value;' + LineEnding +
  '' + LineEnding +
  '      }' + LineEnding +
  '' + LineEnding +
  '      function openVault(value) {' + LineEnding +
  '' + LineEnding +
  '      if (unlocked) vaultUnlocked = value;' + LineEnding +
  '' + LineEnding +
  '      }');
Group3.FdChildren.Add(Script4);
Shape9 := TShapeNode.Create;
Appearance10 := TAppearanceNode.Create;
Material11 := TMaterialNode.Create;
Material11.DiffuseColor := Vector3(1, 0, 0);
Appearance10.Material := Material11;
Shape9.Appearance := Appearance10;
Sphere12 := TSphereNode.Create;
Shape9.Geometry := Sphere12;
Group3.FdChildren.Add(Shape9);
Sound13 := TSoundNode.Create;
Sound13.MaxBack := 1000;
Sound13.MaxFront := 1000;
Sound13.MinBack := 1000;
Sound13.MinFront := 1000;
AudioClip14 := TAudioClipNode.Create;
AudioClip14.X3DName := 'Click';
AudioClip14.StopTime := 1;
AudioClip14.Description := 'clicking sound';
AudioClip14.SetUrl(['../resources/chandubabamusic1.wav']);
Sound13.Source := AudioClip14;
Group3.FdChildren.Add(Sound13);
TouchSensor15 := TTouchSensorNode.Create;
end;

procedure InitJoeExamplePart1;
begin
TouchSensor15.X3DName := 'TS';
Group3.FdChildren.Add(TouchSensor15);
{ ROUTE TS.isOver TO OpenVault.combinationEntered }
Group3.AddRoute(TouchSensor15.EventIsOver, FieldVal6);
{ ROUTE TS.touchTime TO OpenVault.openVault }
Group3.AddRoute(TouchSensor15.EventTouchTime, FieldVal5);
{ ROUTE OpenVault.vaultUnlocked TO Click.startTime }
Group3.AddRoute(FieldVal7, AudioClip14.FdStartTime.EventIn);
X3D0.AddChildren([Group3]);
end;

function CreateJoeExample: TX3DRootNode;
begin
  InitJoeExamplePart0;
  InitJoeExamplePart1;
  Result := X3D0;
end;

begin
end.
