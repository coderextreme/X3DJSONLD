unit arc2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createarc2: TX3DRootNode;
procedure Registerarc2Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript17Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fold: TVector3;
    FField_old: TSFVec3f;
    FDirty_old: Boolean;
    FkeyValue: array of TVector3;
    FField_keyValue: TMFVec3f;
    FDirty_keyValue: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_location(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript35Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fold: TVector3;
    FField_old: TSFVec3f;
    FDirty_old: Boolean;
    FkeyValue: array of TVector3;
    FField_keyValue: TMFVec3f;
    FDirty_keyValue: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_location(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript52Script = class
  private
    Fstartnode: TX3DNode;
    Fendnode: TX3DNode;
    FtransC1: TX3DNode;
    FrotscaleC1: TX3DNode;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transC1: TSFNode; const AField_rotscaleC1: TSFNode);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
    procedure Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure Set_startpoint(Value: TX3DField; const Time: TX3DTime);
    procedure Set_endpoint(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  Viewpoint8: TViewpointNode;
  Background9: TBackgroundNode;
  Transform10: TTransformNode;
  Transform11: TTransformNode;
  Shape12: TShapeNode;
  Sphere13: TSphereNode;
  Appearance14: TAppearanceNode;
  Material15: TMaterialNode;
  PositionInterpolator16: TPositionInterpolatorNode;
  Script17: TScriptNode;
  FieldVal18: TSFVec3f;
  FieldVal19: TSFVec3f;
  FieldVal20: TX3DEvent;
  FieldVal21: TMFVec3f;
  CompiledScript17: TScript17Script;
  TimeSensor22: TTimeSensorNode;
  Transform28: TTransformNode;
  Transform29: TTransformNode;
  Shape30: TShapeNode;
  Sphere31: TSphereNode;
  Appearance32: TAppearanceNode;
  Material33: TMaterialNode;
  PositionInterpolator34: TPositionInterpolatorNode;
  Script35: TScriptNode;
  FieldVal36: TSFVec3f;
  FieldVal37: TSFVec3f;
  FieldVal38: TX3DEvent;
  FieldVal39: TMFVec3f;
  CompiledScript35: TScript35Script;
  TimeSensor40: TTimeSensorNode;
  Transform46: TTransformNode;
  Transform47: TTransformNode;
  Shape48: TShapeNode;
  Appearance49: TAppearanceNode;
  Material50: TMaterialNode;
  Cylinder51: TCylinderNode;
  Script52: TScriptNode;
  FieldVal53: TSFNode;
  FieldVal55: TSFNode;
  FieldVal57: TSFNode;
  FieldVal59: TSFNode;
  FieldVal61: TX3DEvent;
  FieldVal62: TX3DEvent;
  CompiledScript52: TScript52Script;

constructor TScript17Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fold := Vector3(0, 0, 0);
  FField_old := nil;
  FDirty_old := False;
  FkeyValue := 0;
  FField_keyValue := nil;
  FDirty_keyValue := False;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_old := AField_old;
  if AField_old <> nil then Fold := AField_old.Value;
  FField_keyValue := AField_keyValue;
  if AField_keyValue <> nil then FkeyValue := AField_keyValue.Value;
end;

destructor TScript17Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript17Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_translation then
  begin
    FDirty_translation := False;
    if FField_translation <> nil then
      FField_translation.Send(Ftranslation, Time);
  end;
  if FDirty_old then
  begin
    FDirty_old := False;
    if FField_old <> nil then
      FField_old.Send(Fold, Time);
  end;
  if FDirty_keyValue then
  begin
    FDirty_keyValue := False;
    if FField_keyValue <> nil then
      FField_keyValue.Send(FkeyValue, Time);
  end;
end;

procedure TScript17Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script17_set_location', {$ifdef FPC}@{$endif}Set_location);
end;

procedure TScript17Script.Set_location(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 10 - 5, Random * 10 - 5, Random * 10 - 5); FDirty_translation := True;
  FkeyValue := [[Fold, Ftranslation]]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript35Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fold := Vector3(0, 0, 0);
  FField_old := nil;
  FDirty_old := False;
  FkeyValue := 0;
  FField_keyValue := nil;
  FDirty_keyValue := False;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_old := AField_old;
  if AField_old <> nil then Fold := AField_old.Value;
  FField_keyValue := AField_keyValue;
  if AField_keyValue <> nil then FkeyValue := AField_keyValue.Value;
end;

destructor TScript35Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript35Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_translation then
  begin
    FDirty_translation := False;
    if FField_translation <> nil then
      FField_translation.Send(Ftranslation, Time);
  end;
  if FDirty_old then
  begin
    FDirty_old := False;
    if FField_old <> nil then
      FField_old.Send(Fold, Time);
  end;
  if FDirty_keyValue then
  begin
    FDirty_keyValue := False;
    if FField_keyValue <> nil then
      FField_keyValue.Send(FkeyValue, Time);
  end;
end;

procedure TScript35Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script35_set_location', {$ifdef FPC}@{$endif}Set_location);
end;

procedure TScript35Script.Set_location(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 10 - 5, Random * 10 - 5, Random * 10 - 5); FDirty_translation := True;
  FkeyValue := [[Fold, Ftranslation]]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript52Script.Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transC1: TSFNode; const AField_rotscaleC1: TSFNode);
begin
  inherited Create;
  Fstartnode := nil;
  Fendnode := nil;
  FtransC1 := nil;
  FrotscaleC1 := nil;
  if AField_startnode <> nil then Fstartnode := AField_startnode.Value;
  if AField_endnode <> nil then Fendnode := AField_endnode.Value;
  if AField_transC1 <> nil then FtransC1 := AField_transC1.Value;
  if AField_rotscaleC1 <> nil then FrotscaleC1 := AField_rotscaleC1.Value;
end;

destructor TScript52Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript52Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript52Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script52_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script52_set_startpoint', {$ifdef FPC}@{$endif}Set_startpoint);
  Scene.RegisterCompiledScript('Script52_set_endpoint', {$ifdef FPC}@{$endif}Set_endpoint);
end;

procedure TScript52Script.Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  dif: Single;
  dist: Single;
  dif2: Single;
  norm: Single;
  transl: Single;
begin
  if endpoint = 'undefined' then
  begin
    Exit;
  end;
  dif := endpoint.subtract(startpoint);
  dist := dif.Length * 0.5;
  dif2 := dif.multiply(0.5);
  norm := dif.Normalize;
  transl := startpoint.add(dif2);
  if Quaternion <> 'undefined' then
  begin
    Result := 0;
    Exit;
  end
  else
  begin
    Result := 0;
    Exit;
  end;
end;

procedure TScript52Script.Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  trafo: Single;
begin
  trafo := Recompute(startpoint, endpoint, Time);
  FtransC1.translation := trafo.translation;
  FrotscaleC1.rotation := trafo.rotation;
  FrotscaleC1.scale := trafo.scale;
end;

procedure TScript52Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, Fendnode.translation, Time);
end;

