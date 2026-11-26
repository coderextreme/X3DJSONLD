unit force;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createforce: TX3DRootNode;
procedure RegisterforceScripts(const Scene: TCastleSceneCore);

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
  TScript28Script = class
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

  TScript48Script = class
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

  TScript66Script = class
  private
    Fcounter: Int32;
    FField_counter: TSFInt32;
    FDirty_counter: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_counter: TSFInt32);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Add_node(Value: TX3DField; const Time: TX3DTime);
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
  Transform21: TTransformNode;
  Shape22: TShapeNode;
  Text23: TTextNode;
  FontStyle24: TFontStyleNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  PositionInterpolator27: TPositionInterpolatorNode;
  Script28: TScriptNode;
  FieldVal29: TSFVec3f;
  FieldVal30: TSFVec3f;
  FieldVal31: TX3DEvent;
  FieldVal32: TX3DEvent;
  CompiledScript28: TScript28Script;
  TimeSensor33: TTimeSensorNode;
  ProtoDeclare38: TX3DPrototype;
  FieldDecl40: TX3DInterfaceDeclaration;
  FieldVal40: TSFVec3f;
  FieldDecl41: TX3DInterfaceDeclaration;
  FieldVal41: TSFVec3f;
  Group43: TGroupNode;
  Shape44: TShapeNode;
  Extrusion45: TExtrusionNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Script48: TScriptNode;
  FieldVal49: TMFVec3f;
  FieldVal50: TSFVec3f;
  FieldVal51: TSFVec3f;
  CompiledScript48: TScript48Script;
  Transform53: TTransformNode;
  PlaneSensor54: TPlaneSensorNode;
  ProtoInstance55: TX3DPrototypeNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance59: TX3DPrototypeNode;
  ProtoInstance61: TX3DPrototypeNode;
  ProtoInstance63: TX3DPrototypeNode;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance65: TX3DPrototypeNode;
  Script66: TScriptNode;
  FieldVal67: TSFInt32;
  FieldVal68: TX3DEvent;
  CompiledScript66: TScript66Script;

constructor TScript28Script.Create(const AField_translation: TSFVec3f; const AField_old: TSFVec3f; const AEvent_keyValue: TX3DEvent);
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

destructor TScript28Script.Destroy;
begin
  FreeAndNil(FBack_keyValue);
  inherited Destroy;
end;

procedure TScript28Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript28Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script28_set_cycle', {$ifdef FPC}@{$endif}Set_cycle);
end;

procedure TScript28Script.Set_cycle(Value: TX3DField; const Time: TX3DTime);
begin
  Fold := Ftranslation; FDirty_old := True;
  Ftranslation := Vector3(Random * 100 - 50, Random * 100 - 50, Random * 100 - 50); FDirty_translation := True;
  FkeyValue := [Fold, Ftranslation]; FDirty_keyValue := True;
  FlushOutputs(Time);
end;

constructor TScript48Script.Create(const AField_spine: TMFVec3f; const AField_endA: TSFVec3f; const AField_endB: TSFVec3f);
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

destructor TScript48Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript48Script.FlushOutputs(const Time: TX3DTime);
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

procedure TScript48Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script48_set_endA', {$ifdef FPC}@{$endif}Set_endA);
  Scene.RegisterCompiledScript('Script48_set_endB', {$ifdef FPC}@{$endif}Set_endB);
end;

procedure TScript48Script.Set_endA(Value: TX3DField; const Time: TX3DTime);
begin
  Fspine := [(Value as TSFVec3f).Value, Fspine[1]]; FDirty_spine := True;
  FlushOutputs(Time);
end;

procedure TScript48Script.Set_endB(Value: TX3DField; const Time: TX3DTime);
begin
  Fspine := [Fspine[0], (Value as TSFVec3f).Value]; FDirty_spine := True;
  FlushOutputs(Time);
end;

constructor TScript66Script.Create(const AField_counter: TSFInt32);
begin
  inherited Create;
  Fcounter := 0;
  FField_counter := nil;
  FDirty_counter := False;
  FField_counter := AField_counter;
  if AField_counter <> nil then Fcounter := AField_counter.Value;
end;

destructor TScript66Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript66Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_counter then
  begin
    FDirty_counter := False;
    if FField_counter <> nil then
      FField_counter.Send(Fcounter, Time);
  end;
end;

procedure TScript66Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script66_add_node', {$ifdef FPC}@{$endif}Add_node);
end;

procedure TScript66Script.Add_node(Value: TX3DField; const Time: TX3DTime);
begin
  Fcounter := Fcounter := Fcounter + 1; FDirty_counter := True; FDirty_counter := True;
  WriteLn(WriteLn().querySelector('field [name=ModifiableNode]'), 0);
  FlushOutputs(Time);
end;

procedure InitforcePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'July 14 2025';
X3D0.Meta['title'] := 'force.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d';
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
Sphere18 := TSphereNode.Create;
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1, 0, 0);
Appearance19.Material := Material20;
Shape17.Appearance := Appearance19;
Transform16.FdChildren.Add(Shape17);
Transform21 := TTransformNode.Create;
Transform21.Translation := Vector3(1, 0, 0);
Shape22 := TShapeNode.Create;
Text23 := TTextNode.Create;
Text23.SetText(['Node']);
FontStyle24 := TFontStyleNode.Create;
FontStyle24.Justify := fjMiddle;
end;

