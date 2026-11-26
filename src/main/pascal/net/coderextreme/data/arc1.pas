unit arc1;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createarc1: TX3DRootNode;
procedure Registerarc1Scripts(const Scene: TCastleSceneCore);

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

  TScript50Script = class
  private
    Fstartnode: TX3DNode;
    Fendnode: TX3DNode;
    Ftransnode: TX3DNode;
    Frotscalenode: TX3DNode;
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
  Transform31: TTransformNode;
  ProtoInstance32: TX3DPrototypeNode;
  Transform33: TTransformNode;
  ProtoInstance34: TX3DPrototypeNode;
  Transform35: TTransformNode;
  Transform36: TTransformNode;
  Shape37: TShapeNode;
  Appearance38: TAppearanceNode;
  Material39: TMaterialNode;
  Cylinder40: TCylinderNode;
  ProtoDeclare41: TX3DPrototype;
  FieldDecl43: TX3DInterfaceDeclaration;
  FieldVal43: TSFNode;
  FieldDecl44: TX3DInterfaceDeclaration;
  FieldVal44: TSFNode;
  FieldDecl45: TX3DInterfaceDeclaration;
  FieldVal45: TSFNode;
  FieldDecl46: TX3DInterfaceDeclaration;
  FieldVal46: TSFNode;
  FieldDecl47: TX3DInterfaceDeclaration;
  FieldVal47: TX3DEvent;
  FieldDecl48: TX3DInterfaceDeclaration;
  FieldVal48: TX3DEvent;
  Script50: TScriptNode;
  FieldVal51: TSFNode;
  FieldVal52: TSFNode;
  FieldVal53: TSFNode;
  FieldVal54: TSFNode;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  CompiledScript50: TScript50Script;
  ProtoInstance57: TX3DPrototypeNode;

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

constructor TScript50Script.Create(const AField_startnode: TSFNode; const AField_endnode: TSFNode; const AField_transnode: TSFNode; const AField_rotscalenode: TSFNode);
begin
  inherited Create;
  Fstartnode := nil;
  Fendnode := nil;
  Ftransnode := nil;
  Frotscalenode := nil;
  if AField_startnode <> nil then Fstartnode := AField_startnode.Value;
  if AField_endnode <> nil then Fendnode := AField_endnode.Value;
  if AField_transnode <> nil then Ftransnode := AField_transnode.Value;
  if AField_rotscalenode <> nil then Frotscalenode := AField_rotscalenode.Value;
end;

destructor TScript50Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript50Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript50Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script50_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script50_set_startpoint', {$ifdef FPC}@{$endif}Set_startpoint);
  Scene.RegisterCompiledScript('Script50_set_endpoint', {$ifdef FPC}@{$endif}Set_endpoint);
end;

procedure TScript50Script.Recompute(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
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

procedure TScript50Script.Recompute_and_route(const startpoint: Single; const endpoint: Single; const Time: TX3DTime);
var
  trafo: Single;
begin
  trafo := Recompute(startpoint, endpoint, Time);
  if trafo then
  begin
    Ftransnode.translation := trafo.translation;
    Frotscalenode.rotation := trafo.rotation;
    Frotscalenode.scale := trafo.scale;
  end;
end;

procedure TScript50Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, Fendnode.translation, Time);
end;

procedure TScript50Script.Set_startpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route((Value as TSFVec3f).Value, Fendnode.translation, Time);
end;

procedure TScript50Script.Set_endpoint(Value: TX3DField; const Time: TX3DTime);
begin
  Recompute_and_route(Fstartnode.translation, (Value as TSFVec3f).Value, Time);
end;

procedure Initarc1Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc1.x3d';
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

procedure Initarc1Part1;
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
{ ROUTE MB1.translation_changed TO node.set_translation }
Transform14.AddRoute(FieldVal21.EventOut, Transform14.FdTranslation.EventIn);
ProtoDeclare10.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare10);
Transform31 := TTransformNode.Create;
Transform31.X3DName := 'G1';
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
Transform31.FdChildren.Add(ProtoInstance32.Instantiate);
Group7.FdChildren.Add(Transform31);
Transform33 := TTransformNode.Create;
Transform33.X3DName := 'G2';
end;

