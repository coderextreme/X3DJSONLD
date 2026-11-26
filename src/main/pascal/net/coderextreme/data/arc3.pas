unit arc3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createarc3: TX3DRootNode;
procedure Registerarc3Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript16Script = class
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

  TScript32Script = class
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

  TScript49Script = class
  private
    Fstartnode: TX3DNode;
    Fendnode: TX3DNode;
    Fposition: TX3DNode;
    FField_position: TSFNode;
    FDirty_position: Boolean;
    Frotscale: TX3DNode;
    FField_rotscale: TSFNode;
    FDirty_rotscale: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_position: TSFNode; const AField_rotscale: TSFNode);
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
  Shape11: TShapeNode;
  Sphere12: TSphereNode;
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  PositionInterpolator15: TPositionInterpolatorNode;
  Script16: TScriptNode;
  FieldVal17: TSFVec3f;
  FieldVal18: TSFVec3f;
  FieldVal19: TX3DEvent;
  FieldVal20: TMFVec3f;
  CompiledScript16: TScript16Script;
  TimeSensor21: TTimeSensorNode;
  Transform26: TTransformNode;
  Shape27: TShapeNode;
  Sphere28: TSphereNode;
  Appearance29: TAppearanceNode;
  Material30: TMaterialNode;
  PositionInterpolator31: TPositionInterpolatorNode;
  Script32: TScriptNode;
  FieldVal33: TSFVec3f;
  FieldVal34: TSFVec3f;
  FieldVal35: TX3DEvent;
  FieldVal36: TMFVec3f;
  CompiledScript32: TScript32Script;
  TimeSensor37: TTimeSensorNode;
  Group42: TGroupNode;
  Transform43: TTransformNode;
  Transform44: TTransformNode;
  Shape45: TShapeNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Cylinder48: TCylinderNode;
  Script49: TScriptNode;
  FieldVal50: TSFNode;
  FieldVal52: TSFNode;
  FieldVal54: TSFNode;
  FieldVal56: TSFNode;
  FieldVal58: TX3DEvent;
  FieldVal59: TX3DEvent;
  CompiledScript49: TScript49Script;

constructor TScript16Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
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

destructor TScript16Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript16Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript16Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script16_set_location', {$ifdef FPC}@{$endif}Set_location);
end;

procedure TScript16Script.Set_location(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 10 - 5, Random * 10 - 5, Random * 10 - 5); FDirty_translation := True;
  FkeyValue := [[Fold, Ftranslation]]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript32Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
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

destructor TScript32Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript32Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript32Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script32_set_location', {$ifdef FPC}@{$endif}Set_location);
end;

procedure TScript32Script.Set_location(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 10 - 5, Random * 10 - 5, Random * 10 - 5); FDirty_translation := True;
  FkeyValue := [[Fold, Ftranslation]]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript49Script.Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_position: TSFNode; const AField_rotscale: TSFNode);
begin
  inherited Create;
  Fstartnode := nil;
  Fendnode := nil;
  Fposition := nil;
  FField_position := nil;
  FDirty_position := False;
  Frotscale := nil;
  FField_rotscale := nil;
  FDirty_rotscale := False;
  if AField_startnode <> nil then Fstartnode := AField_startnode.Value;
  if AField_endnode <> nil then Fendnode := AField_endnode.Value;
  FField_position := AField_position;
  if AField_position <> nil then Fposition := AField_position.Value;
  FField_rotscale := AField_rotscale;
  if AField_rotscale <> nil then Frotscale := AField_rotscale.Value;
end;

destructor TScript49Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript49Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_position then
  begin
    FDirty_position := False;
    if FField_position <> nil then
      FField_position.Send(Fposition, Time);
  end;
  if FDirty_rotscale then
  begin
    FDirty_rotscale := False;
    if FField_rotscale <> nil then
      FField_rotscale.Send(Frotscale, Time);
  end;
end;

procedure TScript49Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script49_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script49_set_startpoint', {$ifdef FPC}@{$endif}Set_startpoint);
  Scene.RegisterCompiledScript('Script49_set_endpoint', {$ifdef FPC}@{$endif}Set_endpoint);
end;

procedure TScript49Script.Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
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
  else if SFRotation <> 'undefined' then
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

procedure TScript49Script.Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  trafo: Single;
begin
  trafo := Recompute(startpoint, endpoint, Time);
  if trafo then
  begin
    Fposition.translation := trafo.translation; FDirty_position := True;
    Frotscale.rotation := trafo.rotation; FDirty_rotscale := True;
    Frotscale.scale := trafo.scale; FDirty_rotscale := True;
  end;
