unit arc;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createarc: TX3DRootNode;
procedure RegisterarcScripts(const Scene: TCastleSceneCore);

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
  TScript20Script = class
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

  TScript44Script = class
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
  ProtoDeclare10: TX3DPrototype;
  FieldDecl12: TX3DInterfaceDeclaration;
  FieldVal12: TSFVec3f;
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Sphere16: TSphereNode;
  Appearance17: TAppearanceNode;
  Material18: TMaterialNode;
  PositionInterpolator19: TPositionInterpolatorNode;
  Script20: TScriptNode;
  FieldVal21: TSFVec3f;
  FieldVal22: TSFVec3f;
  FieldVal23: TX3DEvent;
  FieldVal24: TMFVec3f;
  CompiledScript20: TScript20Script;
  TimeSensor25: TTimeSensorNode;
  ProtoDeclare30: TX3DPrototype;
  FieldDecl32: TX3DInterfaceDeclaration;
  FieldVal32: TSFNode;
  FieldDecl33: TX3DInterfaceDeclaration;
  FieldVal33: TSFNode;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TX3DEvent;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TX3DEvent;
  Group37: TGroupNode;
  Transform38: TTransformNode;
  Transform39: TTransformNode;
  Shape40: TShapeNode;
  Appearance41: TAppearanceNode;
  Material42: TMaterialNode;
  Cylinder43: TCylinderNode;
  Script44: TScriptNode;
  FieldVal45: TSFNode;
  FieldVal46: TSFNode;
  FieldVal47: TSFNode;
  FieldVal49: TSFNode;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  CompiledScript44: TScript44Script;
  ProtoInstance53: TX3DPrototypeNode;
  ProtoInstance54: TX3DPrototypeNode;
  ProtoInstance55: TX3DPrototypeNode;
  ProtoInstance56: TX3DPrototypeNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance71: TX3DPrototypeNode;

constructor TScript20Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AField_keyValue: TMFVec3f);
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

destructor TScript20Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript20Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript20Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script20_set_location', {$ifdef FPC}@{$endif}Set_location);
end;

procedure TScript20Script.Set_location(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 10 - 5, Random * 10 - 5, Random * 10 - 5); FDirty_translation := True;
  FkeyValue := [[Fold, Ftranslation]]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript44Script.Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_position: TSFNode; const AField_rotscale: TSFNode);
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

destructor TScript44Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript44Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript44Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script44_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script44_set_startpoint', {$ifdef FPC}@{$endif}Set_startpoint);
  Scene.RegisterCompiledScript('Script44_set_endpoint', {$ifdef FPC}@{$endif}Set_endpoint);
end;

procedure TScript44Script.Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
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

procedure TScript44Script.Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
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

procedure TScript44Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, Fendnode.translation, Time);
  FlushOutputs(Time);
end;

procedure TScript44Script.Set_startpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route((Value as TSFVec3f).Value, Fendnode.translation, Time);
  FlushOutputs(Time);
end;

procedure TScript44Script.Set_endpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, (Value as TSFVec3f).Value, Time);
  FlushOutputs(Time);
end;

procedure InitarcPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'Only Viewpoint';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
ProtoDeclare10 := CreateEmptyPrototype('point');
ProtoDeclare10.X3DName := 'point';
FieldVal12 := TSFVec3f.Create(nil, True, 'translation', Vector3(0, 0, 0));
FieldDecl12 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl12.FieldOrEvent := FieldVal12;
FieldVal12.ParentInterfaceDeclaration := FieldDecl12;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl12);
Transform14 := TTransformNode.Create;
Transform14.X3DName := 'node';
Transform14.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 0.1;
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1, 0, 0);
Appearance17.Material := Material18;
Shape15.Appearance := Appearance17;
Transform14.FdChildren.Add(Shape15);
PositionInterpolator19 := TPositionInterpolatorNode.Create;
PositionInterpolator19.X3DName := 'PI1';
PositionInterpolator19.SetKey([0, 1]);
end;