procedure InitforcePart1;
begin
FontStyle24.JustifyMinor := fjMiddle;
FontStyle24.Size := 5;
Text23.FontStyle := FontStyle24;
Shape22.Geometry := Text23;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0, 0, 1);
Appearance25.Material := Material26;
Shape22.Appearance := Appearance25;
Transform21.FdChildren.Add(Shape22);
Transform16.FdChildren.Add(Transform21);
Group15.FdChildren.Add(Transform16);
PositionInterpolator27 := TPositionInterpolatorNode.Create;
PositionInterpolator27.X3DName := 'NodePosition';
PositionInterpolator27.SetKey([0, 1]);
PositionInterpolator27.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Group15.FdChildren.Add(PositionInterpolator27);
Script28 := TScriptNode.Create;
Script28.X3DName := 'MoveBall';
FieldVal29 := TSFVec3f.Create(Script28, True, 'translation', Vector3(50, 50, 0));
Script28.AddCustomFieldOrEvent(FieldVal29);
FieldVal30 := TSFVec3f.Create(Script28, True, 'old', Vector3(0, 0, 0));
Script28.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFTime.CreateEvent(Script28, 'set_cycle', True);
Script28.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TMFVec3f.CreateEvent(Script28, 'keyValue', False);
Script28.AddCustomFieldOrEvent(FieldVal32);
FreeAndNil(CompiledScript28);
CompiledScript28 := TScript28Script.Create(FieldVal29, FieldVal30, FieldVal32);
Script28.SetUrl(['compiled:' + LineEnding +
  'set_cycle=Script28_set_cycle']);
Group15.FdChildren.Add(Script28);
TimeSensor33 := TTimeSensorNode.Create;
TimeSensor33.X3DName := 'nodeClock';
TimeSensor33.CycleInterval := 3;
TimeSensor33.Loop := True;
Group15.FdChildren.Add(TimeSensor33);
{ ROUTE nodeClock.cycleTime TO MoveBall.set_cycle }
Group15.AddRoute(TimeSensor33.EventCycleTime, FieldVal31);
{ ROUTE nodeClock.fraction_changed TO NodePosition.set_fraction }
Group15.AddRoute(TimeSensor33.EventFraction_changed, PositionInterpolator27.EventSet_fraction);
end;

procedure InitforcePart2;
begin
{ ROUTE MoveBall.keyValue TO NodePosition.keyValue }
Group15.AddRoute(FieldVal32, PositionInterpolator27.keyValue);
{ ROUTE NodePosition.value_changed TO transform.set_translation }
Group15.AddRoute(PositionInterpolator27.EventValue_changed, Transform16.FdTranslation.EventIn);
ProtoDeclare11.Node.AddChildren([Group15]);
X3D0.AddPrototype(ProtoDeclare11);
ProtoDeclare38 := CreateEmptyPrototype('cyl');
ProtoDeclare38.X3DName := 'cyl';
FieldVal40 := TSFVec3f.Create(nil, True, 'set_positionA', Vector3(0, 0, 0));
FieldDecl40 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl40.FieldOrEvent := FieldVal40;
FieldVal40.ParentInterfaceDeclaration := FieldDecl40;
ProtoDeclare38.InterfaceDeclarations.Add(FieldDecl40);
FieldVal41 := TSFVec3f.Create(nil, True, 'set_positionB', Vector3(50, 50, 50));
FieldDecl41 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl41.FieldOrEvent := FieldVal41;
FieldVal41.ParentInterfaceDeclaration := FieldDecl41;
ProtoDeclare38.InterfaceDeclarations.Add(FieldDecl41);
Group43 := TGroupNode.Create;
Shape44 := TShapeNode.Create;
Extrusion45 := TExtrusionNode.Create;
Extrusion45.X3DName := 'extrusion';
Extrusion45.CreaseAngle := 0.785;
Extrusion45.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Extrusion45.SetSpine([Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Shape44.Geometry := Extrusion45;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0, 1, 0);
Appearance46.Material := Material47;
Shape44.Appearance := Appearance46;
Group43.FdChildren.Add(Shape44);
Script48 := TScriptNode.Create;
Script48.X3DName := 'MoveCylinder';
FieldVal49 := TMFVec3f.Create(Script48, True, 'spine', [Vector3(0, -50, 0), Vector3(0, 0, 0), Vector3(0, 50, 0)]);
Script48.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFVec3f.Create(Script48, True, 'endA', Vector3(0, 0, 0));
Script48.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFVec3f.Create(Script48, True, 'endB', Vector3(50, 50, 50));
Script48.AddCustomFieldOrEvent(FieldVal51);
end;

procedure InitforcePart3;
begin
Script48.FieldOrEvent('endA', True).IsClauseNamesAdd('set_positionA');
Script48.FieldOrEvent('endB', True).IsClauseNamesAdd('set_positionB');
FreeAndNil(CompiledScript48);
CompiledScript48 := TScript48Script.Create(FieldVal49, FieldVal50, FieldVal51);
Script48.SetUrl(['compiled:' + LineEnding +
  'set_endA=Script48_set_endA' + LineEnding +
  'set_endB=Script48_set_endB']);
Group43.FdChildren.Add(Script48);
{ ROUTE MoveCylinder.spine TO extrusion.set_spine }
Group43.AddRoute(FieldVal49.EventOut, Extrusion45.EventSet_spine);
ProtoDeclare38.Node.AddChildren([Group43]);
X3D0.AddPrototype(ProtoDeclare38);
Transform53 := TTransformNode.Create;
Transform53.X3DName := 'HoldsContent';
Transform53.Scale := Vector3(0.1, 0.1, 0.1);
PlaneSensor54 := TPlaneSensorNode.Create;
PlaneSensor54.X3DName := 'clickGenerator';
PlaneSensor54.MinPosition := Vector2(-50, -50);
PlaneSensor54.MaxPosition := Vector2(50, 50);
PlaneSensor54.Description := 'click on background to add nodes, click on nodes to add links';
Transform53.FdChildren.Add(PlaneSensor54);
ProtoInstance55 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance55.X3DName := 'nodeA';
(ProtoInstance55.Field('position') as TSFVec3f).Value := Vector3(0, 0, 0);
Transform53.FdChildren.Add(ProtoInstance55.Instantiate);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance57.X3DName := 'nodeB';
(ProtoInstance57.Field('position') as TSFVec3f).Value := Vector3(50, 50, 50);
Transform53.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoInstance59 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance59.X3DName := 'nodeC';
(ProtoInstance59.Field('position') as TSFVec3f).Value := Vector3(-50, -50, -50);
Transform53.FdChildren.Add(ProtoInstance59.Instantiate);
ProtoInstance61 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
ProtoInstance61.X3DName := 'nodeD';
(ProtoInstance61.Field('position') as TSFVec3f).Value := Vector3(50, 50, -50);
Transform53.FdChildren.Add(ProtoInstance61.Instantiate);
ProtoInstance63 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare38);
ProtoInstance63.X3DName := 'linkA';
Transform53.FdChildren.Add(ProtoInstance63.Instantiate);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare38);
ProtoInstance64.X3DName := 'linkB';
end;

