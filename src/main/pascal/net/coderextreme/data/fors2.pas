unit fors2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createfors2: TX3DRootNode;
procedure Registerfors2Scripts(const Scene: TCastleSceneCore);

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
  TScript22Script = class
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
    procedure Set_cycle(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript42Script = class
  private
    Fspine: array of TVector3;
    FField_spine: TMFVec3f;
    FDirty_spine: Boolean;
    FendA: TVector3;
    FField_endA: TSFVec3f;
    FDirty_endA: Boolean;
    FendB: TVector3;
    FField_endB: TSFVec3f;
    FDirty_endB: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_spine: TMFVec3f; const AField_endA: TSFVec3f; const AField_endB: TSFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_endA(Value: TX3DField; const Time: TX3DTime);
    procedure Set_endB(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group10: TGroupNode;
  ProtoDeclare11: TX3DPrototype;
  FieldDecl13: TX3DInterfaceDeclaration;
  FieldVal13: TSFVec3f;
  Group15: TGroupNode;
  Transform16: TTransformNode;
  Shape17: TShapeNode;
  Sphere18: TSphereNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  PositionInterpolator21: TPositionInterpolatorNode;
  Script22: TScriptNode;
  FieldVal23: TSFVec3f;
  FieldVal24: TSFVec3f;
  FieldVal25: TX3DEvent;
  FieldVal26: TX3DEvent;
  CompiledScript22: TScript22Script;
  TimeSensor27: TTimeSensorNode;
  ProtoDeclare32: TX3DPrototype;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TSFVec3f;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TSFVec3f;
  Group37: TGroupNode;
  Shape38: TShapeNode;
  Extrusion39: TExtrusionNode;
  Appearance40: TAppearanceNode;
  Material41: TMaterialNode;
  Script42: TScriptNode;
  FieldVal43: TMFVec3f;
  FieldVal44: TSFVec3f;
  FieldVal45: TSFVec3f;
  CompiledScript42: TScript42Script;
  Transform47: TTransformNode;
  ProtoInstance48: TX3DPrototypeNode;
  ProtoInstance50: TX3DPrototypeNode;
  ProtoInstance52: TX3DPrototypeNode;

constructor TScript22Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AEvent_keyValue: TX3DEvent);
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

destructor TScript22Script.Destroy;
begin
  FreeAndNil(FBack_keyValue);
  inherited Destroy;
end;

procedure TScript22Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript22Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script22_set_cycle', {$ifdef FPC}@{$endif}Set_cycle);
end;

procedure TScript22Script.Set_cycle(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 100 - 50, Random * 100 - 50, Random * 100 - 50); FDirty_translation := True;
  FkeyValue := [Fold, Ftranslation]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript42Script.Create(const AField_spine: TMFVec3f; const AField_endA: TSFVec3f; const AField_endB: TSFVec3f);
begin
  inherited Create;
  Fspine := 0;
  FField_spine := nil;
  FDirty_spine := False;
  FendA := Vector3(0, 0, 0);
  FField_endA := nil;
  FDirty_endA := False;
  FendB := Vector3(0, 0, 0);
  FField_endB := nil;
  FDirty_endB := False;
  FField_spine := AField_spine;
  if AField_spine <> nil then Fspine := AField_spine.Value;
  FField_endA := AField_endA;
  if AField_endA <> nil then FendA := AField_endA.Value;
  FField_endB := AField_endB;
  if AField_endB <> nil then FendB := AField_endB.Value;
end;

destructor TScript42Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript42Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_spine then
  begin
    FDirty_spine := False;
    if FField_spine <> nil then
      FField_spine.Send(Fspine, Time);
  end;
  if FDirty_endA then
  begin
    FDirty_endA := False;
    if FField_endA <> nil then
      FField_endA.Send(FendA, Time);
  end;
  if FDirty_endB then
  begin
    FDirty_endB := False;
    if FField_endB <> nil then
      FField_endB.Send(FendB, Time);
  end;
end;

procedure TScript42Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script42_set_endA', {$ifdef FPC}@{$endif}Set_endA);
  Scene.RegisterCompiledScript('Script42_set_endB', {$ifdef FPC}@{$endif}Set_endB);
end;

procedure TScript42Script.Set_endA(Value: TX3DField; const Time: TX3DTime);
begin
  Fspine := [(Value as TSFVec3f).Value, Fspine[1]]; FDirty_spine := True;
  FlushOutputs(Time);
end;

procedure TScript42Script.Set_endB(Value: TX3DField; const Time: TX3DTime);
begin
  Fspine := [Fspine[0], (Value as TSFVec3f).Value]; FDirty_spine := True;
  FlushOutputs(Time);
end;

procedure Initfors2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'fors2.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group10 := TGroupNode.Create;
ProtoDeclare11 := CreateEmptyPrototype('node');
ProtoDeclare11.X3DName := 'node';
FieldVal13 := TSFVec3f.Create(nil, True, 'position', Vector3(0, 0, 0));
FieldDecl13 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl13.FieldOrEvent := FieldVal13;
FieldVal13.ParentInterfaceDeclaration := FieldDecl13;
ProtoDeclare11.InterfaceDeclarations.Add(FieldDecl13);
Group15 := TGroupNode.Create;
Transform16 := TTransformNode.Create;
Transform16.X3DName := 'transform';
Transform16.FieldOrEvent('translation', True).IsClauseNamesAdd('position');
Shape17 := TShapeNode.Create;
{ comment before Sphere }
{ comment after Sphere }
{ comment after Appearance }
Sphere18 := TSphereNode.Create;
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
{ comment before Material }
{ comment after Material }
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1, 0, 0);
Appearance19.Material := Material20;
Shape17.Appearance := Appearance19;
Transform16.FdChildren.Add(Shape17);
Group15.FdChildren.Add(Transform16);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
end;

