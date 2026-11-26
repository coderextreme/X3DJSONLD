unit arcold;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createarcold: TX3DRootNode;
procedure RegisterarcoldScripts(const Scene: TCastleSceneCore);

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors, Math, X3DTime;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

type
  TScript38Script = class
  private
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fold: TVector3;
    FField_old: TSFVec3f;
    FDirty_old: Boolean;
    FkeyValue: array of TVector3;
    FEvent_keyValue: TX3DEvent;
    FBack_keyValue: TMFVec3f;
    FDirty_keyValue: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AEvent_keyValue: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_location(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript57Script = class
  private
    Fstartnode: TX3DNode;
    FField_startnode: TSFNode;
    FDirty_startnode: Boolean;
    Fendnode: TX3DNode;
    FField_endnode: TSFNode;
    FDirty_endnode: Boolean;
    Ftransnode: TX3DNode;
    FField_transnode: TSFNode;
    FDirty_transnode: Boolean;
    Frotscalenode: TX3DNode;
    FField_rotscalenode: TSFNode;
    FDirty_rotscalenode: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transnode: TSFNode; const AField_rotscalenode: TSFNode);
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
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  Cylinder15: TCylinderNode;
  Transform16: TTransformNode;
  Transform17: TTransformNode;
  Shape18: TShapeNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  Cylinder21: TCylinderNode;
  Transform22: TTransformNode;
  Transform23: TTransformNode;
  Shape24: TShapeNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  Cylinder27: TCylinderNode;
  ProtoDeclare28: TX3DPrototype;
  FieldDecl30: TX3DInterfaceDeclaration;
  FieldVal30: TSFVec3f;
  Transform32: TTransformNode;
  Shape33: TShapeNode;
  Sphere34: TSphereNode;
  Appearance35: TAppearanceNode;
  Material36: TMaterialNode;
  PositionInterpolator37: TPositionInterpolatorNode;
  Script38: TScriptNode;
  FieldVal39: TSFVec3f;
  FieldVal40: TSFVec3f;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  CompiledScript38: TScript38Script;
  TimeSensor43: TTimeSensorNode;
  ProtoDeclare48: TX3DPrototype;
  FieldDecl50: TX3DInterfaceDeclaration;
  FieldVal50: TSFNode;
  FieldDecl51: TX3DInterfaceDeclaration;
  FieldVal51: TSFNode;
  FieldDecl52: TX3DInterfaceDeclaration;
  FieldVal52: TSFNode;
  FieldDecl53: TX3DInterfaceDeclaration;
  FieldVal53: TSFNode;
  FieldDecl54: TX3DInterfaceDeclaration;
  FieldVal54: TX3DEvent;
  FieldDecl55: TX3DInterfaceDeclaration;
  FieldVal55: TX3DEvent;
  Script57: TScriptNode;
  FieldVal58: TSFNode;
  FieldVal59: TSFNode;
  FieldVal60: TSFNode;
  FieldVal61: TSFNode;
  FieldVal62: TX3DEvent;
  FieldVal63: TX3DEvent;
  CompiledScript57: TScript57Script;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance65: TX3DPrototypeNode;
  ProtoInstance66: TX3DPrototypeNode;
  ProtoInstance67: TX3DPrototypeNode;
  ProtoInstance68: TX3DPrototypeNode;
  ProtoInstance77: TX3DPrototypeNode;
  ProtoInstance86: TX3DPrototypeNode;

constructor TScript38Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AEvent_keyValue: TX3DEvent);
begin
  inherited Create;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fold := Vector3(0, 0, 0);
  FField_old := nil;
  FDirty_old := False;
  FkeyValue := 0;
  FEvent_keyValue := nil;
  FBack_keyValue := TMFVec3f.Create(nil, False, 'keyValue', 0);
  FDirty_keyValue := False;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_old := AField_old;
  if AField_old <> nil then Fold := AField_old.Value;
  FEvent_keyValue := AEvent_keyValue;