procedure InitforcePart4;
begin
Transform53.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance65 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare38);
ProtoInstance65.X3DName := 'linkC';
Transform53.FdChildren.Add(ProtoInstance65.Instantiate);
Group10.FdChildren.Add(Transform53);
Script66 := TScriptNode.Create;
Script66.X3DName := 'clickHandler';
FieldVal67 := TSFInt32.Create(Script66, True, 'counter', 0);
Script66.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TSFBool.CreateEvent(Script66, 'add_node', True);
Script66.AddCustomFieldOrEvent(FieldVal68);
{ <field accessType="outputOnly" name="node_changed" type="SFNode"/> }
{ <field name="ModifiableNode" type="SFNode" accessType="inputOutput"> }
{ <Transform USE="HoldsContent"/> }
{ </field> }
FreeAndNil(CompiledScript66);
CompiledScript66 := TScript66Script.Create(FieldVal67);
Script66.SetUrl(['compiled:' + LineEnding +
  'add_node=Script66_add_node']);
Group10.FdChildren.Add(Script66);
{ ROUTE clickGenerator.isActive TO clickHandler.add_node }
Group10.AddRoute(PlaneSensor54.EventIsActive, FieldVal68);
{ ROUTE nodeA.position TO linkA.set_positionA }
Group10.AddRoute(ProtoInstance55.position, ProtoInstance63.EventSet_positionA);
{ ROUTE nodeB.position TO linkA.set_positionB }
Group10.AddRoute(ProtoInstance57.position, ProtoInstance63.EventSet_positionB);
{ ROUTE nodeA.position TO linkB.set_positionA }
Group10.AddRoute(ProtoInstance55.position, ProtoInstance64.EventSet_positionA);
{ ROUTE nodeC.position TO linkB.set_positionB }
Group10.AddRoute(ProtoInstance59.position, ProtoInstance64.EventSet_positionB);
{ ROUTE nodeA.position TO linkC.set_positionA }
Group10.AddRoute(ProtoInstance55.position, ProtoInstance65.EventSet_positionA);
{ ROUTE nodeD.position TO linkC.set_positionB }
Group10.AddRoute(ProtoInstance61.position, ProtoInstance65.EventSet_positionB);
X3D0.AddChildren([Group10]);
end;

function Createforce: TX3DRootNode;
begin
  InitforcePart0;
  InitforcePart1;
  InitforcePart2;
  InitforcePart3;
  InitforcePart4;
  Result := X3D0;
end;

procedure RegisterforceScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript28 <> nil then
    CompiledScript28.RegisterHandlers(Scene);
  if CompiledScript48 <> nil then
    CompiledScript48.RegisterHandlers(Scene);
  if CompiledScript66 <> nil then
    CompiledScript66.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript28);
  FreeAndNil(CompiledScript48);
  FreeAndNil(CompiledScript66);
end.
