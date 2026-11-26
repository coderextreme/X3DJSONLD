unit MyBounce;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateMyBounce: TX3DRootNode;
procedure RegisterMyBounceScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript14Script = class
  private
    Ftranslation_changed: TVector3;
    FEvent_translation_changed: TX3DEvent;
    FBack_translation_changed: TSFVec3f;
    FDirty_translation_changed: Boolean;
    Ftranslation: TVector3;
    FField_translation: TSFVec3f;
    FDirty_translation: Boolean;
    Fvelocity: TVector3;
    FField_velocity: TSFVec3f;
    FDirty_velocity: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_translation_changed: TX3DEvent; const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure NewBubble(const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  NavigationInfo8: TNavigationInfoNode;
  Transform9: TTransformNode;
  Shape10: TShapeNode;
  Appearance11: TAppearanceNode;
  Material12: TMaterialNode;
  Sphere13: TSphereNode;
  Script14: TScriptNode;
  FieldVal15: TX3DEvent;
  FieldVal16: TX3DEvent;
  FieldVal17: TSFVec3f;
  FieldVal18: TSFVec3f;
  FieldVal19: TX3DEvent;
  CompiledScript14: TScript14Script;
  TimeSensor20: TTimeSensorNode;

constructor TScript14Script.Create(const AEvent_translation_changed: TX3DEvent; const AField_translation: TSFVec3f; const AField_velocity: TSFVec3f);
begin
  inherited Create;
  Ftranslation_changed := Vector3(0, 0, 0);
  FEvent_translation_changed := nil;
  FBack_translation_changed := TSFVec3f.Create(nil, False, 'translation_changed', Vector3(0, 0, 0));
  FDirty_translation_changed := False;
  Ftranslation := Vector3(0, 0, 0);
  FField_translation := nil;
  FDirty_translation := False;
  Fvelocity := Vector3(0, 0, 0);
  FField_velocity := nil;
  FDirty_velocity := False;
  FEvent_translation_changed := AEvent_translation_changed;
  FField_translation := AField_translation;
  if AField_translation <> nil then Ftranslation := AField_translation.Value;
  FField_velocity := AField_velocity;
  if AField_velocity <> nil then Fvelocity := AField_velocity.Value;
end;

destructor TScript14Script.Destroy;
begin
  FreeAndNil(FBack_translation_changed);
  inherited Destroy;
end;

procedure TScript14Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_translation_changed then
  begin
    FDirty_translation_changed := False;
    if FEvent_translation_changed <> nil then
    begin
      FBack_translation_changed.Value := Ftranslation_changed;
      FEvent_translation_changed.Send(FBack_translation_changed, Time);
    end;
  end;
  if FDirty_translation then
  begin
    FDirty_translation := False;
    if FField_translation <> nil then
      FField_translation.Send(Ftranslation, Time);
  end;
  if FDirty_velocity then
  begin
    FDirty_velocity := False;
    if FField_velocity <> nil then
      FField_velocity.Send(Fvelocity, Time);
  end;
end;

procedure TScript14Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script14_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
  Scene.RegisterCompiledScript('Script14_initialize', {$ifdef FPC}@{$endif}Initialize);
end;

procedure TScript14Script.NewBubble(const Time: TX3DTime);
begin
  Ftranslation := Vector3(0, 0, 0); FDirty_translation := True;
  Fvelocity := Vector3(Random - 0.5, Random - 0.5, Random - 0.5); FDirty_velocity := True;
end;

procedure TScript14Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
begin
  Ftranslation := Vector3(Ftranslation.X + Fvelocity.X, Ftranslation.Y + Fvelocity.Y, Ftranslation.Z + Fvelocity.Z); FDirty_translation := True;
  if Abs(Ftranslation.X) > 10 then
  begin
    NewBubble(Time);
  end
  else if Abs(Ftranslation.Y) > 10 then
  begin
    NewBubble(Time);
  end
  else if Abs(Ftranslation.Z) > 10 then
  begin
    NewBubble(Time);
  end
  else
  begin
    Fvelocity := Vector3(Fvelocity.X + Random * 0.2 - 0.1, Fvelocity.Y + Random * 0.2 - 0.1, Fvelocity.Z + Random * 0.2 - 0.1); FDirty_velocity := True;
  end;
  FlushOutputs(Time);
end;

procedure TScript14Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  NewBubble(Time);
  FlushOutputs(Time);
end;

procedure InitMyBouncePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'MyBounce.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '3 prismatic spheres';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
Group7.FdChildren.Add(NavigationInfo8);
Transform9 := TTransformNode.Create;
Transform9.X3DName := 'transform';
Shape10 := TShapeNode.Create;
Appearance11 := TAppearanceNode.Create;
Material12 := TMaterialNode.Create;
Material12.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material12.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance11.Material := Material12;
Shape10.Appearance := Appearance11;
Sphere13 := TSphereNode.Create;
Shape10.Geometry := Sphere13;
Transform9.FdChildren.Add(Shape10);
Group7.FdChildren.Add(Transform9);
Script14 := TScriptNode.Create;
Script14.X3DName := 'Bounce2';
FieldVal15 := TSFVec3f.CreateEvent(Script14, 'set_translation', True);
Script14.AddCustomFieldOrEvent(FieldVal15);
FieldVal16 := TSFVec3f.CreateEvent(Script14, 'translation_changed', False);
Script14.AddCustomFieldOrEvent(FieldVal16);
FieldVal17 := TSFVec3f.Create(Script14, True, 'translation', Vector3(0, 0, 0));
Script14.AddCustomFieldOrEvent(FieldVal17);
FieldVal18 := TSFVec3f.Create(Script14, True, 'velocity', Vector3(0, 0, 0));
Script14.AddCustomFieldOrEvent(FieldVal18);
FieldVal19 := TSFTime.CreateEvent(Script14, 'set_fraction', True);
Script14.AddCustomFieldOrEvent(FieldVal19);
FreeAndNil(CompiledScript14);
CompiledScript14 := TScript14Script.Create(FieldVal16, FieldVal17, FieldVal18);
Script14.SetUrl(['compiled:' + LineEnding +
  'set_fraction=Script14_set_fraction' + LineEnding +
  'initialize=Script14_initialize']);
end;

procedure InitMyBouncePart1;
begin
Group7.FdChildren.Add(Script14);
TimeSensor20 := TTimeSensorNode.Create;
TimeSensor20.X3DName := 'TourTime';
TimeSensor20.CycleInterval := 0.15;
TimeSensor20.Loop := True;
Group7.FdChildren.Add(TimeSensor20);
{ ROUTE TourTime.cycleTime TO Bounce2.set_fraction }
Group7.AddRoute(TimeSensor20.EventCycleTime, FieldVal19);
{ ROUTE Bounce2.translation_changed TO transform.set_translation }
Group7.AddRoute(FieldVal16, Transform9.FdTranslation.EventIn);
X3D0.AddChildren([Group7]);
end;

function CreateMyBounce: TX3DRootNode;
begin
  InitMyBouncePart0;
  InitMyBouncePart1;
  Result := X3D0;
end;

procedure RegisterMyBounceScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript14 <> nil then
    CompiledScript14.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript14);
end.
