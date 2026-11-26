unit geobubbles;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Creategeobubbles: TX3DRootNode;
procedure RegistergeobubblesScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript18Script = class
  private
    Fval: Single;
    FField_val: TSFFloat;
    FDirty_val: Boolean;
    Fpositions: Single;
    FField_positions: TMFVec3d;
    FDirty_positions: Boolean;
    Fposition: Single;
    FField_position: TMFVec3d;
    FDirty_position: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_val: TSFFloat; const AField_positions: TMFVec3d; const AField_position: TMFVec3d);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_cycle(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group8: TGroupNode;
  GeoViewpoint9: TGeoViewpointNode;
  Background10: TBackgroundNode;
  Transform11: TTransformNode;
  Shape12: TShapeNode;
  Sphere13: TSphereNode;
  Appearance14: TAppearanceNode;
  Material15: TMaterialNode;
  TimeSensor16: TTimeSensorNode;
  GeoPositionInterpolator17: TGeoPositionInterpolatorNode;
  Script18: TScriptNode;
  FieldVal19: TX3DEvent;
  FieldVal20: TSFFloat;
  FieldVal21: TMFVec3d;
  FieldVal22: TMFVec3d;
  CompiledScript18: TScript18Script;

constructor TScript18Script.Create(const AField_val: TSFFloat; const AField_positions: TMFVec3d; const AField_position: TMFVec3d);
begin
  inherited Create;
  Fval := 0.0;
  FField_val := nil;
  FDirty_val := False;
  Fpositions := 0;
  FField_positions := nil;
  FDirty_positions := False;
  Fposition := 0;
  FField_position := nil;
  FDirty_position := False;
  FField_val := AField_val;
  if AField_val <> nil then Fval := AField_val.Value;
  FField_positions := AField_positions;
  if AField_positions <> nil then Fpositions := AField_positions.Value;
  FField_position := AField_position;
  if AField_position <> nil then Fposition := AField_position.Value;
end;

destructor TScript18Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript18Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_val then
  begin
    FDirty_val := False;
    if FField_val <> nil then
      FField_val.Send(Fval, Time);
  end;
  if FDirty_positions then
  begin
    FDirty_positions := False;
    if FField_positions <> nil then
      FField_positions.Send(Fpositions, Time);
  end;
  if FDirty_position then
  begin
    FDirty_position := False;
    if FField_position <> nil then
      FField_position.Send(Fposition, Time);
  end;
end;

procedure TScript18Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script18_set_cycle', {$ifdef FPC}@{$endif}Set_cycle);
end;

procedure TScript18Script.Set_cycle(Value: TX3DField; const Time: TX3DTime);
var
  cartesianMult: Single;
  ov: Single;
  vc: Single;
begin
  cartesianMult := -150;
  ov := Fval;
  repeat
    Fval := Floor(Random * 2); FDirty_val := True;
    vc := Fval;
    Fpositions[vc] := Vector3Double(Round(Random * 2) * 0.0015708 * cartesianMult, Round(Random * 2) * 0.0015708 * cartesianMult, 4); FDirty_positions := True;
  until not (((Fpositions[ov][0] = Fpositions[vc][0]) and (Fpositions[ov][1] = Fpositions[vc][1])) and (Fpositions[ov][2] = Fpositions[vc][2]));
  Fposition := []; FDirty_position := True;
  Fposition[0] := Vector3Double(Fpositions[ov][0], Fpositions[ov][1], Fpositions[ov][2]); FDirty_position := True;
  Fposition[1] := Vector3Double(Fpositions[vc][0], Fpositions[vc][1], Fpositions[vc][2]); FDirty_position := True;
  FlushOutputs(Time);
end;

procedure InitgeobubblesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Geospatial'] := 1;
X3D0.Meta['title'] := 'geobubbles.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d';
X3D0.Meta['description'] := 'geo bubbles';
Group8 := TGroupNode.Create;
{ Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/ }
{ PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/ }
GeoViewpoint9 := TGeoViewpointNode.Create;
GeoViewpoint9.X3DName := 'Tour';
GeoViewpoint9.Position := Vector3Double(0, 0, 4);
GeoViewpoint9.Orientation := Vector4(1, 0, 0, 0);
GeoViewpoint9.Description := 'Tour Views';
Group8.FdChildren.Add(GeoViewpoint9);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/BK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background10.SetBottomUrl(['../resources/images/BT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background10.SetFrontUrl(['../resources/images/FR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background10.SetLeftUrl(['../resources/images/LF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background10.SetRightUrl(['../resources/images/RT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background10.SetTopUrl(['../resources/images/TP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
Group8.FdChildren.Add(Background10);
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material15.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance14.Material := Material15;
Shape12.Appearance := Appearance14;
Transform11.FdChildren.Add(Shape12);
Group8.FdChildren.Add(Transform11);
TimeSensor16 := TTimeSensorNode.Create;
end;

procedure InitgeobubblesPart1;
begin
TimeSensor16.X3DName := 'TourTime';
TimeSensor16.CycleInterval := 5;
TimeSensor16.Loop := True;
Group8.FdChildren.Add(TimeSensor16);
GeoPositionInterpolator17 := TGeoPositionInterpolatorNode.Create;
GeoPositionInterpolator17.X3DName := 'TourPosition';
GeoPositionInterpolator17.SetKey([0, 1]);
GeoPositionInterpolator17.SetKeyValue(0.0015708, 0, 4, 0, 0.0015708, 4);
Group8.FdChildren.Add(GeoPositionInterpolator17);
Script18 := TScriptNode.Create;
Script18.X3DName := 'RandomTourTime';
FieldVal19 := TSFTime.CreateEvent(Script18, 'set_cycle', True);
Script18.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TSFFloat.Create(Script18, True, 'val', 0);
Script18.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFVec3d.Create(Script18, True, 'positions', 0.0015708, 0, 4, 0, 0.0015708, 4);
Script18.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TMFVec3d.Create(Script18, True, 'position', 0.0015708, 0, 4, 0, 0.0015708, 4);
Script18.AddCustomFieldOrEvent(FieldVal22);
FreeAndNil(CompiledScript18);
CompiledScript18 := TScript18Script.Create(FieldVal20, FieldVal21, FieldVal22);
Script18.SetUrl(['compiled:' + LineEnding +
  'set_cycle=Script18_set_cycle']);
Group8.FdChildren.Add(Script18);
{ ROUTE TourTime.cycleTime TO RandomTourTime.set_cycle }
Group8.AddRoute(TimeSensor16.EventCycleTime, FieldVal19);
{ ROUTE RandomTourTime.position TO TourPosition.keyValue }
Group8.AddRoute(FieldVal22.EventOut, GeoPositionInterpolator17.keyValue);
{ ROUTE TourTime.fraction_changed TO TourPosition.set_fraction }
Group8.AddRoute(TimeSensor16.EventFraction_changed, GeoPositionInterpolator17.EventSet_fraction);
{ ROUTE TourPosition.geovalue_changed TO Tour.set_position }
Group8.AddRoute(GeoPositionInterpolator17.EventGeovalue_changed, GeoViewpoint9.EventSet_position);
X3D0.AddChildren([Group8]);
end;

function Creategeobubbles: TX3DRootNode;
begin
  InitgeobubblesPart0;
  InitgeobubblesPart1;
  Result := X3D0;
end;

procedure RegistergeobubblesScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript18 <> nil then
    CompiledScript18.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript18);
end.