procedure InitarcPart1;
begin
PositionInterpolator19.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform14.FdChildren.Add(PositionInterpolator19);
Script20 := TScriptNode.Create;
Script20.X3DName := 'MB1';
FieldVal21 := TSFVec3f.Create(Script20, True, 'translation', Vector3(50, 50, 0));
Script20.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFVec3f.Create(Script20, True, 'old', Vector3(0, 0, 0));
Script20.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TSFTime.CreateEvent(Script20, 'set_location', True);
Script20.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TMFVec3f.Create(Script20, True, 'keyValue', [Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Script20.AddCustomFieldOrEvent(FieldVal24);
FreeAndNil(CompiledScript20);
CompiledScript20 := TScript20Script.Create(FieldVal21, FieldVal22, FieldVal24);
Script20.SetUrl(['compiled:' + LineEnding +
  'set_location=Script20_set_location']);
Transform14.FdChildren.Add(Script20);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.X3DName := 'CL1';
TimeSensor25.CycleInterval := 3;
TimeSensor25.Loop := True;
Transform14.FdChildren.Add(TimeSensor25);
{ ROUTE CL1.cycleTime TO MB1.set_location }
Transform14.AddRoute(TimeSensor25.EventCycleTime, FieldVal23);
{ ROUTE CL1.fraction_changed TO PI1.set_fraction }
Transform14.AddRoute(TimeSensor25.EventFraction_changed, PositionInterpolator19.EventSet_fraction);
{ ROUTE MB1.keyValue TO PI1.keyValue }
Transform14.AddRoute(FieldVal24.EventOut, PositionInterpolator19.keyValue);
{ ROUTE PI1.value_changed TO node.set_translation }
Transform14.AddRoute(PositionInterpolator19.EventValue_changed, Transform14.FdTranslation.EventIn);
ProtoDeclare10.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare30 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare30.X3DName := 'x3dconnector';
FieldVal32 := TSFNode.CreateUndefined(nil, False, 'startnode');
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFNode.CreateUndefined(nil, False, 'endnode');
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitarcPart2;
begin
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl35);
Group37 := TGroupNode.Create;
Transform38 := TTransformNode.Create;
Transform38.X3DName := 'trans';
Transform39 := TTransformNode.Create;
Transform39.X3DName := 'rotscale';
Shape40 := TShapeNode.Create;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material42.Transparency := 0.5;
Appearance41.Material := Material42;
Shape40.Appearance := Appearance41;
Cylinder43 := TCylinderNode.Create;
Cylinder43.Radius := 0.05;
Shape40.Geometry := Cylinder43;
Transform39.FdChildren.Add(Shape40);
Transform38.FdChildren.Add(Transform39);
Group37.FdChildren.Add(Transform38);
Script44 := TScriptNode.Create;
Script44.X3DName := 'S1';
FieldVal45 := TSFNode.CreateUndefined(Script44, False, 'startnode');
Script44.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFNode.CreateUndefined(Script44, False, 'endnode');
Script44.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFNode.CreateUndefined(Script44, True, 'position');
Script44.AddCustomFieldOrEvent(FieldVal47);
FieldVal47.Value := Transform38;
end;

procedure InitarcPart3;
begin
FieldVal49 := TSFNode.CreateUndefined(Script44, True, 'rotscale');
Script44.AddCustomFieldOrEvent(FieldVal49);
FieldVal49.Value := Transform39;
FieldVal51 := TSFVec3f.CreateEvent(Script44, 'set_startpoint', True);
Script44.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.CreateEvent(Script44, 'set_endpoint', True);
Script44.AddCustomFieldOrEvent(FieldVal52);
Script44.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script44.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script44.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script44.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
FreeAndNil(CompiledScript44);
CompiledScript44 := TScript44Script.Create(FieldVal45, FieldVal46, FieldVal47, FieldVal49);
Script44.SetUrl(['compiled:' + LineEnding +
  'initialize=Script44_initialize' + LineEnding +
  'set_startpoint=Script44_set_startpoint' + LineEnding +
  'set_endpoint=Script44_set_endpoint']);
Group37.FdChildren.Add(Script44);
ProtoDeclare30.Node.AddChildren([Group37]);
X3D0.AddPrototype(ProtoDeclare30);
ProtoInstance53 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance53.X3DName := 'G1';
Group7.FdChildren.Add(ProtoInstance53.Instantiate);
ProtoInstance54 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance54.X3DName := 'G2';
Group7.FdChildren.Add(ProtoInstance54.Instantiate);
ProtoInstance55 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance55.X3DName := 'G3';
Group7.FdChildren.Add(ProtoInstance55.Instantiate);
ProtoInstance56 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance56.X3DName := 'G4';
Group7.FdChildren.Add(ProtoInstance56.Instantiate);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
ProtoInstance57.X3DName := 'connector1';
(ProtoInstance57.Field('startnode') as TSFNode).Value := ProtoInstance53;
(ProtoInstance57.Field('endnode') as TSFNode).Value := ProtoInstance54;
Group7.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
ProtoInstance64.X3DName := 'connector2';
(ProtoInstance64.Field('startnode') as TSFNode).Value := ProtoInstance53;
(ProtoInstance64.Field('endnode') as TSFNode).Value := ProtoInstance55;
Group7.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance71 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
end;

procedure InitarcPart4;
begin
ProtoInstance71.X3DName := 'connector3';
(ProtoInstance71.Field('startnode') as TSFNode).Value := ProtoInstance53;
(ProtoInstance71.Field('endnode') as TSFNode).Value := ProtoInstance56;
Group7.FdChildren.Add(ProtoInstance71.Instantiate);
{ ROUTE G1.translation TO connector1.set_startpoint }
Group7.AddRoute(ProtoInstance53.EventTranslation, ProtoInstance57.EventSet_startpoint);
{ ROUTE G2.translation TO connector1.set_endpoint }
Group7.AddRoute(ProtoInstance54.EventTranslation, ProtoInstance57.EventSet_endpoint);
{ ROUTE G1.translation TO connector2.set_startpoint }
Group7.AddRoute(ProtoInstance53.EventTranslation, ProtoInstance64.EventSet_startpoint);
{ ROUTE G3.translation TO connector2.set_endpoint }
Group7.AddRoute(ProtoInstance55.EventTranslation, ProtoInstance64.EventSet_endpoint);
{ ROUTE G1.translation TO connector3.set_startpoint }
Group7.AddRoute(ProtoInstance53.EventTranslation, ProtoInstance71.EventSet_startpoint);
{ ROUTE G4.translation TO connector3.set_endpoint }
Group7.AddRoute(ProtoInstance56.EventTranslation, ProtoInstance71.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createarc: TX3DRootNode;
begin
  InitarcPart0;
  InitarcPart1;
  InitarcPart2;
  InitarcPart3;
  InitarcPart4;
  Result := X3D0;
end;

procedure RegisterarcScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript20 <> nil then
    CompiledScript20.RegisterHandlers(Scene);
  if CompiledScript44 <> nil then
    CompiledScript44.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript20);
  FreeAndNil(CompiledScript44);
end.