end;

procedure TScript49Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, Fendnode.translation, Time);
  FlushOutputs(Time);
end;

procedure TScript49Script.Set_startpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route((Value as TSFVec3f).Value, Fendnode.translation, Time);
  FlushOutputs(Time);
end;

procedure TScript49Script.Set_endpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, (Value as TSFVec3f).Value, Time);
  FlushOutputs(Time);
end;

procedure Initarc3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc3.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
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
Transform10.X3DName := 'DECLpoint_G1_node';
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
Sphere12.Radius := 0.1;
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1, 0, 0);
Appearance13.Material := Material14;
Shape11.Appearance := Appearance13;
Transform10.FdChildren.Add(Shape11);
PositionInterpolator15 := TPositionInterpolatorNode.Create;
PositionInterpolator15.X3DName := 'DECLpoint_G1_PI1';
PositionInterpolator15.SetKey([0, 1]);
PositionInterpolator15.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform10.FdChildren.Add(PositionInterpolator15);
Script16 := TScriptNode.Create;
Script16.X3DName := 'DECLpoint_G1_MB1';
FieldVal17 := TSFVec3f.Create(Script16, True, 'translation', Vector3(0, 0, 0));
Script16.AddCustomFieldOrEvent(FieldVal17);
FieldVal18 := TSFVec3f.Create(Script16, True, 'old', Vector3(0, 0, 0));
Script16.AddCustomFieldOrEvent(FieldVal18);
end;