end;

destructor TScript38Script.Destroy;
begin
  FreeAndNil(FBack_keyValue);
  inherited Destroy;
end;

procedure TScript38Script.FlushOutputs(const Time: TX3DTime);
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
    if FEvent_keyValue <> nil then
    begin
      FBack_keyValue.Value := FkeyValue;
      FEvent_keyValue.Send(FBack_keyValue, Time);
    end;
  end;
end;

procedure TScript38Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script38_set_location', {$ifdef FPC}@{$endif}Set_location);
end;

procedure TScript38Script.Set_location(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 10 - 5, Random * 10 - 5, Random * 10 - 5); FDirty_translation := True;
  FkeyValue := [[Fold, Ftranslation]]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript57Script.Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transnode: TSFNode; const AField_rotscalenode: TSFNode);
begin
  inherited Create;
  Fstartnode := nil;
  FField_startnode := nil;
  FDirty_startnode := False;
  Fendnode := nil;
  FField_endnode := nil;
  FDirty_endnode := False;
  Ftransnode := nil;
  FField_transnode := nil;
  FDirty_transnode := False;
  Frotscalenode := nil;
  FField_rotscalenode := nil;
  FDirty_rotscalenode := False;
  FField_startnode := AField_startnode;
  if AField_startnode <> nil then Fstartnode := AField_startnode.Value;
  FField_endnode := AField_endnode;
  if AField_endnode <> nil then Fendnode := AField_endnode.Value;
  FField_transnode := AField_transnode;
  if AField_transnode <> nil then Ftransnode := AField_transnode.Value;
  FField_rotscalenode := AField_rotscalenode;
  if AField_rotscalenode <> nil then Frotscalenode := AField_rotscalenode.Value;
end;

destructor TScript57Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript57Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_startnode then
  begin
    FDirty_startnode := False;
    if FField_startnode <> nil then
      FField_startnode.Send(Fstartnode, Time);
  end;
  if FDirty_endnode then
  begin
    FDirty_endnode := False;
    if FField_endnode <> nil then
      FField_endnode.Send(Fendnode, Time);
  end;
  if FDirty_transnode then
  begin
    FDirty_transnode := False;
    if FField_transnode <> nil then
      FField_transnode.Send(Ftransnode, Time);
  end;
  if FDirty_rotscalenode then
  begin
    FDirty_rotscalenode := False;
    if FField_rotscalenode <> nil then
      FField_rotscalenode.Send(Frotscalenode, Time);
  end;
end;

procedure TScript57Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script57_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script57_set_startpoint', {$ifdef FPC}@{$endif}Set_startpoint);
  Scene.RegisterCompiledScript('Script57_set_endpoint', {$ifdef FPC}@{$endif}Set_endpoint);
end;

procedure TScript57Script.Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
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

procedure TScript57Script.Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  trafo: Single;
begin
  trafo := Recompute(startpoint, endpoint, Time);
  if trafo <> 'undefined' then
  begin
    Ftransnode.translation := trafo.translation; FDirty_transnode := True;
    Frotscalenode.rotation := trafo.rotation; FDirty_rotscalenode := True;
    Frotscalenode.scale := trafo.scale; FDirty_rotscalenode := True;
  end
  else
  begin
    WriteLn('recompute returned undefined');
  end;
end;

procedure TScript57Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, Fendnode.translation, Time);
  FlushOutputs(Time);
end;

procedure TScript57Script.Set_startpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(((Value as TSFVec3f).Value) or (Fstartnode.translation), Fendnode.translation, Time);
  FlushOutputs(Time);
end;

procedure TScript57Script.Set_endpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, ((Value as TSFVec3f).Value) or (Fendnode.translation), Time);
  FlushOutputs(Time);
end;

