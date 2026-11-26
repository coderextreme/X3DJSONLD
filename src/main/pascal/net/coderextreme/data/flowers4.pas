unit flowers4;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createflowers4: TX3DRootNode;
procedure Registerflowers4Scripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript40Script = class
  private
    Fcoordinates: array of TVector3;
    FField_coordinates: TMFVec3f;
    FDirty_coordinates: Boolean;
    FcoordIndexes: array of Int32;
    FEvent_coordIndexes: TX3DEvent;
    FBack_coordIndexes: TMFInt32;
    FDirty_coordIndexes: Boolean;
    Fe: Single;
    FField_e: TSFFloat;
    FDirty_e: Boolean;
    Ff: Single;
    FField_f: TSFFloat;
    FDirty_f: Boolean;
    Fg: Single;
    FField_g: TSFFloat;
    FDirty_g: Boolean;
    Fh: Single;
    FField_h: TSFFloat;
    FDirty_h: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AField_coordinates: TMFVec3f; const AEvent_coordIndexes: TX3DEvent; const AField_e: TSFFloat; const AField_f: TSFFloat; const AField_g: TSFFloat; const AField_h: TSFFloat);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
    procedure UpdateCoordinates(const resolution: Single; const Time: TX3DTime);
    procedure Set_fraction(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  NavigationInfo17: TNavigationInfoNode;
  Background18: TBackgroundNode;
  Transform19: TTransformNode;
  Shape20: TShapeNode;
  Appearance21: TAppearanceNode;
  Material22: TMaterialNode;
  ComposedCubeMapTexture23: TComposedCubeMapTextureNode;
  ImageTexture24: TImageTextureNode;
  ImageTexture25: TImageTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ComposedShader30: TComposedShaderNode;
  FieldVal31: TSFInt32;
  FieldVal32: TSFVec3f;
  FieldVal33: TSFFloat;
  FieldVal34: TSFFloat;
  FieldVal35: TSFFloat;
  ShaderPart36: TShaderPartNode;
  ShaderPart37: TShaderPartNode;
  IndexedFaceSet38: TIndexedFaceSetNode;
  Coordinate39: TCoordinateNode;
  Script40: TScriptNode;
  FieldVal41: TX3DEvent;
  FieldVal42: TMFVec3f;
  FieldVal43: TX3DEvent;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  FieldVal47: TSFFloat;
  CompiledScript40: TScript40Script;
  TimeSensor48: TTimeSensorNode;

constructor TScript40Script.Create(const AField_coordinates: TMFVec3f; const AEvent_coordIndexes: TX3DEvent; const AField_e: TSFFloat; const AField_f: TSFFloat; const AField_g: TSFFloat; const AField_h: TSFFloat);
begin
  inherited Create;
  Fcoordinates := 0;
  FField_coordinates := nil;
  FDirty_coordinates := False;
  FcoordIndexes := 0;
  FEvent_coordIndexes := nil;
  FBack_coordIndexes := TMFInt32.Create(nil, False, 'coordIndexes', 0);
  FDirty_coordIndexes := False;
  Fe := 0.0;
  FField_e := nil;
  FDirty_e := False;
  Ff := 0.0;
  FField_f := nil;
  FDirty_f := False;
  Fg := 0.0;
  FField_g := nil;
  FDirty_g := False;
  Fh := 0.0;
  FField_h := nil;
  FDirty_h := False;
  FField_coordinates := AField_coordinates;
  if AField_coordinates <> nil then Fcoordinates := AField_coordinates.Value;
  FEvent_coordIndexes := AEvent_coordIndexes;
  FField_e := AField_e;
  if AField_e <> nil then Fe := AField_e.Value;
  FField_f := AField_f;
  if AField_f <> nil then Ff := AField_f.Value;
  FField_g := AField_g;
  if AField_g <> nil then Fg := AField_g.Value;
  FField_h := AField_h;
  if AField_h <> nil then Fh := AField_h.Value;
end;

destructor TScript40Script.Destroy;
begin
  FreeAndNil(FBack_coordIndexes);
  inherited Destroy;
end;

procedure TScript40Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_coordinates then
  begin
    FDirty_coordinates := False;
    if FField_coordinates <> nil then
      FField_coordinates.Send(Fcoordinates, Time);
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
  if FDirty_e then
  begin
    FDirty_e := False;
    if FField_e <> nil then
      FField_e.Send(Fe, Time);
  end;
  if FDirty_f then
  begin
    FDirty_f := False;
    if FField_f <> nil then
      FField_f.Send(Ff, Time);
  end;
  if FDirty_g then
  begin
    FDirty_g := False;
    if FField_g <> nil then
      FField_g.Send(Fg, Time);
  end;
  if FDirty_h then
  begin
    FDirty_h := False;
    if FField_h <> nil then
      FField_h.Send(Fh, Time);
  end;
end;

procedure TScript40Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script40_initialize', {$ifdef FPC}@{$endif}Initialize);
  Scene.RegisterCompiledScript('Script40_set_fraction', {$ifdef FPC}@{$endif}Set_fraction);
end;

procedure TScript40Script.Initialize(Value: TX3DField; const Time: TX3DTime);
var
  resolution: Integer;
  localci: array of Int32;
  arrIndex: Integer;
  i: Integer;
  j: Integer;
begin
  resolution := 100;
  UpdateCoordinates(resolution, Time);
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

procedure TScript40Script.UpdateCoordinates(const resolution: Single; const Time: TX3DTime);
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
      rho := Fe + Ff * Cos(Fg * theta) * Cos(Fh * phi);
      localc[arrIndex := arrIndex + 1] := Vector3(rho * Cos(phi) * Cos(theta), rho * Cos(phi) * Sin(theta), rho * Sin(phi));
      theta := theta + (delta);
    end;
    phi := phi + (delta);
  end;
  Fcoordinates := localc; FDirty_coordinates := True;
end;

procedure TScript40Script.Set_fraction(Value: TX3DField; const Time: TX3DTime);
var
  choice: Integer;
  resolution: Integer;
begin
  choice := Floor(Random * 4);
  case choice of
    0:
    begin
      Fe := Fe + (Floor(Random * 2) * 2 - 1); FDirty_e := True;
    end;
    1:
    begin
      Ff := Ff + (Floor(Random * 2) * 2 - 1); FDirty_f := True;
    end;
    2:
    begin
      Fg := Fg + (Floor(Random * 2) * 2 - 1); FDirty_g := True;
    end;
    3:
    begin
      Fh := Fh + (Floor(Random * 2) * 2 - 1); FDirty_h := True;
    end;
  end;
  if Fe < 1 then
  begin
    Fe := 10; FDirty_e := True;
  end;
  if Ff < 1 then
  begin
    Ff := 10; FDirty_f := True;
  end;
  if Fg < 1 then
  begin
    Fg := 4; FDirty_g := True;
  end;
  if Fh < 1 then
  begin
    Fh := 4; FDirty_h := True;
  end;
  resolution := 100;
  UpdateCoordinates(resolution, Time);
  FlushOutputs(Time);
end;

procedure Initflowers4Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowers4.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d';
X3D0.Meta['description'] := 'an animated flower';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group16.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
Transform19.X3DName := 'transform';
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material22.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance21.Material := Material22;
ComposedCubeMapTexture23 := TComposedCubeMapTextureNode.Create;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
end;

procedure Initflowers4Part1;
begin
ComposedCubeMapTexture23.BackTexture := ImageTexture24;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture23.BottomTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture23.FrontTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture23.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture23.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture23.TopTexture := ImageTexture29;
Appearance21.Texture := ComposedCubeMapTexture23;
ComposedShader30 := TComposedShaderNode.Create;
ComposedShader30.X3DName := 'shader';
ComposedShader30.Language := slGLSL;
FieldVal31 := TSFInt32.Create(ComposedShader30, True, 'cube', 0);
ComposedShader30.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFVec3f.Create(ComposedShader30, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader30.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFFloat.Create(ComposedShader30, True, 'bias', 0.5);
ComposedShader30.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFFloat.Create(ComposedShader30, True, 'scale', 0.5);
ComposedShader30.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.Create(ComposedShader30, True, 'power', 2);
ComposedShader30.AddCustomFieldOrEvent(FieldVal35);
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart36.ShaderType := stVertex;
ComposedShader30.FdParts.Add(ShaderPart36);
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart37.ShaderType := stFragment;
ComposedShader30.FdParts.Add(ShaderPart37);
Appearance21.FdShaders.Add(ComposedShader30);
Shape20.Appearance := Appearance21;
end;

procedure Initflowers4Part2;
begin
{ <Sphere> }
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.Convex := False;
IndexedFaceSet38.X3DName := 'Orbit';
Coordinate39 := TCoordinateNode.Create;
Coordinate39.X3DName := 'OrbitCoordinates';
IndexedFaceSet38.Coord := Coordinate39;
Shape20.Geometry := IndexedFaceSet38;
Transform19.FdChildren.Add(Shape20);
Group16.FdChildren.Add(Transform19);
Script40 := TScriptNode.Create;
Script40.X3DName := 'OrbitScript';
FieldVal41 := TSFFloat.CreateEvent(Script40, 'set_fraction', True);
Script40.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TMFVec3f.CreateUndefined(Script40, True, 'coordinates');
Script40.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TMFInt32.CreateEvent(Script40, 'coordIndexes', False);
Script40.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(Script40, True, 'e', 5);
Script40.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(Script40, True, 'f', 5);
Script40.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(Script40, True, 'g', 5);
Script40.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(Script40, True, 'h', 5);
Script40.AddCustomFieldOrEvent(FieldVal47);
FreeAndNil(CompiledScript40);
CompiledScript40 := TScript40Script.Create(FieldVal42, FieldVal43, FieldVal44, FieldVal45, FieldVal46, FieldVal47);
Script40.SetUrl(['compiled:' + LineEnding +
  'initialize=Script40_initialize' + LineEnding +
  'set_fraction=Script40_set_fraction']);
Group16.FdChildren.Add(Script40);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.X3DName := 'Clock';
TimeSensor48.CycleInterval := 16;
TimeSensor48.Loop := True;
Group16.FdChildren.Add(TimeSensor48);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Group16.AddRoute(FieldVal43, IndexedFaceSet38.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.set_point }
Group16.AddRoute(FieldVal42.EventOut, Coordinate39.EventSet_point);
{ ROUTE Clock.fraction_changed TO OrbitScript.set_fraction }
end;

procedure Initflowers4Part3;
begin
Group16.AddRoute(TimeSensor48.EventFraction_changed, FieldVal41);
X3D0.AddChildren([Group16]);
end;

function Createflowers4: TX3DRootNode;
begin
  Initflowers4Part0;
  Initflowers4Part1;
  Initflowers4Part2;
  Initflowers4Part3;
  Result := X3D0;
end;

procedure Registerflowers4Scripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript40 <> nil then
    CompiledScript40.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript40);
end.
