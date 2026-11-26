unit myextrusion;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createmyextrusion: TX3DRootNode;
procedure RegistermyextrusionScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript16Script = class
  private
    Fspine: array of TVector3;
    FField_spine: TMFVec3f;
    FDirty_spine: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_spine: TMFVec3f);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_cycle(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group9: TGroupNode;
  Group10: TGroupNode;
  Shape11: TShapeNode;
  Extrusion12: TExtrusionNode;
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  TimeSensor15: TTimeSensorNode;
  Script16: TScriptNode;
  FieldVal17: TX3DEvent;
  FieldVal18: TMFVec3f;
  CompiledScript16: TScript16Script;

constructor TScript16Script.Create(const AField_spine: TMFVec3f);
begin
  inherited Create;
  Fspine := 0;
  FField_spine := nil;
  FDirty_spine := False;
  FField_spine := AField_spine;
  if AField_spine <> nil then Fspine := AField_spine.Value;
end;

destructor TScript16Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript16Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_spine then
  begin
    FDirty_spine := False;
    if FField_spine <> nil then
      FField_spine.Send(Fspine, Time);
  end;
end;

procedure TScript16Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script16_set_cycle', {$ifdef FPC}@{$endif}Set_cycle);
end;

procedure TScript16Script.Set_cycle(Value: TX3DField; const Time: TX3DTime);
var
  endA: TVector3;
  endB: TVector3;
  tmpspine: array of TVector3;
begin
  WriteLn((Value as TSFTime).Value);
  endA := Vector3(Fspine[0].X * Random * 2, Fspine[0].Y * Random * 2, Fspine[0].Z * Random * 2);
  endB := Vector3(Fspine[1].X * Random * 2, Fspine[1].Y * Random * 2, Fspine[1].Z * Random * 2);
  tmpspine := [];
  tmpspine[0] := endA;
  tmpspine[1] := endB;
  Fspine := tmpspine; FDirty_spine := True;
  FlushOutputs(Time);
end;

procedure InitmyextrusionPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['modified'] := 'November 9 2024';
X3D0.Meta['title'] := 'myextrusion.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d';
X3D0.Meta['description'] := 'beginnings of a force directed graph in 3D';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group9 := TGroupNode.Create;
Group10 := TGroupNode.Create;
Shape11 := TShapeNode.Create;
Extrusion12 := TExtrusionNode.Create;
Extrusion12.X3DName := 'myextrusion';
Extrusion12.SetSpine([Vector3(-50, -50, 0), Vector3(50, 50, 0)]);
Extrusion12.CreaseAngle := 0.785;
Extrusion12.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Shape11.Geometry := Extrusion12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0, 1, 0);
Appearance13.Material := Material14;
Shape11.Appearance := Appearance13;
Group10.FdChildren.Add(Shape11);
TimeSensor15 := TTimeSensorNode.Create;
TimeSensor15.X3DName := 'TourTime';
TimeSensor15.Loop := True;
Group10.FdChildren.Add(TimeSensor15);
Script16 := TScriptNode.Create;
Script16.X3DName := 'MoveCylinder';
FieldVal17 := TSFTime.CreateEvent(Script16, 'set_cycle', True);
Script16.AddCustomFieldOrEvent(FieldVal17);
FieldVal18 := TMFVec3f.Create(Script16, True, 'spine', [Vector3(-50, -50, 0), Vector3(50, 50, 0)]);
Script16.AddCustomFieldOrEvent(FieldVal18);
FreeAndNil(CompiledScript16);
CompiledScript16 := TScript16Script.Create(FieldVal18);
Script16.SetUrl(['compiled:' + LineEnding +
  'set_cycle=Script16_set_cycle']);
Group10.FdChildren.Add(Script16);
end;

procedure InitmyextrusionPart1;
begin
{ ROUTE TourTime.cycleTime TO MoveCylinder.set_cycle }
Group10.AddRoute(TimeSensor15.EventCycleTime, FieldVal17);
{ ROUTE MoveCylinder.spine_changed TO myextrusion.set_spine }
Group10.AddRoute(FieldVal18.EventOut, Extrusion12.EventSet_spine);
Group9.FdChildren.Add(Group10);
X3D0.AddChildren([Group9]);
end;

function Createmyextrusion: TX3DRootNode;
begin
  InitmyextrusionPart0;
  InitmyextrusionPart1;
  Result := X3D0;
end;

procedure RegistermyextrusionScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript16 <> nil then
    CompiledScript16.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript16);
end.