procedure InitarcoldPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arcold.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
X3D0.Meta['description'] := 'an attempt to implement an arc in a graph';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'a moving graph';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Transform10.X3DName := 'trans1';
Transform11 := TTransformNode.Create;
Transform11.X3DName := 'rotscale1';
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Appearance13.Material := Material14;
Shape12.Appearance := Appearance13;
Cylinder15 := TCylinderNode.Create;
Cylinder15.Radius := 0.1;
Shape12.Geometry := Cylinder15;
Transform11.FdChildren.Add(Shape12);
Transform10.FdChildren.Add(Transform11);
Group7.FdChildren.Add(Transform10);
Transform16 := TTransformNode.Create;
Transform16.X3DName := 'trans2';
Transform17 := TTransformNode.Create;
Transform17.X3DName := 'rotscale2';
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
end;

procedure InitarcoldPart1;
begin
Material20.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Appearance19.Material := Material20;
Shape18.Appearance := Appearance19;
Cylinder21 := TCylinderNode.Create;
Cylinder21.Radius := 0.1;
Shape18.Geometry := Cylinder21;
Transform17.FdChildren.Add(Shape18);
Transform16.FdChildren.Add(Transform17);
Group7.FdChildren.Add(Transform16);
Transform22 := TTransformNode.Create;
Transform22.X3DName := 'trans3';
Transform23 := TTransformNode.Create;
Transform23.X3DName := 'rotscale3';
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Appearance25.Material := Material26;
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.1;
Shape24.Geometry := Cylinder27;
Transform23.FdChildren.Add(Shape24);
Transform22.FdChildren.Add(Transform23);
Group7.FdChildren.Add(Transform22);
ProtoDeclare28 := CreateEmptyPrototype('point');
ProtoDeclare28.X3DName := 'point';
ProtoDeclare28.X3DName := 'point';
FieldVal30 := TSFVec3f.Create(nil, True, 'translation', Vector3(0, 0, 0));
FieldDecl30 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl30.FieldOrEvent := FieldVal30;
FieldVal30.ParentInterfaceDeclaration := FieldDecl30;
ProtoDeclare28.InterfaceDeclarations.Add(FieldDecl30);
Transform32 := TTransformNode.Create;
Transform32.X3DName := 'node';
Transform32.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
Shape33 := TShapeNode.Create;
Sphere34 := TSphereNode.Create;
Sphere34.Radius := 0.1;
Shape33.Geometry := Sphere34;
end;

procedure InitarcoldPart2;
begin
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
Material36.DiffuseColor := Vector3(1, 0, 0);
Appearance35.Material := Material36;
Shape33.Appearance := Appearance35;
Transform32.FdChildren.Add(Shape33);
PositionInterpolator37 := TPositionInterpolatorNode.Create;
PositionInterpolator37.X3DName := 'PI1';
PositionInterpolator37.SetKey([0, 1]);
PositionInterpolator37.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform32.FdChildren.Add(PositionInterpolator37);
Script38 := TScriptNode.Create;
Script38.X3DName := 'MB1';
FieldVal39 := TSFVec3f.Create(Script38, True, 'translation', Vector3(50, 50, 0));
Script38.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFVec3f.Create(Script38, True, 'old', Vector3(0, 0, 0));
Script38.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFTime.CreateEvent(Script38, 'set_location', True);
Script38.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TMFVec3f.CreateEvent(Script38, 'keyValue', False);
Script38.AddCustomFieldOrEvent(FieldVal42);
FreeAndNil(CompiledScript38);
CompiledScript38 := TScript38Script.Create(FieldVal39, FieldVal40, FieldVal42);
Script38.SetUrl(['compiled:' + LineEnding +
  'set_location=Script38_set_location']);
