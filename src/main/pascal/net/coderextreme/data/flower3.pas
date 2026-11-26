unit flower3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createflower3: TX3DRootNode;
procedure Registerflower3Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript18Script = class
  private
    Fcoordinates: array of TVector3;
    FEvent_coordinates: TX3DEvent;
    FBack_coordinates: TMFVec3f;
    FDirty_coordinates: Boolean;
    FcoordIndexes: array of Int32;
    FEvent_coordIndexes: TX3DEvent;
    FBack_coordIndexes: TMFInt32;
    FDirty_coordIndexes: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_coordinates: TX3DEvent; const AEvent_coordIndexes: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure GenerateCoordinates(const resolution: Single; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  NavigationInfo8: TNavigationInfoNode;
  DirectionalLight9: TDirectionalLightNode;
  Background10: TBackgroundNode;
  Viewpoint11: TViewpointNode;
  Transform12: TTransformNode;
  Shape13: TShapeNode;
  Appearance14: TAppearanceNode;
  Material15: TMaterialNode;
  IndexedFaceSet16: TIndexedFaceSetNode;
  Coordinate17: TCoordinateNode;
  Script18: TScriptNode;
  FieldVal19: TX3DEvent;
  FieldVal20: TX3DEvent;
  FieldVal21: TX3DEvent;
  CompiledScript18: TScript18Script;
  TimeSensor22: TTimeSensorNode;

constructor TScript18Script.Create(const AEvent_coordinates: TX3DEvent; const AEvent_coordIndexes: TX3DEvent);
begin
  inherited Create;
  Fcoordinates := 0;
  FEvent_coordinates := nil;
  FBack_coordinates := TMFVec3f.Create(nil, False, 'coordinates', 0);
  FDirty_coordinates := False;
  FcoordIndexes := 0;
  FEvent_coordIndexes := nil;
  FBack_coordIndexes := TMFInt32.Create(nil, False, 'coordIndexes', 0);
  FDirty_coordIndexes := False;
  FEvent_coordinates := AEvent_coordinates;
  FEvent_coordIndexes := AEvent_coordIndexes;
end;

destructor TScript18Script.Destroy;
begin
  FreeAndNil(FBack_coordinates);
  FreeAndNil(FBack_coordIndexes);
  inherited Destroy;
end;

procedure TScript18Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_coordinates then
  begin
    FDirty_coordinates := False;
    if FEvent_coordinates <> nil then
    begin
      FBack_coordinates.Value := Fcoordinates;
      FEvent_coordinates.Send(FBack_coordinates, Time);
    end;
  end;
  if FDirty_coordIndexes then
  begin
    FDirty_coordIndexes := False;
    if FEvent_coordIndexes <> nil then
    begin
      FBack_coordIndexes.Value := FcoordIndexes;
      FEvent_coordIndexes.Send(FBack_coordIndexes, Time);
    end;
  end;
end;

procedure TScript18Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script18_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script18_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript18Script.Initialize(Value: TX3DField; const Time: TX3DTime);
var
  localci: array of Int32;
  arrIndex: Integer;
  i: Integer;
  j: Integer;
begin
  GenerateCoordinates(resolution, Time);
  localci := [];
  arrIndex := 0;
  for i := 0 to (resolution - 1) - 1 do
  begin
    for j := 0 to (resolution - 1) - 1 do
    begin
      localci[arrIndex := arrIndex + 1] := i * resolution + j;
      localci[arrIndex := arrIndex + 1] := i * resolution + j + 1;
      localci[arrIndex := arrIndex + 1] := i + 1 * resolution + j + 1;
      localci[arrIndex := arrIndex + 1] := i + 1 * resolution + j;
      localci[arrIndex := arrIndex + 1] := -1;
    end;
  end;
  FcoordIndexes := localci; FDirty_coordIndexes := True;
  FlushOutputs(Time);
end;

procedure TScript18Script.GenerateCoordinates(const resolution: Single; const Time: TX3DTime);
var
  theta: Single;
  phi: Single;
  delta: Single;
  localc: array of TVector3;
  arrIndex: Integer;
  i: Integer;
  j: Integer;
  rho: Single;
begin
  theta := 0.0;
  phi := 0.0;
  delta := 2 * 3.141592653 / resolution - 1;
  localc := [];
  arrIndex := 0;
  for i := 0 to (resolution) - 1 do
  begin
    for j := 0 to (resolution) - 1 do
    begin
      rho := e + f * Cos(g * theta) * Cos(h * phi);
      localc[arrIndex := arrIndex + 1] := Vector3(rho * Cos(phi) * Cos(theta), rho * Cos(phi) * Sin(theta), rho * Sin(phi));
      theta := theta + (delta);
    end;
    phi := phi + (delta);
  end;
  Fcoordinates := localc; FDirty_coordinates := True;
end;

procedure TScript18Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  choice: Integer;
begin
  t := t + (0.5);
  p := p + (0.5);
  choice := Floor(Random * 4);
  case choice of
    0:
    begin
      e := e + (Floor(Random * 2) * 2 - 1);
    end;
    1:
    begin
      f := f + (Floor(Random * 2) * 2 - 1);
    end;
    2:
    begin
      g := g + (Floor(Random * 2) * 2 - 1);
    end;
    3:
    begin
      h := h + (Floor(Random * 2) * 2 - 1);
    end;
  end;
  if f < 1 then
  begin
    f := 10;
  end;
  if g < 1 then
  begin
    g := 4;
  end;
  if h < 1 then
  begin
    h := 4;
  end;
  GenerateCoordinates(resolution, Time);
  FlushOutputs(Time);
end;

procedure Initflower3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'flower3.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d';
X3D0.Meta['description'] := 'a flower';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
Group7.FdChildren.Add(NavigationInfo8);
DirectionalLight9 := TDirectionalLightNode.Create;
DirectionalLight9.Direction := Vector3(0, -0.8, -0.2);
DirectionalLight9.Intensity := 0.5;
Group7.FdChildren.Add(DirectionalLight9);
Background10 := TBackgroundNode.Create;
Background10.SetSkyColor([Vector3(1, 1, 1)]);
Group7.FdChildren.Add(Background10);
Viewpoint11 := TViewpointNode.Create;
Viewpoint11.Description := 'One mathematical orbital';
Viewpoint11.Position := Vector3(0, 0, 50);
Group7.FdChildren.Add(Viewpoint11);
Transform12 := TTransformNode.Create;
Transform12.X3DName := 'OrbitTransform';
Transform12.Translation := Vector3(8, 0, 0);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(0, 0.5, 1);
Material15.SpecularColor := Vector3(0, 0.5, 1);
Appearance14.Material := Material15;
Shape13.Appearance := Appearance14;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IndexedFaceSet16.Convex := False;
IndexedFaceSet16.X3DName := 'Orbit';
Coordinate17 := TCoordinateNode.Create;
Coordinate17.X3DName := 'OrbitCoordinates';
IndexedFaceSet16.Coord := Coordinate17;
Shape13.Geometry := IndexedFaceSet16;
end;

procedure Initflower3Part1;
begin
Transform12.FdChildren.Add(Shape13);
Group7.FdChildren.Add(Transform12);
Script18 := TScriptNode.Create;
Script18.X3DName := 'OrbitScript';
FieldVal19 := TSFFloat.CreateEvent(Script18, 'set_fraction', True);
Script18.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TMFVec3f.CreateEvent(Script18, 'coordinates', False);
Script18.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFInt32.CreateEvent(Script18, 'coordIndexes', False);
Script18.AddCustomFieldOrEvent(FieldVal21);
{ <field accessType="inputOutput" name="e" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="f" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="g" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="h" type="SFFloat" value="5"/> }
{ <field accessType="inputOutput" name="t" type="SFFloat" value="0"/> }
{ <field accessType="inputOutput" name="p" type="SFFloat" value="0"/> }
{ <field accessType="initializeOnly" name="resolution" type="SFInt32" value="100"/> }
FreeAndNil(CompiledScript18);
CompiledScript18 := TScript18Script.Create(FieldVal20, FieldVal21);
Script18.SetUrl(['compiled:' + LineEnding +
  'initialize=Script18_initialize' + LineEnding +
  'set_fraction=Script18_set_fraction']);
Group7.FdChildren.Add(Script18);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.X3DName := 'Clock';
TimeSensor22.CycleInterval := 16;
TimeSensor22.Loop := True;
Group7.FdChildren.Add(TimeSensor22);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Group7.AddRoute(FieldVal21, IndexedFaceSet16.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.point }
Group7.AddRoute(FieldVal20, Coordinate17.point);
{ ROUTE Clock.fraction_changed TO OrbitScript.set_fraction }
Group7.AddRoute(TimeSensor22.EventFraction_changed, FieldVal19);
X3D0.AddChildren([Group7]);
end;

function Createflower3: TX3DRootNode;
begin
  Initflower3Part0;
  Initflower3Part1;
  Result := X3D0;
end;

procedure Registerflower3Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript18 <> nil then
    CompiledScript18.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript18);
end.