procedure Initarc3Part1;
begin
FieldVal19 := TSFTime.CreateEvent(Script16, 'set_location', True);
Script16.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TMFVec3f.Create(Script16, True, 'keyValue', [Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Script16.AddCustomFieldOrEvent(FieldVal20);
FreeAndNil(CompiledScript16);
CompiledScript16 := TScript16Script.Create(FieldVal17, FieldVal18, FieldVal20);
Script16.SetUrl(['compiled:' + LineEnding +
  'set_location=Script16_set_location']);
Transform10.FdChildren.Add(Script16);
TimeSensor21 := TTimeSensorNode.Create;
TimeSensor21.X3DName := 'DECLpoint_G1_CL1';
TimeSensor21.CycleInterval := 3;
TimeSensor21.Loop := True;
Transform10.FdChildren.Add(TimeSensor21);
{ ROUTE DECLpoint_G1_CL1.cycleTime TO DECLpoint_G1_MB1.set_location }
Transform10.AddRoute(TimeSensor21.EventCycleTime, FieldVal19);
{ ROUTE DECLpoint_G1_CL1.fraction_changed TO DECLpoint_G1_PI1.set_fraction }
Transform10.AddRoute(TimeSensor21.EventFraction_changed, PositionInterpolator15.EventSet_fraction);
{ ROUTE DECLpoint_G1_MB1.keyValue TO DECLpoint_G1_PI1.keyValue }
Transform10.AddRoute(FieldVal20.EventOut, PositionInterpolator15.keyValue);
{ ROUTE DECLpoint_G1_PI1.value_changed TO DECLpoint_G1_node.set_translation }
Transform10.AddRoute(PositionInterpolator15.EventValue_changed, Transform10.FdTranslation.EventIn);
Group7.FdChildren.Add(Transform10);
Transform26 := TTransformNode.Create;
Transform26.X3DName := 'DECLpoint_G2_node';
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.1;
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1, 0, 0);
Appearance29.Material := Material30;
Shape27.Appearance := Appearance29;
Transform26.FdChildren.Add(Shape27);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.X3DName := 'DECLpoint_G2_PI1';
PositionInterpolator31.SetKey([0, 1]);
PositionInterpolator31.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform26.FdChildren.Add(PositionInterpolator31);
Script32 := TScriptNode.Create;
end;

procedure Initarc3Part2;
begin
Script32.X3DName := 'DECLpoint_G2_MB1';
FieldVal33 := TSFVec3f.Create(Script32, True, 'translation', Vector3(0, 0, 0));
Script32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFVec3f.Create(Script32, True, 'old', Vector3(0, 0, 0));
Script32.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFTime.CreateEvent(Script32, 'set_location', True);
Script32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TMFVec3f.Create(Script32, True, 'keyValue', [Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Script32.AddCustomFieldOrEvent(FieldVal36);
FreeAndNil(CompiledScript32);
CompiledScript32 := TScript32Script.Create(FieldVal33, FieldVal34, FieldVal36);
Script32.SetUrl(['compiled:' + LineEnding +
  'set_location=Script32_set_location']);
Transform26.FdChildren.Add(Script32);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.X3DName := 'DECLpoint_G2_CL1';
TimeSensor37.CycleInterval := 3;
TimeSensor37.Loop := True;
Transform26.FdChildren.Add(TimeSensor37);
{ ROUTE DECLpoint_G2_CL1.cycleTime TO DECLpoint_G2_MB1.set_location }
Transform26.AddRoute(TimeSensor37.EventCycleTime, FieldVal35);
{ ROUTE DECLpoint_G2_CL1.fraction_changed TO DECLpoint_G2_PI1.set_fraction }
Transform26.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ ROUTE DECLpoint_G2_MB1.keyValue TO DECLpoint_G2_PI1.keyValue }
Transform26.AddRoute(FieldVal36.EventOut, PositionInterpolator31.keyValue);
{ ROUTE DECLpoint_G2_PI1.value_changed TO DECLpoint_G2_node.set_translation }
Transform26.AddRoute(PositionInterpolator31.EventValue_changed, Transform26.FdTranslation.EventIn);
Group7.FdChildren.Add(Transform26);
Group42 := TGroupNode.Create;
Transform43 := TTransformNode.Create;
Transform43.X3DName := 'DECLx3dconnector_connector1_trans';
Transform44 := TTransformNode.Create;
Transform44.X3DName := 'DECLx3dconnector_connector1_rotscale';
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material47.Transparency := 0.5;
Appearance46.Material := Material47;
Shape45.Appearance := Appearance46;
Cylinder48 := TCylinderNode.Create;
end;

procedure Initarc3Part3;
begin
Cylinder48.Radius := 0.05;
Shape45.Geometry := Cylinder48;
Transform44.FdChildren.Add(Shape45);
Transform43.FdChildren.Add(Transform44);
Group42.FdChildren.Add(Transform43);
Script49 := TScriptNode.Create;
Script49.X3DName := 'DECLx3dconnector_connector1_S1';
FieldVal50 := TSFNode.CreateUndefined(Script49, False, 'startnode');
Script49.AddCustomFieldOrEvent(FieldVal50);
FieldVal50.Value := Transform10;
FieldVal52 := TSFNode.CreateUndefined(Script49, False, 'endnode');
Script49.AddCustomFieldOrEvent(FieldVal52);
FieldVal52.Value := Transform26;
FieldVal54 := TSFNode.CreateUndefined(Script49, True, 'position');
Script49.AddCustomFieldOrEvent(FieldVal54);
FieldVal54.Value := Transform43;
FieldVal56 := TSFNode.CreateUndefined(Script49, True, 'rotscale');
Script49.AddCustomFieldOrEvent(FieldVal56);
FieldVal56.Value := Transform44;
FieldVal58 := TSFVec3f.CreateEvent(Script49, 'set_startpoint', True);
Script49.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFVec3f.CreateEvent(Script49, 'set_endpoint', True);
Script49.AddCustomFieldOrEvent(FieldVal59);
FreeAndNil(CompiledScript49);
CompiledScript49 := TScript49Script.Create(FieldVal50, FieldVal52, FieldVal54, FieldVal56);
Script49.SetUrl(['compiled:' + LineEnding +
  'initialize=Script49_initialize' + LineEnding +
  'set_startpoint=Script49_set_startpoint' + LineEnding +
  'set_endpoint=Script49_set_endpoint']);
Group42.FdChildren.Add(Script49);
Group7.FdChildren.Add(Group42);
{ ROUTE DECLpoint_G1_node.translation TO DECLx3dconnector_connector1_S1.set_startpoint }
Group7.AddRoute(Transform10.EventTranslation, FieldVal58);
{ ROUTE DECLpoint_G2_node.translation TO DECLx3dconnector_connector1_S1.set_endpoint }
Group7.AddRoute(Transform26.EventTranslation, FieldVal59);
X3D0.AddChildren([Group7]);
end;

function Createarc3: TX3DRootNode;
begin
  Initarc3Part0;
  Initarc3Part1;
  Initarc3Part2;
  Initarc3Part3;
  Result := X3D0;
end;

procedure Registerarc3Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript16 <> nil then
    CompiledScript16.RegisterHandlers(Scene);
  if CompiledScript32 <> nil then
    CompiledScript32.RegisterHandlers(Scene);
  if CompiledScript49 <> nil then
    CompiledScript49.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript16);
  FreeAndNil(CompiledScript32);
  FreeAndNil(CompiledScript49);
end.