Transform32.FdChildren.Add(Script38);
TimeSensor43 := TTimeSensorNode.Create;
TimeSensor43.X3DName := 'CL1';
TimeSensor43.CycleInterval := 3;
TimeSensor43.Loop := True;
Transform32.FdChildren.Add(TimeSensor43);
{ ROUTE CL1.cycleTime TO MB1.set_location }
Transform32.AddRoute(TimeSensor43.EventCycleTime, FieldVal41);
{ ROUTE CL1.fraction_changed TO PI1.set_fraction }
Transform32.AddRoute(TimeSensor43.EventFraction_changed, PositionInterpolator37.EventSet_fraction);
{ ROUTE MB1.keyValue TO PI1.keyValue }
Transform32.AddRoute(FieldVal42, PositionInterpolator37.keyValue);
{ ROUTE PI1.value_changed TO node.set_translation }
Transform32.AddRoute(PositionInterpolator37.EventValue_changed, Transform32.FdTranslation.EventIn);
ProtoDeclare28.Node.AddChildren([Transform32]);
X3D0.AddPrototype(ProtoDeclare28);
end;

procedure InitarcoldPart3;
begin
{ from doug sanden }
ProtoDeclare48 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare48.X3DName := 'x3dconnector';
ProtoDeclare48.X3DName := 'x3dconnector';
FieldVal50 := TSFNode.CreateUndefined(nil, True, 'startnode');
FieldDecl50 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl50.FieldOrEvent := FieldVal50;
FieldVal50.ParentInterfaceDeclaration := FieldDecl50;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl50);
FieldVal51 := TSFNode.CreateUndefined(nil, True, 'endnode');
FieldDecl51 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl51.FieldOrEvent := FieldVal51;
FieldVal51.ParentInterfaceDeclaration := FieldDecl51;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl51);
FieldVal52 := TSFNode.CreateUndefined(nil, True, 'transnode');
FieldDecl52 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl52.FieldOrEvent := FieldVal52;
FieldVal52.ParentInterfaceDeclaration := FieldDecl52;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl52);
FieldVal53 := TSFNode.CreateUndefined(nil, True, 'rotscalenode');
FieldDecl53 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl53.FieldOrEvent := FieldVal53;
FieldVal53.ParentInterfaceDeclaration := FieldDecl53;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl53);
FieldVal54 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl54 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl54.FieldOrEvent := FieldVal54;
FieldVal54.ParentInterfaceDeclaration := FieldDecl54;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl54);
FieldVal55 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl55 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl55.FieldOrEvent := FieldVal55;
FieldVal55.ParentInterfaceDeclaration := FieldDecl55;
ProtoDeclare48.InterfaceDeclarations.Add(FieldDecl55);
Script57 := TScriptNode.Create;
Script57.X3DName := 'S1';
FieldVal58 := TSFNode.CreateUndefined(Script57, True, 'startnode');
Script57.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFNode.CreateUndefined(Script57, True, 'endnode');
Script57.AddCustomFieldOrEvent(FieldVal59);
end;

procedure InitarcoldPart4;
begin
FieldVal60 := TSFNode.CreateUndefined(Script57, True, 'transnode');
Script57.AddCustomFieldOrEvent(FieldVal60);
FieldVal61 := TSFNode.CreateUndefined(Script57, True, 'rotscalenode');
Script57.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFVec3f.CreateEvent(Script57, 'set_startpoint', True);
Script57.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TSFVec3f.CreateEvent(Script57, 'set_endpoint', True);
Script57.AddCustomFieldOrEvent(FieldVal63);
Script57.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script57.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script57.FieldOrEvent('transnode', True).IsClauseNamesAdd('transnode');
Script57.FieldOrEvent('rotscalenode', True).IsClauseNamesAdd('rotscalenode');
Script57.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script57.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
FreeAndNil(CompiledScript57);
CompiledScript57 := TScript57Script.Create(FieldVal58, FieldVal59, FieldVal60, FieldVal61);
Script57.SetUrl(['compiled:' + LineEnding +
  'initialize=Script57_initialize' + LineEnding +
  'set_startpoint=Script57_set_startpoint' + LineEnding +
  'set_endpoint=Script57_set_endpoint']);