procedure Initfors2Part1;
begin
PositionInterpolator21.X3DName := 'NodePosition';
PositionInterpolator21.SetKey([0, 1]);
PositionInterpolator21.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Group15.FdChildren.Add(PositionInterpolator21);
Script22 := TScriptNode.Create;
Script22.X3DName := 'MoveBall';
FieldVal23 := TSFVec3f.Create(Script22, True, 'translation', Vector3(50, 50, 0));
Script22.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TSFVec3f.Create(Script22, True, 'old', Vector3(0, 0, 0));
Script22.AddCustomFieldOrEvent(FieldVal24);
FieldVal25 := TSFTime.CreateEvent(Script22, 'set_cycle', True);
Script22.AddCustomFieldOrEvent(FieldVal25);
FieldVal26 := TMFVec3f.CreateEvent(Script22, 'keyValue', False);
Script22.AddCustomFieldOrEvent(FieldVal26);
FreeAndNil(CompiledScript22);
CompiledScript22 := TScript22Script.Create(FieldVal23, FieldVal24, FieldVal26);
Script22.SetUrl(['compiled:' + LineEnding +
  'set_cycle=Script22_set_cycle']);
Group15.FdChildren.Add(Script22);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.X3DName := 'nodeClock';
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
Group15.FdChildren.Add(TimeSensor27);
{ ROUTE nodeClock.cycleTime TO MoveBall.set_cycle }
Group15.AddRoute(TimeSensor27.EventCycleTime, FieldVal25);
{ ROUTE nodeClock.fraction_changed TO NodePosition.set_fraction }
Group15.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ ROUTE MoveBall.keyValue TO NodePosition.keyValue }
Group15.AddRoute(FieldVal26, PositionInterpolator21.keyValue);
{ ROUTE NodePosition.value_changed TO transform.set_translation }
Group15.AddRoute(PositionInterpolator21.EventValue_changed, Transform16.FdTranslation.EventIn);
ProtoDeclare11.Node.AddChildren([Group15]);
X3D0.AddPrototype(ProtoDeclare11);
ProtoDeclare32 := CreateEmptyPrototype('cyl');
ProtoDeclare32.X3DName := 'cyl';
FieldVal34 := TSFVec3f.CreateUndefined(nil, True, 'positionA');
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare32.InterfaceDeclarations.Add(FieldDecl34);
end;