procedure TScript52Script.Set_startpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route((Value as TSFVec3f).Value, Fendnode.translation, Time);
end;

procedure TScript52Script.Set_endpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, (Value as TSFVec3f).Value, Time);
end;

procedure Initarc2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc2.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'Only Viewpoint';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Transform10.X3DName := 'G1';
Transform11 := TTransformNode.Create;
Transform11.X3DName := 'DECLpoint_INSTANCE_node';
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.1;
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1, 0, 0);
Appearance14.Material := Material15;
Shape12.Appearance := Appearance14;
Transform11.FdChildren.Add(Shape12);
PositionInterpolator16 := TPositionInterpolatorNode.Create;
PositionInterpolator16.X3DName := 'DECLpoint_INSTANCE_PI1';
PositionInterpolator16.SetKey([0, 1]);
PositionInterpolator16.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform11.FdChildren.Add(PositionInterpolator16);
Script17 := TScriptNode.Create;
Script17.X3DName := 'DECLpoint_INSTANCE_MB1';
FieldVal18 := TSFVec3f.Create(Script17, True, 'translation', Vector3(0, 0, 0));
Script17.AddCustomFieldOrEvent(FieldVal18);
end;

procedure Initarc2Part1;
begin
FieldVal19 := TSFVec3f.Create(Script17, True, 'old', Vector3(0, 0, 0));
Script17.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TSFTime.CreateEvent(Script17, 'set_location', True);
Script17.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFVec3f.Create(Script17, True, 'keyValue', [Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Script17.AddCustomFieldOrEvent(FieldVal21);
FreeAndNil(CompiledScript17);
CompiledScript17 := TScript17Script.Create(FieldVal18, FieldVal19, FieldVal21);
Script17.SetUrl(['compiled:' + LineEnding +
  'set_location=Script17_set_location']);
Transform11.FdChildren.Add(Script17);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.X3DName := 'DECLpoint_INSTANCE_CL1';
TimeSensor22.CycleInterval := 3;
TimeSensor22.Loop := True;
Transform11.FdChildren.Add(TimeSensor22);
{ ROUTE DECLpoint_INSTANCE_CL1.cycleTime TO DECLpoint_INSTANCE_MB1.set_location }
Transform11.AddRoute(TimeSensor22.EventCycleTime, FieldVal20);
{ ROUTE DECLpoint_INSTANCE_CL1.fraction_changed TO DECLpoint_INSTANCE_PI1.set_fraction }
Transform11.AddRoute(TimeSensor22.EventFraction_changed, PositionInterpolator16.EventSet_fraction);
{ ROUTE DECLpoint_INSTANCE_MB1.keyValue TO DECLpoint_INSTANCE_PI1.keyValue }
Transform11.AddRoute(FieldVal21.EventOut, PositionInterpolator16.keyValue);
{ ROUTE DECLpoint_INSTANCE_PI1.value_changed TO DECLpoint_INSTANCE_node.set_translation }
Transform11.AddRoute(PositionInterpolator16.EventValue_changed, Transform11.FdTranslation.EventIn);
{ ROUTE DECLpoint_INSTANCE_MB1.translation_changed TO DECLpoint_INSTANCE_node.set_translation }
Transform11.AddRoute(FieldVal18.EventOut, Transform11.FdTranslation.EventIn);
Transform10.FdChildren.Add(Transform11);
Group7.FdChildren.Add(Transform10);
Transform28 := TTransformNode.Create;
Transform28.X3DName := 'G2';
Transform29 := TTransformNode.Create;
Transform29.X3DName := 'DECLpoint_INSTANCE1000_node';
Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
Sphere31.Radius := 0.1;
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(1, 0, 0);
Appearance32.Material := Material33;
Shape30.Appearance := Appearance32;
end;

procedure Initarc2Part2;
begin
Transform29.FdChildren.Add(Shape30);
PositionInterpolator34 := TPositionInterpolatorNode.Create;
PositionInterpolator34.X3DName := 'DECLpoint_INSTANCE1000_PI1';
PositionInterpolator34.SetKey([0, 1]);
PositionInterpolator34.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform29.FdChildren.Add(PositionInterpolator34);
Script35 := TScriptNode.Create;
Script35.X3DName := 'DECLpoint_INSTANCE1000_MB1';
FieldVal36 := TSFVec3f.Create(Script35, True, 'translation', Vector3(0, 0, 0));
Script35.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFVec3f.Create(Script35, True, 'old', Vector3(0, 0, 0));
Script35.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFTime.CreateEvent(Script35, 'set_location', True);
Script35.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TMFVec3f.Create(Script35, True, 'keyValue', [Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Script35.AddCustomFieldOrEvent(FieldVal39);
FreeAndNil(CompiledScript35);
CompiledScript35 := TScript35Script.Create(FieldVal36, FieldVal37, FieldVal39);
Script35.SetUrl(['compiled:' + LineEnding +
  'set_location=Script35_set_location']);
Transform29.FdChildren.Add(Script35);
TimeSensor40 := TTimeSensorNode.Create;
TimeSensor40.X3DName := 'DECLpoint_INSTANCE1000_CL1';
TimeSensor40.CycleInterval := 3;
TimeSensor40.Loop := True;
Transform29.FdChildren.Add(TimeSensor40);
{ ROUTE DECLpoint_INSTANCE1000_CL1.cycleTime TO DECLpoint_INSTANCE1000_MB1.set_location }
Transform29.AddRoute(TimeSensor40.EventCycleTime, FieldVal38);
{ ROUTE DECLpoint_INSTANCE1000_CL1.fraction_changed TO DECLpoint_INSTANCE1000_PI1.set_fraction }
Transform29.AddRoute(TimeSensor40.EventFraction_changed, PositionInterpolator34.EventSet_fraction);
{ ROUTE DECLpoint_INSTANCE1000_MB1.keyValue TO DECLpoint_INSTANCE1000_PI1.keyValue }
Transform29.AddRoute(FieldVal39.EventOut, PositionInterpolator34.keyValue);
{ ROUTE DECLpoint_INSTANCE1000_PI1.value_changed TO DECLpoint_INSTANCE1000_node.set_translation }
Transform29.AddRoute(PositionInterpolator34.EventValue_changed, Transform29.FdTranslation.EventIn);
{ ROUTE DECLpoint_INSTANCE1000_MB1.translation_changed TO DECLpoint_INSTANCE1000_node.set_translation }
Transform29.AddRoute(FieldVal36.EventOut, Transform29.FdTranslation.EventIn);
Transform28.FdChildren.Add(Transform29);
Group7.FdChildren.Add(Transform28);
Transform46 := TTransformNode.Create;
Transform46.X3DName := 'transC1';
Transform47 := TTransformNode.Create;
end;

procedure Initarc2Part3;
begin
Transform47.X3DName := 'rotscaleC1';
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
Material50.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material50.Transparency := 0.5;
Appearance49.Material := Material50;
Shape48.Appearance := Appearance49;
Cylinder51 := TCylinderNode.Create;
Cylinder51.Radius := 0.05;
Shape48.Geometry := Cylinder51;
Transform47.FdChildren.Add(Shape48);
Transform46.FdChildren.Add(Transform47);
Group7.FdChildren.Add(Transform46);
Script52 := TScriptNode.Create;
Script52.X3DName := 'DECLx3dconnector_connector1_S1';
FieldVal53 := TSFNode.CreateUndefined(Script52, False, 'startnode');
Script52.AddCustomFieldOrEvent(FieldVal53);
FieldVal53.Value := Transform10;
FieldVal55 := TSFNode.CreateUndefined(Script52, False, 'endnode');
Script52.AddCustomFieldOrEvent(FieldVal55);
FieldVal55.Value := Transform28;
FieldVal57 := TSFNode.CreateUndefined(Script52, False, 'transC1');
Script52.AddCustomFieldOrEvent(FieldVal57);
FieldVal57.Value := Transform46;
FieldVal59 := TSFNode.CreateUndefined(Script52, False, 'rotscaleC1');
Script52.AddCustomFieldOrEvent(FieldVal59);
FieldVal59.Value := Transform47;
FieldVal61 := TSFVec3f.CreateEvent(Script52, 'set_startpoint', True);
Script52.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFVec3f.CreateEvent(Script52, 'set_endpoint', True);
Script52.AddCustomFieldOrEvent(FieldVal62);
FreeAndNil(CompiledScript52);
CompiledScript52 := TScript52Script.Create(FieldVal53, FieldVal55, FieldVal57, FieldVal59);
Script52.SetUrl(['compiled:' + LineEnding +
  'initialize=Script52_initialize' + LineEnding +
  'set_startpoint=Script52_set_startpoint' + LineEnding +
  'set_endpoint=Script52_set_endpoint']);
Group7.FdChildren.Add(Script52);
{ ROUTE G1.translation_changed TO DECLx3dconnector_connector1_S1.set_startpoint }
Group7.AddRoute(Transform10.EventTranslation_changed, FieldVal61);
{ ROUTE G2.translation_changed TO DECLx3dconnector_connector1_S1.set_endpoint }
Group7.AddRoute(Transform28.EventTranslation_changed, FieldVal62);
end;

procedure Initarc2Part4;
begin
X3D0.AddChildren([Group7]);
end;

function Createarc2: TX3DRootNode;
begin
  Initarc2Part0;
  Initarc2Part1;
  Initarc2Part2;
  Initarc2Part3;
  Initarc2Part4;
  Result := X3D0;
end;

procedure Registerarc2Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript17 <> nil then
    CompiledScript17.RegisterHandlers(Scene);
  if CompiledScript35 <> nil then
    CompiledScript35.RegisterHandlers(Scene);
  if CompiledScript52 <> nil then
    CompiledScript52.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript17);
  FreeAndNil(CompiledScript35);
  FreeAndNil(CompiledScript52);
end.
