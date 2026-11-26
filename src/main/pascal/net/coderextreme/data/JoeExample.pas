unit JoeExample;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateJoeExample: TX3DRootNode;
procedure RegisterJoeExampleScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript4Script = class
  private
    FvaultUnlocked: Double;
    FEvent_vaultUnlocked: TX3DEvent;
    FBack_vaultUnlocked: TSFTime;
    FDirty_vaultUnlocked: Boolean;
    Funlocked: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_vaultUnlocked: TX3DEvent; const AField_unlocked: TSFBool);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure CombinationEntered(Value: TX3DField; const Time: TX3DTime);
    procedure OpenVault(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group3: TGroupNode;
  Script4: TScriptNode;
  FieldVal5: TX3DEvent;
  FieldVal6: TX3DEvent;
  FieldVal7: TX3DEvent;
  FieldVal8: TSFBool;
  CompiledScript4: TScript4Script;
  Shape9: TShapeNode;
  Appearance10: TAppearanceNode;
  Material11: TMaterialNode;
  Sphere12: TSphereNode;
  Sound13: TSoundNode;
  AudioClip14: TAudioClipNode;
  TouchSensor15: TTouchSensorNode;

constructor TScript4Script.Create(const AEvent_vaultUnlocked: TX3DEvent; const AField_unlocked: TSFBool);
begin
  inherited Create;
  FvaultUnlocked := 0.0;
  FEvent_vaultUnlocked := nil;
  FBack_vaultUnlocked := TSFTime.Create(nil, False, 'vaultUnlocked', 0.0);
  FDirty_vaultUnlocked := False;
  Funlocked := False;
  FEvent_vaultUnlocked := AEvent_vaultUnlocked;
  if AField_unlocked <> nil then Funlocked := AField_unlocked.Value;
end;

destructor TScript4Script.Destroy;
begin
  FreeAndNil(FBack_vaultUnlocked);
  inherited Destroy;
end;

procedure TScript4Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_vaultUnlocked then
  begin
    FDirty_vaultUnlocked := False;
    if FEvent_vaultUnlocked <> nil then
    begin
      FBack_vaultUnlocked.Value := FvaultUnlocked;
      FEvent_vaultUnlocked.Send(FBack_vaultUnlocked, Time);
    end;
  end;
end;

procedure TScript4Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script4_combinationEntered', {$ifdef FPC}@{$endif}CombinationEntered);
  Scene.RegisterCompiledScript('Script4_openVault', {$ifdef FPC}@{$endif}OpenVault);
end;

procedure TScript4Script.CombinationEntered(Value: TX3DField; const Time: TX3DTime);
begin
  Funlocked := (Value as TSFBool).Value;
  FlushOutputs(Time);
end;

procedure TScript4Script.OpenVault(Value: TX3DField; const Time: TX3DTime);
begin
  if Funlocked then
    FvaultUnlocked := (Value as TSFTime).Value; FDirty_vaultUnlocked := True;
  FlushOutputs(Time);
end;

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
FreeAndNil(CompiledScript4);
CompiledScript4 := TScript4Script.Create(FieldVal7, FieldVal8);
Script4.SetUrl(['compiled:' + LineEnding +
  'combinationEntered=Script4_combinationEntered' + LineEnding +
  'openVault=Script4_openVault']);
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
end;

procedure InitJoeExamplePart1;
begin
Group3.FdChildren.Add(Sound13);
TouchSensor15 := TTouchSensorNode.Create;
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

procedure RegisterJoeExampleScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript4 <> nil then
    CompiledScript4.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript4);
end.