procedure Initfors2Part2;
begin
FieldVal35 := TSFVec3f.CreateUndefined(nil, True, 'positionB');
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare32.InterfaceDeclarations.Add(FieldDecl35);
Group37 := TGroupNode.Create;
Shape38 := TShapeNode.Create;
Extrusion39 := TExtrusionNode.Create;
Extrusion39.X3DName := 'extrusion';
Extrusion39.CreaseAngle := 0.785;
Extrusion39.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Extrusion39.SetSpine([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Shape38.Geometry := Extrusion39;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(0, 1, 0);
Appearance40.Material := Material41;
Shape38.Appearance := Appearance40;
Group37.FdChildren.Add(Shape38);
Script42 := TScriptNode.Create;
Script42.X3DName := 'MoveCylinder';
FieldVal43 := TMFVec3f.Create(Script42, True, 'spine', [Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Script42.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFVec3f.Create(Script42, True, 'endA', Vector3(0, 0, 0));
Script42.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFVec3f.Create(Script42, True, 'endB', Vector3(50, 50, 50));
Script42.AddCustomFieldOrEvent(FieldVal45);
Script42.FieldOrEvent('endA', True).IsClauseNamesAdd('positionA');
Script42.FieldOrEvent('endB', True).IsClauseNamesAdd('positionB');
FreeAndNil(CompiledScript42);
CompiledScript42 := TScript42Script.Create(FieldVal43, FieldVal44, FieldVal45);
Script42.SetUrl(['compiled:' + LineEnding +
  'set_endA=Script42_set_endA' + LineEnding +
  'set_endB=Script42_set_endB']);
Group37.FdChildren.Add(Script42);
{ ROUTE MoveCylinder.spine TO extrusion.set_spine }
Group37.AddRoute(FieldVal43.EventOut, Extrusion39.EventSet_spine);
ProtoDeclare32.Node.AddChildren([Group37]);
X3D0.AddPrototype(ProtoDeclare32);
Transform47 := TTransformNode.Create;
Transform47.Scale := Vector3(0.1, 0.1, 0.1);
ProtoInstance48 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
end;

procedure Initfors2Part3;
begin
ProtoInstance48.X3DName := 'nodeA';
(ProtoInstance48.Field('position') as TSFVec3f).Value := Vector3(-50, -50, -50);
Transform47.FdChildren.Add(ProtoInstance48.Instantiate);
ProtoInstance50 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance50.X3DName := 'nodeB';
(ProtoInstance50.Field('position') as TSFVec3f).Value := Vector3(50, 50, 50);
Transform47.FdChildren.Add(ProtoInstance50.Instantiate);
ProtoInstance52 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare32);
ProtoInstance52.X3DName := 'linkA';
Transform47.FdChildren.Add(ProtoInstance52.Instantiate);
Group10.FdChildren.Add(Transform47);
{ ROUTE nodeA.position TO linkA.positionA }
Group10.AddRoute(ProtoInstance48.position, ProtoInstance52.positionA);
{ ROUTE nodeB.position TO linkA.positionB }
Group10.AddRoute(ProtoInstance50.position, ProtoInstance52.positionB);
X3D0.AddChildren([Group10]);
end;

function Createfors2: TX3DRootNode;
begin
  Initfors2Part0;
  Initfors2Part1;
  Initfors2Part2;
  Initfors2Part3;
  Result := X3D0;
end;

procedure Registerfors2Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript22 <> nil then
    CompiledScript22.RegisterHandlers(Scene);
  if CompiledScript42 <> nil then
    CompiledScript42.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript22);
  FreeAndNil(CompiledScript42);
end.