ProtoDeclare48.Node.AddChildren([Script57]);
X3D0.AddPrototype(ProtoDeclare48);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance64.X3DName := 'G1';
Group7.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance65 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance65.X3DName := 'G2';
Group7.FdChildren.Add(ProtoInstance65.Instantiate);
ProtoInstance66 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance66.X3DName := 'G3';
Group7.FdChildren.Add(ProtoInstance66.Instantiate);
ProtoInstance67 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare28);
ProtoInstance67.X3DName := 'G4';
Group7.FdChildren.Add(ProtoInstance67.Instantiate);
ProtoInstance68 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare48);
ProtoInstance68.X3DName := 'connector1';
(ProtoInstance68.Field('startnode') as TSFNode).Value := ProtoInstance64;
(ProtoInstance68.Field('endnode') as TSFNode).Value := ProtoInstance65;
(ProtoInstance68.Field('transnode') as TSFNode).Value := Transform10;
(ProtoInstance68.Field('rotscalenode') as TSFNode).Value := Transform11;
Group7.FdChildren.Add(ProtoInstance68.Instantiate);
ProtoInstance77 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare48);
ProtoInstance77.X3DName := 'connector2';
end;

procedure InitarcoldPart5;
begin
(ProtoInstance77.Field('startnode') as TSFNode).Value := ProtoInstance64;
(ProtoInstance77.Field('endnode') as TSFNode).Value := ProtoInstance66;
(ProtoInstance77.Field('transnode') as TSFNode).Value := Transform16;
(ProtoInstance77.Field('rotscalenode') as TSFNode).Value := Transform17;
Group7.FdChildren.Add(ProtoInstance77.Instantiate);
ProtoInstance86 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare48);
ProtoInstance86.X3DName := 'connector3';
(ProtoInstance86.Field('startnode') as TSFNode).Value := ProtoInstance64;
(ProtoInstance86.Field('endnode') as TSFNode).Value := ProtoInstance67;
(ProtoInstance86.Field('transnode') as TSFNode).Value := Transform22;
(ProtoInstance86.Field('rotscalenode') as TSFNode).Value := Transform23;
Group7.FdChildren.Add(ProtoInstance86.Instantiate);
{ ROUTE G1.translation_changed TO connector1.set_startpoint }
Group7.AddRoute(ProtoInstance64.EventTranslation_changed, ProtoInstance68.EventSet_startpoint);
{ ROUTE G2.translation_changed TO connector1.set_endpoint }
Group7.AddRoute(ProtoInstance65.EventTranslation_changed, ProtoInstance68.EventSet_endpoint);
{ ROUTE G1.translation_changed TO connector2.set_startpoint }
Group7.AddRoute(ProtoInstance64.EventTranslation_changed, ProtoInstance77.EventSet_startpoint);
{ ROUTE G3.translation_changed TO connector2.set_endpoint }
Group7.AddRoute(ProtoInstance66.EventTranslation_changed, ProtoInstance77.EventSet_endpoint);
{ ROUTE G1.translation_changed TO connector3.set_startpoint }
Group7.AddRoute(ProtoInstance64.EventTranslation_changed, ProtoInstance86.EventSet_startpoint);
{ ROUTE G4.translation_changed TO connector3.set_endpoint }
Group7.AddRoute(ProtoInstance67.EventTranslation_changed, ProtoInstance86.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createarcold: TX3DRootNode;
begin
  InitarcoldPart0;
  InitarcoldPart1;
  InitarcoldPart2;
  InitarcoldPart3;
  InitarcoldPart4;
  InitarcoldPart5;
  Result := X3D0;
end;

procedure RegisterarcoldScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript38 <> nil then
    CompiledScript38.RegisterHandlers(Scene);
  if CompiledScript57 <> nil then
    CompiledScript57.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript38);
  FreeAndNil(CompiledScript57);
end.