procedure Initarc1Part2;
begin
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
Transform33.FdChildren.Add(ProtoInstance34.Instantiate);
Group7.FdChildren.Add(Transform33);
Transform35 := TTransformNode.Create;
Transform35.X3DName := 'transC1';
Transform36 := TTransformNode.Create;
Transform36.X3DName := 'rotscaleC1';
Shape37 := TShapeNode.Create;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material39.Transparency := 0.5;
Appearance38.Material := Material39;
Shape37.Appearance := Appearance38;
Cylinder40 := TCylinderNode.Create;
Cylinder40.Radius := 0.05;
Shape37.Geometry := Cylinder40;
Transform36.FdChildren.Add(Shape37);
Transform35.FdChildren.Add(Transform36);
Group7.FdChildren.Add(Transform35);
ProtoDeclare41 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare41.X3DName := 'x3dconnector';
FieldVal43 := TSFNode.CreateUndefined(nil, False, 'startnode');
FieldDecl43 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl43.FieldOrEvent := FieldVal43;
FieldVal43.ParentInterfaceDeclaration := FieldDecl43;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl43);
FieldVal44 := TSFNode.CreateUndefined(nil, False, 'endnode');
FieldDecl44 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl44.FieldOrEvent := FieldVal44;
FieldVal44.ParentInterfaceDeclaration := FieldDecl44;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl44);
FieldVal45 := TSFNode.CreateUndefined(nil, True, 'transnode');
FieldDecl45 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl45.FieldOrEvent := FieldVal45;
FieldVal45.ParentInterfaceDeclaration := FieldDecl45;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl45);
FieldVal46 := TSFNode.CreateUndefined(nil, True, 'rotscalenode');
FieldDecl46 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl46.FieldOrEvent := FieldVal46;
end;

procedure Initarc1Part3;
begin
FieldVal46.ParentInterfaceDeclaration := FieldDecl46;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl46);
FieldVal47 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl47 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl47.FieldOrEvent := FieldVal47;
FieldVal47.ParentInterfaceDeclaration := FieldDecl47;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl47);
FieldVal48 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl48 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl48.FieldOrEvent := FieldVal48;
FieldVal48.ParentInterfaceDeclaration := FieldDecl48;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl48);
Script50 := TScriptNode.Create;
Script50.X3DName := 'S1';
FieldVal51 := TSFNode.CreateUndefined(Script50, False, 'startnode');
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFNode.CreateUndefined(Script50, False, 'endnode');
Script50.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFNode.CreateUndefined(Script50, False, 'transnode');
Script50.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFNode.CreateUndefined(Script50, False, 'rotscalenode');
Script50.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFVec3f.CreateEvent(Script50, 'set_startpoint', True);
Script50.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFVec3f.CreateEvent(Script50, 'set_endpoint', True);
Script50.AddCustomFieldOrEvent(FieldVal56);
Script50.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script50.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script50.FieldOrEvent('transnode', True).IsClauseNamesAdd('transnode');
Script50.FieldOrEvent('rotscalenode', True).IsClauseNamesAdd('rotscalenode');
Script50.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script50.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
FreeAndNil(CompiledScript50);
CompiledScript50 := TScript50Script.Create(FieldVal51, FieldVal52, FieldVal53, FieldVal54);
Script50.SetUrl(['compiled:' + LineEnding +
  'initialize=Script50_initialize' + LineEnding +
  'set_startpoint=Script50_set_startpoint' + LineEnding +
  'set_endpoint=Script50_set_endpoint']);
ProtoDeclare41.Node.AddChildren([Script50]);
X3D0.AddPrototype(ProtoDeclare41);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare41);
ProtoInstance57.X3DName := 'connector1';
(ProtoInstance57.Field('startnode') as TSFNode).Value := Transform31;
end;

procedure Initarc1Part4;
begin
(ProtoInstance57.Field('endnode') as TSFNode).Value := Transform33;
(ProtoInstance57.Field('transnode') as TSFNode).Value := Transform35;
(ProtoInstance57.Field('rotscalenode') as TSFNode).Value := Transform36;
Group7.FdChildren.Add(ProtoInstance57.Instantiate);
{ ROUTE G1.translation_changed TO connector1.set_startpoint }
Group7.AddRoute(Transform31.EventTranslation_changed, ProtoInstance57.EventSet_startpoint);
{ ROUTE G2.translation_changed TO connector1.set_endpoint }
Group7.AddRoute(Transform33.EventTranslation_changed, ProtoInstance57.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createarc1: TX3DRootNode;
begin
  Initarc1Part0;
  Initarc1Part1;
  Initarc1Part2;
  Initarc1Part3;
  Initarc1Part4;
  Result := X3D0;
end;

procedure Registerarc1Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript20 <> nil then
    CompiledScript20.RegisterHandlers(Scene);
  if CompiledScript50 <> nil then
    CompiledScript50.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript20);
  FreeAndNil(CompiledScript50);
end.
